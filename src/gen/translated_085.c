#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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

/* ref: FUN_00912460 */
uint F_00912460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912470 */
uint F_00912470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912480 */
uint F_00912480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912490 */
uint F_00912490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009124a0 */
byte F_009124a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9124a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009124d0 */
uint F_009124d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9124d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009124f0 */
uint F_009124f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9124f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00912530 */
uint F_00912530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00912550 */
byte F_00912550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009125a0 */
uint F_009125a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9125a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_009125c0 */
byte F_009125c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9125c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00912620 */
uint F_00912620(unsigned int gen_a0)
{
  GEN_ENTER(0x912620u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00912630 */
uint F_00912630(unsigned int gen_a0)
{
  GEN_ENTER(0x912630u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00912660 */
uint F_00912660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_00912690 */
uint F_00912690(unsigned int gen_a0)
{
  GEN_ENTER(0x912690u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009126a0 */
uint F_009126a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9126a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009126d0 */
uint F_009126d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9126d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_00912710 */
uint F_00912710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00912730 */
byte F_00912730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00912770 */
uint F_00912770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00912790 */
byte F_00912790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009127c0 */
uint F_009127c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9127c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*param_1)(param_3,param_4);
  return uVar1;
}

/* ref: FUN_00912800 */
uint F_00912800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912800u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x140,0x137);
  return (uint)uVar1;
}

/* ref: FUN_00912840 */
uint F_00912840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x137);
  return (uint)uVar1;
}

/* ref: FUN_00912880 */
uint F_00912880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,400);
  return (uint)uVar1;
}

/* ref: FUN_009128b0 */
uint F_009128b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9128b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_00912910 */
uint F_00912910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,400);
  return (uint)uVar1;
}

/* ref: FUN_00912970 */
uint F_00912970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,400);
  return (uint)uVar1;
}

/* ref: FUN_00912990 */
uint F_00912990(unsigned int gen_a0)
{
  GEN_ENTER(0x912990u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009129c0 */
uint F_009129c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9129c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,400);
  return uVar1;
}

/* ref: FUN_009129f0 */
uint F_009129f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9129f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00912a20 */
uint F_00912a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912a20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_00912a50 */
uint F_00912a50(unsigned int gen_a0)
{
  GEN_ENTER(0x912a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00912a70 */
uint F_00912a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912a70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_00912ab0 */
uint F_00912ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912ab0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_00912ae0 */
uint F_00912ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912ae0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00912b20 */
uint F_00912b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912b20u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00912b40 */
uint F_00912b40(unsigned int gen_a0)
{
  GEN_ENTER(0x912b40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x25;
}

/* ref: FUN_00912b50 */
uint F_00912b50(unsigned int gen_a0)
{
  GEN_ENTER(0x912b50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00912b60 */
uint F_00912b60(unsigned int gen_a0)
{
  GEN_ENTER(0x912b60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00912b70 */
uint F_00912b70(unsigned int gen_a0)
{
  GEN_ENTER(0x912b70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00912b80 */
uint F_00912b80(unsigned int gen_a0)
{
  GEN_ENTER(0x912b80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00912b90 */
uint F_00912b90(unsigned int gen_a0)
{
  GEN_ENTER(0x912b90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x25);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x25);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00912bb0 */
uint F_00912bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x912bb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00912bc0 */
uint F_00912bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x912bc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00912bd0 */
uint F_00912bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x912bd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00912be0 */
uint F_00912be0(unsigned int gen_a0)
{
  GEN_ENTER(0x912be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00912bf0 */
uint F_00912bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x912bf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00912c00 */
uint F_00912c00(unsigned int gen_a0)
{
  GEN_ENTER(0x912c00u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00912c20 */
uint F_00912c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912c30 */
uint F_00912c30(unsigned int gen_a0)
{
  GEN_ENTER(0x912c30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x71;
}

/* ref: FUN_00912c40 */
uint F_00912c40(unsigned int gen_a0)
{
  GEN_ENTER(0x912c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00912c50 */
uint F_00912c50(unsigned int gen_a0)
{
  GEN_ENTER(0x912c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00912c60 */
uint F_00912c60(unsigned int gen_a0)
{
  GEN_ENTER(0x912c60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00912c70 */
uint F_00912c70(unsigned int gen_a0)
{
  GEN_ENTER(0x912c70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00912c80 */
uint F_00912c80(unsigned int gen_a0)
{
  GEN_ENTER(0x912c80u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x71);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x71);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00912ca0 */
uint F_00912ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912cd0 */
uint F_00912cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x912cd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00912cf0 */
uint F_00912cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912d40 */
uint F_00912d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_00912db0 */
uint F_00912db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00912e10 */
uint F_00912e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,400);
  return (uint)uVar1;
}

/* ref: FUN_00912e70 */
uint F_00912e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x34,400);
  return (uint)uVar1;
}

/* ref: FUN_00912ed0 */
uint F_00912ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x58,400);
  return (uint)uVar1;
}

/* ref: FUN_00912f20 */
uint F_00912f20(unsigned int gen_a0)
{
  GEN_ENTER(0x912f20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00912f30 */
uint F_00912f30(unsigned int gen_a0)
{
  GEN_ENTER(0x912f30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00912f40 */
uint F_00912f40(unsigned int gen_a0)
{
  GEN_ENTER(0x912f40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00912f50 */
uint F_00912f50(unsigned int gen_a0)
{
  GEN_ENTER(0x912f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00912f60 */
uint F_00912f60(unsigned int gen_a0)
{
  GEN_ENTER(0x912f60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00912f90 */
uint F_00912f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00912fe0 */
uint F_00912fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912fe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,400);
  return uVar1;
}

/* ref: FUN_00913000 */
uint F_00913000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,400);
  return (uint)uVar1;
}

/* ref: FUN_00913030 */
uint F_00913030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_00913080 */
uint F_00913080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913080u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_009130b0 */
uint F_009130b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9130b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_00913120 */
uint F_00913120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 200,400);
  return (uint)uVar1;
}

/* ref: FUN_00913160 */
uint F_00913160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_00913190 */
uint F_00913190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_009131e0 */
uint F_009131e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9131e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,400);
  return (uint)uVar1;
}

/* ref: FUN_00913210 */
uint F_00913210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913210u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_00913240 */
uint F_00913240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_009132b0 */
uint F_009132b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9132b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xd,400);
  return (uint)uVar1;
}

/* ref: FUN_00913310 */
uint F_00913310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 3,400);
  return (uint)uVar1;
}

/* ref: FUN_00913370 */
uint F_00913370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x60,400);
  return (uint)uVar1;
}

/* ref: FUN_009133d0 */
uint F_009133d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9133d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,400);
  return (uint)uVar1;
}

/* ref: FUN_00913430 */
uint F_00913430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,400);
  return (uint)uVar1;
}

/* ref: FUN_009134a0 */
uint F_009134a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9134a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_009134d0 */
uint F_009134d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9134d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009134e0 */
uint F_009134e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9134e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00913510 */
uint F_00913510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x110,400);
  return (uint)uVar1;
}

/* ref: FUN_00913540 */
uint F_00913540(unsigned int gen_a0)
{
  GEN_ENTER(0x913540u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00913570 */
uint F_00913570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913570u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_009135a0 */
uint F_009135a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9135a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009135d0 */
uint F_009135d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9135d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,400);
  return uVar1;
}

/* ref: FUN_00913600 */
uint F_00913600(unsigned int gen_a0)
{
  GEN_ENTER(0x913600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00913630 */
uint F_00913630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913630u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xbc,param_2,400);
  return uVar1;
}

/* ref: FUN_00913660 */
uint F_00913660(unsigned int gen_a0)
{
  GEN_ENTER(0x913660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00913690 */
uint F_00913690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913690u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,400);
  return uVar1;
}

/* ref: FUN_009136c0 */
uint F_009136c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9136c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009136f0 */
uint F_009136f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9136f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x6c,param_2,400);
  return uVar1;
}

/* ref: FUN_00913710 */
uint F_00913710(unsigned int gen_a0)
{
  GEN_ENTER(0x913710u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00913740 */
uint F_00913740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913740u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 100,param_2,400);
  return uVar1;
}

/* ref: FUN_00913760 */
uint F_00913760(unsigned int gen_a0)
{
  GEN_ENTER(0x913760u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00913790 */
uint F_00913790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913790u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,400);
  return uVar1;
}

/* ref: FUN_009137f0 */
uint F_009137f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9137f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xd4,400);
  return (uint)uVar1;
}

/* ref: FUN_00913880 */
uint F_00913880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,400);
  return (uint)uVar1;
}

/* ref: FUN_009138f0 */
uint F_009138f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9138f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,400);
  return (uint)uVar1;
}

/* ref: FUN_00913950 */
uint F_00913950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_009139b0 */
uint F_009139b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9139b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_00913a10 */
uint F_00913a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913a10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_00913a70 */
uint F_00913a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_00913ad0 */
uint F_00913ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,400);
  return (uint)uVar1;
}

/* ref: FUN_00913b60 */
uint F_00913b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00913bc0 */
uint F_00913bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,400);
  return (uint)uVar1;
}

/* ref: FUN_00913c20 */
uint F_00913c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,400);
  return (uint)uVar1;
}

/* ref: FUN_00913c90 */
uint F_00913c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913c90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_00913cf0 */
uint F_00913cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_00913d20 */
uint F_00913d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x913d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00913d50 */
uint F_00913d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00913da0 */
uint F_00913da0(unsigned int gen_a0)
{
  GEN_ENTER(0x913da0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00913db0 */
uint F_00913db0(unsigned int gen_a0)
{
  GEN_ENTER(0x913db0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00913dc0 */
uint F_00913dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x913dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00913dd0 */
uint F_00913dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x913dd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00913de0 */
uint F_00913de0(unsigned int gen_a0)
{
  GEN_ENTER(0x913de0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00913e10 */
uint F_00913e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,400);
  return (uint)uVar1;
}

/* ref: FUN_00913e70 */
uint F_00913e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_00913ee0 */
uint F_00913ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_00913f10 */
uint F_00913f10(unsigned int gen_a0)
{
  GEN_ENTER(0x913f10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00913f20 */
uint F_00913f20(unsigned int gen_a0)
{
  GEN_ENTER(0x913f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00913f30 */
uint F_00913f30(unsigned int gen_a0)
{
  GEN_ENTER(0x913f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00913f40 */
uint F_00913f40(unsigned int gen_a0)
{
  GEN_ENTER(0x913f40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00913f50 */
uint F_00913f50(unsigned int gen_a0)
{
  GEN_ENTER(0x913f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00913f80 */
uint F_00913f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913f80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00913ff0 */
uint F_00913ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x913ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc0,400);
  return (uint)uVar1;
}

/* ref: FUN_009140e0 */
uint F_009140e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9140e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00914110 */
uint F_00914110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x914110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00914140 */
uint F_00914140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x914140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00914170 */
uint F_00914170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x914170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009141a0 */
uint F_009141a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9141a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_009141b0 */
uint F_009141b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9141b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009141c0 */
uint F_009141c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9141c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009141d0 */
uint F_009141d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9141d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009141e0 */
uint F_009141e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9141e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00914210 */
uint F_00914210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x914210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00914250 */
uint F_00914250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x914250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00914260 */
uint F_00914260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x914260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00914290 */
uint F_00914290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x914290u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_009142d0 */
uint F_009142d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9142d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009142f0 */
uint F_009142f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9142f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00914310 */
uint F_00914310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x914310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00914330 */
uint F_00914330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x914330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00914340 */
uint F_00914340(unsigned int gen_a0)
{
  GEN_ENTER(0x914340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00914350 */
uint F_00914350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x914350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00914360 */
uint F_00914360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x914360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

