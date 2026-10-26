#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::Graphics::Scene::CharacterBase::vf89 */
unsigned int F_006893f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6893f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf90 */
unsigned int F_00689400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00689410 */
byte F_00689410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 4) = param_2;
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf32 */
unsigned int F_00689420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf33 */
unsigned int F_00689430(void)
{
  GEN_ENTER(0x689430u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf34 */
uint F_00689440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(int *)(this + 0x714) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
  }
  *(uint *)(this + 0x6fc) = param_1;
  uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4),0,0);
  *(uint *)(this + 0x714) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x714) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1);
  }
  uVar1 = F_00b82430(this + 0x700,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf36 */
byte F_006894c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6894c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x78) != 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf37 */
uint F_006894d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6894d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b82530(in_ecx + 0x700);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf38 */
uint F_006894e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6894e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b825e0(this + 0x700,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf39 */
uint F_006894f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6894f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b82190(param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf40 */
unsigned int F_00689500(unsigned int gen_a0)
{
  GEN_ENTER(0x689500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b821d0(this + 0x700);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf41 */
uint F_00689510(unsigned int gen_a0)
{
  GEN_ENTER(0x689510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b82200(in_ecx + 0x700);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf42 */
uint F_00689520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b82240(this + 0x700,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf43 */
uint F_00689530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00b82390(this + 0x700,param_1,param_2,param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf44 */
uint F_00689560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b823f0(this + 0x700,param_1,param_2);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf45 */
unsigned int F_00689570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  longlong lVar1;
  byte bVar2;
  
  bVar2 = (byte)*param_1;
  if (*param_2 == 0) {
    lVar1 = ((ulonglong)(((ulonglong)bVar2 < 0x40) ? ((1L << (ulonglong)bVar2)) : 0));
    *(uint *)(this + 0x6f0) = *(uint *)(this + 0x6f0) & ~(uint)lVar1;
    *(uint *)(this + 0x6f4) = *(uint *)(this + 0x6f4) & ~(uint)((ulonglong)lVar1 >> 0x20);
  }
  else {
    lVar1 = ((ulonglong)(((ulonglong)bVar2 < 0x40) ? ((1L << (ulonglong)bVar2)) : 0));
    *(uint *)(this + 0x6f0) = *(uint *)(this + 0x6f0) | (uint)lVar1;
    *(uint *)(this + 0x6f4) = *(uint *)(this + 0x6f4) | (uint)((ulonglong)lVar1 >> 0x20);
  }
  F_0061f2d0(*(undefined * PTR32 *)(this + 0x78),*(undefined4 *)(this + 0x6f0),*(undefined4 *)(this + 0x6f4));
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf46 */
uint F_006895d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6895d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  longlong lVar1;
  
  lVar1 = ((ulonglong)(((ulonglong)(byte)*param_1 < 0x40) ? ((1L << (ulonglong)(byte)*param_1)) : 0));
  if (((uint)lVar1 & *(uint *)(this + 0x6f0)) != 0 ||
      ((uint)((ulonglong)lVar1 >> 0x20) & *(uint *)(this + 0x6f4)) != 0) {
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf47 */
uint F_00689610(unsigned int gen_a0)
{
  GEN_ENTER(0x689610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return *(uint *)(this + 0x6f0);
}

/* ref: Client::Graphics::Scene::CharacterBase::vf48 */
uint F_00689620(unsigned int gen_a0)
{
  GEN_ENTER(0x689620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x78);
}

/* ref: Client::Graphics::Scene::CharacterBase::vf30 */
uint F_00689630(unsigned int gen_a0)
{
  GEN_ENTER(0x689630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2d8);
}

/* ref: Client::Graphics::Scene::Human::vf50 */
uint F_00689650(void)
{
  GEN_ENTER(0x689650u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Human::vf58 */
unsigned int F_00689660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_1 < 10) {
    if (param_2 != 0) {
      F_00513f60(param_2,0,0);
    }
    if (*(int *)(this + param_1 * 4 + 0x7bc) != 0) {
      F_0050c620(*(int *)(this + param_1 * 4 + 0x7bc),0,0);
      *(undefined4 *)(this + param_1 * 4 + 0x7bc) = 0;
    }
    *(int *)(this + param_1 * 4 + 0x7bc) = param_2;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf64 */
uint F_006896c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6896c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (9 < param_2) {
    return 0;
  }
  return (uint)(*(ushort *)(in_ecx + 0x782 + param_2 * 6) >> 10);
}

/* ref: Client::Graphics::Scene::Human::vf65 */
uint F_006896f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6896f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/human/c%04d",(uint)*(ushort *)(this + 0x778));
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf71 */
uint F_00689720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/human/c%04d/animation/%s/timeline/%s.tmb",
             (uint)*(ushort *)(this + 0x778),"dummy",param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf79 */
uint F_00689760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/base/b%04d/eid_c%04db%04d.eid",
             (uint)*(ushort *)(this + 0x778),1,(uint)*(ushort *)(this + 0x778),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf90 */
unsigned int F_00689790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)(this + 0x7f8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(this + 0x7f8) = param_1;
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf83 */
uint F_006897d0(void)
{
  GEN_ENTER(0x6897d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_006897e0 */
uint F_006897e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6897e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_1);
  if (0x191 < (ushort)param_1) {
    if ((ushort)param_1 < 0x4b2) {
      if ((ushort)param_1 == 0x4b1) {
        return 0x44d;
      }
      if ((ushort)param_1 == 0x25c) {
        return 0x1f8;
      }
      if ((ushort)param_1 == 0x2bd) {
        return 0x65;
      }
      if ((ushort)param_1 == 0x3e9) {
        return 0x259;
      }
    }
    else {
      if (((ushort)param_1 != 0x2390) && ((ushort)param_1 != 0x23f4)) {
        return uVar1;
      }
switchD_00689806_caseD_cc: ;
      uVar1 = 0x68;
    }
switchD_00689806_caseD_68: ;
    return uVar1;
  }
  if ((ushort)param_1 != 0x191) {
    switch((unsigned int)(uintptr_t)((ushort)param_1)) {
    case 0x66: ;
    case 0x67: ;
    case 0x12d: ;
      return 0x65;
    default: ;
      goto switchD_00689806_caseD_68;
    case 0xca: ;
    case 0xcb: ;
      break;
    case 0xcc: ;
      goto switchD_00689806_caseD_cc;
    }
  }
  return 0xc9;
}

/* ref: FUN_00689950 */
ushort F_00689950(unsigned int gen_a0)
{
  GEN_ENTER(0x689950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar2 = (uint)(ushort)param_1;
  uVar3 = (ushort)param_1;
  switch((unsigned int)(uintptr_t)(uVar2 % 10)) {
  case 1: ;
    if (uVar2 < 0x386) {
      if (uVar2 == 0x385) {
        return (ushort)param_1;
      }
      iVar1 = uVar2 - 0x65;
    }
    else {
      iVar1 = uVar2 - 0x44d;
    }
    if (iVar1 == 0) {
      return (ushort)param_1;
    }
    if (iVar1 == 100) {
      return (ushort)param_1;
    }
    uVar3 = 0xc9;
  case 3: ;
    break;
  case 2: ;
    uVar3 = 0xc9;
    break;
  case 4: ;
    goto switchD_0068996e_caseD_3;
  default: ;
    goto switchD_0068996e_default;
  }
  if ((uVar2 / 100 & 1) != 0) {
switchD_0068996e_caseD_3: ;
    uVar3 = 0x65;
  }
switchD_0068996e_default: ;
  return uVar3;
}

/* ref: FUN_006899f0 */
ushort F_006899f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6899f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((ushort)param_1 < 0x25d) {
    if ((ushort)param_1 != 0x25c) {
      if ((ushort)param_1 == 0xcb) {
        return 0xc9;
      }
      if (((ushort)param_1 != 0xcc) && ((ushort)param_1 != 0x1f8)) {
        return (ushort)param_1;
      }
    }
  }
  else if (((ushort)param_1 != 0x2390) && ((ushort)param_1 != 0x23f4)) {
    return (ushort)param_1;
  }
  return 0x68;
}

/* ref: FUN_00689a40 */
uint F_00689a40(unsigned int gen_a0)
{
  GEN_ENTER(0x689a40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_1);
  if ((ushort)param_1 < 0x322) {
    if ((ushort)param_1 == 0x321) {
      return uVar1;
    }
    if ((ushort)param_1 == 0xc9) {
      return uVar1;
    }
    bVar2 = (ushort)param_1 == 0x2bd;
  }
  else {
    if ((ushort)param_1 == 0x385) {
      return uVar1;
    }
    bVar2 = (ushort)param_1 == 0x44d;
  }
  if (!bVar2) {
    if ((ushort)param_1 < 0x25a) {
      if (((ushort)param_1 != 0x259) && (((ushort)param_1 == 0x12d || ((ushort)param_1 != 0x191))))
      {
        return 0x65;
      }
    }
    else if ((ushort)param_1 != 0x3e9) {
      if ((ushort)param_1 != 0x4b1) {
        return 0x65;
      }
      return 0x44d;
    }
    uVar1 = 0xc9;
  }
  return uVar1;
}

/* ref: FUN_00689ac0 */
ushort F_00689ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x689ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ushort uVar1;
  bool bVar2;
  
  uVar1 = (ushort)param_1;
  if ((uint)(ushort)param_1 % 10 == 2) {
    uVar1 = (ushort)param_1 - 1;
  }
  if (uVar1 < 0x2be) {
    if (uVar1 == 0x2bd) {
      return 0x65;
    }
    if (uVar1 < 0x1f9) {
      if (uVar1 == 0x1f8) {
        return 0x68;
      }
      if (uVar1 == 0xcc) {
        return 0x68;
      }
      if (uVar1 != 0x1f5) {
        return uVar1;
      }
      return 0x65;
    }
    if (uVar1 == 0x259) {
      return 0xc9;
    }
    bVar2 = uVar1 == 0x25c;
  }
  else {
    if (uVar1 < 0x4b2) {
      if (uVar1 == 0x4b1) {
        return 0x44d;
      }
      if (uVar1 == 0x321) {
        return 0xc9;
      }
      if (uVar1 == 0x3e9) {
        return 0x191;
      }
      return uVar1;
    }
    if (uVar1 == 0x2390) {
      return 0x68;
    }
    bVar2 = uVar1 == 0x23f4;
  }
  if (bVar2) {
    return 0x68;
  }
  return uVar1;
}

/* ref: FUN_00689b70 */
byte F_00689b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  uint uVar1;
  short * psVar2;
  
  if (*(short *)((int)this + 0x748) != *param_1) {
    return 0;
  }
  uVar1 = 0;
  psVar2 = param_1;
  do {
    psVar2 = psVar2 + 2;
    ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,uVar1,psVar2);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  return 1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf50 */
uint F_00689bc0(void)
{
  GEN_ENTER(0x689bc0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Graphics::Scene::Demihuman::vf54 */
unsigned int F_00689bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::Demihuman::vf58 */
unsigned int F_00689be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_1 < 5) {
    if (param_2 != 0) {
      F_00513f60(param_2,0,0);
    }
    if (*(int *)(this + param_1 * 4 + 0x768) != 0) {
      F_0050c620(*(int *)(this + param_1 * 4 + 0x768),0,0);
      *(undefined4 *)(this + param_1 * 4 + 0x768) = 0;
    }
    *(int *)(this + param_1 * 4 + 0x768) = param_2;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Demihuman::vf64 */
uint F_00689c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (4 < param_2) {
    return 0;
  }
  return (uint)(*(ushort *)(in_ecx + 0x74c + param_2 * 6) >> 10);
}

/* ref: Client::Graphics::Scene::Demihuman::vf65 */
uint F_00689c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d",(uint)*(ushort *)(this + 0x748));
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf66 */
uint F_00689ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/skeleton/base/b0001/skl_d%04db0001.sklb",
             (uint)*(ushort *)(this + 0x748),(uint)*(ushort *)(this + 0x748));
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf68 */
uint F_00689cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x120))(this);
  if ((char)uVar1 != '\0') {
    F_00c472af(param_1,param_2,"chara/demihuman/d%04d/skeleton/base/b0001/skl_d%04db0001.skp",
               (uint)*(ushort *)(this + 0x748),(uint)*(ushort *)(this + 0x748));
    return param_1;
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/skeleton/base/b0001/skl_d%04db0001.skp",0x3f1,
             0x3f1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf69 */
uint F_00689d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/skeleton/base/b0001/phy_d%04db0001.phyb",
             (uint)*(ushort *)(this + 0x748),(uint)*(ushort *)(this + 0x748));
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf73 */
uint F_00689d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x689d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/animation/s%04d/%s/material.pap",
             (uint)*(ushort *)(this + 0x748),param_4,(&REFG(undefined * PTR32, 0x1322a30))[param_3]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf70 */
uint F_00689da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x689da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (param_3 != 1) {
    F_00c472af(param_1,param_2,"chara/demihuman/d%04d/animation/%s/pap/%s.pap",
               (uint)*(ushort *)(this + 0x748),param_4,param_4);
    return param_1;
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/animation/f0000/%s.pap",
             (uint)*(ushort *)(this + 0x748),param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf71 */
uint F_00689e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/animation/%s/timeline/%s.tmb",
             (uint)*(ushort *)(this + 0x748),"dummy",param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf79 */
uint F_00689e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/skeleton/base/b%04d/eid_d%04db%04d.eid",
             (uint)*(ushort *)(this + 0x748),1,(uint)*(ushort *)(this + 0x748),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf90 */
unsigned int F_00689e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)(this + 0x780);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(this + 0x780) = param_1;
  return 0;
}

/* ref: Client::Graphics::Scene::Demihuman::vf83 */
uint F_00689eb0(void)
{
  GEN_ENTER(0x689eb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Weapon::vf50 */
uint F_00689ec0(void)
{
  GEN_ENTER(0x689ec0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Client::Graphics::Scene::Weapon::vf51 */
uint F_00689ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x689ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(ushort *)(in_ecx + 0x73c) >> 10);
}

/* ref: Client::Graphics::Scene::Weapon::vf58 */
uint F_00689ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 != 0) {
    F_00513f60(param_2,0,0);
  }
  uVar1 = 0;
  if (*(int *)(this + 0x740) != 0) {
    uVar1 = F_0050c620(*(int *)(this + 0x740),0,0);
    *(undefined4 *)(this + 0x740) = 0;
  }
  *(int *)(this + 0x740) = param_2;
  return uVar1;
}

/* ref: Client::Graphics::Scene::Weapon::vf65 */
uint F_00689f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d",(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf66 */
uint F_00689f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/skeleton/base/b0001/skl_w%04db0001.sklb",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf68 */
uint F_00689f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf69 */
uint F_00689fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf67 */
uint F_00689fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/obj/body/b%04d/model/w%04db%04d.mdl",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf70 */
uint F_00689ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x689ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/animation/%s/pap/%s.pap",
             (uint)*(ushort *)(this + 0x730),param_4,param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf71 */
uint F_0068a020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/animation/%s/timeline/%s.tmb",
             (uint)*(ushort *)(this + 0x730),"dummy",param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf75 */
uint F_0068a060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/obj/body/b%04d/b%04d.imc",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf76 */
uint F_0068a0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 WVar1;
  char * pcVar2;
  char * pcVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  WVar1 = this[0x73a];
  if (WVar1 == (undefined1)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
    return 0;
  }
  if (*(short *)(this + 0x736) != 0) {
    F_00c472af(param_1,param_2,"chara/weapon/w%04d/obj/body/b%04d/material/v%04d/staining/%s",
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)WVar1,
               param_4);
    pcVar2 = param_1;
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    pcVar3[-5] = '\0';
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x10,"_s%04d.mtrl",(uint)*(ushort *)(this + 0x736));
    F_00c473c8(param_1,param_2,((undefined1 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return (uint)param_1;
  }
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/obj/body/b%04d/material/v%04d/%s",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)WVar1,
             param_4);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf77 */
uint F_0068a190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (this[0x73b] == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/common/texture/decal_equip/-decal_%03d.tex",
             (uint)(byte)this[0x73b]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf78 */
uint F_0068a1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 WVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  WVar1 = this[0x73e];
  if (WVar1 == (undefined1)0x0) {
    return 0;
  }
  if ((byte)WVar1 < 100) {
    puVar2 = (undefined4 *)F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x8)),4,0);
    *param_4 = *puVar2;
    F_00c472af(param_1,param_2,"chara/weapon/w%04d/obj/body/b%04d/vfx/eff/vw%04d.avfx",
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)WVar1);
    return param_1;
  }
  puVar2 = (undefined4 *)F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x8)),8,0);
  *param_4 = *puVar2;
  F_00c472af(param_1,param_2,"vfx/weapon/eff/vw%04d.avfx",(uint)(byte)WVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf79 */
uint F_0068a270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68a270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/skeleton/base/b%04d/eid_w%04db%04d.eid",
             (uint)*(ushort *)(this + 0x730),1,(uint)*(ushort *)(this + 0x730),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf90 */
unsigned int F_0068a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68a2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)(this + 0x744);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(this + 0x744) = param_1;
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf83 */
uint F_0068a2e0(void)
{
  GEN_ENTER(0x68a2e0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Graphics::Scene::Weapon::vf73 */
uint F_0068a2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/animation/s%04d/body/material.pap",
             (uint)*(ushort *)(this + 0x730),param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf50 */
uint F_0068a320(void)
{
  GEN_ENTER(0x68a320u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Client::Graphics::Scene::Monster::vf58 */
uint F_0068a330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68a330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 != 0) {
    F_00513f60(param_2,0,0);
  }
  uVar1 = 0;
  if (*(int *)(this + 0x73c) != 0) {
    uVar1 = F_0050c620(*(int *)(this + 0x73c),0,0);
    *(undefined4 *)(this + 0x73c) = 0;
  }
  *(int *)(this + 0x73c) = param_2;
  return uVar1;
}

/* ref: Client::Graphics::Scene::Monster::vf65 */
uint F_0068a380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68a380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/monster/m%04d",(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf66 */
uint F_0068a3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b0001/skl_m%04db0001.sklb",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf68 */
uint F_0068a3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x120))(this);
  if ((char)uVar1 != '\0') {
    F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b0001/skl_m%04db0001.skp",
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
    return param_1;
  }
  F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b0001/skl_m%04db0001.skp",1,1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf69 */
uint F_0068a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b0001/phy_m%04db0001.phyb",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf67 */
uint F_0068a470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/obj/body/b%04d/model/m%04db%04d.mdl",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf70 */
uint F_0068a4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (param_3 != 1) {
    F_00c472af(param_1,param_2,"chara/monster/m%04d/animation/%s/pap/%s.pap",
               (uint)*(ushort *)(this + 0x730),param_4,param_4);
    return param_1;
  }
  F_00c472af(param_1,param_2,"chara/monster/m%04d/animation/f0000/%s.pap",
             (uint)*(ushort *)(this + 0x730),param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf71 */
uint F_0068a510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/animation/%s/timeline/%s.tmb",
             (uint)*(ushort *)(this + 0x730),"dummy",param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf75 */
uint F_0068a550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/obj/body/b%04d/b%04d.imc",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf76 */
uint F_0068a590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (this[0x736] == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/monster/m%04d/obj/body/b%04d/material/v%04d/%s",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)this[0x736]
             ,param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf77 */
uint F_0068a5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (this[0x737] == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/common/texture/decal_equip/-decal_%03d.tex",
             (uint)(byte)this[0x737]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf78 */
uint F_0068a620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 MVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  MVar1 = this[0x73a];
  if (MVar1 == (undefined1)0x0) {
    return 0;
  }
  if ((byte)MVar1 < 100) {
    puVar2 = (undefined4 *)F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x8)),4,0);
    *param_4 = *puVar2;
    F_00c472af(param_1,param_2,"chara/monster/m%04d/obj/body/b%04d/vfx/eff/vm%04d.avfx",
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)MVar1);
    return param_1;
  }
  puVar2 = (undefined4 *)F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x8)),8,0);
  *param_4 = *puVar2;
  F_00c472af(param_1,param_2,"vfx/monster/eff/vm%04d.avfx",(uint)(byte)MVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf79 */
uint F_0068a6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68a6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b%04d/eid_m%04db%04d.eid",
             (uint)*(ushort *)(this + 0x730),1,(uint)*(ushort *)(this + 0x730),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf73 */
uint F_0068a6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/animation/s%04d/body/material.pap",
             (uint)*(ushort *)(this + 0x730),param_4);
  return param_1;
}

/* ref: FUN_0068a720 */
uint F_0068a720(unsigned int gen_a0)
{
  GEN_ENTER(0x68a720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = param_1;
  while (iVar1 - 1U < 0xc5) {
    switch((unsigned int)(uintptr_t)(iVar1 - 1U)) {
    case 0: ;
      return 0x10b0df4;
    case 1: ;
      return 0x10b0e00;
    case 2: ;
      return 0x10b0e0c;
    case 3: ;
      return 0x10b0e18;
    case 4: ;
      return 0x10b0e24;
    case 5: ;
      return 0x10b0e30;
    case 6: ;
      return 0x10b0e40;
    case 7: ;
      return 0x10b0e4c;
    case 8: ;
      return 0x10b0e58;
    case 9: ;
      return 0x10b0e64;
    case 10: ;
      return 0x10b0e70;
    case 0xb: ;
      return 0x10b0e80;
    case 0xc: ;
      return 0x10b0e90;
    case 0xd: ;
      return 0x10b0ea0;
    case 0xe: ;
      return 0x10b0eac;
    case 0xf: ;
      return 0x10b0eb8;
    case 0x10: ;
      return 0x10b0ec8;
    case 0x11: ;
      return 0x10b0ed4;
    case 0x12: ;
      return 0x10b0ee0;
    case 0x13: ;
      return 0x10b0ef0;
    case 0x14: ;
      return 0x10b0f00;
    case 0x15: ;
      return 0x10b0f10;
    case 0x16: ;
      return 0x10b0f20;
    case 0x17: ;
      return 0x10b0f30;
    case 0x18: ;
      return 0x10b0f40;
    case 0x19: ;
      return 0x10b0f50;
    case 0x1a: ;
      return 0x10b0f60;
    case 0x1b: ;
      return 0x10b0f70;
    case 0x1c: ;
      return 0x10b0f7c;
    case 0x1d: ;
      return 0x10b0f88;
    case 0x1e: ;
      return 0x10b0f94;
    case 0x1f: ;
      return 0x10b0fa0;
    case 0x20: ;
      return 0x10b0fb0;
    case 0x21: ;
      return 0x10b0fc0;
    case 0x22: ;
      return 0x10b0fcc;
    case 0x23: ;
      return 0x10b0fdc;
    case 0x24: ;
      return 0x10b0fe8;
    case 0x25: ;
      return 0x10b0ff4;
    default: ;
      goto switchD_0068a730_caseD_26;
    case 0x27: ;
      return 0x10b1004;
    case 0x2b: ;
      return 0x10b1014;
    case 0x2c: ;
    case 0x2d: ;
      iVar1 = 0x2c;
      break;
    case 0x30: ;
      return 0x10b1024;
    case 0x31: ;
      iVar1 = 0x31;
      break;
    case 0x34: ;
      return 0x10b1034;
    case 0x35: ;
      return 0x10b1044;
    case 0x36: ;
      return 0x10b1054;
    case 0x3b: ;
      return 0x10b1064;
    case 0x3c: ;
      return 0x10b1074;
    case 0x3d: ;
      return 0x10b1084;
    case 0x3e: ;
      return 0x10b1090;
    case 0x3f: ;
      return 0x10b10a0;
    case 0x40: ;
      return 0x10b10ac;
    case 0x41: ;
      return 0x10b10bc;
    case 0x42: ;
      return 0x10b10cc;
    case 0x43: ;
      return 0x10b10dc;
    case 0x44: ;
      return 0x10b10ec;
    case 0x45: ;
      return 0x10b10fc;
    case 0x46: ;
      return 0x10b110c;
    case 0x47: ;
      return 0x10b111c;
    case 0x48: ;
      return 0x10b1124;
    case 0x49: ;
      return 0x10b1130;
    case 0x4a: ;
      return 0x10b113c;
    case 0x4b: ;
      return 0x10b114c;
    case 0x4c: ;
      return 0x10b1158;
    case 0x4d: ;
      return 0x10b1164;
    case 0x4e: ;
      return 0x10b1174;
    case 0x4f: ;
      return 0x10b1180;
    case 0x50: ;
      return 0x10b118c;
    case 0x52: ;
      return 0x10b119c;
    case 0x53: ;
      return 0x10b11ac;
    case 0x54: ;
      return 0x10b11b8;
    case 0x55: ;
      return 0x10b11c4;
    case 0x56: ;
      return 0x10b11d4;
    case 0x57: ;
      return 0x10b11e4;
    case 0x58: ;
      return 0x10b11f0;
    case 0x59: ;
      return 0x10b11fc;
    case 0x5a: ;
      return 0x10b1208;
    case 0x5b: ;
      return 0x10b1218;
    case 0x5c: ;
      return 0x10b1224;
    case 0x5d: ;
      return 0x10b1230;
    case 0x5e: ;
      return 0x10b123c;
    case 0x5f: ;
      return 0x10b124c;
    case 0x60: ;
      return 0x10b1258;
    case 0x61: ;
      return 0x10b1264;
    case 0x62: ;
      return 0x10b1270;
    case 99: ;
      return 0x10b127c;
    case 100: ;
      return 0x10b1288;
    case 0x65: ;
      return 0x10b1298;
    case 0x66: ;
      return 0x10b12a8;
    case 0x67: ;
      return 0x10b12b8;
    case 0x68: ;
      return 0x10b12c8;
    case 0x69: ;
      return 0x10b12d8;
    case 0x6a: ;
      return 0x10b12e4;
    case 0x6b: ;
      return 0x10b12f4;
    case 0x6c: ;
      return 0x10b1304;
    case 0x6d: ;
      return 0x10b1310;
    case 0x6e: ;
      return 0x10b131c;
    case 0x6f: ;
      return 0x10b1328;
    case 0x70: ;
      return 0x10b1338;
    case 0x71: ;
      return 0x10b1344;
    case 0x72: ;
      return 0x10b1354;
    case 0x73: ;
      return 0x10b1360;
    case 0x74: ;
      return 0x10b136c;
    case 0x75: ;
      return 0x10b137c;
    case 0x76: ;
      return 0x10b1388;
    case 0x77: ;
      return 0x10b1394;
    case 0x78: ;
      return 0x10b13a0;
    case 0x79: ;
      return 0x10b13ac;
    case 0x7a: ;
      return 0x10b13b8;
    case 0x7b: ;
      return 0x10b13c4;
    case 0x7c: ;
      return 0x10b13d0;
    case 0x7d: ;
      return 0x10b13e0;
    case 0x7e: ;
      return 0x10b13f0;
    case 0x7f: ;
      return 0x10b1400;
    case 0x80: ;
      return 0x10b1410;
    case 0x81: ;
      return 0x10b1418;
    case 0x82: ;
      return 0x10b1420;
    case 0x83: ;
      return 0x10b142c;
    case 0x84: ;
      return 0x10b1438;
    case 0x85: ;
      return 0x10b1444;
    case 0x86: ;
      return 0x10b1450;
    case 0x87: ;
      return 0x10b145c;
    case 0x88: ;
      return 0x10b1468;
    case 0x89: ;
      return 0x10b1474;
    case 0x8a: ;
      return 0x10b1480;
    case 0x8b: ;
      return 0x10b148c;
    case 0x8c: ;
      return 0x10b1498;
    case 0x8d: ;
      return 0x10b14a8;
    case 0x8e: ;
      return 0x10b14b4;
    case 0x8f: ;
      return 0x10b14c4;
    case 0x90: ;
      return 0x10b14d0;
    case 0x91: ;
      return 0x10b14dc;
    case 0x92: ;
      return 0x10b14ec;
    case 0x93: ;
      return 0x10b14f8;
    case 0x94: ;
      return 0x10b1508;
    case 0x95: ;
      return 0x10b1518;
    case 0x96: ;
      return 0x10b1528;
    case 0x97: ;
      return 0x10b1538;
    case 0x98: ;
      return 0x10b1548;
    case 0x99: ;
      return 0x10b1558;
    case 0x9a: ;
      return 0x10b1568;
    case 0x9b: ;
      return 0x10b1578;
    case 0x9c: ;
      return 0x10b1588;
    case 0x9d: ;
      return 0x10b1598;
    case 0x9e: ;
      return 0x10b15a4;
    case 0x9f: ;
      return 0x10b15b0;
    case 0xa0: ;
      return 0x10b15c0;
    case 0xa1: ;
      return 0x10b15cc;
    case 0xa2: ;
      return 0x10b15dc;
    case 0xa3: ;
      return 0x10b15e8;
    case 0xa4: ;
      return 0x10b15f4;
    case 0xa5: ;
      return 0x10b1604;
    case 0xa6: ;
      return 0x10b1610;
    case 0xa7: ;
      return 0x10b1620;
    case 0xa8: ;
      return 0x10b1630;
    case 0xa9: ;
      return 0x10b1640;
    case 0xaa: ;
      return 0x10b1650;
    case 0xab: ;
      return 0x10b165c;
    case 0xac: ;
      return 0x10b1668;
    case 0xad: ;
      return 0x10b1674;
    case 0xae: ;
      return 0x10b1684;
    case 0xaf: ;
      return 0x10b1694;
    case 0xb0: ;
      return 0x10b16a4;
    case 0xb1: ;
      return 0x10b16b0;
    case 0xb2: ;
      return 0x10b16bc;
    case 0xb3: ;
      return 0x10b16cc;
    case 0xb4: ;
      return 0x10b16dc;
    case 0xb5: ;
      return 0x10b16e8;
    case 0xb6: ;
      return 0x10b16f4;
    case 0xb7: ;
      return 0x10b1700;
    case 0xb8: ;
      return 0x10b170c;
    case 0xb9: ;
      return 0x10b171c;
    case 0xba: ;
      return 0x10b1728;
    case 0xbb: ;
      return 0x10b1734;
    case 0xbe: ;
      return 0x10b1740;
    case 0xbf: ;
      return 0x10b174c;
    case 0xc1: ;
      return 0x10b1758;
    case 0xc2: ;
      return 0x10b1768;
    case 0xc3: ;
      return 0x10b1778;
    case 0xc4: ;
      return 0x10b1788;
    }
  }
switchD_0068a730_caseD_26: ;
  return 0x10b1798;
}

/* ref: Client::Graphics::Scene::Terrain::vf11 */
uint F_0068af50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68af50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  F_006aecf0(param_1,((undefined1 *)(gen_frame + 0x0)));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Terrain::vf6 */
unsigned int F_0068af90(void)
{
  GEN_ENTER(0x68af90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068afb0 */
uint F_0068afb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x68afb0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,param_3,(undefined4)gen_fl2bits(param_4),0xff,0,0);
  return uVar1;
}

/* ref: FUN_0068afe0 */
unsigned int F_0068afe0(void)
{
  GEN_ENTER(0x68afe0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068aff0 */
uint F_0068aff0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68aff0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_0062e310(param_1,param_2);
  return uVar1;
}

/* ref: FUN_0068b010 */
uint F_0068b010(unsigned int gen_a0)
{
  GEN_ENTER(0x68b010u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0062e350(param_1);
  return uVar1;
}

/* ref: FUN_0068b020 */
uint F_0068b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (param_2 < 0x18) {
    *param_3 = 0;
    return (uint)param_3;
  }
  *param_3 = *param_3 & 0x3000000;
  return (uint)param_3;
}

/* ref: FUN_0068b040 */
unsigned int F_0068b040(void)
{
  GEN_ENTER(0x68b040u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b050 */
uint F_0068b050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (param_2 < 0x18) {
    *param_3 = 0;
    return (uint)param_3;
  }
  *param_3 = *param_3 & 0x3000000;
  return (uint)param_3;
}

/* ref: FUN_0068b070 */
unsigned int F_0068b070(void)
{
  GEN_ENTER(0x68b070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::BGManager::vf2 */
uint F_0068b080(void)
{
  GEN_ENTER(0x68b080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b090 */
uint F_0068b090(unsigned int gen_a0)
{
  GEN_ENTER(0x68b090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x70) + 4))))((int)this + 0x70);
  uVar3 = *(uint *)((int)this + 0x224);
  if (uVar3 != 0) {
    uVar5 = 0;
    if (*(int *)((int)this + 0x220) != 0) {
      iVar4 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((iVar4 + *(int *)((int)this + 0x224))));
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0xa0;
      } while (uVar5 < *(uint *)((int)this + 0x220));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x224);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-4] == 0) {
        uVar6 = F_00406b30(puVar2 + -4);
        uVar3 = (uint)uVar6;
      }
      else {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,3);
      }
      *(undefined4 *)((int)this + 0x224) = 0;
    }
  }
  if (*(int *)((int)this + 0x22c) != 0) {
    uVar5 = 0;
    if (*(int *)((int)this + 0x228) != 0) {
      iVar4 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((iVar4 + *(int *)((int)this + 0x22c))));
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x80;
      } while (uVar5 < *(uint *)((int)this + 0x228));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x22c);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-4] != 0) {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,3);
        *(undefined4 *)((int)this + 0x22c) = 0;
        return uVar3;
      }
      uVar6 = F_00406b30(puVar2 + -4);
      uVar3 = (uint)uVar6;
      *(undefined4 *)((int)this + 0x22c) = 0;
    }
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::BGObject::vf26 */
byte F_0068b1a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b1a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte local_8;
  
  local_8 = (byte)(int)TRUNC((double)param_2 * *(double *)&REFG(undefined, 0x1088100));
  *(byte *)(in_ecx + 0x8a) = local_8;
  return local_8;
}

/* ref: Client::Graphics::Scene::BGObject::vf27 */
uint F_0068b1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x68b1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0x8a);
}

/* ref: FUN_0068b210 */
byte F_0068b210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint uVar1;
  float * pfVar2;
  float10 fVar3;
  
  fVar3 = (float10)REFG(double, 0x1088108);
  uVar1 = 0;
  pfVar2 = (float *)(param_1 + 4);
  do {
    if ((~param_2 & 1 << ((byte)uVar1 & 0x1f)) == 0) {
      if (!((float10)((float)GEN_TOF(((float10)pfVar2[1] *
                             (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[6] +
                                                              (float10)param_3[2]) * fVar3))) +
                            ((float10)*pfVar2 *
                             (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[5] +
                                                              (float10)param_3[1]) * fVar3))) +
                            (float10)pfVar2[-1] *
                            (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[4] +
                                                             (float10)*param_3) * fVar3))))))) -
            (float10)pfVar2[2] <=
           (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)pfVar2[1]))) *
                            (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[6] -
                                                             (float10)param_3[2]) * fVar3))) +
                           ((float10)((float)GEN_TOF(ABS((float10)*pfVar2))) *
                            (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[5] -
                                                             (float10)param_3[1]) * fVar3))) +
                           (float10)((float)GEN_TOF(ABS((float10)pfVar2[-1]))) *
                           (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[4] - (float10)*param_3
                                                            ) * fVar3))))))))) {
        return 0;
      }
    }
    uVar1 = uVar1 + 1;
    pfVar2 = pfVar2 + 4;
  } while (uVar1 < 6);
  return 1;
}

/* ref: FUN_0068b380 */
unsigned int F_0068b380(void)
{
  GEN_ENTER(0x68b380u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b390 */
unsigned int F_0068b390(void)
{
  GEN_ENTER(0x68b390u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b3a0 */
unsigned int F_0068b3a0(void)
{
  GEN_ENTER(0x68b3a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b3b0 */
unsigned int F_0068b3b0(void)
{
  GEN_ENTER(0x68b3b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b3c0 */
uint F_0068b3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00625bc0(*(undefined4 *)((int)this + 0x70),param_1);
  return uVar1;
}

/* ref: FUN_0068b3d0 */
unsigned int F_0068b3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x78) = param_1;
  return 0;
}

/* ref: FUN_0068b400 */
uint F_0068b400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  
  if (param_1 != (int *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x7c);
  if (piVar1 != (int *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x7c) = param_1;
  return in_EAX;
}

/* ref: FUN_0068b430 */
unsigned int F_0068b430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x78) = param_1;
  return 0;
}

/* ref: FUN_0068b460 */
unsigned int F_0068b460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x7c) = param_1;
  return 0;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf6 */
unsigned int F_0068b490(void)
{
  GEN_ENTER(0x68b490u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b4a0 */
byte F_0068b4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x58c);
  if (uVar1 < *(uint *)((int)this + 0x14)) {
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 0x588);
      do {
        if (*piVar3 == param_1) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < uVar1);
    }
    *((int *)GEN_TOP((*(int *)((int)this + 0x588) + uVar1 * 4))) = param_1;
    *(int *)((int)this + 0x58c) = *(int *)((int)this + 0x58c) + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0068b500 */
byte F_0068b500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = *(uint *)((int)this + 0x58c);
  uVar5 = 0;
  uVar4 = uVar3;
  if (uVar3 != 0) {
    piVar6 = *(int * PTR32 *)((int)this + 0x588);
    do {
      uVar4 = uVar5;
      if (*piVar6 == param_1) break;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
      uVar4 = uVar3;
    } while (uVar5 < uVar3);
  }
  if (uVar4 < uVar3) {
    *(uint *)((int)this + 0x58c) = uVar3 - 1;
    if (uVar4 < uVar3 - 1) {
      do {
        iVar2 = uVar4 * 4;
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + iVar1))) =
             *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + 4 + iVar2)));
      } while (uVar4 < *(uint *)((int)this + 0x58c));
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + *(int *)((int)this + 0x58c) * 4))) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_0068b590 */
byte F_0068b590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = F_0068b500(this,param_1);
    if (bVar1 != 0) {
      bVar1 = F_0068b4a0(this,param_1);
      return bVar1 != 0;
    }
  }
  return 0;
}

/* ref: FUN_0068b5d0 */
uint F_0068b5d0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x68b5d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  *(undefined1 *)(param_1 + 0x1e5) = (undefined1)param_5;
  *(float *)(param_1 + 0x1e8) = param_2;
  *(undefined1 *)(param_1 + 0x1e6) = (undefined1)param_6;
  *(float *)(param_1 + 0x1ec) = param_3;
  F_00983ae0(param_1 + 0x70,param_4);
  return param_4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf50 */
unsigned int F_0068b610(unsigned int gen_a0)
{
  GEN_ENTER(0x68b610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x234) != (undefined *)0x0) {
    F_009bc2a0(*(undefined * PTR32 *)(this + 0x234));
    return 0;
  }
  return 0;
}

/* ref: FUN_0068b620 */
uint F_0068b620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (param_2 < 0x18) {
    *param_3 = 0;
    return (uint)param_3;
  }
  *param_3 = *param_3 & 0x3000000;
  return (uint)param_3;
}

/* ref: FUN_0068b640 */
uint F_0068b640(unsigned int gen_a0)
{
  GEN_ENTER(0x68b640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) & 0xef;
  return param_1;
}

/* ref: FUN_0068b650 */
unsigned int F_0068b650(void)
{
  GEN_ENTER(0x68b650u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::VfxObject::vf16 */
uint F_0068b660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b660u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = (undefined4 *)(in_ecx + 0x290);
  if (param_3 != 0x2d) {
    puVar2 = (undefined4 *)(in_ecx + 0x250);
  }
  puVar3 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::VfxObject::vf17 */
uint F_0068b690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,((undefined1 *)(gen_frame + 0x0)),param_1);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1 + 0x30;
}

/* ref: Client::Graphics::Scene::VfxObject::vf20 */
byte F_0068b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_0068b6f0 */
uint F_0068b6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x234) != (undefined *)0x0) {
    uVar1 = F_009bc350(*(undefined * PTR32 *)((int)this + 0x234),param_1,param_2);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_0068b710 */
uint F_0068b710(unsigned int gen_a0)
{
  GEN_ENTER(0x68b710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x234) != (undefined *)0x0) {
    uVar1 = F_009bc2e0(*(undefined * PTR32 *)((int)this + 0x234));
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_0068b730 */
uint F_0068b730(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b730u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) | 8;
  *(float *)(param_1 + 0x1f0) = param_2;
  *(undefined4 *)(param_1 + 500) = 0;
  if ((*(undefined * PTR32 *)(param_1 + 0x234) != (undefined *)0x0) && (param_2 <= 0.0)) {
    in_EAX = F_009bc2a0(*(undefined * PTR32 *)(param_1 + 0x234));
  }
  return in_EAX;
}

/* ref: FUN_0068b780 */
unsigned int F_0068b780(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x68b780u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0x1f8) = param_2;
  *(float *)(in_ecx + 0x1fc) = param_3;
  *(float *)(in_ecx + 0x200) = param_4;
  *(float *)(in_ecx + 0x204) = param_5;
  return 0;
}

/* ref: FUN_0068b7c0 */
unsigned int F_0068b7c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b7c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x204) = param_2;
  return 0;
}

/* ref: FUN_0068b7e0 */
unsigned int F_0068b7e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b7e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x228) = param_2;
  return 0;
}

/* ref: FUN_0068b800 */
uint F_0068b800(unsigned int gen_a0)
{
  GEN_ENTER(0x68b800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  float fVar2;
  uint in_EAX = 0;
  float fVar3;
  
  if ((*(byte *)((int)this + 0x1e4) & 1) != 0) {
    in_EAX = F_009bc070(*(undefined * PTR32 *)((int)this + 0x234),&(*(char *)(gen_frame + 0x1b)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0xc)),
                          &(*(float *)(gen_frame + 0x8)));
    fVar2 = REFG(float, 0x1087f04);
    fVar3 = *(float *)((int)this + 0x21c);
    if ((*(char *)(gen_frame + 0x1b)) == '\0') {
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x218) <= 0.0)) {
        *(undefined4 *)((int)this + 0x208) = 0;
        fVar3 = fVar2;
      }
      else {
        *(undefined4 *)((int)this + 0x208) = *(undefined4 *)((int)this + 0x218);
      }
      *(float *)((int)this + 0x20c) = fVar3;
      fVar3 = *(float *)((int)this + 0x220);
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x224) <= 0.0)) {
        fVar3 = *(float *)((int)this + 0x228);
        (*(float *)(gen_frame + 0x8)) = fVar3;
        fVar1 = (float10)*(double *)&REFG(undefined, 0x1094818);
        *(float *)((int)this + 0x214) = fVar3;
        *(float *)((int)this + 0x210) = (float)((float10)fVar3 * fVar1);
        return in_EAX;
      }
    }
    else {
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x218) <= 0.0)) {
        *(undefined4 *)((int)this + 0x20c) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined4 *)((int)this + 0x208) = (*(undefined4 *)(gen_frame + 0x10));
      }
      else {
        *(float *)((int)this + 0x20c) = fVar3;
        *(undefined4 *)((int)this + 0x208) = *(undefined4 *)((int)this + 0x218);
      }
      fVar3 = *(float *)((int)this + 0x220);
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x224) <= 0.0)) {
        *(undefined4 *)((int)this + 0x210) = (*(undefined4 *)(gen_frame + 0xc));
        *(float *)((int)this + 0x214) = (*(float *)(gen_frame + 0x8));
        return in_EAX;
      }
    }
    *(float *)((int)this + 0x210) = fVar3;
    *(undefined4 *)((int)this + 0x214) = *(undefined4 *)((int)this + 0x224);
  }
  return in_EAX;
}

/* ref: FUN_0068b950 */
unsigned int F_0068b950(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b950u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x22c) = param_2;
  return 0;
}

/* ref: FUN_0068b970 */
unsigned int F_0068b970(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b970u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x230) = param_2;
  return 0;
}

/* ref: FUN_0068b9a0 */
uint F_0068b9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x68b9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar2 = 0;
  if (*(short *)this != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4)));
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)this);
  }
  if (*(int *)((int)this + 8) == 0) {
    *(undefined2 *)this = 0;
    return 0;
  }
  F_00406b30(*(int *)((int)this + 8));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)this = 0;
  return 0;
}

/* ref: FUN_0068ba30 */
uint F_0068ba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ba30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xe094 + param_2 * 4);
}

/* ref: FUN_0068ba50 */
uint F_0068ba50(unsigned int gen_a0)
{
  GEN_ENTER(0x68ba50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0xe09d);
}

/* ref: FUN_0068ba60 */
uint F_0068ba60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ba60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xe0a0) + 4 + param_2 * 0xc)));
}

/* ref: FUN_0068ba80 */
uint F_0068ba80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68ba80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xe0a0) + 8 + param_1 * 0xc))) + param_2 * 4)));
}

/* ref: FUN_0068bad0 */
uint F_0068bad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0068bb00 */
uint F_0068bb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bb00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((float10)*(float *)(param_1 + 4) < (float10)*(float *)(param_2 + 4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0068bb20 */
uint F_0068bb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68bb20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)(param_3 * 0xe0c0 + 0x30 + in_ecx);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return (uint)puVar1;
}

/* ref: FUN_0068bb50 */
uint F_0068bb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xe0c0 + 0x30 + in_ecx;
}

/* ref: FUN_0068bb70 */
uint F_0068bb70(unsigned int gen_a0)
{
  GEN_ENTER(0x68bb70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) * 0xe0c0 + 0x10 + in_ecx;
}

/* ref: FUN_0068bb80 */
uint F_0068bb80(unsigned int gen_a0)
{
  GEN_ENTER(0x68bb80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: FUN_0068bb90 */
uint F_0068bb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bb90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xe0c0 + 0x10 + in_ecx;
}

/* ref: FUN_0068bbb0 */
uint F_0068bbb0(float gen_a0)
{
  GEN_ENTER(0x68bbb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  if ((double)param_1 < *(double *)&REFG(undefined, 0x10ac2d0)) {
    return 0;
  }
  uVar1 = 1;
  if (!((double)param_1 < *(double *)&REFG(undefined, 0x10b2a60))) {
    uVar1 = 2;
  }
  return uVar1;
}

/* ref: FUN_0068bc00 */
uint F_0068bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bc00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xe0f0) = *param_2;
  *(undefined4 *)(in_ecx + 0xe0f4) = param_2[1];
  *(undefined4 *)(in_ecx + 0xe0f8) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::Attach::vf4 */
unsigned int F_0068bc40(unsigned int gen_a0)
{
  GEN_ENTER(0x68bc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x38) != 0) {
    F_0065be20((undefined *)this);
    return 0;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::vf1 */
uint F_0068bc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x68bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Client::Graphics::Scene::ResidentResourceManager::ResourceList::vf1 */
unsigned int F_0068bc70(void)
{
  GEN_ENTER(0x68bc70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068bd00 */
unsigned int F_0068bd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 0x20) == param_1)) {
    *(uint *)(iVar1 + 0x20) =
         -(uint)(*(uint *)(param_1 + 0x1c) != param_1) & *(uint *)(param_1 + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x18))) = *(undefined4 *)(param_1 + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x1c))) = *(undefined4 *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x18) = param_1;
  *(uint *)(param_1 + 0x1c) = param_1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((int)this + 0x20) == 0) {
    *(uint *)((int)this + 0x20) = param_1;
    *(uint *)(param_1 + 0x1c) = param_1;
    *(uint *)(param_1 + 0x18) = param_1;
    *(undefined * PTR32 *)(param_1 + 0x14) = this;
    return 0;
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18))) + 0x1c))) = param_1;
  *(undefined4 *)(param_1 + 0x18) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18)));
  *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18))) = param_1;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x20);
  *(undefined * PTR32 *)(param_1 + 0x14) = this;
  return 0;
}

/* ref: Client::Graphics::Scene::World::vf4 */
unsigned int F_0068bd80(unsigned int gen_a0)
{
  GEN_ENTER(0x68bd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)(this + 0x28);
  while (piVar2 != (int *)0x0) {
    if ((*(byte *)(piVar2 + 9) & 1) == 0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      piVar2 = (int *)piVar2[10];
    }
    else {
      piVar1 = (int *)piVar2[10];
      uVar3 = piVar2[9] & 0xfffffffc;
      piVar2[9] = piVar2[9] & 3;
      piVar2[10] = 0;
      if (uVar3 != 0) {
        *(int * PTR32 *)(uVar3 + 0x28) = piVar1;
      }
      piVar2 = piVar1;
      if (piVar1 != (int *)0x0) {
        piVar1[9] = piVar1[9] & 3U | uVar3;
      }
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::World::vf5 */
unsigned int F_0068bdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x68bdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x28); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[10]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  }
  return 0;
}

/* ref: FUN_0068bdf0 */
uint F_0068bdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68bdf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 * puVar1;
  float * pfVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(float * PTR32 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_2;
  puVar1 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x40)),(int)this + 0x80,*(int *)((int)this + 0xc0) + 0x50);
  puVar4 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  F_004f2ec0(((undefined4 *)(gen_frame + 0x80)));
  puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1];
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_004ee790(&(*(float *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined4 *)(gen_frame + 0x80)));
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar1;
  (*(undefined4 *)(gen_frame + 0x24)) = puVar1[1];
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  F_004ee790(&(*(float *)(gen_frame + 0x30)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined4 *)(gen_frame + 0x80)));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x4)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x8)));
  F_004bd580(&(*(float *)(gen_frame + 0x30)));
  pfVar2 = (*(float * PTR32 *)(gen_frame + 0x18));
  *(*(float * PTR32 *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x0));
  (*(float * PTR32 *)(gen_frame + 0x18))[1] = (*(float *)(gen_frame + 0x4));
  (*(float * PTR32 *)(gen_frame + 0x18))[2] = (*(float *)(gen_frame + 0x8));
  (*(float * PTR32 *)(gen_frame + 0x18))[4] = (*(float *)(gen_frame + 0x30));
  (*(float * PTR32 *)(gen_frame + 0x18))[5] = (*(float *)(gen_frame + 0x34));
  (*(float * PTR32 *)(gen_frame + 0x18))[6] = (*(float *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)pfVar2;
}

/* ref: FUN_0068bf80 */
uint F_0068bf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *(float *)((int)this + 0x60);
  fVar2 = *(float *)((int)this + 0x30);
  (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x78);
  (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0x74);
  fVar3 = (float10)*(float *)((int)this + 0x78);
  fVar4 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 100) -
                          (float10)*(float *)((int)this + 0x34))));
  fVar5 = (float10)*(float *)((int)this + 0x74);
  fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x68) -
                          (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar4 * fVar3 - fVar6 * fVar5);
  (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0x70);
  fVar7 = (float10)*(float *)((int)this + 0x70);
  fVar8 = (float10)(float)((float10)fVar1 - (float10)fVar2);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar7 * fVar6 - fVar8 * fVar3);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar5 * fVar8 - fVar4 * fVar7);
  F_0046f390(&(*(float *)(gen_frame + 0x0)));
  param_1[1] = (*(float *)(gen_frame + 0x4));
  *param_1 = (*(float *)(gen_frame + 0x0));
  param_1[2] = (*(float *)(gen_frame + 0x8));
  return (uint)param_1;
}

/* ref: FUN_0068c030 */
uint F_0068c030(unsigned int gen_a0)
{
  GEN_ENTER(0x68c030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  F_004d6630((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10b2b08));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  return (uint)this;
}

/* ref: FUN_0068c0b0 */
unsigned int F_0068c0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x68c0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x58) != 0) {
    *(undefined4 *)((int)this + 0x3c) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 4))))(*(int * PTR32 *)((int)this + 0x58));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x58);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x5c) != 0) {
    *(undefined4 *)((int)this + 0x40) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x5c) + 4))))(*(int * PTR32 *)((int)this + 0x5c));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x5c);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x60) != 0) {
    *(undefined4 *)((int)this + 0x44) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 4))))(*(int * PTR32 *)((int)this + 0x60));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x60);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 100) != 0) {
    *(undefined4 *)((int)this + 0x48) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 100) + 4))))(*(int * PTR32 *)((int)this + 100));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 100);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x68) != 0) {
    *(undefined4 *)((int)this + 0x4c) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x68) + 4))))(*(int * PTR32 *)((int)this + 0x68));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x68);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x6c) != 0) {
    *(undefined4 *)((int)this + 0x50) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x6c) + 4))))(*(int * PTR32 *)((int)this + 0x6c));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x6c);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x70) != 0) {
    *(undefined4 *)((int)this + 0x54) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x70) + 4))))(*(int * PTR32 *)((int)this + 0x70));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x70);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  return 0;
}

/* ref: FUN_0068c1a0 */
uint F_0068c1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x68c1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  int in_ecx;
  float * pfVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  undefined4 * puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  uVar3 = *(uint *)((int)this + 0x30);
  if (*(int *)((int)this + uVar3 * 4 + 0x34) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + uVar3 * 4 + 0x34) + 0x10))))
              (*(undefined4 *)((int)this + uVar3 * 4 + 0x34));
    in_ecx = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x30) * 4 + 0x34))) + 0xc0)));
    pfVar1 = (float *)F_004f45d0(((undefined4 *)(gen_frame + 0x40)),in_ecx + 0x10);
    pfVar5 = ((float *)(gen_frame + 0xc0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    fVar7 = (float10)*(float *)((int)this + 0x18);
    fVar8 = (float10)*(float *)((int)this + 0x14);
    fVar9 = (float10)*(float *)((int)this + 0x10);
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf0)) +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar9 * (float10)((float *)(gen_frame + 0xc0))[0
                                                  ]) + (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0xd0))))))
                                      + (float10)(float)(fVar7 * (float10)(*(float *)(gen_frame + 0xe0)))))))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf4)) +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)((float *)(gen_frame + 0xc0))[1] *
                                                                        fVar9) +
                                                       (float10)(float)((float10)(*(float *)(gen_frame + 0xd4)) * fVar8))))
                                      + (float10)(float)((float10)(*(float *)(gen_frame + 0xe4)) * fVar7)))))));
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar9 * (float10)((float *)(gen_frame + 0xc0))[2
                                                  ]) + (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0xd8))))))
                                      + (float10)(float)(fVar7 * (float10)(*(float *)(gen_frame + 0xe8)))))))));
    fVar7 = ((float10)GEN_TOD(fsin((float10)*(float *)((int)this + 0x28))));
    fVar8 = ((float10)GEN_TOD(fcos((float10)*(float *)((int)this + 0x28))));
    (*(float *)(gen_frame + 0x80)) = (float)fVar8;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(float *)(gen_frame + 0x84)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0;
    (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF(-(float10)(float)fVar7));
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x94)) = (float)fVar8;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    F_0065ec40(&(*(float *)(gen_frame + 0x80)),*(float *)((int)this + 0x20));
    F_0065ed60(&(*(float *)(gen_frame + 0x80)),*(float *)((int)this + 0x24));
    pfVar1 = (float *)F_004ef350(((undefined4 *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x80)),(uint)((float *)(gen_frame + 0xc0)));
    pfVar5 = ((float *)(gen_frame + 0xc0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    puVar2 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0xc0)));
    puVar6 = ((undefined4 *)(gen_frame + 0x40));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = F_00621fc0(in_ecx,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,((undefined4 *)(gen_frame + 0x40)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return uVar3;
}

/* ref: Client::Graphics::Scene::DrawObject::vf17 */
uint F_0068c480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68c480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx + 0x30;
}

/* ref: Client::Graphics::Scene::DrawObject::vf18 */
uint F_0068c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68c490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf21 */
uint F_0068c4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68c4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf22 */
uint F_0068c540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68c540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return (uint)param_1;
}

/* ref: FUN_0068c5c0 */
byte F_0068c5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68c5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b14060(REFG(void * PTR32, 0x1370c1c),param_1);
  *(uint *)((int)this + 0x60) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  *(undefined * PTR32 *)(uVar1 + 4) = this;
  return 1;
}

/* ref: FUN_0068c5f0 */
uint F_0068c5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68c5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x60) != 0) {
    uVar1 = F_00b14100(REFG(void * PTR32, 0x1370c1c),*(int *)((int)this + 0x60));
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  return uVar1;
}

/* ref: FUN_0068c610 */
uint F_0068c610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68c610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
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
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar21 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  (*(uint *)(gen_frame + 0x12c)) = uVar21;
  fVar1 = param_2[0x10];
  fVar2 = param_2[0x11];
  fVar3 = param_2[0x12];
  fVar4 = param_2[0x13];
  fVar5 = param_2[0xc];
  fVar6 = param_2[0xd];
  fVar7 = param_2[0xe];
  fVar8 = param_2[0xf];
  ((float *)(gen_frame + 0xa0))[0] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[1] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[2] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[3] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[4] = fVar1 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[5] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[6] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[7] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[8] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[9] = fVar2 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[10] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0xb] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[0xc] = fVar1 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0xd] = fVar2 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0xe] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0xf] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[0x10] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x11] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x12] = fVar3 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x13] = fVar4 * 0.0;
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = param_2[3];
  fVar13 = param_2[4];
  fVar14 = param_2[5];
  fVar15 = param_2[6];
  fVar16 = param_2[7];
  ((float *)(gen_frame + 0xa0))[0x14] = fVar1 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x15] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x16] = fVar3 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x17] = fVar4 * 0.0;
  fVar17 = param_2[8];
  fVar18 = param_2[9];
  fVar19 = param_2[10];
  fVar20 = param_2[0xb];
  ((float *)(gen_frame + 0xa0))[0x18] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x19] = fVar2 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x1a] = fVar3 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x1b] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[0x1c] = fVar1;
  ((float *)(gen_frame + 0xa0))[0x1d] = fVar2;
  ((float *)(gen_frame + 0xa0))[0x1e] = fVar3;
  ((float *)(gen_frame + 0xa0))[0x1f] = fVar4;
  uVar22 = 0;
  do {
    fVar1 = *(float *)((int)((float *)(gen_frame + 0xa0)) + uVar22 + 8);
    fVar2 = *(float *)((int)((float *)(gen_frame + 0xa0)) + uVar22 + 4);
    fVar3 = *(float *)((int)((float *)(gen_frame + 0xa0)) + uVar22);
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22) = ((fVar1 * fVar17 + fVar5) + fVar2 * fVar13) + fVar3 * fVar9;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22 + 4) =
         ((fVar1 * fVar18 + fVar6) + fVar2 * fVar14) + fVar3 * fVar10;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22 + 8) =
         ((fVar1 * fVar19 + fVar7) + fVar2 * fVar15) + fVar3 * fVar11;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22 + 0xc) =
         ((fVar1 * fVar20 + fVar8) + fVar2 * fVar16) + fVar3 * fVar12;
    uVar22 = uVar22 + 0x10;
  } while (uVar22 < 0x80);
  gen_maxps(&(auVar23), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))), ((undefined1 *)(gen_frame + 0x30)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x40)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x50)));
  gen_minps(&(auVar24), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))), ((undefined1 *)(gen_frame + 0x30)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x60)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x40)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x70)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x50)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x80)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x60)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x90)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x70)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x80)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x90)));
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)((char *)&auVar24 + 0));
  *param_1 = (*(undefined4 *)(gen_frame + 0x10));
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)((char *)&auVar24 + 4));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x14));
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)((char *)&auVar24 + 8));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)((char *)&auVar23 + 0));
  param_1[4] = (*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)((char *)&auVar23 + 4));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)((char *)&auVar23 + 8));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  F_00c47745(uVar21 ^ (uint)(uint)(gen_frame + 0x130));
  return uVar22;
}

/* ref: FUN_0068c8e0 */
uint F_0068c8e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68c8e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * pfVar1;
  uint uVar2;
  
  pfVar1 = (float *)F_004d9920(*(undefined * PTR32 *)(param_1 + 0xa8),0,0x10,2);
  uVar2 = 0;
  if (pfVar1 != (float *)0x0) {
    *pfVar1 = (float)((float10)param_2 + (float10)REFG(double, 0x1088130));
    uVar2 = *(uint *)(param_1 + 0xa8);
    *(undefined4 *)(uVar2 + 0x24) = 0;
  }
  *(float *)(param_1 + 0xe0) = param_2;
  return uVar2;
}

/* ref: FUN_0068c930 */
uint F_0068c930(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68c930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d9920(*(undefined * PTR32 *)(param_1 + 0xa8),0,0x10,2);
  uVar2 = 0;
  if (uVar1 != 0) {
    *(float *)(uVar1 + 4) = (float)((float10)param_2 + (float10)REFG(double, 0x1088130));
    uVar2 = *(uint *)(param_1 + 0xa8);
    *(undefined4 *)(uVar2 + 0x24) = 0;
  }
  *(float *)(param_1 + 0xe4) = param_2;
  return uVar2;
}

/* ref: FUN_0068c980 */
ushort F_0068c980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68c980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_2,param_3);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_0068c9a0 */
ushort F_0068c9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68c9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 0xc),param_2,param_3);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_0068c9c0 */
ushort F_0068c9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68c9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((ushort)param_1 == 0x65) {
    return 0x65;
  }
  uVar2 = (uint)(ushort)param_1;
  if (4 < param_2) {
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 0xc),param_3 & 0xffff,uVar2);
    if (param_2 == 5) {
      bVar4 = (uVar1 & 2) == 0;
LAB_0068cb36: ;
      if (!bVar4) {
        return (ushort)param_1;
      }
    }
    else {
      if (param_2 == 6) {
        bVar4 = (uVar1 & 8) == 0;
        goto LAB_0068cb36;
      }
      if (param_2 == 7) {
        bVar4 = (uVar1 & 0x20) == 0;
        goto LAB_0068cb36;
      }
      if (param_2 == 8) {
        bVar4 = (uVar1 & 0x80) == 0;
        goto LAB_0068cb36;
      }
      if ((param_2 == 9) && ((uVar1 & 0x200) != 0)) {
        return (ushort)param_1;
      }
    }
    if ((uVar2 / 100 & 1) != 0) {
      return 0x65;
    }
    if ((ushort)param_1 == 0xc9) {
      return 0x65;
    }
    uVar3 = 0xc9;
    if ((ushort)param_1 == 0x4b1) {
      uVar3 = 0x44d;
    }
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 0xc),param_3 & 0xffff,uVar3);
    if (param_2 == 5) goto LAB_0068ca60;
    if (param_2 == 6) goto LAB_0068cac8;
    if (param_2 == 7) goto LAB_0068cae4;
    if (param_2 != 8) {
      bVar4 = param_2 == 9;
      goto LAB_0068cba9;
    }
    goto LAB_0068cb00;
  }
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,uVar2);
  if (param_2 == 0) {
    bVar4 = (uVar1 & 2) == 0;
LAB_0068ca08: ;
    if (!bVar4) {
      return (ushort)param_1;
    }
  }
  else {
    if (param_2 == 1) {
      bVar4 = (uVar1 & 8) == 0;
      goto LAB_0068ca08;
    }
    if (param_2 == 2) {
      bVar4 = (uVar1 & 0x20) == 0;
      goto LAB_0068ca08;
    }
    if (param_2 == 3) {
      bVar4 = (uVar1 & 0x80) == 0;
      goto LAB_0068ca08;
    }
    if ((param_2 == 4) && ((uVar1 & 0x200) != 0)) {
      return (ushort)param_1;
    }
  }
  if ((uVar2 / 100 & 1) != 0) {
    return 0x65;
  }
  if ((ushort)param_1 == 0xc9) {
    return 0x65;
  }
  uVar3 = 0xc9;
  if ((ushort)param_1 == 0x4b1) {
    uVar3 = 0x44d;
  }
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,uVar3);
  if (param_2 == 0) {
LAB_0068ca60: ;
    if ((uVar1 & 2) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
  if (param_2 == 1) {
LAB_0068cac8: ;
    if ((uVar1 & 8) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
  if (param_2 == 2) {
LAB_0068cae4: ;
    if ((uVar1 & 0x20) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
  if (param_2 != 3) {
    bVar4 = param_2 == 4;
LAB_0068cba9: ;
    if (!bVar4) {
      return 0x65;
    }
    if ((uVar1 & 0x200) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
LAB_0068cb00: ;
  if ((uVar1 & 0x80) != 0) {
    return (ushort)uVar3;
  }
  return 0x65;
}

/* ref: FUN_0068cc20 */
ushort F_0068cc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68cc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ushort local_8;
  
  local_8 = 0x65;
  if (4 < param_2) {
    return 0x65;
  }
  uVar2 = (uint)(ushort)param_1;
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,uVar2);
  if (param_2 == 0) {
    bVar3 = (uVar1 & 2) == 0;
  }
  else if (param_2 == 1) {
    bVar3 = (uVar1 & 8) == 0;
  }
  else if (param_2 == 2) {
    bVar3 = (uVar1 & 0x20) == 0;
  }
  else {
    if (param_2 != 3) {
      if ((param_2 == 4) && ((uVar1 & 0x200) != 0)) {
        return (ushort)param_1;
      }
      goto LAB_0068cc5d;
    }
    bVar3 = (uVar1 & 0x80) == 0;
  }
  if (!bVar3) {
    return (ushort)param_1;
  }
LAB_0068cc5d: ;
  if ((ushort)param_1 != 0xc9) {
    param_1 = 0x68;
    if (uVar2 == 0x388) {
      param_1 = 0x385;
    }
    else if ((uVar2 == 0x450) || (uVar2 == 0x4b4)) {
      param_1 = 0x44d;
    }
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,param_1);
    if (param_2 == 0) {
      bVar3 = (uVar1 & 2) == 0;
    }
    else if (param_2 == 1) {
      bVar3 = (uVar1 & 8) == 0;
    }
    else if (param_2 == 2) {
      bVar3 = (uVar1 & 0x20) == 0;
    }
    else if (param_2 == 3) {
      bVar3 = (uVar1 & 0x80) == 0;
    }
    else {
      if (param_2 != 4) {
        return 0x65;
      }
      bVar3 = (uVar1 & 0x200) == 0;
    }
    if (!bVar3) {
      local_8 = (ushort)param_1;
    }
  }
  return local_8;
}

/* ref: FUN_0068cd40 */
ushort F_0068cd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68cd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  bool bVar2;
  ushort local_8;
  
  local_8 = 0x65;
  if (4 < param_2) {
    return 0x65;
  }
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,(uint)(ushort)param_1);
  if (param_2 == 0) {
    bVar2 = (uVar1 & 2) == 0;
  }
  else if (param_2 == 1) {
    bVar2 = (uVar1 & 8) == 0;
  }
  else if (param_2 == 2) {
    bVar2 = (uVar1 & 0x20) == 0;
  }
  else {
    if (param_2 != 3) {
      if ((param_2 == 4) && ((uVar1 & 0x200) != 0)) {
        return (ushort)param_1;
      }
      goto LAB_0068cd7d;
    }
    bVar2 = (uVar1 & 0x80) == 0;
  }
  if (!bVar2) {
    return (ushort)param_1;
  }
LAB_0068cd7d: ;
  if ((((ushort)param_1 / 100 & 1) == 0) && ((ushort)param_1 != 0xc9)) {
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,0xc9);
    if (param_2 == 0) {
      bVar2 = (uVar1 & 2) == 0;
    }
    else if (param_2 == 1) {
      bVar2 = (uVar1 & 8) == 0;
    }
    else if (param_2 == 2) {
      bVar2 = (uVar1 & 0x20) == 0;
    }
    else if (param_2 == 3) {
      bVar2 = (uVar1 & 0x80) == 0;
    }
    else {
      if (param_2 != 4) {
        return 0x65;
      }
      bVar2 = (uVar1 & 0x200) == 0;
    }
    if (!bVar2) {
      local_8 = 0xc9;
    }
  }
  return local_8;
}

/* ref: FUN_0068ce50 */
uint F_0068ce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ce50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  uVar4 = 0;
  iVar1 = *param_1;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar4 * 4);
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *(undefined4 *)(iVar1 + uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*param_1 != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*param_1);
    *param_1 = 0;
    *param_2 = 0;
    return uVar3;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf12 */
unsigned int F_0068ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ced0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(in_ecx + 0x30);
  fVar2 = *(float *)(in_ecx + 0x150);
  fVar3 = *(float *)(in_ecx + 0x34);
  fVar4 = *(float *)(in_ecx + 0x154);
  fVar5 = *(float *)(in_ecx + 0x38);
  fVar6 = *(float *)(in_ecx + 0x158);
  fVar7 = *(float *)(in_ecx + 0x144);
  fVar8 = *(float *)(in_ecx + 0x148);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x140) + (float10)fVar1)));
  param_2[1] = (float)((float10)fVar3 + (float10)fVar7);
  param_2[2] = (float)((float10)fVar5 + (float10)fVar8);
  param_2[4] = (float)((float10)fVar1 + (float10)fVar2);
  param_2[5] = (float)((float10)fVar3 + (float10)fVar4);
  param_2[6] = (float)((float10)fVar5 + (float10)fVar6);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf15 */
uint F_0068cf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68cf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  uVar4 = F_005ff5c0(param_1,this + 0x120);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  iVar1 = *(int *)(this + 0x7c);
  uVar2 = *(uint *)(this + 0x74);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar5 * 4);
      if (this_00 != (undefined *)0x0) {
        bVar3 = F_00655030(this_00,param_1);
        uVar4 = CONCAT31(extraout_var,bVar3);
        if (bVar3 != 0) {
          return CONCAT31(extraout_var,1);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar4 & 0xffffff00;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf14 */
uint F_0068cff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68cff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  uVar4 = F_005ff5c0(param_1,this + 0x120);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  iVar1 = *(int *)(this + 0x7c);
  uVar2 = *(uint *)(this + 0x74);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar5 * 4);
      if (this_00 != (undefined *)0x0) {
        bVar3 = F_00655230(this_00,param_1,param_2);
        uVar4 = CONCAT31(extraout_var,bVar3);
        if (bVar3 != 0) {
          return CONCAT31(extraout_var,1);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar4 & 0xffffff00;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf21 */
uint F_0068d050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68d050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    uVar1 = F_0064d240(*(undefined * PTR32 *)(this + 0x78),param_1,param_2);
    return uVar1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf22 */
uint F_0068d0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68d0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    uVar1 = F_0064cf40(*(undefined * PTR32 *)(this + 0x78),param_1,param_2);
    return uVar1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf17 */
uint F_0068d170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
    return (uint)(this + 0x30);
  }
  uVar1 = F_00655980(*(undefined * PTR32 *)(this + 0x78),param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf19 */
uint F_0068d190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68d190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  uint uVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  (*(float * PTR32 *)(gen_frame + 0xc)) = param_1;
  if (*(int *)(this + 0x78) == 0) {
    pfVar7 = (float *)&REFG(float, 0x1302d00);
  }
  else {
    if (param_2 != 0x3d) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,param_1,param_2);
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0xc));
      goto LAB_0068d70f;
    }
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x1d);
    if ((char)uVar4 == '\0') {
      if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
        uVar4 = F_00623160(*(undefined * PTR32 *)(this + 0x78),"n_hara");
        if ((short)uVar4 != -1) {
          uVar4 = F_0054e1a0(this,((undefined1 *)(gen_frame + 0x80)),uVar4 & 0xffff);
          goto LAB_0068d292;
        }
      }
      (*(float *)(gen_frame + 0x20)) = *param_3;
      (*(float *)(gen_frame + 0x24)) = param_3[1];
      (*(float *)(gen_frame + 0x28)) = param_3[2];
      (*(float *)(gen_frame + 0x30)) = *(float *)(this + 0x120);
      (*(float *)(gen_frame + 0x34)) = *(float *)(this + 0x124);
      fVar13 = *(float *)(this + 0x128);
    }
    else {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,((undefined1 *)(gen_frame + 0x80)),0x1d);
LAB_0068d292: ;
      (*(float *)(gen_frame + 0x20)) = *param_3;
      (*(float *)(gen_frame + 0x24)) = param_3[1];
      (*(float *)(gen_frame + 0x28)) = param_3[2];
      (*(float *)(gen_frame + 0x30)) = *(float *)(uVar4 + 0x30);
      (*(float *)(gen_frame + 0x34)) = *(float *)(uVar4 + 0x34);
      fVar13 = *(float *)(uVar4 + 0x38);
    }
    uVar4 = *(uint *)(this + 0x74);
    iVar6 = *(int *)(this + 0x7c);
    (*(float *)(gen_frame + 0x38)) = fVar13;
    uVar8 = 0;
    (*(float *)(gen_frame + 0x48)) = gen_bits2f(uVar4);
    (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x1090998);
    (*(char *)(gen_frame + 0x7f)) = '\0';
    if (uVar4 == 0) {
LAB_0068d375: ;
      (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x30));
      (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x34));
      (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x38));
    }
    else {
      do {
        this_00 = *(undefined * PTR32 *)(iVar6 + uVar8 * 4);
        if (this_00 != (undefined *)0x0) {
          bVar3 = F_00655450(this_00,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x8)));
          if (bVar3 != 0) {
            pfVar7 = &(*(float *)(gen_frame + 0x4c));
            if (!((float10)(*(float *)(gen_frame + 0x4c)) < (float10)(*(float *)(gen_frame + 0x8)))) {
              pfVar7 = &(*(float *)(gen_frame + 0x8));
            }
            (*(float *)(gen_frame + 0x4c)) = *pfVar7;
            (*(char *)(gen_frame + 0x7f)) = '\x01';
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)gen_fl2bits((*(float *)(gen_frame + 0x48))));
      if ((*(char *)(gen_frame + 0x7f)) == '\0') goto LAB_0068d375;
      fVar13 = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x50)) = fVar13;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0x54)) = fVar2;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x28)));
      (*(float *)(gen_frame + 0x58)) = fVar1;
      fVar10 = (float10)(*(float *)(gen_frame + 0x4c));
      fVar13 = (float)(fVar10 * (float10)fVar13);
      (*(float *)(gen_frame + 0x60)) = fVar13;
      fVar2 = (float)((float10)fVar2 * fVar10);
      (*(float *)(gen_frame + 0x64)) = fVar2;
      fVar1 = (float)(fVar10 * (float10)fVar1);
      (*(float *)(gen_frame + 0x68)) = fVar1;
      fVar13 = (float)((float10)fVar13 + (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x50)) = fVar13;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)fVar2);
      (*(float *)(gen_frame + 0x54)) = fVar2;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x28)) + (float10)fVar1);
      (*(float *)(gen_frame + 0x58)) = fVar1;
      (*(float *)(gen_frame + 0x60)) = fVar13;
      (*(float *)(gen_frame + 0x64)) = fVar2;
      (*(float *)(gen_frame + 0x68)) = fVar1;
    }
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)(gen_frame + 0x34)));
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x38)));
    (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)(gen_frame + 0x34)));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x38)));
    if ((char)param_4 != '\0') {
      (*(float *)(gen_frame + 0x54)) = 0.0;
    }
    F_0046f390(&(*(float *)(gen_frame + 0x50)));
    fVar10 = (float10)(*(float *)(gen_frame + 0x50));
    fVar11 = (float10)(*(float *)(gen_frame + 0x54));
    fVar12 = (float10)(*(float *)(gen_frame + 0x58));
    fVar13 = ((float)GEN_TOF(((fVar11 * fVar11 + fVar10 * fVar10) + fVar12 * fVar12)));
    (*(float *)(gen_frame + 0x48)) = fVar13;
    if ((float10)fVar13 < (float10)REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0xc0)) = REFG(float, 0x1302c60);
      fVar10 = (float10)0;
      (*(float *)(gen_frame + 0xf0)) = (float)fVar10;
      (*(float *)(gen_frame + 0xc4)) = 0.0;
      (*(float *)(gen_frame + 0xf4)) = (float)fVar10;
      (*(float *)(gen_frame + 0xc8)) = 0.0;
      (*(float *)(gen_frame + 0xf8)) = (float)fVar10;
      (*(float *)(gen_frame + 0xd0)) = 0.0;
      (*(float *)(gen_frame + 0xd8)) = 0.0;
      (*(float *)(gen_frame + 0xe0)) = 0.0;
      (*(float *)(gen_frame + 0xe4)) = 0.0;
      (*(float *)(gen_frame + 0xd4)) = REFG(float, 0x1302c64);
      (*(float *)(gen_frame + 0xe8)) = REFG(float, 0x1302c68);
      F_004efe70(&(*(float *)(gen_frame + 0xc0)),(uint)(this + 0x40));
      (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0x64)));
      (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0x68)));
    }
    else {
      (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x60));
      (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x64));
      (*(float *)(gen_frame + 0xf8)) = (*(float *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x60)) = (float)((float10)REFG(float, 0x1302c84) * fVar12 - (float10)REFG(float, 0x1302c88) * fVar11);
      (*(float *)(gen_frame + 0x64)) = (float)(fVar10 * (float10)REFG(float, 0x1302c88) - (float10)REFG(float, 0x1302c80) * fVar12);
      (*(float *)(gen_frame + 0x68)) = (float)((float10)REFG(float, 0x1302c80) * fVar11 - fVar10 * (float10)REFG(float, 0x1302c84));
      F_0046f390(&(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0x60));
      (*(float *)(gen_frame + 0xc4)) = (*(float *)(gen_frame + 0x64));
      (*(float *)(gen_frame + 0xc8)) = (*(float *)(gen_frame + 0x68));
      fVar13 = (float)((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x64))
                      );
      (*(float *)(gen_frame + 0x10)) = fVar13;
      (*(float *)(gen_frame + 0xd0)) = fVar13;
      (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0x50));
      (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0x54));
      (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x58));
      fVar13 = (float)((float10)(*(float *)(gen_frame + 0x60)) * (float10)(*(float *)(gen_frame + 0x58)) - (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x68))
                      );
      (*(float *)(gen_frame + 0x14)) = fVar13;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x64)) * (float10)(*(float *)(gen_frame + 0x50)) - (float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x60)))
      ;
      (*(float *)(gen_frame + 0x18)) = fVar2;
      (*(float *)(gen_frame + 0xd4)) = fVar13;
      (*(float *)(gen_frame + 0xd8)) = fVar2;
    }
    pfVar7 = &(*(float *)(gen_frame + 0xc0));
  }
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0xc));
  for (iVar6 = 0x10; pfVar5 = (*(float * PTR32 *)(gen_frame + 0xc)), iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar9 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar9 = pfVar9 + 1;
  }
LAB_0068d70f: ;
  (*(float * PTR32 *)(gen_frame + 0xc)) = pfVar5;
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)pfVar5;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf6 */
uint F_0068d730(unsigned int gen_a0)
{
  GEN_ENTER(0x68d730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b81ed0(*(undefined * PTR32 *)(this + 0x60),this + 0x120);
  return uVar1;
}

/* ref: FUN_0068d740 */
uint F_0068d740(unsigned int gen_a0)
{
  GEN_ENTER(0x68d740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x710) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x710),0,0);
    *(undefined4 *)((int)this + 0x710) = 0;
  }
  *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) & 0xfffeffff;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  return uVar1;
}

/* ref: FUN_0068d780 */
uint F_0068d780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x714);
  if ((iVar1 != 0) && (*(int *)(iVar1 + param_1 * 4) != 0)) {
    F_0050c620(*(undefined4 *)(iVar1 + param_1 * 4),0,0);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x714) + param_1 * 4))) = 0;
  }
  uVar2 = 0 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x6f8) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x6f8) | uVar2;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  return uVar2;
}

/* ref: FUN_0068d7f0 */
uint F_0068d7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68d7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = *(uint *)((int)this + 0x71c) >> 4;
  if ((uVar1 & 1) != 0) {
    if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
      F_0061eec0(*(undefined * PTR32 *)((int)this + 0x78),1);
    }
    F_009f54d0((undefined *)((int)this + 0x4a0),*(undefined4 *)((int)this + 0x414),1,0);
    if (*(int *)((int)this + 0x414) != 0) {
      F_0050c620(*(int *)((int)this + 0x414),0,0);
      *(undefined4 *)((int)this + 0x414) = 0;
    }
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x100);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x118))(this,((undefined1 *)(gen_frame + 0x8)),0x100,1,"resident/face");
    if (uVar1 != 0) {
      F_004ff310(((undefined1 *)(gen_frame + 0x4)),4,0);
      *(undefined4 *)((int)this + 0x40c) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x0)) = 0x706170;
      *(undefined4 *)((int)this + 0x410) = 0;
      uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)),0,0,0);
      *(uint *)((int)this + 0x414) = uVar1;
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return uVar1;
    }
    *(undefined4 *)((int)this + 0x410) = 0xffffffff;
    uVar1 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_0068d920 */
byte F_0068d920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (byte)(*(uint *)(in_ecx + 0x2c4) >> ((byte)param_2 & 0x1f)) & 1;
}

/* ref: FUN_0068d980 */
unsigned int F_0068d980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x78) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_006233a0(*(int *)((int)this + 0x78));
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
        F_0064d630(*(undefined * PTR32 *)((int)this + 0x78),param_1,uVar2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_0068d9c0 */
byte F_0068d9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x78) != 0) &&
     (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54))), in_ecx_00 != 0)) {
    bVar1 = F_009f0920(in_ecx_00,param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_0068d9e0 */
uint F_0068d9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x78) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x78) + 0x54))), this_00 != (undefined *)0x0)) {
    uVar1 = F_009f4320(this_00,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0068da00 */
uint F_0068da00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68da00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  uint uVar1;
  
  if ((*(int *)(in_ecx + 0x78) != 0) &&
     (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54))), in_ecx_00 != 0)) {
    uVar1 = F_009f0900(in_ecx_00,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0068da20 */
float10 F_0068da20(unsigned int gen_a0)
{
  GEN_ENTER(0x68da20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  float10 fVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return (float10)0;
  }
  in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54)));
  if (in_ecx_00 != 0) {
    fVar1 = F_009f13c0(in_ecx_00);
    return (float10)(float)fVar1;
  }
  return (float10)0.0;
}

/* ref: FUN_0068da60 */
uint F_0068da60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68da60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_ecx_00;
  
  in_ecx_00 = 0;
  if ((*(int *)(in_ecx + 0x78) != 0) &&
     (in_ecx_00 = *((uint *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54))), in_ecx_00 != 0)) {
    F_009f13a0(in_ecx_00,param_2);
  }
  return in_ecx_00;
}

/* ref: FUN_0068da90 */
byte F_0068da90(unsigned int gen_a0)
{
  GEN_ENTER(0x68da90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  
  if ((REFG(int, 0x14c4e78) != 0) && (iVar1 = *(int *)(REFG(int, 0x14c4e78) + 0x18), iVar1 != 0)) {
    if ((*(int *)(iVar1 + 0x2e00) == 0) || (*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x2e00) + 0xec))) != this)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    return *(undefined * PTR32 *)(iVar1 + 0xec) == this | bVar2 |
           (((undefined *)(iVar1 + 0x2600) == this || (undefined *)(iVar1 + 0x1e60) == this) ||
           (undefined *)(iVar1 + 0x16c0) == this);
  }
  return *(short *)((int)this + 0x72) == 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf8 */
unsigned int F_0068db00(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68db00u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = *(uint *)(param_1 + 0x74);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *(int *)(iVar1 + uVar4 * 4);
      if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
        F_004ffee0(iVar3,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf9 */
unsigned int F_0068db40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68db40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = *(uint *)(param_1 + 0x74);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *(int *)(iVar1 + uVar4 * 4);
      if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
        F_004fff30(iVar3,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: FUN_0068db80 */
unsigned int F_0068db80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68db80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(uint *)((int)this + 0x74) = param_1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1 * 4,0x10);
  *(uint *)((int)this + 0x7c) = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1 * 4,0x10);
  *(uint *)((int)this + 0x80) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x7c) + uVar1 * 4))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1);
  }
  return 0;
}

/* ref: FUN_0068dc00 */
uint F_0068dc00(unsigned int gen_a0)
{
  GEN_ENTER(0x68dc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x7c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x7c));
    *(undefined4 *)((int)this + 0x7c) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x80) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf81 */
unsigned int F_0068dc50(unsigned int gen_a0)
{
  GEN_ENTER(0x68dc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this_00;
  undefined4 uVar4;
  float10 fVar5;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) {
    fVar1 = *(float *)(this + 0x50);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    uVar4 = *(undefined4 *)(this + 0x40);
    fVar2 = *(float *)(this + 0x54);
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x30);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(this + 0x34);
    (*(float *)(gen_frame + 0x28)) = *(float *)(this + 0x58);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x38);
    (*(float *)(gen_frame + 0x5c)) = *(float *)(this + 0x294);
    (*(float *)(gen_frame + 0x58)) = *(float *)(this + 0x290);
    fVar5 = (float10)*(float *)(this + 0x294);
    (*(undefined4 *)(gen_frame + 0x10)) = uVar4;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x44);
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x48);
    fVar1 = (float)(fVar5 * (float10)fVar1);
    (*(float *)(gen_frame + 0x40)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(this + 0x4c);
    fVar2 = (float)((float10)fVar2 * fVar5);
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar3 = ((float)GEN_TOF((fVar5 * (float10)*(float *)(this + 0x58))));
    (*(float *)(gen_frame + 0x48)) = fVar3;
    fVar5 = (float10)*(float *)(this + 0x290);
    fVar1 = (float)(fVar5 * (float10)fVar1);
    (*(float *)(gen_frame + 0x30)) = fVar1;
    fVar2 = (float)((float10)fVar2 * fVar5);
    (*(float *)(gen_frame + 0x34)) = fVar2;
    fVar3 = (float)(fVar5 * (float10)fVar3);
    (*(float *)(gen_frame + 0x38)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    F_00623060(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf82 */
float F_0068dd30(unsigned int gen_a0)
{
  GEN_ENTER(0x68dd30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = *(int *)(this + 0x74);
  uVar4 = 0;
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1090998);
  ((float *)(gen_frame + 0x18))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x18))[0], REFG(float, 0x1090998));
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1097b10);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1097b10);
  ((float *)(gen_frame + 0x8))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[0], REFG(float, 0x1097b10));
  fVar8 = REFG(float, 0x1090998);
  fVar9 = REFG(float, 0x1097b10);
  fVar10 = REFG(float, 0x1097b10);
  fVar11 = REFG(float, 0x1097b10);
  fVar12 = REFG(float, 0x1090998);
  fVar13 = REFG(float, 0x1090998);
  if (iVar1 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x7c) + uVar4 * 4)));
      if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) {
        pfVar3 = *(float * PTR32 *)(iVar1 + 0xf0);
        pfVar2 = &(*(float *)(gen_frame + 0x10));
        if (!((float10)(*(float *)(gen_frame + 0x10)) < (float10)*pfVar3)) {
          pfVar2 = pfVar3;
        }
        fVar13 = *pfVar2;
        fVar12 = pfVar3[1];
        pfVar2 = pfVar3 + 1;
        (*(float *)(gen_frame + 0x10)) = fVar13;
        if ((float10)(*(float *)(gen_frame + 0x14)) < (float10)fVar12) {
          pfVar2 = &(*(float *)(gen_frame + 0x14));
        }
        fVar12 = *pfVar2;
        fVar8 = pfVar3[2];
        pfVar2 = pfVar3 + 2;
        (*(float *)(gen_frame + 0x14)) = fVar12;
        if ((float10)((float *)(gen_frame + 0x18))[0] < (float10)fVar8) {
          pfVar2 = ((float *)(gen_frame + 0x18));
        }
        fVar11 = pfVar3[4];
        fVar8 = *pfVar2;
        ((float *)(gen_frame + 0x18))[0] = fVar8;
        pfVar2 = &(*(float *)(gen_frame + 0x0));
        if (!((float10)fVar11 < (float10)(*(float *)(gen_frame + 0x0)))) {
          pfVar2 = pfVar3 + 4;
        }
        fVar10 = pfVar3[5];
        fVar11 = *pfVar2;
        pfVar2 = pfVar3 + 5;
        (*(float *)(gen_frame + 0x0)) = fVar11;
        if ((float10)fVar10 < (float10)(*(float *)(gen_frame + 0x4))) {
          pfVar2 = &(*(float *)(gen_frame + 0x4));
        }
        fVar9 = pfVar3[6];
        fVar10 = *pfVar2;
        pfVar3 = pfVar3 + 6;
        (*(float *)(gen_frame + 0x4)) = fVar10;
        if ((float10)fVar9 < (float10)((float *)(gen_frame + 0x8))[0]) {
          pfVar3 = ((float *)(gen_frame + 0x8));
        }
        fVar9 = *pfVar3;
        ((float *)(gen_frame + 0x8))[0] = fVar9;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(this + 0x74));
  }
  *(float *)(this + 0x140) = fVar13;
  *(float *)(this + 0x144) = fVar12;
  *(float *)(this + 0x148) = fVar8;
  *(float *)(this + 0x150) = fVar11;
  *(float *)(this + 0x154) = fVar10;
  *(float *)(this + 0x158) = fVar9;
  fVar13 = *(float *)(this + 0x150);
  fVar12 = *(float *)(this + 0x140);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar13 - (float10)fVar12);
  fVar8 = *(float *)(this + 0x154);
  fVar11 = *(float *)(this + 0x144);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar8 - (float10)fVar11);
  fVar10 = *(float *)(this + 0x158);
  fVar9 = *(float *)(this + 0x148);
  ((float *)(gen_frame + 0x8))[0] = (float)((float10)fVar10 - (float10)fVar9);
  fVar5 = (float10)REFG(double, 0x1088108);
  fVar13 = ((float)GEN_TOF(((float10)(float)((float10)fVar13 - (float10)fVar12) * fVar5)));
  (*(float *)(gen_frame + 0x10)) = fVar13;
  fVar12 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 - (float10)fVar11) * fVar5)));
  (*(float *)(gen_frame + 0x14)) = fVar12;
  fVar8 = ((float)GEN_TOF((fVar5 * (float10)(float)((float10)fVar10 - (float10)fVar9))));
  ((float *)(gen_frame + 0x18))[0] = fVar8;
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a0c88);
  fVar13 = (float)((float10)fVar13 * fVar5);
  (*(float *)(gen_frame + 0x0)) = fVar13;
  fVar12 = (float)((float10)fVar12 * fVar5);
  (*(float *)(gen_frame + 0x4)) = fVar12;
  fVar8 = (float)(fVar5 * (float10)fVar8);
  ((float *)(gen_frame + 0x8))[0] = fVar8;
  fVar5 = (float10)fVar12;
  fVar6 = (float10)fVar13;
  fVar7 = (float10)fVar8;
  fVar13 = ((float)GEN_TOF(((fVar5 * fVar5 + fVar6 * fVar6) + fVar7 * fVar7)));
  (*(float *)(gen_frame + 0x2c)) = fVar13;
  if ((float10)fVar13 < (float10)1) {
    F_0046f0e0(&(*(float *)(gen_frame + 0x0)),(float)(float10)1);
  }
  fVar5 = (float10)F_006aec30(this + 0x140,&(*(float *)(gen_frame + 0x0)));
  fVar13 = *(float *)(this + 0x150);
  fVar12 = *(float *)(this + 0x140);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar13 - (float10)fVar12);
  fVar8 = *(float *)(this + 0x154);
  fVar11 = *(float *)(this + 0x144);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar8 - (float10)fVar11);
  fVar10 = *(float *)(this + 0x158);
  fVar9 = *(float *)(this + 0x148);
  ((float *)(gen_frame + 0x18))[0] = (float)((float10)fVar10 - (float10)fVar9);
  fVar6 = (float10)REFG(double, 0x1088108);
  fVar13 = ((float)GEN_TOF(((float10)(float)((float10)fVar13 - (float10)fVar12) * fVar6)));
  (*(float *)(gen_frame + 0x10)) = fVar13;
  fVar12 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 - (float10)fVar11) * fVar6)));
  (*(float *)(gen_frame + 0x14)) = fVar12;
  fVar8 = ((float)GEN_TOF((fVar6 * (float10)(float)((float10)fVar10 - (float10)fVar9))));
  ((float *)(gen_frame + 0x18))[0] = fVar8;
  fVar11 = ((float)GEN_TOF((((float10)fVar12 * (float10)fVar12 + (float10)fVar13 * (float10)fVar13) +
                  (float10)fVar8 * (float10)fVar8)));
  (*(float *)(gen_frame + 0x2c)) = fVar11;
  fVar11 = ((float)GEN_TOF(SQRT((float10)fVar11)));
  (*(float *)(gen_frame + 0x2c)) = fVar11;
  *(float *)(this + 0x13c) = fVar11;
  *(float *)(this + 0x130) = ((float)GEN_TOF(((float10)fVar13 + (float10)*(float *)(this + 0x140))));
  *(float *)(this + 0x134) = ((float)GEN_TOF(((float10)*(float *)(this + 0x144) + (float10)fVar12)));
  *(float *)(this + 0x138) = ((float)GEN_TOF(((float10)*(float *)(this + 0x148) + (float10)fVar8)));
  return (float)fVar5;
}

/* ref: FUN_0068e000 */
byte F_0068e000(unsigned int gen_a0)
{
  GEN_ENTER(0x68e000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_006aea80((undefined4 *)((int)this + 0x120),(undefined4 *)((int)this + 0x130));
  if (bVar1 == 0) {
    *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x130);
    *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x134);
    *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)this + 0x138);
    *(undefined4 *)((int)this + 300) = *(undefined4 *)((int)this + 0x13c);
    return 1;
  }
  return 0;
}

/* ref: FUN_0068e040 */
byte F_0068e040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x7c);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *(int *)(iVar1 + uVar5 * 4);
      if (iVar3 != 0) {
        bVar4 = F_004ffb50(*(undefined * PTR32 *)(iVar3 + 0x18),param_1);
        if (bVar4 != 0) {
          return 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return 0;
}

/* ref: FUN_0068e090 */
uint F_0068e090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) != 0) {
    F_009bc2a0((undefined *)*puVar1);
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4)));
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) != 0) {
      this_00 = (undefined *)*puVar1;
      if (this_00 != (undefined *)0x0) {
        F_009cfa70(this_00);
        puVar1 = (undefined4 *)F_00406ad0(this_00);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) = 0;
    }
  }
  return (uint)puVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf35 */
unsigned int F_0068e0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68e0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x710) != 0) {
    F_0050c620(*(int *)(this + 0x710),0,0);
    *(undefined4 *)(this + 0x710) = 0;
  }
  *(uint *)(this + 0x6f8) = *(uint *)(this + 0x6f8) & 0xfffeffff;
  uVar3 = 0;
  this[0x6ec] = (undefined1)0x1;
  if (*(int *)(this + 0x6fc) != 0) {
    do {
      iVar1 = *(int *)(this + 0x714);
      if ((iVar1 != 0) && (*(int *)(iVar1 + uVar3 * 4) != 0)) {
        F_0050c620(*(undefined4 *)(iVar1 + uVar3 * 4),0,0);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x714) + uVar3 * 4))) = 0;
      }
      bVar2 = (byte)uVar3;
      uVar3 = uVar3 + 1;
      *(uint *)(this + 0x6f8) =
           ~(1 << (bVar2 & 0x1f)) & *(uint *)(this + 0x6f8) | 0 << (bVar2 & 0x1f);
      this[0x6ec] = (undefined1)0x1;
    } while (uVar3 < *(uint *)(this + 0x6fc));
  }
  if (*(int *)(this + 0x714) != 0) {
    F_00406b30(*(int *)(this + 0x714));
    *(undefined4 *)(this + 0x714) = 0;
  }
  *(undefined4 *)(this + 0x6f8) = 0;
  *(undefined4 *)(this + 0x6fc) = 0;
  this[0x6ec] = (undefined1)0x0;
  F_00b824b0(this + 0x700);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf72 */
byte F_0068e1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x68e1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (byte)(*(uint *)(in_ecx + 0x71c) >> 6) & 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf31 */
uint F_0068e1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)(this + 0x2d8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar3 = *(int *)(this + 0x7c);
  *(int * PTR32 *)(this + 0x2d8) = param_1;
  if (param_1 == (int *)0x0) {
    uVar7 = *(undefined4 *)(this + 0x160);
  }
  else {
    uVar7 = 0;
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar4 = *(int *)(iVar3 + uVar5 * 4);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x70) = uVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar3 = *(int *)(this + 0x80);
  uVar6 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar3 + uVar6 * 4);
      if (this_00 != (undefined *)0x0) {
        uVar5 = F_009bc1e0(this_00,(uint)(param_1 != (int *)0x0));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return uVar5;
}

/* ref: Client::Graphics::Scene::Human::vf55 */
uint F_0068e290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (param_1 < 10) {
    *(undefined4 *)(this + param_1 * 4 + 0x750) =
         *((undefined4 *)GEN_TOP((param_1 * 0xc + *(int *)(this + 0x818))));
    iVar2 = param_1 * 0xc + *(int *)(this + 0x818);
    *((undefined4 *)GEN_TOP((this + (param_1 * 3 + 0x3c0) * 2))) = *(undefined4 *)(iVar2 + 4);
    *((undefined2 *)GEN_TOP((this + (param_1 * 3 + 0x3c0) * 2 + 4))) = *(undefined2 *)(iVar2 + 8);
  }
  if (((param_1 == 0xd) || (uVar1 = param_1, param_1 == 0xe)) &&
     (uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0x7c) + param_1 * 4))), uVar1 != 0)) {
    *(undefined4 *)(uVar1 + 0x14) = 0x3000000;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf75 */
uint F_0068e300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  char * _Format;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = (uint)*(ushort *)(this + param_3 * 4 + 0x750);
      _Format = "chara/equipment/e%04d/e%04d.imc";
    }
    else {
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
      _Format = "chara/equipment/e%04d/e%04d.imc";
    }
  }
  else {
    if (9 < param_3) {
      return 0;
    }
    if (*(int *)(this + 0x818) == 0) {
      uVar1 = *(ushort *)(this + param_3 * 4 + 0x750);
    }
    else {
      uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
    }
    uVar2 = (uint)uVar1;
    _Format = "chara/accessory/a%04d/a%04d.imc";
  }
  F_00c472af(param_1,param_2,_Format,uVar2,uVar2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf76 */
uint F_0068e390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  char * pcVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar8 = param_4;
  if (param_3 < 5) {
    if (*(char *)(param_4 + 8) == 'b') {
      uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
      uVar5 = (uint)uVar4;
      pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
      goto LAB_0068e620;
    }
    iVar2 = *(int *)(this + 0x818);
    iVar3 = param_3 * 0xc;
    if (*(char *)(iVar2 + 4 + iVar3) == '\0') {
LAB_0068e3fc: ;
      F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
      return 0;
    }
    uVar7 = (uint)*(byte *)(iVar3 + 4 + iVar2);
    uVar5 = (uint)*(ushort *)(iVar3 + iVar2);
    if (*(char *)(iVar2 + 3 + iVar3) != '\0') {
      F_00c472af(param_1,param_2,"chara/equipment/e%04d/material/v%04d/staining/%s",uVar5,uVar7,
                 param_4);
      pcVar9 = param_1;
      do {
        pcVar6 = pcVar9;
        pcVar9 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      pcVar6[-5] = '\0';
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x818) + 3 + iVar3)));
      pcVar9 = "_s%04d.mtrl";
LAB_0068e461: ;
      F_00c472af(((char *)(gen_frame + 0x8)),0x10,pcVar9,(uint)bVar1);
      F_00c473c8(param_1,param_2,((char *)(gen_frame + 0x8)));
      goto LAB_0068e62d;
    }
    pcVar9 = "chara/equipment/e%04d/material/v%04d/%s";
  }
  else if (param_3 < 10) {
    iVar2 = *(int *)(this + 0x818);
    iVar3 = param_3 * 0xc;
    if (*(char *)(iVar2 + 4 + iVar3) == '\0') goto LAB_0068e3fc;
    uVar7 = (uint)*(byte *)(iVar3 + 4 + iVar2);
    uVar5 = (uint)*(ushort *)(iVar3 + iVar2);
    if (*(char *)(iVar2 + 3 + iVar3) != '\0') {
      F_00c472af(param_1,param_2,"chara/accessory/a%04d/material/v%04d/staining/%s",uVar5,uVar7,
                 param_4);
      pcVar9 = param_1;
      do {
        pcVar6 = pcVar9;
        pcVar9 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      pcVar6[-5] = '\0';
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x818) + 3 + iVar3)));
      pcVar9 = "_s%04d.mtrl";
      goto LAB_0068e461;
    }
    pcVar9 = "chara/accessory/a%04d/material/v%04d/%s";
  }
  else if (param_3 == 10) {
    uVar5 = (uint)*(ushort *)(this + 0x778);
    pcVar9 = "chara/human/c%04d/obj/hair/h%04d/material/v0001/%s";
    uVar7 = (uint)*(ushort *)(this + 0x77a);
  }
  else if (param_3 == 0xb) {
    uVar5 = (uint)*(ushort *)(this + 0x778);
    pcVar9 = "chara/human/c%04d/obj/face/f%04d/material/%s";
    uVar7 = (uint)*(ushort *)(this + 0x77c);
  }
  else if (param_3 == 0xc) {
    uVar5 = (uint)*(ushort *)(this + 0x778);
    pcVar9 = "chara/human/c%04d/obj/tail/t%04d/material/%s";
    uVar7 = (uint)*(ushort *)(this + 0x77e);
  }
  else if (param_3 == 0xd) {
    uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
    iVar8 = param_4 + 8;
    uVar5 = (uint)uVar4;
    uVar7 = uVar5;
    if (*(char *)(param_4 + 8) == 'f') {
      if ((uVar5 != 0x12d) && (uVar5 != 0x191)) {
        pcVar9 = "chara/human/c%04d/obj/face/f0001/material/mt_c%04d%s";
        goto LAB_0068e620;
      }
      iVar8 = param_4 + 0xd;
      pcVar9 = "chara/human/c%04d/obj/face/f0101/material/mt_c%04df0101%s";
    }
    else {
      pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
    }
  }
  else if (param_3 == 0xe) {
    uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
    uVar5 = (uint)uVar4;
    iVar8 = param_4 + 8;
    pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
    uVar7 = uVar5;
  }
  else {
    if (param_3 != 0xf) goto LAB_0068e62d;
    uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
    uVar5 = (uint)uVar4;
    pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
LAB_0068e620: ;
    iVar8 = param_4 + 8;
    uVar7 = uVar5;
  }
  F_00c472af(param_1,param_2,pcVar9,uVar5,uVar7,iVar8);
LAB_0068e62d: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf77 */
uint F_0068e650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined1 HVar1;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      HVar1 = this[param_3 * 6 + 0x781];
    }
    else {
      HVar1 = *((undefined *)GEN_TOP((*(int *)(this + 0x818) + 5 + param_3 * 0xc)));
    }
    if (HVar1 != (undefined1)0x0) {
      F_00c472af(param_1,param_2,"chara/common/texture/decal_equip/-decal_%03d.tex",
                 (uint)(byte)HVar1);
      return param_1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf78 */
uint F_0068e6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 * puVar1;
  undefined1 HVar2;
  ushort uVar3;
  
  if (4 < (*(uint *)&gen_args[3])) {
    return 0;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x818))) == 0) {
    uVar3 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[3]) * 4 + 0x750)));
    HVar2 = (*(undefined * PTR32 *)&gen_args[0])[(*(uint *)&gen_args[3]) * 6 + 0x784];
  }
  else {
    uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x818))) + (*(uint *)&gen_args[3]) * 0xc)));
    HVar2 = *((undefined *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x818))) + 8 + (*(uint *)&gen_args[3]) * 0xc)));
  }
  if (HVar2 == (undefined1)0x0) {
    return 0;
  }
  if ((byte)HVar2 < 100) {
    puVar1 = (undefined4 *)F_004ff310(&(*(uint *)&gen_args[3]),4,0);
    *(*(undefined4 * PTR32 *)&gen_args[4]) = *puVar1;
    F_00c472af((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),"chara/equipment/e%04d/vfx/eff/ve%04d.avfx",(uint)uVar3,
               (uint)(byte)HVar2);
    return (*(uint *)&gen_args[1]);
  }
  puVar1 = (undefined4 *)F_004ff310(&(*(uint *)&gen_args[3]),8,0);
  *(*(undefined4 * PTR32 *)&gen_args[4]) = *puVar1;
  F_00c472af((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),"vfx/equipment/eff/ve%04d.avfx",(uint)(byte)HVar2);
  return (*(uint *)&gen_args[1]);
}

/* ref: Client::Graphics::Scene::Human::vf88 */
uint F_0068e770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x7fc) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0068e790 */
uint F_0068e790(unsigned int gen_a0)
{
  GEN_ENTER(0x68e790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x3a) = 0;
  *(undefined4 *)((int)this + 0x3e) = 0;
  *(undefined2 *)((int)this + 0x42) = 0;
  *(undefined1 *)((int)this + 0x44) = 1;
  *(undefined4 *)this = 0x1010101;
  *(undefined4 *)((int)this + 4) = 0x1010101;
  *(undefined4 *)((int)this + 8) = 0x1010101;
  *(undefined4 *)((int)this + 0xc) = 0x1010101;
  *(undefined4 *)((int)this + 0x10) = 0x1010101;
  *(undefined4 *)((int)this + 0x14) = 0x1010101;
  *(undefined2 *)((int)this + 0x18) = 0x101;
  *(undefined2 *)((int)this + 0x1c) = 0x172;
  *(undefined2 *)((int)this + 0x20) = 0x172;
  *(undefined2 *)((int)this + 0x24) = 0x172;
  *(undefined2 *)((int)this + 0x28) = 0x172;
  *(undefined2 *)((int)this + 0x2c) = 0x172;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Demihuman::vf55 */
uint F_0068e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined * pDVar3;
  
  pDVar3 = param_1;
  if (param_1 < (undefined *)&REFG(undefined, 0x5)) {
    iVar2 = (int)((int)(uintptr_t)param_1) * 0xc;
    *(undefined4 *)(this + (int)((int)(uintptr_t)param_1) * 4 + 0x734) =
         *((undefined4 *)GEN_TOP((iVar2 + *(int *)(this + 0x790))));
    iVar1 = *(int *)(this + 0x790);
    pDVar3 = this + ((int)((int)(uintptr_t)param_1) * 3 + 0x3a5) * 2;
    *(undefined4 *)pDVar3 = *(undefined4 *)(iVar1 + 4 + iVar2);
    *(undefined2 *)(pDVar3 + 4) = *(undefined2 *)(iVar1 + 8 + iVar2);
  }
  return (uint)pDVar3;
}

/* ref: Client::Graphics::Scene::Demihuman::vf67 */
uint F_0068e860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    uVar1 = *(ushort *)(this + param_3 * 4 + 0x734);
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/obj/equipment/e%04d/model/d%04de%04d_%s.mdl",
             (uint)*(ushort *)(this + 0x748),(uint)uVar1,(uint)*(ushort *)(this + 0x748),(uint)uVar1
             ,(&REFG(undefined * PTR32, 0x1322de0))[param_3]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf75 */
uint F_0068e8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    uVar1 = *(ushort *)(this + param_3 * 4 + 0x734);
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/obj/equipment/e%04d/e%04d.imc",
             (uint)*(ushort *)(this + 0x748),(uint)uVar1,(uint)uVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf76 */
uint F_0068e910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort * puVar1;
  byte bVar2;
  
  puVar1 = ((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  bVar2 = (byte)puVar1[2];
  if (bVar2 == 0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/obj/equipment/e%04d/material/v%04d/%s",
             (uint)*(ushort *)(this + 0x748),(uint)*puVar1,(uint)bVar2,param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf77 */
uint F_0068e960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined1 DVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    DVar1 = this[param_3 * 6 + 0x74b];
  }
  else {
    DVar1 = *((undefined *)GEN_TOP((*(int *)(this + 0x790) + 5 + param_3 * 0xc)));
  }
  if (DVar1 == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/common/texture/decal_equip/-decal_%03d.tex",(uint)(byte)DVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf78 */
uint F_0068e9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 * puVar1;
  undefined1 DVar2;
  ushort uVar3;
  
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x790))) == 0) {
    uVar3 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[3]) * 4 + 0x734)));
    DVar2 = (*(undefined * PTR32 *)&gen_args[0])[(*(int *)&gen_args[3]) * 6 + 0x74e];
  }
  else {
    uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x790))) + (*(int *)&gen_args[3]) * 0xc)));
    DVar2 = *((undefined *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x790))) + 8 + (*(int *)&gen_args[3]) * 0xc)));
  }
  if ((DVar2 != (undefined1)0x0) && ((byte)DVar2 < 100)) {
    puVar1 = (undefined4 *)F_004ff310(&(*(int *)&gen_args[3]),4,0);
    *(*(undefined4 * PTR32 *)&gen_args[4]) = *puVar1;
    F_00c472af((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),"chara/demihuman/d%04d/obj/equipment/e%04d/vfx/eff/ve%04d.avfx",
               (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x748))),(uint)uVar3,(uint)(byte)DVar2);
    return (*(uint *)&gen_args[1]);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Demihuman::vf88 */
uint F_0068ea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ea40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x784) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0068ea60 */
uint F_0068ea60(unsigned int gen_a0)
{
  GEN_ENTER(0x68ea60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x78c);
  if ((uVar1 != 0) && (*(int *)((int)this + 0x788) != 0)) {
    if ((uVar1 & 1) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x788) + 0xc))))(*(int * PTR32 *)((int)this + 0x788),this);
      *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffe;
      return uVar1;
    }
    uVar1 = uVar1 >> 1;
    if ((uVar1 & 1) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x788) + 8))))(*(int * PTR32 *)((int)this + 0x788),this);
      *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffd;
    }
  }
  return uVar1;
}

/* ref: FUN_0068eab0 */
uint F_0068eab0(unsigned int gen_a0)
{
  GEN_ENTER(0x68eab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)this = 0;
  *(undefined4 *)((int)this + 2) = 0x100;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined2 *)((int)this + 0x16) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 8) = 1;
  return (uint)this;
}

/* ref: FUN_0068eaf0 */
byte F_0068eaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68eaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (char)param_1 != '\0' | *(byte *)((int)this + 2) & 0xfe;
  *(byte *)((int)this + 2) = bVar1;
  return bVar1;
}

/* ref: Client::Graphics::Scene::Weapon::vf88 */
uint F_0068eb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68eb20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x748) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0068eb40 */
uint F_0068eb40(unsigned int gen_a0)
{
  GEN_ENTER(0x68eb40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0x1001c;
  *(undefined2 *)(in_ecx + 1) = 0;
  *(undefined2 *)((int)in_ecx + 6) = 0x100;
  return (uint)in_ecx;
}

/* ref: FUN_0068eb60 */
byte F_0068eb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68eb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (char)param_1 != '\0' | *(byte *)((int)this + 6) & 0xfe;
  *(byte *)((int)this + 6) = bVar1;
  return bVar1;
}

/* ref: FUN_0068eb90 */
uint F_0068eb90(unsigned int gen_a0)
{
  GEN_ENTER(0x68eb90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2a20(param_1);
  if (puVar1 == (uint *)0x0) {
    return 0x10b0ddc;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: FUN_0068ebc0 */
uint F_0068ebc0(unsigned int gen_a0)
{
  GEN_ENTER(0x68ebc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2ae0(param_1);
  if (puVar1 == (uint *)0x0) {
    return 0x10b0de8;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: Client::Graphics::Scene::Terrain::vf12 */
uint F_0068ebf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  int * piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar1 = *(int *)(this + 0x78);
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1090998);
  ((float *)(gen_frame + 0x18))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x18))[0], REFG(float, 0x1090998));
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1097b10);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1097b10);
  ((float *)(gen_frame + 0x8))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[0], REFG(float, 0x1097b10));
  fVar5 = REFG(float, 0x1090998);
  fVar6 = REFG(float, 0x1097b10);
  fVar7 = REFG(float, 0x1097b10);
  fVar8 = REFG(float, 0x1097b10);
  fVar9 = REFG(float, 0x1090998);
  fVar10 = REFG(float, 0x1090998);
  if (iVar1 != 0) {
    piVar4 = *(int * PTR32 *)(this + 0x74);
    (*(int *)(gen_frame + 0x2c)) = iVar1;
    do {
      pfVar2 = *(float * PTR32 *)(*piVar4 + 0xf0);
      pfVar3 = &(*(float *)(gen_frame + 0x10));
      if (!((float10)(*(float *)(gen_frame + 0x10)) < (float10)*pfVar2)) {
        pfVar3 = pfVar2;
      }
      fVar10 = *pfVar3;
      fVar9 = pfVar2[1];
      pfVar3 = pfVar2 + 1;
      (*(float *)(gen_frame + 0x10)) = fVar10;
      if ((float10)(*(float *)(gen_frame + 0x14)) < (float10)fVar9) {
        pfVar3 = &(*(float *)(gen_frame + 0x14));
      }
      fVar9 = *pfVar3;
      fVar5 = pfVar2[2];
      pfVar3 = pfVar2 + 2;
      (*(float *)(gen_frame + 0x14)) = fVar9;
      if ((float10)((float *)(gen_frame + 0x18))[0] < (float10)fVar5) {
        pfVar3 = ((float *)(gen_frame + 0x18));
      }
      fVar8 = pfVar2[4];
      fVar5 = *pfVar3;
      ((float *)(gen_frame + 0x18))[0] = fVar5;
      pfVar3 = &(*(float *)(gen_frame + 0x0));
      if (!((float10)fVar8 < (float10)(*(float *)(gen_frame + 0x0)))) {
        pfVar3 = pfVar2 + 4;
      }
      fVar7 = pfVar2[5];
      fVar8 = *pfVar3;
      pfVar3 = pfVar2 + 5;
      (*(float *)(gen_frame + 0x0)) = fVar8;
      if ((float10)fVar7 < (float10)(*(float *)(gen_frame + 0x4))) {
        pfVar3 = &(*(float *)(gen_frame + 0x4));
      }
      fVar6 = pfVar2[6];
      fVar7 = *pfVar3;
      (*(float *)(gen_frame + 0x4)) = fVar7;
      pfVar3 = ((float *)(gen_frame + 0x8));
      if (!((float10)fVar6 < (float10)((float *)(gen_frame + 0x8))[0])) {
        pfVar3 = pfVar2 + 6;
      }
      fVar6 = *pfVar3;
      piVar4 = piVar4 + 1;
      iVar1 = (*(int *)(gen_frame + 0x2c)) + -1;
      (*(int *)(gen_frame + 0x2c)) = iVar1;
      ((float *)(gen_frame + 0x8))[0] = fVar6;
    } while (iVar1 != 0);
  }
  *param_1 = fVar10;
  param_1[1] = fVar9;
  param_1[2] = fVar5;
  param_1[4] = fVar8;
  param_1[5] = fVar7;
  param_1[6] = fVar6;
  return (uint)param_1;
}

/* ref: FUN_0068ed40 */
byte F_0068ed40(unsigned int gen_a0)
{
  GEN_ENTER(0x68ed40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12050];
  gen_size32 _Size;
  int iVar1;
  ushort * puVar2;
  uint uVar3;
  int iVar4;
  short * psVar5;
  undefined * pvVar6;
  int * piVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x1203c)) = 0x68ed60;
  iVar1 = *(int *)((int)this + 0x78);
  (*(undefined * PTR32 *)(gen_frame + 0x12028)) = REFG(void * PTR32, 0x1370c1c);
  if (iVar1 != 0) {
    uVar3 = F_005003e0(*(undefined * PTR32 *)((int)this + 0x70));
    (*(uint *)(gen_frame + 0x12030)) = uVar3;
    (*(uint *)(gen_frame + 0x1203c)) = 0;
    uVar3 = F_00500500(*(undefined * PTR32 *)((int)this + 0x70));
    if (iVar1 != 0) {
      piVar7 = *(int * PTR32 *)((int)this + 0x74);
      iVar4 = uVar3 - (int)piVar7;
      (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
      (*(int *)(gen_frame + 0x1202c)) = iVar4;
      (*(int *)(gen_frame + 0x12034)) = iVar1;
      do {
        iVar1 = *piVar7;
        uVar8 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar1 + 0xa8) + 4))) + 0x1e + *(int *)(iVar1 + 0xa8)
                               )));
        uVar3 = 0;
        if (uVar8 != 0) {
          psVar5 = ((short *)GEN_TOP((*(int *)(iVar1 + 0xb8) + 0x1a)));
          do {
            if (*psVar5 != 0) {
              ((int *)(gen_frame + 0x11000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar1;
              ((int *)(gen_frame + 0x10000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar4 + (int)piVar7;
              (*(uint *)(gen_frame + 0x1203c)) = (*(uint *)(gen_frame + 0x1203c)) + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            psVar5 = psVar5 + 0x1e;
          } while (uVar3 < uVar8);
        }
        piVar7 = piVar7 + 1;
        (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
        iVar1 = (*(int *)(gen_frame + 0x12034)) + -1;
        (*(int *)(gen_frame + 0x12034)) = iVar1;
      } while (iVar1 != 0);
    }
    *(uint *)((int)this + 0x84) = (*(uint *)(gen_frame + 0x1203c));
    if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
      _Size = (*(uint *)(gen_frame + 0x1203c)) * 4;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),_Size,0x10)));
      *(undefined * PTR32 *)((int)this + 0x90) = pvVar6;
      if (pvVar6 != (undefined *)0x0) {
        F_00c48350(pvVar6,0,_Size);
        pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                   (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),_Size,0x10)));
        *(undefined * PTR32 *)((int)this + 0x9c) = pvVar6;
        if (pvVar6 != (undefined *)0x0) {
          F_00c48350(pvVar6,0,_Size);
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
            do {
              uVar8 = F_00637b80(((int *)(gen_frame + 0x11000))[(int)(uVar3)]);
              *((uint *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4))) = uVar8;
              piVar7 = ((int *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4)));
              if (*piVar7 == 0) goto LAB_0068ee30;
              puVar2 = (ushort *)((int *)(gen_frame + 0x10000))[(int)(uVar3)];
              *(undefined2 *)(*piVar7 + 8) = (undefined2)(*(uint *)(gen_frame + 0x12030));
              F_00625340(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4))),(uint)*puVar2,
                           (uint)puVar2[1]);
              uVar3 = uVar3 + 1;
            } while (uVar3 < (*(uint *)(gen_frame + 0x1203c)));
          }
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) == 0) {
            return 1;
          }
          while( true ) {
            uVar8 = F_00b14060((*(undefined * PTR32 *)(gen_frame + 0x12028)),9);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))) = uVar8;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))) == 0) break;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))) + 4))) =
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4)));
            F_006253e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4))),((undefined1 *)(gen_frame + 0x12000)));
            F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))),((undefined1 *)(gen_frame + 0x12000)));
            uVar3 = uVar3 + 1;
            if ((*(uint *)(gen_frame + 0x1203c)) <= uVar3) {
              return 1;
            }
          }
        }
      }
LAB_0068ee30: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_0068ef60 */
uint F_0068ef60(unsigned int gen_a0)
{
  GEN_ENTER(0x68ef60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar7 = 0;
  iVar6 = 0;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x70) + 0x10))))((int)this + 0x70);
  uVar2 = 0;
  local_8 = 0;
  if (1 < *(int *)((int)this + 0x220)) {
    pcVar3 = ((char *)GEN_TOP((*(int *)((int)this + 0x224) + 0x105)));
    iVar5 = (*(int *)((int)this + 0x220) - 2U >> 1) + 1;
    uVar2 = iVar5 * 2;
    do {
      iVar7 = iVar7 + (uint)(pcVar3[-0xa0] == '\x03');
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x140;
      iVar6 = iVar6 + (uint)(cVar1 == '\x03');
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (uVar2 < *(uint *)((int)this + 0x220)) {
    local_8 = (uint)(*((char *)GEN_TOP((*(int *)((int)this + 0x224) + 0x65 + uVar2 * 0xa0))) == '\x03');
  }
  uVar2 = 0;
  local_10 = 0;
  local_c = 0;
  if (1 < *(int *)((int)this + 0x228)) {
    pcVar3 = ((char *)GEN_TOP((*(int *)((int)this + 0x22c) + 0xe5)));
    iVar5 = (*(int *)((int)this + 0x228) - 2U >> 1) + 1;
    uVar2 = iVar5 * 2;
    do {
      local_10 = local_10 + (uint)(pcVar3[-0x80] == '\x03');
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x100;
      local_c = local_c + (uint)(cVar1 == '\x03');
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = 0;
  if (uVar2 < *(uint *)((int)this + 0x228)) {
    uVar4 = (uint)(*((char *)GEN_TOP((*(int *)((int)this + 0x22c) + 0x65 + uVar2 * 0x80))) == '\x03');
  }
  if (((*(int *)((int)this + 0x220) == local_8 + iVar7 + iVar6) &&
      (*(uint *)((int)this + 0x228) == local_c + local_10 + uVar4)) &&
     (*(char *)((int)this + 0xd5) == '\x03')) {
    *(undefined1 *)((int)this + 0x60) = 2;
  }
  return uVar4;
}

/* ref: FUN_0068f090 */
uint F_0068f090(unsigned int gen_a0)
{
  GEN_ENTER(0x68f090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x70) + 0x28))))((int)this + 0x70);
  uVar3 = 0;
  if (*(int *)((int)this + 0x220) != 0) {
    iVar2 = 0;
    do {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x224) + iVar2))) + 0x18))))
                        (*(int *)((int)this + 0x224) + iVar2);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0xa0;
    } while (uVar3 < *(uint *)((int)this + 0x220));
  }
  *(undefined1 *)((int)this + 0x60) = 3;
  return uVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf11 */
uint F_0068f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_2;
  fVar4 = *(float *)(param_1 + 0x50);
  fVar5 = *(float *)(param_1 + 0x54);
  iVar6 = *((int *)GEN_TOP((*(int *)(param_1 + 0x70) + 0xa8)));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  iVar7 = *(int *)(iVar6 + 4);
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  fVar3 = *(float *)(iVar7 + 8 + iVar6);
  *(float *)(param_2 + 0xc) = fVar3;
  param_2 = (uint)gen_fl2bits(fVar4);
  if ((float10)fVar4 < (float10)fVar5) {
    param_2 = (uint)gen_fl2bits(fVar5);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)*(float *)(param_1 + 0x58)) {
    param_2 = (uint)gen_fl2bits(*(float *)(param_1 + 0x58));
  }
  *(undefined4 *)uVar8 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(uVar8 + 4) = uVar1;
  *(undefined4 *)(uVar8 + 8) = uVar2;
  *(float *)(uVar8 + 0xc) = (float)((float10)fVar3 * ((float10)GEN_TOD(gen_bits2f(param_2))));
  return uVar8;
}

/* ref: Client::Graphics::Scene::BGObject::vf12 */
uint F_0068f1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,((undefined1 *)(gen_frame + 0x0)));
  F_0068c610(param_1,((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return param_1;
}

/* ref: FUN_0068f210 */
uint F_0068f210(unsigned int gen_a0)
{
  GEN_ENTER(0x68f210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa8)));
  uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x20 + iVar2)));
  uVar3 = (uint)uVar1;
  if (uVar1 != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),uVar3 << 6,0x40);
    *(uint *)((int)this + 0x7c) = uVar3;
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::BGObject::vf16 */
uint F_0068f250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68f250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)));
  uVar1 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x20 + iVar2)));
  uVar4 = 0;
  if (uVar1 != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x70) + 0xb4)));
    do {
      if (param_2 == *piVar3) {
        puVar5 = ((undefined4 *)GEN_TOP((uVar4 * 0x40 + *(int *)(this + 0x7c))));
        puVar6 = param_1;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        return (uint)param_1;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 8;
    } while (uVar4 < uVar1);
  }
  puVar5 = &REFG(float, 0x1302d00);
  puVar6 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::BGObject::vf17 */
uint F_0068f2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)));
  uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 4) + 0x20 + iVar1)));
  uVar2 = 0;
  if (uVar3 != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x70) + 0xb4)));
    do {
      if (param_1 == *piVar4) {
        return uVar2 * 0x40 + 0x30 + *(int *)(this + 0x7c);
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar2 < uVar3);
  }
  return (uint)(this + 0x30);
}

/* ref: Client::Graphics::Scene::BGObject::vf20 */
byte F_0068f300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)(this + 0x7c) == 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)));
  uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 4) + 0x20 + iVar1)));
  uVar2 = 0;
  if (uVar3 != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x70) + 0xb4)));
    do {
      if (param_1 == *piVar4) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf8 */
unsigned int F_0068f350(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68f350u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  if (*(char *)(param_1 + 0x65) == '\x03') {
    F_004ffee0(*(undefined4 *)(param_1 + 0x70),param_2,param_3);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf9 */
unsigned int F_0068f370(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68f370u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  if (*(char *)(param_1 + 0x65) == '\x03') {
    F_004fff30(*(undefined4 *)(param_1 + 0x70),param_2,param_3);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf15 */
byte F_0068f390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  
  if (this[0x65] != (undefined1)0x3) {
    return 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  bVar1 = F_006601a0(param_1,(uint)((undefined1 *)(gen_frame + 0x0)));
  return bVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf14 */
byte F_0068f3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68f3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  
  if (this[0x65] != (undefined1)0x3) {
    return 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  bVar1 = F_006602f0(param_1,(uint)((undefined1 *)(gen_frame + 0x0)),param_2);
  return bVar1;
}

/* ref: FUN_0068f430 */
uint F_0068f430(unsigned int gen_a0)
{
  GEN_ENTER(0x68f430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short local_c;
  
  uVar1 = (uint)TRUNC((double)*(float *)(REFG(int, 0x137104c) + 0x1198) * *(double *)&REFG(undefined, 0x10b2b28));
  local_c = (short)uVar1;
  *(short *)((int)this + 0x82) = *(short *)((int)this + 0x82) + local_c;
  *(short *)((int)this + 0x84) = *(short *)((int)this + 0x84) + local_c;
  return uVar1 & 0xffff;
}

/* ref: FUN_0068f480 */
uint F_0068f480(unsigned int gen_a0)
{
  GEN_ENTER(0x68f480u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0068f4a0 */
uint F_0068f4a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68f4a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined * this;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 0x67);
  this = *(undefined * PTR32 *)(param_1 + 0x70);
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),*(char *)(param_1 + 0x66));
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),cVar1);
  if (*(char *)(param_1 + 0x66) == -1) {
    F_00502250(this,param_2);
  }
  else {
    F_00502310(this,(*(undefined4 *)(gen_frame + 0x8)));
  }
  if (cVar1 != -1) {
    uVar2 = F_00504650(this,(*(undefined4 *)(gen_frame + 0x4)));
    return uVar2;
  }
  uVar2 = F_00504540(this,param_2);
  return uVar2;
}

/* ref: FUN_0068f510 */
byte F_0068f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68f510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746578;
  uVar1 = F_00513d20(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2,0,0,0);
  if (uVar1 == 0) {
    *(undefined1 *)((int)this + 0x65) = 4;
    return 0;
  }
  *(uint *)((int)this + 0x74) = uVar1;
  *(undefined1 *)((int)this + 0x65) = 2;
  return 1;
}

/* ref: FUN_0068f560 */
byte F_0068f560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68f560u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  F_004ff310(&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  (*(undefined4 *)&gen_args[2]) = 0x746578;
  uVar1 = F_00513d20(&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),0,0,0);
  if (uVar1 == 0) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 4;
    return 0;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 2;
  return 1;
}

/* ref: Client::Graphics::Scene::Light::vf11 */
unsigned int F_0068f5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar1 = *(int *)(this + 0x70);
  iVar2 = *(int *)(iVar1 + 0xc);
  puVar3 = *(undefined4 * PTR32 *)(iVar1 + 0x10);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  if (iVar2 != 5) {
    param_1[3] = *(undefined4 *)(iVar1 + 0x7c);
    return 0;
  }
  param_1[3] = (undefined4)
               gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(puVar3[8]))) * (float10)REFG(double, 0x1088108) +
                                  (float10)*(float *)(iVar1 + 0x7c)))));
  return 0;
}

/* ref: Client::Graphics::Scene::Light::vf6 */
uint F_0068f610(unsigned int gen_a0)
{
  GEN_ENTER(0x68f610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x60);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00b81ef0(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_0068f650 */
uint F_0068f650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x68f650u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x70) + 0x14))))
                    (*(int * PTR32 *)(param_1 + 0x70),param_3,(undefined4)gen_fl2bits(param_4),0xff,0,0);
  return uVar1;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf11 */
uint F_0068f6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(float, 0x1322864);
  *param_2 = *(undefined4 *)(in_ecx + 0x30);
  uVar1 = *(undefined4 *)(in_ecx + 0x34);
  param_2[3] = uVar2;
  param_2[1] = uVar1;
  param_2[2] = *(undefined4 *)(in_ecx + 0x38);
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf12 */
unsigned int F_0068f6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f6e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar5 = (float10)REFG(float, 0x1302c60);
  fVar6 = (float10)REFG(float, 0x1322864);
  fVar7 = (float10)REFG(float, 0x1302c64);
  fVar4 = (float10)REFG(float, 0x1302c68);
  fVar1 = *(float *)(in_ecx + 0x30);
  fVar2 = *(float *)(in_ecx + 0x34);
  fVar3 = *(float *)(in_ecx + 0x38);
  *param_2 = ((float)GEN_TOF(((float10)fVar1 - (float10)(float)(fVar6 * fVar5))));
  param_2[1] = ((float)GEN_TOF(((float10)fVar2 - (float10)(float)(fVar7 * fVar6))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar3 - (float10)(float)(fVar6 * fVar4))));
  param_2[4] = ((float)GEN_TOF(((float10)(float)(fVar6 * fVar5) + (float10)fVar1)));
  param_2[5] = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar6) + (float10)fVar2)));
  param_2[6] = ((float)GEN_TOF(((float10)(float)(fVar6 * fVar4) + (float10)fVar3)));
  return 0;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf13 */
uint F_0068f7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float * pfVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  
  fVar5 = (float10)REFG(float, 0x1322864);
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = this;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar5 * (float10)REFG(float, 0x1302c60));
  puVar3 = &REFG(float, 0x1302d00);
  puVar4 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (*(float *)(gen_frame + 0x54)) = (float)((float10)REFG(float, 0x1302c64) * fVar5);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar5 * (float10)REFG(float, 0x1302c68));
  (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)REFG(float, 0x1302c64) * fVar5);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar5 * (float10)REFG(float, 0x1302c68));
  F_0065f020(((undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x34) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x38) + (float10)(*(float *)(gen_frame + 0x38)))));
  pfVar1 = (float *)F_005fe770(((undefined4 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x40)));
  *(float *)(param_1 + 0x40) = (float)((float10)*pfVar1 * (float10)REFG(float, 0x1302c60));
  *(float *)(param_1 + 0x44) = (float)((float10)pfVar1[1] * (float10)REFG(float, 0x1302c64));
  *(float *)(param_1 + 0x48) = (float)((float10)pfVar1[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)((undefined4 *)(gen_frame + 0x0)));
  F_005fe2e0(param_1 + 0x10,(uint)((undefined1 *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x20,(uint)((undefined1 *)(gen_frame + 0x20)));
  *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x30));
  *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x34));
  *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x38));
  return param_1;
}

/* ref: FUN_0068f8f0 */
unsigned int F_0068f8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68f8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  
  pfVar3 = (float *)((int)this + 0x54);
  if ((float10)*(float *)((int)this + 0x54) < (float10)*(float *)((int)this + 0x50)) {
    pfVar3 = (float *)((int)this + 0x50);
  }
  pfVar2 = (float *)((int)this + 0x58);
  if ((float10)*(float *)((int)this + 0x58) < (float10)*pfVar3) {
    pfVar2 = pfVar3;
  }
  fVar1 = (float)((float10)*pfVar2 + (float10)*pfVar2);
  if ((float10)fVar1 < (float10)*(float *)((int)this + 0x84)) {
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x84);
    return 0;
  }
  *(float *)((int)this + 0x84) = fVar1;
  return 0;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf11 */
uint F_0068f950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 EVar1;
  undefined * pEVar2;
  undefined * pEVar3;
  float fVar4;
  
  fVar4 = 0.0;
  EVar1 = this[0x94];
  pEVar2 = this + 0x50;
  if (EVar1 == (undefined1)0x1) {
    pEVar3 = this + 0x54;
    if ((float10)*(float *)(this + 0x54) < (float10)*(float *)pEVar2) {
      pEVar3 = pEVar2;
    }
    pEVar2 = this + 0x58;
    if ((float10)*(float *)(this + 0x58) < (float10)*(float *)pEVar3) {
      pEVar2 = pEVar3;
    }
    fVar4 = *(float *)pEVar2;
  }
  else if (EVar1 == (undefined1)0x2) {
    fVar4 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)*(float *)(this + 0x54) *
                                          (float10)*(float *)(this + 0x54) +
                                         (float10)*(float *)((int)(uintptr_t)pEVar2) * (float10)*(float *)pEVar2) +
                                        (float10)*(float *)(this + 0x58) *
                                        (float10)*(float *)(this + 0x58)))))));
  }
  else if (EVar1 == (undefined1)0x3) {
    if (!((float10)*(float *)(this + 0x58) < (float10)*(float *)pEVar2)) {
      pEVar2 = this + 0x58;
    }
    fVar4 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)(uintptr_t)pEVar2) * (float10)*(float *)pEVar2 +
                                        (float10)*(float *)(this + 0x54) *
                                        (float10)*(float *)(this + 0x54)))))));
  }
  *param_1 = *(undefined4 *)(this + 0x30);
  param_1[3] = (undefined4)gen_fl2bits(fVar4);
  param_1[1] = *(undefined4 *)(this + 0x34);
  param_1[2] = *(undefined4 *)(this + 0x38);
  return (uint)param_1;
}

/* ref: FUN_0068fa50 */
uint F_0068fa50(unsigned int gen_a0)
{
  GEN_ENTER(0x68fa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x580) != 0) {
    F_00406810(*(int *)((int)this + 0x580));
    *(undefined4 *)((int)this + 0x580) = 0;
  }
  *(undefined4 *)((int)this + 0x584) = 0;
  piVar2 = (int *)((int)this + 0x4e0);
  iVar1 = 8;
  do {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    piVar2 = piVar2 + -0x28;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  ((undefined4 *)(gen_frame + 0x0))[2] = 0;
  ((undefined4 *)(gen_frame + 0x0))[3] = 0;
  ((undefined4 *)(gen_frame + 0x0))[4] = 0;
  ((undefined4 *)(gen_frame + 0x0))[5] = 0;
  ((undefined4 *)(gen_frame + 0x0))[6] = 0;
  puVar3 = ((undefined4 *)(gen_frame + 0x0));
  puVar4 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return 0;
}

/* ref: FUN_0068fad0 */
byte F_0068fad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar4 = *(uint *)((int)this + 0x584);
  uVar3 = 0;
  uVar6 = uVar4;
  if (uVar4 != 0) {
    piVar5 = *(int * PTR32 *)((int)this + 0x580);
    do {
      uVar6 = uVar3;
      if (*piVar5 == param_1) break;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 1;
      uVar6 = uVar4;
    } while (uVar3 < uVar4);
  }
  if (uVar4 <= uVar6) {
    return 0;
  }
  *(uint *)((int)this + 0x584) = uVar4 - 1;
  uVar3 = uVar6;
  if (uVar6 < uVar4 - 1) {
    do {
      uVar4 = uVar3 + 1;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + uVar3 * 4))) =
           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + 4 + uVar3 * 4)));
      uVar3 = uVar4;
    } while (uVar4 < *(uint *)((int)this + 0x584));
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + *(int *)((int)this + 0x584) * 4))) = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    uVar4 = uVar6 >> 5;
    uVar6 = -1 << ((byte)uVar6 & 0x1f);
    do {
      iVar2 = *(int *)((int)this + 0x10);
      piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x590) + local_8 * 4)));
      puVar1 = (uint *)(*piVar5 + uVar4 * 4);
      uVar3 = *puVar1;
      *puVar1 = ~uVar6 & uVar3 | uVar3 >> 1 & uVar6;
      uVar3 = uVar4;
      while (uVar3 = uVar3 + 1, uVar3 <= iVar2 - 1U >> 5) {
        puVar1 = (uint *)(*piVar5 + uVar3 * 4 + -4);
        *puVar1 = *puVar1 | *(int *)(*piVar5 + uVar3 * 4) << 0x1f;
        puVar1 = (uint *)(*piVar5 + uVar3 * 4);
        *puVar1 = *puVar1 >> 1;
      }
      iVar2 = *(int *)((int)this + 0x10);
      piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x594) + local_8 * 4)));
      puVar1 = (uint *)(*piVar5 + uVar4 * 4);
      uVar3 = *puVar1;
      *puVar1 = ~uVar6 & uVar3 | uVar3 >> 1 & uVar6;
      uVar3 = uVar4;
      while (uVar3 = uVar3 + 1, uVar3 <= iVar2 - 1U >> 5) {
        puVar1 = (uint *)(*piVar5 + uVar3 * 4 + -4);
        *puVar1 = *puVar1 | *(int *)(*piVar5 + uVar3 * 4) << 0x1f;
        puVar1 = (uint *)(*piVar5 + uVar3 * 4);
        *puVar1 = *puVar1 >> 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)((int)this + 0x28));
  }
  return 1;
}

/* ref: FUN_0068fc50 */
unsigned int F_0068fc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  int local_8;
  
  uVar2 = *(int *)((int)this + 0x584) + 0x1fU >> 5;
  local_c = 0;
  if (uVar2 != 0) {
    local_8 = 0;
    do {
      uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x59c) + local_c * 4)));
      if (uVar1 != 0) {
        uVar3 = 0;
        uVar4 = 1;
        do {
          if ((uVar1 & uVar4) != 0) {
            ((code *)*(gen_code32 *)(*param_1 + 4))
                      (param_1,local_8 + uVar3,
                       *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + (local_8 + uVar3) * 4))));
          }
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
        } while (uVar3 < 0x20);
      }
      local_8 = local_8 + 0x20;
      local_c = local_c + 1;
    } while (local_c < uVar2);
  }
  return 0;
}

/* ref: FUN_0068fce0 */
byte F_0068fce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined * this_00;
  uint in_ecx;
  
  if ((*param_1 == 'b') && (param_1[1] == 'g')) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)((int)this + 0x1e4) =
       *(byte *)((int)this + 0x1e4) ^ (*(byte *)((int)this + 0x1e4) ^ bVar1) & 1;
  this_00 = (undefined *)F_00990ad0(param_1);
  in_ecx = F_009cfa30(this_00,(int)this + 0x70);
  *(uint *)((int)this + 0x234) = in_ecx;
  F_00982b60(in_ecx,(int)this + 0x1e0);
  F_00982b20(this_00);
  *(undefined1 *)((int)this + 0x65) = 2;
  return 1;
}

/* ref: FUN_0068fd50 */
uint F_0068fd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0068b800((undefined *)((int)this + -0x1e0));
  return uVar1;
}

/* ref: FUN_0068fd60 */
unsigned int F_0068fd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fd60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + -0x17b) = 0;
  if (*(int *)(in_ecx + 0x54) != 0) {
    F_00982b60(*(int *)(in_ecx + 0x54),0);
    *(undefined4 *)(in_ecx + 0x54) = 0;
  }
  return 0;
}

/* ref: FUN_0068fd90 */
uint F_0068fd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x68fd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  code * pcVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  bVar2 = F_00990c00(*(undefined4 *)((int)this + 0x234));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    uVar3 = F_00982ce0(*(undefined4 *)((int)this + 0x234));
    if ((char)uVar3 != '\0') {
      pcVar1 = *(gen_code32 *)(*(int *)this + 0x28);
      *(undefined1 *)((int)this + 0x65) = 3;
      uVar3 = (*pcVar1)(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar3;
    }
  }
  else {
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::VfxObject::vf6 */
uint F_0068fdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x68fdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x60);
  if (((byte)this[0x1e4] & 1) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00b81ef0(this_00,uVar1);
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10abc60);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x10abc60);
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x10abc60);
  (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x10abc38);
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x10abc38);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abc38);
  uVar1 = F_00b81ef0(this_00,&(*(undefined4 *)(gen_frame + 0x20)));
  return uVar1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf15 */
uint F_0068fe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fe60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  uint in_EAX = 0;
  uint uVar4;
  
  if (*(char *)(in_ecx + 0x65) != '\x03') {
    return in_EAX & 0xffffff00;
  }
  fVar2 = *(float *)(in_ecx + 0x34);
  uVar1 = *(undefined4 *)(in_ecx + 0x38);
  fVar3 = *(float *)(in_ecx + 0x23c);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(in_ecx + 0x30);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar3 + (float10)fVar2);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(in_ecx + 0x238);
  uVar4 = F_005ff5c0(param_2,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf14 */
byte F_0068fee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68fee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  
  if (this[0x65] != (undefined1)0x3) {
    return 0;
  }
  fVar2 = *(float *)(this + 0x34);
  uVar1 = *(undefined4 *)(this + 0x38);
  fVar3 = *(float *)(this + 0x23c);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x30);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar3 + (float10)fVar2);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + 0x238);
  bVar4 = F_006aeff0(param_1,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
  return bVar4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf18 */
uint F_0068ff60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68ff60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  fVar1 = *(float *)(uVar5 + 0x34);
  fVar2 = *(float *)(this + 0x34);
  fVar3 = *(float *)(uVar5 + 0x38);
  fVar4 = *(float *)(this + 0x38);
  *param_1 = ((float)GEN_TOF(((float10)*(float *)(uVar5 + 0x30) - (float10)*(float *)(this + 0x30))));
  param_1[1] = (float)((float10)fVar1 - (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 - (float10)fVar4);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_0068ffe0 */
uint F_0068ffe0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x68ffe0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint uVar1;
  
  *(float *)((int)param_1 + 0x218) = param_3;
  *(float *)((int)param_1 + 0x21c) = param_2;
  *(float *)((int)param_1 + 0x220) = param_4;
  *(float *)((int)param_1 + 0x224) = param_5;
  uVar1 = F_0068b800(param_1);
  return uVar1;
}

/* ref: FUN_00690020 */
uint F_00690020(unsigned int gen_a0)
{
  GEN_ENTER(0x690020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(in_ecx + 0x234) != 0) {
    bVar1 = F_00990c00(*(int *)(in_ecx + 0x234));
    if (bVar1 == 0) {
      uVar2 = F_00982ce0(*(undefined4 *)(in_ecx + 0x234));
      if ((char)uVar2 != '\0') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x234) + 0x40))) + 100)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00690057 */
unsigned int F_00690057(void)
{
  GEN_ENTER(0x690057u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00690078 */
uint F_00690078(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x690078u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ebp = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  undefined * pvVar8;
  
  iVar2 = *(int *)(in_ecx + 0xe090);
  *(int *)(in_ebp + -4) = in_ecx;
  if (iVar2 != 0) {
    F_0050c620(iVar2,0,0);
    *(undefined4 *)(in_ecx + 0xe090) = 0;
  }
  iVar2 = *(int *)(in_ecx + 0xe0a0);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    iVar5 = iVar2 + -4;
    iVar6 = iVar3 + -1;
    *(int *)(in_ebp + -8) = iVar5;
    pvVar8 = (undefined *)(iVar2 + iVar3 * 0xc);
    if (-1 < iVar6) {
      do {
        pvVar8 = (undefined *)((int)pvVar8 + -0xc);
        F_0068b9a0(pvVar8);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      iVar5 = *(int *)(in_ebp + -8);
    }
    F_00406b30(iVar5);
    in_ecx = *(int *)(in_ebp + -4);
    *(undefined4 *)(in_ecx + 0xe0a0) = 0;
  }
  *(undefined1 *)(in_ecx + 0xe09d) = 0;
  piVar7 = (int *)(in_ecx + 0xe094);
  *(undefined4 *)(in_ebp + -4) = 2;
  do {
    if (*piVar7 != 0) {
      F_0050c620(*piVar7,0,0);
      *piVar7 = 0;
    }
    piVar7 = piVar7 + 1;
    piVar1 = (int *)(in_ebp + -4);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  pvVar8 = (undefined *)(in_ecx + 0x50);
  *(undefined4 *)(in_ebp + -4) = 0x10;
  do {
    F_0064ad80(pvVar8);
    pvVar8 = (undefined *)((int)pvVar8 + 0x34);
    piVar7 = (int *)(in_ebp + -4);
    *piVar7 = *piVar7 + -1;
  } while (*piVar7 != 0);
  pvVar8 = (undefined *)(in_ecx + 0x390);
  *(undefined4 *)(in_ebp + -4) = 0x40;
  do {
    F_0064ad80(pvVar8);
    pvVar8 = (undefined *)((int)pvVar8 + 0x34);
    piVar7 = (int *)(in_ebp + -4);
    *piVar7 = *piVar7 + -1;
  } while (*piVar7 != 0);
  pvVar8 = (undefined *)(in_ecx + 0x1090);
  *(undefined4 *)(in_ebp + -4) = 0x400;
  do {
    F_0064ad80(pvVar8);
    pvVar8 = (undefined *)((int)pvVar8 + 0x34);
    piVar7 = (int *)(in_ebp + -4);
    *piVar7 = *piVar7 + -1;
    uVar4 = REFG(float, 0x1090998);
  } while (*piVar7 != 0);
  *(undefined4 *)(in_ecx + 0x10) = REFG(float, 0x1090998);
  *(undefined4 *)(in_ecx + 0x14) = uVar4;
  *(undefined4 *)(in_ecx + 0x18) = uVar4;
  *(undefined1 *)(in_ecx + 0xe0a8) = 0;
  *(undefined4 *)(in_ecx + 0xe0a4) = 0;
  return 0;
}

/* ref: FUN_006901b0 */
uint F_006901b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6901b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xe094 + param_2 * 4) + 0xfc)));
}

/* ref: FUN_006901d0 */
float10 F_006901d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6901d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 4))) {
  case 0: ;
  case 1: ;
    if (param_2 == 0) {
      return (float10)REFG(float, 0x10b2b38);
    }
    if (param_2 == 1) {
LAB_00690226: ;
      return (float10)*(float *)&REFG(undefined, 0x10b2b40);
    }
    if (param_2 == 2) goto LAB_0069023e;
    break;
  case 2: ;
    if (param_2 == 0) goto LAB_00690226;
    if (param_2 == 1) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b44);
    }
    if (param_2 == 2) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b48);
    }
    break;
  case 3: ;
    if (param_2 == 0) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b4c);
    }
    if (param_2 == 1) {
LAB_0069023e: ;
      return (float10)*(float *)&REFG(undefined, 0x10b2b3c);
    }
    if (param_2 == 2) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b50);
    }
  }
  return (float10)0;
}

/* ref: FUN_00690270 */
uint F_00690270(unsigned int gen_a0)
{
  GEN_ENTER(0x690270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00690070();
  *(undefined1 *)(in_ecx + 0x1c190) = 0;
  return uVar1;
}

/* ref: FUN_00690290 */
uint F_00690290(unsigned int gen_a0)
{
  GEN_ENTER(0x690290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  bool bVar1;
  uint uVar2;
  short * psVar3;
  uint uVar4;
  
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x5c) = 0;
  this_00 = *(undefined * PTR32 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  bVar1 = false;
  psVar3 = (short *)((int)this + 0x40);
  uVar4 = 0;
  do {
    uVar2 = F_00623160(this_00,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1322e24) + uVar4))));
    *psVar3 = (short)uVar2;
    if ((short)uVar2 != -1) {
      bVar1 = true;
    }
    uVar4 = uVar4 + 4;
    psVar3 = psVar3 + 1;
  } while (uVar4 < 0xc);
  if (bVar1) {
    *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) | 8;
  }
  return uVar2;
}

/* ref: FUN_00690310 */
byte F_00690310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x690310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    bVar1 = F_0061f450(this,0);
    if (bVar1 != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1 << 6,0x10);
      *(uint *)((int)this + 0x4c) = uVar2;
      if (uVar2 != 0) goto LAB_0069034f;
    }
    return 0;
  }
LAB_0069034f: ;
  *(int *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x38) = 0;
  return 1;
}

/* ref: FUN_00690370 */
uint F_00690370(unsigned int gen_a0)
{
  GEN_ENTER(0x690370u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b2b58));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0xffffffff;
  in_ecx[6] = 0;
  in_ecx[10] = uVar1;
  in_ecx[0xb] = uVar1;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[0xc] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_006903c0 */
uint F_006903c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6903c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)((int)this + 8);
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 200))(piVar4);
  if (uVar3 == 4) {
    piVar4 = (int *)piVar4[5];
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 200))(piVar4);
  iVar1 = REFG(int, 0x137129c);
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4);
      bVar2 = F_00b51e00(*(undefined * PTR32 *)(iVar1 + 0x10),(uVar3 & 0xffff) + 10000);
      if (bVar2 != 0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4);
        F_00c472af(param_1,param_2,"chara/xls/attachOffset/d%04d.atch",uVar3 & 0xffff);
        return param_1;
      }
    }
    else if (uVar3 == 3) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4);
      bVar2 = F_00b51e00(*(undefined * PTR32 *)(iVar1 + 0x10),uVar3 & 0xffff);
      if (bVar2 != 0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4);
        F_00c472af(param_1,param_2,"chara/xls/attachOffset/m%04d.atch",uVar3 & 0xffff);
        return param_1;
      }
    }
    return 0;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4);
  F_00c472af(param_1,param_2,"chara/xls/attachOffset/c%04d.atch",uVar3 & 0xffff);
  return param_1;
}

/* ref: FUN_006904e0 */
byte F_006904e0(void)
{
  GEN_ENTER(0x6904e0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00690510 */
unsigned int F_00690510(unsigned int gen_a0)
{
  GEN_ENTER(0x690510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x40) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x44) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x48) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x4c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x54) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x58) = REFG(float, 0x1302e18);
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined * PTR32 *)((int)this + 0x18) = this;
  *(undefined * PTR32 *)((int)this + 0x1c) = this;
  return 0;
}

/* ref: Client::Graphics::Scene::Object::vf1 */
uint F_006905b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6905b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x14);
  if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x20) == this)) {
    *(uint *)(iVar1 + 0x20) =
         -(uint)(*(undefined * PTR32 *)(this + 0x1c) != this) & (uint)*(undefined * PTR32 *)(this + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x18))) = *(undefined4 *)(this + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x1c))) = *(undefined4 *)(this + 0x1c);
  iVar1 = *(int *)(this + 0x28);
  uVar2 = *(uint *)(this + 0x24) & 3;
  uVar3 = *(uint *)(this + 0x24) & 0xfffffffc;
  *(undefined * PTR32 *)(this + 0x18) = this;
  *(undefined * PTR32 *)(this + 0x1c) = this;
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = 0;
  if (uVar3 != 0) {
    *(int *)(uVar3 + 0x28) = iVar1;
  }
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x24) & 3 | uVar3;
    *(uint *)(iVar1 + 0x24) = uVar2;
  }
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
  return uVar2;
}

/* ref: FUN_00690620 */
unsigned int F_00690620(unsigned int gen_a0)
{
  GEN_ENTER(0x690620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x1371294);
  if ((*(byte *)((int)this + 0x24) & 1) != 0) {
    iVar1 = *(int *)(REFG(undefined4, 0x1371294) + 0x28);
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 3 | REFG(undefined4, 0x1371294);
    *(int *)((int)this + 0x28) = iVar1;
    *(undefined * PTR32 *)(uVar2 + 0x28) = this;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 3 | (uint)this;
    }
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffe;
  }
  return 0;
}

/* ref: FUN_00690660 */
uint F_00690660(unsigned int gen_a0)
{
  GEN_ENTER(0x690660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a6c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2b9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x10b2b94));
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a94));
  *(undefined4 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: FUN_006906c0 */
uint F_006906c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6906c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2bb8));
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 3;
  return (uint)this;
}

/* ref: FUN_006906f0 */
byte F_006906f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6906f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  uVar1 = F_00638150();
  *(uint *)((int)this + 0xc0) = uVar1;
  return uVar1 != 0;
}

/* ref: Client::Graphics::Scene::Camera::vf1 */
uint F_00690710(unsigned int gen_a0)
{
  GEN_ENTER(0x690710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xc0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  uVar2 = F_006905b0((undefined *)this);
  return uVar2;
}

/* ref: FUN_00690d40 */
uint F_00690d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x690d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar3 = *(int *)(REFG(int, 0x1370b90) + 0x90);
  (*(float *)(gen_frame + 0x0)) = (float)param_2;
  (*(float *)(gen_frame + 0x4)) = (float)param_3;
  fVar5 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
  if (iVar3 < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  iVar3 = *(int *)(REFG(int, 0x1370b90) + 0x94);
  (*(int *)(gen_frame + 0x2c)) = iVar3;
  fVar6 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1092098));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)((float10)*(double *)&REFG(undefined, 0x1092098) * (float10)param_3);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar1 = (float)((float10)fVar1 / (float10)(float)fVar5);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar2 / (float10)(float)fVar6);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar1 = (float)((float10)fVar1 - (float10)1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 - (float10)1) * (float10)REFG(double, 0x1094890))));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  uVar4 = F_0068bdf0(this,param_1,&(*(float *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00690e20 */
uint F_00690e20(unsigned int gen_a0)
{
  GEN_ENTER(0x690e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((*(byte *)((int)this + 200) & 1) == 0) {
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1302c80);
    (*(float *)(gen_frame + 0x24)) = gen_bits2f(REFG(float, 0x1302c84));
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1302c88));
    uVar4 = F_004f41e0(&(*(float *)(gen_frame + 0x20)),(int)this + 0x40);
    *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x20));
    *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x24));
    *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x28));
    return uVar4;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x60) - (float10)*(float *)((int)this + 0x30))));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 100) - (float10)*(float *)((int)this + 0x34))));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x68) - (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x20)) = fVar1;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  (*(float *)(gen_frame + 0x28)) = fVar3;
  F_0046f390(&(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x3c)) = *(float *)((int)this + 0x78);
  (*(float *)(gen_frame + 0x38)) = *(float *)((int)this + 0x74);
  fVar5 = (float10)*(float *)((int)this + 0x78);
  fVar6 = (float10)*(float *)((int)this + 0x74);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar5 - (float10)(*(float *)(gen_frame + 0x28)) * fVar6);
  (*(float *)(gen_frame + 0x38)) = *(float *)((int)this + 0x70);
  fVar7 = (float10)*(float *)((int)this + 0x70);
  (*(float *)(gen_frame + 0x14)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x20)) * fVar5);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x24)) * fVar7);
  F_0046f390(&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x24)) * (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x14)));
  uVar4 = F_0046f390(&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x8));
  return uVar4;
}

/* ref: FUN_00690f90 */
uint F_00690f90(unsigned int gen_a0)
{
  GEN_ENTER(0x690f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float * pfVar5;
  float10 fVar6;
  
  if ((*(byte *)((int)this + 200) & 1) == 0) {
    uVar4 = F_00666e10((undefined *)((int)this + 0x80),(int)this + 0x30,(int)this + 0x40,
                         (int)this + 0x50);
    return uVar4;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x60) - (float10)*(float *)((int)this + 0x30))));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 100) - (float10)*(float *)((int)this + 0x34))));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x68) - (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  (*(float *)(gen_frame + 0x20)) = fVar1;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2) +
                 (float10)fVar3 * (float10)fVar3)));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  if ((float10)fVar1 < (float10)REFG(float, 0x1094778)) {
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  }
  F_005fe2e0(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x3c)) = *(float *)((int)this + 0xc4);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc4) * (float10)REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar6 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar6;
  (*(float *)(gen_frame + 0x38)) = fVar2;
  fVar6 = (float10)fVar2;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar6);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x8)));
  fVar6 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0x38)) = (float)fVar6;
  (*(float *)(gen_frame + 0x1c)) = (float)fVar6;
  pfVar5 = (float *)F_004f4130(&(*(float *)(gen_frame + 0x20)),(int)this + 0x70,&(*(float *)(gen_frame + 0x10)));
  fVar1 = pfVar5[1];
  fVar2 = pfVar5[2];
  (*(float *)(gen_frame + 0x0)) = *pfVar5;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  uVar4 = F_004f4430((undefined *)((int)this + 0x80),(float *)((int)this + 0x30),(int)this + 0x60,
                       &(*(float *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00691130 */
uint F_00691130(unsigned int gen_a0)
{
  GEN_ENTER(0x691130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2bb8));
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2bd4));
  return (uint)this;
}

/* ref: Client::Graphics::Scene::CameraMaya::vf1 */
uint F_00691170(unsigned int gen_a0)
{
  GEN_ENTER(0x691170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xc0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  uVar2 = F_006905b0((undefined *)this);
  return uVar2;
}

/* ref: FUN_006911a0 */
uint F_006911a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6911a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float * pfVar5;
  undefined * this_00;
  float fVar6;
  
  if (*(int *)((int)this + 0xd4) == 0) {
    *(float *)((int)this + 0x60) = *param_1;
    *(float *)((int)this + 100) = param_1[1];
    *(float *)((int)this + 0x68) = param_1[2];
    pfVar5 = param_1;
  }
  else {
    pfVar5 = ((float *)GEN_TOP((*(int *)((int)this + 0xd4) + -1)));
    if (pfVar5 < &REFG(undefined, 0x6)) {
      pfVar5 = (float *)((int)this + 0x60);
      pfVar1 = (float *)((int)this + 0x30);
      (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_1 - (float10)*pfVar5);
      fVar6 = ((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)((int)this + 100))));
      (*(float *)(gen_frame + 0x14)) = fVar6;
      fVar2 = ((float)GEN_TOF(((float10)param_1[2] - (float10)*(float *)((int)this + 0x68))));
      (*(float *)(gen_frame + 0x18)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)*pfVar1 + (float10)(float)((float10)*param_1 - (float10)*pfVar5))));
      (*(float *)(gen_frame + 0x0)) = fVar3;
      fVar6 = ((float)GEN_TOF(((float10)fVar6 + (float10)*(float *)((int)this + 0x34))));
      (*(float *)(gen_frame + 0x4)) = fVar6;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) + (float10)fVar2)));
      (*(float *)(gen_frame + 0x8)) = fVar2;
      *pfVar1 = fVar3;
      *(float *)((int)this + 0x34) = fVar6;
      *(float *)((int)this + 0x38) = fVar2;
      *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 2;
      *pfVar5 = *param_1;
      *(float *)((int)this + 100) = param_1[1];
      *(float *)((int)this + 0x68) = param_1[2];
      iVar4 = *(int *)((int)this + 0xc0);
      if (*(char *)(iVar4 + 0xb8) != '\0') {
        this_00 = (undefined *)F_0046f4a0(&(*(float *)(gen_frame + 0x0)),pfVar1,pfVar5);
        fVar6 = F_004bd280(this_00);
        (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1094884);
        fVar6 = (float)((float10)fVar6 + (float10)fVar6);
        (*(float *)(gen_frame + 0x2c)) = fVar6;
        pfVar5 = &(*(float *)(gen_frame + 0x2c));
        if (!(REFG(double, 0x1094800) < (double)fVar6)) {
          pfVar5 = &(*(float *)(gen_frame + 0x28));
        }
        *(float *)(iVar4 + 0xb4) = *pfVar5;
        return (uint)pfVar5;
      }
    }
  }
  return (uint)pfVar5;
}

/* ref: FUN_006912b0 */
uint F_006912b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6912b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  return (uint)this;
}

/* ref: Client::Graphics::Scene::DrawObject::vf1 */
uint F_006912f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6912f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar1 = F_006905b0((undefined *)this);
  return uVar1;
}

/* ref: FUN_00691320 */
uint F_00691320(float gen_a0)
{
  GEN_ENTER(0x691320u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  return (uint)pfVar1;
}

/* ref: FUN_00691360 */
byte F_00691360(unsigned int gen_a0)
{
  GEN_ENTER(0x691360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  *(uint *)((int)this + 0xf0) = *(uint *)((int)this + 0xf0) | 2;
  iVar2 = REFG(int, 0x1370b90);
  uVar3 = F_004dcd60(0x10,4,0);
  *(uint *)((int)this + 0x98) = uVar3;
  if (uVar3 != 0) {
    uVar3 = F_004dcd60(0x10,4,0);
    *(uint *)((int)this + 0x9c) = uVar3;
    if (uVar3 != 0) {
      uVar3 = F_004dcd60(0x70,4,0);
      *(uint *)((int)this + 0xa0) = uVar3;
      if (uVar3 != 0) {
        uVar3 = F_004dcd60(0x10,4,7);
        *(uint *)((int)this + 0xa4) = uVar3;
        if (uVar3 != 0) {
          uVar3 = F_004dcd60(0x10,4,0);
          *(uint *)((int)this + 0xa8) = uVar3;
          if ((uVar3 != 0) &&
             (puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x98),0,0x10,2),
             puVar4 != (undefined4 *)0x0)) {
            *puVar4 = REFG(undefined4, 0x1302e44);
            puVar4[1] = REFG(undefined4, 0x1302e48);
            puVar4[2] = REFG(undefined4, 0x1302e4c);
            puVar4[3] = REFG(undefined4, 0x1302e50);
            *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x98) + 0x24))) = 0;
            puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x9c),0,0x10,2);
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = REFG(undefined4, 0x1302e54);
              puVar4[1] = REFG(undefined4, 0x1302e58);
              puVar4[2] = REFG(undefined4, 0x1302e5c);
              puVar4[3] = REFG(undefined4, 0x1302e60);
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x9c) + 0x24))) = 0;
              puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xa0),0,0x70,2);
              uVar1 = REFG(float, 0x1087f04);
              if (puVar4 == (undefined4 *)0x0) {
                return 0;
              }
              *puVar4 = REFG(undefined4, 0x1302e54);
              puVar4[1] = REFG(undefined4, 0x1302e58);
              puVar4[2] = REFG(undefined4, 0x1302e5c);
              puVar4[3] = REFG(undefined4, 0x1302e60);
              puVar4[4] = uVar1;
              puVar4[5] = uVar1;
              puVar4[6] = uVar1;
              puVar4[7] = 0;
              puVar4[8] = REFG(undefined4, 0x1302e54);
              puVar4[9] = REFG(undefined4, 0x1302e58);
              puVar4[10] = REFG(undefined4, 0x1302e5c);
              puVar4[0xb] = REFG(undefined4, 0x1302e60);
              puVar4[0xc] = REFG(undefined4, 0x1302e54);
              puVar4[0xd] = REFG(undefined4, 0x1302e58);
              puVar4[0xe] = REFG(undefined4, 0x1302e5c);
              puVar4[0xf] = REFG(undefined4, 0x1302e60);
              puVar4[0x10] = REFG(undefined4, 0x1302e54);
              puVar4[0x11] = REFG(undefined4, 0x1302e58);
              puVar4[0x12] = REFG(undefined4, 0x1302e5c);
              puVar4[0x13] = REFG(undefined4, 0x1302e60);
              puVar4[0x14] = REFG(undefined4, 0x1302e54);
              puVar4[0x15] = REFG(undefined4, 0x1302e58);
              puVar4[0x16] = REFG(undefined4, 0x1302e5c);
              puVar4[0x17] = REFG(undefined4, 0x1302e60);
              puVar4[0x18] = uVar1;
              puVar4[0x19] = uVar1;
              puVar4[0x1a] = uVar1;
              puVar4[0x1b] = 0;
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x24))) = 0;
              puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xa4),0,0x10,2);
              if (puVar4 == (undefined4 *)0x0) {
                return 0;
              }
              *puVar4 = REFG(undefined4, 0x1302e54);
              puVar4[1] = REFG(undefined4, 0x1302e58);
              puVar4[2] = REFG(undefined4, 0x1302e5c);
              puVar4[3] = REFG(undefined4, 0x1302e60);
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x24))) = 0;
              puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xa8),0,0x10,2);
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x24))) = 0;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c),"g_CustomizeParameter");
              *(uint *)((int)this + 0xbc) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c),"g_DecalColor");
              *(uint *)((int)this + 0xc0) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20),"g_SamplerDecal");
              *(uint *)((int)this + 0xc4) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20),"g_SamplerTileDiffuse");
              *(uint *)((int)this + 200) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20),"g_SamplerTileNormal");
              *(uint *)((int)this + 0xcc) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20),"g_SamplerOcclusion");
              *(uint *)((int)this + 0xd0) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c),"g_InstanceParameter");
              *(uint *)((int)this + 0xd4) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c),"g_MaterialParameterDynamic");
              *(uint *)((int)this + 0xd8) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c),"g_SceneParameter");
              *(uint *)((int)this + 0xdc) = uVar3;
              return 1;
            }
          }
        }
      }
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  return 0;
}

/* ref: FUN_006916f0 */
uint F_006916f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6916f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (int)this + 0x78;
  if (*(int *)((int)this + 0x78) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x7c);
  }
  return uVar1;
}

/* ref: FUN_00691710 */
uint F_00691710(unsigned int gen_a0)
{
  GEN_ENTER(0x691710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (int)this + 0x80;
  if (*(int *)((int)this + 0x80) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x84);
  }
  return uVar1;
}

/* ref: FUN_00691730 */
uint F_00691730(unsigned int gen_a0)
{
  GEN_ENTER(0x691730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (int)this + 0x88;
  if (*(int *)((int)this + 0x88) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x8c);
  }
  return uVar1;
}

/* ref: FUN_00691770 */
uint F_00691770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0xa8 +
           *(int *)((int)this + 0xbc) * 4))) = param_1;
  return param_1;
}

/* ref: FUN_00691870 */
uint F_00691870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0xa8 + *(int *)((int)this + 0xd4) * 4))) = param_1;
  *((undefined4 *)GEN_TOP((uVar1 + 0xa8 + *(int *)((int)this + 0xdc) * 4))) = *(undefined4 *)((int)this + 0xa8)
  ;
  return uVar1;
}

/* ref: FUN_006918c0 */
uint F_006918c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6918c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if (param_1 == 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 0xa8 + *(int *)((int)this + 0xd8) * 4))) =
         *(undefined4 *)((int)this + 0xa4);
    return uVar1;
  }
  *((int *)GEN_TOP((uVar1 + 0xa8 + *(int *)((int)this + 0xd8) * 4))) = param_1;
  return uVar1;
}

/* ref: FUN_00691910 */
uint F_00691910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x691910u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (param_3 == 0) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x10b2cd0));
    fVar1 = REFG(float, 0x10944e8);
    param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x10944e8));
    param_2[2] = fVar1;
    param_2[3] = GEN_FLT_TO(param_2[3], REFG(float, 0x10b2ccc));
    return (uint)param_2;
  }
  if ((REFG(undefined4, 0x1488300) & 1) == 0) {
    *(float *)&REFG(undefined, 0x14882f0) = REFG(float, 0x10b2ccc);
    REFG(undefined4, 0x1488300) = REFG(undefined4, 0x1488300) | 1;
    *(float *)&REFG(undefined, 0x14882f4) = REFG(float, 0x109483c);
    *(float *)&REFG(undefined, 0x14882f8) = REFG(float, 0x109483c);
    *(float *)&REFG(undefined, 0x14882fc) = REFG(float, 0x10b2cc8);
  }
  if ((REFG(undefined4, 0x1488300) & 2) == 0) {
    *(float *)&REFG(undefined, 0x14882e0) = REFG(float, 0x10b2cc4);
    *(float *)&REFG(undefined, 0x14882e4) = REFG(float, 0x10a0da0);
    REFG(undefined4, 0x1488300) = REFG(undefined4, 0x1488300) | 2;
    *(float *)&REFG(undefined, 0x14882e8) = REFG(float, 0x10b2cc0);
    *(float *)&REFG(undefined, 0x14882ec) = REFG(float, 0x10b2cbc);
  }
  fVar4 = F_004a3ed0(param_3 + 0x70);
  fVar1 = (float)fVar4;
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if (*(char *)(REFG(int, 0x1371290) + 0x82c) == '\0') {
    pfVar3 = &(*(float *)(gen_frame + 0x1c));
    fVar4 = (float10)1;
    fVar2 = ((float)GEN_TOF((fVar4 - (float10)*(float *)(param_3 + 0x7c))));
    (*(float *)(gen_frame + 0x18)) = fVar2;
    fVar5 = (float10)fVar2;
    fVar2 = (float)(fVar4 - fVar5 * fVar5);
    (*(float *)(gen_frame + 0x18)) = fVar2;
    fVar5 = (float10)fVar2;
    fVar1 = ((float)GEN_TOF(((float10)fVar1 *
                   ((float10)*(float *)(REFG(int, 0x1371290) + 0x668) * fVar5 + (fVar4 - fVar5)))));
    (*(float *)(gen_frame + 0x18)) = fVar1;
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar1 = ((float)GEN_TOF((((float10)*(float *)&REFG(undefined, 0x1322f74) * (fVar4 - fVar5) +
                    (float10)*(float *)&REFG(undefined, 0x1322f78) * fVar5) * (float10)fVar1)));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    if (!((float10)fVar1 < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x18));
    }
    if (!((float10)REFG(float, 0x1322f6c) < (float10)*pfVar3)) {
      pfVar3 = &REFG(float, 0x1322f6c);
    }
    fVar1 = *pfVar3;
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xec) * (float10)fVar1)));
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar4 = (float10)fVar1;
    fVar7 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882f0);
    fVar5 = (float10)*(float *)&REFG(undefined, 0x14882f4) * fVar4;
    fVar6 = (float10)*(float *)&REFG(undefined, 0x14882f8) * fVar4;
    fVar4 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882fc);
  }
  else {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)(gen_frame + 0x1c));
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)*(float *)&REFG(undefined, 0x1322f70) * (float10)fVar1);
    if (!((float10)(float)((float10)*(float *)&REFG(undefined, 0x1322f70) * (float10)fVar1) < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x18));
    }
    if (!((float10)REFG(float, 0x1322f68) < (float10)*pfVar3)) {
      pfVar3 = &REFG(float, 0x1322f68);
    }
    fVar1 = *pfVar3;
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xec) * (float10)fVar1)));
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar4 = (float10)fVar1;
    fVar7 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882e0);
    fVar5 = (float10)*(float *)&REFG(undefined, 0x14882e4) * fVar4;
    fVar6 = (float10)*(float *)&REFG(undefined, 0x14882e8) * fVar4;
    fVar4 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882ec);
  }
  (*(float *)(gen_frame + 0x8)) = (float)fVar6;
  (*(float *)(gen_frame + 0x4)) = (float)fVar5;
  (*(float *)(gen_frame + 0x0)) = (float)fVar7;
  *param_2 = (*(float *)(gen_frame + 0x0));
  param_2[1] = (*(float *)(gen_frame + 0x4));
  param_2[2] = (*(float *)(gen_frame + 0x8));
  param_2[3] = (float)fVar4;
  return (uint)param_2;
}

/* ref: FUN_00691b90 */
ushort F_00691b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x691b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) % 10;
  if (uVar2 == 1) {
    uVar1 = F_0068c9c0(this,param_1,param_2,param_3);
    return uVar1;
  }
  if (uVar2 != 4) {
    uVar1 = F_0068cd40(this,param_1,param_2,param_3);
    return uVar1;
  }
  uVar1 = F_0068cc20(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00691be0 */
unsigned int F_00691be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691be0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      piVar3 = ((int *)GEN_TOP((*(int *)(param_1 + uVar4 * 4) + 0x88)));
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3;
      UNLOCK();
      if (iVar1 == 2) {
        piVar3 = ((int *)GEN_TOP((*(int *)(param_1 + uVar4 * 4) + 0x8c)));
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3;
        UNLOCK();
        if (iVar1 < 8) {
          pvVar2 = *(undefined * PTR32 *)(param_1 + uVar4 * 4);
          if (*(int *)((int)pvVar2 + 8) == 0x6d646c) {
            F_00502310(pvVar2,0);
          }
          pvVar2 = *(undefined * PTR32 *)(param_1 + uVar4 * 4);
          if (*(int *)((int)pvVar2 + 8) == 0x6d74726c) {
            F_00502b90(pvVar2,0);
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_00691c50 */
byte F_00691c50(unsigned int gen_a0)
{
  GEN_ENTER(0x691c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x88);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar1 == 2) {
      piVar2 = (int *)(param_1 + 0x8c);
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      return iVar1 < 8;
    }
  }
  return 0;
}

/* ref: FUN_00691c90 */
byte F_00691c90(unsigned int gen_a0)
{
  GEN_ENTER(0x691c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  piVar6 = *(int * PTR32 *)((int)this + 0xac);
  piVar3 = *(int * PTR32 *)((int)this + 0xb0);
  do {
    if (piVar6 == piVar3) {
      return 1;
    }
    iVar4 = *piVar6;
    piVar1 = (int *)(iVar4 + 0x8c);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar2 != 9) {
      piVar5 = (int *)(iVar4 + 0x88);
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5;
      UNLOCK();
      if (iVar2 != 2) {
        return 0;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
      if (7 < iVar2) {
        return 0;
      }
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

/* ref: FUN_00691d30 */
byte F_00691d30(unsigned int gen_a0)
{
  GEN_ENTER(0x691d30u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = (int *)*param_1;
  piVar2 = (int *)param_1[1];
  while( true ) {
    if (piVar3 == piVar2) {
      return 1;
    }
    piVar4 = (int *)(*piVar3 + 0x88);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 != 2) break;
    piVar3 = piVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00691d70 */
uint F_00691d70(unsigned int gen_a0)
{
  GEN_ENTER(0x691d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*(int *)((int)this + 0x710) != 0) {
    F_0050c620(*(int *)((int)this + 0x710),0,0);
    *(undefined4 *)((int)this + 0x710) = 0;
  }
  *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) & 0xfffeffff;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  F_004ff310(((undefined1 *)(gen_frame + 0x4)),4,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x736b6c62;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"chara/common/animation/skl_material.sklb",0,0,0);
  *(uint *)((int)this + 0x710) = uVar1;
  *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) | 0x10000;
  *(undefined1 *)((int)this + 0x6ec) = 0;
  return uVar1;
}

/* ref: FUN_00691e00 */
uint F_00691e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x691e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  code * pcVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  F_0068d780(this,param_1);
  F_004ff310(((undefined1 *)(gen_frame + 0x10)),4,0);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x124);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x706170;
  (*pcVar1)(this,((undefined1 *)(gen_frame + 0x14)),0x104,param_1,param_2);
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)),0,0,0);
  *((uint *)GEN_TOP((*(int *)((int)this + 0x714) + param_1 * 4))) = uVar2;
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x6f8) = ~uVar2 & *(uint *)((int)this + 0x6f8) | uVar2;
  *(undefined1 *)((int)this + 0x6ec) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar2;
}

/* ref: FUN_00691ec0 */
byte F_00691ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691ec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if ((((*(int *)(in_ecx + 0x2c0) != 0) || (*(int *)(in_ecx + 0x40c) != 0)) ||
      (*(int *)(in_ecx + 0x6f8) != 0)) ||
     ((bVar1 = 1, (*(byte *)(in_ecx + 0x2c4) & 1) == 0 || (*(int *)(in_ecx + 0x410) == 0)))) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00691f00 */
uint F_00691f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  pvVar3 = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60);
  uVar1 = F_00500af0(pvVar3,param_1);
  uVar1 = F_00500ae0(pvVar3,uVar1 & 0xffff);
  if ((*(uint *)(uVar1 + 8) >> 4 & 1) != 0) {
    uVar1 = F_00b82240((undefined *)((int)this + 0x700),param_1);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
  if (uVar1 != 0) {
    pvVar3 = (undefined *)((int)this + 0x418);
    uVar4 = 0;
    do {
      uVar2 = F_009f5550(pvVar3,param_1);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      pvVar3 = (undefined *)((int)pvVar3 + 0x88);
    } while (uVar4 < uVar1);
  }
  return 0;
}

/* ref: FUN_00691f90 */
uint F_00691f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + (param_1[1] + 0x5c + *(int *)(*param_1 + 0x74) * 4) * 4)));
  if (iVar1 == 0) {
    iVar3 = *(int *)(REFG(int, 0x137129c) + 0xd8);
    iVar1 = *(int *)(REFG(int, 0x137129c) + 0xa4);
  }
  else {
    iVar3 = *(int *)(REFG(int, 0x137129c) + 0xd8);
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0xa8 +
          iVar3 * 4))) = iVar1;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,param_1);
  return uVar2;
}

/* ref: FUN_00692000 */
uint F_00692000(unsigned int gen_a0)
{
  GEN_ENTER(0x692000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  float * pfVar4;
  int iVar5;
  float10 fVar6;
  
  uVar2 = 0;
  uVar3 = *(uint *)((int)this + 0x74);
  (*(int * PTR32 *)(gen_frame + 0x34)) = this;
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  if (uVar3 != 0) {
    (*(int *)(gen_frame + 0x38)) = 0x5c;
    do {
      iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + -0x5c + *(int *)((int)this + 0x7c))));
      (*(int *)(gen_frame + 0x28)) = iVar5;
      if (iVar5 != 0) {
        uVar2 = 0;
        (*(uint *)(gen_frame + 0x20)) = *(uint *)(iVar5 + 0x4c);
        if (*(uint *)(iVar5 + 0x4c) != 0) {
          do {
            iVar5 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x28)) + 0x48) + uVar2 * 4)));
            if (iVar5 != 0) {
              iVar5 = *(int *)(iVar5 + 8);
              if (*(char *)(iVar5 + 0xbd) != '\0') {
                (*(uint *)(gen_frame + 0x2c)) = **(uint * PTR32 *)(iVar5 + 0xb4) & 3;
              }
              iVar5 = (*(int *)(gen_frame + 0x38)) + uVar2;
              if (*(int *)((int)this + iVar5 * 4) == 0) {
                uVar3 = F_004dcd60(0x10,2,7);
                *(uint *)((int)this + iVar5 * 4) = uVar3;
              }
              this_00 = *(undefined * PTR32 *)((int)this + iVar5 * 4);
              pfVar4 = (float *)F_004d9920(this_00,0,0x10,2);
              if (pfVar4 != (float *)0x0) {
                ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0xac))((*(int * PTR32 *)(gen_frame + 0x34)),&(*(float *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x30)),&(*(uint *)(gen_frame + 0x2c)));
                pfVar4[3] = (*(float *)(gen_frame + 0x18));
                fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc)) * (float10)(*(float *)(gen_frame + 0xc)));
                (*(float *)(gen_frame + 0x24)) = fVar1;
                fVar6 = (float10)(*(float *)(gen_frame + 0x18));
                *pfVar4 = (float)(fVar6 * (float10)fVar1);
                fVar1 = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10)));
                (*(float *)(gen_frame + 0x24)) = fVar1;
                pfVar4[1] = (float)((float10)fVar1 * fVar6);
                fVar1 = (float)((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14)));
                (*(float *)(gen_frame + 0x24)) = fVar1;
                pfVar4[2] = (float)(fVar6 * (float10)fVar1);
                *(undefined4 *)((int)this_00 + 0x24) = 0;
              }
            }
            uVar2 = uVar2 + 1;
            this = (*(int * PTR32 *)(gen_frame + 0x34));
            uVar3 = (*(uint *)(gen_frame + 0x1c));
          } while (uVar2 < (*(uint *)(gen_frame + 0x20)));
        }
      }
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 4;
      uVar2 = (*(uint *)(gen_frame + 0x30)) + 1;
      (*(uint *)(gen_frame + 0x30)) = uVar2;
    } while (uVar2 < uVar3);
  }
  return uVar2;
}

/* ref: FUN_00692150 */
uint F_00692150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x692150u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  float * pfVar5;
  uint uVar6;
  uint uVar7;
  int in_ecx;
  uint uVar8;
  
  if ((short)param_2 == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = REFG(int, 0x137127c) + 0x10640 + (param_2 & 0xffff) * 0x18;
  }
  F_00621900(in_ecx,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x18)));
  ((byte *)(gen_frame + 0x0))[8] = *(byte *)(in_ecx + 4);
  pvVar2 = *(undefined * PTR32 *)(param_1 + 0x168);
  ((byte *)(gen_frame + 0x0))[0xc] = *(byte *)(in_ecx + 3);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = pvVar2;
  pfVar5 = (float *)F_004d9920(pvVar2,0,0x30,2);
  if (pfVar5 != (float *)0x0) {
    *pfVar5 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x280) * (float10)*(float *)(param_1 + 0x280))));
    pfVar5[1] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x284) * (float10)*(float *)(param_1 + 0x284))))
    ;
    pfVar5[2] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x288) * (float10)*(float *)(param_1 + 0x288))))
    ;
    fVar1 = *(float *)(param_1 + 0x28c);
    pfVar5[3] = fVar1;
    pfVar5[3] = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x10)) * (float10)param_5) * (float10)fVar1)));
    pfVar5[4] = *(float *)(param_1 + 0x2a0);
    pfVar5[5] = *(float *)(param_1 + 0x2a4);
    pfVar5[6] = *(float *)(param_1 + 0x2a8);
    pfVar5[7] = *(float *)(param_1 + 0x2ac);
    pfVar5[8] = *(float *)(param_1 + 0x2b0);
    pfVar5[9] = *(float *)(param_1 + 0x2b4);
    pfVar5[10] = *(float *)(param_1 + 0x2b8);
    pfVar5[0xb] = *(float *)(param_1 + 700);
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x168) + 0x24))) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x74);
  uVar7 = *(uint *)(param_1 + 0x7c);
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x14)) = uVar7;
  if (uVar3 != 0) {
    do {
      if (*(int *)(uVar7 + uVar8 * 4) != 0) {
        uVar6 = (uVar3 - uVar8) + param_6 & 0x3fffffff | 0x40000000;
        ((byte *)(gen_frame + 0x0))[4] = (char)uVar6;
        ((byte *)(gen_frame + 0x0))[5] = (char)(uVar6 >> 8);
        ((byte *)(gen_frame + 0x0))[6] = (char)(uVar6 >> 0x10);
        ((byte *)(gen_frame + 0x0))[7] = (char)(uVar6 >> 0x18);
        piVar4 = *(int * PTR32 *)(uVar7 + uVar8 * 4);
        ((code *)*(gen_code32 *)(*piVar4 + 0x14))
                  (piVar4,param_3,(undefined4)gen_fl2bits(param_4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)),param_1 + 0x30,
                   ((byte *)(gen_frame + 0x0)));
        uVar7 = (*(uint *)(gen_frame + 0x14));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3);
  }
  if ((*(float *)(gen_frame + 0x18)) != 0.0) {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x16c);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = pvVar2;
    pfVar5 = (float *)F_004d9920(pvVar2,0,0x30,2);
    uVar8 = 0;
    uVar7 = 0;
    if (pfVar5 != (float *)0x0) {
      *pfVar5 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x280) * (float10)*(float *)(param_1 + 0x280))))
      ;
      pfVar5[1] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x284) *
                         (float10)*(float *)(param_1 + 0x284))));
      pfVar5[2] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x288) *
                         (float10)*(float *)(param_1 + 0x288))));
      fVar1 = *(float *)(param_1 + 0x28c);
      pfVar5[3] = fVar1;
      pfVar5[3] = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x18)) * (float10)param_5) * (float10)fVar1)));
      pfVar5[4] = *(float *)(param_1 + 0x2a0);
      pfVar5[5] = *(float *)(param_1 + 0x2a4);
      pfVar5[6] = *(float *)(param_1 + 0x2a8);
      pfVar5[7] = *(float *)(param_1 + 0x2ac);
      pfVar5[8] = *(float *)(param_1 + 0x2b0);
      pfVar5[9] = *(float *)(param_1 + 0x2b4);
      pfVar5[10] = *(float *)(param_1 + 0x2b8);
      pfVar5[0xb] = *(float *)(param_1 + 700);
      uVar7 = *(uint *)(param_1 + 0x16c);
      *(undefined4 *)(uVar7 + 0x24) = 0;
    }
    if (uVar3 != 0) {
      do {
        uVar7 = (*(uint *)(gen_frame + 0x14));
        if (*(int *)((*(uint *)(gen_frame + 0x14)) + uVar8 * 4) != 0) {
          uVar7 = (uVar3 - uVar8) + param_6 & 0x3fffffff | 0x40000000;
          ((byte *)(gen_frame + 0x0))[4] = (char)uVar7;
          ((byte *)(gen_frame + 0x0))[5] = (char)(uVar7 >> 8);
          ((byte *)(gen_frame + 0x0))[6] = (char)(uVar7 >> 0x10);
          ((byte *)(gen_frame + 0x0))[7] = (char)(uVar7 >> 0x18);
          piVar4 = *(int * PTR32 *)((*(uint *)(gen_frame + 0x14)) + uVar8 * 4);
          uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))
                            (piVar4,param_3,(undefined4)gen_fl2bits(param_4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),
                             param_1 + 0x30,((byte *)(gen_frame + 0x0)));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
  }
  return uVar7;
}

/* ref: FUN_006923b0 */
uint F_006923b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6923b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),(uint)*(ushort *)(param_1 + 0x11a));
  *(undefined2 *)(param_1 + 0x11a) = 0xffff;
  return uVar1;
}

/* ref: FUN_006923e0 */
uint F_006923e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6923e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  float * pfVar8;
  undefined3 extraout_var = 0;
  uint uVar9;
  uint uVar10;
  float * pfVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar5 = *(uint *)(REFG(int, 0x137127c) + 0x66f4);
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
  (*(uint *)(gen_frame + 0x68)) = uVar5;
  uVar12 = 0;
  if (*(int *)(REFG(int, 0x1371284) + 0x14) != 0) {
    iVar6 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1371284) + 0x14) + 0x10)));
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(REFG(float, 0x1087f04));
    pfVar8 = (float *)F_004f4130(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x10)),iVar6 + 0x10);
    fVar1 = *pfVar8;
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    (*(float *)(gen_frame + 0x78)) = *(float *)((int)this + 0x120);
    (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x120);
    (*(float *)(gen_frame + 0x74)) = *(float *)((int)this + 0x124);
    (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x124);
    fVar4 = *(float *)((int)this + 0x128);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    uVar12 = 0;
    (*(float *)(gen_frame + 0x70)) = fVar4;
    (*(float *)(gen_frame + 0x8)) = fVar4;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = fVar3;
    (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1090998))));
    pfVar11 = (float *)(uVar5 + 200);
    do {
      (*(float *)(gen_frame + 0x5c)) = pfVar11[-1];
      fVar1 = pfVar11[-2];
      (*(float *)(gen_frame + 0x60)) = fVar1;
      (*(float *)(gen_frame + 0x58)) = *pfVar11;
      fVar13 = (float10)fVar1;
      fVar14 = (float10)pfVar11[-1];
      fVar15 = (float10)*pfVar11;
      fVar1 = ((float)GEN_TOF(((fVar13 * (float10)(*(float *)(gen_frame + 0x10)) + fVar14 * (float10)(*(float *)(gen_frame + 0x14))) +
                     fVar15 * (float10)(*(float *)(gen_frame + 0x18)))));
      (*(float *)(gen_frame + 0x58)) = fVar1;
      if (!((float10)fVar1 <= (float10)0)) {
        fVar1 = ((float)GEN_TOF((fVar15 * (float10)(*(float *)(gen_frame + 0x70)) +
                       ((float10)(*(float *)(gen_frame + 0x78)) * fVar13 + (float10)(*(float *)(gen_frame + 0x74)) * fVar14))));
        (*(float *)(gen_frame + 0x58)) = fVar1;
        if (!((float10)fVar1 - (float10)pfVar11[1] <= (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 300))) {
          *(undefined1 *)param_1 = 0;
          return (uint)pfVar8;
        }
        bVar7 = F_006af160(&(*(float *)(gen_frame + 0x0)),(uint)(pfVar11 + -2),&(*(float *)(gen_frame + 0x6c)));
        pfVar8 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar7)));
        if ((bVar7 != 0) && ((float10)(*(float *)(gen_frame + 0x6c)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x7c))))))) {
          (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)(uintptr_t)gen_fl2bits((float)((*(float *)(gen_frame + 0x6c)))));
        }
      }
      uVar12 = uVar12 + 1;
      pfVar11 = pfVar11 + 4;
    } while (uVar12 < 6);
    uVar5 = *(uint *)(REFG(undefined4, 0x1371280) + 0x24);
    uVar10 = 0;
    fVar1 = ((float)GEN_TOF((-(float10)*(float *)((*(uint *)(gen_frame + 0x68)) + 0xcc) - (float10)*(float *)((*(uint *)(gen_frame + 0x68)) + 0xac))));
    (*(float *)(gen_frame + 0x58)) = fVar1;
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x7c)))));
    (*(float *)(gen_frame + 0x30)) = (float)(fVar13 * (float10)(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x14)) * fVar13);
    (*(float *)(gen_frame + 0x38)) = (float)(fVar13 * (float10)(*(float *)(gen_frame + 0x18)));
    fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x78)) + (float10)(float)(fVar13 * (float10)(*(float *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x74)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x14)) * fVar13))));
    (*(float *)(gen_frame + 0x24)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x70)) + (float10)(float)(fVar13 * (float10)(*(float *)(gen_frame + 0x18))))));
    (*(float *)(gen_frame + 0x28)) = fVar4;
    uVar12 = REFG(undefined4, 0x1371280);
    if (uVar5 != 0) {
      uVar12 = *param_1;
      bVar7 = 0;
      (*(float *)(gen_frame + 0x60)) = gen_bits2f(uVar12);
      (*(float * PTR32 *)(gen_frame + 0x7c)) = (float *)(REFG(undefined4, 0x1371280) + 0x3c);
      do {
        uVar9 = 3 << (bVar7 & 0x1f);
        if ((uVar12 & uVar9) != 0) {
          if ((int)uVar10 < (int)uVar5) {
            fVar16 = *(*(float * PTR32 *)(gen_frame + 0x7c));
          }
          else {
            fVar16 = *((float *)GEN_TOP((REFG(undefined4, 0x1371280) + (uVar5 + 0xf) * 4)));
          }
          (*(float *)(gen_frame + 0x6c)) = fVar16;
          fVar13 = (float10)fVar16 + (float10)fVar1;
          fVar17 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0xc0) ^ REFG(uint, 0x10920d0));
          (*(float *)(gen_frame + 0x5c)) = fVar17;
          (*(float *)(gen_frame + 0x30)) = fVar17;
          fVar18 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0xc4) ^ REFG(uint, 0x10920d0));
          (*(float *)(gen_frame + 0x34)) = fVar18;
          (*(float *)(gen_frame + 0x54)) = fVar18;
          fVar19 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 200) ^ REFG(uint, 0x10920d0));
          (*(float *)(gen_frame + 0x38)) = fVar19;
          (*(float *)(gen_frame + 0x50)) = fVar19;
          fVar16 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x70)) * (float10)fVar19 +
                          ((float10)(*(float *)(gen_frame + 0x74)) * (float10)fVar18 + (float10)(*(float *)(gen_frame + 0x78)) * (float10)fVar17
                          ))));
          (*(float *)(gen_frame + 0x58)) = fVar16;
          fVar16 = (float)((float10)fVar16 - fVar13);
          (*(float *)(gen_frame + 0x4c)) = fVar16;
          (*(float *)(gen_frame + 0x10)) = fVar17;
          (*(float *)(gen_frame + 0x14)) = fVar18;
          (*(float *)(gen_frame + 0x18)) = fVar19;
          fVar17 = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar4 +
                          ((float10)fVar17 * (float10)fVar2 + (float10)fVar18 * (float10)fVar3))));
          (*(float *)(gen_frame + 0x58)) = fVar17;
          fVar17 = (float)((float10)fVar17 - fVar13);
          (*(float *)(gen_frame + 0x58)) = fVar17;
          fVar13 = (float10)fVar17;
          fVar14 = (float10)fVar16;
          uVar9 = (*(uint *)(gen_frame + 0x68));
          if (!(fVar14 * fVar13 < (float10)0)) {
            (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(-(float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 300)));
            fVar15 = (float10)((float)GEN_TOF(-(float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 300)));
            uVar9 = (uint)((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar13)) && !(fVar15 < fVar13));
            if (fVar14 <= fVar15 && ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar13)) && !(fVar15 < fVar13))) {
              *param_1 = ~(0xff << ((char)uVar10 * '\x02' + 2U & 0x1f) & 0xffU) & uVar12;
              return (uint)param_1;
            }
          }
        }
        (*(float * PTR32 *)(gen_frame + 0x7c)) = (*(float * PTR32 *)(gen_frame + 0x7c)) + 1;
        uVar10 = uVar10 + 1;
        bVar7 = bVar7 + 2;
      } while (uVar10 < uVar5);
      return uVar9;
    }
  }
  return uVar12;
}

/* ref: FUN_00692770 */
uint F_00692770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x692770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float10 fVar9;
  float * pfVar10;
  uint uVar11;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  iVar5 = *(int *)(REFG(int, 0x1371280) + 0x78 + param_1 * 4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_2;
  puVar6 = *(uint * PTR32 *)(iVar5 + 0x10);
  uVar11 = *puVar6;
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x68)) = REFG(float, 0x1087f04);
  (*(uint *)(gen_frame + 0x70)) = uVar11 ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x74)) = uVar1 ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x78)) = uVar2 ^ REFG(uint, 0x10920d0);
  uVar11 = puVar6[4];
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(uVar11 ^ REFG(uint, 0x10920d0));
  (*(uint *)(gen_frame + 0x34)) = puVar6[5] ^ REFG(uint, 0x10920d0);
  uVar1 = puVar6[6];
  (*(uint *)(gen_frame + 0x38)) = uVar1 ^ REFG(uint, 0x10920d0);
  uVar2 = puVar6[7];
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar6[5] ^ REFG(uint, 0x10920d0));
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(float *)(gen_frame + 0x20)) = gen_bits2f(uVar11 ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(uVar1 ^ REFG(uint, 0x10920d0));
  (*(uint *)(gen_frame + 0x2c)) = uVar2;
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x20)));
  fVar9 = (float10)1;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar9 / (float10)REFG(float, 0x1302c60));
  (*(float *)(gen_frame + 0x24)) = (float)(fVar9 / (float10)REFG(float, 0x1302c64));
  (*(float *)(gen_frame + 0x28)) = (float)(fVar9 / (float10)REFG(float, 0x1302c68));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar9 / (float10)REFG(float, 0x1302c60));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar9 / (float10)REFG(float, 0x1302c64));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar9 / (float10)REFG(float, 0x1302c68));
  F_0065f020(&(*(undefined4 *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x0)));
  uVar7 = *(undefined4 *)((int)this + 0x124);
  uVar8 = *(undefined4 *)((int)this + 0x128);
  (*(float *)(gen_frame + 0x30)) = *(float *)((int)this + 0x120);
  (*(uint *)(gen_frame + 0x34)) = uVar7;
  (*(uint *)(gen_frame + 0x38)) = uVar8;
  (*(uint *)(gen_frame + 0x3c)) = *(undefined4 *)((int)this + 300);
  pfVar10 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  fVar3 = pfVar10[1];
  fVar4 = pfVar10[2];
  (*(float *)(gen_frame + 0x30)) = *pfVar10;
  (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1375ac0);
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(REFG(float, 0x1375ac4));
  (*(uint *)(gen_frame + 0x34)) = (uint)gen_fl2bits(fVar3);
  (*(uint *)(gen_frame + 0x38)) = (uint)gen_fl2bits(fVar4);
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1375ac8));
  (*(uint *)(gen_frame + 0x2c)) = *(undefined4 *)(iVar5 + 0x80);
  uVar11 = F_0065f740(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)));
  if ((char)uVar11 == '\0') {
    *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = 0;
  }
  else {
    uVar11 = F_006b1f90((undefined *)(iVar5 + 0x30),&(*(float *)(gen_frame + 0x30)));
    if ((char)uVar11 == '\0') {
      *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return uVar11;
}

/* ref: FUN_00692990 */
uint F_00692990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x692990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * piVar1;
  byte bVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int local_c;
  
  piVar1 = (int *)(param_1 * 0x358 + REFG(int, 0x137127c));
  local_c = *(int *)((int)this + 0x74);
  puVar3 = *(uint * PTR32 *)((int)this + 0x7c);
  param_1 = 0;
  if (local_c == 0) {
    *param_3 = 0;
    return (uint)param_3;
  }
  do {
    uVar5 = 0;
    if (*puVar3 != 0) {
      uVar6 = *(uint *)(*puVar3 + 0x14) & *param_3;
      uVar5 = 0;
      piVar4 = piVar1;
      do {
        piVar4 = piVar4 + 0xd;
        if (((param_2 >> ((char)uVar5 * '\x02' & 0x1fU) & 1) != 0) &&
           (bVar2 = F_006556f0((undefined *)*puVar3,*piVar4 + 0xc0), bVar2 == 0)) {
          uVar6 = uVar6 & ~(3 << ((char)uVar5 * '\x02' & 0x1fU));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x10);
      uVar5 = *puVar3;
      param_1 = param_1 | uVar6;
      *(uint *)(uVar5 + 0x14) = uVar6;
    }
    puVar3 = puVar3 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  *param_3 = param_1;
  return uVar5;
}

/* ref: FUN_00692ab0 */
uint F_00692ab0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x692ab0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(uint *)(gen_frame + 0x5c)) = uVar4;
  iVar2 = *(int *)(param_1 + 0x164);
  if (iVar2 != 0) {
    iVar3 = *(int *)(REFG(undefined4, 0x1371280) + 0x24);
    if (iVar3 + -1 < iVar3) {
      fVar6 = *((float *)GEN_TOP((REFG(undefined4, 0x1371280) + 0x3c + (iVar3 + -1) * 4)));
    }
    else {
      fVar6 = *(float *)(REFG(undefined4, 0x1371280) + 0x3c + iVar3 * 4);
    }
    uVar4 = REFG(undefined4, 0x1371280);
    if (!((float10)param_2 < (float10)fVar6 * (float10)fVar6)) {
      fVar6 = *(float *)(param_1 + 0x120);
      uVar1 = *(undefined4 *)(param_1 + 300);
      fVar5 = (float10)0;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar6 + fVar5);
      (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
      (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x124) + fVar5)));
      (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF((fVar5 + (float10)*(float *)(param_1 + 0x128))));
      if (*(int *)(param_1 + 0x160) == 0) {
        (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
      }
      else {
        fVar5 = (float10)((float)GEN_TOF(((float10)1 - (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x160) + 0x7c))))))
        ;
        (*(float *)(gen_frame + 0xc)) = (float)((float10)1 - fVar5 * fVar5);
      }
      uVar4 = F_006570d0(iVar2,&(*(undefined4 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0xc)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar4;
}

/* ref: FUN_00692bd0 */
byte F_00692bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x692bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (uint *)((int)this + 0x168);
  do {
    uVar1 = F_004dcd60(0x30,2,0);
    *puVar2 = uVar1;
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 2);
  return 1;
}

/* ref: FUN_00692c10 */
uint F_00692c10(unsigned int gen_a0)
{
  GEN_ENTER(0x692c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)((int)this + 0xe4));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0xe4) = 0;
    }
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x150,0x10);
  if (uVar3 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00b84860(uVar3);
  }
  *(undefined * PTR32 *)((int)this + 0xe4) = this_00;
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    bVar2 = F_00b83750(this_00,*(undefined4 *)((int)this + 0x78));
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  return uVar3;
}

/* ref: FUN_00692c80 */
unsigned int F_00692c80(unsigned int gen_a0)
{
  GEN_ENTER(0x692c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
  if (*(int *)((int)this + 0x78) != 0) {
    uVar6 = 0;
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
    if (uVar5 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)this + 0x418);
      do {
        if ((*((ushort *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40))) >> ((byte)uVar6 & 0x1f) & 1) != 0) {
          uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2d0) + uVar6 * 4)));
          if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
            F_0061eec0(*(undefined * PTR32 *)((int)this + 0x78),uVar6);
            F_00622fe0(*(undefined * PTR32 *)((int)this + 0x78),uVar6 & 0xffff,uVar1);
          }
          F_009f0670((*(undefined * PTR32 *)(gen_frame + 0x4)),uVar1);
          bVar3 = '\x01' << ((byte)uVar6 & 0x1f);
          (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),~bVar3 & (byte)(*(uint *)(gen_frame + 0x8)) | bVar3);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x88);
        uVar6 = uVar6 + 1;
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
      } while (uVar6 < uVar5);
    }
    uVar6 = 0;
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
    if (uVar5 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x28;
      do {
        if ((((*((ushort *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40))) >> ((char)uVar6 + 10U & 0x1f) & 1) !=
              0) && (iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + *(int *)((int)this + 0x2d0)))), iVar2 != 0)) &&
           (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0)) {
          F_00b84d90(*(undefined * PTR32 *)((int)this + 0xe4),uVar6);
          F_00b84de0(*(undefined * PTR32 *)((int)this + 0xe4),iVar2,uVar6);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4);
        uVar6 = uVar6 + 1;
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
      } while (uVar6 < uVar5);
    }
    if ((byte)(*(uint *)(gen_frame + 0x8)) != '\0') {
      if (((*(uint *)(gen_frame + 0x8)) & 1) != 0) {
        if (*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) {
          uVar4 = 0xffff;
        }
        else {
          uVar5 = F_00623160(*(undefined * PTR32 *)((int)this + 0x78),"n_hara");
          uVar4 = (undefined2)uVar5;
        }
        *(undefined2 *)((int)this + 0x11c) = uVar4;
      }
      F_009f0b10(*(int *)((int)this + 0x78) + 0xa0);
      ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,(*(uint *)(gen_frame + 0x8)));
    }
  }
  return 0;
}

/* ref: FUN_00692e40 */
byte F_00692e40(unsigned int gen_a0)
{
  GEN_ENTER(0x692e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  if ((*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) || (*(ushort *)((int)this + 0x11c) == 0xffff)) {
    bVar4 = F_006aea80((undefined *)((int)this + 0x120),(undefined4 *)((int)this + 0x130));
    if (bVar4 == 0) {
      *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x130);
      *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x134);
      *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)this + 0x138);
      *(undefined4 *)((int)this + 300) = *(undefined4 *)((int)this + 0x13c);
      F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
      return 1;
    }
  }
  else {
    uVar5 = F_0064ce50(*(undefined * PTR32 *)((int)this + 0x78),((undefined1 *)(gen_frame + 0x50)),(uint)*(ushort *)((int)this + 0x11c))
    ;
    uVar6 = F_00623320(*(undefined * PTR32 *)((int)this + 0x78),(uint)*(ushort *)((int)this + 0x11c));
    F_004ef350(((undefined1 *)(gen_frame + 0x90)),uVar6,uVar5);
    F_005fe770(((undefined1 *)(gen_frame + 0x90)),(uint)((float *)(gen_frame + 0x30)));
    pfVar7 = ((float *)(gen_frame + 0x30)) + 1;
    if (!((float10)((float *)(gen_frame + 0x30))[2] < (float10)((float *)(gen_frame + 0x30))[1])) {
      pfVar7 = ((float *)(gen_frame + 0x30)) + 2;
    }
    if ((float10)*pfVar7 < (float10)((float *)(gen_frame + 0x30))[0]) {
      pfVar7 = ((float *)(gen_frame + 0x30));
    }
    (*(float *)(gen_frame + 0x2c)) = *pfVar7;
    if (*(double *)&REFG(undefined, 0x10ac2d0) < (double)*pfVar7) {
      bVar4 = F_0068e000(this);
      F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
      return bVar4;
    }
    (*(float *)(gen_frame + 0x4c)) = *(float *)((int)this + 0x13c);
    pfVar7 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x10)),(int)this + 0x130,((undefined1 *)(gen_frame + 0x90)));
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    fVar3 = pfVar7[2];
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) * (float10)(*(float *)(gen_frame + 0x2c)));
    ((float *)(gen_frame + 0x30))[0] = fVar1;
    ((float *)(gen_frame + 0x30))[1] = fVar2;
    ((float *)(gen_frame + 0x30))[2] = fVar3;
    (*(float *)(gen_frame + 0x10)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = fVar3;
    pfVar7 = (float *)F_00687590(((undefined1 *)(gen_frame + 0x0)),(float *)((int)this + 0x120),&(*(float *)(gen_frame + 0x10)));
    fVar1 = ((float)GEN_TOF(((float10)pfVar7[3] * (float10)pfVar7[3] +
                   ((float10)pfVar7[2] * (float10)pfVar7[2] +
                   ((float10)*pfVar7 * (float10)*pfVar7 + (float10)pfVar7[1] * (float10)pfVar7[1])))))
    ;
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    if (*(double *)&REFG(undefined, 0x10b2cd8) < (double)fVar1) {
      *(float *)((int)this + 0x120) = ((float *)(gen_frame + 0x30))[0];
      *(float *)((int)this + 0x124) = ((float *)(gen_frame + 0x30))[1];
      *(float *)((int)this + 0x128) = ((float *)(gen_frame + 0x30))[2];
      *(float *)((int)this + 300) = (*(float *)(gen_frame + 0x1c));
      F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
  return 0;
}

/* ref: FUN_006930a0 */
byte F_006930a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6930a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((*(byte *)(REFG(int, 0x137129c) + 0xf0) & 1) != 0) && (*(int *)((int)this + 0x2c8) == 0)) {
    if (*(int *)((int)this + 0x78) != 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this);
      if (uVar1 - 1 < 3) {
        if ((*(uint *)((int)this + 0x71c) >> 7 & 1) != 0) {
          F_0064d6d0(*(undefined * PTR32 *)((int)this + 0x78));
        }
        if ((*(uint *)((int)this + 0x71c) >> 8 & 1) != 0) {
          F_0063a460(*(undefined * PTR32 *)((int)this + 0x78));
        }
        if ((*(uint *)((int)this + 0x71c) >> 9 & 1) != 0) {
          F_0062bb20(*(undefined * PTR32 *)((int)this + 0x78));
        }
      }
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf85 */
uint F_00693120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00654fd0(param_1,*(undefined4 *)(this + 0x78),this + 0xe8,this + 0xf8,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2d8) != 0) {
    *(undefined4 *)(uVar1 + 0x70) = 0;
    return uVar1;
  }
  *(undefined4 *)(uVar1 + 0x70) = *(undefined4 *)(this + 0x160);
  return uVar1;
}

/* ref: FUN_00693210 */
byte F_00693210(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x693210u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  float10 fVar2;
  
  bVar1 = *(byte *)(REFG(int, 0x1371278) + 0x10);
  if (((bVar1 == 0xff) && (bVar1 = *(byte *)(in_ecx + 0x66), bVar1 == 0xff)) &&
     (fVar2 = (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1088120) + (float10)*(float *)(in_ecx + 300)
                              ))), bVar1 = fVar2 * fVar2 < (float10)param_2,
     fVar2 = (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 300) + (float10)*(double *)&REFG(undefined, 0x10b2ce0))))
     , fVar2 * fVar2 < (float10)param_2)) {
    return bVar1 + 1;
  }
  return bVar1;
}

/* ref: FUN_00693280 */
uint F_00693280(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x693280u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar3;
  undefined3 uVar2;
  
  uVar2 = (undefined3)((uint)REFG(int, 0x1371278) >> 8);
  uVar1 = CONCAT31(uVar2,*(char *)(REFG(int, 0x1371278) + 0x11));
  if ((*(char *)(REFG(int, 0x1371278) + 0x11) == -1) &&
     (uVar1 = CONCAT31(uVar2,*(char *)(in_ecx + 0x66)), *(char *)(in_ecx + 0x66) == -1)) {
    uVar1 = in_ecx & 0xffffff00;
    fVar3 = (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10948e8) * (float10)*(float *)(in_ecx + 300) +
                            (float10)*(double *)&REFG(undefined, 0x10947f0))));
    if (fVar3 * fVar3 < (float10)param_2) {
      uVar1 = CONCAT31((int3)(in_ecx >> 8),1);
    }
    fVar3 = (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10947f0) * (float10)*(float *)(in_ecx + 300) +
                            (float10)REFG(double, 0x10944b8))));
    if (fVar3 * fVar3 < (float10)param_2) {
      return uVar1 + 1;
    }
    uVar1 = CONCAT31(uVar2,(char)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00693300 */
uint F_00693300(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x693300u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined * this;
  float10 fVar6;
  float fVar7;
  
  if (param_1[0x1e] != 0) {
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1,((undefined1 *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x14)) = *(float *)(uVar5 + 0xc);
    fVar6 = (float10)*(float *)(uVar5 + 0xc);
    fVar7 = (float)(fVar6 * fVar6);
    (*(float *)(gen_frame + 0x14)) = fVar7;
    fVar7 = (float)((float10)param_2 - (float10)fVar7);
    (*(float *)(gen_frame + 0x14)) = fVar7;
    if ((float10)fVar7 < (float10)0) {
      fVar7 = 0.0;
    }
    iVar2 = param_1[0x1e];
    *(float *)(iVar2 + 0xa4) = fVar7;
    *(undefined1 *)(iVar2 + 0xa9) = 1;
  }
  this = (undefined *)(REFG(int, 0x137127c) + 0x1061c);
  if ((*(ushort *)((int)param_1 + 0x11a) == 0xffff) ||
     (iVar2 = REFG(int, 0x137127c) + 0x10640 + (uint)*(ushort *)((int)param_1 + 0x11a) * 0x18, iVar2 == 0))
  {
    uVar5 = F_00693180(param_1,param_2);
    cVar1 = (char)param_1[0x46];
    cVar4 = (char)uVar5;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1b)) + 0)) = cVar4;
    (*(undefined4 *)(gen_frame + 0x1b)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b)), 1, 3),cVar4);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = cVar1;
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),cVar1));
    *(char *)(param_1 + 0x46) = cVar4;
    if (cVar1 != cVar4) {
      if (cVar1 == -2) {
        uVar5 = F_00621970(this,2,1,param_1,(*(undefined4 *)(gen_frame + 0x1b)),0xfe);
        *(short *)((int)param_1 + 0x11a) = (short)uVar5;
        if ((short)uVar5 == -1) {
          *(undefined1 *)(param_1 + 0x46) = 0xfe;
          return uVar5;
        }
      }
      else {
        bVar3 = F_0068e040(param_1,(*(undefined4 *)(gen_frame + 0x1b)));
        (*(byte *)(gen_frame + 0x1f)) = bVar3;
        bVar3 = F_0068e040(param_1,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
        uVar5 = CONCAT31(extraout_var_01,bVar3);
        if (((*(byte *)(gen_frame + 0x1f)) != 0) && (bVar3 != 0)) {
          uVar5 = F_00621970(this,2,0,param_1,(*(undefined4 *)(gen_frame + 0x1b)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
          *(short *)((int)param_1 + 0x11a) = (short)uVar5;
          if ((short)uVar5 == -1) {
            *(char *)(param_1 + 0x46) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0));
          }
        }
      }
    }
  }
  else {
    if (*(char *)(iVar2 + 2) == '\x01') {
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = *(undefined1 *)(iVar2 + 3);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),*(undefined1 *)(iVar2 + 3)));
      bVar3 = F_0068e040(param_1,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
      uVar5 = CONCAT31(extraout_var,bVar3);
    }
    else {
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = *(undefined1 *)(iVar2 + 3);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),*(undefined1 *)(iVar2 + 3)));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1b)) + 0)) = *(undefined1 *)(iVar2 + 4);
      (*(undefined4 *)(gen_frame + 0x1b)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b)), 1, 3),*(undefined1 *)(iVar2 + 4));
      bVar3 = F_0068e040(param_1,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
      (*(byte *)(gen_frame + 0x1f)) = bVar3;
      bVar3 = F_0068e040(param_1,(*(undefined4 *)(gen_frame + 0x1b)));
      uVar5 = CONCAT31(extraout_var_00,bVar3);
      if ((*(byte *)(gen_frame + 0x1f)) == 0) goto LAB_006933ee;
    }
    if ((char)uVar5 == '\0') {
LAB_006933ee: ;
      uVar5 = F_00693180(param_1,param_2);
      *(char *)(param_1 + 0x46) = (char)uVar5;
      F_00621a50(this,(uint)*(ushort *)((int)param_1 + 0x11a));
      *(undefined2 *)((int)param_1 + 0x11a) = 0xffff;
      return 0xffff;
    }
  }
  return uVar5;
}

/* ref: FUN_006934f0 */
uint F_006934f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6934f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00693180(param_1,param_2);
  uVar2 = (uint)*(ushort *)(param_1 + 0x11a);
  *(char *)(param_1 + 0x118) = (char)uVar1;
  uVar1 = uVar2;
  if ((*(ushort *)(param_1 + 0x11a) != 0xffff) &&
     (uVar1 = 0, REFG(int, 0x137127c) + 0x10640 + uVar2 * 0x18 != 0)) {
    uVar1 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),uVar2);
    *(undefined2 *)(param_1 + 0x11a) = 0xffff;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::VfxInstanceListenner::vf1 */
byte F_00693550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x693550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int * piVar10;
  int * piVar11;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  piVar10 = *(int * PTR32 *)(this + 4);
  if (param_2 == 0) {
    fVar6 = (float10)0;
    iVar9 = piVar10[0x15];
    (*(float *)(gen_frame + 0xf0)) = (float)fVar6;
    (*(int *)(gen_frame + 0xc0)) = piVar10[0x14];
    (*(float *)(gen_frame + 0xf4)) = (float)fVar6;
    (*(float *)(gen_frame + 0xf8)) = (float)fVar6;
    (*(int *)(gen_frame + 0xc4)) = 0;
    (*(int *)(gen_frame + 0xc8)) = 0;
    (*(int *)(gen_frame + 0xd0)) = 0;
    (*(int *)(gen_frame + 0xd8)) = 0;
    (*(int *)(gen_frame + 0xe0)) = 0;
    (*(int *)(gen_frame + 0xe4)) = 0;
    (*(int *)(gen_frame + 0xd4)) = iVar9;
    (*(int *)(gen_frame + 0xe8)) = piVar10[0x16];
    F_004efe70(&(*(int *)(gen_frame + 0xc0)),(uint)(piVar10 + 0x10));
    fVar1 = gen_bits2f(piVar10[0xc]);
    fVar6 = (float10)(*(float *)(gen_frame + 0xf0));
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)fVar1 + fVar6);
    fVar2 = gen_bits2f(piVar10[0xd]);
    fVar4 = (float10)(*(float *)(gen_frame + 0xf4));
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar2 + fVar4);
    fVar3 = gen_bits2f(piVar10[0xe]);
    *param_1 = (*(int *)(gen_frame + 0xc0));
    fVar5 = (float10)(*(float *)(gen_frame + 0xf8));
    param_1[1] = (*(int *)(gen_frame + 0xc4));
    param_1[2] = (*(int *)(gen_frame + 0xc8));
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar3 + fVar5);
    param_1[4] = (*(int *)(gen_frame + 0xd0));
    param_1[3] = 0;
    param_1[5] = (*(int *)(gen_frame + 0xd4));
    param_1[7] = 0;
    param_1[0xb] = 0;
    param_1[6] = (*(int *)(gen_frame + 0xd8));
    param_1[0xc] = (int)gen_fl2bits((float)((float10)fVar1 + fVar6));
    param_1[8] = (*(int *)(gen_frame + 0xe0));
    param_1[0xd] = (int)gen_fl2bits((float)((float10)fVar2 + fVar4));
    param_1[9] = (*(int *)(gen_frame + 0xe4));
    param_1[0xe] = (int)gen_fl2bits((float)((float10)fVar3 + fVar5));
    iVar9 = REFG(float, 0x1087f04);
    param_1[10] = (*(int *)(gen_frame + 0xe8));
    param_1[0xf] = iVar9;
LAB_0069370d: ;
    bVar7 = 1;
  }
  else {
    if (param_2 == 3) {
      if (param_3 == 0) {
        if ((undefined *)piVar10[0x1e] != (undefined *)0x0) {
          uVar8 = F_00623160((undefined *)piVar10[0x1e],param_4);
          if ((short)uVar8 != -1) {
            uVar8 = F_0054e1a0(piVar10,((undefined1 *)(gen_frame + 0x40)),uVar8 & 0xffff);
            goto LAB_006935bd;
          }
        }
      }
      else {
        uVar8 = ((code *)*(gen_code32 *)(*piVar10 + 0x50))(piVar10,param_3);
        if ((char)uVar8 != '\0') {
          uVar8 = ((code *)*(gen_code32 *)(*piVar10 + 0x40))(piVar10,((undefined1 *)(gen_frame + 0x80)),param_3);
LAB_006935bd: ;
          F_004be0e0(((int *)(gen_frame + 0x0)),uVar8);
          piVar10 = ((int *)(gen_frame + 0x0));
          piVar11 = param_1;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar11 = *piVar10;
            piVar10 = piVar10 + 1;
            piVar11 = piVar11 + 1;
          }
          goto LAB_0069370d;
        }
      }
    }
    bVar7 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return bVar7;
}

/* ref: FUN_00693730 */
uint F_00693730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined * pvVar2;
  ushort uVar3;
  int * in_EAX = 0;
  uint uVar4;
  
  if (*(short *)((int)this + 0x40) != 0) {
    uVar4 = 0;
    do {
      uVar3 = *(ushort *)((int)this + 0x40) >> ((byte)uVar4 & 0x1f);
      in_EAX = ((int *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)in_EAX) >> 0x10),uVar3)));
      if ((uVar3 & 1) != 0) {
        in_EAX = ((int *)GEN_TOP((*(int *)((int)this + uVar4 * 4) + 0x88)));
        LOCK();
        iVar1 = *in_EAX;
        *in_EAX = *in_EAX;
        UNLOCK();
        if (iVar1 == 2) {
          in_EAX = ((int *)GEN_TOP((*(int *)((int)this + uVar4 * 4) + 0x8c)));
          LOCK();
          iVar1 = *in_EAX;
          *in_EAX = *in_EAX;
          UNLOCK();
          if (iVar1 < 8) {
            pvVar2 = *(undefined * PTR32 *)((int)this + uVar4 * 4);
            if (*(int *)((int)pvVar2 + 8) == 0x6d646c) {
              in_EAX = (int *)F_00502310(pvVar2,param_1);
            }
            pvVar2 = *(undefined * PTR32 *)((int)this + uVar4 * 4);
            if (*(int *)((int)pvVar2 + 8) == 0x6d74726c) {
              in_EAX = (int *)F_00502b90(pvVar2,param_2);
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
  }
  return (uint)in_EAX;
}

/* ref: FUN_006937b0 */
uint F_006937b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6937b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  
  iVar2 = (*(int *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4)));
  if (iVar1 != 0) {
    F_0050c620(iVar1,0,0);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 4))) = 0;
  }
  F_004ff310(&(*(int *)&gen_args[1]),4,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  uVar4 = F_00513d20(&(*(int *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),-(uint)((char)(*(undefined4 *)&gen_args[4]) != '\0') & (uint)&(*(undefined4 *)(gen_frame + 0x4)),0,
                       0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 4))) = uVar4;
  uVar3 = 1 << ((byte)iVar2 & 0x1f);
  uVar5 = ~uVar3;
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) & uVar5 | uVar3;
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x42))) = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x42))) & uVar5 | 0 << ((byte)iVar2 & 0x1f);
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = uVar5 & *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) | uVar3;
  return (uint)uVar3;
}

/* ref: FUN_00693890 */
uint F_00693890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x693890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar4 = 0 << ((byte)param_1 & 0x1f);
  uVar2 = ~(1 << ((byte)param_1 & 0x1f));
  *(ushort *)((int)this + 0x40) = *(ushort *)((int)this + 0x40) & uVar2 | uVar4;
  *(ushort *)((int)this + 0x42) = uVar2 & *(ushort *)((int)this + 0x42) | uVar4;
  *(ushort *)((int)this + 0x44) = *(ushort *)((int)this + 0x44) & uVar2 | uVar4;
  iVar1 = *(int *)((int)this + param_1 * 4);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = F_0050c620(iVar1,0,0);
    *(undefined4 *)((int)this + param_1 * 4) = 0;
  }
  return uVar3;
}

/* ref: FUN_00693900 */
uint F_00693900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = *(byte *)((int)this + 2);
  uVar4 = F_006b1210(param_2,param_1);
  if (uVar4 != 0xffffffff) {
    uVar5 = ((code *)*(gen_code32 *)(*param_2 + 0x5c))(param_2);
    uVar6 = F_006b11b0(param_2);
    puVar1 = ((undefined4 *)GEN_TOP((uVar5 + 4 + (uVar6 * bVar2 + uVar4) * 6)));
    uVar4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 4) = *puVar1;
      uVar3 = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)((int)this + 8) = uVar3;
      return CONCAT22((short)((uint)((int)(uintptr_t)puVar1) >> 0x10),uVar3);
    }
  }
  *(undefined4 *)((int)this + 4) = 0x3ff0000;
  *(undefined1 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00693980 */
byte F_00693980(unsigned int gen_a0)
{
  GEN_ENTER(0x693980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0));
  *(uint *)this = uVar1;
  return -1 < (int)uVar1;
}

/* ref: FUN_006939a0 */
uint F_006939a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6939a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if (-1 < (int)uVar1) {
    uVar1 = F_00676850((undefined *)(REFG(int, 0x137128c) + 0x3d0),uVar1);
    *(undefined4 *)this = 0xffffffff;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf57 */
uint F_006939d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6939d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if (4 < param_1) {
    uVar1 = param_1 - 5;
  }
  uVar1 = F_00693900(((undefined *)GEN_TOP((*(int *)(this + 0x818) + param_1 * 0xc))),uVar1,param_2);
  this[0x6ec] = (undefined1)0x0;
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf59 */
uint F_00693a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x693a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0xa8 + *(int *)(REFG(int, 0x137129c) + 0xbc) * 4))) = *(undefined4 *)(this + 0x7e8);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf67 */
uint F_00693a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x693a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  char * _Format;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      uVar3 = (uint)*(ushort *)(this + param_3 * 4 + 0x750);
      uVar2 = (uint)*(ushort *)(this + 0x778);
      if (uVar2 % 10 == 1) {
        uVar1 = F_0068c9c0(REFG(void * PTR32, 0x137129c),uVar2,param_3,uVar3);
        uVar2 = (uint)uVar1;
      }
      else if (uVar2 % 10 == 4) {
        uVar1 = F_0068cc20(REFG(void * PTR32, 0x137129c),uVar2,param_3,uVar3);
        uVar2 = (uint)uVar1;
      }
      else {
        uVar1 = F_0068cd40(REFG(void * PTR32, 0x137129c),uVar2,param_3,uVar3);
        uVar2 = (uint)uVar1;
      }
    }
    else {
      uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc + 10)));
    }
    F_00c472af(param_1,param_2,"chara/equipment/e%04d/model/c%04de%04d_%s.mdl",uVar3,uVar2,uVar3,
               (&REFG(undefined * PTR32, 0x1322f7c))[param_3]);
    return (uint)param_1;
  }
  if (param_3 < 10) {
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = (uint)*(ushort *)(this + param_3 * 4 + 0x750);
      uVar1 = F_00691b90(REFG(void * PTR32, 0x137129c),(uint)*(ushort *)(this + 0x778),param_3,uVar2);
    }
    else {
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
      uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc + 10)));
    }
    F_00c472af(param_1,param_2,"chara/accessory/a%04d/model/c%04da%04d_%s.mdl",uVar2,(uint)uVar1,
               uVar2,(&REFG(undefined * PTR32, 0x1322f7c))[param_3]);
    return (uint)param_1;
  }
  if (param_3 == 10) {
    uVar2 = (uint)*(ushort *)(this + 0x77a);
    uVar3 = (uint)*(ushort *)(this + 0x778);
    _Format = "chara/human/c%04d/obj/hair/h%04d/model/c%04dh%04d_hir.mdl";
  }
  else {
    if (param_3 == 0xb) {
      F_00c472af(param_1,param_2,"chara/human/c%04d/obj/face/f%04d/model/c%04df%04d_fac.mdl",
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77c),
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77c));
      return (uint)param_1;
    }
    if (param_3 == 0xc) {
      F_00c472af(param_1,param_2,"chara/human/c%04d/obj/tail/t%04d/model/c%04dt%04d_til.mdl",
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77e),
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77e));
      return (uint)param_1;
    }
    if (param_3 == 0xd) {
      uVar1 = F_00689950((uint)*(ushort *)(this + 0x778));
      F_00c472af(param_1,param_2,"chara/human/c%04d/obj/body/b%04d/model/c%04db%04d_top.mdl",
                 (uint)uVar1,2,(uint)uVar1,2);
      return (uint)param_1;
    }
    if (param_3 == 0xe) {
      uVar1 = F_006899f0((uint)*(ushort *)(this + 0x778));
      uVar3 = (uint)uVar1;
      uVar2 = 2;
      _Format = "chara/human/c%04d/obj/body/b%04d/model/c%04db%04d_top.mdl";
    }
    else {
      if (param_3 != 0xf) {
        return (uint)param_1;
      }
      uVar3 = F_00689a40((uint)*(ushort *)(this + 0x778));
      uVar3 = uVar3 & 0xffff;
      uVar2 = 3;
      _Format = "chara/human/c%04d/obj/body/b%04d/model/c%04db%04d_top.mdl";
    }
  }
  F_00c472af(param_1,param_2,_Format,uVar3,uVar2,uVar3,uVar2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf89 */
uint F_00693c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x7fc) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)(this + 0x7fc) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Human::vf84 */
uint F_00693cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x693cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  
  if (param_1 == 0xd) {
    uVar1 = *(ushort *)(this + 0x778);
    uVar2 = *(undefined4 *)(REFG(int, 0x137129c) + 0x20);
    uVar3 = F_00689950((uint)uVar1);
    uVar4 = F_006382e0(uVar2,(uint)uVar1,(uint)uVar3);
    return uVar4;
  }
  if (param_1 != 0xe) {
    if (param_1 == 0xf) {
      uVar2 = *(undefined4 *)(REFG(int, 0x137129c) + 0x20);
      uVar1 = *(ushort *)(this + 0x778);
      uVar4 = F_00689a40((uint)uVar1);
      uVar4 = F_006382e0(uVar2,(uint)uVar1,uVar4 & 0xffff);
      return uVar4;
    }
    if (param_1 < 10) {
      uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + 10 + param_1 * 0xc)));
      if (*(ushort *)(this + 0x778) != uVar1) {
        uVar4 = F_006382e0(*(undefined4 *)(REFG(int, 0x137129c) + 0x20),(uint)*(ushort *)(this + 0x778),
                             (uint)uVar1);
        return uVar4;
      }
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf86 */
uint F_00693d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x693d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  bVar2 = 0;
  if ((*(uint *)(REFG(undefined4, 0x137129c) + 0xf0) >> 1 & 1) != 0) {
    fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 300) + (float10)*(double *)&REFG(undefined, 0x1088120))))
    ;
    if (fVar5 * fVar5 < (float10)param_5) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
  }
  uVar3 = REFG(undefined4, 0x137129c);
  if (param_3 < 0x14) {
    iVar4 = bVar2 - 1;
    uVar3 = 0xc;
    do {
      iVar1 = *((int *)GEN_TOP(((uVar3 - 0xc) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 8) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 4) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 4 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 8 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      uVar3 = uVar3 + 0x18;
    } while (uVar3 < 0x3c);
    uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x7c) + 0x3c)));
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 0x14) = -(uint)bVar2;
    }
  }
  if (param_3 == 0x1e) {
    iVar4 = (-(uint)bVar2 & 0xffffff01) - 1;
    uVar3 = 0xc;
    do {
      iVar1 = *((int *)GEN_TOP(((uVar3 - 0xc) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 8) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 4) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 4 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 8 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      uVar3 = uVar3 + 0x18;
    } while (uVar3 < 0x3c);
    uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x7c) + 0x3c)));
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 0x14) = -(uint)bVar2 & 0xff;
    }
  }
  return uVar3;
}

/* ref: FUN_00693ef0 */
unsigned int F_00693ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x693ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  
  bVar1 = *(byte *)((int)this + 0x746) & 0x80;
  switch((unsigned int)(uintptr_t)(*(byte *)((int)this + 0x734))) {
  default: ;
    uVar4 = 100;
    break;
  case 2: ;
    uVar4 = 300;
    break;
  case 3: ;
  case 4: ;
    uVar4 = 500;
    break;
  case 5: ;
  case 6: ;
    uVar4 = 0x44c;
    break;
  case 7: ;
  case 8: ;
    uVar4 = 700;
    break;
  case 9: ;
  case 10: ;
    uVar4 = 900;
  }
  *(undefined2 *)((int)this + 0x778) = uVar4;
  *(short *)((int)this + 0x778) =
       *(short *)((int)this + 0x778) +
       (ushort)*(byte *)((int)this + 0x732) + (ushort)*(byte *)((int)this + 0x731) * 100 +
       (((ushort)bVar1 - (ushort)bVar1) - (ushort)(bVar1 != 0) & 9000);
  bVar1 = *(byte *)((int)this + 0x735);
  if (bVar1 < 0x65) {
    uVar2 = (ushort)bVar1 + (*(byte *)((int)this + 0x734) - 1 & 1) * 100;
  }
  else {
    uVar2 = (ushort)bVar1;
  }
  if (*(char *)((int)this + 0x730) == '\x04') {
    uVar3 = (ushort)*(byte *)((int)this + 0x746);
  }
  else {
    uVar3 = 0;
  }
  *(uint *)((int)this + 0x74c) =
       (uint)((ushort)*(byte *)((int)this + 0x736) != *(ushort *)((int)this + 0x77a)) << 10 |
       *(uint *)((int)this + 0x74c) & 0xfffffbff;
  *(uint *)((int)this + 0x74c) =
       (uint)(uVar2 != *(ushort *)((int)this + 0x77c)) << 0xb |
       *(uint *)((int)this + 0x74c) & 0xfffff7ff;
  *(uint *)((int)this + 0x74c) =
       (uint)(uVar3 != *(ushort *)((int)this + 0x77e)) << 0xc |
       *(uint *)((int)this + 0x74c) & 0xffffefff;
  *(ushort *)((int)this + 0x77a) = (ushort)*(byte *)((int)this + 0x736);
  *(ushort *)((int)this + 0x77c) = uVar2;
  *(ushort *)((int)this + 0x77e) = uVar3;
  return 0;
}

/* ref: FUN_00694050 */
ushort F_00694050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x694050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x28);
    break;
  case 2: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x2c);
    break;
  case 3: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x30);
    break;
  case 4: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x34);
    break;
  default: ;
    goto switchD_0069405c_default;
  }
  if (this != (undefined *)0x0) {
    uVar1 = F_00503570(this,param_1,param_3);
    return (ushort)uVar1;
  }
switchD_0069405c_default: ;
  return 0xffff;
}

/* ref: FUN_006940c0 */
unsigned int F_006940c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6940c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x818) == 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x78,0x10)));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      puVar1[0xf] = 0;
      puVar1[0x12] = 0;
      puVar1[0x15] = 0;
      puVar1[0x18] = 0;
      puVar1[0x1b] = 0;
      *(undefined4 * PTR32 *)((int)this + 0x818) = puVar1;
      return 0;
    }
    *(undefined4 *)((int)this + 0x818) = 0;
  }
  return 0;
}

/* ref: FUN_00694120 */
uint F_00694120(unsigned int gen_a0)
{
  GEN_ENTER(0x694120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x818) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x818));
    *(undefined4 *)((int)this + 0x818) = 0;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf57 */
uint F_00694150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x694150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  
  F_00693900(((undefined *)GEN_TOP((*(int *)(this + 0x790) + param_1 * 0xc))),param_1,param_2);
  uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + 8 + param_1 * 0xc)));
  (*(uint *)(gen_frame + 0x8)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 2)),uVar1);
  if ((uVar1 & 0xf00) != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
    if ((char)uVar2 == '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,5);
    }
    F_00691d70(this);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 1)) = (byte)(uVar1 >> 8);
    uVar2 = F_00691e00(this,param_1,(*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 1)) & 0xf);
    return uVar2;
  }
  this[0x6ec] = (undefined1)0x0;
  return (*(uint *)(gen_frame + 0x8)) >> 8;
}

/* ref: Client::Graphics::Scene::Demihuman::vf89 */
uint F_006941f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6941f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x784) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)(this + 0x784) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_00694230 */
uint F_00694230(unsigned int gen_a0)
{
  GEN_ENTER(0x694230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)((int)this + 0x738);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x10f04d8);
  if ((4 < uVar1) && ((uVar1 < 9 || (uVar1 == 10)))) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (byte)REFG(undefined4, 0x10f04d8);
    (*(uint *)(gen_frame + 0x4)) = (uint)((byte)(*(uint *)(gen_frame + 0x4)) | 1);
  }
  if (((*(uint *)(gen_frame + 0x4)) & 1) != 0) {
    *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) | 1;
    *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffd;
    return uVar1;
  }
  *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) | 2;
  *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffe;
  return uVar1;
}

/* ref: FUN_006942a0 */
unsigned int F_006942a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6942a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x790) == 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x3c,0x10)));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      *(undefined4 * PTR32 *)((int)this + 0x790) = puVar1;
      return 0;
    }
    *(undefined4 *)((int)this + 0x790) = 0;
  }
  return 0;
}

/* ref: FUN_006942f0 */
uint F_006942f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6942f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x790) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x790));
    *(undefined4 *)((int)this + 0x790) = 0;
  }
  return uVar1;
}

/* ref: FUN_00694320 */
uint F_00694320(unsigned int gen_a0)
{
  GEN_ENTER(0x694320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x65) != '\x02') && (*(char *)((int)this + 0x65) != '\x03')) {
    return 0x656d70;
  }
  uVar1 = F_00b51c10(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x18),(uint)*(ushort *)((int)this + 0x730));
  return uVar1;
}

/* ref: FUN_00694350 */
uint F_00694350(unsigned int gen_a0)
{
  GEN_ENTER(0x694350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x65) != '\x02') && (*(char *)((int)this + 0x65) != '\x03')) {
    return 0x656d70;
  }
  uVar1 = F_00b51c10(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x14),(uint)*(ushort *)((int)this + 0x730));
  return uVar1;
}

/* ref: Client::Graphics::Scene::Weapon::vf54 */
unsigned int F_00694380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x694380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if ((param_1 & 1) != 0) {
    if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
      *(undefined2 *)(this + 0x738) = 0xffff;
      return 0;
    }
    uVar1 = F_00623160(*(undefined * PTR32 *)(this + 0x78),"n_root");
    *(short *)(this + 0x738) = (short)uVar1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf57 */
uint F_006943c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6943c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(ushort *)(this + 0x734);
  uVar4 = F_006b1210(param_2,0);
  if (uVar4 != 0xffffffff) {
    uVar5 = ((code *)*(gen_code32 *)(*param_2 + 0x5c))(param_2);
    uVar6 = F_006b11b0(param_2);
    puVar1 = ((undefined4 *)GEN_TOP((uVar5 + 4 + (uVar6 * uVar2 + uVar4) * 6)));
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(this + 0x73a) = *puVar1;
      uVar3 = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)(this + 0x73e) = uVar3;
      if (((byte)this[0x73f] & 0xf) != 0) {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
        if ((char)uVar4 == '\0') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,1);
        }
        F_00691d70(this);
        uVar4 = F_00691e00(this,param_1,(byte)this[0x73f] & 0xf);
        return uVar4;
      }
      this[0x6ec] = (undefined1)0x0;
      return CONCAT22((short)((uint)((int)(uintptr_t)puVar1) >> 0x10),uVar3);
    }
  }
  *(ushort *)(this + 0x73c) = *(ushort *)(this + 0x73c) | 0x3ff;
  *(undefined2 *)(this + 0x73a) = 1;
  return 0x3ff;
}

/* ref: Client::Graphics::Scene::Weapon::vf89 */
uint F_006944a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6944a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x748) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)(this + 0x748) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Weapon::vf81 */
unsigned int F_006944e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6944e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if (*(int *)(this + 200) != 0) {
    if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
      puVar2 = &REFG(float, 0x1302d00);
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      F_0064ce50(*(undefined * PTR32 *)(this + 0x78),((undefined4 *)(gen_frame + 0x0)),(uint)*(ushort *)(this + 0x738));
    }
    *(undefined4 *)(this + 0x30) = (*(undefined4 *)(gen_frame + 0x30));
    *(undefined4 *)(this + 0x34) = (*(undefined4 *)(gen_frame + 0x34));
    *(undefined4 *)(this + 0x38) = (*(undefined4 *)(gen_frame + 0x38));
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
  }
  F_0068dc50((undefined *)this);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf86 */
uint F_00694580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x694580u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  byte bVar1;
  uint uVar2;
  float10 fVar3;
  
  bVar1 = 0;
  if ((*(uint *)(REFG(undefined4, 0x137129c) + 0xf0) >> 1 & 1) != 0) {
    fVar3 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 300) + (float10)*(double *)&REFG(undefined, 0x10b2ce0))))
    ;
    if (fVar3 * fVar3 < (float10)param_5) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
  }
  uVar2 = REFG(undefined4, 0x137129c);
  if ((param_3 < 0x14) && (uVar2 = **(uint * PTR32 *)(param_1 + 0x7c), uVar2 != 0)) {
    *(uint *)(uVar2 + 0x14) = bVar1 - 1;
  }
  if ((param_3 == 0x1e) && (uVar2 = **(uint * PTR32 *)(param_1 + 0x7c), uVar2 != 0)) {
    *(uint *)(uVar2 + 0x14) = (-(uint)bVar1 & 0xffffff01) - 1;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Monster::vf57 */
uint F_00694610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x694610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(ushort *)(this + 0x734);
  uVar4 = F_006b1210(param_2,0);
  if (uVar4 != 0xffffffff) {
    uVar5 = ((code *)*(gen_code32 *)(*param_2 + 0x5c))(param_2);
    uVar6 = F_006b11b0(param_2);
    puVar1 = ((undefined4 *)GEN_TOP((uVar5 + 4 + (uVar6 * uVar2 + uVar4) * 6)));
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(this + 0x736) = *puVar1;
      uVar3 = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)(this + 0x73a) = uVar3;
      if (((byte)this[0x73b] & 0xf) != 0) {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
        if ((char)uVar4 == '\0') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,1);
        }
        F_00691d70(this);
        uVar4 = F_00691e00(this,param_1,(byte)this[0x73b] & 0xf);
        return uVar4;
      }
      this[0x6ec] = (undefined1)0x0;
      return CONCAT22((short)((uint)((int)(uintptr_t)puVar1) >> 0x10),uVar3);
    }
  }
  *(ushort *)(this + 0x738) = *(ushort *)(this + 0x738) | 0x3ff;
  *(undefined2 *)(this + 0x736) = 1;
  return 0x3ff;
}

/* ref: FUN_006946f0 */
uint F_006946f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6946f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
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
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2cec));
  *(undefined4 *)((int)this + 0x1a4) = 5;
  F_00c48350((undefined *)((int)this + 0xa1),0,0x100);
  return (uint)this;
}

/* ref: FUN_00694790 */
byte F_00694790(unsigned int gen_a0)
{
  GEN_ENTER(0x694790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) & 0xfb;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 3;
  *(undefined1 *)(in_ecx + 0x65) = 1;
  return 1;
}

/* ref: Client::Graphics::Scene::Terrain::vf13 */
uint F_006947a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6947a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  float10 fVar2;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0x50)) = (float)fVar2;
  uVar1 = *(undefined4 *)(this + 0x54);
  (*(float *)(gen_frame + 0x54)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x58)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x20)),(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x50)))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x54)))));
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x58)))));
  F_005fec10(param_1,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)param_1;
}

/* ref: FUN_00694870 */
byte F_00694870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x694870u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) = (*(int *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(int *)&gen_args[3]);
  (*(int *)&gen_args[3]) = 0x74657261;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10000;
  uVar3 = F_00513d20((*(undefined4 *)&gen_args[1]),&(*(int *)&gen_args[3]),(*(char * PTR32 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
  if (uVar3 != 0) {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = uVar3;
    pcVar4 = (*(char * PTR32 *)&gen_args[2]);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    (*(int *)&gen_args[3]) = 0;
    for (iVar5 = (int)pcVar4 - (int)((*(char * PTR32 *)&gen_args[2]) + 1);
        ((iVar2 = (*(int *)&gen_args[3]), iVar5 != 0 && (iVar2 = iVar5, (*(char * PTR32 *)&gen_args[2])[iVar5] != '/')) &&
        ((*(char * PTR32 *)&gen_args[2])[iVar5] != '\\')); iVar5 = iVar5 + -1) {
    }
    (*(int *)&gen_args[3]) = iVar2;
    F_00c46aa0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa1,(*(char * PTR32 *)&gen_args[2]),(*(int *)&gen_args[3]));
    *((undefined1 *)GEN_TOP(((*(int *)&gen_args[3]) + 0xa1 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) = (undefined1)(*(undefined4 *)&gen_args[4]);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 2;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = 1;
    return 1;
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 4;
  return 0;
}

/* ref: FUN_00694950 */
byte F_00694950(unsigned int gen_a0)
{
  GEN_ENTER(0x694950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12070];
  ushort * puVar1;
  gen_size32 sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  short * psVar11;
  undefined * pvVar12;
  int * piVar13;
  uint uVar14;
  float10 fVar15;
  
  iVar7 = REFG(int, 0x137127c);
  (*(uint *)(gen_frame + 0x1205c)) = 0x694970;
  (*(undefined * PTR32 *)(gen_frame + 0x1204c)) = (undefined *)(REFG(int, 0x137127c) + 0xaf90);
  uVar9 = F_005003e0(*(undefined * PTR32 *)((int)this + 0x70));
  *(uint *)(iVar7 + 0xb180) = uVar9;
  iVar7 = *(int *)((int)this + 0x78);
  (*(uint *)(gen_frame + 0x12048)) = uVar9;
  (*(undefined * PTR32 *)(gen_frame + 0x12044)) = REFG(void * PTR32, 0x1370c1c);
  if (iVar7 != 0) {
    (*(uint *)(gen_frame + 0x1205c)) = 0;
    uVar9 = F_00500500(*(undefined * PTR32 *)((int)this + 0x70));
    if (iVar7 != 0) {
      piVar13 = *(int * PTR32 *)((int)this + 0x74);
      iVar10 = uVar9 - (int)piVar13;
      (*(int * PTR32 *)(gen_frame + 0x12058)) = piVar13;
      (*(gen_size32 *)(gen_frame + 0x12054)) = iVar10;
      (*(int *)(gen_frame + 0x12050)) = iVar7;
      do {
        iVar7 = *piVar13;
        uVar14 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 0xa8) + 4))) + 0x1e +
                                *(int *)(iVar7 + 0xa8))));
        uVar9 = 0;
        if (uVar14 != 0) {
          psVar11 = ((short *)GEN_TOP((*(int *)(iVar7 + 0xb8) + 2)));
          do {
            if (*psVar11 != 0) {
              ((int *)(gen_frame + 0x11000))[(int)((*(uint *)(gen_frame + 0x1205c)))] = iVar7;
              ((int *)(gen_frame + 0x10000))[(int)((*(uint *)(gen_frame + 0x1205c)))] = iVar10 + (int)piVar13;
              (*(uint *)(gen_frame + 0x1205c)) = (*(uint *)(gen_frame + 0x1205c)) + 1;
              break;
            }
            uVar9 = uVar9 + 1;
            psVar11 = psVar11 + 0x1e;
          } while (uVar9 < uVar14);
        }
        piVar13 = piVar13 + 1;
        (*(int * PTR32 *)(gen_frame + 0x12058)) = piVar13;
        iVar7 = (*(int *)(gen_frame + 0x12050)) + -1;
        (*(int *)(gen_frame + 0x12050)) = iVar7;
      } while (iVar7 != 0);
    }
    *(uint *)((int)this + 0x7c) = (*(uint *)(gen_frame + 0x1205c));
    if ((*(uint *)(gen_frame + 0x1205c)) != 0) {
      sVar2 = (*(uint *)(gen_frame + 0x1205c)) * 4;
      (*(gen_size32 *)(gen_frame + 0x12054)) = sVar2;
      pvVar12 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),sVar2,0x10)));
      *(undefined * PTR32 *)((int)this + 0x88) = pvVar12;
      if (pvVar12 != (undefined *)0x0) {
        F_00c48350(pvVar12,0,sVar2);
        uVar9 = 0;
        if ((*(uint *)(gen_frame + 0x1205c)) != 0) {
          do {
            uVar14 = F_00625750(((int *)(gen_frame + 0x11000))[(int)(uVar9)]);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))) = uVar14;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))) == 0) goto LAB_00694a5b;
            uVar6 = ((undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar9)])[1];
            iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4)));
            *(undefined2 *)(iVar7 + 8) = *(undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar9)];
            *(undefined2 *)(iVar7 + 10) = uVar6;
            iVar7 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x88) + iVar7))) + 0x24))) =
                 (undefined2)(*(uint *)(gen_frame + 0x12048));
          } while (uVar9 < (*(uint *)(gen_frame + 0x1205c)));
        }
        sVar2 = (*(gen_size32 *)(gen_frame + 0x12054));
        pvVar12 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),(*(gen_size32 *)(gen_frame + 0x12054)),0x10)));
        *(undefined * PTR32 *)((int)this + 0x94) = pvVar12;
        if (pvVar12 != (undefined *)0x0) {
          F_00c48350(pvVar12,0,sVar2);
          uVar9 = 0;
          if ((*(uint *)(gen_frame + 0x1205c)) == 0) {
            return 1;
          }
          while( true ) {
            F_00623d60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))),&(*(float *)(gen_frame + 0x12000)));
            iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4)));
            (*(float *)(gen_frame + 0x12020)) = (float)((float10)(*(float *)(gen_frame + 0x12000)) + (float10)(*(float *)(gen_frame + 0x12010)));
            (*(float *)(gen_frame + 0x12024)) = (float)((float10)(*(float *)(gen_frame + 0x12004)) + (float10)(*(float *)(gen_frame + 0x12014)));
            (*(float *)(gen_frame + 0x12028)) = (float)((float10)(*(float *)(gen_frame + 0x12008)) + (float10)(*(float *)(gen_frame + 0x12018)));
            fVar15 = (float10)REFG(double, 0x1088108);
            fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x12000)) + (float10)(*(float *)(gen_frame + 0x12010))) * fVar15)));
            (*(float *)(gen_frame + 0x12030)) = fVar3;
            fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x12004)) + (float10)(*(float *)(gen_frame + 0x12014))) * fVar15)));
            (*(float *)(gen_frame + 0x12034)) = fVar4;
            fVar5 = ((float)GEN_TOF((fVar15 * (float10)(float)((float10)(*(float *)(gen_frame + 0x12008)) + (float10)(*(float *)(gen_frame + 0x12018))))));
            (*(float *)(gen_frame + 0x12038)) = fVar5;
            *(float *)(iVar7 + 0x10) = fVar3;
            *(float *)(iVar7 + 0x14) = fVar4;
            *(float *)(iVar7 + 0x18) = fVar5;
            F_00623ec0((*(undefined * PTR32 *)(gen_frame + 0x1204c)),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))),&(*(float *)(gen_frame + 0x12000)))
            ;
            uVar14 = F_00b14060((*(undefined * PTR32 *)(gen_frame + 0x12044)),3);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) = uVar14;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) == 0) break;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) + 4))) =
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4)));
            F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))),&(*(float *)(gen_frame + 0x12000)));
            uVar8 = F_00b81f70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))));
            if ((uVar8 == 0) &&
               (uVar14 = F_00504790(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar9 * 4))),0),
               200 < uVar14)) {
              puVar1 = ((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) + 0xe)));
              *puVar1 = *puVar1 | 0x8000;
              F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))),&(*(float *)(gen_frame + 0x12000)));
            }
            uVar9 = uVar9 + 1;
            if ((*(uint *)(gen_frame + 0x1205c)) <= uVar9) {
              return 1;
            }
          }
        }
      }
LAB_00694a5b: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00694c40 */
byte F_00694c40(unsigned int gen_a0)
{
  GEN_ENTER(0x694c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12050];
  gen_size32 _Size;
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short * psVar5;
  undefined * pvVar6;
  int * piVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x1203c)) = 0x694c60;
  iVar2 = *(int *)((int)this + 0x78);
  (*(undefined * PTR32 *)(gen_frame + 0x12028)) = REFG(void * PTR32, 0x1370c1c);
  if (iVar2 != 0) {
    uVar3 = F_005003e0(*(undefined * PTR32 *)((int)this + 0x70));
    (*(uint *)(gen_frame + 0x12030)) = uVar3;
    (*(uint *)(gen_frame + 0x1203c)) = 0;
    uVar3 = F_00500500(*(undefined * PTR32 *)((int)this + 0x70));
    if (iVar2 != 0) {
      piVar7 = *(int * PTR32 *)((int)this + 0x74);
      iVar4 = uVar3 - (int)piVar7;
      (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
      (*(int *)(gen_frame + 0x1202c)) = iVar4;
      (*(int *)(gen_frame + 0x12034)) = iVar2;
      do {
        iVar2 = *piVar7;
        uVar8 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 0xa8) + 4))) + 0x1e + *(int *)(iVar2 + 0xa8)
                               )));
        uVar3 = 0;
        if (uVar8 != 0) {
          psVar5 = ((short *)GEN_TOP((*(int *)(iVar2 + 0xb8) + 0xe)));
          do {
            if (*psVar5 != 0) {
              ((int *)(gen_frame + 0x11000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar2;
              ((int *)(gen_frame + 0x10000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar4 + (int)piVar7;
              (*(uint *)(gen_frame + 0x1203c)) = (*(uint *)(gen_frame + 0x1203c)) + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            psVar5 = psVar5 + 0x1e;
          } while (uVar3 < uVar8);
        }
        piVar7 = piVar7 + 1;
        (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
        iVar2 = (*(int *)(gen_frame + 0x12034)) + -1;
        (*(int *)(gen_frame + 0x12034)) = iVar2;
      } while (iVar2 != 0);
    }
    *(uint *)((int)this + 0x80) = (*(uint *)(gen_frame + 0x1203c));
    if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
      _Size = (*(uint *)(gen_frame + 0x1203c)) * 4;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),_Size,0x10)));
      *(undefined * PTR32 *)((int)this + 0x8c) = pvVar6;
      if (pvVar6 != (undefined *)0x0) {
        F_00c48350(pvVar6,0,_Size);
        pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                   (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),_Size,0x10)));
        *(undefined * PTR32 *)((int)this + 0x98) = pvVar6;
        if (pvVar6 != (undefined *)0x0) {
          F_00c48350(pvVar6,0,_Size);
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
            do {
              uVar8 = F_006257b0(((int *)(gen_frame + 0x11000))[(int)(uVar3)]);
              *((uint *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4))) = uVar8;
              if (*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4))) == 0) goto LAB_00694d30;
              uVar1 = ((undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar3)])[1];
              iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4)));
              *(undefined2 *)(iVar2 + 10) = *(undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar3)];
              *(undefined2 *)(iVar2 + 0xc) = uVar1;
              iVar2 = uVar3 * 4;
              uVar3 = uVar3 + 1;
              *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + iVar2))) + 8))) =
                   (undefined2)(*(uint *)(gen_frame + 0x12030));
            } while (uVar3 < (*(uint *)(gen_frame + 0x1203c)));
          }
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) == 0) {
            return 1;
          }
          while( true ) {
            uVar8 = F_00b14060((*(undefined * PTR32 *)(gen_frame + 0x12028)),7);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))) = uVar8;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))) == 0) break;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))) + 4))) =
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4)));
            F_006251c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4))),((undefined1 *)(gen_frame + 0x12000)));
            F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))),((undefined1 *)(gen_frame + 0x12000)));
            uVar3 = uVar3 + 1;
            if ((*(uint *)(gen_frame + 0x1203c)) <= uVar3) {
              return 1;
            }
          }
        }
      }
LAB_00694d30: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00694e50 */
uint F_00694e50(unsigned int gen_a0)
{
  GEN_ENTER(0x694e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x240];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined * _Dst;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x23c);
  (*(uint *)(gen_frame + 0x238)) = uVar3;
  piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
  LOCK();
  iVar1 = *piVar4;
  *piVar4 = *piVar4;
  UNLOCK();
  if (iVar1 != 2) {
LAB_00694faa: ;
    F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
    return (uint)piVar4;
  }
  piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
  LOCK();
  iVar1 = *piVar4;
  *piVar4 = *piVar4;
  UNLOCK();
  if (7 < iVar1) {
    *(undefined1 *)((int)this + 0x65) = 4;
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x23c));
    return (uint)piVar4;
  }
  uVar5 = F_005003b0(*(undefined * PTR32 *)((int)this + 0x70));
  uVar3 = F_005003c0(*(undefined * PTR32 *)((int)this + 0x70));
  if (0x1000000 < uVar5) {
    *(uint *)((int)this + 0x78) = uVar3;
    if (uVar3 == 0) {
      *(undefined1 *)((int)this + 0x65) = 3;
      F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
      return 0;
    }
    _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),uVar3 * 4,0x10)));
    *(undefined * PTR32 *)((int)this + 0x74) = _Dst;
    uVar3 = 0;
    if (_Dst != (undefined *)0x0) {
      F_00c48350(_Dst,0,*(int *)((int)this + 0x78) * 4);
      uVar2 = *(undefined4 *)((int)this + 0x1a4);
      iVar1 = *(int *)((int)this + 0x70);
      (*(undefined4 *)(gen_frame + 0x34)) = 0x6d646c;
      piVar4 = (int *)F_004d4610(((undefined1 *)(gen_frame + 0xc)),uVar2,0);
      uVar3 = 0;
      (*(undefined1 *)(gen_frame + 0x29)) = 0;
      if (*(int *)((int)this + 0x78) != 0) {
        do {
          F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x200,"%s/%04d.mdl",(int)this + 0xa1,uVar3);
          piVar4 = (int *)F_00513d20(iVar1 + 4,&(*(undefined4 *)(gen_frame + 0x34)),((undefined1 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0xc)),0,0);
          if (piVar4 == (int *)0x0) {
            *(undefined1 *)((int)this + 0x65) = 4;
            F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
            return 0;
          }
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar3 * 4))) = piVar4;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)((int)this + 0x78));
      }
      *(undefined1 *)((int)this + 0xa0) = 2;
      goto LAB_00694faa;
    }
  }
  *(undefined1 *)((int)this + 0x65) = 4;
  F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c));
  return uVar3;
}

/* ref: FUN_00694fd0 */
uint F_00694fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x694fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  
  uVar2 = *(uint *)((int)this + 0x78);
  uVar6 = 0;
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + uVar4 * 4)));
      piVar5 = (int *)(iVar3 + 0x8c);
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5;
      UNLOCK();
      if (7 < iVar1) {
        *(undefined1 *)((int)this + 0x65) = 4;
        return (uint)this;
      }
      piVar5 = (int *)(iVar3 + 0x88);
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5;
      UNLOCK();
      uVar4 = uVar4 + 1;
      uVar6 = uVar6 + (iVar1 == 2);
    } while (uVar4 < uVar2);
  }
  if (uVar2 == uVar6) {
    *(undefined1 *)((int)this + 0x65) = 3;
  }
  return uVar4;
}

/* ref: FUN_00695060 */
unsigned int F_00695060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x695060u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_ecx;
  byte bVar5;
  uint uVar6;
  float * in_ecx_00;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  if ((param_2 == 0x1e) && ((char)*param_3 != '\0')) {
    (*(float *)(gen_frame + 0x4c)) = *param_4;
    (*(float *)(gen_frame + 0x48)) = *param_5;
    fVar7 = (float10)*param_4;
    fVar8 = (float10)*param_5;
    fVar1 = (float)(fVar7 - fVar8);
    (*(float *)(gen_frame + 0x30)) = fVar1;
    fVar2 = param_4[1];
    (*(float *)(gen_frame + 0x48)) = fVar2;
    (*(float *)(gen_frame + 0x0)) = fVar1;
    (*(float *)(gen_frame + 0x4c)) = param_5[1];
    fVar9 = (float10)fVar2;
    fVar10 = (float10)param_5[1];
    fVar1 = (float)(fVar9 - fVar10);
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x48)) = param_4[2];
    (*(float *)(gen_frame + 0x4)) = fVar1;
    (*(float *)(gen_frame + 0x4c)) = param_5[2];
    iVar4 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    fVar11 = (float10)param_4[2];
    in_ecx = *(int *)(REFG(int, 0x1371284) + 0x14);
    fVar12 = (float10)param_5[2];
    fVar1 = (float)(fVar11 - fVar12);
    (*(float *)(gen_frame + 0x38)) = fVar1;
    (*(float *)(gen_frame + 0x8)) = fVar1;
    fVar1 = (float)(fVar8 + fVar7);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)(fVar10 + fVar9);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)(fVar12 + fVar11);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x10)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = fVar3;
    if (in_ecx != 0) {
      F_006629e0(in_ecx,&(*(float *)(gen_frame + 0x20)));
      in_ecx_00 = (float *)(iVar4 + 0xc0);
      uVar6 = 0;
      do {
        fVar1 = ((float)GEN_TOF(((float10)in_ecx_00[2] * (float10)(*(float *)(gen_frame + 0x28)) +
                       ((float10)*in_ecx_00 * (float10)(*(float *)(gen_frame + 0x20)) +
                       (float10)in_ecx_00[1] * (float10)(*(float *)(gen_frame + 0x24))))));
        (*(float *)(gen_frame + 0x48)) = fVar1;
        if (((float10)0 < (float10)fVar1) &&
           (bVar5 = F_006aedc0(in_ecx_00,&(*(float *)(gen_frame + 0x0))), bVar5 == 0)) {
          *(char *)param_3 = '\0';
          break;
        }
        uVar6 = uVar6 + 1;
        in_ecx_00 = in_ecx_00 + 4;
      } while (uVar6 < 6);
    }
  }
  if ((*param_3 != 0) && (uVar6 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1), (char)uVar6 != '\0')) {
    F_0062e380(param_1,param_2,*param_3);
  }
  return 0;
}

/* ref: FUN_006951e0 */
uint F_006951e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x6951e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  ushort uVar1;
  short sVar2;
  undefined * this;
  float10 fVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  fVar3 = (float10)0;
  uVar1 = *(ushort *)(param_1 + 2);
  (*(int * PTR32 *)(gen_frame + 0x7c)) = param_1;
  sVar2 = *(short *)((int)param_1 + 10);
  iVar7 = param_1[3];
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(undefined4, 0x1302e00);
  (*(undefined4 *)(gen_frame + 0x54)) = REFG(undefined4, 0x1302e04);
  (*(undefined4 *)(gen_frame + 0x58)) = REFG(undefined4, 0x1302e08);
  (*(undefined4 *)(gen_frame + 0x5c)) = REFG(undefined4, 0x1302e0c);
  (*(float *)(gen_frame + 0x40)) = (float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1));
  (*(undefined4 *)(gen_frame + 0x60)) = REFG(float, 0x1302e10);
  (*(undefined4 *)(gen_frame + 0x64)) = REFG(float, 0x1302e14);
  (*(undefined4 *)(gen_frame + 0x68)) = REFG(float, 0x1302e18);
  (*(float *)(gen_frame + 0x44)) = 0.0;
  (*(float *)(gen_frame + 0x48)) = (float)(int)((int)(short)iVar7 * (uint)uVar1 + (uint)(uVar1 >> 1));
  iVar7 = *(int *)(param_2 * 0x358 + 0x2a4 + REFG(int, 0x137127c));
  (*(float *)(gen_frame + 0xf0)) = (float)fVar3;
  (*(float *)(gen_frame + 0xf4)) = (float)fVar3;
  (*(float *)(gen_frame + 0xf8)) = (float)fVar3;
  (*(undefined4 *)(gen_frame + 0xc0)) = REFG(float, 0x1302e10);
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = REFG(float, 0x1302e14);
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(undefined4 *)(gen_frame + 0xe8)) = REFG(float, 0x1302e18);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0xc0)),(uint)&(*(undefined4 *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar5 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x80)),(uint)&(*(undefined4 *)(gen_frame + 0xc0)),iVar7 + 0x10);
  puVar8 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar7 = 0x10; piVar4 = (*(int * PTR32 *)(gen_frame + 0x7c)), iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  this = (undefined *)(*(int * PTR32 *)(gen_frame + 0x7c))[5];
  puVar5 = (undefined4 *)F_004d9920(this,0,0x40,2);
  *puVar5 = ((undefined4 *)(gen_frame + 0x0))[0];
  puVar5[1] = (*(undefined4 *)(gen_frame + 0x10));
  puVar5[2] = (*(undefined4 *)(gen_frame + 0x20));
  puVar5[3] = (*(undefined4 *)(gen_frame + 0x30));
  puVar5[4] = ((undefined4 *)(gen_frame + 0x0))[1];
  puVar5[5] = (*(undefined4 *)(gen_frame + 0x14));
  puVar5[6] = (*(undefined4 *)(gen_frame + 0x24));
  puVar5[7] = (*(undefined4 *)(gen_frame + 0x34));
  puVar5[8] = ((undefined4 *)(gen_frame + 0x0))[2];
  puVar5[9] = (*(undefined4 *)(gen_frame + 0x18));
  puVar5[10] = (*(undefined4 *)(gen_frame + 0x28));
  puVar5[0xb] = (*(undefined4 *)(gen_frame + 0x38));
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = GEN_FLT_TO(puVar5[0xf], REFG(float, 0x1087f04));
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4,param_3,(undefined4)gen_fl2bits(param_4),0xff,0,0);
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return uVar6;
}

/* ref: FUN_00695460 */
unsigned int F_00695460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x695460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00657e40((undefined *)(REFG(int, 0x137127c) + 0xecd0),param_1,param_3);
  return 0;
}

/* ref: FUN_00695480 */
uint F_00695480(unsigned int gen_a0)
{
  GEN_ENTER(0x695480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2db8));
  *(undefined1 *)((int)this + 0x60) = 0;
  F_006946f0((undefined *)((int)this + 0x70));
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  return (uint)this;
}

/* ref: FUN_006954c0 */
byte F_006954c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6954c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  F_0068bd00(REFG(void * PTR32, 0x1371294),this);
  pvVar2 = REFG(void * PTR32, 0x1371294);
  if ((*(byte *)((int)this + 0x24) & 1) != 0) {
    iVar1 = *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1371294) + 0x28)));
    uVar3 = *(uint *)((int)this + 0x24) & 3 | (uint)REFG(void * PTR32, 0x1371294);
    *(int *)((int)this + 0x28) = iVar1;
    *(uint *)((int)this + 0x24) = uVar3;
    *(undefined * PTR32 *)((int)pvVar2 + 0x28) = this;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 3 | (uint)this;
    }
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffe;
  }
  *(byte *)((int)this + 0xd4) = *(byte *)((int)this + 0xd4) & 0xfb;
  *(uint *)((int)this + 0x94) = *(uint *)((int)this + 0x94) | 3;
  *(undefined1 *)((int)this + 0xd5) = 1;
  F_0068bd00(this,(int)this + 0x70);
  return 1;
}

/* ref: Client::Graphics::Scene::BGManager::vf1 */
uint F_00695530(unsigned int gen_a0)
{
  GEN_ENTER(0x695530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0068b090(this);
  uVar1 = F_006905b0((undefined *)this);
  return uVar1;
}

/* ref: Client::Graphics::Scene::BGManager::vf4 */
uint F_00695540(unsigned int gen_a0)
{
  GEN_ENTER(0x695540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 0x10))))(this + 0x70);
  iVar2 = *(int *)(this + 0x228);
  if (iVar2 != 0) {
    iVar3 = 0;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x22c) + iVar3))) + 0x10))))(*(int *)(this + 0x22c) + iVar3)
      ;
      iVar3 = iVar3 + 0x80;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar1 = (byte)this[0x60] - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_0068ef60(this);
    return uVar1;
  case 1: ;
    uVar1 = F_0068f090(this);
    return uVar1;
  case 2: ;
    this[0x60] = (undefined1)0x4;
    return uVar1;
  case 3: ;
    this[0x60] = (undefined1)0x5;
  }
  return uVar1;
}

/* ref: FUN_006955c0 */
uint F_006955c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6955c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 1;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 10;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined2 *)((int)this + 0x80) = 0xffff;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x82) = 0;
  *(undefined2 *)((int)this + 0x84) = 0;
  *(undefined2 *)((int)this + 0x86) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2dd4));
  *(undefined4 *)((int)this + 0x88) = 0xff000000;
  *(undefined2 *)((int)this + 0x8c) = 0x1ff;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(byte *)((int)this + 0x95) = *(byte *)((int)this + 0x95) & 0xf3 | 3;
  *(undefined1 *)((int)this + 0x94) = 0xfe;
  return (uint)this;
}

/* ref: FUN_00695660 */
byte F_00695660(unsigned int gen_a0)
{
  GEN_ENTER(0x695660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) & 0xfb;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 3;
  *(undefined1 *)(in_ecx + 0x65) = 1;
  return 1;
}

/* ref: Client::Graphics::Scene::BGObject::vf1 */
uint F_00695670(unsigned int gen_a0)
{
  GEN_ENTER(0x695670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if ((*(int *)(this + 0x60) != 0) &&
     ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8))) + 4))) + 0x23 +
                *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)))))) & 4) != 0)) {
    F_00b7f460(REFG(void * PTR32, 0x13712a4),*(int *)(this + 0x60));
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  F_006905b0((undefined *)this);
  if (*(int *)(this + 0x70) != 0) {
    F_0050c620(*(int *)(this + 0x70),0,0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (((byte)this[0x95] & 8) == 0) {
    piVar3 = *(int * PTR32 *)(this + 0x78);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      *(undefined4 *)(this + 0x78) = 0;
    }
  }
  else {
    piVar3 = *(int * PTR32 *)(this + 0x78);
    if (piVar3 != (int *)0x0) {
      for (uVar2 = *(uint *)(this + 0x74); uVar2 != 0; uVar2 = uVar2 >> 4) {
        piVar1 = (int *)*piVar3;
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
          *piVar3 = 0;
        }
        piVar3 = piVar3 + 1;
      }
      if (*(int *)(this + 0x78) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x78));
        *(undefined4 *)(this + 0x78) = 0;
      }
    }
  }
  if (*(ushort *)(this + 0x80) != 0xffff) {
    F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),(uint)*(ushort *)(this + 0x80));
    *(undefined2 *)(this + 0x80) = 0xffff;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x7c) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::BGObject::vf7 */
uint F_00695790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x695790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  iVar4 = *(int *)(this + 0x70);
  if (((char)param_1 == '\0') && (*(char *)(iVar4 + 299) == '\0')) {
    *(undefined1 *)(iVar4 + 299) = 1;
  }
  if (*(int *)(this + 0x7c) != 0) {
    fVar7 = (float10)0;
    uVar1 = *(undefined4 *)(this + 0x54);
    (*(float *)(gen_frame + 0x80)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(this + 0x50);
    (*(float *)(gen_frame + 0x84)) = (float)fVar7;
    (*(float *)(gen_frame + 0x88)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(this + 0x58);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x50)),(uint)(this + 0x40));
    (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x80)))));
    (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x84)))));
    (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x88)))));
    (*(uint *)(gen_frame + 0x4)) = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 0xa8) + 4))) + 0x20 + *(int *)(iVar4 + 0xa8))));
    uVar5 = 0;
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      (*(int *)(gen_frame + 0x0)) = 0;
      (*(int *)(gen_frame + 0x8)) = 0;
      do {
        iVar6 = *(int *)(iVar4 + 0xb4) + (*(int *)(gen_frame + 0x8));
        fVar2 = *(float *)(iVar6 + 0x18);
        fVar3 = *(float *)(iVar6 + 0x1c);
        fVar7 = ((float10)GEN_TOD(fsin((float10)*(float *)(iVar6 + 0x14))));
        fVar8 = ((float10)GEN_TOD(fcos((float10)*(float *)(iVar6 + 0x14))));
        (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
        (*(float *)(gen_frame + 0x24)) = (float)fVar8;
        (*(float *)(gen_frame + 0x28)) = (float)fVar7;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(-(float10)(float)fVar7));
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(float *)(gen_frame + 0x38)) = (float)fVar8;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        F_0065ed60(&(*(undefined4 *)(gen_frame + 0x10)),fVar2);
        F_0065ee80(&(*(undefined4 *)(gen_frame + 0x10)),fVar3);
        (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar6 + 8);
        (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar6 + 0xc);
        (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(iVar6 + 0x10);
        uVar5 = F_004ef350(*(int *)(this + 0x7c) + (*(int *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x10)),(uint)&(*(undefined4 *)(gen_frame + 0x50)));
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x20;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x40;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
      } while ((*(uint *)(gen_frame + 0x4)) != 0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return uVar5;
}

/* ref: Client::Graphics::Scene::BGObject::vf13 */
uint F_006959f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6959f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar8 = (float10)0;
  fVar1 = *(float *)(this + 0x30);
  uVar2 = *(undefined4 *)(this + 0x54);
  uVar3 = *(undefined4 *)(this + 0x58);
  uVar6 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x70) + 0xf0)));
  (*(float *)(gen_frame + 0x50)) = (float)fVar8;
  uVar7 = *(undefined4 *)(this + 0x44);
  (*(float *)(gen_frame + 0x54)) = (float)fVar8;
  (*(float *)(gen_frame + 0x58)) = (float)fVar8;
  fVar4 = *(float *)(this + 0x34);
  fVar5 = *(float *)(this + 0x38);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x40);
  (*(undefined4 *)(gen_frame + 0x4)) = uVar7;
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x48);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + 0x4c);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = uVar3;
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x20)),(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x50)) + (float10)fVar1);
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x54)) + (float10)fVar4);
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x58)) + (float10)fVar5);
  F_005fec10(param_1,&(*(undefined4 *)(gen_frame + 0x20)),uVar6);
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)param_1;
}

/* ref: FUN_00695b00 */
byte F_00695b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x695b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  code * pcVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6d646c;
  uVar3 = F_00513d20(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2,0,0,0);
  if (uVar3 != 0) {
    *(uint *)((int)this + 0x70) = uVar3;
    piVar4 = (int *)(uVar3 + 0x88);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 != 2) {
      *(undefined1 *)((int)this + 0x65) = 2;
      uVar3 = REFG(undefined4, 0x1371294);
      if ((*(byte *)((int)this + 0x24) & 1) != 0) {
        iVar1 = *(int *)(REFG(undefined4, 0x1371294) + 0x28);
        uVar5 = *(uint *)((int)this + 0x24) & 3 | REFG(undefined4, 0x1371294);
        *(int *)((int)this + 0x28) = iVar1;
        *(uint *)((int)this + 0x24) = uVar5;
        *(undefined * PTR32 *)(uVar3 + 0x28) = this;
        if (iVar1 != 0) {
          *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 3 | (uint)this;
        }
        *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffe;
      }
      return 1;
    }
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x28);
      *(undefined1 *)((int)this + 0x65) = 3;
      (*pcVar2)(this);
      *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 1;
      return 1;
    }
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return 0;
}

/* ref: FUN_00695bc0 */
byte F_00695bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x695bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  
  F_004ff310(&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  bVar1 = F_00695b00((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return bVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf18 */
uint F_00695bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x695bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  undefined4 uVar1;
  float10 fVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x19c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1a0);
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0x180)) = (float)fVar2;
  (*(float *)(gen_frame + 0x184)) = (float)fVar2;
  (*(float *)(gen_frame + 0x188)) = (float)fVar2;
  uVar1 = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x150)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x48)) = param_2;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x160)) = 0;
  (*(undefined4 *)(gen_frame + 0x168)) = 0;
  (*(undefined4 *)(gen_frame + 0x170)) = 0;
  (*(undefined4 *)(gen_frame + 0x174)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = param_1;
  (*(undefined4 *)(gen_frame + 0x164)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x178)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x150)),(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x180)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x180)))));
  (*(float *)(gen_frame + 0x184)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x184)))));
  (*(float *)(gen_frame + 0x188)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x188)))));
  puVar3 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x150)));
  puVar5 = ((undefined4 *)(gen_frame + 0x110));
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x40))((*(undefined * PTR32 *)(gen_frame + 0x4c)),((undefined1 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x48)));
  puVar5 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xd0)),uVar4,(uint)((undefined4 *)(gen_frame + 0x110)));
  puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x44));
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *puVar3 = (*(undefined4 *)(gen_frame + 0x30));
  puVar3[1] = (*(undefined4 *)(gen_frame + 0x34));
  puVar3[2] = (*(undefined4 *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0x19c)) ^ (uint)(uint)(gen_frame + 0x1a0));
  return (uint)puVar3;
}

/* ref: FUN_00695d50 */
uint F_00695d50(unsigned int gen_a0)
{
  GEN_ENTER(0x695d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  if (iVar1 == 2) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if (7 < iVar1) {
      *(undefined1 *)((int)this + 0x65) = 4;
      return (uint)piVar3;
    }
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined1 *)((int)this + 0x65) = 3;
    piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 1;
  }
  return (uint)piVar3;
}

/* ref: Client::Graphics::Scene::BGObject::vf6 */
uint F_00695da0(unsigned int gen_a0)
{
  GEN_ENTER(0x695da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  fVar7 = (float10)0;
  (*(float *)(gen_frame + 0xd0)) = (float)fVar7;
  (*(float *)(gen_frame + 0xd4)) = (float)fVar7;
  (*(float *)(gen_frame + 0xd8)) = (float)fVar7;
  uVar4 = *(undefined4 *)(this + 0x48);
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x58);
  (*(float *)(gen_frame + 0x20)) = *(float *)(this + 0x30);
  (*(float *)(gen_frame + 0x24)) = *(float *)(this + 0x34);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this + 0x44);
  iVar5 = *(int *)(this + 0x70);
  (*(float *)(gen_frame + 0x28)) = *(float *)(this + 0x38);
  uVar3 = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(this + 0x40);
  uVar6 = *(undefined4 *)(this + 0x4c);
  (*(undefined4 *)(gen_frame + 0x40)) = uVar3;
  (*(undefined4 *)(gen_frame + 0xa0)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x38)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x44)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x48)) = uVar2;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = uVar2;
  F_004efe70(&(*(undefined4 *)(gen_frame + 0xa0)),(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0xd0)) = (float)((float10)(*(float *)(gen_frame + 0xd0)) + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0xd4)) + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0xd8)) + (float10)(*(float *)(gen_frame + 0x28)));
  F_005fec10(((undefined1 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0xa0)),*(undefined4 *)(iVar5 + 0xf0));
  uVar8 = F_0068c610(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x50)));
  if (*(undefined * PTR32 *)(this + 0x60) != (undefined *)0x0) {
    uVar8 = F_00b81ef0(*(undefined * PTR32 *)(this + 0x60),((undefined1 *)(gen_frame + 0x0)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return uVar8;
}

/* ref: FUN_00695f00 */
byte F_00695f00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x695f00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  undefined * this;
  float fVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (*(float *)&gen_args[1]);
  fVar3 = (float10)(*(float *)&gen_args[1]);
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70);
  if ((*(char *)(REFG(int, 0x1371278) + 0x13) != '\0') && (*(ushort *)((*(int *)&gen_args[0]) + 0x88) != 0)) {
    fVar4 = (float10)*(ushort *)((*(int *)&gen_args[0]) + 0x88);
    (*(float *)&gen_args[1]) = (float)(fVar4 * fVar4);
    if ((float10)(*(float *)&gen_args[1]) < fVar3) {
      return 0xfe;
    }
  }
  (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),*(char *)(REFG(int, 0x1371278) + 0x12)));
  if (*(char *)(REFG(int, 0x1371278) + 0x12) == -1) {
    (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),*(char *)((*(int *)&gen_args[0]) + 0x66)));
    if (*(char *)((*(int *)&gen_args[0]) + 0x66) == -1) {
      bVar2 = F_004ffb80(this,fVar1);
      return bVar2;
    }
    bVar2 = F_004ffbd0(this,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
    return bVar2;
  }
  bVar2 = F_004ffbd0(this,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  return bVar2;
}

/* ref: FUN_00695f90 */
uint F_00695f90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x695f90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  undefined * this;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined2 extraout_var_05 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined * this_00;
  
  uVar2 = *(ushort *)(REFG(int, 0x137127c) + 0x1061c);
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70);
  this_00 = (undefined *)(REFG(int, 0x137127c) + 0x1061c);
  if ((*(ushort *)((*(int *)&gen_args[0]) + 0x80) != 0xffff) &&
     (iVar1 = REFG(int, 0x137127c) + 0x10640 + (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80) * 0x18, iVar1 != 0)) {
    if (*(char *)(iVar1 + 2) == '\x01') {
      (*(undefined4 *)(gen_frame + 0x3)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3)), 1, 3),*(undefined1 *)(iVar1 + 3));
      bVar3 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x3)));
      uVar6 = CONCAT31(extraout_var,bVar3);
      if (bVar3 == 0) {
        bVar3 = F_00695f00((*(int *)&gen_args[0]),(*(float *)&gen_args[1]));
        *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
        uVar6 = F_00621a50(this_00,(uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80));
        *(undefined2 *)((*(int *)&gen_args[0]) + 0x80) = 0xffff;
        *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
        return uVar6;
      }
    }
    else if (*(char *)(iVar1 + 2) == '\x02') {
      (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),*(undefined1 *)(iVar1 + 3)));
      bVar3 = F_004ffb50(this,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
      uVar6 = CONCAT31(extraout_var_00,bVar3);
      if (bVar3 == 0) {
        *(undefined1 *)((*(int *)&gen_args[0]) + 0x94) = 0xfe;
        uVar6 = F_00621a50(this_00,(uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80));
        *(undefined2 *)((*(int *)&gen_args[0]) + 0x80) = 0xffff;
        *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
        return uVar6;
      }
    }
    else {
      (*(undefined4 *)(gen_frame + 0x3)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3)), 1, 3),*(undefined1 *)(iVar1 + 3));
      (*(undefined4 *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x7)), 1, 3),*(undefined1 *)(iVar1 + 4));
      bVar3 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x3)));
      bVar4 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x7)));
      uVar6 = CONCAT31(extraout_var_01,bVar4);
      if ((bVar3 == 0) || (bVar4 == 0)) {
        bVar3 = F_00695f00((*(int *)&gen_args[0]),(*(float *)&gen_args[1]));
        *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
        F_00621a50(this_00,(uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80));
        uVar6 = 0xffff;
        *(undefined2 *)((*(int *)&gen_args[0]) + 0x80) = 0xffff;
      }
    }
    *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
    return uVar6;
  }
  if ((uint)uVar2 != *(ushort *)((*(int *)&gen_args[0]) + 0x86) + 1) {
    bVar3 = F_00695f00((*(int *)&gen_args[0]),(*(float *)&gen_args[1]));
    *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
    *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
    return CONCAT22(extraout_var_05,uVar2);
  }
  bVar4 = F_00695f00((*(int *)&gen_args[0]),(*(float *)&gen_args[1]));
  uVar6 = CONCAT31(extraout_var_02,bVar4);
  bVar3 = *(byte *)((*(int *)&gen_args[0]) + 0x94);
  (*(undefined4 *)(gen_frame + 0x3)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3)), 1, 3),bVar4);
  (*(undefined4 *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x7)), 1, 3),bVar3);
  *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar4;
  if (bVar3 != bVar4) {
    if (bVar3 == 0xfe) {
      uVar6 = F_00621970(this_00,1,1,(*(int *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x3)),0xfe);
      *(short *)((*(int *)&gen_args[0]) + 0x80) = (short)uVar6;
      if ((short)uVar6 != -1) goto LAB_00696236;
    }
    else {
      if (bVar4 != 0xfe) {
        bVar4 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x3)));
        bVar5 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x7)));
        uVar6 = CONCAT31(extraout_var_04,bVar5);
        if ((bVar4 != 0) && (bVar5 != 0)) {
          uVar6 = F_00621970(this_00,1,0,(*(int *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x3)),(*(undefined4 *)(gen_frame + 0x7)));
          *(short *)((*(int *)&gen_args[0]) + 0x80) = (short)uVar6;
          if ((short)uVar6 == -1) {
            *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
          }
        }
        goto LAB_00696236;
      }
      bVar4 = F_004ffb50(this,(*(undefined4 *)(gen_frame + 0x7)));
      uVar6 = CONCAT31(extraout_var_03,bVar4);
      if (bVar4 != 0) {
        uVar6 = F_00621970(this_00,1,2,(*(int *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x7)),(*(undefined4 *)(gen_frame + 0x7)));
        *(short *)((*(int *)&gen_args[0]) + 0x80) = (short)uVar6;
        *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
        *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
        return CONCAT22((short)(uVar6 >> 0x10),uVar2);
      }
    }
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x94) = 0xfe;
    *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
    return CONCAT22((short)(uVar6 >> 0x10),uVar2);
  }
LAB_00696236: ;
  *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
  return CONCAT22((short)(uVar6 >> 0x10),uVar2);
}

/* ref: FUN_00696250 */
uint F_00696250(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x696250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = F_00695f00(param_1,param_2);
  uVar3 = (uint)*(ushort *)(param_1 + 0x80);
  *(byte *)(param_1 + 0x94) = bVar1;
  uVar2 = uVar3;
  if ((*(ushort *)(param_1 + 0x80) != 0xffff) &&
     (uVar2 = 0, REFG(int, 0x137127c) + 0x10640 + uVar3 * 0x18 != 0)) {
    uVar2 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),uVar3);
    *(undefined2 *)(param_1 + 0x80) = 0xffff;
  }
  return uVar2;
}

/* ref: FUN_006962b0 */
byte F_006962b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6962b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float * pfVar7;
  uint uVar8;
  float * pfVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  if (*(int *)(REFG(int, 0x1371284) + 0x14) != 0) {
    iVar4 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1371284) + 0x14) + 0x10)));
    iVar5 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1087f04));
    pfVar7 = (float *)F_004f4130(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),iVar4 + 0x10);
    (*(float *)(gen_frame + 0x30)) = *pfVar7;
    (*(float *)(gen_frame + 0x34)) = pfVar7[1];
    iVar4 = iVar5 + 0xc0;
    (*(float *)(gen_frame + 0x38)) = pfVar7[2];
    (*(int *)(gen_frame + 0x50)) = iVar4;
    uVar10 = 0;
    uVar8 = 0;
    pfVar9 = (float *)(iVar5 + 200);
    do {
      (*(float *)(gen_frame + 0x58)) = pfVar9[-1];
      (*(float *)(gen_frame + 0x5c)) = pfVar9[-2];
      (*(float *)(gen_frame + 0x54)) = *pfVar9;
      fVar11 = (float10)pfVar9[-2];
      fVar12 = (float10)pfVar9[-1];
      fVar13 = (float10)*pfVar9;
      fVar1 = ((float)GEN_TOF((fVar13 * (float10)pfVar7[2] +
                     (fVar12 * (float10)pfVar7[1] + fVar11 * (float10)*pfVar7))));
      (*(float *)(gen_frame + 0x54)) = fVar1;
      if (!((float10)fVar1 <= (float10)0)) {
        fVar1 = ((float)GEN_TOF((fVar13 * (float10)param_1[2] +
                       (fVar12 * (float10)param_1[1] + (float10)*param_1 * fVar11))));
        (*(float *)(gen_frame + 0x54)) = fVar1;
        fVar11 = (float10)fVar1 - (float10)pfVar9[1];
        (*(float *)(gen_frame + 0x54)) = param_1[3];
        fVar12 = (float10)param_1[3];
        if (!(fVar11 <= fVar12)) {
          return 0;
        }
        if (!(fVar11 <= -fVar12)) {
          uVar10 = uVar10 | 1 << ((byte)uVar8 & 0x1f);
        }
      }
      uVar8 = uVar8 + 1;
      pfVar9 = pfVar9 + 4;
    } while (uVar8 < 6);
    if (uVar10 != 0) {
      (*(float *)(gen_frame + 0x54)) = *param_1;
      (*(float *)(gen_frame + 0x58)) = *param_2;
      fVar11 = (float10)*param_1;
      fVar12 = (float10)*param_2;
      fVar1 = (float)(fVar11 - fVar12);
      (*(float *)(gen_frame + 0x30)) = fVar1;
      fVar2 = param_1[1];
      (*(float *)(gen_frame + 0x54)) = fVar2;
      (*(float *)(gen_frame + 0x0)) = fVar1;
      (*(float *)(gen_frame + 0x58)) = param_2[1];
      fVar13 = (float10)fVar2;
      fVar14 = (float10)param_2[1];
      fVar1 = (float)(fVar13 - fVar14);
      (*(float *)(gen_frame + 0x34)) = fVar1;
      (*(float *)(gen_frame + 0x54)) = param_1[2];
      (*(float *)(gen_frame + 0x4)) = fVar1;
      (*(float *)(gen_frame + 0x58)) = param_2[2];
      fVar15 = (float10)param_1[2];
      fVar16 = (float10)param_2[2];
      fVar1 = (float)(fVar15 - fVar16);
      (*(float *)(gen_frame + 0x38)) = fVar1;
      (*(float *)(gen_frame + 0x8)) = fVar1;
      fVar1 = (float)(fVar12 + fVar11);
      (*(float *)(gen_frame + 0x20)) = fVar1;
      fVar2 = (float)(fVar14 + fVar13);
      (*(float *)(gen_frame + 0x24)) = fVar2;
      fVar3 = (float)(fVar16 + fVar15);
      (*(float *)(gen_frame + 0x28)) = fVar3;
      (*(float *)(gen_frame + 0x10)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar2;
      (*(float *)(gen_frame + 0x18)) = fVar3;
      bVar6 = F_0068b210(iVar4,uVar10,&(*(float *)(gen_frame + 0x0)));
      return bVar6;
    }
  }
  return 1;
}

/* ref: FUN_006964c0 */
uint F_006964c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6964c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  piVar3 = (int *)F_006026a0(this,param_1);
  if (param_1 == 1) {
    if (param_2 == 0x1e) {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa8)));
      bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 4) + iVar2 + 0x1f)));
      if (((bVar1 >> 1 | bVar1) & 0x20) == 0 && (bVar1 >> 2 & 0x20) == 0) {
        param_3 = param_3 & 0xfffffcff;
      }
      uVar4 = 0xffffff00;
      if (*(char *)((int)this + 0x8b) == '\0') {
        param_3 = param_3 & 0xffffff00;
      }
      if ((char)param_3 != '\0') {
        if ((*(byte *)((int)this + 0x95) & 4) != 0) {
          uVar4 = 0xffffffff;
        }
        param_3 = param_3 & uVar4;
      }
    }
    else if ((param_2 < 0x18) &&
            (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa8))),
            (~(*((byte *)GEN_TOP((*(int *)(iVar2 + 4) + 0x1f + iVar2))) >> 1) &
             *(byte *)((int)this + 0x95) >> 1 & 1) == 0)) {
      uVar4 = 0;
      goto LAB_006965cc;
    }
    uVar4 = param_3;
    if ((param_3 != 0) && (uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3), (char)uVar5 != '\0')) {
      iVar2 = param_2 * 0x358 + 4 + REFG(int, 0x137127c);
      F_0054fa20(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x30);
      ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,iVar2,*(undefined4 *)((int)this + 0x70),param_3,((undefined1 *)(gen_frame + 0x0)))
      ;
    }
  }
  else if ((param_1 == 2) || (uVar4 = param_3, param_1 == 3)) {
    if (param_2 < 0x18) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_3 & 0x3000000;
    }
  }
LAB_006965cc: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar4;
}

/* ref: FUN_00696740 */
uint F_00696740(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x696740u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined * this;
  uint uVar1;
  int * piVar2;
  float fVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  float10 extraout_ST0;
  double dVar8;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(int *)(gen_frame + 0x48)) = param_2;
  (*(int * PTR32 *)(gen_frame + 0x44)) = param_1;
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0x6c))(param_1);
  uVar1 = (uint)(ulonglong)gen_d2bits(dVar8); dVar8 = extraout_ST0;
  (*(float *)(gen_frame + 0x4c)) = (float)((float10)1 - extraout_ST0);
  if ((!((float10)(float)((float10)1 - extraout_ST0) < (float10)REFG(float, 0x10905c4))) &&
     (uVar1 = F_00695f90(param_1,param_4), (char)param_1[0x25] != -2)) {
    piVar2 = (int *)F_006026a0(param_1,1);
    if (piVar2 != (int *)0x0) {
      fVar3 = param_3;
      if ((*(byte *)((int)param_1 + 0x95) & 8) != 0) {
        fVar3 = gen_bits2f(F_006964c0(param_1,1,(*(int *)(gen_frame + 0x48)),(undefined4)gen_fl2bits(param_3)));
      }
      if (fVar3 != 0.0) {
        if (*(ushort *)(param_1 + 0x20) == 0xffff) {
          iVar6 = param_1[0x23];
          (*(undefined1 *)(gen_frame + 0xdc)) = *(undefined1 *)((int)param_1 + 0x8b);
          (*(undefined1 *)(gen_frame + 0xde)) = *(undefined1 *)((int)param_1 + 0x8d);
          (*(undefined2 *)(gen_frame + 0xe2)) = (short)param_1[0x21];
          (*(undefined1 *)(gen_frame + 0xdd)) = (char)iVar6;
          (*(undefined2 *)(gen_frame + 0xe0)) = *(undefined2 *)((int)param_1 + 0x82);
          (*(int *)(gen_frame + 0xe4)) = param_1[0x24];
          (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x4c));
          ((code *)*(gen_code32 *)(*piVar2 + 0x14))
                    (piVar2,(undefined4)gen_fl2bits(fVar3),(undefined4)gen_fl2bits(param_4),
                     (uint)*(byte *)(param_1 + 0x25),param_1 + 0xc,&(*(undefined1 *)(gen_frame + 0xdc)));
        }
        else {
          F_00696610(param_1,(uint)*(ushort *)(param_1 + 0x20),(undefined4)gen_fl2bits(fVar3),
                       param_4);
        }
      }
    }
    piVar4 = (int *)F_006026a0(param_1,2);
    (*(int * PTR32 *)(gen_frame + 0x40)) = piVar4;
    piVar2 = param_1;
    if (piVar4 != (int *)0x0) {
      if ((*(byte *)((int)param_1 + 0x95) & 8) == 0) {
        (*(float *)(gen_frame + 0x4c)) = param_3;
      }
      else {
        fVar3 = gen_bits2f(F_006964c0(param_1,2,(*(int *)(gen_frame + 0x48)),(undefined4)gen_fl2bits(param_3)));
        (*(float *)(gen_frame + 0x4c)) = fVar3;
      }
      if ((*(float *)(gen_frame + 0x4c)) != 0.0) {
        iVar6 = *(int *)((*(int *)(gen_frame + 0x48)) * 0x358 + 0x2a4 + REFG(int, 0x137127c));
        F_0054fa20(((undefined1 *)(gen_frame + 0x90)),param_1 + 0xc);
        puVar5 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x50)),(uint)((undefined1 *)(gen_frame + 0x90)),iVar6 + 0x10);
        puVar7 = ((undefined4 *)(gen_frame + 0x0));
        for (iVar6 = 0x10; piVar2 = (*(int * PTR32 *)(gen_frame + 0x40)), iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        this = (undefined *)(*(int * PTR32 *)(gen_frame + 0x40))[5];
        puVar5 = ((undefined4 *)(gen_frame + 0x0));
        uVar1 = F_004d9920(this,0,0x40,2);
        F_0065f5c0(uVar1,puVar5);
        *(undefined4 *)((int)this + 0x24) = 0;
        ((code *)*(gen_code32 *)(*piVar2 + 0x14))
                  (piVar2,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4c))),(undefined4)gen_fl2bits(param_4),0xff,0
                   ,0);
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x44));
      }
    }
    piVar4 = (int *)F_006026a0(piVar2,3);
    uVar1 = 0;
    if (piVar4 != (int *)0x0) {
      fVar3 = param_3;
      if ((*(byte *)((int)piVar2 + 0x95) & 8) != 0) {
        fVar3 = gen_bits2f(F_006964c0(piVar2,3,(*(int *)(gen_frame + 0x48)),(undefined4)gen_fl2bits(param_3)));
      }
      uVar1 = 0;
      if (fVar3 != 0.0) {
        uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))
                          (piVar4,(undefined4)gen_fl2bits(fVar3),(undefined4)gen_fl2bits(param_4),
                           (uint)*(byte *)(piVar2 + 0x25),piVar2 + 0xc,0);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return uVar1;
}

/* ref: FUN_006969e0 */
uint F_006969e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6969e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  char * pcVar1;
  char cVar2;
  undefined * this;
  uint uVar3;
  undefined4 in_ECX = 0;
  undefined4 local_8;
  
  pcVar1 = (char *)((*(int *)&gen_args[0]) + 0x66);
  cVar2 = *(char *)((*(int *)&gen_args[0]) + 0x67);
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70);
  (*(int *)&gen_args[0]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[0]), 1, 3),*pcVar1);
  local_8 = CONCAT31((int3)((uint)in_ECX >> 8),cVar2);
  if (*pcVar1 == -1) {
    F_00502250(this,(*(float *)&gen_args[1]));
  }
  else {
    F_00502310(this,(*(int *)&gen_args[0]));
  }
  if (cVar2 != -1) {
    uVar3 = F_00504650(this,local_8);
    return uVar3;
  }
  uVar3 = F_00504540(this,(*(float *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_00696a50 */
uint F_00696a50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x696a50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = F_00695f00(param_1,param_2);
  uVar3 = (uint)*(ushort *)(param_1 + 0x80);
  *(byte *)(param_1 + 0x94) = bVar1;
  uVar2 = uVar3;
  if ((*(ushort *)(param_1 + 0x80) != 0xffff) &&
     (uVar2 = 0, REFG(int, 0x137127c) + 0x10640 + uVar3 * 0x18 != 0)) {
    uVar2 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),uVar3);
    *(undefined2 *)(param_1 + 0x80) = 0xffff;
  }
  return uVar2;
}

/* ref: FUN_00696ab0 */
uint F_00696ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x696ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ushort uVar1;
  undefined * this;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x80);
  this = (undefined *)(REFG(int, 0x137127c) + 0x1061c);
  if (uVar1 == 0xffff) {
    iVar2 = 0;
  }
  else {
    iVar2 = REFG(int, 0x137127c) + 0x10640 + (uint)uVar1 * 0x18;
  }
  if (*(char *)(iVar2 + 2) == '\x02') {
    *(undefined1 *)(param_1 + 0x94) = 0xfe;
  }
  F_00621a50(this,(uint)uVar1);
  *(undefined2 *)(param_1 + 0x80) = 0xffff;
  return 0xffff;
}

/* ref: FUN_00696b10 */
uint F_00696b10(unsigned int gen_a0)
{
  GEN_ENTER(0x696b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2ea4));
  return (uint)this;
}

/* ref: FUN_00696b50 */
byte F_00696b50(unsigned int gen_a0)
{
  GEN_ENTER(0x696b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xfb;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined1 *)((int)this + 0x65) = 1;
  uVar1 = F_00625830((int)this + 0x30);
  *(uint *)((int)this + 0x70) = uVar1;
  if (uVar1 == 0) {
    *(undefined1 *)((int)this + 0x65) = 4;
    return 0;
  }
  F_0065d5d0(REFG(void * PTR32, 0x1371280),uVar1);
  return 1;
}

/* ref: Client::Graphics::Scene::Light::vf1 */
uint F_00696b90(unsigned int gen_a0)
{
  GEN_ENTER(0x696b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  F_0065d7a0(REFG(void * PTR32, 0x1371280),*(undefined4 *)(this + 0x70));
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  F_006905b0((undefined *)this);
  uVar2 = 0;
  if (*(int *)(this + 0x74) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 0x74),0,0);
    *(undefined4 *)(this + 0x74) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x70);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x70) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Light::vf13 */
uint F_00696c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x696c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x150);
  iVar5 = *(int *)(this + 0x70);
  if (*(int *)(iVar5 + 0xc) == 4) {
    pfVar6 = *(float * PTR32 *)(iVar5 + 0x10);
    (*(float *)(gen_frame + 0x40)) = *pfVar6;
    (*(float *)(gen_frame + 0x44)) = pfVar6[1];
    (*(float *)(gen_frame + 0x48)) = pfVar6[2];
    (*(float *)(gen_frame + 0x50)) = pfVar6[4];
    (*(float *)(gen_frame + 0x54)) = pfVar6[5];
    (*(float *)(gen_frame + 0x58)) = pfVar6[6];
    (*(float *)(gen_frame + 0x5c)) = pfVar6[7];
    fVar1 = pfVar6[8];
    (*(float *)(gen_frame + 0x60)) = fVar1;
    fVar2 = pfVar6[9];
    (*(float *)(gen_frame + 0x64)) = fVar2;
    (*(float *)(gen_frame + 0x68)) = pfVar6[10];
    fVar3 = *(float *)(iVar5 + 0x78);
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x10abe98);
    pfVar6 = &(*(float *)(gen_frame + 0x7c));
    fVar3 = (float)((float10)fVar3 / (float10)*(double *)&REFG(undefined, 0x1090718));
    (*(float *)(gen_frame + 0x7c)) = fVar3;
    if (!(*(double *)&REFG(undefined, 0x109ce00) < (double)fVar3)) {
      pfVar6 = &(*(float *)(gen_frame + 0x3c));
    }
    fVar4 = *pfVar6;
    fVar3 = *(float *)(iVar5 + 0x7c);
    (*(float *)(gen_frame + 0x3c)) = fVar4;
    fVar7 = (float10)fVar4;
    fVar7 = fVar7 + fVar7;
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x109cab8);
    fVar1 = (float)((float10)fVar1 + fVar7);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x109cab8);
    ((float *)(gen_frame + 0x100))[0] = fVar1;
    fVar2 = (float)(fVar7 + (float10)fVar2);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x60)) = fVar1;
    (*(float *)(gen_frame + 0x68)) = fVar3;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(float *)(gen_frame + 0x64)) = fVar2;
    ((float *)(gen_frame + 0x100))[1] = 0.0;
    fVar7 = (float10)0;
    ((float *)(gen_frame + 0x100))[2] = 0.0;
    (*(float *)(gen_frame + 0x130)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x110)) = 0;
    (*(float *)(gen_frame + 0x134)) = (float)fVar7;
    (*(float *)(gen_frame + 0x114)) = fVar2;
    (*(float *)(gen_frame + 0x138)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x118)) = 0;
    (*(undefined4 *)(gen_frame + 0x120)) = 0;
    (*(undefined4 *)(gen_frame + 0x124)) = 0;
    (*(float *)(gen_frame + 0x128)) = fVar3;
    F_004efe70(((float *)(gen_frame + 0x100)),(uint)&(*(float *)(gen_frame + 0x50)));
    pfVar6 = ((float *)(gen_frame + 0x100));
    (*(float *)(gen_frame + 0x130)) = (float)((float10)(*(float *)(gen_frame + 0x130)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x134)) = (float)((float10)(*(float *)(gen_frame + 0x134)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x138)) = (float)((float10)(*(float *)(gen_frame + 0x138)) + (float10)(*(float *)(gen_frame + 0x48)));
  }
  else {
    if (*(int *)(iVar5 + 0xc) != 5) {
      pfVar6 = *(float * PTR32 *)(iVar5 + 0x10);
      fVar7 = (float10)0;
      (*(float *)(gen_frame + 0x40)) = *pfVar6;
      (*(float *)(gen_frame + 0x44)) = pfVar6[1];
      (*(float *)(gen_frame + 0x48)) = pfVar6[2];
      (*(float *)(gen_frame + 0x50)) = pfVar6[4];
      (*(float *)(gen_frame + 0x54)) = pfVar6[5];
      (*(float *)(gen_frame + 0x58)) = pfVar6[6];
      (*(float *)(gen_frame + 0x5c)) = pfVar6[7];
      (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1087f04);
      fVar1 = *(float *)(iVar5 + 0x7c);
      (*(float *)(gen_frame + 0xb0)) = (float)fVar7;
      (*(float *)(gen_frame + 0xb4)) = (float)fVar7;
      (*(float *)(gen_frame + 0x20)) = fVar1;
      (*(float *)(gen_frame + 0xb8)) = (float)fVar7;
      (*(float *)(gen_frame + 0x24)) = fVar1;
      (*(float *)(gen_frame + 0x28)) = fVar1;
      ((float *)(gen_frame + 0x80))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x80))[0], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0x80))[1] = 0.0;
      ((float *)(gen_frame + 0x80))[2] = 0.0;
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      (*(float *)(gen_frame + 0x94)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x98)) = 0;
      (*(undefined4 *)(gen_frame + 0xa0)) = 0;
      (*(undefined4 *)(gen_frame + 0xa4)) = 0;
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1087f04);
      F_004efe70(((float *)(gen_frame + 0x80)),(uint)&(*(float *)(gen_frame + 0x50)));
      (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0xb8)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) + (float10)(*(float *)(gen_frame + 0x48)));
      F_005feb80(param_1,((float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0x20)));
      goto LAB_006970da;
    }
    fVar2 = *(float *)(iVar5 + 0x7c);
    pfVar6 = *(float * PTR32 *)(iVar5 + 0x10);
    fVar1 = *pfVar6;
    (*(float *)(gen_frame + 0x7c)) = fVar2;
    (*(float *)(gen_frame + 0x40)) = fVar1;
    (*(float *)(gen_frame + 0x44)) = pfVar6[1];
    (*(float *)(gen_frame + 0x48)) = pfVar6[2];
    (*(float *)(gen_frame + 0x50)) = pfVar6[4];
    (*(float *)(gen_frame + 0x54)) = pfVar6[5];
    (*(float *)(gen_frame + 0x58)) = pfVar6[6];
    (*(float *)(gen_frame + 0x5c)) = pfVar6[7];
    fVar1 = pfVar6[8];
    (*(float *)(gen_frame + 0x60)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x109cab8);
    (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x109cab8);
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x109cab8);
    fVar7 = (float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x1092098);
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1088068);
    fVar1 = (float)((float10)*(double *)&REFG(undefined, 0x1092098) * fVar7 + (float10)fVar1);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    ((float *)(gen_frame + 0xc0))[0] = fVar1;
    fVar2 = (float)fVar7;
    (*(float *)(gen_frame + 0x7c)) = fVar2;
    (*(float *)(gen_frame + 0x60)) = fVar1;
    fVar7 = (float10)0;
    (*(float *)(gen_frame + 0x64)) = fVar2;
    (*(float *)(gen_frame + 0xf0)) = (float)fVar7;
    (*(float *)(gen_frame + 0x68)) = fVar2;
    (*(float *)(gen_frame + 0xf4)) = (float)fVar7;
    ((float *)(gen_frame + 0xc0))[1] = 0.0;
    (*(float *)(gen_frame + 0xf8)) = (float)fVar7;
    ((float *)(gen_frame + 0xc0))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    (*(float *)(gen_frame + 0xd4)) = fVar2;
    (*(undefined4 *)(gen_frame + 0xd8)) = 0;
    (*(undefined4 *)(gen_frame + 0xe0)) = 0;
    (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    (*(float *)(gen_frame + 0xe8)) = fVar2;
    F_004efe70(((float *)(gen_frame + 0xc0)),(uint)&(*(float *)(gen_frame + 0x50)));
    pfVar6 = ((float *)(gen_frame + 0xc0));
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0x48)));
  }
  F_005fec10(param_1,pfVar6,&(*(undefined4 *)(gen_frame + 0x0)));
LAB_006970da: ;
  F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x150));
  return (uint)param_1;
}

/* ref: FUN_006970f0 */
uint F_006970f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6970f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  code * pcVar3;
  int * piVar4;
  uint uVar5;
  
  piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x88)));
  LOCK();
  iVar1 = *piVar4;
  *piVar4 = *piVar4;
  UNLOCK();
  if (iVar1 == 2) {
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      F_005029b0(*(undefined * PTR32 *)((int)this + 0x74),(uint)*(byte *)(REFG(int, 0x1371278) + 0x10));
      iVar1 = *(int *)((int)this + 0x70);
      if (iVar1 != 0) {
        piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + 0xfc)));
        if (piVar4 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
        }
        piVar2 = *(int * PTR32 *)(iVar1 + 0x84);
        if (piVar2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        }
        *(int * PTR32 *)(iVar1 + 0x84) = piVar4;
      }
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x28);
      *(undefined1 *)((int)this + 0x65) = 3;
      uVar5 = (*pcVar3)(this);
      return uVar5;
    }
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return (uint)piVar4;
}

/* ref: FUN_00697180 */
uint F_00697180(unsigned int gen_a0)
{
  GEN_ENTER(0x697180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2f74));
  return (uint)this;
}

/* ref: FUN_006971c0 */
byte F_006971c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6971c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) & 0xfb;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 3;
  *(undefined1 *)(in_ecx + 0x65) = 1;
  return 1;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf1 */
uint F_006971d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6971d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int *)(this + 0x74) != 0) {
    F_0050c620(*(int *)(this + 0x74),0,0);
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    F_0050c620(*(int *)(this + 0x70),0,0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar2 = F_006905b0((undefined *)this);
  return uVar2;
}

/* ref: FUN_00697250 */
uint F_00697250(unsigned int gen_a0)
{
  GEN_ENTER(0x697250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int * piVar4;
  
  bVar2 = true;
  if (*(int *)((int)this + 0x70) != 0) {
    bVar2 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (7 < iVar1) goto LAB_0069726f;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if ((iVar1 == 2) && (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa0))), iVar1 != 0)) {
      F_0068b3d0(this,iVar1);
      bVar2 = true;
    }
  }
  bVar3 = true;
  piVar4 = (int *)0x0;
  if (*(int *)((int)this + 0x74) != 0) {
    bVar3 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (7 < iVar1) {
LAB_0069726f: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return (uint)piVar4;
    }
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x88)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if ((iVar1 == 2) &&
       (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0xfc))), piVar4 = (int *)0x0, iVar1 != 0)) {
      piVar4 = (int *)F_0068b400(this,iVar1);
      bVar3 = true;
    }
  }
  if ((bVar2) && (bVar3)) {
    *(undefined1 *)((int)this + 0x65) = 3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00697300 */
float F_00697300(unsigned int gen_a0)
{
  GEN_ENTER(0x697300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float * pfVar1;
  float fVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  ((float *)(gen_frame + 0x4))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[2], REFG(float, 0x1087f04));
  if (*(int *)((int)this + 0x78) != 0) {
    F_004bea00(*(int *)((int)this + 0x78) + 0x108,((undefined1 *)(gen_frame + 0x10)));
    fVar2 = F_004bead0(&REFG(float, 0x1302c80),((undefined1 *)(gen_frame + 0x10)));
    ((float *)(gen_frame + 0x4))[2] = fVar2;
    ((float *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[1], REFG(float, 0x1087f04));
    ((float *)(gen_frame + 0x4))[0] = 0.0;
    pfVar1 = ((float *)(gen_frame + 0x4)) + 2;
    if (!((float10)fVar2 < (float10)1)) {
      pfVar1 = ((float *)(gen_frame + 0x4)) + 1;
    }
    if (!(0.0 < *pfVar1)) {
      pfVar1 = ((float *)(gen_frame + 0x4));
    }
    ((float *)(gen_frame + 0x4))[2] = *pfVar1;
  }
  fVar2 = ((float *)(gen_frame + 0x4))[2];
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return fVar2;
}

/* ref: FUN_006973b0 */
uint F_006973b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6973b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(byte *)((int)param_1 + 0x65) - 2;
  if (uVar1 == 0) {
    uVar1 = F_00697250(param_1);
  }
  else if ((*(int *)((int)param_1 + 0x78) != 0) && (*(int *)((int)param_1 + 0x7c) != 0)) {
    *(undefined1 *)((int)param_1 + 0x65) = 3;
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    uVar1 = F_004b4e70(*(int *)((int)param_1 + 0x78),param_2);
  }
  return uVar1;
}

/* ref: FUN_006973f0 */
uint F_006973f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6973f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  return (uint)this;
}

/* ref: FUN_00697440 */
byte F_00697440(unsigned int gen_a0)
{
  GEN_ENTER(0x697440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = REFG(float, 0x10916ec);
  uVar1 = REFG(float, 0x1088068);
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xfb;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined1 *)((int)this + 0x65) = 1;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = uVar1;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 2;
  *(undefined1 *)((int)this + 0x96) = 1;
  F_006b3750(this,fVar2);
  *(undefined1 *)((int)this + 0x96) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined2 *)((int)this + 0x94) = 0;
  return 1;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf1 */
uint F_006974b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6974b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x78) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    F_0050c620(*(int *)(this + 0x70),0,0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int *)(this + 0x74) != 0) {
    F_0050c620(*(int *)(this + 0x74),0,0);
    *(undefined4 *)(this + 0x74) = 0;
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar2 = F_006905b0((undefined *)this);
  return uVar2;
}

/* ref: FUN_00697530 */
unsigned int F_00697530(unsigned int gen_a0)
{
  GEN_ENTER(0x697530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int * piVar4;
  
  bVar2 = true;
  if (*(int *)((int)this + 0x70) != 0) {
    bVar2 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4;
      UNLOCK();
      if ((iVar1 == 2) && (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa0))), iVar1 != 0)) {
        F_0068b430(this,iVar1);
        bVar2 = true;
      }
    }
    else {
      *(undefined1 *)((int)this + 0x65) = 4;
    }
  }
  bVar3 = true;
  if (*(int *)((int)this + 0x74) != 0) {
    bVar3 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x8c)));
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x88)));
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4;
      UNLOCK();
      if ((iVar1 == 2) && (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0xa0))), iVar1 != 0)) {
        F_0068b460(this,iVar1);
        bVar3 = true;
      }
    }
    else {
      *(undefined1 *)((int)this + 0x65) = 4;
    }
  }
  if ((bVar2) && (bVar3)) {
    *(undefined1 *)((int)this + 0x65) = 3;
  }
  return 0;
}

