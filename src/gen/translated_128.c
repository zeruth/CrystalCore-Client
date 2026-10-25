#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandleFactory::vf1 */
uint F_00b51cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb51cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050cb10(this_00,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0644));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandle::vf15 */
uint F_00b51d10(void)
{
  GEN_ENTER(0xb51d10u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandle::vf0 */
uint F_00b51d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb51d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0644));
  F_005082e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b51d50 */
uint F_00b51d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb51d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050cb10(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[44])REFP(0x10f0744));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandle::vf16 */
uint F_00b51d90(void)
{
  GEN_ENTER(0xb51d90u, 0u, 0u, 0u, 0u);
  return 0x10f06f8;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandleFactory::vf1 */
uint F_00b51db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb51db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050cb10(this_00,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0744));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_00b51e00 */
byte F_00b51e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb51e00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort * puVar1;
  uint uVar2;
  
  puVar1 = ((ushort *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]))));
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffff;
  uVar2 = F_00b51e30(puVar1 + 1,(uint)*puVar1,&(*(uint *)&gen_args[1]));
  return uVar2 != 0xffffffff;
}

/* ref: FUN_00b51e30 */
uint F_00b51e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb51e30u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort * puVar5;
  int iVar6;
  
  uVar3 = param_2 - 1;
  uVar1 = *param_3;
  iVar6 = 0;
  if ((*param_1 <= uVar1) && (uVar2 = uVar3, uVar4 = uVar3, uVar1 <= param_1[uVar3])) {
    while (4 < uVar2) {
      uVar3 = uVar3 >> 1;
      if (uVar1 == param_1[uVar3]) {
        return uVar3;
      }
      if (uVar1 < param_1[uVar3]) {
        uVar4 = uVar3 - 1;
      }
      else {
        iVar6 = uVar3 + 1;
      }
      uVar3 = uVar4 + iVar6;
      uVar2 = uVar4 - iVar6;
    }
    uVar3 = 0;
    puVar5 = param_1 + iVar6;
    do {
      if (uVar1 == *puVar5) {
        return uVar3 + iVar6;
      }
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar3 <= uVar2);
  }
  return 0xffffffff;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandle::vf15 */
uint F_00b51eb0(void)
{
  GEN_ENTER(0xb51eb0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandle::vf0 */
uint F_00b51ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb51ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0744));
  F_005082e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b51ef0 */
uint F_00b51ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb51ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050cb10(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f083c))
  ;
  F_00b89bc0((int)this + 0xa0);
  return (uint)this;
}

/* ref: FUN_00b51f30 */
uint F_00b51f30(unsigned int gen_a0)
{
  GEN_ENTER(0xb51f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f083c))
  ;
  F_00b89d00((undefined *)((int)this + 0xa0));
  uVar1 = F_005082e0(this);
  return uVar1;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf16 */
uint F_00b51f50(void)
{
  GEN_ENTER(0xb51f50u, 0u, 0u, 0u, 0u);
  return 0x10f07f4;
}

/* ref: FUN_00b51f60 */
uint F_00b51f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb51f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b89cc0((undefined *)((int)this + 0xa0),param_1);
  return uVar1;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandleFactory::vf1 */
uint F_00b51f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb51f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xc0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050cb10(this_00,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f083c));
    F_00b89bc0(this_00 + 0x28);
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf33 */
uint F_00b51ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb51ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pAVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  if (param_2 == 1) {
    pAVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pAVar1;
    *(int *)pAVar1 = *(int *)pAVar1;
    UNLOCK();
    if (iVar2 != 3) {
      iVar2 = *(int *)(this + 0xa0);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
      ((code *)*(gen_code32 *)(iVar2 + 4))(this + 0xa0,uVar3);
      piVar4 = *(int * PTR32 *)(this + 0x98);
      if (piVar4 != (int *)0x0) {
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4)));
        ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      param_2 = 1;
    }
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf15 */
uint F_00b52070(void)
{
  GEN_ENTER(0xb52070u, 0u, 0u, 0u, 0u);
  return 0xc0;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf17 */
uint F_00b52080(unsigned int gen_a0)
{
  GEN_ENTER(0xb52080u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf18 */
uint F_00b52090(void)
{
  GEN_ENTER(0xb52090u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf25 */
unsigned int F_00b520a0(void)
{
  GEN_ENTER(0xb520a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf28 */
unsigned int F_00b520b0(void)
{
  GEN_ENTER(0xb520b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandle::vf0 */
uint F_00b520c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb520c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f083c));
  F_00b89d00(this + 0xa0);
  F_005082e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandle::vf16 */
uint F_00b52110(void)
{
  GEN_ENTER(0xb52110u, 0u, 0u, 0u, 0u);
  return 0x10f08ec;
}

/* ref: FUN_00b52130 */
uint F_00b52130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb52130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050cb10(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f092c));
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandle::vf25 */
unsigned int F_00b521b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb521b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)(this + 0xb4) = 0;
  F_004ff870((undefined *)this);
  return 0;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandle::vf33 */
uint F_00b521c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb521c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pBVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 1) {
    pBVar1 = this + 0x88;
    LOCK();
    iVar2 = *(int *)pBVar1;
    *(int *)pBVar1 = *(int *)pBVar1;
    UNLOCK();
    if (iVar2 != 3) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
      F_00bcc710(this + 0xa0,uVar3);
      if (((byte)this[0xa4] & 1) != 0) {
        F_00bcc840(this + 0xb8,*(int *)(this + 0xa8) + uVar3,*(undefined4 *)(this + 0xa0));
      }
      if ((*(uint *)(this + 0xa4) >> 1 & 1) != 0) {
        F_00bcc740(this + 0xb0,*(int *)(this + 0xac) + uVar3,*(undefined4 *)(this + 0xa0));
      }
      return 1;
    }
  }
  *(undefined4 *)(this + 0xb8) = 0;
  this[0xbc] = (undefined1)0x0;
  *(undefined4 *)(this + 0xb0) = 0;
  return param_2;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandleFactory::vf1 */
uint F_00b52270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb52270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xd4,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b52130(this_00,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandle::vf15 */
uint F_00b52350(void)
{
  GEN_ENTER(0xb52350u, 0u, 0u, 0u, 0u);
  return 0xd4;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandle::vf0 */
uint F_00b52360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb52360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f092c));
  F_005082e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b52390 */
uint F_00b52390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb52390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050cb10(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0a1c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ControlPointResourceHandle::vf16 */
uint F_00b523d0(void)
{
  GEN_ENTER(0xb523d0u, 0u, 0u, 0u, 0u);
  return 0x10f09dc;
}

/* ref: Client::System::Resource::Handle::ControlPointResourceHandleFactory::vf1 */
uint F_00b523e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb523e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050cb10(this_00,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0a1c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ControlPointResourceHandle::vf15 */
uint F_00b52430(void)
{
  GEN_ENTER(0xb52430u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ControlPointResourceHandle::vf0 */
uint F_00b52440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb52440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0a1c));
  F_005082e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b52470 */
uint F_00b52470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb52470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050cb10(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0b0c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CameraShakeResourceHandle::vf16 */
uint F_00b524b0(void)
{
  GEN_ENTER(0xb524b0u, 0u, 0u, 0u, 0u);
  return 0x10f0acc;
}

/* ref: Client::System::Resource::Handle::CameraShakeResourceHandleFactory::vf1 */
uint F_00b524c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb524c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050cb10(this_00,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0b0c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::CameraShakeResourceHandle::vf15 */
uint F_00b52510(void)
{
  GEN_ENTER(0xb52510u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::CameraShakeResourceHandle::vf0 */
uint F_00b52520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb52520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0b0c));
  F_005082e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b52550 */
uint F_00b52550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb52550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050cb10(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0bfc));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::FontdataResourceHandle::vf16 */
uint F_00b52590(void)
{
  GEN_ENTER(0xb52590u, 0u, 0u, 0u, 0u);
  return 0x10f0bbc;
}

/* ref: Client::System::Resource::Handle::FontdataResourceHandleFactory::vf1 */
uint F_00b525a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb525a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050cb10(this_00,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0bfc));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::FontdataResourceHandle::vf15 */
uint F_00b525f0(void)
{
  GEN_ENTER(0xb525f0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::FontdataResourceHandle::vf0 */
uint F_00b52600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb52600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0bfc));
  F_005082e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b52630 */
uint F_00b52630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb52630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050cb10(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0cec));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::GaijiFontdataResourceHandle::vf16 */
uint F_00b52670(void)
{
  GEN_ENTER(0xb52670u, 0u, 0u, 0u, 0u);
  return 0x10f0cac;
}

/* ref: Client::System::Resource::Handle::GaijiFontdataResourceHandleFactory::vf1 */
uint F_00b52680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb52680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050cb10(this_00,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x10f0cec));
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::GaijiFontdataResourceHandle::vf15 */
uint F_00b526d0(void)
{
  GEN_ENTER(0xb526d0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::GaijiFontdataResourceHandle::vf0 */
uint F_00b526e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb526e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10f0cec));
  F_005082e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b52710 */
uint F_00b52710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb52710u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_3 = param_3 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0e18) + (((int)*param_1 ^ param_3) & 0xff) * 4);
    param_1 = param_1 + 1;
  }
  return param_3;
}

/* ref: FUN_00b52740 */
uint F_00b52740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb52740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  return (param_3 * 3 + 0x87) * 4 + -0x10 + (param_2 + param_4) * 8;
}

/* ref: FUN_00b52760 */
uint F_00b52760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb52760u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + (param_1 + 1) * 9) * 4;
}

/* ref: FUN_00b527c0 */
unsigned int F_00b527c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb527c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0x54) != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x6c);
    while (*piVar2 != param_1) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(uint *)((int)this + 0x54) <= uVar1) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x78) + uVar1 * 4))) = param_2;
  }
  return 0;
}

/* ref: FUN_00b52800 */
unsigned int F_00b52800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb52800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0;
  for (iVar3 = (int)pcVar2 - (int)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar7 = uVar7 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0e18) + (((int)*param_1 ^ uVar7) & 0xff) * 4);
    param_1 = param_1 + 1;
  }
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0;
  for (iVar3 = (int)pcVar2 - (int)(param_2 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar5 = uVar5 >> 8 ^ *(uint *)(&REFG(undefined, 0x10f0e18) + (((int)*param_2 ^ uVar5) & 0xff) * 4);
    param_2 = param_2 + 1;
  }
  uVar4 = 0;
  if (*(uint *)((int)this + 0x54) != 0) {
    puVar6 = *(uint * PTR32 *)((int)this + 0x6c);
    while (*puVar6 != uVar7) {
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
      if (*(uint *)((int)this + 0x54) <= uVar4) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((*(int *)((int)this + 0x78) + uVar4 * 4))) = uVar5;
  }
  return 0;
}

/* ref: FUN_00b528a0 */
uint F_00b528a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb528a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0x4c) != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 100);
    do {
      if (*piVar2 == param_1) {
        return (*(int * PTR32 *)((int)this + 100))[uVar1 * 3 + 1];
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(uint *)((int)this + 0x4c));
  }
  return 0xffffffff;
}

/* ref: FUN_00b528e0 */
uint F_00b528e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb528e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0x50) != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x68);
    do {
      if (*piVar2 == param_1) {
        return (*(int * PTR32 *)((int)this + 0x68))[uVar1 * 3 + 1];
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(uint *)((int)this + 0x50));
  }
  return 0xffffffff;
}

/* ref: FUN_00b52920 */
uint F_00b52920(unsigned int gen_a0)
{
  GEN_ENTER(0xb52920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)(iVar1 + 0x58);
  iVar5 = *(int *)((int)this + 0x20);
  iVar3 = *(int *)(iVar1 + 0x54);
  iVar1 = *(int *)(iVar1 + 0x5c);
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (iVar3 != 0) {
    (*(uint *)(gen_frame + 0x8)) = F_00b53c90(iVar5,iVar3);
    iVar5 = iVar5 + iVar3 * 4;
  }
  if (iVar2 != 0) {
    (*(uint *)(gen_frame + 0xc)) = F_00b53c90(iVar5,iVar2);
    iVar5 = iVar5 + iVar2 * 4;
  }
  if (iVar1 != 0) {
    (*(uint *)(gen_frame + 0x10)) = F_00b53c90(iVar5,iVar1);
    iVar5 = iVar5 + iVar1 * 4;
  }
  (*(uint *)(gen_frame + 0x14)) = F_00b53c90(iVar5,2);
  uVar4 = F_00b53c90(&(*(uint *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar4;
}

/* ref: FUN_00b52a00 */
uint F_00b52a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb52a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 * puVar4;
  int * piVar5;
  int iVar6;
  uint local_c;
  undefined * local_8;
  
  iVar1 = REFG(int, 0x1370b90);
  iVar6 = param_2[1];
  local_8 = (undefined *)0x0;
  if (iVar6 != 0) {
    if ((char)param_1 == '\0') {
      local_8 = (undefined *)F_004dcc00(*param_2 + param_4,iVar6,(uint)*(ushort *)(param_2 + 2),
                                     (uint)*(ushort *)((int)param_2 + 10),0);
    }
    else {
      local_8 = (undefined *)F_004dcb70(*param_2 + param_4,iVar6,(uint)*(ushort *)(param_2 + 2),
                                     (uint)*(ushort *)((int)param_2 + 10),0);
    }
  }
  uVar2 = F_004d5900(local_8);
  local_c = 0;
  if ((short)param_2[2] != 0) {
    puVar4 = (undefined2 *)(uVar2 + 2);
    piVar5 = (int *)(param_3 + 4);
    do {
      if ((uVar2 != 0) && (piVar5[1] != 0)) {
        uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar1 + 0x1c),*piVar5 + param_5);
        *(uint *)(puVar4 + 1) = uVar3;
        puVar4[-1] = (short)piVar5[2];
        *puVar4 = *(undefined2 *)((int)piVar5 + 10);
      }
      local_c = local_c + 1;
      piVar5 = piVar5 + 4;
      puVar4 = puVar4 + 4;
    } while (local_c < *(ushort *)(param_2 + 2));
  }
  F_004d6ba0(local_8);
  uVar2 = F_004d5910(local_8);
  local_c = 0;
  if (*(short *)((int)param_2 + 10) != 0) {
    puVar4 = (undefined2 *)(uVar2 + 2);
    do {
      if ((uVar2 != 0) &&
         (iVar6 = param_3 + (*(ushort *)(param_2 + 2) + local_c) * 0x10, *(int *)(iVar6 + 8) != 0))
      {
        uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar1 + 0x20),*(int *)(iVar6 + 4) + param_5);
        *(uint *)(puVar4 + 1) = uVar3;
        puVar4[-1] = *(undefined2 *)(iVar6 + 0xc);
        *puVar4 = *(undefined2 *)(iVar6 + 0xe);
      }
      local_c = local_c + 1;
      puVar4 = puVar4 + 4;
    } while (local_c < *(ushort *)((int)param_2 + 10));
  }
  F_004d5920(local_8);
  return (uint)local_8;
}

/* ref: FUN_00b52b40 */
uint F_00b52b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb52b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int * PTR32 *)((int)this + 4) != param_1) {
    if (*(int * PTR32 *)((int)this + 4) != (int *)0x0) {
      if (*(int *)((int)this + 8) != 0) {
        F_00406b30(*(int *)((int)this + 8));
        *(undefined4 *)((int)this + 8) = 0;
      }
      *(undefined4 *)((int)this + 0xc) = 0;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xc))))(*(int * PTR32 *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    if (param_1 != (int *)0x0) {
      if (param_1[0x16] != 0) {
        lVar2 = (ulonglong)(uint)param_1[0x16] * 4;
        uVar3 = F_00406bb0(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,0,0);
        *(uint *)((int)this + 8) = uVar3;
        if (*(int *)((int)this + 8) == 0) goto LAB_00b52bc9;
      }
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
      *(int * PTR32 *)((int)this + 4) = param_1;
    }
  }
LAB_00b52bc9: ;
  iVar1 = *(int *)((int)this + 4);
  uVar3 = 0;
  if (iVar1 != 0) {
    F_00c46aa0(*(undefined4 *)((int)this + 8),*(undefined4 *)(iVar1 + 0x7c),
               *(int *)(iVar1 + 0x58) * 4);
    iVar1 = *(int *)((int)this + 4);
    uVar3 = 0;
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar1 + 0x80);
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x84);
      uVar3 = *(uint *)(iVar1 + 0x88);
      *(uint *)((int)this + 0x14) = uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00b52c10 */
unsigned int F_00b52c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb52c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    *(int * PTR32 *)((int)this + 4) = param_1;
    if (param_1[0x16] != 0) {
      uVar2 = F_00667cd0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) +
                                     0x1a8))),param_1[0x16] * 4);
      *(uint *)((int)this + 8) = uVar2;
      if (uVar2 == 0) {
        return 0;
      }
    }
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00c46aa0(*(undefined4 *)((int)this + 8),*(undefined4 *)(iVar1 + 0x7c),
                 *(int *)(iVar1 + 0x58) * 4);
    }
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar1 + 0x80);
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x84);
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar1 + 0x88);
    }
  }
  return 0;
}

/* ref: FUN_00b52cb0 */
uint F_00b52cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb52cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    if (*(int *)((int)this + 8) != 0) {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
      *(int *)(iVar1 + 0x28) = *(int *)((int)this + 8) - *(int *)(iVar1 + 0x24);
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xc))))(*(int * PTR32 *)((int)this + 4));
    return uVar2;
  }
  return in_EAX;
}

/* ref: FUN_00b52cf0 */
uint F_00b52cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb52cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((param_1 == (int *)0x0) || (param_2 < 0x18)) {
    return 0;
  }
  *param_3 = *(char *)((int)param_1 + 7) == '\0';
  *(undefined1 *)((int)param_1 + 7) = 0;
  if ((*param_1 == REFG(int, 0x10f0df4)) && (param_1[1] == REFG(int, 0x10f0df8))) {
    if ((param_1[2] == *(int *)REFG(undefined * PTR32, 0x133ab88)) && (param_1[3] == param_2)) {
      uVar1 = F_00b52a00((uint)*param_3,param_1 + 6,param_1 + 9,param_1[4] + (int)param_1,
                           param_1[5] + (int)param_1,param_4);
      return uVar1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00b52d80 */
byte F_00b52d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb52d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 0) {
    return 0;
  }
  F_00b52b40(this,param_1);
  return 1;
}

/* ref: FUN_00b52db0 */
uint F_00b52db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb52db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  if (*(undefined * PTR32 *)(param_1 + 4) != this) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x58);
  if ((iVar1 == 0) || (*(int *)(param_1 + 8) != 0)) {
    if (*(int *)((int)this + 0x54) == 0) {
      ((int *)(gen_frame + 0x0))[2] = 0;
    }
    else {
      ((int *)(gen_frame + 0x0))[2] = F_00b53c90(*(undefined4 *)((int)this + 0x78),*(int *)((int)this + 0x54));
    }
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00b53c90(*(undefined4 *)(param_1 + 8),iVar1);
    }
    if (*(int *)((int)this + 0x5c) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00b53c90(*(undefined4 *)(param_1 + 0xc),*(int *)((int)this + 0x5c));
    }
    ((int *)(gen_frame + 0x0))[1] = 0;
    uVar4 = F_00b53c90(param_1 + 0x10,2);
    ((int *)(gen_frame + 0x0))[0] = uVar4 * 0x745f + uVar3 * 0x3e0 + uVar2 * 0x1f + uVar3 * -0x1f + ((int *)(gen_frame + 0x0))[2];
    piVar5 = (int *)F_00b54060((undefined *)((int)this + 0x90),((int *)(gen_frame + 0x0)));
    if (piVar5 != (int *)0x0) {
      ((int *)(gen_frame + 0x0))[0] = *piVar5;
      return piVar5[1];
    }
  }
  return 0;
}

/* ref: FUN_00b52ea0 */
byte F_00b52ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb52ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  byte local_5;
  
  piVar4 = *(int * PTR32 *)((int)this + 8);
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  local_5 = 1;
  if (piVar4 == piVar1) {
    return 1;
  }
  piVar7 = piVar4 + 4;
  do {
    piVar6 = piVar7 + 3;
    if (piVar6 != piVar1) {
      do {
        if (*piVar4 == *piVar6) {
          if (piVar7[-3] == piVar6[1]) {
            piVar1 = (int *)piVar7[-1];
            piVar5 = (int *)piVar6[3];
            uVar2 = *piVar7 - (int)piVar1;
            if (uVar2 == piVar6[4] - (int)piVar5) {
              for (; 3 < uVar2; uVar2 = uVar2 - 4) {
                if (*piVar1 != *piVar5) goto LAB_00b52f48;
                piVar5 = piVar5 + 1;
                piVar1 = piVar1 + 1;
              }
              if ((uVar2 == 0) ||
                 (((char)*piVar5 == (char)*piVar1 &&
                  ((uVar2 < 2 ||
                   ((*(char *)((int)piVar5 + 1) == *(char *)((int)piVar1 + 1) &&
                    ((uVar2 < 3 || (*(char *)((int)piVar5 + 2) == *(char *)((int)piVar1 + 2)))))))))
                 )) goto LAB_00b5306c;
            }
          }
LAB_00b52f48: ;
          local_5 = 0;
          if ((char)param_1 != '\0') {
            F_00c5181b("ERROR: CRC32 Collision %08X\n",*piVar4);
            F_00c5181b("  %08X ",piVar7[-3]);
            iVar3 = piVar7[-1];
            uVar2 = 0;
            if (*piVar7 != iVar3) {
              do {
                F_00c5181b(" %02X",(int)*(char *)(iVar3 + uVar2));
                iVar3 = piVar7[-1];
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(*piVar7 - iVar3));
            }
            F_00c5181b("  ");
            iVar3 = piVar7[-1];
            uVar2 = 0;
            if (*piVar7 != iVar3) {
              do {
                F_00c5181b(&REFG(undefined, 0x10f0dd0),(int)*(char *)(iVar3 + uVar2));
                iVar3 = piVar7[-1];
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(*piVar7 - iVar3));
            }
            F_00c5181b("\n");
            F_00c5181b("  %08X ",piVar6[1]);
            iVar3 = piVar6[3];
            uVar2 = 0;
            if (piVar6[4] != iVar3) {
              do {
                F_00c5181b(" %02X",(int)*(char *)(iVar3 + uVar2));
                iVar3 = piVar6[3];
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(piVar6[4] - iVar3));
            }
            F_00c5181b("  ");
            iVar3 = piVar6[3];
            uVar2 = 0;
            if (piVar6[4] != iVar3) {
              do {
                F_00c5181b(&REFG(undefined, 0x10f0dec),(int)*(char *)(iVar3 + uVar2));
                iVar3 = piVar6[3];
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(piVar6[4] - iVar3));
            }
            F_00c5181b("\n");
          }
        }
LAB_00b5306c: ;
        piVar6 = piVar6 + 7;
      } while (piVar6 != *(int * PTR32 *)((int)this + 0xc));
    }
    piVar1 = *(int * PTR32 *)((int)this + 0xc);
    piVar4 = piVar4 + 7;
    piVar7 = piVar7 + 7;
    if (piVar4 == piVar1) {
      return local_5;
    }
  } while( true );
}

/* ref: FUN_00b530b0 */
uint F_00b530b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb530b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10f1244));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f122c));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1234));
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f123c));
  F_00b544b0((undefined *)((int)this + 0x8c));
  return (uint)this;
}

/* ref: FUN_00b53110 */
uint F_00b53110(unsigned int gen_a0)
{
  GEN_ENTER(0xb53110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10f1244));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1224));
  F_00b547b0((undefined *)((int)this + 0x90));
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f123c));
  iVar1 = *(int *)((int)this + 0x34);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x3c) - iVar1 >> 2) * 4,0xca);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1234));
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x28) - iVar1 >> 2) * 4,0xca);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f122c));
  iVar1 = *(int *)((int)this + 0xc);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x14) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return uVar2;
}

/* ref: Client::Graphics::Kernel::ShaderPackage::vf1 */
uint F_00b531e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb531e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  F_00b547b0(this + 0x90);
  *(undefined4 *)(this + 0x218) = 0;
  uVar4 = 0;
  if (*(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0xc) + uVar4 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + uVar4 * 4)));
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + uVar4 * 4))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2));
  }
  iVar2 = *(int *)(this + 0xc);
  if (iVar2 != *(int *)(this + 0x10)) {
    F_00c46e20(iVar2,*(int *)(this + 0x10),0);
    *(int *)(this + 0x10) = iVar2;
  }
  uVar4 = 0;
  if (*(int *)(this + 0x24) - *(int *)(this + 0x20) >> 2 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x20) + uVar4 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x20) + uVar4 * 4)));
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x20) + uVar4 * 4))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(this + 0x24) - *(int *)(this + 0x20) >> 2));
  }
  iVar2 = *(int *)(this + 0x20);
  if (iVar2 != *(int *)(this + 0x24)) {
    F_00c46e20(iVar2,*(int *)(this + 0x24),0);
    *(int *)(this + 0x24) = iVar2;
  }
  uVar4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (*(int *)(this + 0x38) - *(int *)(this + 0x34) >> 2 != 0) {
    do {
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x34) + uVar4 * 4)));
      ((code *)*(gen_code32 *)*puVar3)(puVar3,0);
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x34) + uVar4 * 4)));
      if (*((int *)GEN_TOP((*(int *)(this + 0x34) + uVar4 * 4))) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0xc) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0xc),*puVar3);
        puVar3 = *(undefined4 * PTR32 *)(this + 0x34);
        puVar3[uVar4] = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(this + 0x38) - *(int *)(this + 0x34) >> 2));
  }
  iVar2 = *(int *)(this + 0x34);
  if (iVar2 != *(int *)(this + 0x38)) {
    puVar3 = (undefined4 *)F_00c46e20(iVar2,*(int *)(this + 0x38),0);
    *(int *)(this + 0x38) = iVar2;
  }
  return (uint)puVar3;
}

/* ref: FUN_00b53350 */
uint F_00b53350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb53350u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int * piVar9;
  undefined * this;
  uint uVar10;
  uint uVar11;
  undefined4 * puVar12;
  int * piVar13;
  undefined2 * puVar14;
  
  piVar9 = (*(int * PTR32 *)&gen_args[0]);
  if (((((*(int * PTR32 *)&gen_args[0]) != (int *)0x0) && (0x43 < (*(uint *)&gen_args[1]))) && (*(*(int * PTR32 *)&gen_args[0]) == REFG(int, 0x10f0e04))) &&
     ((((*(int * PTR32 *)&gen_args[0])[1] == REFG(int, 0x10f0e08) && ((*(int * PTR32 *)&gen_args[0])[2] == *(int *)REFG(undefined * PTR32, 0x133ab8c))) &&
      ((*(int * PTR32 *)&gen_args[0])[3] == (*(uint *)&gen_args[1]))))) {
    (*(uint *)(gen_frame + 0x14)) = (*(int * PTR32 *)&gen_args[0])[4] + (int)(*(int * PTR32 *)&gen_args[0]);
    piVar13 = (*(int * PTR32 *)&gen_args[0]) + 0x11;
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = REFG(undefined4, 0x1370b90);
    if (REFG(undefined4, 0x1370b90) != (undefined4 *)0x0) {
      piVar5 = (*(int * PTR32 *)&gen_args[0]) + 9;
      (*(int *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[0])[0xd] + (*(int * PTR32 *)&gen_args[0])[0xe] + 2 + (*(int * PTR32 *)&gen_args[0])[0xc];
      piVar1 = (*(int * PTR32 *)&gen_args[0]) + 0xb;
      piVar2 = (*(int * PTR32 *)&gen_args[0]) + 10;
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[5] + (int)(*(int * PTR32 *)&gen_args[0]))));
      this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0xc) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0xc),
                                (*piVar2 + 0x2d + *piVar1) * 0xc + -0x10 + (*piVar5 + (*(int *)(gen_frame + 0x4))) * 8,
                                0x10)));
      if (this != (undefined *)0x0) {
        uVar10 = F_00b530b0(this);
        F_00b55b90((undefined *)(uVar10 + 0xc),piVar9[6]);
        F_00b55c20((undefined *)(uVar10 + 0x20),piVar9[7]);
        F_00b55cb0((undefined *)(uVar10 + 0x34),piVar9[0xf]);
        *(int *)(uVar10 + 0x44) = piVar9[8];
        *(int *)(uVar10 + 0x48) = piVar9[9];
        *(int *)(uVar10 + 0x4c) = piVar9[10];
        *(int *)(uVar10 + 0x50) = piVar9[0xb];
        *(int *)(uVar10 + 0x54) = piVar9[0xc];
        *(int *)(uVar10 + 0x58) = piVar9[0xd];
        *(int *)(uVar10 + 0x5c) = piVar9[0xe];
        *(uint *)(uVar10 + 0x60) = uVar10 + 0x21c;
        iVar4 = uVar10 + 0x21c + piVar9[9] * 8;
        *(int *)(uVar10 + 100) = iVar4;
        iVar4 = iVar4 + piVar9[10] * 0xc;
        *(int *)(uVar10 + 0x68) = iVar4;
        iVar4 = iVar4 + piVar9[0xb] * 0xc;
        *(int *)(uVar10 + 0x6c) = iVar4;
        iVar4 = iVar4 + piVar9[0xc] * 4;
        *(int *)(uVar10 + 0x70) = iVar4;
        iVar4 = iVar4 + piVar9[0xd] * 4;
        *(int *)(uVar10 + 0x74) = iVar4;
        iVar4 = iVar4 + piVar9[0xe] * 4;
        *(int *)(uVar10 + 0x78) = iVar4;
        iVar4 = iVar4 + piVar9[0xc] * 4;
        *(int *)(uVar10 + 0x7c) = iVar4;
        *(int *)(uVar10 + 0x80) = iVar4 + piVar9[0xd] * 4;
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar9[6] != 0) {
          do {
            uVar11 = F_00b52a00(1,piVar13,piVar13 + 3,(*(uint *)(gen_frame + 0x14)),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]));
            if (uVar11 == 0) {
              return 0;
            }
            *((uint *)GEN_TOP((*(int *)(uVar10 + 0xc) + (*(uint *)(gen_frame + 0x10)) * 4))) = uVar11;
            (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
            piVar13 = piVar13 + ((uint)*(ushort *)((int)piVar13 + 10) +
                                (uint)*(ushort *)(piVar13 + 2)) * 4 + 3;
          } while ((*(uint *)(gen_frame + 0x10)) < (uint)piVar9[6]);
        }
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar9[7] != 0) {
          do {
            uVar11 = F_00b52a00(0,piVar13,piVar13 + 3,(*(uint *)(gen_frame + 0x14)),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]));
            if (uVar11 == 0) {
              return 0;
            }
            *((uint *)GEN_TOP((*(int *)(uVar10 + 0x20) + (*(uint *)(gen_frame + 0x10)) * 4))) = uVar11;
            (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
            piVar13 = piVar13 + ((uint)*(ushort *)((int)piVar13 + 10) +
                                (uint)*(ushort *)(piVar13 + 2)) * 4 + 3;
          } while ((*(uint *)(gen_frame + 0x10)) < (uint)piVar9[7]);
        }
        uVar11 = 0;
        if (piVar9[9] != 0) {
          do {
            *((int *)GEN_TOP((*(int *)(uVar10 + 0x60) + uVar11 * 8))) = piVar13[uVar11 * 2];
            *((short *)GEN_TOP((*(int *)(uVar10 + 0x60) + 4 + uVar11 * 8))) = (short)piVar13[uVar11 * 2 + 1];
            *((undefined2 *)GEN_TOP((*(int *)(uVar10 + 0x60) + 6 + uVar11 * 8))) =
                 *(undefined2 *)((int)piVar13 + uVar11 * 8 + 6);
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)piVar9[9]);
        }
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar13 + piVar9[9] * 2;
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar9[10] != 0) {
          (*(uint *)(gen_frame + 0x14)) = 0;
          puVar14 = (undefined2 *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 0xe);
          do {
            *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x14)) + *(int *)(uVar10 + 100)))) = *(undefined4 *)(puVar14 + -7);
            uVar11 = F_004df8f0((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0xc))[7],*(int *)(puVar14 + -5) + (int)(*(int * PTR32 *)&gen_args[0]));
            *((uint *)GEN_TOP((*(int *)(uVar10 + 100) + 4 + (*(uint *)(gen_frame + 0x14))))) = uVar11;
            *((undefined2 *)GEN_TOP((*(int *)(uVar10 + 100) + 8 + (*(uint *)(gen_frame + 0x14))))) = *puVar14;
            *((undefined2 *)GEN_TOP((*(int *)(uVar10 + 100) + 10 + (*(uint *)(gen_frame + 0x14))))) = puVar14[-1];
            (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
            puVar14 = puVar14 + 8;
            (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 0xc;
          } while ((*(uint *)(gen_frame + 0x10)) < (uint)piVar9[10]);
        }
        (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + piVar9[10] * 4;
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar9[0xb] != 0) {
          (*(uint *)(gen_frame + 0x14)) = 0;
          puVar14 = (undefined2 *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 0xe);
          do {
            *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x14)) + *(int *)(uVar10 + 0x68)))) = *(undefined4 *)(puVar14 + -7);
            uVar11 = F_004df8f0((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0xc))[8],*(int *)(puVar14 + -5) + (int)(*(int * PTR32 *)&gen_args[0]));
            *((uint *)GEN_TOP((*(int *)(uVar10 + 0x68) + 4 + (*(uint *)(gen_frame + 0x14))))) = uVar11;
            *((undefined2 *)GEN_TOP((*(int *)(uVar10 + 0x68) + 8 + (*(uint *)(gen_frame + 0x14))))) = *puVar14;
            *((undefined2 *)GEN_TOP((*(int *)(uVar10 + 0x68) + 10 + (*(uint *)(gen_frame + 0x14))))) = puVar14[-1];
            (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
            puVar14 = puVar14 + 8;
            (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 0xc;
          } while ((*(uint *)(gen_frame + 0x10)) < (uint)piVar9[0xb]);
        }
        iVar4 = piVar9[0xb];
        uVar11 = 0;
        if (piVar9[0xc] != 0) {
          do {
            *((int *)GEN_TOP((*(int *)(uVar10 + 0x6c) + uVar11 * 4))) = (*(int * PTR32 *)(gen_frame + 0x18))[iVar4 * 4 + uVar11 * 2];
            *((int *)GEN_TOP((*(int *)(uVar10 + 0x78) + uVar11 * 4))) = (*(int * PTR32 *)(gen_frame + 0x18))[iVar4 * 4 + uVar11 * 2 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)piVar9[0xc]);
        }
        iVar6 = piVar9[0xc];
        uVar11 = 0;
        if (piVar9[0xd] != 0) {
          do {
            *((int *)GEN_TOP((*(int *)(uVar10 + 0x70) + uVar11 * 4))) =
                 (*(int * PTR32 *)(gen_frame + 0x18))[iVar4 * 4 + iVar6 * 2 + uVar11 * 2];
            *((int *)GEN_TOP((*(int *)(uVar10 + 0x7c) + uVar11 * 4))) =
                 (*(int * PTR32 *)(gen_frame + 0x18))[iVar4 * 4 + iVar6 * 2 + uVar11 * 2 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)piVar9[0xd]);
        }
        iVar7 = piVar9[0xd];
        uVar11 = 0;
        if (piVar9[0xe] != 0) {
          do {
            *((int *)GEN_TOP((*(int *)(uVar10 + 0x74) + uVar11 * 4))) =
                 (*(int * PTR32 *)(gen_frame + 0x18))[iVar4 * 4 + iVar6 * 2 + iVar7 * 2 + uVar11 * 2];
            *((int *)GEN_TOP((*(int *)(uVar10 + 0x80) + uVar11 * 4))) =
                 (*(int * PTR32 *)(gen_frame + 0x18))[iVar4 * 4 + iVar6 * 2 + iVar7 * 2 + uVar11 * 2 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)piVar9[0xe]);
        }
        iVar8 = piVar9[0xe];
        *(int *)(uVar10 + 0x84) = (*(int * PTR32 *)(gen_frame + 0x18))[iVar4 * 4 + iVar6 * 2 + iVar7 * 2 + iVar8 * 2];
        *(int *)(uVar10 + 0x88) = (*(int * PTR32 *)(gen_frame + 0x18))[iVar4 * 4 + iVar6 * 2 + iVar7 * 2 + iVar8 * 2 + 1];
        (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + iVar4 * 4 + iVar6 * 2 + iVar7 * 2 + iVar8 * 2 + 2;
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar9[0xf] != 0) {
          do {
            (*(uint *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x18))[1];
            puVar12 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0xc) + 8))))
                                (*(int * PTR32 *)(REFG(int, 0x1371270) + 0xc),
                                 (*(int *)(gen_frame + 0x4)) * 4 + ((*(int * PTR32 *)(gen_frame + 0x18))[1] + 1U) * 0x24,0x10)));
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = (*(undefined * PTR32 (*)[1])REFP(0x10f121c));
              puVar12[1] = 0;
              *((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar10 + 0x34) + (*(uint *)(gen_frame + 0x10)) * 4))) = puVar12;
              (*(int *)(gen_frame + 0x8)) = *(*(int * PTR32 *)(gen_frame + 0x18));
              (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar12;
              (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[0]) & 0xffffff)));
              F_00b548a0((undefined *)(uVar10 + 0x90),&(*(int *)(gen_frame + 0x8)),(int)&(*(int * PTR32 *)&gen_args[0]) + 3);
              if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) == '\0') {
                ((code *)*(gen_code32 *)*puVar12)(puVar12,0);
                ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0xc) + 0x10))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 0xc),puVar12);
              }
              else {
                *(int *)(uVar10 + 0x218) = *(int *)(uVar10 + 0x218) + 1;
                puVar12[2] = (*(uint *)(gen_frame + 0x14));
                puVar12[1] = uVar10;
                puVar12[3] = (*(int * PTR32 *)(gen_frame + 0x18))[2];
                puVar12[4] = (*(int * PTR32 *)(gen_frame + 0x18))[3];
                puVar12[5] = (*(int * PTR32 *)(gen_frame + 0x18))[4];
                puVar12[6] = (*(int * PTR32 *)(gen_frame + 0x18))[5];
                puVar3 = puVar12 + 9;
                puVar12[7] = puVar3;
                puVar12[8] = puVar3 + (*(uint *)(gen_frame + 0x14)) * 2;
                F_00c46aa0(puVar3 + (*(uint *)(gen_frame + 0x14)) * 2,(*(int * PTR32 *)(gen_frame + 0x18)) + 6,(*(int *)(gen_frame + 0x4)) * 4);
                uVar11 = 0;
                (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + piVar9[0xd] + piVar9[0xe] + piVar9[0xc] + 8;
                if ((*(uint *)(gen_frame + 0x14)) != 0) {
                  do {
                    piVar5 = (int *)(puVar12[7] + uVar11 * 8);
                    *piVar5 = (*(int * PTR32 *)(gen_frame + 0x18))[1];
                    piVar13 = (*(int * PTR32 *)(gen_frame + 0x18)) + 2;
                    (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 3;
                    uVar11 = uVar11 + 1;
                    piVar5[1] = *piVar13;
                  } while (uVar11 < (*(uint *)(gen_frame + 0x14)));
                }
              }
            }
            (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
          } while ((*(uint *)(gen_frame + 0x10)) < (uint)piVar9[0xf]);
        }
        piVar13 = (*(int * PTR32 *)(gen_frame + 0x18));
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (piVar9[0x10] != 0) {
          do {
            uVar11 = piVar13[(*(uint *)(gen_frame + 0x10)) * 2 + 1];
            (*(int *)(gen_frame + 0x0)) = piVar13[(*(uint *)(gen_frame + 0x10)) * 2];
            (*(int *)(gen_frame + 0x4)) = 0;
            if (uVar11 < (uint)(*(int *)(uVar10 + 0x38) - *(int *)(uVar10 + 0x34) >> 2)) {
              (*(int *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((*(int *)(uVar10 + 0x34) + uVar11 * 4)));
            }
            else {
              (*(int *)(gen_frame + 0x4)) = 0;
            }
            (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[0]) & 0xffffff)));
            F_00b548a0((undefined *)(uVar10 + 0x90),&(*(int *)(gen_frame + 0x0)),(int)&(*(int * PTR32 *)&gen_args[0]) + 3);
            if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) != '\0') {
              *(int *)(uVar10 + 0x218) = *(int *)(uVar10 + 0x218) + 1;
            }
            (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
          } while ((*(uint *)(gen_frame + 0x10)) < (uint)piVar9[0x10]);
        }
        return uVar10;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00b538e0 */
uint F_00b538e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb538e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00b538f0 */
uint F_00b538f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb538f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b53900 */
uint F_00b53900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53900u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b53920 */
uint F_00b53920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53920u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b539d0 */
uint F_00b539d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb539d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xca);
  return uVar1;
}

/* ref: FUN_00b53a20 */
uint F_00b53a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53a20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xca);
  return uVar1;
}

/* ref: FUN_00b53a70 */
uint F_00b53a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53a70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xca);
  return uVar1;
}

/* ref: FUN_00b53ab0 */
uint F_00b53ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b53ad0 */
uint F_00b53ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b53af0 */
uint F_00b53af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b53b70 */
uint F_00b53b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb53b70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b53ba0 */
uint F_00b53ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb53ba0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b53bd0 */
uint F_00b53bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb53bd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b53c30 */
uint F_00b53c30(unsigned int gen_a0)
{
  GEN_ENTER(0xb53c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b53c40 */
uint F_00b53c40(unsigned int gen_a0)
{
  GEN_ENTER(0xb53c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b53c50 */
uint F_00b53c50(unsigned int gen_a0)
{
  GEN_ENTER(0xb53c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b53c60 */
uint F_00b53c60(unsigned int gen_a0)
{
  GEN_ENTER(0xb53c60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 0x1f;
}

/* ref: FUN_00b53c70 */
uint F_00b53c70(unsigned int gen_a0)
{
  GEN_ENTER(0xb53c70u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *param_1 = *param_1 * 0x1f;
  return (uint)param_1;
}

/* ref: FUN_00b53c90 */
uint F_00b53c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53c90u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  uVar2 = *param_1;
  iVar5 = 1;
  iVar4 = 0;
  local_8 = 0;
  uVar3 = 1;
  if (1 < param_2) {
    if (1 < (int)(param_2 - 1)) {
      iVar4 = 0;
      do {
        iVar1 = iVar5 * 0x1f;
        iVar5 = iVar5 * 0x3c1;
        local_8 = local_8 + param_1[uVar3 + 1] * iVar5;
        iVar4 = iVar4 + param_1[uVar3] * iVar1;
        uVar3 = uVar3 + 2;
      } while (uVar3 < param_2 - 1);
    }
    if (uVar3 < param_2) {
      uVar2 = uVar2 + param_1[uVar3] * iVar5 * 0x1f;
    }
    return local_8 + iVar4 + uVar2;
  }
  return uVar2;
}

/* ref: FUN_00b53d20 */
uint F_00b53d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb53d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  return param_4 * 0x745f + param_3 * 0x3c1 + param_2 * 0x1f + param_1;
}

/* ref: FUN_00b53d50 */
uint F_00b53d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb53d50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  return (param_2 + param_1 + param_3) * 4 + 0x20;
}

/* ref: FUN_00b53d70 */
uint F_00b53d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00b53d90 */
uint F_00b53d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb53d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00b53db0 */
uint F_00b53db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53db0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*in_ecx < *param_2);
}

/* ref: FUN_00b53dd0 */
byte F_00b53dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b53e10 */
uint F_00b53e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53e10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b53e90 */
uint F_00b53e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb53e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b53eb0 */
uint F_00b53eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb53eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b53ed0 */
uint F_00b53ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xca);
  return (uint)uVar1;
}

/* ref: FUN_00b53f10 */
uint F_00b53f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xca);
  return (uint)uVar1;
}

/* ref: FUN_00b53f50 */
uint F_00b53f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xca);
  return (uint)uVar1;
}

/* ref: Client::Graphics::Kernel::ShaderNode::vf0 */
uint F_00b53fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb53fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f121c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b54010 */
uint F_00b54010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b54020 */
uint F_00b54020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b54030 */
uint F_00b54030(unsigned int gen_a0)
{
  GEN_ENTER(0xb54030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x1f;
  puVar1 = this;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c48350(this,0,0x188);
  return (uint)this;
}

/* ref: FUN_00b54060 */
uint F_00b54060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
LAB_00b54070: ;
  do {
    uVar1 = *(uint *)((int)this + 0x184);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = *(uint *)((int)this + uVar3 * 8);
        if (*param_1 < uVar2) {
          this = *(undefined * PTR32 *)((int)this + uVar3 * 4 + 0x100);
          if (this == (undefined *)0x0) {
            return 0;
          }
          goto LAB_00b54070;
        }
        if (*param_1 == uVar2) {
          return (uint)(undefined *)((int)this + uVar3 * 8);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    if (*(int *)((int)this + uVar1 * 4 + 0x100) == 0) {
      return 0;
    }
    this = *(undefined * PTR32 *)((int)this + uVar1 * 4 + 0x100);
  } while( true );
}

/* ref: FUN_00b540e0 */
uint F_00b540e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb540e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00b54130 */
uint F_00b54130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00b54180 */
uint F_00b54180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00b541c0 */
uint F_00b541c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb541c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b541e0 */
uint F_00b541e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb541e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b54200 */
uint F_00b54200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b54220 */
uint F_00b54220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b54230 */
byte F_00b54230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b54250 */
uint F_00b54250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b54260 */
byte F_00b54260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b54280 */
uint F_00b54280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b54290 */
byte F_00b54290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b542b0 */
uint F_00b542b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb542b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b542e0 */
uint F_00b542e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb542e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b54310 */
uint F_00b54310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54310u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b54370 */
unsigned int F_00b54370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b54390 */
unsigned int F_00b54390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54390u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b543b0 */
unsigned int F_00b543b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb543b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b54400 */
uint F_00b54400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b54410 */
byte F_00b54410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b54460 */
uint F_00b54460(unsigned int gen_a0)
{
  GEN_ENTER(0xb54460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b544b0 */
uint F_00b544b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb544b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1224));
  iVar2 = 0x1f;
  puVar1 = (undefined4 *)((int)this + 4);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c48350((undefined4 *)((int)this + 4),0,0x188);
  *(undefined4 *)((int)this + 0x18c) = 0;
  return (uint)this;
}

/* ref: FUN_00b54510 */
byte F_00b54510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00b54060((undefined *)((int)this + 4),param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    return 1;
  }
  return 0;
}

/* ref: FUN_00b54570 */
uint F_00b54570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00b54590 */
uint F_00b54590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00b545b0 */
uint F_00b545b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb545b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00b54600 */
uint F_00b54600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b54610 */
byte F_00b54610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b54630 */
uint F_00b54630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b54640 */
byte F_00b54640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b54660 */
uint F_00b54660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b54670 */
byte F_00b54670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b54690 */
unsigned int F_00b54690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b546b0 */
unsigned int F_00b546b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb546b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b546d0 */
unsigned int F_00b546d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb546d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b546f0 */
unsigned int F_00b546f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb546f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b54720 */
unsigned int F_00b54720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b54750 */
unsigned int F_00b54750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b54790 */
byte F_00b54790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b547b0 */
unsigned int F_00b547b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb547b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)((int)this + 0x100);
  do {
    if ((undefined *)*piVar1 != (undefined *)0x0) {
      F_00b547b0((undefined *)*piVar1);
      if (*piVar1 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar1);
      }
      *piVar1 = 0;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (uVar2 <= *(uint *)((int)this + 0x184));
  *(undefined4 *)((int)this + 0x184) = 0;
  return 0;
}

/* ref: FUN_00b54840 */
uint F_00b54840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b54850 */
uint F_00b54850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b54860 */
uint F_00b54860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b54870 */
uint F_00b54870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b54880 */
uint F_00b54880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b54890 */
uint F_00b54890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b548a0 */
uint F_00b548a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb548a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint * puVar7;
  int iVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  int local_1c;
  uint * local_c;
  uint local_8;
  
  *param_2 = 0;
  local_c = *((uint * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x184) * 4 + 0x100)));
  uVar11 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0x184) != 0) {
    uVar1 = *param_1;
    do {
      uVar2 = *(uint *)((int)this + uVar11 * 8);
      if (uVar1 < uVar2) {
        local_c = *(uint * PTR32 *)((int)this + uVar11 * 4 + 0x100);
        local_8 = uVar11;
        break;
      }
      if (uVar1 == uVar2) {
        puVar7 = (uint *)((int)this + uVar11 * 8);
        *puVar7 = uVar1;
        puVar7[1] = param_1[1];
        return (uint)puVar7;
      }
      uVar11 = uVar11 + 1;
      local_8 = uVar11;
    } while (uVar11 < *(uint *)((int)this + 0x184));
  }
  if (local_c == (uint *)0x0) {
    local_c = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))
                                (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x188,8)));
    if (local_c != (uint *)0x0) {
      iVar8 = 0x1f;
      puVar7 = local_c;
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7 = puVar7 + 2;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      F_00c48350(local_c,0,0x188);
    }
    *local_c = *param_1;
    local_c[1] = param_1[1];
    local_c[0x61] = 1;
    *param_2 = 1;
  }
  else {
    uVar11 = F_00b548a0(local_c,param_1,param_2);
    if (uVar11 != 0) {
      return uVar11;
    }
  }
  uVar11 = *(uint *)((int)this + 0x184);
  if (0x1f < uVar11) {
    uVar11 = *local_c;
    uVar1 = local_c[1];
    uVar2 = local_c[0x40];
    uVar3 = local_c[0x41];
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x188,8)));
    if (puVar4 != (undefined4 *)0x0) {
      iVar8 = 0x1f;
      puVar5 = puVar4;
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      F_00c48350(puVar4,0,0x188);
    }
    param_2 = (undefined1 *)0x0;
    param_1 = puVar4 + 0x41;
    iVar8 = (int)this - (int)puVar4;
    puVar5 = (undefined4 *)((int)this + 0x100);
    puVar6 = puVar4;
    do {
      if (param_2 < local_8) {
        *puVar6 = *(undefined4 *)(iVar8 + (int)puVar6);
        puVar6[1] = *(undefined4 *)(iVar8 + 4 + (int)puVar6);
        param_1[-1] = *puVar5;
LAB_00b54ae3: ;
        *puVar5 = 0;
      }
      else if (local_8 < param_2) {
        *puVar6 = *(undefined4 *)(iVar8 + -8 + (int)puVar6);
        puVar6[1] = *(undefined4 *)(iVar8 + -4 + (int)puVar6);
        *param_1 = *puVar5;
        goto LAB_00b54ae3;
      }
      param_2 = (undefined1 *)((int)param_2 + 1);
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 2;
    } while (param_2 < 0x10);
    param_2 = (undefined1 *)0x12;
    puVar10 = local_c + 4;
    puVar7 = (uint *)((int)this + 0x148);
    puVar9 = (uint *)((int)this + 0x88);
    local_1c = 4;
    param_1 = local_c + 0x41;
    do {
      if ((int)param_2 - 1U < local_8) {
        puVar10[-4] = *puVar9;
        puVar10[-3] = puVar9[1];
        param_1[-1] = puVar7[-1];
LAB_00b54b59: ;
        puVar7[-1] = 0;
      }
      else if (local_8 < (int)param_2 - 1U) {
        puVar10[-4] = puVar9[-2];
        puVar10[-3] = puVar9[-1];
        *param_1 = puVar7[-1];
        goto LAB_00b54b59;
      }
      if (param_2 < local_8) {
        puVar10[-2] = puVar9[2];
        puVar10[-1] = puVar9[3];
        *param_1 = *puVar7;
LAB_00b54b94: ;
        *puVar7 = 0;
      }
      else if (local_8 < param_2) {
        puVar10[-2] = *puVar9;
        puVar10[-1] = puVar9[1];
        param_1[1] = *puVar7;
        goto LAB_00b54b94;
      }
      if ((int)param_2 + 1U < local_8) {
        *puVar10 = puVar9[4];
        puVar10[1] = puVar9[5];
        param_1[1] = puVar7[1];
LAB_00b54bd1: ;
        puVar7[1] = 0;
      }
      else if (local_8 < (int)param_2 + 1U) {
        *puVar10 = puVar9[2];
        puVar10[1] = puVar9[3];
        param_1[2] = puVar7[1];
        goto LAB_00b54bd1;
      }
      if ((int)param_2 + 2U < local_8) {
        puVar10[2] = puVar9[6];
        puVar10[3] = puVar9[7];
        param_1[2] = puVar7[2];
LAB_00b54c13: ;
        puVar7[2] = 0;
      }
      else if (local_8 < (int)param_2 + 2U) {
        puVar10[2] = puVar9[4];
        puVar10[3] = puVar9[5];
        param_1[3] = puVar7[2];
        goto LAB_00b54c13;
      }
      param_1 = param_1 + 4;
      param_2 = (undefined1 *)((int)param_2 + 4);
      puVar7 = puVar7 + 4;
      puVar9 = puVar9 + 8;
      puVar10 = puVar10 + 8;
      local_1c = local_1c + -1;
      if (local_1c == 0) {
        if (local_8 < 0x10) {
          puVar4[local_8 * 2] = uVar11;
          puVar4[local_8 * 2 + 1] = uVar1;
          puVar4[local_8 + 0x40] = uVar2;
          puVar4[local_8 + 0x41] = uVar3;
          *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x7c);
          *(undefined4 *)this = *(undefined4 *)((int)this + 0x78);
          local_c[0x40] = *(uint *)((int)this + 0x140);
          *(undefined4 *)((int)this + 0x140) = 0;
          *(undefined4 *)((int)this + local_8 * 4 + 0x100) = 0;
        }
        else if (local_8 < 0x11) {
          *(uint *)this = uVar11;
          *(uint *)((int)this + 4) = uVar1;
          puVar4[0x50] = uVar2;
          local_c[0x40] = uVar3;
          *(undefined4 *)((int)this + 0x140) = 0;
        }
        else {
          local_c[local_8 * 2 + -0x22] = uVar11;
          local_c[local_8 * 2 + -0x21] = uVar1;
          local_c[local_8 + 0x2f] = uVar2;
          local_c[local_8 + 0x30] = uVar3;
          *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x84);
          *(undefined4 *)this = *(undefined4 *)((int)this + 0x80);
          puVar4[0x50] = *(undefined4 *)((int)this + 0x140);
          *(undefined4 *)((int)this + 0x140) = 0;
          *(undefined4 *)((int)this + local_8 * 4 + 0x100) = 0;
        }
        *(undefined4 * PTR32 *)((int)this + 0x100) = puVar4;
        *(uint * PTR32 *)((int)this + 0x104) = local_c;
        puVar4[0x61] = 0x10;
        local_c[0x61] = 0x10;
        *(undefined4 *)((int)this + 0x184) = 1;
        return 0;
      }
    } while( true );
  }
  iVar8 = uVar11 - 1;
  *(uint *)((int)this + 0x184) = uVar11 + 1;
  *(undefined4 *)((int)this + iVar8 * 4 + 0x108) = *(undefined4 *)((int)this + iVar8 * 4 + 0x104);
  if (-1 < iVar8) {
    puVar7 = (uint *)((int)this + iVar8 * 8);
    puVar4 = (undefined4 *)((int)this + iVar8 * 4 + 0x104);
    do {
      if (*puVar7 <= *local_c) break;
      puVar7[2] = *puVar7;
      puVar7[3] = puVar7[1];
      *puVar4 = puVar4[-1];
      puVar4 = puVar4 + -1;
      puVar7 = puVar7 + -2;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  *(uint *)((int)this + iVar8 * 8 + 8) = *local_c;
  uVar11 = (int)this + iVar8 * 8 + 8;
  *(uint *)(uVar11 + 4) = local_c[1];
  *(uint *)((int)this + iVar8 * 4 + 0x104) = local_c[0x40];
  *(uint *)((int)this + iVar8 * 4 + 0x108) = local_c[0x41];
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),local_c);
  return uVar11;
}

/* ref: FUN_00b54d50 */
uint F_00b54d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b54d60 */
uint F_00b54d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b54d70 */
uint F_00b54d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b54d80 */
unsigned int F_00b54d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b54db0 */
unsigned int F_00b54db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b54de0 */
unsigned int F_00b54de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b54e10 */
unsigned int F_00b54e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54e10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b54e40 */
unsigned int F_00b54e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54e40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b54e70 */
unsigned int F_00b54e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb54e70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b54ea0 */
byte F_00b54ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    piVar3 = *(int * PTR32 *)(param_1 + 0xc);
    piVar2 = *(int * PTR32 *)(param_2 + 0xc);
    uVar1 = *(int *)(param_1 + 0x10) - (int)piVar3;
    if (uVar1 == *(int *)(param_2 + 0x10) - (int)piVar2) {
      for (; 3 < uVar1; uVar1 = uVar1 - 4) {
        if (*piVar3 != *piVar2) {
          return 0;
        }
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      if ((uVar1 == 0) ||
         (((char)*piVar2 == (char)*piVar3 &&
          ((uVar1 < 2 ||
           ((*(char *)((int)piVar2 + 1) == *(char *)((int)piVar3 + 1) &&
            ((uVar1 < 3 || (*(char *)((int)piVar2 + 2) == *(char *)((int)piVar3 + 2))))))))))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b54f20 */
byte F_00b54f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb54f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b54ea0(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00b54f40 */
unsigned int F_00b54f40(unsigned int gen_a0)
{
  GEN_ENTER(0xb54f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b547b0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x18c) = 0;
  return 0;
}

/* ref: FUN_00b54f60 */
uint F_00b54f60(unsigned int gen_a0)
{
  GEN_ENTER(0xb54f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b54fa0 */
uint F_00b54fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xb54fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b54fe0 */
uint F_00b54fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb54fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b55020 */
uint F_00b55020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((uint)this & 0xffffff);
  uVar1 = F_00b548a0((undefined *)((int)this + 4),param_1,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *(int *)((int)this + 0x18c) = *(int *)((int)this + 0x18c) + 1;
    return 1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00b55060 */
uint F_00b55060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb55060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b550c0 */
uint F_00b550c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb550c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b55120 */
uint F_00b55120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb55120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b55180 */
unsigned int F_00b55180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b551b0 */
unsigned int F_00b551b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb551b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b551e0 */
unsigned int F_00b551e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb551e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b55210 */
unsigned int F_00b55210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb55210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b55240 */
unsigned int F_00b55240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb55240u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b55270 */
unsigned int F_00b55270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb55270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b552a0 */
unsigned int F_00b552a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb552a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1224));
  F_00b547b0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x18c) = 0;
  return 0;
}

/* ref: CBalanceSet_USItem_ShaderPackage_Kernel_Graphics_Client::vf0 */
uint F_00b552c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb552c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1224));
  F_00b547b0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x18c) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b55300 */
uint F_00b55300(unsigned int gen_a0)
{
  GEN_ENTER(0xb55300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b55340 */
uint F_00b55340(unsigned int gen_a0)
{
  GEN_ENTER(0xb55340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b55380 */
uint F_00b55380(unsigned int gen_a0)
{
  GEN_ENTER(0xb55380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b553e0 */
unsigned int F_00b553e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb553e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b55430 */
unsigned int F_00b55430(unsigned int gen_a0)
{
  GEN_ENTER(0xb55430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b55480 */
unsigned int F_00b55480(unsigned int gen_a0)
{
  GEN_ENTER(0xb55480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b554b0 */
unsigned int F_00b554b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb554b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b554e0 */
unsigned int F_00b554e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb554e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b55510 */
unsigned int F_00b55510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b55540 */
unsigned int F_00b55540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb55540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b55570 */
unsigned int F_00b55570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb55570u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b555a0 */
unsigned int F_00b555a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb555a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b555d0 */
uint F_00b555d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb555d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f122c));
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00b55620 */
uint F_00b55620(unsigned int gen_a0)
{
  GEN_ENTER(0xb55620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1234));
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00b55670 */
uint F_00b55670(unsigned int gen_a0)
{
  GEN_ENTER(0xb55670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f123c));
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: CVector_PAVVertexShader_Kernel_Graphics_Client_Kernel::vf0 */
uint F_00b556c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb556c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f122c));
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CVector_PAVPixelShader_Kernel_Graphics_Client_Kernel::vf0 */
uint F_00b55720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f1234));
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CVector_PAVShaderNode_Kernel_Graphics_Client_Kernel::vf0 */
uint F_00b55780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f123c));
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0xca);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b557e0 */
uint F_00b557e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb557e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0xc) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0xc),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b55800 */
uint F_00b55800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xca);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0xca);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00b558b0 */
uint F_00b558b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb558b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xca);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0xca);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00b55960 */
uint F_00b55960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xca);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0xca);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::ShaderPackage::vf0 */
uint F_00b55a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b53110(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0xc) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0xc),this);
  }
  return (uint)this;
}

/* ref: FUN_00b55a40 */
uint F_00b55a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b55800(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b55800(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b55ab0 */
uint F_00b55ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b558b0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b558b0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b55b20 */
uint F_00b55b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b55960(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b55960(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b55b90 */
uint F_00b55b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00b55a40(this,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00b55c20 */
uint F_00b55c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00b55ab0(this,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00b55cb0 */
uint F_00b55cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00b55b20(this,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00b55d70 */
uint F_00b55d70(unsigned int gen_a0)
{
  GEN_ENTER(0xb55d70u, gen_a0, 0u, 0u, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  iVar2 = *in_edx;
  uVar1 = 0;
  if (iVar2 == 0x3b) {
    return 0;
  }
  do {
    in_edx = in_edx + 1;
    if (iVar2 - 0x30U < 10) {
      uVar1 = iVar2 + -0x30 + uVar1 * 0x10;
    }
    else if (iVar2 - 0x61U < 6) {
      uVar1 = iVar2 + -0x57 + uVar1 * 0x10;
    }
    else {
      if (5 < iVar2 - 0x41U) {
        return 0;
      }
      uVar1 = iVar2 + -0x37 + uVar1 * 0x10;
    }
    iVar2 = *in_edx;
  } while (iVar2 != 0x3b);
  return uVar1;
}

/* ref: FUN_00b55df0 */
byte F_00b55df0(unsigned int gen_a0)
{
  GEN_ENTER(0xb55df0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char cVar1;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    if (cVar1 != ' ') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_00b55e50 */
uint F_00b55e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  *in_ecx = *in_esi;
  while( true ) {
    cVar1 = *(char *)*in_esi;
    if ((((9 < (byte)(cVar1 - 0x30U)) && (0x19 < (byte)(cVar1 + 0xbfU))) &&
        (0x19 < (byte)(cVar1 + 0x9fU))) &&
       (((cVar1 != '-' && (cVar1 != '.')) && ((cVar1 != ':' && (cVar1 != '_')))))) break;
    *in_esi = (char *)*in_esi + 1;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_00b55ec0 */
unsigned int F_00b55ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xb55ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f12d4));
  if ((*(int *)((int)this + 8) == 0) &&
     (puVar1 = *(undefined4 * PTR32 *)((int)this + 4), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00b55ef0 */
uint F_00b55ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb55ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00b55f10 */
byte F_00b55f10(unsigned int gen_a0)
{
  GEN_ENTER(0xb55f10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (('\b' < (char)param_1) && (((char)param_1 < '\v' || ((char)param_1 == '\r')))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b55f30 */
uint F_00b55f30(unsigned int gen_a0)
{
  GEN_ENTER(0xb55f30u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  int iVar5;
  
  iVar5 = 0;
  cVar2 = *param_1;
  pcVar4 = param_1;
  while (cVar2 != '\0') {
    if ((cVar2 < '\t') || (('\n' < cVar2 && (cVar2 != '\r')))) {
      iVar5 = iVar5 + 1;
    }
    pcVar3 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar3;
  }
  pcVar3 = (char *)F_004297d0(iVar5 + 1,0x2bd);
  cVar2 = *param_1;
  pcVar4 = pcVar3;
  while (cVar2 != '\0') {
    if ((cVar2 < '\t') || (('\n' < cVar2 && (cVar2 != '\r')))) {
      *pcVar4 = cVar2;
      pcVar4 = pcVar4 + 1;
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar4 = '\0';
  return (uint)pcVar3;
}

/* ref: FUN_00b55f90 */
uint F_00b55f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb55f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  undefined1 * param_5 = (undefined1 *)(uintptr_t)gen_a4;
  char cVar1;
  undefined1 uVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  pcVar3 = (char *)F_0042a7e0(param_1,0);
  uVar6 = (uint)(*pcVar3 == '#');
  uVar4 = F_0042a970(param_1);
  if ((int)uVar6 < (int)uVar4) {
    do {
      iVar5 = 0;
      pcVar3 = (char *)F_0042a7e0(param_1,uVar6);
      cVar1 = *pcVar3;
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar5 = cVar1 + -0x30;
      }
      else if ((byte)(cVar1 + 0x9fU) < 6) {
        iVar5 = cVar1 + -0x57;
      }
      else if ((byte)(cVar1 + 0xbfU) < 6) {
        iVar5 = cVar1 + -0x37;
      }
      local_c = local_c + 1;
      local_8 = local_8 * 0x10 + iVar5;
      uVar6 = uVar6 + 1;
      uVar4 = F_0042a970(param_1);
    } while ((int)uVar6 < (int)uVar4);
    if (6 < local_c) {
      uVar2 = (undefined1)((uint)local_8 >> 0x18);
      goto LAB_00b5602e;
    }
  }
  uVar2 = 0xff;
LAB_00b5602e: ;
  *param_2 = uVar2;
  *param_3 = (char)((uint)local_8 >> 0x10);
  *param_4 = (char)((uint)local_8 >> 8);
  *param_5 = (char)local_8;
  return (uint)param_5;
}

/* ref: FUN_00b56060 */
uint F_00b56060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)this;
  uVar3 = 0;
  if (0 < (int)(*(int *)((int)this + 4) - iVar2 & 0xfffffffcU)) {
    do {
      iVar2 = *(int *)(iVar2 + uVar3 * 4);
      *param_2 = iVar2;
      bVar1 = F_0042b660(param_1,iVar2 + 0x14);
      if (bVar1 != 0) {
        return uVar3;
      }
      iVar2 = *(int *)this;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)((int)this + 4) - iVar2 >> 2);
  }
  return 0xffffffff;
}

/* ref: FUN_00b560c0 */
uint F_00b560c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb560c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00b56060((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[1]));
  return ((int)uVar1 < 0) - 1 & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b56110 */
uint F_00b56110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined * this_00;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)this;
  if (*(undefined4 * PTR32 *)((int)this + 4) != puVar3) {
    do {
      piVar1 = (int *)*puVar3;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_1)));
      if ((this_00 != &REFG(undefined, 0x14c4c10)) && (bVar2 = F_0042b660(this_00,param_2), bVar2 != 0)) {
        return (uint)piVar1;
      }
      puVar3 = puVar3 + 1;
    } while (*(undefined4 * PTR32 *)((int)this + 4) != puVar3);
  }
  return 0;
}

/* ref: FUN_00b56170 */
uint F_00b56170(unsigned int gen_a0)
{
  GEN_ENTER(0xb56170u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  uint uVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),param_1,REFG(undefined4, 0x108cc50));
  (*(uint *)(gen_frame + 0x70)) = 3;
  (*(int *)(gen_frame + 0x6c)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (undefined4 * PTR32 * PTR32 *)0x0;
  F_0042eca0(((undefined1 *)(gen_frame + 0x8)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c)));
  iVar1 = (*(int *)(gen_frame + 0x6c)) * 4;
  uVar2 = F_004297d0(iVar1 + 4,0x2bd);
  pppuVar3 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
  if ((*(uint *)(gen_frame + 0x70)) < 4) {
    pppuVar3 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c));
  }
  F_00c46aa0(uVar2,pppuVar3,iVar1);
  *(undefined4 *)(iVar1 + uVar2) = 0;
  if (3 < (*(uint *)(gen_frame + 0x70))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0],(*(uint *)(gen_frame + 0x70)) * 4 + 4,0x3c);
  }
  (*(uint *)(gen_frame + 0x70)) = 3;
  (*(int *)(gen_frame + 0x6c)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (undefined4 * PTR32 *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: FUN_00b56230 */
uint F_00b56230(unsigned int gen_a0)
{
  GEN_ENTER(0xb56230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) - *(int *)this)));
  iVar3 = 0;
  if (0 < (int)((uint)piVar2 & 0xfffffffc)) {
    do {
      piVar2 = (int *)(*(int *)this + iVar3 * 4);
      if (*(int *)(*(int *)this + iVar3 * 4) != 0) {
        puVar1 = (undefined4 *)*piVar2;
        piVar2 = (int *)0x0;
        if (puVar1 != (undefined4 *)0x0) {
          piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
        }
        *(undefined4 *)(*(int *)this + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2);
  }
  iVar3 = *(int *)this;
  if (iVar3 != *(int *)((int)this + 4)) {
    piVar2 = (int *)F_00c46e20(iVar3,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar3;
  }
  return (uint)piVar2;
}

/* ref: FUN_00b562a0 */
byte F_00b562a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb562a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  piVar2 = *(int * PTR32 *)this;
  if (piVar1 != piVar2) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar1 != piVar2) {
      F_00c46e20(piVar2,piVar2 + 1,((int)piVar1 - (int)(piVar2 + 1) >> 2) * 4);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b562f0 */
uint F_00b562f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb562f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) - *(int *)this)));
  iVar3 = 0;
  if (0 < (int)((uint)piVar2 & 0xfffffffc)) {
    do {
      piVar2 = (int *)(*(int *)this + iVar3 * 4);
      if (*(int *)(*(int *)this + iVar3 * 4) != 0) {
        puVar1 = (undefined4 *)*piVar2;
        piVar2 = (int *)0x0;
        if (puVar1 != (undefined4 *)0x0) {
          piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
        }
        *(undefined4 *)(*(int *)this + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2);
  }
  iVar3 = *(int *)this;
  if (iVar3 != *(int *)((int)this + 4)) {
    piVar2 = (int *)F_00c46e20(iVar3,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar3;
  }
  return (uint)piVar2;
}

/* ref: FUN_00b56360 */
uint F_00b56360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb56360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  
  puVar3 = *(uint * PTR32 *)this;
  uVar2 = 0;
  if (puVar3 != *(uint * PTR32 *)((int)this + 4)) {
    while( true ) {
      uVar2 = *puVar3;
      bVar1 = F_0042b660(param_1,uVar2 + 0x14);
      if (bVar1 != 0) break;
      puVar3 = puVar3 + 1;
      if (puVar3 == *(uint * PTR32 *)((int)this + 4)) {
        return uVar2;
      }
    }
    F_00c46e20(puVar3,puVar3 + 1,(*(int *)((int)this + 4) - (int)(puVar3 + 1) >> 2) * 4);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  }
  return uVar2;
}

/* ref: FUN_00b563c0 */
uint F_00b563c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb563c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),param_2);
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  return (uint)this;
}

/* ref: FUN_00b56410 */
uint F_00b56410(unsigned int gen_a0)
{
  GEN_ENTER(0xb56410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  F_00b56230((undefined *)((int)this + 0xbc));
  iVar1 = *(int *)((int)this + 0xbc);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xc4) - iVar1 >> 2) * 4,0x134);
  }
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880((undefined *)((int)this + 0x68));
  uVar2 = F_0042c880((undefined *)((int)this + 0x14));
  return (uint)uVar2;
}

/* ref: FUN_00b56480 */
uint F_00b56480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb56480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc0);
  piVar2 = *(int * PTR32 *)((int)this + 0xbc);
  if (piVar1 != piVar2) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar1 != piVar2) {
      piVar2 = (int *)F_00c46e20(piVar2,piVar2 + 1,((int)piVar1 - (int)(piVar2 + 1) >> 2) * 4);
      *(int *)((int)this + 0xc0) = *(int *)((int)this + 0xc0) + -4;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00b564e0 */
uint F_00b564e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb564e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"#document",REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 9;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x4)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f130c));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00b56570 */
uint F_00b56570(unsigned int gen_a0)
{
  GEN_ENTER(0xb56570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x10f125e),REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x8)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1338));
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  return (uint)this;
}

/* ref: FUN_00b56600 */
uint F_00b56600(unsigned int gen_a0)
{
  GEN_ENTER(0xb56600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1338));
  F_00b562f0((undefined *)((int)this + 0xcc));
  iVar1 = *(int *)((int)this + 0xcc);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xd4) - iVar1 >> 2) * 4,0x134);
  }
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  uVar2 = F_00b56410(this);
  return uVar2;
}

/* ref: FUN_00b56670 */
uint F_00b56670(unsigned int gen_a0)
{
  GEN_ENTER(0xb56670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x10f125f),REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x8)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1364));
  return (uint)this;
}

/* ref: FUN_00b566f0 */
uint F_00b566f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb566f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"#text",REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 3;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x4)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1390));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00b56780 */
uint F_00b56780(unsigned int gen_a0)
{
  GEN_ENTER(0xb56780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"#cdata-section",REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 4;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x4)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f13bc));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00b56810 */
uint F_00b56810(unsigned int gen_a0)
{
  GEN_ENTER(0xb56810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"#comment",REFG(undefined4, 0x108cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f12e0));
  *(undefined4 *)((int)this + 4) = 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042cbc0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x4)));
  F_0042b630((int)this + 0x68);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f13e8));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00b568a0 */
uint F_00b568a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb568a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f12d4));
  if (param_1 != 0) {
    *(int *)((int)this + 8) = param_1;
    *(int *)((int)this + 4) = param_1;
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  this_00 = (undefined *)F_00406b90(0xcc,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00b564e0(this_00);
    *(undefined4 *)((int)this + 8) = 0;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 0xc) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: Component::Xml::DOMParser::vf1 */
uint F_00b56910(void)
{
  GEN_ENTER(0xb56910u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0xdc,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b56570(this);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00b56930 */
uint F_00b56930(unsigned int gen_a0)
{
  GEN_ENTER(0xb56930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint * puVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 * this_00;
  uint * puVar8;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  iVar6 = 0;
  (*(int *)(gen_frame + 0x0)) = 0x100;
  (*(uint * PTR32 *)(gen_frame + 0x4)) = (uint *)F_004297d0(0x400,0x2bd);
  uVar3 = *(uint *)this;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)(gen_frame + 0x4));
  do {
    if (uVar3 == 0) {
      uVar3 = F_00429810((*(uint * PTR32 *)(gen_frame + 0xc)),iVar6 * 4 + 4,0x2bd);
      *(undefined4 *)(uVar3 + iVar6 * 4) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return uVar3;
    }
    iVar5 = 0;
    (*(uint *)(gen_frame + 0x14)) = *(uint *)this;
    puVar8 = (uint *)((int)this + 4);
    if ((*(uint *)(gen_frame + 0x14)) == 0x26) {
      iVar7 = 0;
      puVar4 = puVar8;
      uVar3 = *puVar8;
      while (uVar3 != 0x3b) {
        if (uVar3 == 0) goto LAB_00b56abd;
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 1;
        iVar7 = iVar7 + 1;
        uVar3 = *puVar1;
      }
      if (*puVar8 == 0x23) {
        uVar3 = *(uint *)((int)this + 8);
        puVar8 = (uint *)((int)this + 8);
        if (uVar3 == 0x78) {
          (*(uint *)(gen_frame + 0x14)) = F_00b55d70((uint *)((int)this + 0xc));
        }
        else {
          (*(uint *)(gen_frame + 0x14)) = 0;
          while (uVar3 != 0x3b) {
            puVar8 = puVar8 + 1;
            if (9 < uVar3 - 0x30) {
              (*(uint *)(gen_frame + 0x14)) = 0;
              break;
            }
            (*(uint *)(gen_frame + 0x14)) = (uVar3 - 0x30) + (*(uint *)(gen_frame + 0x14)) * 10;
            uVar3 = *puVar8;
          }
        }
      }
      else {
        (*(uint *)(gen_frame + 0x80)) = 3;
        (*(undefined4 *)(gen_frame + 0x7c)) = 0;
        ((undefined4 *)(gen_frame + 0x6c))[0] = 0;
        F_00b589f0(((undefined4 *)(gen_frame + 0x6c)),puVar8,iVar7);
        F_0042e230(((undefined1 *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0x6c)));
        if (3 < (*(uint *)(gen_frame + 0x80))) {
          F_00429760(((undefined4 *)(gen_frame + 0x6c))[0],(*(uint *)(gen_frame + 0x80)) * 4 + 4,0x3c);
        }
        this_00 = &REFG(undefined4, 0x14c4c68);
        uVar3 = 0;
        do {
          if (*(char *)*this_00 == '\0') {
            F_0042c880(((undefined1 *)(gen_frame + 0x18)));
            goto LAB_00b56abd;
          }
          bVar2 = F_0042b660(this_00,((undefined1 *)(gen_frame + 0x18)));
          if (bVar2 != 0) {
            (*(uint *)(gen_frame + 0x14)) = (&REFG(undefined4, 0x14c4cbc))[iVar5 * 0x16];
            break;
          }
          uVar3 = uVar3 + 0x58;
          iVar5 = iVar5 + 1;
          this_00 = this_00 + 0x16;
        } while (uVar3 < 0x210);
        F_0042c880(((undefined1 *)(gen_frame + 0x18)));
      }
      puVar8 = ((uint *)GEN_TOP(((int)this + (iVar7 + 2) * 4)));
    }
LAB_00b56abd: ;
    *(*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x14));
    (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x4)) + 1;
    iVar6 = iVar6 + 1;
    if ((*(int *)(gen_frame + 0x0)) - iVar6 < 0x80) {
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x100;
      (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)F_00429810((*(uint * PTR32 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x0)) * 4,0x2bd);
      (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0xc)) + iVar6;
    }
    uVar3 = *puVar8;
    this = puVar8;
  } while( true );
}

/* ref: FUN_00b56b60 */
unsigned int F_00b56b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb56b60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar3 = F_00b56060((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]) + 0x14,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if ((int)uVar3 < 0) {
    F_00b590e0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]));
    return 0;
  }
  if (*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4))) != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4)));
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *((undefined4 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4))) = 0;
  }
  *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4))) = iVar2;
  return 0;
}

/* ref: FUN_00b56bd0 */
unsigned int F_00b56bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb56bd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined * PTR32 *)((*(int *)&gen_args[1]) + 8) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((int)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) & 0xfffffffcU) < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) + -4)));
  }
  F_00b590e0(((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))),&(*(int *)&gen_args[1]));
  if (iVar2 != 0) {
    *(int *)(iVar1 + 0x10) = iVar2;
    *(int *)(iVar2 + 0xc) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b56c20 */
uint F_00b56c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb56c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar5 = (*(int * PTR32 *)&gen_args[2])[0x30] - (*(int * PTR32 *)&gen_args[2])[0x2f];
  if ((uVar5 & 0xfffffffc) != 0) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x20))))((*(int * PTR32 *)&gen_args[2]));
    F_00b58970(((byte *)(gen_frame + 0x0)),uVar5);
    uVar5 = (int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))) >> 2;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x10)) = uVar5;
    if (0 < (int)uVar5) {
      do {
        iVar6 = (*(int *)(gen_frame + 0x18));
        piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + (*(int *)(gen_frame + 0x18)) * 4)));
        bVar4 = F_0042b660(piVar1 + 5,(*(undefined4 *)&gen_args[3]));
        if (bVar4 != 0) {
          puVar2 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1]));
          (*(int * PTR32 *)&gen_args[2]) = piVar1;
          if ((&(*(int * PTR32 *)&gen_args[2]) < puVar2) && (puVar3 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[1]))), puVar3 <= &(*(int * PTR32 *)&gen_args[2]))) {
            if (puVar2 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
              F_00b58f20((*(uint * PTR32 *)&gen_args[1]),1);
            }
            iVar6 = (*(int *)(gen_frame + 0x18));
            if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) != (undefined4 *)0x0) {
              *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) =
                   *((undefined4 *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[1]) + ((int)&(*(int * PTR32 *)&gen_args[2]) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
            }
          }
          else {
            if (puVar2 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
              F_00b58f20((*(uint * PTR32 *)&gen_args[1]),1);
            }
            if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) != (undefined4 *)0x0) {
              *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) = piVar1;
            }
          }
          (*(uint * PTR32 *)&gen_args[1])[1] = (*(uint * PTR32 *)&gen_args[1])[1] + 4;
        }
        uVar5 = F_00b56c20((*(undefined * PTR32 *)(gen_frame + 0x14)),(*(uint * PTR32 *)&gen_args[1]),piVar1,(*(undefined4 *)&gen_args[3]));
        (*(int *)(gen_frame + 0x18)) = iVar6 + 1;
      } while (iVar6 + 1 < (int)(*(uint *)(gen_frame + 0x10)));
    }
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) != 0) {
      uVar7 = F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),((int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))) >> 2) * 4,0x134);
      uVar5 = (uint)uVar7;
    }
  }
  return uVar5;
}

/* ref: FUN_00b56d30 */
uint F_00b56d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  F_00b56c20(this,param_1,this,param_2);
  return (uint)param_1;
}

/* ref: FUN_00b56d60 */
uint F_00b56d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  if (iVar1 != param_2[1]) {
    F_00c46e20(iVar1,param_2[1],0);
    param_2[1] = iVar1;
  }
  uVar2 = F_00b56c20(this,param_2,this,param_1);
  return uVar2;
}

/* ref: FUN_00b56db0 */
uint F_00b56db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char cVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  undefined * this_00;
  uint uVar6;
  undefined * this_01;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (0 < param_2) {
    uVar3 = F_004297d0(param_2 + 1,0x2bd);
    F_00c46aa0(uVar3,param_1,param_2);
    *(undefined1 *)(param_2 + uVar3) = 0;
    pcVar4 = (char *)F_00b55f30(uVar3);
    pcVar5 = pcVar4;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 != pcVar4 + 1) {
      cVar2 = *pcVar4;
      pcVar5 = pcVar4;
      while (cVar2 != '\0') {
        if (cVar2 != ' ') {
          this_00 = (undefined *)F_00b56170(pcVar4);
          uVar6 = F_00b56930(this_00);
          this_01 = (undefined *)F_00406b90(0xcc,0,0);
          if (this_01 == (undefined *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)F_00b566f0(this_01);
          }
          F_0042e290(((undefined1 *)(gen_frame + 0x4)),uVar6);
          ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,((undefined1 *)(gen_frame + 0x4)));
          F_0042c880(((undefined1 *)(gen_frame + 0x4)));
          F_00b56bd0(*(undefined * PTR32 *)((int)this + 0xc),piVar7);
          F_004297f0(uVar6,0x2bd);
          F_004297f0(this_00,0x2bd);
          break;
        }
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar1;
      }
    }
    F_004297f0(pcVar4,0x2bd);
    F_004297f0(uVar3,0x2bd);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00b56ee0 */
uint F_00b56ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  
  piVar3 = *(int * PTR32 *)this;
  for (piVar5 = piVar3; (piVar5 != *(int * PTR32 *)((int)this + 4) && (*piVar5 != param_2));
      piVar5 = piVar5 + 1) {
  }
  if (*(int * PTR32 *)((int)this + 4) == *(int * PTR32 *)((int)this + 8)) {
    F_00b58f20(this,1);
  }
  if (*(uint * PTR32 *)((int)this + 4) != (uint *)0x0) {
    **(uint * PTR32 *)((int)this + 4) = param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  iVar4 = *(int *)((int)this + 4);
  iVar1 = iVar4 + -4;
  iVar2 = *(int *)this + ((int)piVar5 - (int)((int)(uintptr_t)piVar3) >> 2) * 4;
  if ((iVar2 != iVar1) && (iVar1 != iVar4)) {
    F_00b58560(iVar2,iVar1,iVar4,0,0);
  }
  return param_1;
}

/* ref: FUN_00b56f60 */
uint F_00b56f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b56ee0((undefined *)((int)this + 0xbc),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b56f70 */
uint F_00b56f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb56f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  int * piVar10;
  char * pcVar11;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(char * PTR32 *)(gen_frame + 0xc)) = param_1;
  if (param_2 == 0) {
LAB_00b5748c: ;
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return 1;
  }
  for (; (cVar1 = *param_1, cVar1 == ' ' || (('\b' < cVar1 && ((cVar1 < '\v' || (cVar1 == '\r'))))))
      ; param_1 = param_1 + 1) {
  }
  cVar1 = *param_1;
  (*(char * PTR32 *)(gen_frame + 0xc)) = param_1;
  if (cVar1 != '?') {
    if (cVar1 != '!') {
      if (cVar1 == '/') {
        (*(char * PTR32 *)(gen_frame + 0xc)) = param_1 + 1;
        uVar6 = F_00b55e50(&(*(char * PTR32 *)(gen_frame + 0x4)),&(*(char * PTR32 *)(gen_frame + 0xc)));
        iVar4 = *(int *)((int)this + 0xc);
        uVar6 = F_0042cc20(((undefined1 *)(gen_frame + 0x64)),(*(char * PTR32 *)(gen_frame + 0x4)),uVar6);
        bVar3 = F_0042b660((undefined *)(iVar4 + 0x14),uVar6);
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        if (bVar3 != 0) {
          *(undefined4 *)((int)this + 0xc) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 0;
        }
      }
      else {
        uVar6 = F_00b55e50(&(*(char * PTR32 *)(gen_frame + 0x4)),&(*(char * PTR32 *)(gen_frame + 0xc)));
        if (uVar6 != 0) {
          piVar9 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
          iVar4 = *piVar9;
          uVar6 = F_0042cc20(((undefined1 *)(gen_frame + 0x64)),(*(char * PTR32 *)(gen_frame + 0x4)),uVar6);
          ((code *)*(gen_code32 *)(iVar4 + 8))(piVar9,uVar6);
          F_0042c880(((undefined1 *)(gen_frame + 0x64)));
          F_00b56bd0(*(undefined * PTR32 *)((int)this + 0xc),piVar9);
          pcVar11 = (*(char * PTR32 *)(gen_frame + 0xc));
LAB_00b572b0: ;
          for (; (cVar1 = *pcVar11, cVar1 == ' ' ||
                 (('\b' < cVar1 && ((cVar1 < '\v' || (cVar1 == '\r')))))); pcVar11 = pcVar11 + 1) {
          }
          (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
          if (*pcVar11 == '/') {
LAB_00b57477: ;
            F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
            return 0;
          }
          if (*pcVar11 == '>') {
            *(int * PTR32 *)((int)this + 0xc) = piVar9;
            goto LAB_00b57477;
          }
          for (; (cVar1 = *pcVar11, cVar1 == ' ' ||
                 (('\b' < cVar1 && ((cVar1 < '\v' || (cVar1 == '\r')))))); pcVar11 = pcVar11 + 1) {
          }
          (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
          uVar6 = F_00b55e50(&(*(char * PTR32 *)(gen_frame + 0x4)),&(*(char * PTR32 *)(gen_frame + 0xc)));
          if (uVar6 != 0) {
            pvVar5 = (undefined *)F_00406b90(0xcc,0,0);
            if (pvVar5 == (undefined *)0x0) {
              (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
            }
            else {
              (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)F_00b56670(pvVar5);
            }
            piVar10 = (*(int * PTR32 *)(gen_frame + 0x8));
            iVar4 = *(*(int * PTR32 *)(gen_frame + 0x8));
            uVar6 = F_0042cc20(((undefined1 *)(gen_frame + 0x64)),(*(char * PTR32 *)(gen_frame + 0x4)),uVar6);
            ((code *)*(gen_code32 *)(iVar4 + 8))(piVar10,uVar6);
            F_0042c880(((undefined1 *)(gen_frame + 0x64)));
            if (*(*(char * PTR32 *)(gen_frame + 0xc)) != '=') goto LAB_00b5748c;
            pcVar11 = (*(char * PTR32 *)(gen_frame + 0xc)) + 1;
            (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
            for (; (cVar1 = *pcVar11, cVar1 == ' ' ||
                   (('\b' < cVar1 && ((cVar1 < '\v' || (cVar1 == '\r')))))); pcVar11 = pcVar11 + 1)
            {
            }
            cVar1 = *pcVar11;
            iVar4 = 0;
            (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
            if ((cVar1 == '\"') || (cVar1 == '\'')) {
              (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar11 + 1;
              cVar2 = *(*(char * PTR32 *)(gen_frame + 0x4));
              pcVar11 = (*(char * PTR32 *)(gen_frame + 0x4));
              while (cVar1 != cVar2) {
                pcVar11 = pcVar11 + 1;
                iVar4 = iVar4 + 1;
                cVar2 = *pcVar11;
              }
              pcVar11 = pcVar11 + 1;
              (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar11;
              if (iVar4 < 0) goto LAB_00b5748c;
              if (0 < iVar4) {
                F_0042cc20(((undefined1 *)(gen_frame + 0x64)),(*(char * PTR32 *)(gen_frame + 0x4)),iVar4);
                uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x64)));
                pvVar5 = (undefined *)F_00b56170(uVar6);
                uVar6 = F_00b56930(pvVar5);
                F_0042e290(((undefined1 *)(gen_frame + 0x10)),uVar6);
                ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x10)));
                F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                F_004297f0(uVar6,0x2bd);
                F_004297f0(pvVar5,0x2bd);
                F_0042c880(((undefined1 *)(gen_frame + 0x64)));
                piVar10 = (*(int * PTR32 *)(gen_frame + 0x8));
              }
            }
            F_00b56b60(piVar9 + 0x33,piVar10);
            goto LAB_00b572b0;
          }
        }
      }
      goto LAB_00b5748c;
    }
    if (((4 < param_2) && (iVar4 = F_00c4b813("--",param_1 + 1,2), iVar4 == 0)) &&
       (iVar4 = F_00c4b813("--",param_1 + param_2 + -2,2), iVar4 == 0)) {
      pvVar5 = (undefined *)F_00406b90(0xcc,0,0);
      if (pvVar5 == (undefined *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)F_00b56810(pvVar5);
      }
      uVar6 = F_004297d0(param_2 + -4,0x2bd);
      F_00c46aa0(uVar6,param_1 + 3,param_2 + -5);
      *(undefined1 *)(param_2 + -5 + uVar6) = 0;
      uVar7 = F_00b55f30(uVar6);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)*(*(int * PTR32 *)(gen_frame + 0x8));
      uVar8 = F_0042cc20(((undefined1 *)(gen_frame + 0x64)),uVar7,REFG(undefined4, 0x108cc50));
      piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
      ((code *)*(gen_code32 *)((*(char * PTR32 *)(gen_frame + 0x4)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)),uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      F_004297f0(uVar7,0x2bd);
      F_004297f0(uVar6,0x2bd);
      F_00b56bd0(*(undefined * PTR32 *)((int)this + 0xc),piVar9);
      param_1 = (*(char * PTR32 *)(gen_frame + 0xc));
    }
    if (((9 < param_2) && (iVar4 = F_00c4b813("[CDATA[",param_1 + 1,7), iVar4 == 0)) &&
       (iVar4 = F_00c4b813("]]",param_1 + param_2 + -2,2), iVar4 == 0)) {
      pvVar5 = (undefined *)F_00406b90(0xcc,0,0);
      if (pvVar5 == (undefined *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)F_00b56780(pvVar5);
      }
      uVar6 = F_004297d0(param_2 + -9,0x2bd);
      F_00c46aa0(uVar6,param_1 + 8,param_2 + -10);
      *(undefined1 *)(param_2 + -10 + uVar6) = 0;
      uVar7 = F_00b55f30(uVar6);
      iVar4 = *(*(int * PTR32 *)(gen_frame + 0x8));
      uVar8 = F_0042cc20(((undefined1 *)(gen_frame + 0x64)),uVar7,REFG(undefined4, 0x108cc50));
      piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
      ((code *)*(gen_code32 *)(iVar4 + 0xc))((*(int * PTR32 *)(gen_frame + 0x8)),uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      F_004297f0(uVar7,0x2bd);
      F_004297f0(uVar6,0x2bd);
      F_00b56bd0(*(undefined * PTR32 *)((int)this + 0xc),piVar9);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: FUN_00b574b0 */
uint F_00b574b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb574b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  bool bVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char * _Str1;
  int local_10;
  undefined4 local_c;
  
  iVar7 = 0;
  local_10 = 0;
  local_c = 0;
  bVar2 = false;
  if (param_2 < 0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    param_2 = (int)pcVar3 - (int)(param_1 + 1);
  }
  if ((2 < param_2) && (iVar4 = F_00c4b813(param_1,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x10f12b4)))),3), iVar4 == 0)) {
    iVar7 = 3;
    local_10 = 3;
  }
  if (iVar7 < param_2) {
    pcVar3 = param_1 + iVar7;
    iVar4 = param_2 - iVar7;
    do {
      cVar1 = *pcVar3;
      switch((unsigned int)(uintptr_t)(local_c)) {
      case 0: ;
        if (cVar1 == '<') {
          uVar5 = F_00b56db0(this,param_1 + local_10,iVar7 - local_10);
          if (uVar5 != 0) {
            return uVar5;
          }
          local_10 = iVar7 + 1;
          local_c = 1;
          bVar2 = true;
        }
        break;
      case 1: ;
        if ((!bVar2) || (bVar2 = false, cVar1 != '!')) {
          if (cVar1 == '>') {
            uVar5 = F_00b56f70(this,param_1 + local_10,iVar7 - local_10);
            if (uVar5 != 0) {
              return uVar5;
            }
            local_10 = iVar7 + 1;
            local_c = 0;
          }
          break;
        }
        iVar6 = F_00c4b813("!--",param_1 + local_10,3);
        if (iVar6 == 0) {
          iVar7 = iVar7 + 3;
          iVar4 = iVar4 + -3;
          local_c = 2;
          pcVar3 = pcVar3 + 3;
        }
        else {
          iVar6 = F_00c4b813("![CDATA[",param_1 + local_10,8);
          if (iVar6 != 0) break;
          iVar7 = iVar7 + 8;
          iVar4 = iVar4 + -8;
          pcVar3 = pcVar3 + 8;
          local_c = 3;
        }
        goto LAB_00b5762a;
      case 2: ;
        if (2 < iVar4) {
          _Str1 = "-->";
LAB_00b57609: ;
          iVar6 = F_00c4b813(_Str1,pcVar3,3);
          if (iVar6 == 0) {
            iVar7 = iVar7 + 2;
            iVar4 = iVar4 + -2;
            pcVar3 = pcVar3 + 2;
            local_c = 1;
            goto LAB_00b5762a;
          }
        }
        break;
      case 3: ;
        if (2 < iVar4) {
          _Str1 = "]]>";
          goto LAB_00b57609;
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
      pcVar3 = pcVar3 + 1;
LAB_00b5762a: ;
    } while (iVar7 < param_2);
  }
  return 0;
}

/* ref: FUN_00b57650 */
uint F_00b57650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * PTR32 * param_2 = (undefined4 * PTR32 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint uVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * PTR32 * PTR32 * pppuVar6;
  undefined * this_00;
  undefined4 * PTR32 * ppuVar7;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  (*(uint *)(gen_frame + 0xd0)) = 3;
  (*(uint *)(gen_frame + 0xcc)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 * PTR32 *)0x0;
  F_0042eca0(param_1,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_2;
  while ((*(uint *)(gen_frame + 0x10)) < (*(uint *)(gen_frame + 0xcc))) {
    (*(int *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0xcc)) - (*(uint *)(gen_frame + 0x10));
    if ((*(int *)(gen_frame + 0x8)) == 0) break;
    pppuVar2 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
    if ((*(uint *)(gen_frame + 0xd0)) < 4) {
      pppuVar2 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc));
    }
    (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) = pppuVar2 + (*(uint *)(gen_frame + 0x10));
    while( true ) {
      pppuVar2 = (undefined4 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
      iVar5 = (*(int *)(gen_frame + 0x8));
      while( true ) {
        if (iVar5 == 0) goto LAB_00b576f3;
        if (*pppuVar2 == param_2) break;
        pppuVar2 = pppuVar2 + 1;
        iVar5 = iVar5 + -1;
      }
      iVar5 = 1;
      ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      pppuVar6 = pppuVar2;
      while (*pppuVar6 == (undefined4 * PTR32 *)*ppuVar7) {
        pppuVar6 = pppuVar6 + 1;
        ppuVar7 = ppuVar7 + 1;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) goto LAB_00b57794;
      }
      if ((-(uint)(*pppuVar6 < *ppuVar7) & 0xfffffffe) == 0xffffffff) break;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + (-1 - ((int)pppuVar2 - (int)((int)(uintptr_t)(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))) >> 2));
      (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) = pppuVar2 + 1;
    }
LAB_00b57794: ;
    pppuVar6 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
    if ((*(uint *)(gen_frame + 0xd0)) < 4) {
      pppuVar6 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc));
    }
    iVar5 = (int)pppuVar2 - (int)((int)(uintptr_t)pppuVar6) >> 2;
    if (iVar5 == -1) break;
    F_0042e230(((undefined1 *)(gen_frame + 0x68)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc)));
    uVar4 = F_0042d9b0(((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x68)),(*(uint *)(gen_frame + 0x10)),iVar5 - (*(uint *)(gen_frame + 0x10)));
    uVar3 = *(uint *)((int)this + 4);
    if ((uVar4 < uVar3) && (uVar1 = *(uint *)this, uVar1 <= uVar4)) {
      if (uVar3 == *(uint *)((int)this + 8)) {
        F_00b59150(this,1);
      }
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) {
        uVar4 = ((int)(uVar4 - uVar1) / 0x54) * 0x54 + *(int *)this;
LAB_00b5785f: ;
        F_0042cbc0(this_00,uVar4);
      }
    }
    else {
      if (uVar3 == *(uint *)((int)this + 8)) {
        F_00b59150(this,1);
      }
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) goto LAB_00b5785f;
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
    F_0042c880(((undefined1 *)(gen_frame + 0x68)));
    (*(uint *)(gen_frame + 0x10)) = iVar5 + 1;
  }
LAB_00b576f3: ;
  F_0042e230(((undefined1 *)(gen_frame + 0x68)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc)));
  uVar3 = F_0042d9b0(((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x68)),(*(uint *)(gen_frame + 0x10)),0xffffffff);
  F_00b59290(this,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x68)));
  if (3 < (*(uint *)(gen_frame + 0xd0))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0],(*(uint *)(gen_frame + 0xd0)) * 4 + 4,0x3c);
  }
  (*(uint *)(gen_frame + 0xd0)) = 3;
  (*(uint *)(gen_frame + 0xcc)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)this;
}

/* ref: FUN_00b578a0 */
uint F_00b578a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb578a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b578b0 */
uint F_00b578b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb578b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b578c0 */
uint F_00b578c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb578c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b57910 */
uint F_00b57910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57910u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b579b0 */
uint F_00b579b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb579b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00b579f0 */
uint F_00b579f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb579f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x134);
  return uVar1;
}

/* ref: FUN_00b57a20 */
uint F_00b57a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x134);
  return (uint)uVar1;
}

/* ref: FUN_00b57a60 */
uint F_00b57a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b57a90 */
uint F_00b57a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57a90u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00b57ab0 */
uint F_00b57ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57ab0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57ac0 */
unsigned int F_00b57ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57ac0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  if (param_1 != param_2) {
    do {
      if (*param_1 == *param_3) {
        return 0;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b57ae0 */
uint F_00b57ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57af0 */
uint F_00b57af0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57b10 */
uint F_00b57b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57b10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b57b50 */
uint F_00b57b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57b50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b57b70 */
uint F_00b57b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b57bb0 */
uint F_00b57bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57be0 */
uint F_00b57be0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57be0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57bf0 */
uint F_00b57bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb57bf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57c00 */
uint F_00b57c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 4);
}

/* ref: FUN_00b57c20 */
uint F_00b57c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57c20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 4);
}

/* ref: Component::Xml::DOMParser::vf0 */
uint F_00b57c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f12d4));
  if ((*(int *)(this + 8) == 0) &&
     (puVar1 = *(undefined4 * PTR32 *)(this + 4), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b57c90 */
uint F_00b57c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57c90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 2;
}

/* ref: FUN_00b57ce0 */
uint F_00b57ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b57d10 */
uint F_00b57d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (0x30c30c3 - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00b57d60 */
uint F_00b57d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00b57d90 */
uint F_00b57d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57d90u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  return (-(uint)(*param_1 < *param_2) & 0xfffffffe) + 1;
}

/* ref: FUN_00b57dc0 */
uint F_00b57dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57dc0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  if (param_2 != 0) {
    do {
      if (*param_1 == *param_3) {
        return (uint)param_1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00b57de0 */
uint F_00b57de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57de0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00b57e20 */
uint F_00b57e20(unsigned int gen_a0)
{
  GEN_ENTER(0xb57e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x30c30c4) && (uVar1 = F_004069f0(param_1 * 0x54), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00b57e70 */
unsigned int F_00b57e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00b57e90 */
uint F_00b57e90(unsigned int gen_a0)
{
  GEN_ENTER(0xb57e90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b57ea0 */
uint F_00b57ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b57eb0 */
unsigned int F_00b57eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00b57ed0 */
unsigned int F_00b57ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00b57ef0 */
uint F_00b57ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00b57f10 */
uint F_00b57f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57f10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -4;
  return (uint)in_ecx;
}

/* ref: FUN_00b57f40 */
uint F_00b57f40(unsigned int gen_a0)
{
  GEN_ENTER(0xb57f40u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00b57f50 */
unsigned int F_00b57f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00b57f70 */
uint F_00b57f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57f70u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = *param_1 + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00b57f90 */
unsigned int F_00b57f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb57f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b57fb0 */
uint F_00b57fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57fb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 2;
}

/* ref: FUN_00b57fd0 */
uint F_00b57fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb57fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b58010 */
uint F_00b58010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b58020 */
uint F_00b58020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b58040 */
uint F_00b58040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb58040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * puVar1;
  uint * puVar2;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  int iVar8;
  
  if ((param_3 != 0) || (*(uint *)((int)this + 0x10) < param_2)) {
    if ((param_2 < *(uint *)((int)this + 0x10)) &&
       (uVar5 = *(uint *)((int)this + 0x10) - param_2, param_3 <= uVar5)) {
      iVar8 = uVar5 + (1 - param_3);
      pvVar6 = this;
      if (3 < *(uint *)((int)this + 0x14)) {
        pvVar6 = *(undefined * PTR32 *)this;
      }
      puVar3 = (uint *)((int)pvVar6 + param_2 * 4);
      for (; iVar8 != 0; iVar8 = iVar8 + (-1 - (iVar7 >> 2))) {
        puVar4 = puVar3;
        iVar7 = iVar8;
        while (puVar1 = param_1, uVar5 = param_3, puVar2 = puVar4, *puVar4 != *param_1) {
          puVar4 = puVar4 + 1;
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) goto LAB_00b5809c;
        }
        while( true ) {
          if (uVar5 == 0) goto LAB_00b580bf;
          if (*puVar2 != *puVar1) break;
          puVar1 = puVar1 + 1;
          uVar5 = uVar5 - 1;
          puVar2 = puVar2 + 1;
        }
        if ((-(uint)(*puVar2 < *puVar1) & 0xfffffffe) == 0xffffffff) {
LAB_00b580bf: ;
          if (3 < *(uint *)((int)this + 0x14)) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)puVar4 - (int)((int)(uintptr_t)this) >> 2;
        }
        iVar7 = (int)puVar4 - (int)puVar3;
        puVar3 = puVar4 + 1;
      }
    }
LAB_00b5809c: ;
    param_2 = 0xffffffff;
  }
  return param_2;
}

/* ref: FUN_00b58100 */
byte F_00b58100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 4,0,0x134);
    *(uint *)((int)this + 8) = param_1 * 4 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b58170 */
uint F_00b58170(unsigned int gen_a0)
{
  GEN_ENTER(0xb58170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x134);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b581b0 */
uint F_00b581b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb581b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x30c30c4) && (uVar1 = F_004069f0(param_1 * 0x54), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00b58200 */
uint F_00b58200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb58200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  if (param_2 != param_3) {
    do {
      if (*param_2 == *param_4) break;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b58230 */
unsigned int F_00b58230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00b58250 */
unsigned int F_00b58250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b58270 */
unsigned int F_00b58270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00b58290 */
unsigned int F_00b58290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58290u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00b582b0 */
uint F_00b582b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb582b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00b582d0 */
uint F_00b582d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb582d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * -4;
  return (uint)param_1;
}

/* ref: FUN_00b582f0 */
unsigned int F_00b582f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb582f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b58320 */
uint F_00b58320(unsigned int gen_a0)
{
  GEN_ENTER(0xb58320u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00b58330 */
uint F_00b58330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58330u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = *param_1 + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00b58350 */
unsigned int F_00b58350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00b58370 */
unsigned int F_00b58370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: FUN_00b583a0 */
uint F_00b583a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb583a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = *param_3 + (param_2 - param_1 >> 2);
  return (uint)param_3;
}

/* ref: FUN_00b583c0 */
uint F_00b583c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb583c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b583e0 */
uint F_00b583e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb583e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00b58040((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),1);
  return uVar1;
}

/* ref: FUN_00b58400 */
uint F_00b58400(unsigned int gen_a0)
{
  GEN_ENTER(0xb58400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x134);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b58440 */
uint F_00b58440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b58450 */
uint F_00b58450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b58460 */
uint F_00b58460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb58460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b584c0 */
unsigned int F_00b584c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb584c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00b584e0 */
unsigned int F_00b584e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb584e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b58510 */
uint F_00b58510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00b58520 */
unsigned int F_00b58520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58520u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b58550 */
uint F_00b58550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58550u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1 >> 2;
}

/* ref: FUN_00b58560 */
unsigned int F_00b58560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb58560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  int iVar10;
  
  iVar4 = (int)param_3 - (int)((int)(uintptr_t)param_1) >> 2;
  iVar10 = param_2 - (int)((int)(uintptr_t)param_1) >> 2;
  iVar8 = iVar10;
  iVar3 = iVar4;
  while (iVar2 = iVar8, iVar2 != 0) {
    iVar8 = iVar3 % iVar2;
    iVar3 = iVar2;
  }
  if ((iVar3 < iVar4) && (0 < iVar3)) {
    puVar7 = param_1 + iVar3;
    do {
      puVar6 = puVar7 + iVar10;
      puVar9 = puVar7;
      if (puVar7 + iVar10 == param_3) {
        puVar6 = param_1;
      }
      do {
        puVar5 = puVar6;
        uVar1 = *puVar9;
        *puVar9 = *puVar5;
        *puVar5 = uVar1;
        iVar8 = (int)param_3 - (int)((int)(uintptr_t)puVar5) >> 2;
        if (iVar10 < iVar8) {
          puVar6 = puVar5 + iVar10;
        }
        else {
          puVar6 = param_1 + (iVar10 - iVar8);
        }
        puVar9 = puVar5;
      } while (puVar6 != puVar7);
      iVar3 = iVar3 + -1;
      puVar7 = puVar7 + -1;
    } while (0 < iVar3);
  }
  return 0;
}

/* ref: FUN_00b58610 */
uint F_00b58610(unsigned int gen_a0)
{
  GEN_ENTER(0xb58610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x134);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b58660 */
uint F_00b58660(unsigned int gen_a0)
{
  GEN_ENTER(0xb58660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x134);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b586a0 */
uint F_00b586a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb586a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b586e0 */
unsigned int F_00b586e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb586e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b58710 */
unsigned int F_00b58710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58710u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00b58740 */
unsigned int F_00b58740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00b58770 */
unsigned int F_00b58770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58770u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b587a0 */
uint F_00b587a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb587a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (param_3 != (undefined *)0x0) {
      F_0042cbc0(param_3,param_1);
    }
    param_1 = param_1 + 0x54;
    param_3 = (undefined *)((int)param_3 + 0x54);
  } while (param_1 != param_2);
  return (uint)param_3;
}

/* ref: FUN_00b587e0 */
unsigned int F_00b587e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb587e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00b58560(param_1,param_2,param_3,0,0);
  return 0;
}

/* ref: FUN_00b58800 */
unsigned int F_00b58800(unsigned int gen_a0)
{
  GEN_ENTER(0xb58800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: Component::Xml::DOM_Node::vf1 */
byte F_00b58830(void)
{
  GEN_ENTER(0xb58830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::Xml::DOM_Node::vf2 */
uint F_00b58840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(this + 0x14,param_1);
  return uVar1;
}

/* ref: Component::Xml::DOM_Node::vf3 */
uint F_00b58850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(this + 0x68,param_1);
  return uVar1;
}

/* ref: Component::Xml::DOM_Node::vf4 */
uint F_00b58860(void)
{
  GEN_ENTER(0xb58860u, 0u, 0u, 0u, 0u);
  return 0x14c4c00;
}

/* ref: Component::Xml::DOM_Node::vf5 */
uint F_00b58870(void)
{
  GEN_ENTER(0xb58870u, 0u, 0u, 0u, 0u);
  return 0x14c4c00;
}

/* ref: Component::Xml::DOM_Node::vf7 */
uint F_00b58880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0x14c4c10;
}

/* ref: Component::Xml::DOM_Node::vf6 */
uint F_00b58890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0x14c4c10;
}

/* ref: Component::Xml::DOM_Node::vf8 */
uint F_00b588a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb588a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbc;
}

/* ref: Component::Xml::DOM_Node::vf9 */
uint F_00b588b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb588b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbc;
}

/* ref: Component::Xml::DOM_Element::vf4 */
uint F_00b588c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb588c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xcc;
}

/* ref: Component::Xml::DOM_Element::vf5 */
uint F_00b588d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb588d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xcc;
}

/* ref: Component::Xml::DOM_Element::vf6 */
uint F_00b588e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb588e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    return param_1 + 0x68;
  }
  return 0x14c4c10;
}

/* ref: Component::Xml::DOM_Element::vf1 */
byte F_00b58910(unsigned int gen_a0)
{
  GEN_ENTER(0xb58910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(int *)(in_ecx + 0xd0) - *(int *)(in_ecx + 0xcc) & 0xfffffffcU) != 0;
}

/* ref: Component::Xml::DOM_Element::vf7 */
uint F_00b58930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58930u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00b56060((*(undefined * PTR32 *)&gen_args[0]) + 0xcc,(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[1]));
  uVar1 = ((int)uVar1 < 0) - 1 & (*(uint *)&gen_args[1]);
  if (uVar1 != 0) {
    return uVar1 + 0x68;
  }
  return 0x14c4c10;
}

/* ref: FUN_00b58970 */
uint F_00b58970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar3 = param_1[1];
  iVar1 = *param_1;
  *(undefined4 *)this = 0;
  iVar3 = iVar3 - iVar1 >> 2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)F_004296a0(iVar3 * 4,0,0x134);
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar4 + iVar3;
    puVar2 = (undefined4 *)param_1[1];
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
      }
      puVar4 = puVar4 + 1;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  }
  return (uint)this;
}

/* ref: FUN_00b589f0 */
uint F_00b589f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb589f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = *(uint *)((int)this + 0x14);
    puVar1 = this;
    if (3 < uVar3) {
      puVar1 = *(undefined4 * PTR32 *)this;
    }
    if (puVar1 <= param_1) {
      pvVar2 = this;
      if (3 < uVar3) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined4 *)GEN_TOP(((int)pvVar2 + *(int *)((int)this + 0x10) * 4)))) {
        pvVar2 = this;
        if (3 < uVar3) {
          pvVar2 = *(undefined * PTR32 *)this;
        }
        uVar3 = F_005ce350(this,this,(int)param_1 - (int)((int)(uintptr_t)pvVar2) >> 2,param_2);
        return uVar3;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_0042f810(this,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (3 < *(uint *)((int)this + 0x14)) {
      **(undefined4 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (3 < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  iVar4 = (int)pvVar2 - (int)param_1;
  uVar3 = param_2;
  do {
    *(undefined4 *)(iVar4 + (int)param_1) = *param_1;
    param_1 = param_1 + 1;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 4) {
    *(undefined4 *)((int)this + param_2 * 4) = 0;
    return (uint)this;
  }
  *(undefined4 *)(*(int *)this + param_2 * 4) = 0;
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00b58af0 */
unsigned int F_00b58af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00b58b20 */
unsigned int F_00b58b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58b20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_00b58b50 */
uint F_00b58b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58b50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x54);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00b58b90 */
uint F_00b58b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb58b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  if ((param_2 != param_3) && (param_3 != param_4)) {
    F_00b58560(param_2,param_3,param_4,0,0);
    param_2 = param_2 + (param_4 - param_3 >> 2) * 4;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Component::Xml::DOM_Attr::vf0 */
uint F_00b58be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1364));
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Xml::DOM_Document::vf0 */
uint F_00b58c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f130c));
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Xml::DOM_Text::vf0 */
uint F_00b58c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f1390));
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Xml::DOM_CDATASection::vf0 */
uint F_00b58ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f13bc));
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Xml::DOM_Comment::vf0 */
uint F_00b58ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10f13e8));
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Xml::DOM_Node::vf0 */
uint F_00b58d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b56410(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b58d40 */
uint F_00b58d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b58970(this,param_1);
  return (uint)this;
}

/* ref: Component::Xml::DOM_Element::vf0 */
uint F_00b58d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b56600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b58d90 */
uint F_00b58d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = 0;
  F_00b589f0(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00b58dc0 */
unsigned int F_00b58dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  for (; param_1 != param_2; param_1 = (undefined *)((int)param_1 + 0x54)) {
    F_0042c880(param_1);
  }
  return 0;
}

/* ref: FUN_00b58df0 */
uint F_00b58df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x134);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0x134);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00b58ea0 */
uint F_00b58ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb58ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined *)0x0) {
        F_0042cbc0(param_3,iVar1 + (int)param_3);
      }
      param_3 = (undefined *)((int)param_3 + 0x54);
    } while (iVar1 + (int)param_3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00b58ee0 */
uint F_00b58ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xb58ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
      F_0042c880(this_00);
    }
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b58f20 */
uint F_00b58f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b58df0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b58df0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b58f90 */
uint F_00b58f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb58f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  if (0x30c30c3 < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar1 < param_1) {
    (*(uint *)(gen_frame + 0x8)) = 0;
    if (param_1 != 0) {
      (*(uint *)(gen_frame + 0x8)) = F_004069f0(param_1 * 0x54);
      if ((*(uint *)(gen_frame + 0x8)) == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
    }
    F_00b58ea0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),(*(uint *)(gen_frame + 0x8)));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = *(undefined * PTR32 *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    iVar2 = (int)(*(undefined * PTR32 *)(gen_frame + 0x4)) - (int)this_00;
    if (this_00 != (undefined *)0x0) {
      if (this_00 != (*(undefined * PTR32 *)(gen_frame + 0x4))) {
        do {
          F_0042c880(this_00);
          this_00 = (undefined *)((int)this_00 + 0x54);
        } while (this_00 != (*(undefined * PTR32 *)(gen_frame + 0x4)));
      }
      F_00406ad0(*(undefined4 *)this);
    }
    uVar1 = param_1 * 0x54 + (*(uint *)(gen_frame + 0x8));
    *(uint *)((int)this + 8) = uVar1;
    *(uint *)((int)this + 4) = (iVar2 / 0x54) * 0x54 + (*(uint *)(gen_frame + 0x8));
    *(uint *)this = (*(uint *)(gen_frame + 0x8));
  }
  return uVar1;
}

/* ref: FUN_00b59070 */
unsigned int F_00b59070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_00b58f20(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00b590a0 */
uint F_00b590a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb590a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
      F_0042c880(this_00);
    }
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b590e0 */
unsigned int F_00b590e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb590e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b58f20(this,1);
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
      F_00b58f20(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00b59150 */
unsigned int F_00b59150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x54;
  if (0x30c30c3U - param_1 < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (0x30c30c3 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00b58f90(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00b58f90(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00b591e0 */
uint F_00b591e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb591e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_00b58f20(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    **(undefined4 * PTR32 *)((int)this + 4) = *param_3;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  iVar2 = *(int *)((int)this + 4);
  iVar3 = (param_2 - iVar1 >> 2) * 4;
  iVar1 = iVar2 + -4;
  iVar4 = *(int *)this + iVar3;
  if ((iVar4 != iVar1) && (iVar1 != iVar2)) {
    F_00b58560(iVar4,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar3;
  return (uint)param_1;
}

/* ref: FUN_00b59250 */
uint F_00b59250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59250u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  if (0 < (int)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0]) & 0xfffffffcU)) {
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + -4)));
    F_00b590e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]));
    return uVar1;
  }
  F_00b590e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]));
  return 0;
}

/* ref: FUN_00b59290 */
unsigned int F_00b59290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00b59150(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00b59150(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return 0;
}

/* ref: FUN_00b59310 */
uint F_00b59310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb59310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    F_00b58f20(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    **(undefined4 * PTR32 *)((int)this + 4) = *param_3;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  iVar2 = *(int *)((int)this + 4);
  iVar3 = (param_2 - iVar1 >> 2) * 4;
  iVar1 = iVar2 + -4;
  iVar4 = *(int *)this + iVar3;
  if ((iVar4 != iVar1) && (iVar1 != iVar2)) {
    F_00b58560(iVar4,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar3;
  return (uint)param_1;
}

/* ref: FUN_00b59380 */
unsigned int F_00b59380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b56b60((undefined *)((int)this + 0xcc),param_1);
  return 0;
}

/* ref: Client::System::Scheduler::Object::InclusiveObject::vf0 */
uint F_00b593c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb593c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b593f0 */
uint F_00b593f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb593f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  return param_1;
}

/* ref: FUN_00b59410 */
byte F_00b59410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x14) == param_2;
}

/* ref: FUN_00b59560 */
unsigned int F_00b59560(float gen_a0)
{
  GEN_ENTER(0xb59560u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b595a0 */
uint F_00b595a0(void)
{
  GEN_ENTER(0xb595a0u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4, 0x14c4e78) == (undefined4 *)0x0) {
    REFG(undefined4, 0x14c4e78) = (undefined4 *)F_00406b90(0x20,0,0);
    if (REFG(undefined4, 0x14c4e78) != (undefined4 *)0x0) {
      REFG(undefined4 * PTR32, 0x14c4e78)[1] = 0;
      REFG(undefined4 * PTR32, 0x14c4e78)[2] = 0;
      REFG(undefined4 * PTR32, 0x14c4e78)[3] = 0;
      REFG(undefined4 * PTR32, 0x14c4e78)[4] = 0;
      REFG(undefined4 * PTR32, 0x14c4e78)[6] = 0;
      *REFG(int * PTR32, 0x14c4e78) = (*(undefined * PTR32 (*)[1])REFP(0x10f14a0));
      *(undefined2 *)(REFG(undefined4, 0x14c4e78) + 5) = 1;
      return (uint)REFG(undefined4, 0x14c4e78);
    }
    REFG(undefined4, 0x14c4e78) = (undefined4 *)0x0;
  }
  return (uint)REFG(undefined4, 0x14c4e78);
}

/* ref: FUN_00b595f0 */
uint F_00b595f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb595f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 1;
  }
  return param_1;
}

/* ref: FUN_00b59610 */
unsigned int F_00b59610(unsigned int gen_a0)
{
  GEN_ENTER(0xb59610u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b5aa40(REFG(undefined4, 0x14c4e84),param_1);
  return 0;
}

/* ref: FUN_00b59620 */
byte F_00b59620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar2 = F_00bbaea0(this_00,param_1);
    if ((char)uVar2 != '\0') break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  bVar1 = F_00bc3c50(this_00);
  return bVar1;
}

/* ref: FUN_00b59660 */
uint F_00b59660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00bbaea0(this_00,param_1);
    if ((char)uVar1 != '\0') break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  return (uint)this_00;
}

/* ref: FUN_00b596a0 */
uint F_00b596a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb596a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbadf0(((undefined1 *)(gen_frame + 0x8)),param_1,0);
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00bbaea0(this_00,((undefined1 *)(gen_frame + 0x8)));
    if ((char)uVar1 != '\0') break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  return (uint)this_00;
}

/* ref: FUN_00b596f0 */
uint F_00b596f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb596f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbacc0(((undefined1 *)(gen_frame + 0x8)),param_1);
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00bbaea0(this_00,((undefined1 *)(gen_frame + 0x8)));
    if (((char)uVar1 != '\0') && ((char)param_2 == *(char *)((int)this_00 + 0x3f9))) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  return (uint)this_00;
}

/* ref: FUN_00b59750 */
uint F_00b59750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb59750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  
  F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
  F_00bbacc0(((undefined1 *)(gen_frame + 0x8)),param_1);
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00bbaea0(this_00,((undefined1 *)(gen_frame + 0x8)));
    if (((char)uVar1 != '\0') && ((char)param_2 == *(char *)((int)this_00 + 0x3f9))) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  F_00bc4480(this_00,param_1);
  return (uint)this_00;
}

/* ref: FUN_00b597c0 */
uint F_00b597c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb597c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (((((*(byte *)(uVar1 + 0x3fc) & 1) == 0) && (*(char *)(uVar1 + 0x12) == '\0')) &&
        (*(int *)(uVar1 + 0x14) == param_1)) && (*(char *)(uVar1 + 0x3f9) == '\0')) break;
    uVar1 = *(uint *)(uVar1 + 0x20);
  }
  return uVar1;
}

/* ref: FUN_00b59800 */
unsigned int F_00b59800(unsigned int gen_a0)
{
  GEN_ENTER(0xb59800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  for (iVar1 = *(int *)(in_ecx + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    *(uint *)(iVar1 + 0x3fc) = *(uint *)(iVar1 + 0x3fc) & 0xfffffffb;
  }
  return 0;
}

/* ref: FUN_00b59820 */
unsigned int F_00b59820(unsigned int gen_a0)
{
  GEN_ENTER(0xb59820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 4); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20)) {
    if ((*(uint *)((int)this_00 + 0x3fc) >> 2 & 1) != 0) {
      F_00bc41c0(this_00);
    }
  }
  return 0;
}

/* ref: FUN_00b59850 */
uint F_00b59850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
  }
  for (piVar1 = *(int * PTR32 *)((int)this + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
  }
  return in_EAX;
}

/* ref: FUN_00b598a0 */
uint F_00b598a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb598a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar1 = F_00bbaf90(this_00);
    if (uVar1 == param_1) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20);
  }
  return (uint)this_00;
}

/* ref: FUN_00b598e0 */
unsigned int F_00b598e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb598e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 4); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20)) {
    if (*(char *)((int)this_00 + 0x460) != '\0') {
      F_00bc3cc0(this_00);
    }
  }
  return 0;
}

/* ref: FUN_00b59910 */
unsigned int F_00b59910(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb59910u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    F_00bc5550(iVar1,param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00b59940 */
uint F_00b59940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 4); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20)) {
    bVar1 = F_00bbad00(this_00);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      bVar1 = F_00bbad60(this_00,param_1);
      in_EAX = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) {
        in_EAX = F_00bc5100(this_00);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00b59980 */
unsigned int F_00b59980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  byte bVar2;
  
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 4); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x20)) {
    bVar2 = F_00bbad00(pvVar1);
    if ((bVar2 != 0) && (bVar2 = F_00bbad60(pvVar1,param_1), bVar2 != 0)) {
      F_00bc5110(pvVar1);
    }
  }
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 8); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x20)) {
    bVar2 = F_00bbad00(pvVar1);
    if ((bVar2 != 0) && (bVar2 = F_00bbad60(pvVar1,param_1), bVar2 != 0)) {
      F_00bc5110(pvVar1);
    }
  }
  return 0;
}

/* ref: FUN_00b599f0 */
unsigned int F_00b599f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb599f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 4); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x20)) {
    bVar1 = F_00bbad00(this_00);
    if ((bVar1 != 0) && (bVar1 = F_00bbad60(this_00,param_1), bVar1 != 0)) {
      F_00bc4070(this_00,0xffffffff);
    }
  }
  return 0;
}

/* ref: FUN_00b59a30 */
byte F_00b59a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb59a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * this_00;
  uint uVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) == param_1) {
    uVar3 = F_00bbae30(*(undefined * PTR32 *)((int)this + 0x10));
    if (uVar3 == 0) {
      *(undefined1 *)((int)this + 0x15) = 0;
      return 0;
    }
    this_00 = *(undefined4 * PTR32 *)((int)this + 0xc);
    while (this_00 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)this_00[2];
      F_00bcc8c0(this_00);
      ((code *)*(gen_code32 *)*this_00)(this_00,1);
      this_00 = puVar1;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x404)));
    if (iVar2 != 0) {
      *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x404))) = iVar2 + -1;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 1;
}

/* ref: FUN_00b59aa0 */
byte F_00b59aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xb59aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  byte bVar5;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0xc);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    F_00bcc8c0(puVar3);
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    puVar3 = puVar1;
  }
  iVar2 = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x404) != 0) {
      *(int *)(iVar2 + 0x404) = *(int *)(iVar2 + 0x404) + -1;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar1[8];
    if (puVar1[0x101] == 0) {
      iVar2 = puVar1[7];
      if (iVar2 == 0) {
        *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
      }
      else {
        *(undefined4 * PTR32 *)(iVar2 + 0x20) = puVar3;
      }
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[7] = iVar2;
      }
      bVar5 = F_00bc3b60(puVar1);
      if (bVar5 == 0) {
        puVar1[7] = 0;
        puVar1[8] = *(undefined4 *)((int)this + 8);
        if (*(int *)((int)this + 8) != 0) {
          *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 0x1c))) = puVar1;
        }
        *(undefined4 * PTR32 *)((int)this + 8) = puVar1;
      }
      else {
        F_00b5aa40(REFG(undefined4, 0x14c4e84),puVar1);
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
    }
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 8);
  while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar1[8];
    bVar5 = F_00bc3b60(puVar1);
    if (bVar5 != 0) {
      iVar2 = puVar1[7];
      iVar4 = puVar1[8];
      if (iVar2 == 0) {
        *(int *)((int)this + 8) = iVar4;
      }
      else {
        *(int *)(iVar2 + 0x20) = iVar4;
      }
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x1c) = iVar2;
      }
      F_00b5aa40(REFG(undefined4, 0x14c4e84),puVar1);
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if ((*(int *)((int)this + 4) == 0) && (*(int *)((int)this + 8) == 0)) {
    return 1;
  }
  return 0;
}

