#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf112 */
uint F_00b8f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8f7d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(char *)(in_ecx + 0x594) == '\x01') {
    uVar1 = 0xee39;
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf128 */
uint F_00b8f7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb8f7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (this[0x594] == (undefined1)0x1) {
    iVar2 = 0xee39;
  }
  if (iVar2 != 0) {
    piVar1 = (int *)F_00ab3110(6);
    return (piVar1[1] - *piVar1) + iVar2;
  }
  return 0;
}

/* ref: FUN_00b8f830 */
uint F_00b8f830(unsigned int gen_a0)
{
  GEN_ENTER(0xb8f830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * this;
  uint uVar1;
  
  this = (undefined4 *)F_00406b90(0x10c,0,0);
  if (this != (undefined4 *)0x0) {
    uVar1 = param_1 & 0xffff | 0x1d0000;
    F_006e44c0(this,uVar1);
    this[0x3e] = uVar1;
    this[0x3f] = 0;
    this[0x40] = 0;
    this[0x41] = 0;
    this[0x42] = 0;
    *this = (*(undefined * PTR32 (*)[144])REFP(0x10f9424));
    return (uint)this;
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf1 */
uint F_00b8f890(unsigned int gen_a0)
{
  GEN_ENTER(0xb8f890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  undefined4 * this_00;
  
  bVar1 = F_006d8320((undefined *)this);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    bVar1 = F_006d8130((undefined *)this);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 == 0) {
      F_006bccf0(this);
      if (*(int *)(this + 0x104) == 0) {
        uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x14a);
        *(uint *)(this + 0x104) = uVar2;
      }
      this_00 = (undefined4 *)F_00406b90(0x20,0,0);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        F_00cb4700(this_00,1,0);
        this_00[5] = 1;
        *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10f9694));
        this_00[6] = this;
        this_00[7] = ((code *)REFP(0xb8c700));
      }
      *(undefined4 * PTR32 *)(this + 0x108) = this_00;
      F_00cb4540(this_00,0,*(undefined4 *)(this + 8));
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x104) + 0x48))))
                        (*(int * PTR32 *)(this + 0x104),*(undefined4 *)(this + 0x108));
    }
  }
  return uVar2;
}

/* ref: FUN_00b8f940 */
byte F_00b8f940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8f940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar2,*(undefined4 *)((int)this + 0xfc));
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf171 */
byte F_00b8f960(unsigned int gen_a0)
{
  GEN_ENTER(0xb8f960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00b97be0(this,this);
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf28 */
uint F_00b8f970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8f970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x60) == 0) {
    if (*(short *)(this + 0x54) == 2) {
      if (this[0x9a4] == (undefined1)0x0) {
        F_00b8cea0(this);
      }
    }
    else if (((*(short *)(this + 0x54) == 3) && (*(int *)(this + 0x984) == 1)) &&
            (*(int *)(this + 0x328) != 0)) {
      F_00b8d1d0(this,8,500,0);
      uVar1 = F_006fd360((undefined *)this,param_1,param_2);
      return uVar1;
    }
  }
  uVar1 = F_006fd360((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b8f9e0 */
uint F_00b8f9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8f9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0x30,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_00cb4700(this_00,param_2,0);
    this_00[5] = param_2;
    this_00[7] = param_1;
    this_00[6] = this;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
    this_00[8] = param_3;
    this_00[9] = 0;
    *(undefined2 *)(this_00 + 10) = 0;
    *(undefined1 *)(this_00 + 0xb) = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_00b8fa50 */
uint F_00b8fa50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb8fa50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  this_00 = (undefined4 *)F_00406b90(0x30,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,uVar1,0);
    this_00[5] = uVar1;
    this_00[6] = this;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
    this_00[7] = param_1;
    this_00[8] = param_4;
    this_00[9] = 0;
    *(undefined2 *)(this_00 + 10) = 0;
    *(undefined1 *)(this_00 + 0xb) = 0;
  }
  *(undefined2 *)(this_00 + 10) = (undefined2)param_3;
  this_00[9] = param_2;
  F_00b96ba0(this_00);
  return (uint)this_00;
}

/* ref: FUN_00b8fae0 */
uint F_00b8fae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb8fae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = -(uint)((int)((ulonglong)param_2 * 0x54 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x54)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0,0);
  if (puVar1 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = param_2;
    puVar1 = puVar2;
    uVar3 = param_2;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      F_0042b630(puVar1);
      puVar1 = puVar1 + 0x15;
    }
  }
  *(uint * PTR32 *)((int)this + 0x94c) = puVar2;
  *(undefined4 *)((int)this + 0x97c) = param_1;
  *(uint *)((int)this + 0x980) = param_2;
  uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x98);
  uVar3 = F_00b8fa50(this,uVar3,param_1,param_2,0xfffffffd);
  *(uint *)((int)this + 0x948) = uVar3;
  return uVar3;
}

/* ref: FUN_00b8fb90 */
byte F_00b8fb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8fb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 8) {
    F_00b8d220(this,*(undefined4 *)((int)this + 0x330),*(undefined4 *)((int)this + 0x328),
                 REFG(float, 0x1087ef8));
    if (*(int *)((int)this + 0x32c) != 0) {
      F_00b8d220(this,*(undefined4 *)((int)this + 0x330),*(int *)((int)this + 0x32c),REFG(float, 0x1087ef8))
      ;
    }
  }
  return 0;
}

/* ref: FUN_00b8fbf0 */
byte F_00b8fbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb8fbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return *(byte *)((int)this + 0x1de);
  case 1: ;
    return *(byte *)((int)this + 0x1df);
  case 2: ;
    return *(byte *)((int)this + 0x1e0);
  case 3: ;
    return *(byte *)((int)this + 0x1e1);
  case 4: ;
    return *(byte *)((int)this + 0x1e2);
  case 5: ;
    return *(byte *)((int)this + 0x1e3);
  case 6: ;
    return *(byte *)((int)this + 0x1e4);
  case 7: ;
    return *(byte *)((int)this + 0x1e5);
  case 8: ;
    return *(byte *)((int)this + 0x1e6);
  case 9: ;
    bVar1 = *(byte *)((int)this + 0x1e7);
  }
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseBaileys::vf162 */
uint F_00b8fc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb8fc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  __time64_t _Var6;
  
  uVar4 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar5 = param_2 & 7;
    uVar4 = param_2 >> 3 & 0xffffff01;
    *((char *)GEN_TOP((*(int *)(this + 0x9a8) + uVar5 * 0x18))) = (char)uVar4;
    if (this[0x9a3] == (undefined1)0x0) {
      pvVar3 = (undefined *)F_005f3270(6,(*(undefined * PTR32 (*)[6])REFP(0x10f80f4))[uVar5],0);
      uVar4 = 0;
      if (pvVar3 != (undefined *)0x0) {
        uVar4 = F_005f51d0(pvVar3,(uint)*((byte *)GEN_TOP((*(int *)(this + 0x9a8) + uVar5 * 0x18))),0);
        return uVar4;
      }
    }
    break;
  case 1: ;
    uVar5 = param_2 & 7;
    iVar1 = *(int *)(this + 0x9a8) + uVar5 * 0x18;
    *(uint *)(iVar1 + 4) = param_2 >> 3 & 7;
    *(uint *)(iVar1 + 8) = param_2 >> 6 & 7;
    *(byte *)(iVar1 + 0x14) = (byte)(param_2 >> 0x1f);
    *(uint *)(iVar1 + 0xc) = param_2 >> 9 & 0x3fffff;
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    uVar4 = (uint)_Var6;
    *(uint *)(iVar1 + 0x10) = uVar4;
    if (this[0x9a3] == (undefined1)0x0) {
      pvVar3 = (undefined *)F_005f3270(6,(*(undefined * PTR32 (*)[6])REFP(0x10f80f4))[uVar5],0);
      uVar4 = uVar5 * 3;
      iVar1 = *(int *)(this + 0x9a8) + uVar5 * 0x18;
      if ((pvVar3 != (undefined *)0x0) && (*(int *)(iVar1 + 8) != 7)) {
        _Var6 = F_00c4b7c2((__time64_t *)0x0);
        iVar2 = *(int *)(iVar1 + 0x10);
        if (*(int *)(iVar1 + 4) != 7) {
          F_005e3760(pvVar3,*(int *)(iVar1 + 4));
          F_005eb180(pvVar3,*(undefined4 *)(iVar1 + 4),0);
        }
        F_005e3760(pvVar3,*(undefined4 *)(iVar1 + 8));
        uVar4 = F_005eb180(pvVar3,*(undefined4 *)(iVar1 + 8),
                             (*(int *)(iVar1 + 0xc) + ((int)_Var6 - iVar2)) * 1000);
      }
    }
    break;
  case 2: ;
  case 3: ;
    break;
  default: ;
    goto switchD_00b8fca3_default;
  }
switchD_00b8fca3_default: ;
  return uVar4;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseBaileys::vf168 */
unsigned int F_00b8fe00(unsigned int gen_a0)
{
  GEN_ENTER(0xb8fe00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  byte * pbVar2;
  __time64_t _Var3;
  uint local_c;
  int local_8;
  
  iVar1 = *(int *)(this + 0x9ac) - *(int *)(this + 0x9a8) >> 0x1f;
  local_c = 0;
  if ((*(int *)(this + 0x9ac) - *(int *)(this + 0x9a8)) / 0x18 + iVar1 != iVar1) {
    local_8 = 0;
    do {
      if (*((char *)GEN_TOP((local_8 + 0x14 + *(int *)(this + 0x9a8)))) == '\0') {
        this_00 = (undefined *)F_005f3270(6,(*(undefined * PTR32 (*)[6])REFP(0x10f80f4))[local_c],0);
        pbVar2 = ((byte *)GEN_TOP((*(int *)(this + 0x9a8) + local_8)));
        if ((this_00 != (undefined *)0x0) &&
           (F_005f51d0(this_00,(uint)*pbVar2,0), *(int *)(pbVar2 + 8) != 7)) {
          _Var3 = F_00c4b7c2((__time64_t *)0x0);
          iVar1 = *(int *)(pbVar2 + 0x10);
          if (*(int *)(pbVar2 + 4) != 7) {
            F_005e3760(this_00,*(int *)(pbVar2 + 4));
            F_005eb180(this_00,*(undefined4 *)(pbVar2 + 4),0);
          }
          F_005e3760(this_00,*(undefined4 *)(pbVar2 + 8));
          F_005eb180(this_00,*(undefined4 *)(pbVar2 + 8),
                       (*(int *)(pbVar2 + 0xc) + ((int)_Var3 - iVar1)) * 1000);
        }
      }
      local_8 = local_8 + 0x18;
      local_c = local_c + 1;
    } while (local_c < (uint)((*(int *)(this + 0x9ac) - *(int *)(this + 0x9a8)) / 0x18));
  }
  return 0;
}

/* ref: FUN_00b8ff20 */
uint F_00b8ff20(unsigned int gen_a0)
{
  GEN_ENTER(0xb8ff20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined1 * puVar1;
  int iVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  puVar1 = *(undefined1 * PTR32 *)((int)this + 0x2f8);
  F_00ab93a0(0x1280,(uint)(*(char *)((int)this + 0x9ac) == '\0'),0,((undefined1 *)(gen_frame + 0x4)));
  F_0042ccf0(puVar1 + 8,((undefined1 *)(gen_frame + 0x4)));
  *(undefined4 *)(puVar1 + 4) = 6;
  puVar1[0x5d] = 0;
  *(int *)(puVar1 + 100) = (int)*(char *)((int)this + 0x1de);
  *(int *)(puVar1 + 0x60) = (int)*(char *)((int)this + 0x1df);
  *puVar1 = 1;
  iVar2 = *(int *)((int)this + 0x2f8);
  F_00ab93a0(0x1280,(uint)(*(char *)((int)this + 0x9ac) == '\x01'),1,((undefined1 *)(gen_frame + 0x4)));
  F_0042ccf0((undefined *)(iVar2 + 0x148),((undefined1 *)(gen_frame + 0x4)));
  *(undefined4 *)(iVar2 + 0x144) = 6;
  *(undefined1 *)(iVar2 + 0x19d) = 0;
  *(int *)(iVar2 + 0x1a4) = (int)*(char *)((int)this + 0x1de);
  *(int *)(iVar2 + 0x1a0) = (int)*(char *)((int)this + 0x1e0);
  *(undefined1 *)(iVar2 + 0x140) = 1;
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar3;
}

/* ref: FUN_00b90020 */
uint F_00b90020(unsigned int gen_a0)
{
  GEN_ENTER(0xb90020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10fe4e4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10fe4d4));
  if (REFG(int, 0x133f0f8) != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    *(undefined4 *)&REFG(undefined, 0x133f0f4) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x133f0f8),0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x9e4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x9e4) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x9e8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x9e8) = 0;
  }
  F_0042c880((undefined *)((int)this + 0xe08));
  pvVar5 = (undefined *)((int)this + 0xe08);
  iVar4 = 1;
  do {
    pvVar5 = (undefined *)((int)pvVar5 + -0x54);
    F_0042c880(pvVar5);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_0042c880((undefined *)((int)this + 0xd0c));
  pvVar5 = (undefined *)((int)this + 0xce0);
  iVar4 = 8;
  do {
    pvVar5 = (undefined *)((int)pvVar5 + -0x54);
    F_0042c880(pvVar5);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  uVar3 = F_00b8cc40(this);
  return uVar3;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf159 */
byte F_00b900f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb900f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x1d8) - 0x2711U < 0xe) {
    iVar2 = *(int *)(this + 0x1d8) + -10000;
  }
  else {
    iVar2 = 0;
  }
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xfa);
  uVar1 = F_00b8fa50(this,uVar1,iVar2,1,0);
  *(uint *)(this + 0x9e4) = uVar1;
  return 0;
}

/* ref: FUN_00b90140 */
uint F_00b90140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb90140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined * this_00;
  undefined4 * puVar7;
  
  if (param_1 == 0) {
    puVar1 = *(undefined4 * PTR32 *)(*param_3 + 4);
    iVar3 = *(int *)((int)this + -0x138);
    puVar6 = puVar1;
    puVar7 = (undefined4 *)((int)this + 0x698);
    for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    if (iVar3 - 0x2711U < 0xe) {
      iVar3 = iVar3 + -10000;
    }
    else {
      iVar3 = 0;
    }
    F_00b8b980((undefined *)((int)this + 0x9e8),iVar3,(int)this + 4,puVar1);
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x98);
    uVar2 = F_00b8fa50((undefined *)((int)this + -0x310),uVar2,0x514,9,1);
    *(uint *)((int)this + 0x6d8) = uVar2;
  }
  else {
    uVar2 = param_1 - 1;
    if (uVar2 == 0) {
      uVar5 = 0;
      if (param_4 != 0) {
        this_00 = (undefined *)(param_2 * 0x54 + -0x1a3b4 + (int)this);
        do {
          uVar2 = F_0042e430(this_00,(**(uint * PTR32 *)(param_3[uVar5] + 4) & 0xffffff) +
                                       (int)*(uint * PTR32 *)(param_3[uVar5] + 4));
          uVar5 = uVar5 + 1;
          this_00 = (undefined *)((int)this_00 + 0x54);
        } while (uVar5 < param_4);
      }
      if ((char)param_5 == '\x01') {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0x310) + 0x2b8))))((int)this + -0x310);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf165 */
uint F_00b90240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb90240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  *(undefined4 *)(this + 0xe5c) = param_1;
  uVar1 = F_006e90a0(this,3000,0);
  *(uint *)(this + 0xce4) = uVar1;
  uVar1 = F_006e90a0(this,6000,0);
  *(uint *)(this + 0xce8) = uVar1;
  if (REFG(int, 0x133f0f8) != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    *(undefined4 *)&REFG(undefined, 0x133f0f4) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x133f0f8),0);
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf146 */
uint F_00b90300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb90300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (REFG(int, 0x133f0f8) == 0) {
    uVar1 = F_00b8e0d0(in_ecx,in_ebx);
    return uVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  *(undefined4 *)&REFG(undefined, 0x133f0f4) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x133f0f8),0);
  return uVar1;
}

/* ref: FUN_00b90340 */
uint F_00b90340(unsigned int gen_a0)
{
  GEN_ENTER(0xb90340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 local_8;
  
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(char *)((int)this + 0x1de));
  if ('\0' < *(char *)((int)this + 0x1de)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 700))(local_8);
    return uVar1;
  }
  uVar1 = F_0042e430((undefined *)((int)this + 0x290),&REFG(undefined, 0x10f7943));
  return uVar1;
}

/* ref: FUN_00b90380 */
uint F_00b90380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb90380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10fea64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10fea54));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b903c0 */
uint F_00b903c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb903c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10fed3c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10fed2c));
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf151 */
byte F_00b903f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb903f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00b97d30(this,this);
  return bVar1;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf146 */
uint F_00b90400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb90400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00b8c330(this,1);
  return uVar1;
}

/* ref: FUN_00b90410 */
uint F_00b90410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb90410u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  uVar1 = F_00b8e450((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),1,(*(undefined4 *)&gen_args[3]));
  return uVar1;
}

/* ref: Client::Game::InstanceContent::ContentNpcEventHandler::vf146 */
uint F_00b90430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb90430u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11b);
  (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffff;
  uVar1 = F_00b8e450((*(undefined * PTR32 *)&gen_args[0]),uVar1,&(*(uint *)&gen_args[2]),1,0);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x538))) = uVar1;
  return uVar1;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf116 */
byte F_00b90470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb90470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar2 == 7) {
    uVar2 = F_00a4ffd0();
    bVar1 = F_00b8de30(uVar2,0x7532);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf5 */
byte F_00b904b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb904b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar2 == 7) {
    uVar2 = F_00a4ffd0();
    bVar1 = F_00b8de30(uVar2,0x7532);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf151 */
byte F_00b904f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb904f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00b97de0(this,this);
  return bVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf151 */
byte F_00b90500(unsigned int gen_a0)
{
  GEN_ENTER(0xb90500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00b97e90(this,this);
  return bVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf152 */
uint F_00b90510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb90510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),param_2);
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar2 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar2 != 0) {
    uVar1 = F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    return uVar1;
  }
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),param_2);
  F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
  iVar3 = uVar1 + 2;
  F_00a01c40(param_1,iVar3,"className",param_2);
  F_00a01c80(param_1,iVar3,"referenceCount",1);
  F_00a01cc0(param_1,iVar3,"SelectGuildOrderList",((code *)REFP(0xb8eb00)));
  F_00a01c80(param_1,iVar3,"HOW_TO_ID",0x47);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_GREETING",0);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_HOWTO_1",1);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_HOWTO_2",2);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_HOWTO_3",3);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_REWARD_UNRELEASED_1",4);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_REWARD_UNRELEASED_2",5);
  if (param_3 == 0) {
    F_00b9bc00(*(undefined4 *)((int)param_1 + 8),param_2);
    F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar3);
    F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    uVar1 = F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    return uVar1;
  }
  F_00b9bc00(*(undefined4 *)((int)param_1 + 8),param_2);
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar3);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),param_3);
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar3,"__index");
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar3);
  F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar3);
  F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(param_1,param_3);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf147 */
uint F_00b90700(unsigned int gen_a0)
{
  GEN_ENTER(0xb90700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pGVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pGVar1 = *(undefined * PTR32 *)(this + 8);
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x101);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pGVar1;
  uVar2 = F_00b8e450(this,uVar2,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1,0);
  *(uint *)(this + 0x534) = uVar2;
  return uVar2;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf151 */
byte F_00b90740(unsigned int gen_a0)
{
  GEN_ENTER(0xb90740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00b97f40(this,this);
  return bVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf152 */
uint F_00b90750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb90750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),param_2);
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar2 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar2 != 0) {
    uVar1 = F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    return uVar1;
  }
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),param_2);
  F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
  iVar3 = uVar1 + 2;
  F_00a01c40(param_1,iVar3,"className",param_2);
  F_00a01c80(param_1,iVar3,"referenceCount",1);
  F_00a01cc0(param_1,iVar3,"SetGuildOrderReward",((code *)REFP(0xb8f6e0)));
  F_00a01cc0(param_1,iVar3,"IsGuildOrderRewardBonus",((code *)REFP(0xb8f740)));
  F_00a01c80(param_1,iVar3,"TALK_INDEX_READY",0);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_GREETING_MISSION",1);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_REWARD",2);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_REWARD_BONUS",3);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_FAIL_GET_REWARD",4);
  F_00a01c80(param_1,iVar3,"TALK_INDEX_EXIT",5);
  F_00a01c80(param_1,iVar3,"REWARD_BONUS_FLAGS_FIRST",1);
  F_00a01c80(param_1,iVar3,"REWARD_BONUS_FLAGS_RESULT_BEST",4);
  F_00a01c80(param_1,iVar3,"REWARD_BONUS_FLAGS_RESULT_BETTER",8);
  if (param_3 == 0) {
    F_00b9bc00(*(undefined4 *)((int)param_1 + 8),param_2);
    F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar3);
    F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    uVar1 = F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    return uVar1;
  }
  F_00b9bc00(*(undefined4 *)((int)param_1 + 8),param_2);
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar3);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),param_3);
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar3,"__index");
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar3);
  F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar3);
  F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(param_1,param_3);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf147 */
uint F_00b90970(unsigned int gen_a0)
{
  GEN_ENTER(0xb90970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pGVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pGVar1 = *(undefined * PTR32 *)(this + 8);
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x100);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pGVar1;
  uVar2 = F_00b8e450(this,uVar2,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1,0);
  *(uint *)(this + 0x534) = uVar2;
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf5 */
byte F_00b909b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb909b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar2,*(undefined4 *)(this + 0xfc));
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf13 */
byte F_00b909e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb909e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar2,*(undefined4 *)(this + 0xfc));
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf124 */
unsigned int F_00b90a10(unsigned int gen_a0)
{
  GEN_ENTER(0xb90a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  undefined * pIVar5;
  undefined4 uVar6;
  
  if ((REFG(int, 0x1379694) != 0) && (*(int *)(this + 0x100) != 0)) {
    uVar2 = F_00a4ffd0();
    bVar1 = F_00b8de30(uVar2,*(undefined4 *)(this + 0xfc));
    uVar6 = 10;
    if (bVar1 != 0) {
      uVar4 = *(undefined4 *)(this + 0x100);
      pIVar5 = this;
      pvVar3 = (undefined *)F_006b8c00();
      F_006e6390(pvVar3,uVar4,pIVar5,uVar6);
      F_006bd200(this,10,1);
      return 0;
    }
    uVar4 = *(undefined4 *)(this + 0x100);
    pIVar5 = this;
    pvVar3 = (undefined *)F_006b8c00();
    F_006deae0(pvVar3,uVar4,pIVar5,uVar6);
    F_006bd200(this,10,0);
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf116 */
byte F_00b90a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb90a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar2,*(undefined4 *)(this + 0xfc));
  return bVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf1 */
uint F_00b90ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xb90ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(this + 0x1d8);
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x8a);
  uVar2 = F_00b8fa50(this,uVar2,uVar1,1,0xffffffff);
  *(uint *)(this + 0x940) = uVar2;
  F_006bccf0(this);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf37 */
byte F_00b90b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb90b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pIVar2;
  int iVar3;
  
  iVar3 = 0;
  pIVar2 = this + 0x958;
  do {
    if (*(int *)pIVar2 == param_1) {
      if (iVar3 < 8) {
        uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x29c))(this,iVar3);
        if ((byte)uVar1 == 0) {
          *(undefined4 *)(this + iVar3 * 4 + 0x958) = 0;
        }
        return (byte)uVar1;
      }
      if (iVar3 == 8) {
        F_00b8d220(this,*(undefined4 *)(this + 0x330),*(undefined4 *)(this + 0x328),REFG(float, 0x1087ef8));
        if (*(int *)(this + 0x32c) != 0) {
          F_00b8d220(this,*(undefined4 *)(this + 0x330),*(int *)(this + 0x32c),REFG(float, 0x1087ef8));
        }
      }
      *(undefined4 *)(this + iVar3 * 4 + 0x958) = 0;
      return 0;
    }
    iVar3 = iVar3 + 1;
    pIVar2 = pIVar2 + 4;
  } while (iVar3 < 9);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf161 */
uint F_00b90bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb90bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined * pIVar4;
  ushort * puVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar3 = 0;
  if ((*(int *)(this + 0x954) != 0) && ((*(uint *)(gen_frame + 0x4)) = 0, this[0x99e] != (undefined1)0x0))
  {
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      puVar5 = ((ushort *)GEN_TOP((*(int *)(this + 0x954) + (*(int *)(gen_frame + 0x8)))));
      uVar1 = puVar5[3];
      (*(byte *)(gen_frame + 0x13)) = F_00b8fbf0(this,(uint)(byte)uVar1);
      if (*(char *)((int)puVar5 + 7) == -2) {
LAB_00b90c9e: ;
        bVar2 = *(byte *)((int)puVar5 + 5);
        if (bVar2 != 0xff) {
          if (bVar2 == 0xfe) {
            (*(byte *)(gen_frame + 0x13)) = 0;
          }
          else {
            (*(byte *)(gen_frame + 0x13)) = ((*(byte *)(gen_frame + 0x13)) & '\x01' << (bVar2 & 0x1f)) != 0;
          }
        }
        F_0042b630(((undefined1 *)(gen_frame + 0x14)));
        uVar3 = (uint)*puVar5;
        if (*(char *)((int)puVar5 + 9) == '\0') {
          if (uVar3 < 7) {
            pIVar4 = this + uVar3 * 0x54 + 0x6f4;
          }
          else {
            pIVar4 = ((undefined *)GEN_TOP(((uVar3 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
          }
        }
        else {
          pIVar4 = this + uVar3 * 0x54 + 0x400;
        }
        if ((char)puVar5[2] == '\0') {
          puVar6 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x2f8) + (*(int *)(gen_frame + 0xc)))));
          *(undefined4 *)(puVar6 + 4) = 2;
          F_0042ccf0(puVar6 + 8,pIVar4);
          *(uint *)(puVar6 + 0x60) = (uint)(*(byte *)(gen_frame + 0x13));
          *puVar6 = 1;
          puVar6[0x5c] = 0;
        }
        else if ((char)puVar5[2] == '\x01') {
          uVar1 = puVar5[1];
          puVar6 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x2f8) + (*(int *)(gen_frame + 0xc)))));
          *(undefined4 *)(puVar6 + 4) = 1;
          F_0042ccf0(puVar6 + 8,pIVar4);
          *(uint *)(puVar6 + 0x60) = (uint)(*(byte *)(gen_frame + 0x13));
          *(uint *)(puVar6 + 100) = (uint)uVar1;
          *puVar6 = 1;
          puVar6[0x5c] = 0;
          F_0042c880(((undefined1 *)(gen_frame + 0x14)));
          goto LAB_00b90c68;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      }
      else {
        bVar2 = (*(byte *)(gen_frame + 0x13));
        if ((byte)puVar5[4] != (byte)uVar1) {
          bVar2 = F_00b8fbf0(this,(uint)(byte)puVar5[4]);
        }
        if (*(byte *)((int)puVar5 + 7) != 0xff) {
          bVar2 = bVar2 & (byte)(1 << (*(byte *)((int)puVar5 + 7) & 0x1f));
        }
        if (bVar2 != 0) goto LAB_00b90c9e;
        uVar3 = F_00b8aca0(this,6);
        puVar6 = ((undefined1 *)GEN_TOP((*(int *)(this + 0x2f8) + (*(int *)(gen_frame + 0xc)))));
        *(undefined4 *)(puVar6 + 4) = 0;
        F_0042ccf0(puVar6 + 8,uVar3);
        puVar6[0x5c] = 0;
        *puVar6 = 1;
      }
LAB_00b90c68: ;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0xc;
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 0x140;
      uVar3 = (*(uint *)(gen_frame + 0x4)) + 1;
      (*(uint *)(gen_frame + 0x4)) = uVar3;
    } while ((int)uVar3 < (int)(uint)(byte)this[0x99e]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar3;
}

/* ref: FUN_00b90d80 */
unsigned int F_00b90d80(unsigned int gen_a0)
{
  GEN_ENTER(0xb90d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  char * pcVar2;
  undefined * this_00;
  int local_8;
  
  if (*(char *)((int)this + 0x9a3) != '\x01') {
    pcVar2 = (char *)((int)this + 0x99f);
    this_00 = (undefined *)((int)this + 0x364);
    local_8 = 2;
    do {
      if (-1 < *pcVar2) {
        bVar1 = F_00b8fbf0(this,(int)*pcVar2);
        F_00b8c7b0(this_00,(uint)bVar1);
      }
      pcVar2 = pcVar2 + 1;
      this_00 = (undefined *)((int)this_00 + 0x28);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: FUN_00b90de0 */
unsigned int F_00b90de0(unsigned int gen_a0)
{
  GEN_ENTER(0xb90de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined * pvVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  
  if ((*(int *)((int)this + 0x3f4) != 0) && (*(char *)((int)this + 0x9a3) != '\x01')) {
    cVar1 = *(char *)((int)this + 0x3fd);
    (*(undefined4 *)(gen_frame + 0x6)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x6)), 1, 3),cVar1);
    if (cVar1 == '\0') {
      iVar7 = 0;
      if (*(char *)((int)this + 0x3f8) != '\0') {
        puVar6 = (uint *)((int)this + 0x3d4);
        do {
          uVar5 = F_005f3270(6,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3f4) + iVar7 * 8))),0);
          puVar6[-8] = uVar5;
          uVar5 = F_005f3270(6,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3f4) + 4 + iVar7 * 8))),0);
          *puVar6 = uVar5;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar7 < (int)(uint)*(byte *)((int)this + 0x3f8));
      }
      *(undefined1 *)((int)this + 0x3fd) = 1;
    }
    bVar3 = F_00b8fbf0(this,(uint)*(byte *)((int)this + 0x3f9));
    if ((cVar1 == '\0') || (*(byte *)((int)this + 0x3fb) != bVar3)) {
      iVar7 = 0;
      bVar9 = false;
      if (*(char *)((int)this + 0x3f8) != '\0') {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)((int)this + 0x3b4);
        do {
          pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x0));
          if (pvVar2 != (undefined *)0x0) {
            bVar4 = (byte)(1 << ((byte)iVar7 & 0x1f));
            bVar8 = (bVar3 & bVar4) != 0;
            if ((cVar1 != '\x01') || (((*(byte *)((int)this + 0x3fb) & bVar4) != 0) != bVar8)) {
              if (bVar8) {
                if (((byte)*(undefined4 *)((int)pvVar2 + 0xb0) & 7) != 2) {
                  F_005f51d0(pvVar2,0,0);
                  if (cVar1 == '\x01') {
                    F_005eb180(pvVar2,0,0);
                  }
                  bVar9 = true;
                }
              }
              else if (((byte)*(undefined4 *)((int)pvVar2 + 0xb0) & 7) != 1) {
                F_005f51d0(pvVar2,1,0);
              }
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*(byte *)((int)this + 0x3f8));
      }
      *(byte *)((int)this + 0x3fb) = bVar3;
      if (bVar9) {
        REFG(undefined1, 0x14c0cc0) = 1;
      }
    }
    bVar3 = F_00b8fbf0(this,(uint)*(byte *)((int)this + 0x3fa));
    if ((cVar1 == '\0') || (*(byte *)((int)this + 0x3fc) != bVar3)) {
      iVar7 = 0;
      if (*(char *)((int)this + 0x3f8) != '\0') {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)((int)this + 0x3d4);
        do {
          pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x0));
          if (pvVar2 != (undefined *)0x0) {
            bVar4 = (byte)(1 << ((byte)iVar7 & 0x1f));
            bVar9 = (bVar3 & bVar4) != 0;
            if ((cVar1 != '\x01') || (((*(byte *)((int)this + 0x3fc) & bVar4) != 0) != bVar9)) {
              if (bVar9) {
                if (((byte)*(undefined4 *)((int)pvVar2 + 0xb0) & 7) != 1) {
                  uVar10 = 1;
LAB_00b90ff8: ;
                  F_005f51d0(pvVar2,uVar10,(*(undefined4 *)(gen_frame + 0x6)));
                }
              }
              else if (((byte)*(undefined4 *)((int)pvVar2 + 0xb0) & 7) != 2) {
                uVar10 = 0;
                goto LAB_00b90ff8;
              }
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(uint)*(byte *)((int)this + 0x3f8));
      }
      *(byte *)((int)this + 0x3fc) = bVar3;
    }
  }
  return 0;
}

/* ref: FUN_00b91020 */
unsigned int F_00b91020(unsigned int gen_a0)
{
  GEN_ENTER(0xb91020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  bool bVar2;
  int iVar3;
  byte * pbVar4;
  byte bVar5;
  
  if ((*(int *)((int)this + 0x950) != 0) && (bVar2 = false, *(char *)((int)this + 0x98d) != '\0')) {
    iVar3 = 0;
    pbVar4 = (byte *)((int)this + 0x98e);
    do {
      bVar5 = 0;
      switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((*(int *)((int)this + 0x950) + 4 + iVar3))))) {
      case 0: ;
        bVar5 = *(byte *)((int)this + 0x1de);
        break;
      case 1: ;
        bVar5 = *(byte *)((int)this + 0x1df);
        break;
      case 2: ;
        bVar5 = *(byte *)((int)this + 0x1e0);
        break;
      case 3: ;
        bVar5 = *(byte *)((int)this + 0x1e1);
        break;
      case 4: ;
        bVar5 = *(byte *)((int)this + 0x1e2);
        break;
      case 5: ;
        bVar5 = *(byte *)((int)this + 0x1e3);
        break;
      case 6: ;
        bVar5 = *(byte *)((int)this + 0x1e4);
        break;
      case 7: ;
        bVar5 = *(byte *)((int)this + 0x1e5);
        break;
      case 8: ;
        bVar5 = *(byte *)((int)this + 0x1e6);
        break;
      case 9: ;
        bVar5 = *(byte *)((int)this + 0x1e7);
      }
      cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x950) + 5 + iVar3)));
      if (cVar1 != '\0') {
        bVar5 = (bVar5 & '\x01' << (cVar1 - 1U & 0x1f)) != 0;
      }
      if ((*(char *)((int)this + 0x9a2) == '\0') || (*pbVar4 != bVar5)) {
        *pbVar4 = bVar5;
        bVar2 = true;
      }
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar3 + 8;
    } while ((int)(pbVar4 + (-0x98e - (int)this)) < (int)(uint)*(byte *)((int)this + 0x98d));
    if (bVar2) {
      REFG(undefined4, 0x14a458f) = 1;
      *(undefined1 *)((int)this + 0x9a2) = 1;
    }
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf97 */
unsigned int F_00b91150(unsigned int gen_a0)
{
  GEN_ENTER(0xb91150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * pIVar2;
  undefined * pIVar3;
  
  this[0x9a3] = (undefined1)0x0;
  pIVar2 = this + 0x99f;
  pIVar3 = this + 0x38a;
  (*(int *)(gen_frame + 0x8)) = 2;
  do {
    if (-1 < (char)*pIVar2) {
      bVar1 = F_00b8fbf0(this,(int)(char)*pIVar2);
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
      if (*(int *)(pIVar3 + -6) != 0) {
        *pIVar3 = (undefined1)0x0;
        F_00b8c7b0(pIVar3 + -0x26,(*(undefined4 *)(gen_frame + 0x4)));
      }
    }
    pIVar2 = pIVar2 + 1;
    pIVar3 = pIVar3 + 0x28;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
  } while ((*(int *)(gen_frame + 0x8)) != 0);
  if (*(int *)(this + 0x3f4) != 0) {
    this[0x3fd] = (undefined1)0x0;
    F_00b90de0(this);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x2a0))(this);
  F_006fa7a0((undefined *)this);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf160 */
uint F_00b911e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb911e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  undefined4 local_8;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x284);
  this[0x9a1] = (undefined1)0x1;
  (*pcVar1)();
  ((code *)*(gen_code32 *)(*(int *)this + 0x2b4))(this);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),this[0x1de]);
  if ('\0' < (char)this[0x1de]) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 700))(this,local_8);
    return uVar2;
  }
  uVar2 = F_0042e430(this + 0x290,&REFG(undefined, 0x10f7943));
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf161 */
uint F_00b91240(unsigned int gen_a0)
{
  GEN_ENTER(0xb91240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 local_8;
  
  F_00b90bb0((undefined *)this);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),this[0x1de]);
  if ('\0' < (char)this[0x1de]) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 700))(this,local_8);
    return uVar1;
  }
  uVar1 = F_0042e430(this + 0x290,&REFG(undefined, 0x10f7943));
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf155 */
unsigned int F_00b91290(unsigned int gen_a0)
{
  GEN_ENTER(0xb91290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x9a1] == (undefined1)0x1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x284))(this);
  }
  F_00b90d80(this);
  F_00b90de0(this);
  F_00b91020(this);
  return 0;
}

/* ref: FUN_00b912c0 */
uint F_00b912c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb912c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x133eff0);
  puVar1 = REFG(undefined * PTR32, 0x1323788);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x133eff0));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"ShowScreenInfo",((code *)REFP(0xb8cf30)));
    F_00a01cc0(param_1,iVar5,"OnStartCutscene",((code *)REFP(0xb8cfc0)));
    F_00a01cc0(param_1,iVar5,"OnEndCutscene",((code *)REFP(0xb8d060)));
    F_00a01cc0(param_1,iVar5,"OnFinishCutscene",((code *)REFP(0xb8d130)));
    F_00a01c80(param_1,iVar5,"SCREEN_INFO_FAILED",2);
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
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
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x133eff4),REFG(undefined * PTR32, 0x133eff0),0);
  return 1;
}

/* ref: FUN_00b914b0 */
uint F_00b914b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb914b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2a4))(this);
  if (uVar1 != 0) {
    F_0042e430((undefined *)((int)this + 0x118),uVar1);
    ((code *)*(gen_code32 *)(*(int *)this + 0x2b0))
              (this,*(undefined4 *)((int)this + 0xf8),uVar1,REFG(undefined * PTR32, 0x133eff0));
    uVar3 = 0;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x2a8))(this);
    uVar1 = F_00754440((undefined *)((int)this + 0xfc),uVar2,uVar1,uVar3);
    return uVar1;
  }
  F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x133eff0));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2ac))(this);
  if ((char)uVar1 == '\x01') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x27c))(this);
    if ((char)uVar1 == '\x01') {
      uVar1 = F_006bccd0(this);
      return uVar1;
    }
  }
  else {
    uVar1 = F_00a51200(0x4c,4,0,0,0);
  }
  return uVar1;
}

/* ref: FUN_00b91560 */
unsigned int F_00b91560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb91560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 == 8) {
    F_00b914b0(this);
  }
  return 0;
}

/* ref: FUN_00b91580 */
uint F_00b91580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb91580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8ca80(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x1101234));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x1101224));
  *(undefined4 *)((int)this + 0x9a8) = 0;
  *(undefined4 *)((int)this + 0x9ac) = 0;
  *(undefined4 *)((int)this + 0x9b0) = 0;
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseBaileys::vf159 */
byte F_00b915c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb915c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int iVar1;
  undefined1 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  
  ((uint *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  *(undefined * PTR32 *)(this + 0x954) = &REFG(undefined, 0x10f8110);
  this[0x99e] = (undefined1)0x8;
  *(undefined4 *)(this + 0x98e) = 0;
  *(undefined * PTR32 *)(this + 0x950) = &REFG(undefined, 0x10f8170);
  this[0x98d] = (undefined1)0x4;
  this[0x9a2] = (undefined1)0x0;
  *(undefined * PTR32 *)(this + 900) = &REFG(undefined, 0x10f8190);
  *(undefined2 *)(this + 0x388) = 7;
  this[0x38a] = (undefined1)0x0;
  this[0x99f] = (undefined1)0x0;
  *(undefined * PTR32 *)(this + 0x3ac) = &REFG(undefined, 0x10f81c8);
  *(undefined2 *)(this + 0x3b0) = 3;
  this[0x3b2] = (undefined1)0x0;
  this_00 = this + 0x9a8;
  this[0x9a0] = (undefined1)0x3;
  iVar1 = *(int *)(this + 0x9ac);
  if (*(int *)this_00 != iVar1) {
    uVar3 = F_00b97ff0(iVar1,iVar1,*(int *)this_00,(*(undefined4 *)(gen_frame + 0x8)));
    *(uint *)(this + 0x9ac) = uVar3;
  }
  F_00b99200(this_00,7);
  puVar2 = *(undefined1 * PTR32 *)this_00;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 7;
  *(undefined4 *)(puVar2 + 8) = 7;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  puVar2[0x14] = 0;
  iVar1 = *(int *)this_00;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 7;
  *(undefined4 *)(iVar1 + 0x20) = 7;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined1 *)(iVar1 + 0x2c) = 0;
  iVar1 = *(int *)this_00;
  *(undefined1 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 7;
  *(undefined4 *)(iVar1 + 0x38) = 7;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined1 *)(iVar1 + 0x44) = 0;
  iVar1 = *(int *)this_00;
  *(undefined1 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 7;
  *(undefined4 *)(iVar1 + 0x50) = 7;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined1 *)(iVar1 + 0x5c) = 0;
  iVar1 = *(int *)this_00;
  *(undefined1 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 7;
  *(undefined4 *)(iVar1 + 0x68) = 7;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined1 *)(iVar1 + 0x74) = 0;
  iVar1 = *(int *)this_00;
  *(undefined1 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 7;
  *(undefined4 *)(iVar1 + 0x80) = 7;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined1 *)(iVar1 + 0x8c) = 0;
  iVar1 = *(int *)this_00;
  *(undefined1 *)(iVar1 + 0x90) = 0;
  *(undefined4 *)(iVar1 + 0x94) = 7;
  *(undefined4 *)(iVar1 + 0x98) = 7;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  *(undefined1 *)(iVar1 + 0xa4) = 0;
  ((uint *)(gen_frame + 0xc))[0] = 0x2f7eb7;
  ((uint *)(gen_frame + 0xc))[1] = 0x301000;
  ((uint *)(gen_frame + 0xc))[2] = 0x305b73;
  uVar3 = 0;
  do {
    pvVar4 = (undefined *)F_005f3270(6,((uint *)(gen_frame + 0xc))[(int)(uVar3)],0);
    if (pvVar4 != (undefined *)0x0) {
      F_005eb180(pvVar4,0,0);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  uVar3 = 0;
  do {
    pvVar4 = (undefined *)F_005f3270(6,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 (*)[6])REFP(0x10f80f4)) + uVar3))),0);
    if (pvVar4 != (undefined *)0x0) {
      F_005eb180(pvVar4,0,0);
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x1c);
  F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c));
  return 1;
}

/* ref: FUN_00b917a0 */
uint F_00b917a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb917a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x254))(this);
  if (uVar1 == 0) {
    F_0042e430((undefined *)((int)this + 0x118),REFG(undefined * PTR32, 0x133eff8));
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x25c))(this);
    if ((char)uVar1 == '\x01') {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24c))(this);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar1;
    }
  }
  else {
    F_0042e430((undefined *)((int)this + 0x118),uVar1);
    ((code *)*(gen_code32 *)(*(int *)this + 0x260))
              (this,*(undefined4 *)((int)this + 0xf8),uVar1,REFG(undefined * PTR32, 0x133eff8));
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x264))(this);
    if ((char)uVar2 == '\0') {
      uVar4 = 0;
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 600))(this);
      uVar1 = F_00754440((undefined *)((int)this + 0xfc),uVar2,uVar1,uVar4);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 600))(uVar1);
    F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s/%s",uVar1);
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    F_0042e430((undefined *)((int)this + 0x7c),uVar1);
    F_006e8f60(this,0,0xffffffff);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf36 */
byte F_00b918b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb918b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  undefined * this;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = F_006f4180((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(int * PTR32 *)&gen_args[5]));
  if (bVar1 != 0) {
    return 1;
  }
  this = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar2 = F_00b9a750(*(undefined4 *)((int)this + 8));
  uVar3 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x118);
  F_00b9ae60(*(undefined4 *)((int)this + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar3 = F_00b9a940(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar3 != 0) {
    (*(int * PTR32 *)&gen_args[5]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[5]) != *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar4 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[5]) + 0xc)));
        uVar3 = F_0042a990((int)(*(int * PTR32 *)&gen_args[5]) + 0x10);
        F_00a01c80(this,uVar2 + 1,uVar3,uVar4);
        F_00732c70(&(*(int * PTR32 *)&gen_args[5]));
      } while ((*(int * PTR32 *)&gen_args[5]) != (int *)*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))))((*(undefined * PTR32 *)&gen_args[0]),0);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 600))))((*(undefined * PTR32 *)&gen_args[0]));
  F_00754440((*(undefined * PTR32 *)&gen_args[0]) + 0xfc,uVar3,uVar2,(*(undefined4 *)&gen_args[2]));
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf40 */
uint F_00b919a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb919a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined * pIVar2;
  
  if ((char)param_1 == '\x01') {
    F_0042ccf0(param_3,param_2);
  }
  else {
    F_0042e430(param_3,&REFG(undefined, 0x10f7933));
  }
  uVar1 = 0;
  pIVar2 = this + 0x400;
  do {
    if (param_3 == pIVar2) {
      if ((int)uVar1 < 8) {
        uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28c))(this,uVar1,param_3);
        return uVar1;
      }
      if (uVar1 == 8) {
        uVar1 = F_00b914b0(this);
      }
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    pIVar2 = pIVar2 + 0x54;
  } while ((int)uVar1 < 9);
  return uVar1;
}

/* ref: FUN_00b91a10 */
uint F_00b91a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb91a10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar3 = param_1 & 0xffff | 0x80030000;
  if (param_2 < 0x2712) {
    if (param_2 == 0x2711) {
      puVar1 = (undefined4 *)F_00406b90(0xe68,0,0);
      if (puVar1 != (undefined4 *)0x0) {
        F_00b8e040(puVar1,uVar3,0x2711);
        *puVar1 = (*(undefined * PTR32 (*)[177])REFP(0x10ff014));
        puVar1[0xc4] = (*(undefined * PTR32 (*)[3])REFP(0x10ff004));
        *(undefined1 *)(puVar1 + 0x398) = 0;
        return (uint)puVar1;
      }
    }
    else {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 1: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d2d0(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 2: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d300(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 3: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d330(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 4: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d360(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 5: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d390(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 6: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d3c0(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 7: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d420(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 8: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d3f0(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 9: ;
        pvVar2 = (undefined *)F_00406b90(0x9b0,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d450(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 10: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d480(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0xb: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d4e0(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0xc: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d510(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0xd: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d4b0(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0xe: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d540(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0xf: ;
        pvVar2 = (undefined *)F_00406b90(0x9b8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b91580(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x10: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d6d0(pvVar2,uVar3,param_2);
          return uVar3;
        }
      }
    }
  }
  else if (param_2 < 0x4e22) {
    if (param_2 == 0x4e21) {
switchD_00b91f23_caseD_4e24: ;
      puVar1 = (undefined4 *)F_00406b90(0x9a8,0,0);
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      F_00b8ca80(puVar1,uVar3,param_2);
      *puVar1 = (*(undefined * PTR32 (*)[173])REFP(0x10fc364));
      puVar1[0xc4] = (*(undefined * PTR32 (*)[3])REFP(0x10fc354));
      return (uint)puVar1;
    }
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0x2712: ;
      pvVar2 = (undefined *)F_00406b90(0xe68,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b98800(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2713: ;
      pvVar2 = (undefined *)F_00406b90(0xe68,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b90380(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2714: ;
      pvVar2 = (undefined *)F_00406b90(0xe68,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b98860(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2715: ;
      pvVar2 = (undefined *)F_00406b90(0xe60,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b988c0(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2716: ;
      pvVar2 = (undefined *)F_00406b90(0xe60,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b98910(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2717: ;
      pvVar2 = (undefined *)F_00406b90(0xe60,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b98960(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2718: ;
      pvVar2 = (undefined *)F_00406b90(0xe60,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b989b0(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x2719: ;
      pvVar2 = (undefined *)F_00406b90(0xe60,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b903c0(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x271a: ;
      pvVar2 = (undefined *)F_00406b90(0xe68,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b98a00(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x271b: ;
      pvVar2 = (undefined *)F_00406b90(0xe68,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b98a60(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x271c: ;
      pvVar2 = (undefined *)F_00406b90(0xe68,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b98ac0(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x271d: ;
      pvVar2 = (undefined *)F_00406b90(0xe68,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b98b20(pvVar2,uVar3,param_2);
        return uVar3;
      }
      break;
    case 0x271e: ;
      pvVar2 = (undefined *)F_00406b90(0xe68,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b98b80(pvVar2,uVar3,param_2);
        return uVar3;
      }
    }
  }
  else if (param_2 < 0x7532) {
    if (param_2 == 0x7531) {
      pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b8d7e0(pvVar2,uVar3,0x7531);
        return uVar3;
      }
    }
    else {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 0x4e22: ;
      case 0x4e25: ;
      case 0x4e29: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d750(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x4e23: ;
      case 0x4e26: ;
      case 0x4e2a: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d780(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x4e24: ;
      case 0x4e28: ;
        goto switchD_00b91f23_caseD_4e24;
      case 0x4e27: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d7b0(pvVar2,uVar3,param_2);
          return uVar3;
        }
      }
    }
  }
  else if (param_2 < 0x9c44) {
    if (param_2 < 0x9c41) {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 0x7532: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d810(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x7533: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d840(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x7534: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d870(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x7535: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d8a0(pvVar2,uVar3,param_2);
          return uVar3;
        }
        break;
      case 0x7536: ;
        pvVar2 = (undefined *)F_00406b90(0x9a8,0,0);
        if (pvVar2 != (undefined *)0x0) {
          uVar3 = F_00b8d8d0(pvVar2,uVar3,param_2);
          return uVar3;
        }
      }
    }
    else {
      pvVar2 = (undefined *)F_00406b90(0x9b0,0,0);
      if (pvVar2 != (undefined *)0x0) {
        uVar3 = F_00b8d900(pvVar2,uVar3,param_2);
        return uVar3;
      }
    }
  }
  else if ((param_2 == 65000) && (pvVar2 = (undefined *)F_00406b90(0x9a8,0,0), pvVar2 != (undefined *)0x0))
  {
    uVar3 = F_00b8dd20(pvVar2,uVar3,65000);
    return uVar3;
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonQarn::vf158 */
uint F_00b921f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb921f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined1 IVar1;
  undefined1 IVar2;
  undefined1 IVar3;
  undefined1 * puVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  undefined1 * puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  IVar1 = this[0x1e1];
  IVar2 = this[0x1de];
  IVar3 = this[0x1e2];
  uVar5 = F_0042a990((0xdb1 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c));
  F_0042e430(param_2,uVar5);
  F_00487650(param_3,&(*(undefined * PTR32 *)(gen_frame + 0x10)),*param_3,param_3[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this + 0x400;
  (*(uint *)(gen_frame + 0xc)) = 1;
  uVar5 = 0;
  do {
    if (((*(uint *)(gen_frame + 0xc)) & (int)(char)IVar2) == 0) {
LAB_00b922ba: ;
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) << 1;
    }
    else if (((param_1 != 200) && (param_1 != 0xc9)) ||
            (((int)(char)IVar1 != uVar5 && ((int)(char)IVar3 != uVar5)))) {
      uVar9 = REFG(undefined4, 0x108cc50);
      uVar6 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x10)));
      F_0042cc20(((undefined1 *)(gen_frame + 0x14)),uVar6,uVar9);
      F_0049f6d0(param_3,((undefined1 *)(gen_frame + 0x14)));
      F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      goto LAB_00b922ba;
    }
    uVar5 = uVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x54;
  } while (uVar5 < 4);
  uVar9 = REFG(undefined4, 0x108cc50);
  uVar5 = F_0042a990((0xdb3 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),uVar5,uVar9);
  puVar7 = (undefined1 *)param_3[1];
  if (((undefined1 *)(gen_frame + 0x14)) < puVar7) {
    puVar4 = (undefined1 *)*param_3;
    if (((undefined1 *)(gen_frame + 0x14)) < puVar4) goto LAB_00b92338;
    if (puVar7 == (undefined1 *)param_3[2]) {
      F_00488ca0(param_3,1);
    }
    this_00 = (undefined *)param_3[1];
    if (this_00 == (undefined *)0x0) goto LAB_00b92356;
    puVar7 = ((undefined1 *)GEN_TOP(((((int)((undefined1 *)(gen_frame + 0x14)) - (int)puVar4) / 0x54) * 0x54 + *param_3)));
  }
  else {
LAB_00b92338: ;
    if (puVar7 == (undefined1 *)param_3[2]) {
      F_00488ca0(param_3,1);
    }
    this_00 = (undefined *)param_3[1];
    if (this_00 == (undefined *)0x0) goto LAB_00b92356;
    puVar7 = ((undefined1 *)(gen_frame + 0x14));
  }
  F_0042cbc0(this_00,puVar7);
LAB_00b92356: ;
  param_3[1] = param_3[1] + 0x54;
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar8;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf1 */
uint F_00b92380(unsigned int gen_a0)
{
  GEN_ENTER(0xb92380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006bccf0(this);
  uVar1 = F_00b917a0(this);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleIfrit::vf30 */
uint F_00b92390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb92390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * in_ecx;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  if (param_2 < 7) {
    in_ecx = this + param_2 * 0x54 + 0x6f4;
  }
  else {
    in_ecx = ((undefined *)GEN_TOP(((param_2 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
  }
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar4 = REFG(undefined4, 0x108cc50);
  uVar2 = F_0042a990(in_ecx);
  F_0042cc20(((undefined1 *)(gen_frame + 0x24)),uVar2,uVar4);
  F_007115c0(this,((undefined1 *)(gen_frame + 0x24)),&(*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x20)),param_3);
  F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar3;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleTitan::vf30 */
uint F_00b92470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb92470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * in_ecx;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  if (param_2 < 7) {
    in_ecx = this + param_2 * 0x54 + 0x6f4;
  }
  else {
    in_ecx = ((undefined *)GEN_TOP(((param_2 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
  }
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar4 = REFG(undefined4, 0x108cc50);
  uVar2 = F_0042a990(in_ecx);
  F_0042cc20(((undefined1 *)(gen_frame + 0x24)),uVar2,uVar4);
  F_007115c0(this,((undefined1 *)(gen_frame + 0x24)),&(*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x20)),param_3);
  F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar3;
}

/* ref: FUN_00b92550 */
uint F_00b92550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb92550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  int * piVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar1 = F_00463610(0,*(undefined4 *)((int)this + 0x9e0),3);
  (*(uint *)(gen_frame + 0x20)) = uVar1;
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar4 = REFG(undefined4, 0x108cc50);
  uVar1 = F_0042a990(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x24)),uVar1,uVar4);
  F_007115c0(this,((undefined1 *)(gen_frame + 0x24)),&(*(int * PTR32 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x20)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar3;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder001::vf176 */
uint F_00b92620(unsigned int gen_a0)
{
  GEN_ENTER(0xb92620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = REFG(undefined4, 0x108cc50);
  uVar1 = F_0042a990((0x57b - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar1,uVar3);
  F_00b92550(this,((undefined1 *)(gen_frame + 0x4)),3000);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf176 */
uint F_00b92690(unsigned int gen_a0)
{
  GEN_ENTER(0xb92690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b92550(this,(0x70a - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder006::vf176 */
uint F_00b926b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb926b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b92550(this,(0x772 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder007::vf176 */
uint F_00b926d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb926d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b92550(this,(0x7d4 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder008::vf176 */
uint F_00b926f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb926f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b92550(this,(0x836 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder009::vf176 */
uint F_00b92710(unsigned int gen_a0)
{
  GEN_ENTER(0xb92710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = REFG(undefined4, 0x108cc50);
  uVar1 = F_0042a990((0x8a5 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar1,uVar3);
  F_00b92550(this,((undefined1 *)(gen_frame + 0x4)),3000);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf176 */
uint F_00b92780(unsigned int gen_a0)
{
  GEN_ENTER(0xb92780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = REFG(undefined4, 0x108cc50);
  uVar1 = F_0042a990((0x8ff - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),uVar1,uVar3);
  F_00b92550(this,((undefined1 *)(gen_frame + 0x4)),3000);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder011::vf176 */
uint F_00b927f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb927f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b92550(this,this + 0x550,3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder012::vf176 */
uint F_00b92810(unsigned int gen_a0)
{
  GEN_ENTER(0xb92810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b92550(this,(0xc1e - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder013::vf176 */
uint F_00b92830(unsigned int gen_a0)
{
  GEN_ENTER(0xb92830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b92550(this,this + 0x454,3000);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder014::vf176 */
uint F_00b92850(unsigned int gen_a0)
{
  GEN_ENTER(0xb92850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b92550(this,(0xce6 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),3000);
  return uVar1;
}

/* ref: FUN_00b92870 */
uint F_00b92870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb92870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  int * piVar6;
  float * pfVar7;
  float * pfVar8;
  undefined * this_00;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  float fVar12;
  int iVar13;
  undefined * pvVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar4 = *(ushort *)((int)this + param_1 * 2 + 0x4c0);
  (*(float *)(gen_frame + 0x58)) = gen_bits2f(param_1 * 0x54 + 0x220 + (int)this);
  (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)((int)this + (uint)uVar4 * 0xc + 0x4d0);
  uVar5 = F_006b8c00();
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = (undefined *)(uVar5 + 0x100);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar6 = (int *)F_004296a0(8,0,0x2c4);
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0x64));
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
  if (piVar6 != (int *)0x0) {
    *piVar6 = 0;
    piVar6[1] = 0;
  }
  *piVar6 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  piVar6 = *(int * PTR32 *)((int)this + 0x58);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_00710cb0((*(undefined * PTR32 *)(gen_frame + 0x64)),this,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x58))),&(*(int * PTR32 *)(gen_frame + 0x8)),piVar6,param_2,
               (uint)*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x60)) + 5),0x3d,0,0x279,0,0,0,0);
  uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xb8))(piVar6);
  if ((char)uVar5 == '\0') goto LAB_00b92abe;
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = REFG(void * PTR32, 0x1379694);
  iVar13 = (*(int * PTR32 *)(gen_frame + 0x60))[1];
  pfVar7 = (float *)0x0;
  (*(float * PTR32 *)(gen_frame + 0x68)) = (float *)0x0;
  (*(float *)(gen_frame + 0x58)) = 0.0;
  (*(char *)(gen_frame + 0x6f)) = '\0';
  if ((char)iVar13 == '\x01') {
    (*(char *)(gen_frame + 0x6f)) = '\x01';
  }
  else if ((char)iVar13 == '\x02') {
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(char *)(gen_frame + 0x6f)) = '\x01';
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    pfVar7 = (float *)F_00a5feb0(piVar6);
    pfVar8 = (float *)F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0x40)) = (float)((float10)*pfVar8 - (float10)*pfVar7);
    fVar12 = pfVar8[1];
    fVar1 = pfVar7[1];
    (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar12 - (float10)fVar1);
    fVar2 = pfVar8[2];
    fVar3 = pfVar7[2];
    (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar8 - (float10)*pfVar7);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar12 - (float10)fVar1);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar12 = F_00aae7a0(&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x54)) = fVar12;
    (*(float *)(gen_frame + 0x50)) = gen_bits2f(piVar6[0x2c]);
    fVar9 = ((float10)GEN_TOD(gen_bits2f(piVar6[0x2c])));
    fVar10 = (float10)fVar12;
    if (fVar9 < fVar10) {
      (*(float *)(gen_frame + 0x50)) = (float)(fVar10 - fVar9);
      fVar12 = ((float)GEN_TOF((((float10)(float)(fVar10 - fVar9) * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                      (float10)*(double *)&REFG(undefined, 0x1080228))));
      (*(float *)(gen_frame + 0x50)) = fVar12;
      if (!((float10)*(float *)&REFG(undefined, 0x10f7888) < (float10)fVar12)) goto LAB_00b92a1b;
LAB_00b92a4b: ;
      fVar12 = F_00a5ffa0(piVar6,(*(undefined * PTR32 *)(gen_frame + 0x5c)));
      (*(float *)(gen_frame + 0x58)) = fVar12;
      pfVar7 = &(*(float *)(gen_frame + 0x58));
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x64));
    }
    else {
LAB_00b92a1b: ;
      pfVar7 = (*(float * PTR32 *)(gen_frame + 0x68));
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x64));
      if (fVar10 < fVar9) {
        (*(float *)(gen_frame + 0x50)) = (float)(fVar9 - fVar10);
        fVar12 = ((float)GEN_TOF((((float10)(float)(fVar9 - fVar10) * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                        (float10)*(double *)&REFG(undefined, 0x1080228))));
        (*(float *)(gen_frame + 0x50)) = fVar12;
        if ((float10)*(float *)&REFG(undefined, 0x10f7888) < (float10)fVar12) goto LAB_00b92a4b;
      }
    }
  }
  iVar13 = *(*(int * PTR32 *)(gen_frame + 0x60));
  if (iVar13 == 0) {
    if (pfVar7 != (float *)0x0) {
      iVar13 = 0x30f;
      goto LAB_00b92a94;
    }
  }
  else {
LAB_00b92a94: ;
    uVar15 = 0;
    uVar16 = 1;
    uVar5 = F_00a5f290(piVar6);
    F_006d4be0(uVar5,iVar13,pfVar7,uVar16,uVar15);
  }
  if ((*(char *)(gen_frame + 0x6f)) != '\0') {
    uVar16 = 1;
    pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0x5c));
    uVar5 = F_00a5f290(piVar6);
    F_006da750(this_00,uVar5,pvVar14,uVar16);
  }
LAB_00b92abe: ;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
  uVar11 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  return (uint)uVar11;
}

/* ref: FUN_00b92af0 */
uint F_00b92af0(unsigned int gen_a0)
{
  GEN_ENTER(0xb92af0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  this = (undefined *)*puVar4;
  if (this != (undefined *)0x0) {
    uVar3 = 0;
    bVar2 = 0;
    bVar1 = F_00a01f40(((byte *)(gen_frame + 0x8)),2);
    if (bVar1 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    }
    bVar1 = F_00a01f80(((byte *)(gen_frame + 0x8)),3);
    if (bVar1 != 0) {
      bVar2 = F_00a01e10(((byte *)(gen_frame + 0x8)),3);
      (*(byte *)(gen_frame + 0x2b)) = bVar2;
    }
    F_00b92870(this,uVar3,(uint)(bVar2 == 0));
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentNpcEventHandler::vf148 */
uint F_00b92ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb92ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(this + 0x534);
  if ((int)uVar1 < (int)(*(ushort *)(this + 0x536) - 1)) {
    uVar1 = F_00b92870(this,uVar1,1);
    *(short *)(this + 0x534) = *(short *)(this + 0x534) + 1;
    return uVar1;
  }
  if (uVar1 == *(ushort *)(this + 0x536) - 1) {
    uVar1 = F_00b92870(this,uVar1,0);
    *(short *)(this + 0x534) = *(short *)(this + 0x534) + 1;
  }
  return uVar1;
}

/* ref: Client::Game::InstanceContent::ContentNpcEventHandler::vf53 */
uint F_00b92bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb92bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*(ushort *)(this + 0x534);
  if ((int)uVar1 < (int)(*(ushort *)(this + 0x536) - 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (uVar1 != *(ushort *)(this + 0x536) - 1) {
      uVar1 = F_006f3a50(this,0,0);
      return uVar1;
    }
  }
  uVar1 = F_00b92870(this,uVar1,uVar2);
  *(short *)(this + 0x534) = *(short *)(this + 0x534) + 1;
  return uVar1;
}

/* ref: FUN_00b92c30 */
uint F_00b92c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb92c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    if ((*(uint *)&REFG(undefined, 0x14c5908) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14c5908) = *(uint *)&REFG(undefined, 0x14c5908) | 1;
      REFG(undefined4 * PTR32, 0x14c58f0) = (undefined4 *)0x0;
      puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
      REFG(undefined4 * PTR32, 0x14c58f0) = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      *REFG(undefined4 * PTR32, 0x14c58f0) = &REFG(undefined4 * PTR32, 0x14c58f0);
      *(undefined4 *)&REFG(undefined, 0x14c58f4) = 0;
      *(undefined4 *)&REFG(undefined, 0x14c58f8) = 0;
      *(undefined4 *)&REFG(undefined, 0x14c58fc) = 0;
      *(undefined4 *)&REFG(undefined, 0x14c5900) = 0;
      F_00c47de6(((code *)REFP(0x107c900)));
    }
    puVar1 = &REFG(undefined4 * PTR32, 0x14c58f0);
  }
  uVar2 = F_006c5ef0(param_1,puVar1);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentColosseum::vf154 */
uint F_00b92cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb92cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (((char)param_1 != '\x01') && ((char)param_2 == '\x01')) {
    F_00b92c30(this,0x655,0);
  }
  uVar1 = F_006c4ee0((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b92d10 */
uint F_00b92d10(unsigned int gen_a0)
{
  GEN_ENTER(0xb92d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xe5c);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (iVar1 - 0x514U < 9) {
      uVar2 = F_00b92550(this,iVar1 * 0x54 + -0x1a0a4 + (int)this,3000);
      return uVar2;
    }
    if (iVar1 < 7) {
      uVar2 = F_00b92550(this,iVar1 * 0x54 + 0x6f4 + (int)this,3000);
      return uVar2;
    }
    uVar2 = F_00b92550(this,(iVar1 - *(int *)((int)this + 0x97c)) * 0x54 +
                              *(int *)((int)this + 0x94c),3000);
  }
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf37 */
byte F_00b92db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb92db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  undefined * pIVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  pIVar2 = in_ecx + 0xce0;
  while (*(int *)pIVar2 != param_3) {
    uVar4 = uVar4 + 1;
    pIVar2 = pIVar2 + 4;
    if (5 < uVar4) {
      bVar1 = F_00b90b00(in_ecx,param_3);
      return bVar1;
    }
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    if ((REFG(undefined4, 0x14b4ee5) & 1) == 0) {
      uVar3 = F_006e90a0(in_ecx,3000,0);
      *(uint *)(in_ecx + 0xcf0) = uVar3;
    }
    F_00b8e0d0(in_ecx,in_ebx);
    ((code *)*(gen_code32 *)(*(int *)in_ecx + 0x2c0))(in_ecx);
    *(undefined4 *)(in_ecx + uVar4 * 4 + 0xce0) = 0;
    return 0;
  case 1: ;
    F_00b92d10(in_ecx);
    *(undefined4 *)(in_ecx + uVar4 * 4 + 0xce0) = 0;
    return 0;
  case 2: ;
    F_006bd080(in_ecx,0,0,0);
    *(undefined4 *)(in_ecx + uVar4 * 4 + 0xce0) = 0;
    return 0;
  case 3: ;
    F_00b92c30(in_ecx,0x5fa,0);
    if ((REFG(undefined4, 0x14b4ee5) & 8) == 0) {
      uVar3 = F_006e90a0(in_ecx,5000,0);
      *(uint *)(in_ecx + 0xcf4) = uVar3;
      *(undefined4 *)(in_ecx + uVar4 * 4 + 0xce0) = 0;
      return 0;
    }
    goto switchD_00b92de6_default;
  case 4: ;
    uVar5 = 0x48;
    break;
  case 5: ;
    uVar5 = 0x4b;
    break;
  default: ;
    goto switchD_00b92de6_default;
  }
  F_00a6e080(&REFG(undefined, 0x14a9e40),uVar5,0,0);
switchD_00b92de6_default: ;
  *(undefined4 *)(in_ecx + uVar4 * 4 + 0xce0) = 0;
  return 0;
}

/* ref: FUN_00b92ef0 */
uint F_00b92ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb92ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x133eff8);
  puVar1 = REFG(undefined * PTR32, 0x1323700);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x133eff8));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 == 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
    iVar5 = uVar3 + 2;
    F_00a01c40(param_1,iVar5,"className",puVar2);
    F_00a01c80(param_1,iVar5,"referenceCount",1);
    F_00a01cc0(param_1,iVar5,"ContentTalk",((code *)REFP(0xb92af0)));
    if (puVar1 == (undefined *)0x0) {
      F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
      F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
      F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
      F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    }
    else {
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
    }
  }
  else {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  }
  F_00754330(param_2,REFG(undefined * PTR32, 0x133effc),REFG(undefined * PTR32, 0x133eff8),0);
  return 1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf42 */
uint F_00b93390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb93390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  
  if (param_1 < 0x80000000) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x288))(this,param_1,param_2,param_3);
  }
  else {
    uVar1 = param_1 + 0x7fffffff;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      uVar1 = F_00476000();
      F_0071e180(this,(uint)*(ushort *)(this + 0x33c) * 0x3c,0,uVar1,0);
      F_00b8ac70(this,0);
      if (this[0x98c] != (undefined1)0x5) {
        F_00b8cea0(this);
        F_00b92c30(this,0x5fb,0);
        if (this[0x98c] == (undefined1)0x2) {
          F_00a6e080(&REFG(undefined, 0x14a9e40),0x39,0,0);
        }
      }
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x290))(this);
      return uVar1;
    case 1: ;
      uVar1 = F_00b8acf0(this,param_2);
      return uVar1;
    case 2: ;
      F_00b8ac70(this,1);
      F_00b8cee0(this);
      this[0x9a4] = (undefined1)0x1;
      if (param_2 != 0) {
        F_00b8acf0(this,param_2);
      }
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x294))(this,param_3);
      return uVar1;
    case 3: ;
      uVar1 = F_00b8cee0(this);
      this[0x9a4] = (undefined1)0x1;
      return uVar1;
    case 4: ;
      uVar1 = F_00476000();
      F_0071e180(this,param_2,0,uVar1,0);
      uVar1 = F_00b8cea0(this);
      return uVar1;
    case 5: ;
      F_00b8cee0(this);
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,0,0x3c,1);
      return uVar1;
    case 6: ;
      uVar1 = F_00476000();
      F_0071e180(this,param_2,0,uVar1,0);
      F_00b8ac70(this,3);
      F_00b8cea0(this);
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x290))(this);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b93540 */
uint F_00b93540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb93540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_00b92c30(this,param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf30 */
uint F_00b93660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb93660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 * puVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  if (param_2 < 7) {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = this + param_2 * 0x54 + 0x6f4;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP(((param_2 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
  }
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x20));
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  if ((byte)param_5 != 0) {
    (*(uint *)(gen_frame + 0x1c)) = (uint)(byte)param_5;
    puVar5 = param_4;
    do {
      uVar7 = *puVar5;
      (*(undefined4 *)(gen_frame + 0x8c)) = 0;
      (*(undefined4 *)(gen_frame + 0x8c)) = uVar7;
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = &(*(undefined4 *)(gen_frame + 0x8c));
      (*(char *)(gen_frame + 0x94)) = '\0';
      if ((*(uint *)(gen_frame + 0x28)) <= (*(int *)(gen_frame + 0x30)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x20)),1);
      }
      uVar4 = (*(int *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x30));
      if ((*(uint *)(gen_frame + 0x28)) <= uVar4) {
        uVar4 = uVar4 - (*(uint *)(gen_frame + 0x28));
      }
      if (*(int *)((*(int *)(gen_frame + 0x24)) + uVar4 * 4) == 0) {
        uVar3 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x24)) + uVar4 * 4) = uVar3;
      }
      puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x24)) + uVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x94)) != -1) && (puVar1 != &(*(undefined4 *)(gen_frame + 0x8c)))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar1;
          (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x90));
          if ((*(char *)(gen_frame + 0x94)) == '\0') {
            F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
          }
          else if ((*(char *)(gen_frame + 0x94)) == '\x01') {
            F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
          }
        }
      }
      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != (undefined4 *)0x0) {
        if (((*(char *)(gen_frame + 0x94)) != '\0') && ((*(char *)(gen_frame + 0x94)) == '\x01')) {
          this_00 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x90));
          *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
          if (*(int *)((int)this_00 + 0x54) < 1) {
            F_0042c880(this_00);
            F_00406ad0(this_00);
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)0x0;
        (*(char *)(gen_frame + 0x94)) = -1;
      }
      puVar5 = puVar5 + 1;
      uVar4 = (*(uint *)(gen_frame + 0x1c)) - 1;
      (*(uint *)(gen_frame + 0x1c)) = uVar4;
    } while (uVar4 != 0);
  }
  uVar7 = REFG(undefined4, 0x108cc50);
  uVar4 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x18)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x38)),uVar4,uVar7);
  F_007115c0(this,((undefined1 *)(gen_frame + 0x38)),&(*(int * PTR32 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x14)),param_3);
  F_0042c880(((undefined1 *)(gen_frame + 0x38)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x20)));
  uVar6 = F_00429760((*(int * PTR32 *)(gen_frame + 0x20)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return (uint)uVar6;
}

/* ref: FUN_00b93860 */
uint F_00b93860(unsigned int gen_a0)
{
  GEN_ENTER(0xb93860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  *(undefined4 *)((int)this + 0x9a8) = 0;
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
  piVar4 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
  if (piVar4 != (int *)0x0) {
    *piVar4 = 0;
    piVar4[1] = 0;
  }
  *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0x14));
  (*(int *)(gen_frame + 0x4)) = (int)this + 0x400;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined4, 0x11014e8);
  do {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x14)));
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x2;
    do {
      iVar2 = *(*(int * PTR32 *)(gen_frame + 0x8));
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(int *)(gen_frame + 0x2c)) = iVar2;
      (*(int * PTR32 *)(gen_frame + 0x30)) = &(*(int *)(gen_frame + 0x2c));
      (*(char *)(gen_frame + 0x34)) = '\0';
      if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x14)),1);
      }
      uVar6 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x1c)) <= uVar6) {
        uVar6 = uVar6 - (*(uint *)(gen_frame + 0x1c));
      }
      if (*(int *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4) == 0) {
        uVar5 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4) = uVar5;
      }
      piVar4 = *(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4);
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0;
        piVar4[1] = 0;
        *(undefined1 *)(piVar4 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x34)) != -1) && (piVar4 != &(*(int *)(gen_frame + 0x2c)))) {
          if ((*(char *)(gen_frame + 0x34)) == '\0') {
            *piVar4 = *(*(int * PTR32 *)(gen_frame + 0x30));
            *(undefined1 *)(piVar4 + 2) = 0;
          }
          else {
            if ((*(char *)(gen_frame + 0x34)) != '\x01') goto LAB_00b939f4;
            iVar2 = *(*(int * PTR32 *)(gen_frame + 0x30));
            piVar1 = (int *)(iVar2 + 0x54);
            *piVar1 = *piVar1 + 1;
            *piVar4 = iVar2;
            *(undefined1 *)(piVar4 + 2) = 1;
          }
          piVar4[1] = (int)piVar4;
        }
      }
LAB_00b939f4: ;
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
      if ((*(int * PTR32 *)(gen_frame + 0x30)) != (int *)0x0) {
        if (((*(char *)(gen_frame + 0x34)) != '\0') && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
          pvVar3 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x30));
          *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
          if (*(int *)((int)pvVar3 + 0x54) < 1) {
            F_0042c880(pvVar3);
            F_00406ad0(pvVar3);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x0;
        (*(char *)(gen_frame + 0x34)) = -1;
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
      piVar4 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x10)) + -1);
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar4;
    } while (piVar4 != (int *)0x0);
    F_007143e0(this,(0xdb2 - *(int *)((int)this + 0x97c)) * 0x54 + *(int *)((int)this + 0x94c),
                 &(*(int * PTR32 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x4)));
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 0x54;
    if (0x1101507 < (int)(*(int * PTR32 *)(gen_frame + 0x8))) {
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x14)));
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(int *)(gen_frame + 0x2c)) = 0x622;
      (*(int * PTR32 *)(gen_frame + 0x30)) = &(*(int *)(gen_frame + 0x2c));
      (*(char *)(gen_frame + 0x34)) = '\0';
      if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x14)),1);
      }
      uVar6 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x1c)) <= uVar6) {
        uVar6 = uVar6 - (*(uint *)(gen_frame + 0x1c));
      }
      if (*(int *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4) == 0) {
        uVar5 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4) = uVar5;
      }
      piVar4 = *(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4);
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0;
        piVar4[1] = 0;
        *(undefined1 *)(piVar4 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x34)) != -1) && (piVar4 != &(*(int *)(gen_frame + 0x2c)))) {
          (*(int * PTR32 *)(gen_frame + 0xc)) = piVar4;
          (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x30));
          if ((*(char *)(gen_frame + 0x34)) == '\0') {
            F_004919b0(&(*(int * PTR32 *)(gen_frame + 0xc)));
          }
          else if ((*(char *)(gen_frame + 0x34)) == '\x01') {
            F_00491a60(&(*(int * PTR32 *)(gen_frame + 0xc)));
          }
        }
      }
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
      if ((((*(int * PTR32 *)(gen_frame + 0x30)) != (int *)0x0) && ((*(char *)(gen_frame + 0x34)) != '\0')) && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
        pvVar3 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x30));
        *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
        if (*(int *)((int)pvVar3 + 0x54) < 1) {
          F_0042c880(pvVar3);
          F_00406ad0(pvVar3);
        }
      }
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(int *)(gen_frame + 0x2c)) = 1;
      (*(int * PTR32 *)(gen_frame + 0x30)) = &(*(int *)(gen_frame + 0x2c));
      (*(char *)(gen_frame + 0x34)) = '\0';
      if ((*(uint *)(gen_frame + 0x1c)) <= (*(int *)(gen_frame + 0x24)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x14)),1);
      }
      uVar6 = (*(int *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x1c)) <= uVar6) {
        uVar6 = uVar6 - (*(uint *)(gen_frame + 0x1c));
      }
      if (*(int *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4) == 0) {
        uVar5 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4) = uVar5;
      }
      piVar4 = *(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + uVar6 * 4);
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0;
        piVar4[1] = 0;
        *(undefined1 *)(piVar4 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x34)) != -1) && (piVar4 != &(*(int *)(gen_frame + 0x2c)))) {
          (*(int * PTR32 *)(gen_frame + 0xc)) = piVar4;
          (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x30));
          if ((*(char *)(gen_frame + 0x34)) == '\0') {
            F_004919b0(&(*(int * PTR32 *)(gen_frame + 0xc)));
          }
          else if ((*(char *)(gen_frame + 0x34)) == '\x01') {
            F_00491a60(&(*(int * PTR32 *)(gen_frame + 0xc)));
          }
        }
      }
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
      if ((((*(int * PTR32 *)(gen_frame + 0x30)) != (int *)0x0) && ((*(char *)(gen_frame + 0x34)) != '\0')) && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
        pvVar3 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x30));
        *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
        if (*(int *)((int)pvVar3 + 0x54) < 1) {
          F_0042c880(pvVar3);
          F_00406ad0(pvVar3);
        }
      }
      F_007143e0(this,(int)this + 0x898,&(*(int * PTR32 *)(gen_frame + 0x14)),(int)this + 0x550);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x14)));
      uVar7 = F_00429760((*(int * PTR32 *)(gen_frame + 0x14)),8,0x2c4);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return (uint)uVar7;
    }
  } while( true );
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf30 */
uint F_00b93c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb93c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 * puVar1;
  undefined * this_00;
  undefined * pIVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  if (param_2 - 0x514U < 9) {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = this + param_2 * 0x54 + -0x1a0a4;
  }
  else {
    if (param_2 < 7) {
      pIVar2 = this + param_2 * 0x54 + 0x6f4;
    }
    else {
      pIVar2 = ((undefined *)GEN_TOP(((param_2 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c))));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = pIVar2;
  }
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
  piVar3 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x20));
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  if ((byte)param_5 != 0) {
    (*(uint *)(gen_frame + 0x1c)) = (uint)(byte)param_5;
    puVar6 = param_4;
    do {
      uVar8 = *puVar6;
      (*(undefined4 *)(gen_frame + 0x8c)) = 0;
      (*(undefined4 *)(gen_frame + 0x8c)) = uVar8;
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = &(*(undefined4 *)(gen_frame + 0x8c));
      (*(char *)(gen_frame + 0x94)) = '\0';
      if ((*(uint *)(gen_frame + 0x28)) <= (*(int *)(gen_frame + 0x30)) + 1U) {
        F_00486f80(&(*(int * PTR32 *)(gen_frame + 0x20)),1);
      }
      uVar5 = (*(int *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x30));
      if ((*(uint *)(gen_frame + 0x28)) <= uVar5) {
        uVar5 = uVar5 - (*(uint *)(gen_frame + 0x28));
      }
      if (*(int *)((*(int *)(gen_frame + 0x24)) + uVar5 * 4) == 0) {
        uVar4 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x24)) + uVar5 * 4) = uVar4;
      }
      puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x24)) + uVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x94)) != -1) && (puVar1 != &(*(undefined4 *)(gen_frame + 0x8c)))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar1;
          (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x90));
          if ((*(char *)(gen_frame + 0x94)) == '\0') {
            F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
          }
          else if ((*(char *)(gen_frame + 0x94)) == '\x01') {
            F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
          }
        }
      }
      (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != (undefined4 *)0x0) {
        if (((*(char *)(gen_frame + 0x94)) != '\0') && ((*(char *)(gen_frame + 0x94)) == '\x01')) {
          this_00 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x90));
          *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
          if (*(int *)((int)this_00 + 0x54) < 1) {
            F_0042c880(this_00);
            F_00406ad0(this_00);
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)0x0;
        (*(char *)(gen_frame + 0x94)) = -1;
      }
      puVar6 = puVar6 + 1;
      uVar5 = (*(uint *)(gen_frame + 0x1c)) - 1;
      (*(uint *)(gen_frame + 0x1c)) = uVar5;
    } while (uVar5 != 0);
  }
  uVar8 = REFG(undefined4, 0x108cc50);
  uVar5 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x18)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x38)),uVar5,uVar8);
  F_007115c0(this,((undefined1 *)(gen_frame + 0x38)),&(*(int * PTR32 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x14)),param_3);
  F_0042c880(((undefined1 *)(gen_frame + 0x38)));
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x20)));
  uVar7 = F_00429760((*(int * PTR32 *)(gen_frame + 0x20)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return (uint)uVar7;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder001::vf174 */
uint F_00b93e80(unsigned int gen_a0)
{
  GEN_ENTER(0xb93e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0x579 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x400);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x161;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0x57a - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder002::vf174 */
uint F_00b940b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb940b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x48;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_00b8b890(this,0x516);
  F_007143e0(((undefined *)(uint)(this)),uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x48;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0x5dc - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder003::vf174 */
uint F_00b942e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb942e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x4ed;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_00b8b890(this,0x516);
  F_007143e0(((undefined *)(uint)(this)),uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x192;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0x640 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x4ed;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0x642 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x4a8);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder004::vf174 */
uint F_00b94610(unsigned int gen_a0)
{
  GEN_ENTER(0xb94610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x4ea;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_00b8b890(this,0x517);
  F_007143e0(((undefined *)(uint)(this)),uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x4e9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x4ea;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  if ((*(uint *)(gen_frame + 0xc)) <= (*(int *)(gen_frame + 0x14)) + 1U) {
    F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  }
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0x6a4 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  *(undefined * PTR32 *)(this + 0x954) = &REFG(undefined, 0x1101510);
  this[0x99e] = (undefined1)0x1;
  this[0x98e] = (undefined1)0x0;
  this[0x9a2] = (undefined1)0x0;
  *(undefined * PTR32 *)(this + 0x950) = &REFG(undefined, 0x1101508);
  this[0x98d] = (undefined1)0x1;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf174 */
uint F_00b94900(unsigned int gen_a0)
{
  GEN_ENTER(0xb94900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x7b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_00b8b890(this,0x516);
  F_007143e0(((undefined *)(uint)(this)),uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf31 */
uint F_00b94a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb94a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar2 = CONCAT31((int3)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c)) >> 8),(byte)param_3);
  (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x24)) + 0)) = (byte)param_3;
  (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x24)), 1, 3),(byte)param_3)));
  if (param_1 != 0x63f) {
    uVar2 = F_00704070((undefined *)this,param_1,param_2,(*(int * PTR32 *)(gen_frame + 0x24)));
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar2;
  }
  if ((byte)param_3 != 0) {
    (*(int *)(gen_frame + 0x20)) = REFG(int, 0x1379694);
    uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(param_2 + -4 + (uint)(byte)param_3 * 4));
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    if (((*(int *)(gen_frame + 0x20)) != 0) && (uVar2 != 0)) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar3;
      F_004816e0(((undefined4 *)(gen_frame + 0x0)));
      iVar5 = (byte)param_3 - 1;
      (*(byte *)(gen_frame + 0x2b)) = 0;
      (*(int *)(gen_frame + 0x18)) = iVar5;
      if (0 < iVar5) {
        uVar2 = 0;
        do {
          uVar7 = *(undefined4 *)(param_2 + uVar2 * 4);
          (*(undefined4 *)(gen_frame + 0x2c)) = 0;
          (*(undefined4 *)(gen_frame + 0x2c)) = uVar7;
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
          (*(char *)(gen_frame + 0x34)) = '\0';
          F_00493b50(((undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x2c)));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
            if (((*(char *)(gen_frame + 0x34)) != '\0') && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
              pvVar4 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x30));
              *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
              if (*(int *)((int)pvVar4 + 0x54) < 1) {
                F_0042c880(pvVar4);
                F_00406ad0(pvVar4);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x0;
            (*(char *)(gen_frame + 0x34)) = -1;
            iVar5 = (*(int *)(gen_frame + 0x18));
          }
          bVar1 = (*(byte *)(gen_frame + 0x2b)) + 1;
          (*(byte *)(gen_frame + 0x2b)) = bVar1;
          uVar2 = (uint)bVar1;
        } while ((int)uVar2 < iVar5);
      }
      puVar8 = ((undefined4 *)(gen_frame + 0x0));
      uVar7 = 0x63f;
      iVar5 = (*(int *)(gen_frame + 0x20));
      uVar2 = (*(uint *)(gen_frame + 0x1c));
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x24)))));
      F_0046abb0(pvVar4,uVar7,iVar5,uVar2,puVar8);
      F_00492c50(((undefined4 *)(gen_frame + 0x0)));
      uVar6 = F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
      uVar2 = (uint)uVar6;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder006::vf174 */
uint F_00b94b90(unsigned int gen_a0)
{
  GEN_ENTER(0xb94b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x79;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_00b8b890(this,0x516);
  F_007143e0(((undefined *)(uint)(this)),uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder007::vf174 */
uint F_00b94cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb94cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x1d6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_00b8b890(this,0x516);
  F_007143e0(((undefined *)(uint)(this)),uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  *(undefined * PTR32 *)(this + 0x954) = &REFG(undefined, 0x110151c);
  this[0x99e] = (undefined1)0x1;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder009::vf174 */
uint F_00b94e00(unsigned int gen_a0)
{
  GEN_ENTER(0xb94e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x4f1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_00b8b890(this,0x516);
  F_007143e0(((undefined *)(uint)(this)),uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf174 */
uint F_00b94f30(unsigned int gen_a0)
{
  GEN_ENTER(0xb94f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x4f6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0x8fd - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x400);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf31 */
uint F_00b95060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb95060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar2 = CONCAT31((int3)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c)) >> 8),(byte)param_3);
  (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x24)) + 0)) = (byte)param_3;
  (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x24)), 1, 3),(byte)param_3)));
  if (param_1 != 0x62c) {
    uVar2 = F_00704070((undefined *)this,param_1,param_2,(*(int * PTR32 *)(gen_frame + 0x24)));
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar2;
  }
  if ((byte)param_3 != 0) {
    (*(int *)(gen_frame + 0x20)) = REFG(int, 0x1379694);
    uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(param_2 + -4 + (uint)(byte)param_3 * 4));
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    if (((*(int *)(gen_frame + 0x20)) != 0) && (uVar2 != 0)) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar3;
      F_004816e0(((undefined4 *)(gen_frame + 0x0)));
      iVar5 = (byte)param_3 - 1;
      (*(byte *)(gen_frame + 0x2b)) = 0;
      (*(int *)(gen_frame + 0x18)) = iVar5;
      if (0 < iVar5) {
        uVar2 = 0;
        do {
          uVar7 = *(undefined4 *)(param_2 + uVar2 * 4);
          (*(undefined4 *)(gen_frame + 0x2c)) = 0;
          (*(undefined4 *)(gen_frame + 0x2c)) = uVar7;
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
          (*(char *)(gen_frame + 0x34)) = '\0';
          F_00493b50(((undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x2c)));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
            if (((*(char *)(gen_frame + 0x34)) != '\0') && ((*(char *)(gen_frame + 0x34)) == '\x01')) {
              pvVar4 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x30));
              *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
              if (*(int *)((int)pvVar4 + 0x54) < 1) {
                F_0042c880(pvVar4);
                F_00406ad0(pvVar4);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x0;
            (*(char *)(gen_frame + 0x34)) = -1;
            iVar5 = (*(int *)(gen_frame + 0x18));
          }
          bVar1 = (*(byte *)(gen_frame + 0x2b)) + 1;
          (*(byte *)(gen_frame + 0x2b)) = bVar1;
          uVar2 = (uint)bVar1;
        } while ((int)uVar2 < iVar5);
      }
      puVar8 = ((undefined4 *)(gen_frame + 0x0));
      uVar7 = 0x62c;
      iVar5 = (*(int *)(gen_frame + 0x20));
      uVar2 = (*(uint *)(gen_frame + 0x1c));
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x24)))));
      F_0046abb0(pvVar4,uVar7,iVar5,uVar2,puVar8);
      F_00492c50(((undefined4 *)(gen_frame + 0x0)));
      uVar6 = F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
      uVar2 = (uint)uVar6;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder011::vf174 */
uint F_00b951c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb951c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x64e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_00b8b890(this,0x516);
  F_007143e0(((undefined *)(uint)(this)),uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x64f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0xbb9 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x650;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0xbba - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x4a8);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x651;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0xbbb - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x4fc);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x64e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0xbbc - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x550);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder012::vf174 */
uint F_00b956f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb956f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pIVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x652;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  pIVar7 = this + 0x400;
  ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  uVar4 = F_00b8b890(this,0x516);
  F_007143e0(((undefined *)(uint)(this)),uVar4,ppuVar6,pIVar7);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x652;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0xc1c - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x652;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0xc1d - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x4a8);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder013::vf174 */
uint F_00b95a20(unsigned int gen_a0)
{
  GEN_ENTER(0xb95a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x658;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0xc80 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x400);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x658;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0xc81 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder014::vf174 */
uint F_00b95c50(unsigned int gen_a0)
{
  GEN_ENTER(0xb95c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x705;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0xce4 - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x400);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x705;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,(0xcfa - *(int *)(this + 0x97c)) * 0x54 + *(int *)(this + 0x94c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),
               this + 0x454);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x65d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,this + 0x898,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),this + 0x4a8);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x660;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,this + 0x898,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),this + 0x4fc);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x2c4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *puVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x665;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
  (*(char *)(gen_frame + 0x24)) = '\0';
  F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
  uVar4 = (*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0xc)) <= uVar4) {
    uVar4 = uVar4 - (*(uint *)(gen_frame + 0xc));
  }
  if (*(int *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) == 0) {
    uVar3 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4) = uVar3;
  }
  pvVar1 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + uVar4 * 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00492f50(pvVar1,&(*(undefined4 *)(gen_frame + 0x1c)));
  }
  (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
    pvVar1 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
    *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
    if (*(int *)((int)pvVar1 + 0x54) < 1) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
    }
  }
  F_007143e0(this,this + 0x898,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),this + 0x550);
  F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  uVar5 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  *(undefined * PTR32 *)(this + 0x954) = &REFG(undefined, 0x1101528);
  this[0x99e] = (undefined1)0x4;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf24 */
uint F_00b96170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb96170u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    F_006da800(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),REFG(int, 0x1379694),4,0);
    F_006da800(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),iVar1,0,0);
    F_006da800(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),iVar1,1,0);
    F_006da800(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),iVar1,2,0);
    F_006da800(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),iVar1,3,0);
  }
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x98a))) = 0;
  switch((unsigned int)(uintptr_t)((*(uint *)&gen_args[2]) & 0xffff)) {
  case 1: ;
    F_00b8acf0((*(undefined * PTR32 *)&gen_args[0]),*(*(int * PTR32 *)&gen_args[3]));
    (*(int * PTR32 *)&gen_args[3]) = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x31c)));
    uVar4 = F_006fd600((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),&(*(int * PTR32 *)&gen_args[3]),1);
    return uVar4;
  case 2: ;
    F_00b8acf0((*(undefined * PTR32 *)&gen_args[0]),*(*(int * PTR32 *)&gen_args[3]));
    uVar3 = F_00476000();
    uVar4 = piVar2[1];
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2e8))) = uVar3;
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2ec))) = 0;
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2f0))) = uVar4 + uVar3;
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2f4))) = (uint)CARRY4(uVar4,uVar3);
    if (piVar2[2] != 0) {
      (*(undefined * PTR32 *)&gen_args[0])[0x9a4] = (undefined1)0x1;
    }
    uVar4 = F_006fd600((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),0,0);
    return uVar4;
  case 3: ;
    if ((*(int * PTR32 *)&gen_args[3])[1] == 0) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xd5))) = 1;
    }
    *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x98a))) = (short)(*(int * PTR32 *)&gen_args[3])[2];
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x984))) = (*(int * PTR32 *)&gen_args[3])[3];
    break;
  case 4: ;
    F_00b8cee0((*(undefined * PTR32 *)&gen_args[0]));
    if (*(*(int * PTR32 *)&gen_args[3]) != 0) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xd5))) = 1;
    }
    (*(undefined * PTR32 *)&gen_args[0])[0x9a4] = (undefined1)0x1;
    break;
  case 5: ;
    F_00b8cee0((*(undefined * PTR32 *)&gen_args[0]));
    piVar2 = (*(int * PTR32 *)&gen_args[3]);
    if (*(*(int * PTR32 *)&gen_args[3]) == 1) {
      if ((*(undefined * PTR32 *)&gen_args[0])[0x98c] != (undefined1)0x3) {
        F_00b92c30((*(undefined * PTR32 *)&gen_args[0]),0x5fd,0);
        goto LAB_00b9632e;
      }
      uVar6 = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8)));
      uVar5 = 0x5f3;
    }
    else if ((*(undefined * PTR32 *)&gen_args[0])[0x98c] == (undefined1)0x3) {
      uVar6 = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8)));
      uVar5 = 0x5f2;
    }
    else {
      uVar6 = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8)));
      uVar5 = 0x5fe;
    }
    F_00b93540((*(undefined * PTR32 *)&gen_args[0]),uVar5,uVar6);
LAB_00b9632e: ;
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x298))))((*(undefined * PTR32 *)&gen_args[0]));
    uVar4 = F_006fd600((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),piVar2,(*(undefined4 *)&gen_args[4]));
    return uVar4;
  case 6: ;
    F_00b8acf0((*(undefined * PTR32 *)&gen_args[0]),*(*(int * PTR32 *)&gen_args[3]));
    uVar3 = F_00476000();
    uVar4 = piVar2[1];
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2f4))) = (uint)CARRY4(uVar4,uVar3);
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2f0))) = uVar4 + uVar3;
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2e8))) = uVar3;
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2ec))) = 0;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xd5))) = 1;
    uVar4 = F_006f9890((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),piVar2,(*(undefined4 *)&gen_args[4]));
    return uVar4;
  default: ;
    uVar4 = F_006f9890((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar4;
  }
  uVar4 = F_006fd600((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  return uVar4;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonQarn::vf159 */
byte F_00b963e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb963e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b93860(this);
  *(undefined * PTR32 *)(this + 0x954) = &REFG(undefined, 0x10f879c);
  this[0x99e] = (undefined1)0x5;
  *(undefined4 *)(this + 0x98e) = 0;
  this[0x9a2] = (undefined1)0x0;
  *(undefined * PTR32 *)(this + 0x950) = &REFG(undefined, 0x10f87d8);
  this[0x98d] = (undefined1)0x4;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentColosseum::vf24 */
uint F_00b96420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb96420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_2;
  if ((short)param_2 != 0x200) {
    uVar1 = F_00b96170((undefined *)this,param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

/* ref: FUN_00b96450 */
byte F_00b96450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x26c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b96460 */
byte F_00b96460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b96470 */
uint F_00b96470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96470u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2088 + in_ecx;
}

/* ref: FUN_00b96490 */
uint F_00b96490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20a4 + in_ecx;
}

/* ref: FUN_00b964b0 */
uint F_00b964b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb964b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20b6 + in_ecx;
}

/* ref: FUN_00b964d0 */
uint F_00b964d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb964d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c0 + in_ecx;
}

/* ref: FUN_00b964f0 */
uint F_00b964f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb964f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c6 + in_ecx;
}

/* ref: FUN_00b96510 */
uint F_00b96510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c8 + in_ecx;
}

/* ref: FUN_00b96530 */
uint F_00b96530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20e4 + in_ecx;
}

/* ref: FUN_00b96550 */
uint F_00b96550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20f6 + in_ecx;
}

/* ref: FUN_00b96570 */
uint F_00b96570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2100 + in_ecx;
}

/* ref: FUN_00b96590 */
uint F_00b96590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2106 + in_ecx;
}

/* ref: FUN_00b965b0 */
uint F_00b965b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb965b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x2088 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00b965d0 */
uint F_00b965d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb965d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x20a4 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00b965f0 */
uint F_00b965f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb965f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x20b6 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00b96610 */
uint F_00b96610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb96610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x20c0 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00b96630 */
uint F_00b96630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb96630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x20c6 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00b96650 */
uint F_00b96650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb96650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x20c8 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00b96670 */
uint F_00b96670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb96670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x20e4 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00b96690 */
uint F_00b96690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb96690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x20f6 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00b966b0 */
uint F_00b966b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb966b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x2100 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00b966d0 */
uint F_00b966d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb966d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x2106 + (int)this) = *param_2;
  return param_1;
}

/* ref: Client::Game::InstanceContent::ContentSheetWaiterInterface::vf1 */
unsigned int F_00b96700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb96700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentSheetWaiterInterface::vf2 */
unsigned int F_00b96710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb96710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentSheetWaiterInterface::vf0 */
uint F_00b96720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b96770 */
uint F_00b96770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + 0x400 + in_ecx;
}

/* ref: FUN_00b967b0 */
uint F_00b967b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb967b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_0042b630((int)this + 0x14);
  in_ecx = (int)this + 0x68;
  iVar1 = 1;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630((int)this + 0x110);
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf176 */
unsigned int F_00b96800(void)
{
  GEN_ENTER(0xb96800u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentTalkSheetWaiterInterface::vf1 */
unsigned int F_00b96860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentTalkSheetWaiterInterface::vf2 */
unsigned int F_00b96870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentTalkSheetWaiterInterface::vf0 */
uint F_00b96880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f8a14));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b968b0 */
uint F_00b968b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb968b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      F_00cb4540(this,uVar1,*(undefined4 *)(param_1 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x48))))(*(int * PTR32 *)((int)this + 0x1c),this);
  *(undefined1 *)((int)this + 0x26) = 1;
  return uVar1;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf149 */
uint F_00b96910(void)
{
  GEN_ENTER(0xb96910u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf150 */
uint F_00b96920(void)
{
  GEN_ENTER(0xb96920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf153 */
byte F_00b96930(void)
{
  GEN_ENTER(0xb96930u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf150 */
uint F_00b96940(void)
{
  GEN_ENTER(0xb96940u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f008);
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf153 */
byte F_00b96950(void)
{
  GEN_ENTER(0xb96950u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf149 */
uint F_00b96960(void)
{
  GEN_ENTER(0xb96960u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f00c);
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf150 */
uint F_00b96970(void)
{
  GEN_ENTER(0xb96970u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f010);
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf153 */
byte F_00b96980(void)
{
  GEN_ENTER(0xb96980u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00b969b0 */
uint F_00b969b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb969b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: Client::Game::InstanceContent::GuildOrderStartCallback::vf2 */
uint F_00b96a00(unsigned int gen_a0)
{
  GEN_ENTER(0xb96a00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: FUN_00b96a20 */
uint F_00b96a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10f9678));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::GuildOrderRewardCallback::vf2 */
uint F_00b96a80(unsigned int gen_a0)
{
  GEN_ENTER(0xb96a80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: FUN_00b96a90 */
uint F_00b96a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb96a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10f9694))
  ;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VInstanceContentGuideEventHandler_InstanceContent_Game_Client_Game::vf1 */
uint F_00b96ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00b96b00 */
uint F_00b96b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SheetWaiter_VContentTalkEventHandler_InstanceContent_Game_Client_Game::vf0 */
uint F_00b96b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b96b60 */
uint F_00b96b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b96ba0 */
uint F_00b96ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xb96ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(ushort *)((int)this + 0x2a) = *(ushort *)((int)this + 0x28);
  if (*(uint *)((int)this + 0x14) < (uint)*(ushort *)((int)this + 0x28)) {
    *(short *)((int)this + 0x2a) = (short)*(uint *)((int)this + 0x14);
  }
  uVar1 = 0;
  if (*(short *)((int)this + 0x2a) != 0) {
    do {
      F_00cb4540(this,uVar1,*(int *)((int)this + 0x24) + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)this + 0x2a));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x48))))(*(int * PTR32 *)((int)this + 0x1c),this);
  *(undefined1 *)((int)this + 0x2c) = 1;
  return uVar1;
}

/* ref: FUN_00b96bf0 */
uint F_00b96bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10f96a0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: SheetWaiter_VInstanceContentDirector_InstanceContent_Game_Client_Game::vf0 */
uint F_00b96c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b96cb0 */
uint F_00b96cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0);
  return (uint)uVar1;
}

/* ref: FUN_00b96ce0 */
uint F_00b96ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96ce0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0);
  return uVar1;
}

/* ref: FUN_00b96d20 */
uint F_00b96d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb96d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b96d30 */
uint F_00b96d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96d30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00b96d60 */
uint F_00b96d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00b96d90 */
uint F_00b96d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00b96db0 */
uint F_00b96db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00b96de0 */
uint F_00b96de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00b96e10 */
uint F_00b96e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00b96e40 */
uint F_00b96e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00b96ec0 */
uint F_00b96ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00b96f40 */
uint F_00b96f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00b96fc0 */
uint F_00b96fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00b97040 */
uint F_00b97040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb97040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00b970e0 */
uint F_00b970e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb970e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b970f0 */
uint F_00b970f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb970f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return (uint)param_1;
}

/* ref: FUN_00b97140 */
uint F_00b97140(unsigned int gen_a0)
{
  GEN_ENTER(0xb97140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b97150 */
uint F_00b97150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b97740((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: FUN_00b97160 */
uint F_00b97160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b97790((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: FUN_00b97170 */
uint F_00b97170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b97710((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: FUN_00b97180 */
uint F_00b97180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b977d0((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf157 */
unsigned int F_00b971a0(void)
{
  GEN_ENTER(0xb971a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf158 */
unsigned int F_00b971b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb971b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf164 */
unsigned int F_00b971c0(void)
{
  GEN_ENTER(0xb971c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf165 */
unsigned int F_00b971d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb971d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf166 */
unsigned int F_00b971e0(void)
{
  GEN_ENTER(0xb971e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf168 */
unsigned int F_00b971f0(void)
{
  GEN_ENTER(0xb971f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf5 */
byte F_00b97200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf169 */
uint F_00b97210(void)
{
  GEN_ENTER(0xb97210u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf170 */
uint F_00b97220(void)
{
  GEN_ENTER(0xb97220u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00b97230 */
uint F_00b97230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b980d0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97240 */
uint F_00b97240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98100((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97260 */
uint F_00b97260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98130((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97280 */
uint F_00b97280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98160((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b972a0 */
uint F_00b972a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb972a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98190((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b972c0 */
uint F_00b972c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb972c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b981c0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b972e0 */
uint F_00b972e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb972e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b981f0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97300 */
uint F_00b97300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98220((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97320 */
uint F_00b97320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98250((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97340 */
uint F_00b97340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98280((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97360 */
uint F_00b97360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b982b0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97380 */
uint F_00b97380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b982e0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b973a0 */
uint F_00b973a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb973a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98310((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b973c0 */
uint F_00b973c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb973c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98340((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b973e0 */
uint F_00b973e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb973e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98370((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97400 */
uint F_00b97400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b983a0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97420 */
uint F_00b97420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b983d0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97430 */
uint F_00b97430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98410((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97450 */
uint F_00b97450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98440((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97470 */
uint F_00b97470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98470((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97490 */
uint F_00b97490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b984a0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b974b0 */
uint F_00b974b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb974b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b984d0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b974d0 */
uint F_00b974d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb974d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98500((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b974f0 */
uint F_00b974f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb974f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98530((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97510 */
uint F_00b97510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98560((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97530 */
uint F_00b97530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98590((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97550 */
uint F_00b97550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b985c0((undefined *)((int)this + -0x9a8),param_1);
  return uVar1;
}

/* ref: FUN_00b97560 */
uint F_00b97560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b985c0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97580 */
uint F_00b97580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b985f0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderStartCallback::vf1 */
uint F_00b975c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb975c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::GuildOrderStartCallback::vf0 */
uint F_00b975f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb975f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf173 */
unsigned int F_00b97620(void)
{
  GEN_ENTER(0xb97620u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf175 */
unsigned int F_00b97630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf145 */
byte F_00b97640(void)
{
  GEN_ENTER(0xb97640u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00b97650 */
uint F_00b97650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98be0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97660 */
uint F_00b97660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb97660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,0);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined1 *)((int)this + 0x26) = 0;
  return (uint)this;
}

/* ref: FUN_00b976a0 */
uint F_00b976a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb976a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
  if (*(char *)((int)this + 0x26) == '\x01') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1c),this);
  }
  uVar1 = F_00cb4870(this);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::ContentTalkSheetWaiter::vf0 */
uint F_00b976d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb976d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
  if (this[0x26] == (undefined1)0x1) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x4c))))(*(int * PTR32 *)(this + 0x1c),this);
  }
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf0 */
uint F_00b97710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8c210(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::ContentNpcEventHandler::vf0 */
uint F_00b97740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x538);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10f8cb4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10f8ca0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x538) = 0;
  }
  F_00b8c210(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf0 */
uint F_00b97790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10f8f34));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10f8f20));
  F_00b8c210(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf0 */
uint F_00b977d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb977d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x534);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10f91b4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10f91a0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x534) = 0;
  }
  F_0042c880(this + 0x550);
  F_00b8c210(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::GuildOrderRewardCallback::vf1 */
uint F_00b97850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb97850u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined * this_00;
  int iVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((this_00 != (undefined *)0x0) && (0 < (*(int *)&gen_args[3]))) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
    }
    if (iVar1 == -2) {
      F_006f4000(this_00);
    }
    else if (iVar1 == 0) {
      F_006bcfc0(this_00,0,0,0);
    }
    else {
      (*(int *)&gen_args[3]) = 0;
      F_006f99e0(this_00,&(*(int *)&gen_args[3]),1);
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: Client::Game::InstanceContent::GuildOrderRewardCallback::vf0 */
uint F_00b978d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb978d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf149 */
uint F_00b97900(void)
{
  GEN_ENTER(0xb97900u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f014);
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf150 */
uint F_00b97910(void)
{
  GEN_ENTER(0xb97910u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f018);
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf153 */
byte F_00b97920(void)
{
  GEN_ENTER(0xb97920u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00b97930 */
uint F_00b97930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98660((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf0 */
uint F_00b97940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10f9424));
  if (*(int *)(this + 0x108) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x104);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)(this + 0x108));
    }
    puVar2 = *(undefined4 * PTR32 *)(this + 0x108);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x108) = 0;
    }
  }
  F_006df660(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b979b0 */
uint F_00b979b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb979b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,0);
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00b97a00 */
uint F_00b97a00(unsigned int gen_a0)
{
  GEN_ENTER(0xb97a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
  if (*(char *)((int)this + 0x2c) == '\x01') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1c),this);
  }
  uVar1 = F_00cb4870(this);
  return uVar1;
}

/* ref: FUN_00b97a30 */
uint F_00b97a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb97a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined2 *)((int)this + 0x28) = (undefined2)param_2;
  uVar1 = F_00b96ba0(this);
  return uVar1;
}

/* ref: ContentSheetWaiter_VInstanceContentDirector_InstanceContent_Game_Client_InstanceContent::vf1 */
uint F_00b97a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb97a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  short * psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  code * pcVar6;
  undefined4 local_8;
  
  psVar1 = (short *)((int)this + 0x28);
  *psVar1 = *psVar1 - *(ushort *)((int)this + 0x2a);
  sVar2 = *psVar1;
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),sVar2 == 0);
  piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x310)));
  *(undefined1 *)((int)this + 0x2c) = 0;
  iVar3 = *piVar5;
  if (*(int *)((int)this + 0x20) < 0) {
    pcVar6 = *(gen_code32 *)(iVar3 + 8);
  }
  else {
    pcVar6 = *(gen_code32 *)(iVar3 + 4);
  }
  uVar4 = (*pcVar6)(piVar5,*(int *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24),param_2,
                    (uint)*(ushort *)((int)this + 0x2a),local_8);
  if (sVar2 != 0) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + (uint)*(ushort *)((int)this + 0x2a);
    uVar4 = F_00b96ba0(this);
  }
  return uVar4;
}

/* ref: ContentSheetWaiter_VInstanceContentDirector_InstanceContent_Game_Client_InstanceContent::vf0 */
uint F_00b97ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
  if (*(char *)((int)this + 0x2c) == '\x01') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1c),this);
  }
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VInstanceContentGuideEventHandler_InstanceContent_Game_Client_Game::vf0 */
uint F_00b97af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b97b50 */
uint F_00b97b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
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

/* ref: FUN_00b97b90 */
uint F_00b97b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb97b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b97ba0 */
uint F_00b97ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97ba0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00b97bc0 */
byte F_00b97bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b97be0 */
byte F_00b97be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00b96e40(*(undefined * PTR32 *)((int)this + 0xf8),uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00b97d30 */
byte F_00b97d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00b96ec0(*(undefined * PTR32 *)((int)this + 0xf8),uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00b97de0 */
byte F_00b97de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00b96f40(*(undefined * PTR32 *)((int)this + 0xf8),uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00b97e90 */
byte F_00b97e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00b96fc0(*(undefined * PTR32 *)((int)this + 0xf8),uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00b97f40 */
byte F_00b97f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00b97040(*(undefined * PTR32 *)((int)this + 0xf8),uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00b97ff0 */
uint F_00b97ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb97ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1 = puVar1 + 6;
  }
  return (uint)puVar1;
}

/* ref: FUN_00b98030 */
uint F_00b98030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
  }
  return (uint)param_2;
}

/* ref: FUN_00b98080 */
unsigned int F_00b98080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb98080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf0 */
uint F_00b980d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb980d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTotorak::vf0 */
uint F_00b98100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTamtara::vf0 */
uint F_00b98130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonCopperBell::vf0 */
uint F_00b98160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonShposhae::vf0 */
uint F_00b98190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonAurumVale::vf0 */
uint F_00b981c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb981c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonResidence::vf0 */
uint F_00b981f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb981f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonBrayflox::vf0 */
uint F_00b98220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonHalatali::vf0 */
uint F_00b98250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonQarn::vf0 */
uint F_00b98280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonWandererPalace::vf0 */
uint F_00b982b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb982b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonDzemael::vf0 */
uint F_00b982e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb982e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonStoneVigil::vf0 */
uint F_00b98310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonCuttersCry::vf0 */
uint F_00b98340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTheOldCastleAmidapool::vf0 */
uint F_00b98370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseKeep::vf0 */
uint F_00b983a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb983a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleIfrit::vf0 */
uint F_00b983d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb983d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fc364));
  *(undefined * PTR32 * PTR32 *)(this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10fc354));
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleTitan::vf0 */
uint F_00b98410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleGaruda::vf0 */
uint F_00b98440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleEmpireShield::vf0 */
uint F_00b98470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidCrystalTower001::vf0 */
uint F_00b984a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb984a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut001::vf0 */
uint F_00b984d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb984d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut002::vf0 */
uint F_00b98500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut003::vf0 */
uint F_00b98530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut004::vf0 */
uint F_00b98560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut005::vf0 */
uint F_00b98590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentColosseum::vf0 */
uint F_00b985c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb985c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x9a8) = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDummy::vf0 */
uint F_00b985f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb985f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b98620 */
uint F_00b98620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98c10((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98640 */
uint F_00b98640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98c40((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf0 */
uint F_00b98660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8eca0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b986a0 */
uint F_00b986a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb986a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b986b0 */
uint F_00b986b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb986b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b986c0 */
uint F_00b986c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb986c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 0x18;
  return (uint)param_1;
}

/* ref: FUN_00b986e0 */
uint F_00b986e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb986e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b986f0 */
byte F_00b986f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb986f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b98710 */
uint F_00b98710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00b97ff0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00b98730 */
unsigned int F_00b98730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_00b98760 */
unsigned int F_00b98760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb98760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_00b98080(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_00b987a0 */
uint F_00b987a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb987a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff014));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ff004));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b987e0 */
uint F_00b987e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb987e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98ce0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98800 */
uint F_00b98800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff2ec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ff2dc));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98840 */
uint F_00b98840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98d10((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98860 */
uint F_00b98860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff5c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ff5b4));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b988a0 */
uint F_00b988a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb988a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98d40((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b988c0 */
uint F_00b988c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb988c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff89c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ff88c));
  return (uint)this;
}

/* ref: FUN_00b988f0 */
uint F_00b988f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb988f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98d70((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98910 */
uint F_00b98910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ffb74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ffb64));
  return (uint)this;
}

/* ref: FUN_00b98940 */
uint F_00b98940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98da0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98960 */
uint F_00b98960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ffe4c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ffe3c));
  return (uint)this;
}

/* ref: FUN_00b98990 */
uint F_00b98990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98dd0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b989b0 */
uint F_00b989b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb989b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x1100124));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x1100114));
  return (uint)this;
}

/* ref: FUN_00b989e0 */
uint F_00b989e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb989e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98e00((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98a00 */
uint F_00b98a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x11003fc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x11003ec));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98a40 */
uint F_00b98a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98e30((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98a60 */
uint F_00b98a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x11006d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x11006c4));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98aa0 */
uint F_00b98aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98e60((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98ac0 */
uint F_00b98ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x11009ac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x110099c));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98b00 */
uint F_00b98b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98e90((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98b20 */
uint F_00b98b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x1100c84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x1100c74));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98b60 */
uint F_00b98b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98ec0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98b80 */
uint F_00b98b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x1100f5c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x1100f4c));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98bc0 */
uint F_00b98bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98ef0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf0 */
uint F_00b98be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder003::vf0 */
uint F_00b98c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder009::vf0 */
uint F_00b98c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b98c70 */
unsigned int F_00b98c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb98c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_00b98ca0 */
unsigned int F_00b98ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb98ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00b98080(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder001::vf0 */
uint F_00b98ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder002::vf0 */
uint F_00b98d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder004::vf0 */
uint F_00b98d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf0 */
uint F_00b98d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder006::vf0 */
uint F_00b98da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder007::vf0 */
uint F_00b98dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder008::vf0 */
uint F_00b98e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf0 */
uint F_00b98e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder011::vf0 */
uint F_00b98e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder012::vf0 */
uint F_00b98e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder013::vf0 */
uint F_00b98ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder014::vf0 */
uint F_00b98ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b98f30 */
uint F_00b98f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb98f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00b97ff0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b98f70 */
unsigned int F_00b98f70(unsigned int gen_a0)
{
  GEN_ENTER(0xb98f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b98fc0 */
uint F_00b98fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,0);
    F_00b98080(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,0);
    }
    *(uint *)((int)this + 8) = param_1 * 0x18 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00b99090 */
unsigned int F_00b99090(unsigned int gen_a0)
{
  GEN_ENTER(0xb99090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b990e0 */
uint F_00b990e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb990e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_00b97ff0(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b99110 */
uint F_00b99110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00b98fc0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00b98fc0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00b991b0 */
unsigned int F_00b991b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb991b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b99200 */
uint F_00b99200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  uVar2 = (int)(uVar1 - *(int *)this) / 0x18;
  if (param_1 < uVar2) {
    uVar2 = *(int *)this + param_1 * 0x18;
    if (uVar2 != uVar1) {
      uVar2 = F_00b97ff0(uVar1,uVar1,uVar2,param_1);
      *(uint *)((int)this + 4) = uVar2;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00b99110(this,param_1 - uVar2);
    F_00b98c70(*(int *)((int)this + 4),param_1 - (*(int *)((int)this + 4) - *(int *)this) / 0x18,0
                 ,(int)this + 0xc);
    uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
    *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (param_1 - uVar2) * 0x18;
  }
  return uVar2;
}

/* ref: FUN_00b992b0 */
uint F_00b992b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb992b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b99330((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b992c0 */
uint F_00b992c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb992c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x9a8);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x9b0) - iVar1) / 0x18) * 0x18,0);
  }
  *(undefined4 *)((int)this + 0x9a8) = 0;
  *(undefined4 *)((int)this + 0x9ac) = 0;
  *(undefined4 *)((int)this + 0x9b0) = 0;
  uVar2 = F_00b8cc40(this);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseBaileys::vf0 */
uint F_00b99330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b992c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b99360 */
unsigned int F_00b99360(float gen_a0)
{
  GEN_ENTER(0xb99360u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b99380 */
uint F_00b99380(unsigned int gen_a0)
{
  GEN_ENTER(0xb99380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  uVar2 = F_006fd580(this);
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf83 */
uint F_00b993e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb993e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  uVar2 = F_006f3fc0((undefined *)this,param_1);
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf6 */
uint F_00b99420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    F_006da800(*(undefined * PTR32 *)(this + 4),REFG(int, 0x1379694),0,0);
    F_006da800(*(undefined * PTR32 *)(this + 4),iVar1,1,0);
  }
  bVar2 = F_006db1d0((undefined *)this,param_1);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (((byte)this[0x4c] & 2) != 0) {
    uVar5 = *(undefined4 *)(this + 8);
    uVar4 = *(undefined4 *)(this + 0x50);
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 1;
    this_00 = (undefined *)F_006b8c00();
    uVar3 = F_006fcf60(this_00,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  }
  return uVar3;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf24 */
uint F_00b99480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb99480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if (uVar1 == 1) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x244))(this,param_3,param_4);
    return uVar1;
  }
  if (uVar1 != 2) {
    if (uVar1 != 3) {
      uVar1 = F_006f9890((undefined *)this,param_1,param_2,param_3,param_4);
      return uVar1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24c))(this);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x248))(this);
  return uVar1;
}

/* ref: FUN_00b994f0 */
uint F_00b994f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb994f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,param_1,(uint)*(byte *)(param_1 + 0x3fc));
  return uVar1;
}

/* ref: FUN_00b99510 */
uint F_00b99510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb99510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_007192e0(*(undefined * PTR32 *)((int)this + 4),this,param_1,param_2,param_3,param_4,0,0);
  return uVar1;
}

/* ref: FUN_00b99540 */
uint F_00b99540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00711100(*(undefined * PTR32 *)((int)this + 4),this,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_00b99560 */
uint F_00b99560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb99560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_006bd080(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf42 */
uint F_00b99580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb99580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  
  if (param_1 < 0x80000000) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x25c))(this,param_1,param_2,param_3);
  }
  else {
    if (param_1 == 0x80000000) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x250))(this,param_2,param_3);
      return uVar2;
    }
    if (param_1 == 0x80000001) {
      bVar1 = F_006d8320((undefined *)this);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 == 1) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x254))(this);
        return uVar2;
      }
    }
    else {
      uVar2 = param_1;
      if (param_1 == 0x80000002) {
        bVar1 = F_006d8320((undefined *)this);
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 == 1) {
          uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 600))(this);
          return uVar2;
        }
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf148 */
unsigned int F_00b99610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf151 */
unsigned int F_00b99620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb99620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00b99630 */
uint F_00b99630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb99630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(*param_3 + 4);
  *(undefined4 *)((int)this + 8) = *puVar1;
  *(undefined4 *)((int)this + 0xc) = puVar1[1];
  *(undefined4 *)((int)this + 0x10) = puVar1[2];
  *(undefined4 *)((int)this + 0x14) = puVar1[3];
  uVar2 = F_006bccd0((undefined *)((int)this + -0x1d4));
  return uVar2;
}

/* ref: FUN_00b99670 */
uint F_00b99670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb99670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(*param_3 + 4);
  *(undefined4 *)((int)this + 8) = *puVar1;
  *(undefined4 *)((int)this + 0xc) = puVar1[1];
  *(undefined4 *)((int)this + 0x10) = puVar1[2];
  *(undefined4 *)((int)this + 0x14) = puVar1[3];
  uVar2 = F_006bd080((undefined *)((int)this + -0x1d4),0x80000000,0,0);
  return uVar2;
}

/* ref: FUN_00b996b0 */
byte F_00b996b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb996b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_006b8c00();
  bVar1 = (byte)param_1;
  if ((1 < (byte)param_1) && ((byte)param_1 < 5)) {
    F_006bd200(this,param_2,param_3);
    if ((char)param_3 == '\x01') {
      bVar1 = F_006e6390(this_00,*(undefined4 *)((int)this + 0x1dc),this,param_2);
      return bVar1;
    }
    bVar1 = F_006deae0(this_00,*(undefined4 *)((int)this + 0x1dc),this,param_2);
  }
  return bVar1;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf116 */
byte F_00b99710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(byte *)(in_ecx + 0x1ed);
}

/* ref: FUN_00b99720 */
uint F_00b99720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb99720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = 0;
  if ((1 < (byte)param_5) && ((byte)param_5 < 5)) {
    uVar1 = F_006bd240(this,param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

/* ref: FUN_00b99750 */
uint F_00b99750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  *(undefined4 *)((int)this + 0x1d8) = 0;
  return (uint)this;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf145 */
uint F_00b99790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,0,0);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf146 */
uint F_00b997a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb997a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,0,0);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf147 */
uint F_00b997b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb997b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,0,0);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf53 */
uint F_00b997c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb997c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,0,0);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf55 */
uint F_00b997d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb997d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  ((undefined4 *)(gen_frame + 0x8))[0] = param_1;
  (*(undefined4 *)(gen_frame + 0x404)) = 1;
  uVar1 = F_006f3a50(this,((undefined4 *)(gen_frame + 0x8)),1);
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf56 */
uint F_00b99820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  ((undefined4 *)(gen_frame + 0x8))[0] = param_1;
  (*(undefined4 *)(gen_frame + 0x404)) = 1;
  uVar1 = F_006f3a50(this,((undefined4 *)(gen_frame + 0x8)),1);
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: FUN_00b99870 */
uint F_00b99870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb99870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint * puVar1;
  int * piVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  piVar2 = param_3;
  if (param_1 == -1) {
    puVar1 = *(uint * PTR32 *)(*param_3 + 4);
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),(int)puVar1 + (puVar1[2] & 0xffffff) + 8,REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),(int)puVar1 + (puVar1[1] & 0xffffff) + 4,REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x60)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
    F_007192e0(*(undefined * PTR32 *)((int)this + -0x1d0),(int)this + -0x1d4,((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0xc)),0,0,0
                );
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    piVar2 = (int *)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)piVar2;
}

/* ref: FUN_00b99950 */
uint F_00b99950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x1101874));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x1101864));
  return (uint)this;
}

/* ref: FUN_00b99990 */
uint F_00b99990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined1 *)((int)this + 0x1ed) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x1101aec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x1101ad8));
  return (uint)this;
}

/* ref: FUN_00b999d0 */
unsigned int F_00b999d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb999d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  
  if (*(char *)((int)this + 0x1ed) != '\x01') {
    bVar1 = *(byte *)((int)this + 0x1e8);
    pvVar2 = (undefined *)F_006b8c00();
    if ((1 < bVar1) && (bVar1 < 5)) {
      F_006bd200(this,10,1);
      F_006e6390(pvVar2,*(undefined4 *)((int)this + 0x1dc),this,10);
    }
    bVar1 = *(byte *)((int)this + 0x1e9);
    pvVar2 = (undefined *)F_006b8c00();
    if ((1 < bVar1) && (bVar1 < 5)) {
      F_006bd200(this,0xb,1);
      F_006e6390(pvVar2,*(undefined4 *)((int)this + 0x1dc),this,0xb);
    }
    *(undefined1 *)((int)this + 0x1ed) = 1;
    F_006d81e0(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_00b99a60 */
unsigned int F_00b99a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * pvVar2;
  
  if (*(char *)((int)this + 0x1ed) != '\0') {
    bVar1 = *(byte *)((int)this + 0x1e8);
    pvVar2 = (undefined *)F_006b8c00();
    if ((1 < bVar1) && (bVar1 < 5)) {
      F_006bd200(this,10,0);
      F_006deae0(pvVar2,*(undefined4 *)((int)this + 0x1dc),this,10);
    }
    bVar1 = *(byte *)((int)this + 0x1e9);
    pvVar2 = (undefined *)F_006b8c00();
    if ((1 < bVar1) && (bVar1 < 5)) {
      F_006bd200(this,0xb,0);
      F_006deae0(pvVar2,*(undefined4 *)((int)this + 0x1dc),this,0xb);
    }
    *(undefined1 *)((int)this + 0x1ed) = 0;
    if ((char)param_1 == '\x01') {
      F_006d81e0(this);
    }
  }
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf132 */
uint F_00b99b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb99b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = 0;
  if ((param_3 & 0xff) == 10) {
    uVar1 = 0;
    if ((byte)((char)this[0x1e8] - 2U) < 3) {
      uVar1 = F_006bd240((undefined *)this,param_1,param_2,param_3,param_4);
    }
  }
  else if (((param_3 & 0xff) == 0xb) && ((byte)((char)this[0x1e9] - 2U) < 3)) {
    uVar1 = F_006bd240((undefined *)this,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b99b60 */
uint F_00b99b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb99b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0x30,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_00cb4700(this_00,param_2,0);
    this_00[5] = param_2;
    this_00[7] = param_1;
    this_00[6] = this;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x1101d50));
    this_00[8] = param_3;
    this_00[9] = 0;
    *(undefined2 *)(this_00 + 10) = 0;
    *(undefined1 *)(this_00 + 0xb) = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_00b99bd0 */
uint F_00b99bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb99bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  this_00 = (undefined4 *)F_00406b90(0x30,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,uVar1,0);
    this_00[5] = uVar1;
    this_00[6] = this;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x1101d50));
    this_00[7] = param_1;
    this_00[8] = param_4;
    this_00[9] = 0;
    *(undefined2 *)(this_00 + 10) = 0;
    *(undefined1 *)(this_00 + 0xb) = 0;
  }
  *(undefined2 *)(this_00 + 10) = (undefined2)param_3;
  this_00[9] = param_2;
  F_00b9a1e0(this_00);
  return (uint)this_00;
}

/* ref: FUN_00b99c60 */
uint F_00b99c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  uVar2 = F_00b99bd0(this,param_1,*(uint *)((int)this + 8) & 0xffff,1,param_2);
  *(uint *)((int)this + 0x1d8) = uVar2;
  return uVar2;
}

/* ref: FUN_00b99cb0 */
uint F_00b99cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x81);
  uVar2 = F_00b99bd0(this,uVar2,param_1,1,0xffffffff);
  *(uint *)((int)this + 0x1d8) = uVar2;
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickAccessor::vf1 */
uint F_00b99d10(unsigned int gen_a0)
{
  GEN_ENTER(0xb99d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x78);
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  uVar2 = F_00b99bd0(this,uVar2,*(uint *)(this + 8) & 0xffff,1,0);
  *(uint *)(this + 0x1d8) = uVar2;
  F_006bccf0(this);
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickBill::vf145 */
uint F_00b99d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x74);
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  uVar2 = F_00b99bd0(this,uVar2,*(uint *)(this + 8) & 0xffff,1,0);
  *(uint *)(this + 0x1d8) = uVar2;
  return uVar2;
}

/* ref: FUN_00b99dd0 */
uint F_00b99dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb99dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x1101aec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x1101ad8));
  F_00b99a60(this,0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  uVar2 = F_006fd580(this);
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf1 */
uint F_00b99e30(unsigned int gen_a0)
{
  GEN_ENTER(0xb99e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x80);
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  uVar2 = F_00b99bd0(this,uVar2,*(uint *)(this + 8) & 0xffff,1,0);
  *(uint *)(this + 0x1d8) = uVar2;
  F_006bccf0(this);
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf148 */
uint F_00b99e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 1) {
    F_00b999d0(this);
  }
  uVar1 = F_006bccd0(this);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf150 */
unsigned int F_00b99ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xb99ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b99a60(this,1);
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf146 */
uint F_00b99ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xb99ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 GVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  GVar1 = this[0x1e8];
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),GVar1);
  if ((byte)((char)GVar1 - 3U) < 2) {
    this[0x1ec] = GVar1;
    uVar2 = F_00b99cb0(this,*(undefined4 *)(this + 0x1e0));
  }
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf147 */
uint F_00b99f00(unsigned int gen_a0)
{
  GEN_ENTER(0xb99f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 GVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  GVar1 = this[0x1e9];
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),GVar1);
  if ((byte)((char)GVar1 - 3U) < 2) {
    this[0x1ec] = GVar1;
    uVar2 = F_00b99cb0(this,*(undefined4 *)(this + 0x1e4));
  }
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf55 */
uint F_00b99f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  if (this[0x1ec] == (undefined1)0x4) {
    if (param_1 == 0) {
      uVar1 = F_00b99cb0(this,6);
      this[0x1ec] = (undefined1)0x3;
      F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
      return uVar1;
    }
    uVar3 = 0;
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = ((int *)(gen_frame + 0x8));
    uVar3 = 1;
    ((int *)(gen_frame + 0x8))[0] = param_1;
    (*(undefined4 *)(gen_frame + 0x404)) = 1;
  }
  uVar1 = F_006f3a50(this,piVar2,uVar3);
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickAccessor::vf145 */
uint F_00b99fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x1e8))) {
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    uVar3 = F_00b99cb0(this,*(undefined4 *)(this + 0x1dc));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar3;
  default: ;
    uVar3 = F_006f3a50(this,0,0);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar3;
  case 8: ;
    this_00 = (undefined *)F_006b8c00();
    piVar2 = (int *)F_006d7020(this_00);
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    uVar1 = *(ushort *)(this + 8);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    ((code *)*(gen_code32 *)(*piVar2 + 0x278))(piVar2,(uint)uVar1,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x4)));
    F_00711100(*(undefined * PTR32 *)(this + 4),this,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x4)),0);
    F_004876d0(&(*(undefined4 *)(gen_frame + 0x4)));
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)uVar4;
  }
}

/* ref: FUN_00b9a0b0 */
uint F_00b9a0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb9a0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x24)),(**(uint * PTR32 *)(*param_3 + 4) & 0xffffff) + (int)*(uint * PTR32 *)(*param_3 + 4),
               REFG(undefined4, 0x108cc50));
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  F_00710cb0(*(undefined * PTR32 *)((int)this + -0x1d0),(int)this + -0x1d4,((undefined1 *)(gen_frame + 0x24)),&(*(int * PTR32 *)(gen_frame + 0xc)),0,0,4,0x3d,0,
               0x279,0,0,0,0);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar2;
}

/* ref: FUN_00b9a190 */
uint F_00b9a190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x3fc);
  *(undefined4 *)((int)this + uVar1 * 4) = param_1;
  *(int *)((int)this + 0x3fc) = *(int *)((int)this + 0x3fc) + 1;
  return uVar1;
}

/* ref: FUN_00b9a1e0 */
uint F_00b9a1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9a1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(ushort *)((int)this + 0x2a) = *(ushort *)((int)this + 0x28);
  if (*(uint *)((int)this + 0x14) < (uint)*(ushort *)((int)this + 0x28)) {
    *(short *)((int)this + 0x2a) = (short)*(uint *)((int)this + 0x14);
  }
  uVar1 = 0;
  if (*(short *)((int)this + 0x2a) != 0) {
    do {
      F_00cb4540(this,uVar1,*(int *)((int)this + 0x24) + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)this + 0x2a));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x48))))(*(int * PTR32 *)((int)this + 0x1c),this);
  *(undefined1 *)((int)this + 0x2c) = 1;
  return uVar1;
}

/* ref: FUN_00b9a230 */
uint F_00b9a230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9a230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x1101858));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: SheetWaiter_VGimmickEventHandler_Gimmick_Game_Client_Game::vf0 */
uint F_00b9a260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b9a290 */
uint F_00b9a290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a2a0((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf0 */
uint F_00b9a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b9a300 */
uint F_00b9a300(unsigned int gen_a0)
{
  GEN_ENTER(0xb9a300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  uVar2 = F_006fd580(this);
  return uVar2;
}

/* ref: FUN_00b9a350 */
uint F_00b9a350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a360((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

