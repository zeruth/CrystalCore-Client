#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_007fe2e0 */
uint F_007fe2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fe2e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x1a4) != 0) {
    uVar1 = F_0055a2d0(*(int *)(in_ecx + 0x1a4));
    if ((char)uVar1 != '\0') {
      if (*(int *)(in_ecx + 0x1a8) != 0) {
        uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x1a8) + 0x70))));
        if ((char)uVar1 != '\0') {
          return *(uint *)(in_ecx + 0x1a8);
        }
      }
      if (*(int *)(in_ecx + 0x1ac) != 0) {
        uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x1ac) + 0x70))));
        if ((char)uVar1 != '\0') {
          return *(uint *)(in_ecx + 0x1ac);
        }
      }
      if (*(int *)(in_ecx + 0x1b0) != 0) {
        uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x1b0) + 0x70))));
        if ((char)uVar1 != '\0') {
          return *(uint *)(in_ecx + 0x1b0);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_007fe360 */
uint F_007fe360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fe360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_ecx;
  uint uVar1;
  
  in_ecx = 0;
  if (*(int *)((int)this + 0x18c) != 0) {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x70)));
  }
  uVar1 = F_0055a350(in_ecx);
  if ((char)uVar1 != '\0') {
    uVar1 = F_0059f6f0(*(undefined * PTR32 *)((int)this + 0x18c),
                         (int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x18c) + 0xc2))) *
                         ((uint)((short)param_1 < 1) * 2 + -1),1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonJournalResult::vf37 */
uint F_007fe460(unsigned int gen_a0)
{
  GEN_ENTER(0x7fe460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x18c) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonJournalResult::vf46 */
byte F_007fe4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fe4b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  uint uVar7;
  int iVar8;
  
  pbVar1 = (*(byte * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (((*(int *)&gen_args[1]) != 0) && ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0)) {
    if ((((*(byte * PTR32 *)&gen_args[2])[0x108] & 0xf) == 0) || (*((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x10c))) == 0)) {
      (*(undefined * PTR32 *)&gen_args[0])[0x1a4] = (undefined1)0x0;
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),1);
      pvVar6 = (undefined *)0x0;
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) != 0) {
        pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) + 0x70)));
      }
      F_00568380(pvVar6,0x17,1,(*(undefined * PTR32 *)&gen_args[0]),0,0);
    }
    else {
      (*(undefined * PTR32 *)&gen_args[0])[0x1a4] = (undefined1)0x1;
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),0);
    }
    if ((*pbVar1 & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar1 + 4);
    }
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),uVar4);
    if ((pbVar1[0x290] & 0xf) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(pbVar1 + 0x294);
    }
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),(uint)(iVar8 != 0));
    if (iVar8 != 0) {
      F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),iVar8,0);
    }
    if ((pbVar1[0x298] & 0xf) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(pbVar1 + 0x29c);
    }
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),(uint)(iVar8 != 0));
    if (iVar8 != 0) {
      F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),iVar8,0);
    }
    if (((pbVar1[600] & 0xf) != 0) && (*(int *)(pbVar1 + 0x25c) != 0)) {
      if ((pbVar1[0x2a0] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar1 + 0x2a4);
      }
      if ((pbVar1[0x260] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar1 + 0x264);
      }
      F_00592b60(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),*(int *)(pbVar1 + 0x25c),uVar5,uVar4);
      uVar4 = 0x66;
      pvVar6 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),3);
      F_0059d670(pvVar6,uVar4);
    }
    if ((pbVar1[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar1 + 0xc);
    }
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),uVar4);
    F_00563ea0(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))));
    F_0056e740(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))));
    if ((pbVar1[0x10] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar1 + 0x14);
    }
    F_00597d10(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),uVar4,(*(int *)&gen_args[1]),pbVar1,3,8,0xd,0x17,0x1c);
    if ((pbVar1[0x108] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar1 + 0x10c);
    }
    F_00597f60(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),uVar4,(*(int *)&gen_args[1]),pbVar1,0x22,0x27,0x2c,0x31);
    if ((pbVar1[0x268] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(pbVar1 + 0x26c);
    }
    F_00598240(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),uVar4,(*(int *)&gen_args[1]),pbVar1,0x37,0x3b,0x43,0x47,0x3f);
    F_00574ec0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(byte * PTR32 *)&gen_args[2]),0);
    uVar4 = 0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) != 0) {
      uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + 0x70)));
    }
    uVar2 = F_0055a030(uVar4);
    if ((uint)uVar2 <= *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac)))) {
      uVar7 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),1);
      uVar3 = F_0055a030(uVar7);
      uVar7 = (uint)uVar3 + ((uint)uVar2 - *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))));
      if (uVar7 < *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8)))) {
        uVar7 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8)));
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)(gen_frame + 0x8)),uVar7);
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonJournalResult::vf2 */
uint F_007fe740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7fe740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 in_ecx;
  undefined * this_00;
  undefined1 * this_01;
  int iVar2;
  
  this_01 = (gen_frame + 0x1c);
  if ((param_1 & 0xffff) == 0x17) {
    if (param_2 == 1) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (this[0x1a4] == (undefined1)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_00564250(*(undefined4 *)(this + 0x1a0));
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
      (*(uint *)(gen_frame + 0x18)) = uVar1;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar2 = 1;
      do {
        this_01 = this_01 + -8;
        uVar1 = F_005a2670(this_01);
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    else {
      uVar1 = param_2 - 2;
      if (uVar1 == 0) {
        F_00557670(param_3,0);
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
        (*(uint *)(gen_frame + 0x18)) = 1;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
        uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
        return uVar1;
      }
    }
  }
  else {
    uVar1 = (param_1 & 0xffff) - 0x19;
    if (uVar1 == 0) {
      in_ecx = 0;
      if (*(int *)(this + 0x18c) != 0) {
        in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      uVar1 = F_0055a350(in_ecx);
      if ((char)uVar1 == '\0') {
        if (*(int *)(this + 0x18c) == 0) {
          this_00 = (undefined *)0x0;
        }
        else {
          this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
        }
        F_00568380(this_00,0x17,1,this,0,0);
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x28))))(*(int * PTR32 *)(this + 0x18c),1);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_007fe880 */
uint F_007fe880(unsigned int gen_a0)
{
  GEN_ENTER(0x7fe880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9ccc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1d8);
  iVar2 = 0xa0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)((int)this + 0x6f0) = 0;
  *(undefined4 *)((int)this + 0x6f6) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x708) = (*(undefined * PTR32 (*)[4])REFP(0x10c9cb8));
  F_00580ea0((undefined *)((int)this + 0x714));
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  return (uint)this;
}

/* ref: FUN_007fe970 */
uint F_007fe970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fe970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = 0;
  *(uint *)((int)this + 0x6f0) = param_1;
  if ((param_1 != 0) && (param_1 < 5)) {
    if (param_1 <= param_3) {
      param_3 = 0;
    }
    local_8 = (uint)*(ushort *)((int)this + 0x6ea);
    uVar1 = *(ushort *)((int)this + 0x6ec) / param_1;
    *(char *)((int)this + 0x6e8) = (char)param_2;
    uVar2 = param_3;
    if (((char)param_2 != '\0') && ((param_2 & 0xff & 1 << ((byte)param_3 & 0x1f)) != 0)) {
      param_3 = 0;
      uVar3 = 0;
      do {
        uVar2 = uVar3;
        if ((param_2 & 0xff & 1 << ((byte)uVar3 & 0x1f)) == 0) break;
        uVar3 = uVar3 + 1;
        uVar2 = param_3;
      } while (uVar3 < 4);
    }
    param_3 = uVar2;
    puVar4 = (undefined4 *)((int)this + 0x188);
    do {
      this_00 = (int *)*puVar4;
      if (this_00 != (int *)0x0) {
        F_0055a300((undefined *)this_00[0x1c],(uint)(uVar5 < param_1));
        ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,0);
        uVar2 = F_0055a2d0(this_00[0x1c]);
        if ((char)uVar2 != '\0') {
          if (param_3 == uVar5) {
            F_0059dde0(this_00,1);
          }
          F_00559e70(this_00[0x1c],(float)(int)(short)local_8);
          F_0055a060(this_00[0x1c],uVar1);
          local_8 = local_8 + uVar1;
        }
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < 4);
  }
  return param_3;
}

/* ref: FUN_007fea80 */
uint F_007fea80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fea80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  int in_ecx;
  uint uVar4;
  int * piVar5;
  int local_8;
  
  uVar4 = 1;
  piVar5 = (int *)((int)this + 0x188);
  local_8 = 4;
  do {
    piVar1 = (int *)*piVar5;
    if (piVar1 == (int *)0x0) {
      in_ecx = 0;
    }
    else {
      in_ecx = piVar1[0x1c];
    }
    pvVar2 = (undefined *)F_0055a2d0(in_ecx);
    if ((char)pvVar2 != '\0') {
      if (((char)param_1 == '\0') &&
         (pvVar2 = this, (*(byte *)((int)this + 0x6e8) & (byte)uVar4) == 0)) {
        uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),1);
      }
      else {
        uVar3 = (uint)pvVar2 & 0xffffff00;
      }
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,uVar3)));
    }
    piVar5 = piVar5 + 1;
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return (uint)pvVar2;
}

/* ref: FUN_007feb40 */
uint F_007feb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7feb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  byte * pbVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1 != 0) {
    piVar5 = (int *)((int)this + 0x198);
    pbVar4 = (byte *)(param_4 + param_5 * 8);
    do {
      if (*piVar5 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*piVar5 + 0x70);
      }
      F_0055a300(pvVar2,1);
      uVar1 = F_00561570((undefined *)*piVar5,4);
      if (uVar1 != 0) {
        if ((*pbVar4 & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar4 + 4);
        }
        F_0058f730((undefined *)(uVar1 + 4),uVar3,0,6);
      }
      F_0059dde0((undefined *)*piVar5,(uint)(param_2 == uVar7));
      if (*piVar5 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*piVar5 + 0x70);
      }
      F_0055a300(pvVar2,1);
      uVar7 = uVar7 + 1;
      pbVar4 = pbVar4 + 8;
      piVar5 = piVar5 + 1;
    } while (uVar7 < param_1);
  }
  uVar7 = param_1;
  if (param_1 < 8) {
    piVar5 = (int *)((int)this + param_1 * 4 + 0x198);
    iVar6 = 8 - param_1;
    do {
      if (*piVar5 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*piVar5 + 0x70);
      }
      uVar7 = F_0055a300(pvVar2,0);
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar7;
}

/* ref: FUN_007fec20 */
uint F_007fec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fec20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  if (param_1 != *(int *)((int)this + 0x6fc)) {
    F_007fea80(this,1);
    *(int *)((int)this + 0x6fc) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 8;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(int *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar2 = 2;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_007feca0 */
uint F_007feca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7feca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*((byte *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) & 2) != 0) {
    uVar1 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x184),4,0);
    return uVar1;
  }
  uVar1 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x184),2,0);
  return uVar1;
}

/* ref: FUN_007fecd0 */
uint F_007fecd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fecd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  return uVar1;
}

/* ref: FUN_007fed00 */
uint F_007fed00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fed00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  
  this = (undefined *)*param_2;
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  this_01 = (undefined *)F_00559ba0(param_2[2]);
  iVar1 = *((int *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4)));
  F_0055a300(this,(uint)(iVar1 != 0));
  if (iVar1 != 0) {
    F_005951c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))),iVar1,0,this);
  }
  F_00584110(this_00,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  uVar2 = F_00584110(this_01,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))) + 4))));
  return uVar2;
}

/* ref: FUN_007fed80 */
uint F_007fed80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fed80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = param_1[2];
  uVar3 = *param_1;
  if ((uVar3 != 0) && (*(int *)(uVar3 + 0x1e4) != 0)) {
    puVar2 = (undefined4 *)F_0056dc60(*(undefined4 *)((int)this + 0x184),uVar1);
    uVar3 = 0;
    if ((puVar2 != (undefined4 *)0x0) && (uVar3 = *(uint *)*puVar2, (uVar3 & 2) == 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 3;
      (*(undefined4 *)(gen_frame + 0x4)) = 10;
      (*(uint *)(gen_frame + 0xc)) = uVar1;
      (*(uint *)(gen_frame + 0x14)) = uVar3 >> 4;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0x18));
      iVar4 = 2;
      do {
        this_00 = this_00 + -2;
        uVar3 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_007fee20 */
uint F_007fee20(unsigned int gen_a0)
{
  GEN_ENTER(0x7fee20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  undefined4 in_ecx;
  uint uVar3;
  
  F_00560f40(*(undefined4 *)((int)this + 0x180),0xa1,(int)this + 0x1d8);
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x180) + 4))) + 0x120)));
  *puVar1 = *puVar1 | 0x400;
  in_ecx = 0;
  if (*(int *)((int)this + 0x184) != 0) {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x184) + 0x70)));
  }
  uVar3 = F_0055a2d0(in_ecx);
  if ((char)uVar3 == '\0') {
    uVar3 = F_0055dcb0();
    if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 4)))) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
    }
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 4)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0,0);
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 4)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
  }
  uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x180) + 4)));
  puVar1 = (uint *)(uVar3 + 0x120);
  *puVar1 = *puVar1 & 0xfffffbff;
  return uVar3;
}

/* ref: Client::UI2::AddonGuildLeve::vf60 */
byte F_007feed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7feed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 in_ecx;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if (param_1 == 0xf) {
    if (((char)param_2 == '\0') || (*(uint *)(this + 0x6fc) < *(int *)(this + 0x6f0) - 1U)) {
      uVar3 = (*(int *)(this + 0x6fc) + 1U) % *(uint *)(this + 0x6f0);
    }
  }
  else {
    if (param_1 != 0x10) {
      return 0;
    }
    if (((char)param_2 == '\0') || (*(int *)(this + 0x6fc) != 0)) {
      uVar3 = (*(int *)(this + 0x6fc) + -1 + *(uint *)(this + 0x6f0)) % *(uint *)(this + 0x6f0);
    }
  }
  if (-1 < (int)uVar3) {
    in_ecx = 0;
    if (*(int *)(this + uVar3 * 4 + 0x188) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + uVar3 * 4 + 0x188) + 0x70)));
    }
    uVar2 = F_0055a350(in_ecx);
    if ((char)uVar2 != '\0') {
      piVar1 = *(int * PTR32 *)(this + uVar3 * 4 + 0x188);
      uVar2 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar2 + 0xc0);
      F_007fec20(this,uVar3);
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 1;
}

/* ref: FUN_007fefb0 */
uint F_007fefb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fefb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * this_00;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 * puVar10;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9b0(uVar3);
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 4) + 0x20))) + param_2 * 4)));
  uVar6 = *(undefined4 *)(iVar2 + 8);
  uVar3 = (uint)*(ushort *)(iVar2 + 0x10);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar2 + 4);
  this_00 = (int *)F_00559c20(param_1);
  uVar8 = 0;
  pvVar4 = (undefined *)F_00561550(this_00,3);
  F_00591c00(pvVar4,uVar6,uVar8);
  uVar9 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = 0;
  pvVar4 = (undefined *)F_00561530(this_00,2);
  F_0057eb30(pvVar4,uVar3,uVar6,uVar8,uVar7,uVar9);
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00);
  if (uVar3 == 0) {
    uVar3 = F_00561490(this_00,5);
    this_00[0x1a] = uVar3;
  }
  F_00560760(((undefined4 *)(gen_frame + 0xc)));
  bVar1 = *(byte *)((int)this + 0x13a);
  ((undefined4 *)(gen_frame + 0xc))[0] = (*(undefined4 *)(gen_frame + 0x18));
  uVar3 = F_0055dcb0();
  puVar10 = ((undefined4 *)(gen_frame + 0xc));
  uVar5 = ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00);
  uVar3 = F_00590ad0((undefined *)(uVar3 + 0xe0),2,(uint)bVar1,uVar5,puVar10);
  return uVar3;
}

/* ref: Client::UI2::AddonRetainerSell::vf37 */
uint F_007ff080(unsigned int gen_a0)
{
  GEN_ENTER(0x7ff080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b10((undefined *)(uVar1 + 0xe0),*(undefined4 *)(this + 400));
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  if (*(int *)(this + 0x194) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70))),0x19,0,this,0);
  }
  if (*(int *)(this + 0x198) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70))),0x19,0,this,0);
  }
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0x14,this,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0x15,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerSell::vf2 */
uint F_007ff130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ff130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((param_1 & 0xffff) == 0x17) {
    if (param_2 == 2) {
      uVar1 = F_0079edf0(this);
    }
    else {
      if (param_2 == 0x14) {
        uVar1 = F_0079ed70(this);
        return uVar1;
      }
      uVar1 = param_2 - 0x15;
      if (uVar1 == 0) {
        uVar1 = F_0079edb0(this);
        return uVar1;
      }
    }
  }
  else {
    uVar1 = (param_1 & 0xffff) - 0x19;
    if (uVar1 == 0) {
      uVar1 = F_0079ec90(this,param_3,param_4);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_007ff180 */
uint F_007ff180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ff180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(param_1,7);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
      uVar1 = 0;
    }
  }
  *(uint *)this = uVar1;
  uVar1 = F_0055e340(param_1,0xf);
  *(uint *)((int)this + 4) = uVar1;
  uVar1 = F_0055e340(param_1,8);
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = F_0055e360(param_1,0x10);
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = F_0055e340(param_1,0x11);
  *(uint *)((int)this + 0x14) = uVar1;
  uVar1 = F_0055e340(param_1,0xe);
  *(uint *)((int)this + 0x18) = uVar1;
  uVar1 = F_0055e340(param_1,0xd);
  *(uint *)((int)this + 0x1c) = uVar1;
  uVar1 = F_0055e340(param_1,0xb);
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_007ff220 */
uint F_007ff220(unsigned int gen_a0)
{
  GEN_ENTER(0x7ff220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca1cc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1a0);
  local_8 = 0x92;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    F_0042b630(puVar1 + 5);
    F_0042b630(puVar1 + 0x1a);
    puVar1 = puVar1 + 0x2f;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerSellList::vf37 */
uint F_007ff2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ff2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0);
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x21,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x1f,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x20,0,this,0);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonRetainerSellList::vf2 */
uint F_007ff320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ff320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = param_1 & 0xffff;
  piVar3 = (int *)(uVar2 - 0xc);
  if (piVar3 < (int *)0x25) {
    piVar3 = (int *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7ff430) + uVar2)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0xc: ;
      F_00557670(param_3,0);
      piVar3 = param_4;
      if ((*param_4 == 5) && ((char)param_4[1] == '\0')) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
        (*(undefined4 *)(gen_frame + 0x8)) = 3;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
        AVar1 = this[0x13a];
        uVar2 = F_0055dcb0();
        F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
        uVar2 = F_0055dcb0();
        F_00594ca0(*(undefined * PTR32 *)(uVar2 + 0x14),this);
        uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
        return uVar2;
      }
      break;
    case 0x1f: ;
    case 0x20: ;
      piVar3 = (int *)F_0079f150(this,param_1,param_3,param_4);
      break;
    case 0x21: ;
      uVar2 = F_0079f200(this,param_3,param_4);
      return uVar2;
    case 0x2d: ;
      uVar2 = F_0079f3a0(this,param_3,param_4);
      return uVar2;
    case 0x30: ;
      uVar2 = F_0079f2d0(this,param_3,param_4);
      return uVar2;
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_007ff470 */
uint F_007ff470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ff470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar2 = (undefined *)*param_2;
  puVar1 = (undefined4 *)((int)((int)(uintptr_t)param_1) * 0xbc + 0x1a0 + (int)this);
  uVar3 = F_0042a990(puVar1 + 5);
  F_00584110(pvVar2,uVar3);
  pvVar2 = (undefined *)param_2[1];
  uVar3 = F_00560910(puVar1[1]);
  F_00584110(pvVar2,uVar3);
  pvVar2 = (undefined *)param_2[2];
  uVar3 = F_0042a990(puVar1 + 0x1a);
  F_00584110(pvVar2,uVar3);
  if (param_2[3] == 0) goto LAB_007ff51c;
  param_1 = (undefined *)F_00559c20(param_2[3]);
  if (param_1 == (undefined *)0x0) {
LAB_007ff4e6: ;
    param_1 = (undefined *)0x0;
  }
  else {
    uVar3 = F_005613a0(param_1);
    if (uVar3 != 0xf) goto LAB_007ff4e6;
  }
  F_00595190(param_1,*puVar1,0,0);
  uVar3 = puVar1[4];
  F_00561860(param_1,(uint)(*(byte *)(puVar1 + 4) & 1));
  F_005a03c0(param_1,uVar3 >> 1);
LAB_007ff51c: ;
  uVar3 = F_0055a300((undefined *)param_2[4],0);
  return uVar3;
}

/* ref: Client::UI2::AddonRetainerHistory::vf44 */
uint F_007ff530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ff530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar1 = F_0055e2f0(this,10);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
      uVar1 = 0;
    }
  }
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e340(this,0xb);
  *(uint *)(this + 0x188) = uVar1;
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    F_005624c0(*(undefined * PTR32 *)(this + 0x180),1,1,0);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 2;
    (*(undefined4 *)(gen_frame + 0x2c)) = 4;
    (*(undefined4 *)(gen_frame + 0x38)) = 5;
    (*(undefined4 *)(gen_frame + 0x44)) = 7;
    (*(undefined4 *)(gen_frame + 0x50)) = 6;
    (*(undefined4 *)(gen_frame + 0x5c)) = 8;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x79f610));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_00574320(*(undefined * PTR32 *)(this + 0x180),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),7,0);
  }
  F_005a91d0(this,0,0x21);
  uVar1 = F_005a91d0(this,1,0x24);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar1;
}

/* ref: Client::UI2::AddonRetainerHistory::vf46 */
byte F_007ff650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ff650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  ushort uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if ((param_2[8] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0xc);
    }
    this_00 = (undefined *)F_0055e340(this,2);
    F_00584110(this_00,uVar2);
    if ((*param_2 & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 4);
    }
    F_0059ead0(*(undefined * PTR32 *)(this + 0x180),iVar4,0,1);
    if (iVar4 == 0) {
      F_0059d6a0(this,0x65,1,0);
      if ((param_2[0x10] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x14);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x188),uVar2);
    }
    else {
      F_0059d6a0(this,0x11,1,0);
    }
    iVar4 = 0;
    uVar1 = F_0056d300(*(undefined * PTR32 *)(this + 0x180),0);
    if (uVar1 != 0) {
      do {
        uVar3 = F_0056d250(*(undefined * PTR32 *)(this + 0x180),0,iVar4);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = *(undefined4 *)(uVar3 + 0x70);
        }
        F_0055a3c0(uVar2,0);
        iVar4 = iVar4 + 1;
        uVar1 = F_0056d300(*(undefined * PTR32 *)(this + 0x180),0);
      } while ((ushort)iVar4 < uVar1);
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf37 */
uint F_007ff730(unsigned int gen_a0)
{
  GEN_ENTER(0x7ff730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  int iVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x1e4) + 4))) + 0x90))),0xc,0,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x1e8) + 4))) + 0x90))),0xc,0,this,0);
  }
  pAVar2 = this + 0x18c;
  iVar3 = 0;
  do {
    if (*(int *)pAVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,iVar3 + 3,this,0);
    }
    iVar3 = iVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (iVar3 < 8);
  F_00588e00(this + 0x1ac,0);
  F_005a92d0(this,1,0x21,0);
  F_005a92d0(this,0,0x1e,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf47 */
unsigned int F_007ff7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ff7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x78);
  F_00584110(*(undefined * PTR32 *)(this + 0x180),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xac))));
  F_00584110(*(undefined * PTR32 *)(this + 0x188),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xb4))));
  F_0079faa0(this,*(undefined4 *)(this + 0x1f0));
  return 0;
}

/* ref: FUN_007ff840 */
uint F_007ff840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ff840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  undefined4 * puVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar3 = F_0055dcb0();
  cVar1 = *(char *)(uVar3 + 0xbc);
  F_0056c270(&(*(undefined4 *)(gen_frame + 0x0)));
  if (cVar1 != '\0') {
    uVar3 = F_0055dcb0();
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(uVar3 + 0x40);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(uVar3 + 0x44);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(uVar3 + 0x48);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(uVar3 + 0x4c);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x10)),uVar3 + 0x50);
    (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(uVar3 + 0xa4);
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),(uint)(param_1 != 7));
  F_0059bd30((undefined *)((int)this + 0x1ac),
               *((undefined4 *)GEN_TOP((*(int *)((int)this + (uint)(param_1 == 7) * 4 + 0x1e4) + 0x18))),1,1);
  *(int *)((int)this + 0x1f0) = param_1;
  F_0079faa0(this,param_1);
  if (cVar1 != '\0') {
    uVar3 = F_0055dcb0();
    *(undefined4 *)(uVar3 + 0x40) = (*(undefined4 *)(gen_frame + 0x0));
    *(undefined4 *)(uVar3 + 0x44) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)(uVar3 + 0x48) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)(uVar3 + 0x4c) = (*(undefined4 *)(gen_frame + 0xc));
    F_0042ccf0((undefined *)(uVar3 + 0x50),((undefined1 *)(gen_frame + 0x10)));
    *(undefined4 *)(uVar3 + 0xa4) = (*(undefined4 *)(gen_frame + 0x64));
  }
  puVar5 = (undefined4 *)((int)this + 0x18c);
  iVar4 = 8;
  do {
    iVar6 = iVar4;
    F_0059dde0((undefined *)*puVar5,0);
    puVar5 = puVar5 + 1;
    iVar4 = iVar6 + -1;
  } while (iVar4 != 0);
  F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x1f0) * 4 + 0x18c))),1);
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x68)),3);
  uVar2 = *(undefined4 *)((int)this + 0x1f0);
  (*(undefined4 *)(gen_frame + 0x6c)) = 5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x78)),4);
  (*(undefined4 *)(gen_frame + 0x7c)) = uVar2;
  F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x68)));
  this_00 = &(*(uint *)(gen_frame + 0x88));
  iVar6 = iVar6 + 2;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  uVar3 = F_00560340(&(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: FUN_007ff9f0 */
uint F_007ff9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ff9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x18c));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x1a8);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar3 = F_0055a020(uVar4);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar3;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar3,0x4002);
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  uVar4 = 0x548;
  if (param_1 == 1) {
    uVar4 = 0x549;
  }
  bVar2 = F_0056b630(this,uVar4,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_007ffae0 */
uint F_007ffae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ffae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_0056b630(this,0x18ab8,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_007ff9f0(this,(uint)*(byte *)((int)this + 500));
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf37 */
uint F_007ffb20(unsigned int gen_a0)
{
  GEN_ENTER(0x7ffb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  int iVar4;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0);
    uVar1 = F_0055dcb0();
    F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
    F_005a92d0(this,1,0x21,0);
    F_005a92d0(this,0,0x1e,0);
    iVar4 = 0;
    pAVar3 = this + 0x180;
    do {
      if (*(int *)pAVar3 != 0) {
        F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar3 + 0x70),0x30,iVar4,this,0);
        pvVar2 = (undefined *)0x0;
        if (*(int *)pAVar3 != 0) {
          pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
        }
        F_005840a0(pvVar2,0x34,iVar4,this,0);
        pvVar2 = (undefined *)0x0;
        if (*(int *)pAVar3 != 0) {
          pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
        }
        F_005840a0(pvVar2,0x2d,iVar4,this,0);
      }
      iVar4 = iVar4 + 1;
      pAVar3 = pAVar3 + 4;
    } while (iVar4 < 0x19);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf44 */
uint F_007ffbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ffbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 AVar1;
  uint uVar2;
  uint in_ecx;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined * local_10;
  
  AVar1 = this[0x13c];
  uVar2 = F_0055dcb0();
  uVar2 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
  bVar5 = true;
  if (uVar2 != 0) {
    bVar5 = *(char *)(uVar2 + 500) == '\0';
  }
  local_10 = this + 0x180;
  iVar4 = 0;
  do {
    uVar2 = F_0055e2f0(this,iVar4 + 3);
    if (uVar2 != 0) {
      in_ecx = F_00559c20(uVar2);
      if (in_ecx != 0) {
        uVar3 = F_005613a0(in_ecx);
        if (uVar3 == 0x11) {
          *(short *)(in_ecx + 0x9c) = (short)iVar4;
          *(byte *)(in_ecx + 0xa9) = bVar5 - 1U & 3;
          *(undefined4 *)(in_ecx + 0xa0) = 0x40018;
          F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x30,iVar4,this,uVar2,0);
          F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x34,iVar4,this,uVar2,0);
          F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x2d,iVar4,this,uVar2,0);
          *(uint *)local_10 = in_ecx;
        }
      }
    }
    local_10 = local_10 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x19);
  uVar2 = F_0055e2f0(this,0x1c);
  *(uint *)(this + 0x94) = uVar2;
  F_005a91d0(this,1,0x21);
  F_005a91d0(this,0,0x1e);
  uVar2 = F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf47 */
uint F_007ffd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ffd00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  undefined1 AVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  char * pcVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  AVar2 = this[0x13c];
  (*(int *)(gen_frame + 0x38)) = *(int *)(param_1 + 0x84);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x18)) = *(int *)(param_2 + 0x78);
  iVar9 = 0;
  bVar10 = false;
  uVar5 = F_0055dcb0();
  uVar5 = F_0057f810(*(undefined * PTR32 *)(uVar5 + 0x14),(uint)(byte)AVar2);
  if (uVar5 != 0) {
    bVar10 = *(char *)(uVar5 + 500) == '\x01';
    iVar9 = *(int *)(uVar5 + 0x1f0);
    if (iVar9 < 0) {
      return uVar5;
    }
    if (6 < iVar9) {
      return uVar5;
    }
  }
  (*(int *)(gen_frame + 0x28)) = -1;
  uVar5 = F_0055dcb0();
  iVar3 = *(int *)(uVar5 + 0xb4);
  if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x98) & 0x10) != 0)) {
    piVar1 = (int *)(iVar3 + 0x84);
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar3 + 0x84) + 0x28))))(piVar1)));
    if (*piVar6 == iVar9 + 0x27) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1);
      (*(int *)(gen_frame + 0x28)) = iVar9 * 0x19 + *(int *)(uVar5 + 4);
    }
  }
  F_00560760(&(*(char * PTR32 *)(gen_frame + 0xc)));
  (*(undefined1 *)(gen_frame + 0x16)) = 2;
  (*(int *)(gen_frame + 0x10)) = iVar9 + 0x27;
  (*(int *)(gen_frame + 0x34)) = iVar9 * 0x19;
  param_2 = 0;
  (*(int *)(gen_frame + 0x20)) = 0x10;
  do {
    iVar9 = (*(int *)(gen_frame + 0x20));
    piVar1 = *(int * PTR32 *)(this + param_2 * 4 + 0x180);
    if (piVar1 != (int *)0x0) {
      uVar4 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + -4 + *(int *)((*(int *)(gen_frame + 0x38)) + 0x20))));
      (*(undefined4 *)(gen_frame + 0x30)) = uVar4;
      bVar11 = (char)((uint)uVar4 >> 8) != '\0';
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 0)) = bVar11;
      (*(undefined4 *)(gen_frame + 0x2c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x2c)), 1, 3),bVar11);
      F_0056e4d0(piVar1,(*(undefined4 *)(gen_frame + 0x2c)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,(uint)((char)(*(undefined4 *)(gen_frame + 0x2c)) == '\0'));
      if ((bVar10) && ((char)((uint)(*(undefined4 *)(gen_frame + 0x30)) >> 0x18) != '\0')) {
        F_0056e4d0(piVar1,1);
      }
      *(undefined2 *)(piVar1 + 0x27) = (undefined2)(*(int *)(gen_frame + 0x34));
      if ((char)(*(undefined4 *)(gen_frame + 0x30)) == '\0') {
        ((code *)*(gen_code32 *)(piVar1[0x21] + 0x30))(piVar1 + 0x21);
        F_00595560(piVar1,0);
        F_00597570(piVar1);
        pvVar7 = (undefined *)0x0;
        if (piVar1[0x29] != 0) {
          pvVar7 = *(undefined * PTR32 *)(piVar1[0x29] + 0x70);
        }
        F_0055a300(pvVar7,0);
        *(byte *)((int)piVar1 + 0xaa) = *(byte *)((int)piVar1 + 0xaa) | 2;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP((iVar9 + -0x10 + *(int *)((*(int *)(gen_frame + 0x38)) + 0x20))));
        ((code *)*(gen_code32 *)(piVar1[0x21] + 0x28))(piVar1 + 0x21);
        ((code *)*(gen_code32 *)(piVar1[0x21] + 0xc))(piVar1 + 0x21);
        piVar1[0x26] = 0x10;
        F_00595560(piVar1,(*(undefined4 *)(gen_frame + 0x1c)));
        pvVar7 = (undefined *)0x0;
        if (piVar1[0x29] != 0) {
          pvVar7 = *(undefined * PTR32 *)(piVar1[0x29] + 0x70);
        }
        F_0055a300(pvVar7,(uint)((*(int *)(gen_frame + 0x34)) != (*(int *)(gen_frame + 0x28))));
        *(byte *)((int)piVar1 + 0xaa) = *(byte *)((int)piVar1 + 0xaa) & 0xfd;
        iVar3 = *((int *)GEN_TOP((iVar9 + -8 + *(int *)((*(int *)(gen_frame + 0x38)) + 0x20))));
        pcVar8 = *((char * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + param_2 * 4)));
        if (pcVar8 == (char *)0x0) {
          pcVar8 = "";
        }
        (*(undefined1 *)(gen_frame + 0x17)) = (char)param_2;
        (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar8;
        F_005916c0(piVar1,6,(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x24))[0x13a],&(*(char * PTR32 *)(gen_frame + 0xc)));
        uVar5 = iVar3 >> 0x10 & 0xffff;
        if ((uVar5 < 2) && ((char)(*(undefined4 *)(gen_frame + 0x30)) != '\x05')) {
          F_0058ea60(piVar1,"");
        }
        else {
          F_0058ea90(piVar1,uVar5);
        }
        iVar9 = *((int *)GEN_TOP((iVar9 + *(int *)((*(int *)(gen_frame + 0x38)) + 0x20))));
        F_00561860((undefined *)piVar1[0x29],(uint)((byte)iVar9 & 1));
        F_005a03c0((undefined *)piVar1[0x29],iVar9 >> 1);
        iVar9 = (*(int *)(gen_frame + 0x20));
        this = (*(undefined * PTR32 *)(gen_frame + 0x24));
      }
    }
    param_2 = param_2 + 1;
    (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
    (*(int *)(gen_frame + 0x20)) = iVar9 + 0x14;
  } while (iVar9 + 0x14 < 0x204);
  return 1;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf52 */
byte F_007fffc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fffc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*param_1 == 2) {
    AVar1 = this[0x13c];
    uVar2 = F_0055dcb0();
    this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)AVar1);
    if (this_00 != (undefined *)0x0) {
      F_0079fb00(this_00);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00800000 */
byte F_00800000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x800000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar2 = (int *)*param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  uVar3 = *puVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar3;
  uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2);
  uVar3 = *(undefined4 *)(uVar5 + 4);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar5 = F_0055dcb0();
  uVar5 = F_0057f810(*(undefined * PTR32 *)(uVar5 + 0x14),(uint)bVar1);
  if (uVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(uVar5 + 0x1f0);
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(int *)(gen_frame + 0x1c)) = iVar6 + 0x27;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  uVar5 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x8)));
  F_005a2670(((undefined1 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar6 = 3;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_00800100 */
uint F_00800100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x800100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  undefined4 * this_01;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar4 = 0;
  if (*param_2 == 0) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0xc)) = *param_2 - 0x84;
  }
  uVar3 = (*(uint *)(gen_frame + 0xc));
  if ((*(byte *)((*(uint *)(gen_frame + 0xc)) + 0xaa) & 2) == 0) {
    (*(uint *)(gen_frame + 0x8)) = *(byte *)((int)param_2 + 9) & 1;
    if ((char)param_2[2] == '\x05') {
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      (*(undefined4 *)(gen_frame + 0x50)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
      bVar1 = *(byte *)((int)this + 0x13a);
      (*(undefined4 *)(gen_frame + 0x3c)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = (uint)bVar1;
      bVar1 = *(byte *)((int)this + 0x13c);
      uVar3 = F_0055dcb0();
      uVar3 = F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)bVar1);
      if (uVar3 != 0) {
        iVar4 = *(int *)(uVar3 + 0x1f0);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),4);
      uVar2 = *(ushort *)((*(uint *)(gen_frame + 0xc)) + 0x9c);
      (*(int *)(gen_frame + 0x4c)) = iVar4 + 0x27;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),4);
      (*(uint *)(gen_frame + 0x54)) = (uint)uVar2 % 0x19;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x38)));
      this_00 = &(*(uint *)(gen_frame + 0x58));
      iVar4 = 3;
      do {
        this_00 = this_00 + -2;
        uVar3 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar3;
    }
    bVar1 = *(byte *)((int)this + 0x13c);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    uVar3 = F_0055dcb0();
    uVar3 = F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)bVar1);
    if (uVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(uVar3 + 0x1f0);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(int *)(gen_frame + 0x14)) = iVar4 + 0x27;
    uVar2 = *(ushort *)((*(uint *)(gen_frame + 0xc)) + 0x9c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(uint *)(gen_frame + 0x1c)) = (uint)uVar2 % 0x19;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    bVar1 = *(byte *)((int)this + 0x13c);
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x8));
    if (bVar1 == 0) {
      bVar1 = *(byte *)((int)this + 0x13a);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = (uint)bVar1;
    uVar3 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x24,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    this_01 = &(*(undefined4 *)(gen_frame + 0x38));
    iVar4 = 4;
    do {
      this_01 = this_01 + -2;
      uVar3 = F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00800300 */
uint F_00800300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x800300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    if ((char)param_1 != '\0') {
      bVar1 = F_0056b630(this_00,0x18ab8,7,0,9,0,0);
      return CONCAT31(extraout_var,bVar1);
    }
    uVar2 = F_007ff9f0(this_00,(uint)*(byte *)((int)this_00 + 500));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf37 */
uint F_00800350(unsigned int gen_a0)
{
  GEN_ENTER(0x800350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pAVar4;
  int iVar5;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0);
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
    F_005a92d0(this,1,0x21,0);
    F_005a92d0(this,0,0x1e,0);
    iVar5 = 0;
    pAVar4 = this + 0x180;
    do {
      if (*(int *)pAVar4 == 0) {
        pvVar3 = (undefined *)0x0;
      }
      else {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar3,0x30,iVar5,this,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pAVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar3,0x34,iVar5,this,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pAVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar3,0x2d,iVar5,this,0);
      iVar5 = iVar5 + 1;
      pAVar4 = pAVar4 + 4;
    } while (iVar5 < 0x12);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf44 */
uint F_00800410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x800410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint in_ecx;
  uint uVar2;
  int iVar3;
  undefined * local_c;
  
  local_c = this + 0x180;
  iVar3 = 0;
  do {
    *(uint *)local_c = 0;
    uVar1 = F_0055e2f0(this,iVar3 + 7);
    if (((uVar1 != 0) && (in_ecx = F_00559c20(uVar1), in_ecx != 0)) &&
       (uVar2 = F_005613a0(in_ecx), uVar2 == 0x11)) {
      *(short *)(in_ecx + 0x9c) = (short)iVar3;
      *(undefined1 *)(in_ecx + 0xa9) = 3;
      *(undefined4 *)(in_ecx + 0xa0) = 0x8000;
      F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x30,iVar3,this,uVar1,0);
      F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x34,iVar3,this,uVar1,0);
      F_00568380(*(undefined * PTR32 *)(in_ecx + 0x70),0x2d,iVar3,this,uVar1,0);
      *(uint *)local_c = in_ecx;
    }
    local_c = local_c + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x12);
  uVar1 = F_0055e2f0(this,0x20);
  *(uint *)(this + 0x94) = uVar1;
  F_005a91d0(this,1,0x21);
  F_005a91d0(this,0,0x1e);
  uVar1 = F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
  return uVar1;
}

/* ref: FUN_00800510 */
uint F_00800510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x800510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint * this_00;
  undefined4 * this_01;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*param_2 != 0) {
    uVar3 = F_00559c20(*param_2);
    if (uVar3 != 0) {
      uVar4 = F_005613a0(uVar3);
      if (uVar4 == 0x11) goto LAB_00800549;
    }
  }
  uVar3 = 0;
LAB_00800549: ;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0x84) + 0x2c))))(uVar3 + 0x84);
  if ((char)uVar3 != '\0') {
    bVar1 = *(byte *)(param_3 + 9);
    if (*(char *)(param_3 + 8) == '\x05') {
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      (*(undefined4 *)(gen_frame + 0x50)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
      bVar1 = *(byte *)((int)this + 0x13a);
      (*(undefined4 *)(gen_frame + 0x3c)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = (uint)bVar1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),4);
      (*(undefined4 *)(gen_frame + 0x4c)) = 0x2e;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),4);
      (*(undefined4 *)(gen_frame + 0x54)) = param_1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x38)));
      this_00 = &(*(uint *)(gen_frame + 0x58));
      iVar5 = 3;
      do {
        this_00 = this_00 + -2;
        uVar3 = F_005a2670(this_00);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar3;
    }
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(undefined4 *)(gen_frame + 0x14)) = 0x2e;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    bVar2 = *(byte *)((int)this + 0x13c);
    (*(uint *)(gen_frame + 0x24)) = bVar1 & 1;
    if (bVar2 == 0) {
      bVar2 = *(byte *)((int)this + 0x13a);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = (uint)bVar2;
    uVar3 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x24,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    this_01 = &(*(undefined4 *)(gen_frame + 0x38));
    iVar5 = 4;
    do {
      this_01 = this_01 + -2;
      uVar3 = F_005a2670(this_01);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: Client::UI2::AddonMonsterNote::vf46 */
byte F_008006b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8006b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  short sVar1;
  int * piVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * pvVar6;
  float fVar7;
  int iVar8;
  undefined1 AVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte * pbVar14;
  undefined * pAVar15;
  undefined * pAVar16;
  byte * pbVar17;
  bool bVar18;
  float10 fVar19;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = this;
  (*(byte * PTR32 *)(gen_frame + 0x48)) = param_2;
  if (((param_1 != 0) && (param_2 != (byte *)0x0)) &&
     ((this[0x20b] != (undefined1)0x0 || (((byte)this[0xf9] & 1) != 0)))) {
    if ((param_2[8] & 0xf) == 0) {
      AVar9 = (undefined1)0x0;
    }
    else {
      AVar9 = SUB41(*(undefined4 *)(param_2 + 0xc),0);
    }
    this[0x20a] = AVar9;
    if ((param_2[0x1d0] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x1d4);
    }
    AVar9 = this[0x13a];
    *(undefined4 *)(this + 0x820) = uVar4;
    uVar5 = F_0055dcb0();
    F_00590ad0((undefined *)(uVar5 + 0xe0),2,(uint)(byte)AVar9,*(undefined4 *)(this + 0x244),
                 this + 0x820);
    uVar3 = F_0056d300(*(undefined * PTR32 *)(this + 0x248),2);
    iVar13 = 0;
    if (uVar3 != 0) {
      do {
        pvVar6 = (undefined *)F_0056d250(*(undefined * PTR32 *)(this + 0x248),2,iVar13);
        iVar11 = (byte)this[0x20a] + 0x65;
        pvVar6 = (undefined *)F_00561490(pvVar6,3);
        F_0059d670(pvVar6,iVar11);
        iVar13 = iVar13 + 1;
      } while ((ushort)iVar13 < uVar3);
    }
    pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x48));
    if ((*(*(byte * PTR32 *)(gen_frame + 0x48)) & 0xf) == 0) {
      (*(uint *)(gen_frame + 0x30)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x30)) = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 4);
    }
    if (((*(uint *)(gen_frame + 0x30)) & 1) != 0) {
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0x100] & 0xf) == 0) {
        AVar9 = (undefined1)0x0;
      }
      else {
        AVar9 = SUB41(*(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x104),0);
      }
      this[0x20c] = AVar9;
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xe8] & 0xf) == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xec);
      }
      *(int *)(this + 0x204) = iVar13;
      piVar2 = *(int * PTR32 *)(this + iVar13 * 0xc + 0x184);
      uVar5 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar5 + 0xc0);
      if ((pbVar17[400] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x194);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x218),uVar4);
      if ((pbVar17[400] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x194);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x220),uVar4);
      if ((pbVar17[400] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x194);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x224),uVar4);
      if ((pbVar17[0x188] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x18c);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x21c),uVar4);
      sVar1 = *(short *)(this + 0x208);
      uVar4 = *(undefined4 *)(this + 0x21c);
      pvVar6 = *(undefined * PTR32 *)(this + 0x218);
      fVar7 = gen_bits2f(F_00577bc0(pvVar6,0,0,REFG(undefined4, 0x108cc50),0));
      (*(float *)(gen_frame + 0x44)) = fVar7;
      uVar3 = F_00559d70(pvVar6);
      F_00559eb0(uVar4,(uint)(ushort)((short)(uint)gen_fl2bits((*(float *)(gen_frame + 0x44))) + uVar3 + sVar1));
      pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x40));
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0x1b8] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x1bc);
      }
      F_00591c00(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x214),uVar4,0);
      if ((((*(byte * PTR32 *)(gen_frame + 0x48))[0x18] & 0xf) == 0) || (*(int *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x1c) == 0)) {
        iVar13 = 0x65;
      }
      else {
        iVar13 = *(int *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x1c) + 0x65;
      }
      pvVar6 = (undefined *)F_0055e2f0(pAVar16,0x14);
      F_0059d670(pvVar6,iVar13);
    }
    pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x48));
    pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x40));
    uVar5 = (*(uint *)(gen_frame + 0x30));
    if (((*(uint *)(gen_frame + 0x30)) & 0x10) != 0) {
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0x170] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x174);
      }
      F_00584110(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x228),uVar4);
      if (((pbVar17[0x180] & 0xf) == 0) || (*(int *)(pbVar17 + 0x184) != 100)) {
        uVar4 = 0x11;
      }
      else {
        uVar4 = 0x65;
      }
      F_0059d640(*(undefined * PTR32 *)(pAVar16 + 0x210),uVar4);
      F_00559fe0(*(undefined4 *)(pAVar16 + 0x230),&(*(int *)(gen_frame + 0x20)),&(*(int *)(gen_frame + 0x8)));
      if ((pbVar17[0x180] & 0xf) == 0) {
        (*(int *)(gen_frame + 0x34)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x34)) = *(int *)(pbVar17 + 0x184);
      }
      (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(int *)(gen_frame + 0x34)) * (float10)*(double *)&REFG(undefined, 0x10928e8));
      F_00568230(*(undefined4 *)(pAVar16 + 0x230),
                   (float)((float10)(*(int *)(gen_frame + 0x34)) * (float10)*(double *)&REFG(undefined, 0x10928e8)));
    }
    if ((uVar5 & 0x100) != 0) {
      uVar5 = 0;
      pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x184;
      do {
        if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xf0] & 0xf) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xf4);
        }
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar16 + 0x28))))
                  (*(int * PTR32 *)pAVar16,(uint)((byte)(uVar12 >> ((byte)uVar5 & 0x1f)) & 1));
        uVar5 = uVar5 + 1;
        pAVar16 = pAVar16 + 0xc;
      } while (uVar5 < 8);
    }
    pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x48));
    pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x40));
    uVar5 = (*(uint *)(gen_frame + 0x30));
    (*(byte *)(gen_frame + 0x3b)) = (byte)((*(uint *)(gen_frame + 0x30)) >> 1) & 1;
    (*(int *)(gen_frame + 0x34)) = -1;
    if (((*(uint *)(gen_frame + 0x30)) >> 1 & 1) != 0) {
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xf8] & 0xf) == 0) {
        (*(int *)(gen_frame + 0x34)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x34)) = *(int *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xfc);
      }
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0x198] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0x19c);
      }
      F_00584110(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x22c),uVar4);
      if ((pbVar17[0x178] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x17c);
      }
      F_00584110(*(undefined * PTR32 *)(pAVar16 + 0x234),uVar4);
      F_0059d670(*(undefined * PTR32 *)(pAVar16 + 0x238),(byte)pAVar16[0x20a] + 0x65);
    }
    (*(byte *)(gen_frame + 0x39)) = (byte)(uVar5 >> 5) & 1;
    if ((uVar5 >> 5 & 1) != 0) {
      if ((pbVar17[0x160] & 0xf) == 0) {
        bVar10 = 0;
      }
      else {
        bVar10 = (byte)*(undefined4 *)(pbVar17 + 0x164);
      }
      pAVar16[0x25d] = (undefined1)(bVar10 & 1);
      if ((pbVar17[0x160] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x164);
      }
      pAVar16[0x269] = (undefined1)((byte)(uVar12 >> 1) & 1);
      if ((pbVar17[0x160] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x164);
      }
      pAVar16[0x275] = (undefined1)((byte)(uVar12 >> 2) & 1);
      if ((pbVar17[0x160] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x164);
      }
      pAVar16[0x281] = (undefined1)((byte)(uVar12 >> 3) & 1);
      if ((pbVar17[0x160] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x164);
      }
      pAVar16[0x28d] = (undefined1)((byte)(uVar12 >> 4) & 1);
    }
    (*(byte *)(gen_frame + 0x3a)) = (byte)(uVar5 >> 6) & 1;
    if ((uVar5 >> 6 & 1) != 0) {
      if ((pbVar17[0x130] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x134);
      }
      *(undefined4 *)(pAVar16 + 600) = uVar4;
      if ((pbVar17[0x168] & 0xf) == 0) {
        bVar10 = 0;
      }
      else {
        bVar10 = (byte)*(undefined4 *)(pbVar17 + 0x16c);
      }
      pAVar16[0x25c] = (undefined1)(bVar10 & 1);
      if ((pbVar17[0x138] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x13c);
      }
      *(undefined4 *)(pAVar16 + 0x264) = uVar4;
      if ((pbVar17[0x168] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x16c);
      }
      pAVar16[0x268] = (undefined1)((byte)(uVar12 >> 1) & 1);
      if ((pbVar17[0x140] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x144);
      }
      *(undefined4 *)(pAVar16 + 0x270) = uVar4;
      if ((pbVar17[0x168] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x16c);
      }
      pAVar16[0x274] = (undefined1)((byte)(uVar12 >> 2) & 1);
      if ((pbVar17[0x148] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x14c);
      }
      *(undefined4 *)(pAVar16 + 0x27c) = uVar4;
      if ((pbVar17[0x168] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x16c);
      }
      pAVar16[0x280] = (undefined1)((byte)(uVar12 >> 3) & 1);
      if ((pbVar17[0x150] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar17 + 0x154);
      }
      *(undefined4 *)(pAVar16 + 0x288) = uVar4;
      if ((pbVar17[0x168] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x16c);
      }
      pAVar16[0x28c] = (undefined1)((byte)(uVar12 >> 4) & 1);
    }
    (*(byte *)(gen_frame + 0x38)) = (byte)(uVar5 >> 7) & 1;
    if ((uVar5 >> 7 & 1) != 0) {
      if ((pbVar17[0x158] & 0xf) == 0) {
        bVar10 = 0;
      }
      else {
        bVar10 = (byte)*(undefined4 *)(pbVar17 + 0x15c);
      }
      pAVar16[0x25e] = (undefined1)(~bVar10 & 1);
      if ((pbVar17[0x158] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x15c);
      }
      pAVar16[0x26a] = (undefined1)(~(byte)(uVar12 >> 1) & 1);
      if ((pbVar17[0x158] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x15c);
      }
      pAVar16[0x276] = (undefined1)(~(byte)(uVar12 >> 2) & 1);
      if ((pbVar17[0x158] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x15c);
      }
      pAVar16[0x282] = (undefined1)(~(byte)(uVar12 >> 3) & 1);
      if ((pbVar17[0x158] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(pbVar17 + 0x15c);
      }
      pAVar16[0x28e] = (undefined1)(~(byte)(uVar12 >> 4) & 1);
    }
    if ((pbVar17[0x1c0] & 0xf) == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(pbVar17 + 0x1c4);
    }
    (*(int *)(gen_frame + 0x1c)) = iVar13;
    if ((uVar5 >> 2 & 1) != 0) {
      F_0059caa0(*(undefined * PTR32 *)(pAVar16 + 0x24c),iVar13);
    }
    if ((uVar5 >> 3 & 1) != 0) {
      uVar4 = 0;
      (*(uint *)(gen_frame + 0x78)) = 0x78;
      (*(undefined2 *)(gen_frame + 0x90)) = 0;
      (*(undefined4 *)(gen_frame + 0x80)) = 0;
      (*(undefined4 *)(gen_frame + 0x84)) = 0;
      (*(undefined4 *)(gen_frame + 0x88)) = 0;
      (*(undefined4 *)(gen_frame + 0x8c)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x74)) = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
      (*(undefined * PTR32 *)(gen_frame + 0x94)) = (undefined *)0x0;
      (*(undefined4 *)(gen_frame + 0x50)) = 1;
      (*(undefined2 *)(gen_frame + 0x68)) = 0;
      (*(undefined4 *)(gen_frame + 0x58)) = 0;
      (*(undefined4 *)(gen_frame + 0x5c)) = 0;
      (*(undefined4 *)(gen_frame + 0x60)) = 0;
      (*(undefined4 *)(gen_frame + 0x64)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4c)) = (*(undefined * PTR32 (*)[2])REFP(0x10a0934));
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined4 *)(gen_frame + 0x70)) = 0;
      uVar5 = F_00404270();
      pvVar6 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)(*(uint *)(gen_frame + 0x78)) * 4 >> 0x20) != 0) |
                                    (uint)((ulonglong)(*(uint *)(gen_frame + 0x78)) * 4),0,uVar5,uVar4);
      (*(undefined * PTR32 *)(gen_frame + 0x94)) = pvVar6;
      F_00c48350(pvVar6,0,(*(uint *)(gen_frame + 0x78)) * 4);
      F_00556c70(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4c)));
      fVar19 = (float10)*(double *)&REFG(undefined, 0x10928e8);
      (*(int *)(gen_frame + 0x3c)) = 0;
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(int *)(gen_frame + 0x24)) = 0;
      pAVar15 = pAVar16 + 0x2ac;
      pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x48)) + 0x1dc;
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 2;
      (*(byte * PTR32 *)(gen_frame + 0x14)) = (*(byte * PTR32 *)(gen_frame + 0x48)) + 0x81c;
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = pAVar15;
      (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar17;
      do {
        if ((pbVar17[-4] & 0xf) == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)pbVar17;
        }
        (*(int *)(gen_frame + 0x20)) = iVar13;
        if (((pbVar17[0x4c] & 0xf) == 0) || (iVar13 < 1)) {
          AVar9 = (undefined1)0x0;
        }
        else {
          AVar9 = (undefined1)0x1;
        }
        pAVar15[-4] = AVar9;
        if (AVar9 != (undefined1)0x0) {
          if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xa98] & 0xf) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xa9c);
          }
          uVar5 = uVar5 >> ((byte)(*(int *)(gen_frame + 0xc)) & 0x1f);
          pAVar15[-3] = (undefined1)((byte)uVar5 & 1);
          if ((pbVar17[0x4c] & 0xf) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(pbVar17 + 0x50);
          }
          (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
          *(undefined4 *)pAVar15 = uVar4;
          if ((uVar5 & 1) != 0) {
            (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
          }
          if ((*(int *)(gen_frame + 0x1c)) == 1) {
            if ((uVar5 & 1) != 0) goto LAB_00800e97;
          }
          else if (((*(int *)(gen_frame + 0x1c)) != 2) || ((uVar5 & 1) == 0)) {
LAB_00800e97: ;
            iVar11 = (*(int *)(gen_frame + 0xc)) << 4;
            (*(int *)(gen_frame + 0x8)) = iVar11;
            if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) != iVar11) {
              *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) = iVar11;
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
              (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
            }
            if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) != 1) {
              *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) = 1;
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
              (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
            }
            (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 2;
            (*(float *)(gen_frame + 0x44)) = 0.0;
            pAVar16 = pAVar15 + 5;
            pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x14));
            do {
              fVar7 = (*(float *)(gen_frame + 0x44));
              pAVar16[-1] = (undefined1)0x1;
              if ((int)gen_fl2bits((*(float *)(gen_frame + 0x44))) < iVar13) {
                iVar8 = (int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + (*(int *)(gen_frame + 0xc)) * 4;
                bVar10 = (byte)iVar8;
                if (iVar8 < 0x14) {
                  if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xaa8] & 0xf) == 0) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xaac);
                  }
                }
                else if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xaa0] & 0xf) == 0) {
                  uVar5 = 0;
                  bVar10 = bVar10 - 0x14;
                }
                else {
                  uVar5 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xaa4);
                  bVar10 = bVar10 - 0x14;
                }
                *pAVar16 = (undefined1)((byte)(uVar5 >> (bVar10 & 0x1f)) & 1);
                if ((pbVar14[-4] & 0xf) == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = *(int *)pbVar14;
                }
                pAVar16[1] = (undefined1)(iVar8 != 100);
                if ((pbVar14[-4] & 0xf) == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = *(int *)pbVar14;
                }
                pAVar16[2] = (undefined1)(iVar8 == 100);
                if ((pbVar14[-0x5a4] & 0xf) == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined4 *)(pbVar14 + -0x5a0);
                }
                *(undefined4 *)(pAVar16 + 3) = uVar4;
                if ((pbVar14[-0x324] & 0xf) == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined4 *)(pbVar14 + -800);
                }
                *(undefined4 *)(pAVar16 + 7) = uVar4;
                if ((pbVar14[-0x464] & 0xf) == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined4 *)(pbVar14 + -0x460);
                }
                *(undefined4 *)(pAVar16 + 0xb) = uVar4;
                if ((pbVar14[-0x194] & 0xf) == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined4 *)(pbVar14 + -400);
                }
                *(undefined4 *)(pAVar16 + 0x13) = uVar4;
                if ((pbVar14[-4] & 0xf) == 0) {
                  (*(float *)(gen_frame + 0x44)) = 0.0;
                }
                else {
                  (*(float *)(gen_frame + 0x44)) = gen_bits2f(*(int *)pbVar14);
                }
                pAVar16[0x1b] = (undefined1)0x1;
                *(float *)(pAVar16 + 0x17) = (float)((float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x44))) * fVar19);
                if ((pbVar14[-4] & 0xf) == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = *(int *)pbVar14;
                }
                pAVar16[0xf] = (undefined1)((-(iVar8 != 0) & 0xb3U) + 0x4c);
                iVar8 = (int)gen_fl2bits(fVar7) << 4;
                if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) != iVar8) {
                  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) = iVar8;
                  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
                  (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
                }
                if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) != (*(uint *)(gen_frame + 0x18))) {
                  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) = (*(uint *)(gen_frame + 0x18));
                  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
                  (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
                }
                (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 2;
              }
              else {
                pAVar16[0x1b] = (undefined1)0x0;
              }
              if ((pbVar17[0x45c] & 0xf) == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined4 *)(pbVar17 + 0x460);
              }
              fVar7 = gen_bits2f((int)gen_fl2bits(fVar7) + 1);
              pbVar14 = pbVar14 + 8;
              pAVar16 = pAVar16 + 0x20;
              *(undefined4 *)(pAVar15 + 0x84) = uVar4;
              (*(float *)(gen_frame + 0x44)) = fVar7;
            } while ((uint)gen_fl2bits(fVar7) < 4);
            if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) != iVar11) {
              *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4) = iVar11;
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
              (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
            }
            if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) != 4) {
              *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x94)) + (*(int *)(gen_frame + 0x3c)) * 4 + 4) = 4;
              (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x90)) + 1)) = 1;
              (*(undefined2 *)(gen_frame + 0x90)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x90)));
            }
            (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 2;
            pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x40));
          }
        }
        (*(byte * PTR32 *)(gen_frame + 0x14)) = (*(byte * PTR32 *)(gen_frame + 0x14)) + 0x20;
        uVar5 = (*(uint *)(gen_frame + 0x18)) + 0x10;
        pbVar17 = pbVar17 + 8;
        pAVar15 = pAVar15 + 0x8c;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar17;
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = pAVar15;
        (*(uint *)(gen_frame + 0x18)) = uVar5;
      } while (uVar5 < 0xa2);
      bVar18 = false;
      if ((*(int *)(gen_frame + 0x1c)) == 0) {
        bVar18 = (*(int *)(gen_frame + 0x2c)) == 0;
      }
      else if ((*(int *)(gen_frame + 0x1c)) == 1) {
        bVar18 = (*(int *)(gen_frame + 0x24)) == 0;
      }
      else if ((*(int *)(gen_frame + 0x1c)) == 2) {
        bVar18 = (*(int *)(gen_frame + 0x2c)) == (*(int *)(gen_frame + 0x24));
      }
      F_0059d640(*(undefined * PTR32 *)(pAVar16 + 0x90),bVar18 + 0x65);
      F_00596e00(*(undefined * PTR32 *)(pAVar16 + 0x248),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x74)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4c)),0,0,2,0,(*(int *)(gen_frame + 0x3c)) / 2,
                   pAVar16 + 0x82c);
      F_00556bf0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4c)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x74)) = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
      if ((*(undefined * PTR32 *)(gen_frame + 0x94)) != (undefined *)0x0) {
        F_00406b30((*(undefined * PTR32 *)(gen_frame + 0x94)));
      }
    }
    if (((((*(byte *)(gen_frame + 0x3b)) != 0) || ((*(byte *)(gen_frame + 0x39)) != 0)) || ((*(byte *)(gen_frame + 0x3a)) != 0)) || ((*(byte *)(gen_frame + 0x38)) != 0)) {
      F_0059ead0(*(undefined * PTR32 *)(pAVar16 + 0x240),(uint)(byte)pAVar16[0x20c],0,0);
      iVar13 = (*(int *)(gen_frame + 0x34));
      if (-1 < (*(int *)(gen_frame + 0x34))) {
        F_005623b0(*(undefined * PTR32 *)(pAVar16 + 0x240),(*(int *)(gen_frame + 0x34)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pAVar16 + 0x240) + 0x74))))(*(int * PTR32 *)(pAVar16 + 0x240),iVar13,0);
      }
      uVar5 = 0;
      if (pAVar16[0x20c] != (undefined1)0x0) {
        pAVar15 = pAVar16 + 0x25e;
        do {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pAVar16 + 0x240) + 0x54))))
                    (*(int * PTR32 *)(pAVar16 + 0x240),uVar5,(uint)(byte)*pAVar15);
          uVar5 = uVar5 + 1;
          pAVar15 = pAVar15 + 0xc;
        } while (uVar5 < (byte)pAVar16[0x20c]);
      }
    }
    if (((*(uint *)(gen_frame + 0x30)) & 0x200) != 0) {
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xab0] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xab4);
      }
      if (((*(byte * PTR32 *)(gen_frame + 0x48))[0xab8] & 0xf) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x48)) + 0xabc);
      }
      if ((uVar5 < 10) && (uVar12 < 4)) {
        iVar13 = uVar5 * 2 + 1;
        if (uVar5 != 0) {
          pAVar15 = pAVar16 + 0x2ec;
          do {
            if (pAVar15[-0x20] != (undefined1)0x0) {
              iVar13 = iVar13 + 1;
            }
            if (*pAVar15 != (undefined1)0x0) {
              iVar13 = iVar13 + 1;
            }
            if (pAVar15[0x20] != (undefined1)0x0) {
              iVar13 = iVar13 + 1;
            }
            if (pAVar15[0x40] != (undefined1)0x0) {
              iVar13 = iVar13 + 1;
            }
            pAVar15 = pAVar15 + 0x8c;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        iVar13 = iVar13 + uVar12;
        F_005623b0(*(undefined * PTR32 *)(pAVar16 + 0x248),iVar13);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pAVar16 + 0x248) + 0x74))))(*(int * PTR32 *)(pAVar16 + 0x248),iVar13,0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pAVar16 + 0x248) + 0x4c))))(*(int * PTR32 *)(pAVar16 + 0x248),iVar13);
        F_0059b390(pAVar16,*(undefined4 *)(pAVar16 + 0x248),1,0);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return 1;
}

/* ref: FUN_008012c0 */
uint F_008012c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8012c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)((int)this + param_1 * 0xc + 0x254);
  F_0059d640(*(undefined * PTR32 *)(param_2 + 0x18),(-(uint)(*(char *)(puVar1 + 2) != '\0') & 0x54) + 0x11);
  uVar4 = *puVar1;
  pvVar2 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 4));
  F_00584110(pvVar2,uVar4);
  uVar4 = puVar1[1];
  pvVar2 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 8));
  F_00584110(pvVar2,uVar4);
  uVar3 = F_0059d640(*(undefined * PTR32 *)(param_2 + 0x10),
                       (-(uint)(*(char *)((int)puVar1 + 9) != '\0') & 0x54) + 0x11);
  return uVar3;
}

/* ref: FUN_00801330 */
uint F_00801330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x801330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)((int)this + param_1 * 8 + 0x294);
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this_00,uVar2);
  return uVar1;
}

/* ref: FUN_00801360 */
uint F_00801360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (*((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 4) * 0x8c;
  F_0055a300((undefined *)*param_2,(uint)*(byte *)(iVar2 + 0x2a8 + (int)this));
  uVar3 = *(undefined4 *)((int)this + iVar2 + 0x2ac);
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  F_00584110(this_00,uVar3);
  uVar1 = F_0055a300((undefined *)param_2[2],(uint)*(byte *)((int)this + iVar2 + 0x2a9));
  return uVar1;
}

/* ref: FUN_008013c0 */
uint F_008013c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8013c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = (((int *)GEN_TOP(**(int * PTR32 *)(param_1 + 4))))[1] >> 4;
  iVar2 = (*((int *)GEN_TOP(**(int * PTR32 *)(param_1 + 4))) >> 4) * 0x20;
  iVar1 = iVar2 + 0x2b0 + iVar5 * 0x8c;
  uVar3 = F_0055a300((undefined *)*param_2,(uint)*(byte *)((int)this + iVar2 + 0x2cc + iVar5 * 0x8c));
  if (*(char *)((int)this + iVar1 + 0x1c) != '\0') {
    if (*(char *)((int)this + iVar1 + 1) == '\0') {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))) + 0x6c)));
      uVar6 = 0x11;
    }
    else {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))) + 0x6c)));
      uVar6 = 0x65;
    }
    F_0059d670(pvVar4,uVar6);
    F_005951c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))),*(undefined4 *)((int)this + iVar1 + 0xc),0
                 ,param_2[2]);
    F_0055a200(param_2[2],(uint)*(byte *)((int)this + iVar1 + 0x10));
    uVar6 = *(undefined4 *)((int)this + iVar1 + 4);
    pvVar4 = (undefined *)F_00559ba0(param_2[3]);
    F_00584110(pvVar4,uVar6);
    uVar6 = *(undefined4 *)((int)this + iVar1 + 8);
    pvVar4 = (undefined *)F_00559ba0(param_2[4]);
    F_00584110(pvVar4,uVar6);
    uVar3 = F_00568230(param_2[5],*(float *)((int)this + iVar1 + 0x18));
  }
  return uVar3;
}

/* ref: FUN_00801490 */
uint F_00801490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  char * pcVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (*((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 4) * 0x8c;
  pcVar1 = (char *)(iVar3 + 0x2a8 + (int)this);
  uVar2 = F_0055a300((undefined *)*param_2,(uint)*(byte *)(iVar3 + 0x2a8 + (int)this));
  if (*pcVar1 != '\0') {
    uVar4 = *(undefined4 *)(pcVar1 + 0x88);
    this_00 = (undefined *)F_00559ba0(param_2[3]);
    uVar2 = F_00584110(this_00,uVar4);
  }
  return uVar2;
}

/* ref: FUN_008014f0 */
uint F_008014f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8014f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4)));
  if ((uVar1 & 2) != 0) {
    return *(uint *)((int)this + 0x83c);
  }
  if ((uVar1 & 1) != 0) {
    return *(uint *)((int)this + 0x838);
  }
  return *(uint *)((int)this + 0x840);
}

/* ref: FUN_00801530 */
uint F_00801530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801530u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  uVar6 = param_2;
  do {
    if ((char)param_3 == '\0') {
      uVar6 = uVar6 + 1;
      if (10 < (int)uVar6) {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        uVar6 = 10;
      }
    }
    piVar1 = (int *)(in_ecx + 0x184 + uVar6 * 0xc);
    iVar2 = *piVar1;
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x70);
    }
    uVar3 = F_0055a2d0(uVar4);
    if ((char)uVar3 != '\0') {
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar2 + 0x70);
      }
      uVar3 = F_0055a350(uVar4);
      if ((char)uVar3 != '\0') {
        return uVar6;
      }
    }
    iVar5 = iVar5 + 1;
    if (10 < iVar5) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_008015b0 */
byte F_008015b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8015b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_1 < 0xb) && (*(uint *)((int)this + 0x204) != param_1)) {
    *(uint *)((int)this + 0x204) = param_1;
    piVar2 = *(int * PTR32 *)((int)this + param_1 * 0xc + 0x184);
    uVar3 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar3 + 0xc0);
    if ((int)param_1 < 8) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(uint *)(gen_frame + 0xc)) = param_1;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      puVar5 = &(*(uint *)(gen_frame + 0x18));
      iVar4 = 2;
      do {
        puVar5 = puVar5 + -2;
        F_005a2670(puVar5);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    else {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(uint *)(gen_frame + 0xc)) = param_1;
      bVar1 = *(byte *)((int)this + param_1 * 0xc + 0x188);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      puVar5 = &(*(uint *)(gen_frame + 0x18));
      iVar4 = 2;
      do {
        puVar5 = puVar5 + -2;
        F_005a2670(puVar5);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    F_0058e350(*(undefined * PTR32 *)((int)this + 0x248),0,1);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00801700 */
uint F_00801700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  do {
    if (*(int *)((int)this + iVar3 * 4) != 0) {
      if (param_2 != 0) {
        *((int *)GEN_TOP((*(int *)((int)this + iVar3 * 4) + 0x110))) = iVar3;
        iVar1 = *(int *)((int)this + iVar3 * 4);
        this_00 = (undefined *)0x0;
        if (iVar1 != 0) {
          this_00 = *(undefined * PTR32 *)(iVar1 + 0x70);
        }
        F_00568380(this_00,0x17,iVar3,param_2,0,0);
      }
      if (param_1 == iVar3) {
        F_0059dde0(*(undefined * PTR32 *)((int)this + iVar3 * 4),1);
        piVar2 = *(int * PTR32 *)((int)this + iVar3 * 4);
        local_8 = ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return local_8;
}

/* ref: FUN_00801770 */
uint F_00801770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = *(uint *)((int)this + iVar2 * 4);
    if ((uVar1 != 0) && (param_1 != 0)) {
      uVar1 = F_005840a0(*(undefined * PTR32 *)(uVar1 + 0x70),0x17,iVar2,param_1,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return uVar1;
}

/* ref: FUN_008017b0 */
uint F_008017b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8017b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca6f4));
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined1 *)((int)this + 0x1bc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1c4);
  iVar2 = 0x27;
  do {
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 0x1d;
  puVar1 = (undefined4 *)((int)this + 0x304);
  do {
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1 = puVar1 + 9;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x73c) =
       (*(undefined * PTR32 (*)[4])REFP(0x10ca6dc));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  return (uint)this;
}

/* ref: FUN_00801880 */
uint F_00801880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 0x14 & 0xff;
  if (uVar1 != 0) {
    return *(uint *)((int)this + uVar1 * 4 + 0x744);
  }
  uVar1 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x198),0,0);
  return uVar1;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf37 */
uint F_008018c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8018c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,0x19,0);
  F_005a92d0(this,0,0x16,1);
  if (((byte)this[0xf9] & 1) != 0) {
    F_00801770(this + 0x180,this);
    F_007a0140(this + 0x180);
    ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf52 */
byte F_00801920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 == 0xf) {
    iVar2 = 0;
    iVar4 = *(int *)(this + 0x19c);
    do {
      iVar4 = iVar4 + 1;
      if (3 < iVar4) {
        iVar4 = 0;
      }
      if ((*(uint *)(this + 0x1a0) & 1 << ((byte)iVar4 & 0x1f)) != 0) goto LAB_008019e1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar4 = 0;
LAB_008019e1: ;
    if (((*(int *)(this + 0x19c) < iVar4) || ((char)param_1[1] != '\x02')) &&
       (bVar1 = F_007a0840(this,iVar4), bVar1 != 0)) {
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    }
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    iVar2 = 0;
    iVar4 = *(int *)(this + 0x19c);
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) {
        iVar4 = 3;
      }
      if ((*(uint *)(this + 0x1a0) & 1 << ((byte)iVar4 & 0x1f)) != 0) goto LAB_0080196b;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar4 = 0;
LAB_0080196b: ;
    if (((iVar4 < *(int *)(this + 0x19c)) || ((char)param_1[1] != '\x02')) &&
       (bVar1 = F_007a0840(this,iVar4), bVar1 != 0)) {
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x14)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00801a30 */
uint F_00801a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x801a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00557670(param_2,0);
  bVar1 = F_007a0840(this,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00801a50 */
uint F_00801a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x801a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)((int)this + param_1 * 0x24 + 0x304);
  pvVar2 = (undefined *)F_00559ba0(*param_2);
  if (pvVar2 != (undefined *)0x0) {
    F_00584110(pvVar2,puVar1[3]);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  if (pvVar2 != (undefined *)0x0) {
    F_00584110(pvVar2,puVar1 + 4);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[2]);
  if (pvVar2 != (undefined *)0x0) {
    F_0055a300(pvVar2,(uint)(*(char *)((int)puVar1 + 10) != '\0'));
    if (*(byte *)((int)puVar1 + 10) != 0) {
      uVar3 = (uint)*(byte *)((int)puVar1 + 10);
      uVar4 = 5;
      this_00 = (undefined *)F_0055dcb0();
      uVar3 = F_0055ba90(this_00,uVar3,uVar4);
      F_00584110(pvVar2,uVar3);
    }
  }
  uVar3 = F_00559c00(param_2[3]);
  if (uVar3 != 0) {
    pvVar2 = (undefined *)F_00559c20(uVar3);
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_005613a0(pvVar2);
      if (uVar3 == 0xf) {
        F_00595190(pvVar2,*puVar1,0,0);
      }
    }
  }
  uVar3 = F_0059d640((undefined *)param_2[4],
                       (-(uint)(*(char *)((int)puVar1 + 0xb) != '\0') & 0x54) + 0x11);
  return uVar3;
}

/* ref: FUN_00801b30 */
uint F_00801b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801b30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = 0;
  if (this != (undefined *)0x0) {
    uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  }
  return uVar1;
}

/* ref: FUN_00801b60 */
uint F_00801b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801b60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = 0;
  if (this != (undefined *)0x0) {
    uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  }
  return uVar1;
}

/* ref: FUN_00801b90 */
uint F_00801b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801b90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  undefined * pvVar3;
  char * pcVar4;
  uint uVar5;
  
  pvVar3 = (undefined *)F_00559ba0(*param_2);
  if (pvVar3 != (undefined *)0x0) {
    F_00584110(pvVar3,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  }
  uVar5 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x10)));
  pcVar2 = *(char * PTR32 *)(uVar5 + 4);
  if (pcVar2 != (char *)0x0) {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0;
    if (pcVar4 != pcVar2 + 1) {
      pvVar3 = (undefined *)F_00559ba0(param_2[1]);
      uVar5 = 0;
      if (pvVar3 != (undefined *)0x0) {
        uVar5 = F_00584110(pvVar3,pcVar2);
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00801bf0 */
uint F_00801bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined2 * puVar4;
  
  uVar3 = 0;
  puVar4 = (undefined2 *)((int)this + 0x60);
  do {
    uVar2 = 0;
    if (puVar4 != (undefined2 *)0x28) {
      *puVar4 = (short)uVar3;
      *(undefined1 *)(puVar4 + 1) = 0;
      *((undefined2 * PTR32 *)GEN_TOP((*(int *)(puVar4 + -4) + 0x110))) = puVar4;
      puVar4[2] = (short)uVar3;
      *(undefined1 *)(puVar4 + 3) = 1;
      *((undefined2 * PTR32 *)GEN_TOP((*(int *)(puVar4 + -2) + 0x110))) = puVar4 + 2;
      pvVar1 = (undefined *)0x0;
      if (*(int *)(puVar4 + -4) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(puVar4 + -4) + 0x70)));
      }
      F_00568380(pvVar1,param_1,param_2,*(undefined4 *)((int)this + 0x1c0),0,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(puVar4 + -2) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(puVar4 + -2) + 0x70)));
      }
      uVar2 = F_00568380(pvVar1,param_1,param_2,*(undefined4 *)((int)this + 0x1c0),0,0);
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 0x1c;
  } while (uVar3 < 6);
  return uVar2;
}

/* ref: FUN_00801c90 */
uint F_00801c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x801c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = (int *)((int)this + 0x5c);
  local_8 = 6;
  do {
    uVar2 = 0;
    if (piVar3 != (int *)0x24) {
      pvVar1 = (undefined *)0x0;
      if (piVar3[-1] != 0) {
        pvVar1 = *(undefined * PTR32 *)(piVar3[-1] + 0x70);
      }
      F_005840a0(pvVar1,param_1,param_2,*(undefined4 *)((int)this + 0x1c0),0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      uVar2 = F_005840a0(pvVar1,param_1,param_2,*(undefined4 *)((int)this + 0x1c0),0);
    }
    piVar3 = piVar3 + 0xe;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return uVar2;
}

/* ref: FUN_00801d00 */
uint F_00801d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 4),param_1);
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70))),param_1);
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar1 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x70))),param_1);
  }
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + 0x70))),param_1);
  }
  return uVar1;
}

/* ref: FUN_00801d50 */
uint F_00801d50(unsigned int gen_a0)
{
  GEN_ENTER(0x801d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  F_007a08e0((undefined *)((int)this + 0x98));
  *(undefined4 *)((int)this + 0x260) = 0;
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
  return (uint)this;
}

/* ref: FUN_00801df0 */
uint F_00801df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x801df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * this_00;
  uint * puVar1;
  uint uVar2;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  puVar1 = (uint *)((int)this + 0x38);
  do {
    this_00 = (int *)puVar1[-8];
    if (this_00 != (int *)0x0) {
      *puVar1 = uVar2;
      this_00[0x44] = (int)puVar1;
      F_00568380((undefined *)this_00[0x1c],param_2,param_3,*(undefined4 *)((int)this + 0x260),0,0);
      if (param_1 == uVar2) {
        F_0059dde0(this_00,1);
        local_8 = ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00);
      }
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 8);
  return local_8;
}

/* ref: FUN_00801e70 */
uint F_00801e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x801e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = (int *)((int)this + 0x18);
  local_8 = 8;
  do {
    iVar1 = *piVar3;
    uVar2 = 0;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x110) = 0;
      uVar2 = F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),param_1,0,*(undefined4 *)((int)this + 0x260),0);
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return uVar2;
}

/* ref: FUN_00801ec0 */
uint F_00801ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x801ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint in_ecx;
  uint uVar1;
  
  if (param_1 != 0) {
    in_ecx = F_00559c20(param_1);
    if (in_ecx != 0) {
      uVar1 = F_005613a0(in_ecx);
      if (uVar1 == 4) {
        return **(uint * PTR32 *)(in_ecx + 0x110);
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00801f00 */
uint F_00801f00(unsigned int gen_a0)
{
  GEN_ENTER(0x801f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca7f4));
  F_00801d50((undefined *)((int)this + 0x180));
  puVar1 = (undefined2 *)((int)this + 0x3e4);
  iVar3 = 0x27;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0x524) = 0;
  *(undefined4 *)((int)this + 0x534) = 0;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined4 *)((int)this + 0x52c) = 0;
  *(undefined4 *)((int)this + 0x530) = 0;
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x540) = 0;
  puVar2 = (undefined4 *)((int)this + 0x544);
  iVar3 = 99;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined2 *)((int)puVar2 + 10) = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2 = puVar2 + 10;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined4 *)((int)this + 0x14e4) = 0;
  *(undefined4 *)((int)this + 0x1508) = 0;
  *(undefined4 *)((int)this + 0x150c) = 0;
  *(undefined4 *)((int)this + 0x1510) = 0;
  *(undefined4 *)((int)this + 0x1514) = 0;
  *(undefined2 *)((int)this + 0x1518) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(undefined4 *)((int)this + 0x14e8) = 0;
  *(undefined4 *)((int)this + 0x14ec) = 0;
  *(undefined4 *)((int)this + 0x14f0) = 0;
  *(undefined4 *)((int)this + 0x14f4) = 0;
  *(undefined4 *)((int)this + 0x14f8) = 0;
  *(undefined4 *)((int)this + 0x14fc) = 0;
  *(undefined4 *)((int)this + 0x1500) = 0;
  *(undefined4 *)((int)this + 0x1504) = 0;
  return (uint)this;
}

/* ref: FUN_00802020 */
uint F_00802020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00557670(param_1,0);
  *(undefined4 *)((int)this + 0x14e4) = 0;
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00802060 */
uint F_00802060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x802060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int * piVar2;
  
  F_00557670(param_2,0);
  if (param_1 == 9) {
    piVar2 = *(int * PTR32 *)((int)this + 0x20c);
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 0x208);
  }
  ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2);
  *(undefined4 *)((int)this + 0x14e4) = 1;
  F_0059b390(this,*(undefined4 *)((int)this + 0x210),1,0);
  if ((*(int *)((int)this + 0x14e4) != 0) && (*(int *)((int)this + 0x14e4) != 2)) {
    bVar1 = F_0056b630(this,0x184,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_008020f0 */
uint F_008020f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8020f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00557670(param_1,0);
  *(undefined4 *)((int)this + 0x14e4) = 2;
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00802130 */
uint F_00802130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  F_00557670(param_1,0);
  *(undefined4 *)((int)this + 0x14e4) = 3;
  F_0059b390(this,*(undefined4 *)((int)this + 0x1fc),1,0);
  if ((*(int *)((int)this + 0x14e4) != 0) && (*(int *)((int)this + 0x14e4) != 2)) {
    bVar1 = F_0056b630(this,0x184,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_008021b0 */
uint F_008021b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8021b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar2;
  
  F_00557670(param_1,0);
  if (*(int *)((int)this + 0x1510) < 1000) {
    uVar2 = *(undefined4 *)((int)this + 0x208);
    *(undefined4 *)((int)this + 0x14e4) = 0;
  }
  else {
    uVar2 = *(undefined4 *)((int)this + 0x20c);
    *(undefined4 *)((int)this + 0x14e4) = 2;
  }
  F_0059b390(this,uVar2,1,0);
  if ((*(int *)((int)this + 0x14e4) != 0) && (*(int *)((int)this + 0x14e4) != 2)) {
    bVar1 = F_0056b630(this,0x184,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0056b630(this,0x18ace,7,0,9,0,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00802240 */
uint F_00802240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  short sVar2;
  short * psVar3;
  uint uVar4;
  int * in_ecx;
  uint * this_00;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar4 = F_00557670(param_1,0);
  if (*(int *)(param_1 + 4) != 0) {
    in_ecx = (int *)F_00559c20(*(int *)(param_1 + 4));
    uVar4 = 0;
    if ((in_ecx != (int *)0x0) && (uVar4 = F_005613a0(in_ecx), uVar4 == 1)) {
      psVar3 = (short *)in_ecx[0x44];
      uVar4 = 0;
      if (psVar3 != (short *)0x0) {
        bVar1 = *(byte *)(psVar3 + 1);
        sVar2 = *psVar3;
        uVar7 = 0;
        uVar6 = 1;
        uVar4 = ((code *)*(gen_code32 *)(*in_ecx + 0x3c))(in_ecx);
        F_0059b340(this,uVar4,uVar6,uVar7);
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
        (*(undefined4 *)(gen_frame + 0x4)) = 5;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
        (*(uint *)(gen_frame + 0xc)) = (uint)bVar1 << 0x10 | (int)sVar2;
        F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
        this_00 = &(*(uint *)(gen_frame + 0x18));
        iVar5 = 2;
        do {
          this_00 = this_00 + -2;
          uVar4 = F_005a2670(this_00);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar4;
}

/* ref: FUN_00802320 */
uint F_00802320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x1fc) != 0) {
    F_0059b390(this,*(int *)((int)this + 0x1fc),1,0);
  }
  F_00557670(param_1,0);
  bVar1 = F_005a9130(this,6);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00802360 */
uint F_00802360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x802360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)((int)this + param_1 * 0x28 + 0x544);
  if ((undefined *)*param_2 != (undefined *)0x0) {
    F_0059d670((undefined *)*param_2,(-(uint)(*(char *)((int)puVar1 + 0xf) != '\0') & 3) + 0x11);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  if (pvVar2 != (undefined *)0x0) {
    F_00584110(pvVar2,puVar1[4]);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[2]);
  if (pvVar2 != (undefined *)0x0) {
    F_00584110(pvVar2,puVar1 + 5);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[3]);
  if (pvVar2 != (undefined *)0x0) {
    F_0055a300(pvVar2,(uint)(*(char *)((int)puVar1 + 0xe) != '\0'));
    if (*(byte *)((int)puVar1 + 0xe) != 0) {
      uVar3 = (uint)*(byte *)((int)puVar1 + 0xe);
      uVar4 = 5;
      this_00 = (undefined *)F_0055dcb0();
      uVar3 = F_0055ba90(this_00,uVar3,uVar4);
      F_00584110(pvVar2,uVar3);
    }
  }
  uVar3 = F_00559c00(param_2[6]);
  if (uVar3 != 0) {
    pvVar2 = (undefined *)F_00559c20(uVar3);
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_005613a0(pvVar2);
      if (uVar3 == 0xf) {
        F_00595190(pvVar2,*puVar1,0,0);
      }
    }
  }
  F_0059d640((undefined *)param_2[4],(uint)*(ushort *)((int)puVar1 + 10));
  uVar3 = F_0059d640((undefined *)param_2[5],(uint)*(ushort *)(puVar1 + 2));
  return uVar3;
}

/* ref: FUN_00802460 */
uint F_00802460(unsigned int gen_a0)
{
  GEN_ENTER(0x802460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5924));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x25c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10cd248));
  if (*(int *)((int)this + 0x24c) != 0) {
    F_00406b30(*(int *)((int)this + 0x24c));
    *(undefined4 *)((int)this + 0x24c) = 0;
  }
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: FUN_008024b0 */
uint F_008024b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8024b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0055e2f0(this,8);
  if (uVar2 == 0) {
    pvVar3 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    pvVar3 = (undefined *)F_00559c20(uVar2);
    uVar2 = 0;
    if ((pvVar3 == (undefined *)0x0) || (uVar2 = F_005613a0(pvVar3), uVar2 != 9)) {
      pvVar3 = (undefined *)0x0;
    }
  }
  *(undefined * PTR32 *)((int)this + 0x180) = pvVar3;
  if (pvVar3 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x7a1810));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_00574320(pvVar3,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),1,0);
    if (*(int *)((int)this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70)));
    }
    F_00568380(pvVar3,0x21,0,this,0,0);
    if (*(int *)((int)this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70)));
    }
    F_00568380(pvVar3,0x24,0,this,0,0);
    bVar1 = F_005624c0(*(undefined * PTR32 *)((int)this + 0x180),1,0,0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00802580 */
byte F_00802580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint * puVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 0) {
    F_0056b630(this,0x18af0,7,0,9,0,0);
    if (*(char *)((int)this + 0xee3) != '\0') {
      *(undefined1 *)((int)this + 0xee3) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 1;
    }
    uVar2 = *(uint *)(param_2 + 8);
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((int)this + 0xed8))) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      uVar1 = *(ushort *)((int)this + uVar2 * 8 + 0x26c);
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(uint *)(gen_frame + 0xc)) = (uint)uVar1 << 0x10 | uVar2;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      puVar4 = &(*(uint *)(gen_frame + 0x18));
      iVar5 = 2;
      do {
        puVar4 = puVar4 + -2;
        F_005a2670(puVar4);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 1;
    }
  }
  else if (param_1 == 1) {
    F_0056b630(this,0x18af0,7,0,9,0,0);
    iVar5 = *(int *)(param_2 + 8);
    if (((-1 < iVar5) && (iVar5 < *(int *)((int)this + 0xedc))) &&
       ((~*(byte *)((int)this + iVar5 * 0xc + 0x2b0) & 1) != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + (iVar5 * 3 + 0xab) * 4)));
      (*(undefined4 *)(gen_frame + 0x4)) = 5;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(uint *)(gen_frame + 0xc)) = uVar3;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
      puVar4 = &(*(uint *)(gen_frame + 0x18));
      iVar5 = 2;
      do {
        puVar4 = puVar4 + -2;
        F_005a2670(puVar4);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00802730 */
byte F_00802730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  short sVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(char *)((int)this + 0xee2) == '\0') {
    *(undefined1 *)((int)this + 0xee2) = 1;
    uVar2 = F_0055dcb0();
    F_005aa060((undefined *)(uVar2 + 0x20c),0xe,0);
    uVar2 = F_0055dcb0();
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 3;
    uVar4 = 5;
    *(undefined1 *)(uVar2 + 0x21b) = 1;
    pvVar6 = this;
    pvVar3 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar3,uVar4,uVar5,pvVar6,uVar7,uVar8);
    uVar8 = 0;
    uVar7 = 0;
    uVar5 = 3;
    uVar4 = 4;
    pvVar6 = this;
    pvVar3 = (undefined *)F_0055dcb0();
    F_0056a3d0(pvVar3,uVar4,uVar5,pvVar6,uVar7,uVar8);
    sVar1 = param_2[1];
    *(float *)((int)this + 0x228) = (float)(int)*param_2;
    *(float *)((int)this + 0x22c) = (float)(int)sVar1;
  }
  return 1;
}

/* ref: FUN_008027d0 */
byte F_008027d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8027d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  
  if (*(char *)(param_1 + 0xee2) != '\0') {
    sVar3 = *(short *)(param_3 + 2);
    sVar4 = *(short *)param_3;
    fVar1 = *(float *)(param_1 + 0x228);
    *(float *)(param_1 + 0x228) = (float)(int)sVar4;
    fVar2 = *(float *)(param_1 + 0x22c);
    *(float *)(param_1 + 0x22c) = (float)(int)sVar3;
    *(float *)(param_1 + 0x218) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x218) -
                (float10)(float)((float10)(int)sVar4 - (float10)fVar1))));
    *(float *)(param_1 + 0x21c) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x21c) -
                (float10)(float)((float10)(int)sVar3 - (float10)fVar2))));
    F_007ad100((undefined *)(param_1 + 0x1d8));
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x234);
    F_007ace70((undefined *)(param_1 + 0x1d8));
  }
  return 1;
}

/* ref: FUN_00802860 */
byte F_00802860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802860u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  short sVar1;
  double dVar2;
  byte bVar3;
  
  if (param_2 != 2) {
    return 1;
  }
  if (((*(short *)(param_3 + 4) != 0) || (*(short *)(param_3 + 6) != 0)) &&
     (bVar3 = F_0056c800(), bVar3 == 0)) {
    sVar1 = *(short *)(param_3 + 6);
    dVar2 = *(double *)&REFG(undefined, 0x1094878);
    if ((float10)((float)GEN_TOF(ABS((float10)(int)sVar1))) +
        (float10)((float)GEN_TOF(ABS((float10)(int)*(short *)(param_3 + 4)))) <
        (float10)*(double *)&REFG(undefined, 0x1088118)) {
      dVar2 = *(double *)&REFG(double, 0x10948e0);
    }
    *(float *)(param_1 + 0x218) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x218) +
                (float10)((float)GEN_TOF(((float10)(int)*(short *)(param_3 + 4) * (float10)dVar2))))));
    *(float *)(param_1 + 0x21c) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x21c) -
                (float10)(float)((float10)(int)sVar1 * (float10)dVar2))));
    F_007ad100((undefined *)(param_1 + 0x1d8));
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x234);
    F_007ace70((undefined *)(param_1 + 0x1d8));
  }
  return 1;
}

/* ref: FUN_00802960 */
uint F_00802960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x802960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*((byte *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) & 0x10) != 0) {
    return *(uint *)((int)this + 0x188);
  }
  return *(uint *)((int)this + 0x18c);
}

/* ref: FUN_00802990 */
uint F_00802990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4)));
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00584110(this_00,*((undefined4 *)GEN_TOP(((int)this + (iVar1 >> 8 & 0xffffU) * 0xc + 0x2a8))));
  }
  return uVar2;
}

/* ref: FUN_008029d0 */
uint F_008029d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8029d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + (*((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 8 & 0xffffU) * 0xc + 0x2a8)));
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00584110(this_00,*puVar1);
  }
  if ((undefined *)param_2[1] != (undefined *)0x0) {
    bVar2 = *(byte *)(puVar1 + 2);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
    if ((bVar2 & 8) == 0) {
      uVar3 = F_0059d670((undefined *)param_2[1],(-(uint)((bVar2 & 4) != 0) & 0x54) + 0x11);
      *(byte *)(puVar1 + 2) = *(byte *)(puVar1 + 2) | 8;
    }
  }
  return uVar3;
}

/* ref: FUN_00802a40 */
uint F_00802a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  int * this_00;
  uint uVar3;
  undefined * this_01;
  uint uVar4;
  int iVar5;
  int * piVar6;
  undefined1 * puVar7;
  
  iVar5 = *((int *)GEN_TOP((*(int *)((int)param_1 + 0x20) + 0xc3c)));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x18)) = iVar5;
  uVar3 = F_00560760(((undefined1 *)(gen_frame + 0xc)));
  (*(undefined1 *)(gen_frame + 0x16)) = 1;
  if (0 < iVar5) {
    (*(int *)(gen_frame + 0x28)) = 0xc44;
    piVar6 = (int *)((int)this + 0xea8);
    (*(uint *)(gen_frame + 0x20)) = iVar5;
    do {
      this_00 = (int *)piVar6[-0x33f];
      if (this_00 != (int *)0x0) {
        *piVar6 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + *(int *)((int)param_1 + 0x20))));
        this_01 = (undefined *)F_00561550(this_00,5);
        if (this_01 != (undefined *)0x0) {
          F_00591c00(this_01,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 4 + *(int *)((int)param_1 + 0x20)))),0);
        }
        F_0055a300((undefined *)this_00[0x1c],1);
        if (*piVar6 < 1) {
          uVar3 = F_0055dcb0();
          (*(uint *)(gen_frame + 0x1c)) = uVar3;
          uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00);
          uVar3 = F_00596b10((undefined *)((*(uint *)(gen_frame + 0x1c)) + 0xe0),uVar3);
        }
        else {
          bVar2 = *(byte *)((int)this + 0x13a);
          (*(int *)(gen_frame + 0x10)) = *piVar6;
          uVar3 = F_0055dcb0();
          (*(uint *)(gen_frame + 0x1c)) = uVar3;
          puVar7 = ((undefined1 *)(gen_frame + 0xc));
          uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00);
          uVar3 = F_00590ad0((undefined *)((*(uint *)(gen_frame + 0x1c)) + 0xe0),4,(uint)bVar2,uVar3,puVar7);
          this = (*(undefined * PTR32 *)(gen_frame + 0x24));
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 8;
      piVar6 = piVar6 + 1;
      iVar1 = (*(uint *)(gen_frame + 0x20)) + -1;
      (*(uint *)(gen_frame + 0x20)) = iVar1;
      iVar5 = (*(int *)(gen_frame + 0x18));
    } while (iVar1 != 0);
  }
  if (iVar5 < 10) {
    param_1 = (int *)((int)this + iVar5 * 4 + 0x1ac);
    uVar3 = 10 - iVar5;
    (*(uint *)(gen_frame + 0x20)) = uVar3;
    do {
      piVar6 = (int *)*param_1;
      if (piVar6 != (int *)0x0) {
        F_0055a300((undefined *)piVar6[0x1c],0);
        uVar3 = F_0055dcb0();
        uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6);
        uVar3 = F_00596b10((undefined *)(uVar3 + 0xe0),uVar4);
      }
      param_1 = param_1 + 1;
      uVar4 = (*(uint *)(gen_frame + 0x20)) - 1;
      (*(uint *)(gen_frame + 0x20)) = uVar4;
    } while (uVar4 != 0);
  }
  return uVar3;
}

/* ref: FUN_00802ba0 */
uint F_00802ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int * piVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if (*(undefined * PTR32 *)((int)this + 0x248) != (undefined *)0x0) {
    F_00592ee0(*(undefined * PTR32 *)((int)this + 0x248),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x438))));
  }
  if (*(undefined * PTR32 *)((int)this + 0x248) != (undefined *)0x0) {
    F_00592fc0(*(undefined * PTR32 *)((int)this + 0x248),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x43c))),
                 *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc98))),
                 (uint)(*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc9c))) != 0));
  }
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xca0))) / (float10)REFG(double, 0x10944b8))));
  fVar12 = (float10)(*(float *)(gen_frame + 0x2c));
  if (fVar12 < (float10)1) {
    (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
    fVar12 = (float10)REFG(float, 0x1087f04);
  }
  bVar11 = GEN_ISNAN((float10)*(float *)((int)this + 0x214)) || GEN_ISNAN(fVar12);
  if (bVar11 == (bVar11 || (float10)*(float *)((int)this + 0x214) == fVar12)) {
    *(float *)((int)this + 0x214) = (*(float *)(gen_frame + 0x2c));
    *(float *)((int)this + 500) = (*(float *)(gen_frame + 0x2c));
    if (*(int *)((int)this + 0x248) != 0) {
      F_0056f070(*(int *)((int)this + 0x248),(float)fVar12);
    }
  }
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xcb0)));
  iVar7 = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) & 0xffffff00;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  uVar5 = uVar1;
  uVar6 = (*(uint *)(gen_frame + 0x34));
  if (0 < (int)uVar1) {
    (*(int *)(gen_frame + 0x24)) = 0x440;
    (*(int *)(gen_frame + 0x14)) = 0xcb4;
    do {
      uVar5 = *(uint *)((int)this + 0x24c);
      if ((uVar5 == 0) || (*(ushort *)((int)this + 0x250) <= (*(uint *)(gen_frame + 0x34)))) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)(iVar7 + uVar5);
      }
      uVar6 = (*(uint *)(gen_frame + 0x34)) + 1;
      (*(int *)(gen_frame + 0x28)) = iVar7 + 0x1c;
      if ((piVar10 != (int *)0x0) && (*piVar10 != 0)) {
        uVar5 = *(uint *)(param_1 + 0x20);
        uVar2 = *(uint *)((*(int *)(gen_frame + 0x14)) + uVar5);
        uVar14 = *(undefined4 *)((*(int *)(gen_frame + 0x14)) + 8 + uVar5);
        uVar16 = *(undefined4 *)((*(int *)(gen_frame + 0x14)) + 0xc + uVar5);
        uVar8 = (int)uVar2 >> 0x10 & 0xffff;
        iVar3 = *(int *)((*(int *)(gen_frame + 0x14)) + 0x10 + uVar5);
        uVar18 = *(undefined4 *)((*(int *)(gen_frame + 0x14)) + 4 + uVar5);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        if (0 < iVar3) {
          (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + *(int *)(param_2 + 0x20))));
          *(short *)(piVar10 + 5) = (short)uVar18;
          (*(undefined2 *)(gen_frame + 0x20)) = (undefined2)uVar14;
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 4;
          piVar10[3] = 0;
          *(undefined2 *)((int)piVar10 + 0x16) = (*(undefined2 *)(gen_frame + 0x20));
          pvVar4 = (undefined *)F_00564700(*piVar10);
          F_0055a300(pvVar4,1);
          F_00568350(pvVar4,(float)(float10)0);
          F_005957c0((undefined *)*piVar10,iVar3);
          uVar17 = 0;
          uVar15 = 0;
          (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)(longlong)TRUNC((float10)uVar8 / (float10)(*(float *)(gen_frame + 0x2c)));
          uVar13 = 0;
          uVar5 = F_0055dcb0();
          F_007aca30(piVar10,uVar5,uVar13,(*(undefined4 *)(gen_frame + 0x4)),uVar15,uVar17);
          uVar9 = (uint)(piVar10[1] != 0);
          uVar5 = F_00564700(*piVar10);
          F_0055a3c0(uVar5,uVar9);
          uVar5 = uVar1;
          if ((int)uVar1 <= (int)uVar6) break;
          uVar5 = *(uint *)((int)this + 0x24c);
          if ((uVar5 == 0) || (*(ushort *)((int)this + 0x250) <= uVar6)) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)((*(int *)(gen_frame + 0x28)) + uVar5);
          }
          (*(int *)(gen_frame + 0x28)) = iVar7 + 0x38;
          uVar6 = (*(uint *)(gen_frame + 0x34)) + 2;
        }
        (*(uint *)(gen_frame + 0x34)) = uVar6;
        uVar6 = (*(uint *)(gen_frame + 0x34));
        if ((piVar10 != (int *)0x0) && (*piVar10 != 0)) {
          F_007ac9a0(piVar10,uVar2 & 0xffff,uVar16,uVar18,uVar14,(float)(float10)1);
          uVar18 = 1;
          uVar16 = 0x800;
          uVar14 = 0;
          uVar6 = F_0055dcb0();
          uVar5 = F_007aca30(piVar10,uVar6,(*(undefined4 *)(gen_frame + 0x1c)),uVar14,uVar16,uVar18);
          uVar6 = (*(uint *)(gen_frame + 0x34));
          if (uVar8 == 0x1000) {
            uVar5 = F_00564700(*piVar10);
            *(uint *)((int)this + 0x1dc) = uVar5;
            (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),1);
          }
        }
      }
      (*(uint *)(gen_frame + 0x34)) = uVar6;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0x14;
      iVar7 = (*(int *)(gen_frame + 0x28));
      uVar6 = (*(uint *)(gen_frame + 0x34));
    } while ((int)(*(uint *)(gen_frame + 0x34)) < (int)uVar1);
  }
  (*(uint *)(gen_frame + 0x34)) = uVar6;
  if (*(undefined * PTR32 *)((int)this + 0x1dc) != (undefined *)0x0) {
    uVar5 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1dc),(*(uint *)(gen_frame + 0xc)));
  }
  if (*(undefined * PTR32 *)((int)this + 0x1e0) != (undefined *)0x0) {
    uVar5 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1e0),(*(uint *)(gen_frame + 0xc)));
  }
  if ((int)(*(uint *)(gen_frame + 0x34)) < 0x51) {
    iVar7 = (*(uint *)(gen_frame + 0x34)) * 0x1c;
    uVar6 = (*(uint *)(gen_frame + 0x34));
    do {
      uVar5 = *(uint *)((int)this + 0x24c);
      if ((uVar5 != 0) && (uVar6 < *(ushort *)((int)this + 0x250))) {
        piVar10 = (int *)(uVar5 + iVar7);
        uVar5 = 0;
        if (piVar10 != (int *)0x0) {
          iVar3 = *piVar10;
          uVar5 = 0;
          if (iVar3 != 0) {
            uVar14 = 0;
            pvVar4 = (undefined *)F_00564700(iVar3);
            uVar5 = F_0055a300(pvVar4,uVar14);
          }
        }
      }
      iVar7 = iVar7 + 0x1c;
      uVar6 = uVar6 + 1;
    } while (iVar7 < 0x8dc);
  }
  return uVar5;
}

/* ref: FUN_00802f10 */
byte F_00802f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x802f10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(iVar1 + 0xca8);
  iVar3 = *(int *)(iVar1 + 0xcac);
  if (*(int *)(iVar1 + 0xca4) == 2) {
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1088118);
    *(float *)(param_1 + 0x230) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x214) * (float10)(float)((float10)iVar2 / fVar5))));
    *(float *)(param_1 + 0x234) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x214) * (float10)(float)((float10)iVar3 / fVar5))));
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x234);
    *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x234);
    bVar4 = F_007ad100((undefined *)(param_1 + 0x1d8));
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x234);
    return bVar4;
  }
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x230);
  *(float *)(param_1 + 0x218) = (float)iVar2;
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x234);
  *(float *)(param_1 + 0x21c) = (float)iVar3;
  bVar4 = F_007ad100((undefined *)(param_1 + 0x1d8));
  return bVar4;
}

/* ref: FUN_00803000 */
unsigned int F_00803000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803000u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  if (*(int *)(in_ecx + 0x1dc) != 0) {
    uVar3 = F_0055a2d0(*(int *)(in_ecx + 0x1dc));
    if ((char)uVar3 != '\0') {
      iVar2 = *(int *)(param_2 + 0x20);
      iVar1 = *(int *)(iVar2 + 0x1314);
      fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
      *(float *)(in_ecx + 0x230) =
           ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x214) *
                  (float10)((float)GEN_TOF(((float10)*(int *)(iVar2 + 0x1310) / fVar4))))));
      *(float *)(in_ecx + 0x234) =
           ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x214) * (float10)(float)((float10)iVar1 / fVar4))));
      iVar1 = *(int *)(iVar2 + 0x130c);
      *(float *)(in_ecx + 0x1fc) = (float)*(int *)(iVar2 + 0x1308);
      *(float *)(in_ecx + 0x200) = (float)iVar1;
      *(undefined4 *)(in_ecx + 0x1e4) = *(undefined4 *)(in_ecx + 0x230);
      *(undefined4 *)(in_ecx + 0x1e8) = *(undefined4 *)(in_ecx + 0x234);
    }
  }
  return 0;
}

/* ref: FUN_008030c0 */
double F_008030c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8030c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  float10 fVar4;
  
  ((undefined4 *)(gen_frame + 0x20))[0] = 0;
  ((undefined4 *)(gen_frame + 0x20))[1] = 0;
  ((undefined4 *)(gen_frame + 0x20))[2] = 0;
  ((undefined4 *)(gen_frame + 0x20))[3] = 0;
  ((undefined4 *)(gen_frame + 0x20))[4] = 0;
  ((undefined4 *)(gen_frame + 0x20))[5] = 0;
  ((undefined4 *)(gen_frame + 0x20))[6] = 0;
  ((undefined4 *)(gen_frame + 0x20))[0] = 2;
  ((undefined4 *)(gen_frame + 0x20))[1] = 3;
  ((undefined4 *)(gen_frame + 0x20))[2] = 4;
  ((undefined4 *)(gen_frame + 0x20))[3] = 5;
  ((undefined4 *)(gen_frame + 0x20))[4] = 6;
  puVar2 = ((undefined4 *)(gen_frame + 0x20));
  puVar3 = ((undefined4 *)(gen_frame + 0x4));
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*(undefined * PTR32 *)((int)this + 0x248) != (undefined *)0x0) {
    F_005aefb0(*(undefined * PTR32 *)((int)this + 0x248),0,((undefined4 *)(gen_frame + 0x4)),0x51);
  }
  *(undefined2 *)((int)this + 0x210) = 0x51;
  fVar4 = F_007acd20((int)this + 0x1d8,0,0x51,0);
  return (double)fVar4;
}

/* ref: Client::UI2::AddonFishGuide::vf2 */
uint F_00803150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x803150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0x11) {
    if (param_2 < 1000) {
      return param_2;
    }
    bVar1 = F_007a1e40(this,param_2 - 1000);
    uVar2 = CONCAT31(extraout_var_01,bVar1);
  }
  else {
    if (uVar2 != 0x17) {
      return uVar2;
    }
    if (param_2 < 2000) {
      if (param_2 < 1000) {
        F_005a9130(this,param_2);
        uVar2 = F_00557670(param_3,0);
        return uVar2;
      }
      bVar1 = F_007a1ed0(this,param_2 - 1000);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
    }
    else {
      bVar1 = F_007a1d50(this,param_2 - 2000);
      uVar2 = CONCAT31(extraout_var,bVar1);
    }
  }
  if ((char)uVar2 != '\0') {
    uVar2 = F_00557670(param_3,0);
  }
  return uVar2;
}

/* ref: FUN_008031d0 */
uint F_008031d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8031d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * local_8;
  
  puVar1 = (undefined4 *)((int)this + 0x188);
  iVar2 = 0;
  local_8 = puVar1;
  do {
    this_00 = (int *)*local_8;
    if (this_00 != (int *)0x0) {
      puVar1 = (undefined4 *)F_0055a350(this_00[0x1c]);
      if ((char)puVar1 == '\0') {
        ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,1);
        puVar1 = (undefined4 *)F_00568380((undefined *)this_00[0x1c],0x17,iVar2 + 2000,this,0,0);
        if (iVar2 == *(int *)((int)this + 0x304)) {
          puVar1 = (undefined4 *)F_0059dde0(this_00,1);
        }
      }
    }
    local_8 = local_8 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return (uint)puVar1;
}

/* ref: FUN_00803240 */
uint F_00803240(unsigned int gen_a0)
{
  GEN_ENTER(0x803240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_c;
  int * local_8;
  
  piVar2 = (int *)((int)this + 0x1a8);
  iVar3 = 1000;
  local_c = 0x19;
  local_8 = piVar2;
  do {
    piVar1 = (int *)*local_8;
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)F_0055a350(piVar1[0x1c]);
      if ((char)piVar2 == '\0') {
        ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
        uVar8 = 0;
        uVar7 = 0;
        uVar4 = 0x11;
        iVar5 = iVar3;
        pvVar6 = this;
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
        F_00568380(this_00,uVar4,iVar5,pvVar6,uVar7,uVar8);
        piVar2 = (int *)F_00568380((undefined *)piVar1[0x1c],0x17,iVar3,this,0,0);
      }
    }
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return (uint)piVar2;
}

/* ref: FUN_008032c0 */
unsigned int F_008032c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8032c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  
  *(undefined4 *)((int)this + 0x304) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4)));
  if (*(char *)((int)this + 0x308) == '\0') {
    *(undefined1 *)((int)this + 0x308) = 1;
    F_008031d0(this);
  }
  if (*(char *)((int)this + 0x309) == '\0') {
    *(undefined1 *)((int)this + 0x309) = 1;
    F_00803240(this);
  }
  (*(int *)(gen_frame + 0x1c)) = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8)));
  F_00560760(((undefined1 *)(gen_frame + 0x8)));
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0xc;
  piVar4 = (int *)((int)this + 0x230);
  (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)((int)this + 0x1a8);
  do {
    piVar1 = (int *)*(*(int * PTR32 *)(gen_frame + 0x24));
    *piVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + *(int *)(param_1 + 0x20))));
    piVar4[1] = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 8 + *(int *)(param_1 + 0x20))));
    if (piVar1 != (int *)0x0) {
      if ((*(int *)(gen_frame + 0x1c)) == (*(int *)(gen_frame + 0x28))) {
        uVar6 = 0;
        uVar5 = 1;
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
        F_0059b340(this,uVar2,uVar5,uVar6);
      }
      if (*piVar4 < 1) {
        uVar2 = F_0055dcb0();
        (*(uint *)(gen_frame + 0x14)) = uVar2;
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
        F_00596b10((undefined *)((*(uint *)(gen_frame + 0x14)) + 0xe0),uVar2);
      }
      else {
        (*(int *)(gen_frame + 0xc)) = *piVar4;
        (*(uint *)(gen_frame + 0x18)) = (uint)*(byte *)((int)this + 0x13a);
        uVar2 = F_0055dcb0();
        puVar7 = ((undefined1 *)(gen_frame + 0x8));
        (*(uint *)(gen_frame + 0x14)) = uVar2;
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
        F_00590ad0((undefined *)((*(uint *)(gen_frame + 0x14)) + 0xe0),4,(*(uint *)(gen_frame + 0x18)),uVar2,puVar7);
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
    iVar3 = (*(int *)(gen_frame + 0x28)) + 1;
    piVar4 = piVar4 + 2;
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 0xc;
    (*(int *)(gen_frame + 0x28)) = iVar3;
  } while (iVar3 < 0x19);
  return 0;
}

/* ref: FUN_00803400 */
uint F_00803400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x803400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pvVar3 = (undefined *)(param_1 * 9);
  puVar1 = (undefined4 *)((int)this + param_1 * 0x24 + 0x184);
  if (*(int *)((int)this + param_1 * 0x24 + 0x194) != 0) {
    pvVar3 = (undefined *)F_00559ba0(*param_2);
    if (pvVar3 != (undefined *)0x0) {
      F_00584110(pvVar3,*puVar1);
    }
    pvVar3 = (undefined *)F_00559ba0(param_2[1]);
    if (pvVar3 != (undefined *)0x0) {
      F_00584110(pvVar3,puVar1[1]);
    }
    if (*(char *)((int)puVar1 + 0x1f) == '\0') {
      pvVar3 = (undefined *)F_00559c00(param_2[2]);
      if ((pvVar3 != (undefined *)0x0) && (0 < (int)puVar1[5])) {
        pvVar3 = (undefined *)F_005bd980(pvVar3,0xf);
        if (pvVar3 != (undefined *)0x0) {
          F_00595190(pvVar3,puVar1[5],0,0);
        }
      }
      *(undefined1 *)((int)puVar1 + 0x1f) = 1;
    }
    pvVar3 = (undefined *)F_00559ba0(param_2[4]);
    if (pvVar3 != (undefined *)0x0) {
      F_0055a300(pvVar3,(uint)(*(char *)(puVar1 + 7) != '\0'));
      if (*(byte *)(puVar1 + 7) != 0) {
        uVar5 = (uint)*(byte *)(puVar1 + 7);
        uVar6 = 5;
        pvVar4 = (undefined *)F_0055dcb0();
        uVar5 = F_0055ba90(pvVar4,uVar5,uVar6);
        F_00584110(pvVar3,uVar5);
      }
    }
    pvVar3 = (undefined *)F_00559ba0(param_2[3]);
    if (pvVar3 != (undefined *)0x0) {
      F_00584110(pvVar3,puVar1[2]);
    }
    pvVar4 = (undefined *)F_00559ba0(param_2[5]);
    pvVar3 = (undefined *)0x0;
    if (pvVar4 != (undefined *)0x0) {
      pvVar3 = (undefined *)F_00584110(pvVar4,puVar1[3]);
    }
    if (*(char *)(puVar1 + 8) == '\0') {
      pvVar3 = (undefined *)F_00559b90(param_2[6]);
      if ((pvVar3 != (undefined *)0x0) && (0 < (int)puVar1[6])) {
        pvVar3 = (undefined *)F_00591c00(pvVar3,puVar1[6],(uint)*(byte *)((int)this + 0x25c));
      }
      *(undefined1 *)(puVar1 + 8) = 1;
    }
    if (*(char *)((int)puVar1 + 0x21) == '\0') {
      if ((puVar1[4] != 0) && ((undefined *)param_2[7] != (undefined *)0x0)) {
        bVar2 = *(byte *)((int)puVar1 + 0x1d);
        pvVar3 = ((undefined *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)pvVar3) >> 8),bVar2)));
        if (bVar2 < 6) {
          (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = REFP(0x00680067);
          (*(undefined4 *)(gen_frame + 0x10)) = 0x650066;
          (*(undefined4 *)(gen_frame + 0x14)) = 0x6a0069;
          pvVar3 = (undefined *)F_0059d670((undefined *)param_2[7],
                                        (uint)*(ushort *)((int)&(*(undefined1 * PTR32 *)(gen_frame + 0xc)) + (uint)bVar2 * 2));
        }
      }
      *(undefined1 *)((int)puVar1 + 0x21) = 1;
    }
  }
  if (*(char *)((int)puVar1 + 0x1e) == '\0') {
    pvVar3 = (undefined *)0x0;
    if (param_3 != 0) {
      pvVar3 = (undefined *)F_0059d670(*(undefined * PTR32 *)(param_3 + 0x6c),
                                    (-(uint)(puVar1[4] != 0) & 0xffffffac) + 0x65);
    }
    *(undefined1 *)((int)puVar1 + 0x1e) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)pvVar3;
}

/* ref: FUN_008035c0 */
uint F_008035c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8035c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cab04));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) =
       (*(undefined * PTR32 (*)[4])REFP(0x10caaf0));
  F_00580ea0((undefined *)((int)this + 0x18c));
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  puVar1 = (undefined4 *)((int)this + 0x218);
  iVar2 = 0xa0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x720) = 0;
  *(undefined2 *)((int)this + 0x736) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_00560e80((undefined *)((int)this + 0x18c),this);
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinder::vf47 */
unsigned int F_00803670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (((byte)this[0xf9] & 1) != 0) {
    F_007a2690(this,*(undefined4 *)(param_2 + 8));
  }
  return 0;
}

/* ref: FUN_00803690 */
uint F_00803690(unsigned int gen_a0)
{
  GEN_ENTER(0x803690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  undefined4 in_ecx;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x1c4);
  if ((*(byte *)(uVar3 + 0x2c) & 1) != 0) {
    if (*(int *)((int)this + 0x724) != 0) {
      F_00560f40(uVar3,0xa1,(int)this + 0x218);
    }
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) + 0x120)));
    *puVar1 = *puVar1 | 0x400;
    in_ecx = 0;
    if (*(int *)((int)this + 0x1c8) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0x70)));
    }
    uVar3 = F_0055a2d0(in_ecx);
    if ((char)uVar3 == '\0') {
      uVar3 = F_0055dcb0();
      if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4)))) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
      }
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0,0);
    }
    else {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
    }
    uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4)));
    *(uint *)(uVar3 + 0x120) = *(uint *)(uVar3 + 0x120) & 0xfffffbff;
  }
  return uVar3;
}

/* ref: FUN_00803760 */
uint F_00803760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x803760u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  return uVar1;
}

/* ref: FUN_00803790 */
uint F_00803790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x803790u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  ushort uVar2;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  int iVar4;
  
  if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
    (*(undefined2 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x97ff;
    F_0055e430((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),((undefined2 *)(gen_frame + 0x18)),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))));
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x14)) = 0xc8e;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = (short)(*(undefined4 *)&gen_args[1]);
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT22((short)(*(undefined4 *)&gen_args[1]),0x4001);
    (*(undefined2 *)(gen_frame + 0x10)) = ((undefined2 *)(gen_frame + 0x18))[0];
    F_0056b6e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8)));
    F_0055e430((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),((undefined2 *)(gen_frame + 0x18)),iVar4);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar4 + 0x70);
    }
    uVar2 = F_0055a020(uVar3);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = (short)(*(undefined4 *)&gen_args[1]) + uVar2;
    (*(undefined2 *)(gen_frame + 0x10)) = ((undefined2 *)(gen_frame + 0x18))[0];
    (*(undefined4 *)(gen_frame + 0x14)) = 0xc8d;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 2;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT22((short)(*(undefined4 *)&gen_args[1]) + uVar2,0x4002);
    F_0056b6e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xc)));
  }
  iVar4 = 0x18ad3;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x730))) == 5) {
    iVar4 = (-(uint)(*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x736))) != '\0') & 0x25) + 0x18ab1;
  }
  uVar3 = 0;
  in_ecx = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x2a);
  uVar2 = F_0055a020(in_ecx);
  bVar1 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),iVar4,6,0,7,(uint)(uVar2 >> 1),uVar3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_008038b0 */
uint F_008038b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8038b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return (int)*(char *)(*param_1 + 3);
}

/* ref: FUN_008038c0 */
uint F_008038c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8038c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *(uint *)(*param_1 + 8) & 1;
}

/* ref: FUN_008038e0 */
uint F_008038e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8038e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if ((*(char *)(in_ecx + 0x736) != '\0') && ((*(byte *)(*param_2 + 8) & 4) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: Client::UI2::AddonContentsFinder::vf60 */
byte F_00803910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined4 in_ecx;
  uint uVar4;
  int iVar5;
  
  (*(byte *)(gen_frame + 0xb)) = 0;
  if (this[0x736] == (undefined1)0x0) {
    return 0;
  }
  iVar1 = *(int *)(this + 0x720);
  iVar5 = iVar1;
  if (param_1 == 0xf) {
    if ((char)param_2 == '\0') {
      if (iVar1 < 4) goto LAB_00803946;
      iVar5 = 0;
    }
    else if (iVar1 < 4) {
LAB_00803946: ;
      iVar5 = iVar1 + 1;
    }
  }
  else {
    if (param_1 != 0x10) goto LAB_00803966;
    if ((char)param_2 == '\0') {
      if (0 < iVar1) goto LAB_00803961;
      iVar5 = 4;
    }
    else if (0 < iVar1) {
LAB_00803961: ;
      iVar5 = iVar1 + -1;
    }
  }
  (*(byte *)(gen_frame + 0xb)) = 1;
LAB_00803966: ;
  bVar3 = (*(byte *)(gen_frame + 0xb));
  if (iVar5 != iVar1) {
    if (*(int *)(this + iVar5 * 4 + 0x1e8) == 0) {
      in_ecx = 0;
    }
    else {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + iVar5 * 4 + 0x1e8) + 0x70)));
    }
    uVar4 = F_0055a350(in_ecx);
    bVar3 = (*(byte *)(gen_frame + 0xb));
    if ((char)uVar4 != '\0') {
      uVar4 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x0)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      piVar2 = *(int * PTR32 *)(this + iVar5 * 4 + 0x1e8);
      uVar4 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar4 + 0xc0);
      F_007a25c0(this,iVar5);
      bVar3 = (*(byte *)(gen_frame + 0xb));
    }
  }
  return bVar3;
}

/* ref: FUN_008039f0 */
uint F_008039f0(unsigned int gen_a0)
{
  GEN_ENTER(0x8039f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *(int *)*param_1 >> 8 & 0xffff;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf46 */
byte F_00803a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  int iVar4;
  byte * pbVar5;
  undefined * pAVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  undefined4 * puVar10;
  int iVar11;
  undefined4 * puVar12;
  
  ((uint *)(gen_frame + 0x20))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  ((uint *)(gen_frame + 0x20))[3] = 0x66;
  ((uint *)(gen_frame + 0x20))[4] = 0x66;
  ((uint *)(gen_frame + 0x20))[5] = 0x66;
  (*(byte * PTR32 *)(gen_frame + 0x18)) = param_2;
  ((uint *)(gen_frame + 0x20))[0] = 0x67;
  ((uint *)(gen_frame + 0x20))[1] = 0x67;
  ((uint *)(gen_frame + 0x20))[2] = 0x67;
  if ((param_2[0x40] & 0xf) == 0) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x1c)) = *(uint *)(param_2 + 0x44);
  }
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
  }
  if ((uVar1 & 1) != 0) {
    if ((*(uint *)(gen_frame + 0x1c)) == 0) {
      if ((param_2[0x78] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0x7c);
      }
      F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),(uint)((byte)(uVar1 >> 1) & 1));
    }
    pbVar5 = param_2;
    if (((*(uint *)(gen_frame + 0x1c)) & 1) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x14)) = param_2 + 100;
      pAVar6 = this + 0x18c;
      (*(uint *)(gen_frame + 0x10)) = 0;
      do {
        if (((*(byte * PTR32 *)(gen_frame + 0x14))[-0x1c] & 0xf) == 0) {
          (*(int *)(gen_frame + 0xc)) = 0;
        }
        else {
          (*(int *)(gen_frame + 0xc)) = *(int *)((*(byte * PTR32 *)(gen_frame + 0x14)) + -0x18);
        }
        if (((*(byte * PTR32 *)(gen_frame + 0x14))[-4] & 0xf) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(byte * PTR32 *)(gen_frame + 0x14));
        }
        iVar9 = (*(int *)(gen_frame + 0xc));
        iVar11 = iVar4;
        pvVar2 = (undefined *)F_0055dcb0();
        uVar1 = F_005b03e0(pvVar2,iVar9,iVar11);
        F_00584110(*(undefined * PTR32 *)(pAVar6 + -0xc),uVar1);
        if ((*(int *)(gen_frame + 0xc)) == iVar4) {
          uVar3 = *(undefined4 *)((int)((uint *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0x10)) + 0xc);
        }
        else {
          uVar3 = *(undefined4 *)((int)((uint *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0x10)));
        }
        F_0059d670(*(undefined * PTR32 *)(*(int *)pAVar6 + 0x6c),uVar3);
        pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x18));
        (*(byte * PTR32 *)(gen_frame + 0x14)) = (*(byte * PTR32 *)(gen_frame + 0x14)) + 8;
        uVar1 = (*(uint *)(gen_frame + 0x10)) + 4;
        pAVar6 = pAVar6 + 4;
        (*(uint *)(gen_frame + 0x10)) = uVar1;
      } while (uVar1 < 0xc);
      if (((*(byte * PTR32 *)(gen_frame + 0x18))[0x78] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)((*(byte * PTR32 *)(gen_frame + 0x18)) + 0x7c);
      }
      F_0055a300(*(undefined * PTR32 *)(this + 0x198),(uint)((byte)uVar1 & 1));
      F_0055a300(*(undefined * PTR32 *)(this + 0x19c),(uint)((byte)(uVar1 >> 1) & 1));
      bVar8 = (*(uint *)(pbVar5 + 0x80) & 0xf) == 8;
      (*(undefined1 *)((char *)&(*(byte * PTR32 *)(gen_frame + 0x14)) + 0)) = bVar8;
      (*(byte * PTR32 *)(gen_frame + 0x14)) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)(gen_frame + 0x14)), 1, 3),bVar8)));
      if (bVar8) {
        F_00584110(*(undefined * PTR32 *)(this + 0x1a0),*(undefined4 *)(pbVar5 + 0x84));
      }
      F_0055a300(*(undefined * PTR32 *)(this + 0x1a0),(*(byte * PTR32 *)(gen_frame + 0x14)));
      pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x18));
    }
    if (((*(uint *)(gen_frame + 0x1c)) & 2) != 0) {
      if ((pbVar5[0x88] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(pbVar5 + 0x8c);
      }
      F_0055a300(*(undefined * PTR32 *)(this + 0x1a4),(uint)((byte)uVar1 & 1));
      F_0055a300(*(undefined * PTR32 *)(this + 0x1a8),(uint)((byte)(uVar1 >> 1) & 1));
      pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x18));
      bVar8 = (*(uint *)((*(byte * PTR32 *)(gen_frame + 0x18)) + 0x90) & 0xf) == 8;
      (*(undefined1 *)((char *)&(*(byte * PTR32 *)(gen_frame + 0x18)) + 0)) = bVar8;
      (*(byte * PTR32 *)(gen_frame + 0x18)) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)(gen_frame + 0x18)), 1, 3),bVar8)));
      if (bVar8) {
        F_00584110(*(undefined * PTR32 *)(this + 0x1ac),*(undefined4 *)(pbVar5 + 0x94));
      }
      F_0055a300(*(undefined * PTR32 *)(this + 0x1ac),(*(byte * PTR32 *)(gen_frame + 0x18)));
      if (((byte)*(undefined4 *)(pbVar5 + 0x98) & 0xf) == 8) {
        F_00584110(*(undefined * PTR32 *)(this + 0x1b0),*(undefined4 *)(pbVar5 + 0x9c));
      }
    }
  }
  uVar3 = 0x68;
  uVar7 = 0x26;
  if (((byte)(*(uint *)(gen_frame + 0x1c)) & 3) == 3) {
    uVar3 = 0x67;
    uVar7 = 0x25;
  }
  else if (((*(uint *)(gen_frame + 0x1c)) & 1) == 0) {
    if (((*(uint *)(gen_frame + 0x1c)) & 2) != 0) {
      uVar3 = 0x66;
      uVar7 = 0x24;
    }
  }
  else {
    uVar3 = 0x65;
    uVar7 = 0x23;
  }
  F_0059d6a0(this,uVar3,1,0);
  puVar12 = &(*(undefined4 *)(gen_frame + 0x4));
  puVar10 = &(*(undefined4 *)(gen_frame + 0x8));
  pvVar2 = (undefined *)F_0055e2f0(this,uVar7);
  F_0055a000(pvVar2,puVar10,puVar12);
  ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)));
  F_00c47745(((uint *)(gen_frame + 0x20))[6] ^ (uint)(uint)(gen_frame + 0x3c));
  return 1;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf47 */
uint F_00803cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if (((uVar2 != 5) && (uVar2 != 4)) || (((byte)this[0xf8] & 0x40) != 0)) {
    iVar1 = *(int *)(param_1 + 0xd8);
    uVar2 = *(uint *)(param_2 + 200);
    if (((iVar1 != 0) && (uVar2 != 0)) &&
       ((*(undefined * PTR32 *)(this + 0x1b8) != (undefined *)0x0 && (*(int *)(this + 0x1bc) != 0)))) {
      F_00584110(*(undefined * PTR32 *)(this + 0x1b8),**(undefined4 * PTR32 *)(uVar2 + 0x20));
      uVar2 = F_0058f730(((undefined *)GEN_TOP((*(int *)(this + 0x1bc) + 4))),**(undefined4 * PTR32 *)(iVar1 + 0x20),0,6)
      ;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf47 */
unsigned int F_00803d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((((byte)this[0xf9] & 1) != 0) &&
     (((uVar4 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar4 != 5 && (uVar4 != 4)) ||
      (((byte)this[0xf8] & 0x40) != 0)))) {
    iVar1 = *(int *)(param_2 + 200);
    if (((*(int *)(param_2 + 8) != 0) && (*(int *)(param_1 + 0xd8) != 0)) && (iVar1 != 0)) {
      uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 8) + 0x20))) + 0xf4)));
      uVar3 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0xd8) + 0x20)));
      F_0058f730(((undefined *)GEN_TOP((*(int *)(this + 0x188) + 4))),uVar3,0,6);
      F_0058f730(((undefined *)GEN_TOP((*(int *)(this + 0x18c) + 4))),uVar3,0,6);
      F_00584110(*(undefined * PTR32 *)(this + 0x184),uVar2);
      F_00584110(*(undefined * PTR32 *)(this + 0x180),**(undefined4 * PTR32 *)(iVar1 + 0x20));
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf46 */
byte F_00803e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pAVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(this + 0x198) != 0) {
    piVar1 = (int *)(param_2 + 100);
    pAVar4 = this + 0x18c;
    do {
      if ((*(byte *)(piVar1 + -7) & 0xf) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = piVar1[-6];
      }
      if ((*(byte *)(piVar1 + -1) & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      iVar7 = iVar6;
      iVar8 = iVar5;
      pvVar2 = (undefined *)F_0055dcb0();
      uVar3 = F_005b03e0(pvVar2,iVar7,iVar8);
      F_00584110(*(undefined * PTR32 *)(pAVar4 + -0xc),uVar3);
      if (iVar6 == iVar5) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x6c);
        uVar9 = 0x65;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x6c);
        uVar9 = 0x66;
      }
      F_0059d670(pvVar2,uVar9);
      piVar1 = piVar1 + 2;
      local_8 = local_8 + 1;
      pAVar4 = pAVar4 + 4;
    } while (local_8 < *(uint *)(this + 0x198));
  }
  return 1;
}

/* ref: Client::UI2::AddonContentsFinderSupply::vf46 */
byte F_00803ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x803ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  uint uVar2;
  uint * puVar3;
  undefined * pAVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((uint *)(gen_frame + 0x10))[0] = 0x65;
  ((uint *)(gen_frame + 0x10))[1] = 0x66;
  ((uint *)(gen_frame + 0x10))[2] = 0x67;
  ((uint *)(gen_frame + 0x10))[3] = 0x67;
  ((uint *)(gen_frame + 0x10))[4] = 0x66;
  ((uint *)(gen_frame + 0x10))[5] = 0x65;
  if (param_1 == 8) {
    uVar6 = 0;
    (*(uint *)(gen_frame + 0xc)) = 0;
    pAVar4 = this + 0x188;
    puVar3 = (uint *)(param_2 + 0x24);
    do {
      if ((puVar3[-7] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = puVar3[-6];
      }
      if (((puVar3[-1] & 0xf) != 0) && (uVar7 = *puVar3, uVar2 < uVar7)) {
        pvVar1 = (undefined *)F_0055dcb0();
        uVar2 = F_005b03e0(pvVar1,uVar2,uVar7);
        pvVar1 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar4,2);
        F_00584110(pvVar1,uVar2);
        F_0059d670(*(undefined * PTR32 *)(*(int *)pAVar4 + 0x6c),((uint *)(gen_frame + 0x10))[(int)(uVar6)]);
        pvVar1 = (undefined *)0x0;
        if (*(int *)pAVar4 != 0) {
          pvVar1 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
        }
        F_0055a300(pvVar1,1);
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        pAVar4 = pAVar4 + 4;
      }
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar6 < 3);
    if ((*(uint *)(gen_frame + 0xc)) < 3) {
      pAVar4 = this + (*(uint *)(gen_frame + 0xc)) * 4 + 0x188;
      iVar5 = 3 - (*(uint *)(gen_frame + 0xc));
      do {
        if (*(int *)pAVar4 == 0) {
          pvVar1 = (undefined *)0x0;
        }
        else {
          pvVar1 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
        }
        F_0055a300(pvVar1,0);
        pAVar4 = pAVar4 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ((*(uint *)(gen_frame + 0xc)) != 0) {
      uVar6 = ((uint *)(gen_frame + 0x10))[(int)((*(uint *)(gen_frame + 0xc)) + 2)];
      pvVar1 = (undefined *)F_0055e2f0(this,4);
      F_0059d670(pvVar1,uVar6);
    }
    if ((*(byte *)(param_2 + 0x38) & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x3c);
    }
    F_0055a300(*(undefined * PTR32 *)(this + 0x180),(uint)(iVar5 != 0));
    F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: Client::UI2::AddonMaterialize::vf37 */
uint F_00804030(unsigned int gen_a0)
{
  GEN_ENTER(0x804030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x180) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,0,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,1,this,0);
  }
  uVar1 = F_0055dcb0();
  F_00594d90((undefined *)(uVar1 + 0xe0),0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_008040d0 */
uint F_008040d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8040d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + *(int *)((int)this + 0x6a38));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf37 */
uint F_00804110(unsigned int gen_a0)
{
  GEN_ENTER(0x804110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x18c) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,0,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,0xffffffff,this,0);
  }
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf46 */
byte F_00804180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x804180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x188),uVar2);
    if (((param_2[8] & 0xf) != 0) && (iVar5 = *(int *)(param_2 + 0xc), iVar5 != 0)) {
      if ((param_2[0x28] & 0xf) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_2 + 0x2c);
      }
      F_00561860(*(undefined * PTR32 *)(this + 0x184),(uint)(iVar3 != 0));
      if ((param_2[0x30] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x34);
      }
      F_005a03c0(*(undefined * PTR32 *)(this + 0x184),uVar2);
      F_00595190(*(undefined * PTR32 *)(this + 0x184),iVar5,0,0);
    }
    if ((param_2[0x20] & 0xf) == 0) {
      param_2 = (byte *)0x0;
    }
    else {
      param_2 = *(byte * PTR32 *)(param_2 + 0x24);
    }
    uVar6 = (uint)param_2 & 0xf;
    iVar5 = uVar6 + 0x65;
    this_00 = (undefined *)F_0055e2f0(this,3);
    F_0059d670(this_00,iVar5);
    iVar5 = 0;
    if (uVar6 != 0) {
      bVar1 = 8;
      do {
        uVar4 = F_0055e2f0(this,iVar5 + 7);
        uVar4 = F_00559c20(uVar4);
        iVar3 = 0x6a;
        if ((int)((uint)((int)(uintptr_t)param_2) >> 4 & 0xf) <= iVar5) {
          iVar3 = 0x70;
        }
        F_0059d670(*(undefined * PTR32 *)(uVar4 + 0x6c),iVar3 - ((uint)((int)(uintptr_t)param_2) >> (bVar1 & 0x1f) & 0xf));
        bVar1 = bVar1 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar6);
    }
    return 1;
  }
  return 1;
}

/* ref: Client::UI2::AddonMateriaAttach::vf44 */
uint F_008042b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8042b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int * in_ecx;
  byte * pbVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined * pAVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar14 = 0;
  uVar13 = 0;
  uVar11 = 2;
  uVar10 = 0x21;
  pAVar12 = this;
  pvVar2 = (undefined *)F_0055e2f0(this,4);
  F_00568380(pvVar2,uVar10,uVar11,pAVar12,uVar13,uVar14);
  pvVar2 = (undefined *)F_0055e2f0(this,10);
  F_00568380(pvVar2,0x21,0,this,0,0);
  F_00568380(pvVar2,0x1f,0,this,0,0);
  F_00568380(pvVar2,0x20,0,this,0,0);
  pvVar2 = (undefined *)F_0055e2f0(this,0x13);
  F_00568380(pvVar2,0x21,1,this,0,0);
  F_00568380(pvVar2,0x25,1,this,0,0);
  F_00568380(pvVar2,0x1f,1,this,0,0);
  F_00568380(pvVar2,0x20,1,this,0,0);
  if ((*param_2 & 0xf) == 0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)param_2[1];
  }
  pbVar7 = &REFG(undefined1, 0x10be8fb);
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00804390: ;
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00804395;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00804390;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00804395: ;
  if (iVar4 != 0) {
    if ((param_2[2] & 0xf) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_2[3];
    }
    if ((*param_2 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_2[1];
    }
    uVar6 = F_0055e320(this);
    F_0058a320(uVar6,uVar5,uVar8);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  uVar8 = F_0055e2f0(this,10);
  if (((uVar8 == 0) || (in_ecx = (int *)F_00559c20(uVar8), in_ecx == (int *)0x0)) ||
     (uVar8 = F_005613a0(in_ecx), uVar8 != 9)) {
    in_ecx = (int *)0x0;
  }
  uVar8 = ((code *)*(gen_code32 *)(*in_ecx + 0x4c))(in_ecx,(uint)*(ushort *)(in_ecx + 0x30));
  return uVar8;
}

/* ref: FUN_00804670 */
uint F_00804670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x804670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + *(int *)((int)this + 0x180));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_008046b0 */
uint F_008046b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8046b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int in_ecx;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  in_ecx = param_1 * 0x68 + 400 + (int)this;
  uVar8 = *(undefined4 *)(in_ecx + 0x54);
  uVar10 = 0;
  pvVar2 = (undefined *)F_00559b90(*param_2);
  F_00591c00(pvVar2,uVar8,uVar10);
  uVar3 = F_0042a990(in_ecx);
  pvVar2 = (undefined *)F_00559ba0(param_2[6]);
  F_00584110(pvVar2,uVar3);
  iVar6 = (int)*(char *)(in_ecx + 100);
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar8 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  F_0057eb30(pvVar2,iVar6,uVar8,uVar10,uVar9,uVar11);
  uVar3 = *(uint *)(in_ecx + 0x58);
  uVar7 = uVar3 & 0xf;
  uVar4 = F_0059d670((undefined *)param_2[2],uVar7 + 0x65);
  iVar6 = 0;
  if (uVar7 != 0) {
    bVar1 = 8;
    do {
      uVar4 = F_00561490(param_3,iVar6 + 6);
      uVar4 = F_00559c20(uVar4);
      iVar5 = 0x6a;
      if ((int)(uVar3 >> 4 & 0xf) <= iVar6) {
        iVar5 = 0x70;
      }
      uVar4 = F_0059d670(*(undefined * PTR32 *)(uVar4 + 0x6c),
                           iVar5 - (*(uint *)(in_ecx + 0x58) >> (bVar1 & 0x1f) & 0xf));
      bVar1 = bVar1 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar7);
  }
  return uVar4;
}

/* ref: Client::UI2::AddonMateriaBroker::vf2 */
uint F_00804780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x804780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0x1f) {
    uVar1 = F_0055dcb0();
    F_00560760(&(*(undefined4 *)(gen_frame + 0x10)));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 2)) = 2;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + param_4[2] * 0xbc + 0x240);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x18)) + 3)) = this[param_4[2] * 0xbc + 0x244];
    (*(int *)(gen_frame + 0x18)) = CONCAT13(this[param_4[2] * 0xbc + 0x244],CONCAT12(2,(undefined2)(*(int *)(gen_frame + 0x18))));
    uVar3 = 0;
    if (*param_4 != 0) {
      uVar3 = *(undefined4 *)(*param_4 + 0x70);
    }
    uVar1 = F_00588780((undefined *)(uVar1 + 0xe0),4,(uint)(byte)this[0x13a],uVar3,&(*(undefined4 *)(gen_frame + 0x10)),0,0);
  }
  else {
    if (uVar1 == 0x20) {
      uVar1 = F_0055dcb0();
      uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0),0);
      return uVar1;
    }
    uVar1 = uVar1 - 0x21;
    if (uVar1 == 0) {
      if (param_2 == 0) {
        F_00557670(param_3,0);
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 3;
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(int *)(gen_frame + 0x18)) = param_4[2];
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar4 = 1;
        do {
          this_00 = this_00 + -8;
          uVar1 = F_005a2670(this_00);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        return uVar1;
      }
      piVar2 = (int *)F_00915b80(this,10,9);
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2,param_4[2]);
      if ((char)uVar1 == '\0') {
        F_00557670(param_3,0);
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 4;
        (*(int *)(gen_frame + 0x18)) = param_4[2];
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar4 = 1;
        do {
          this_01 = this_01 + -8;
          uVar1 = F_005a2670(this_01);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_008048f0 */
uint F_008048f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8048f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + *(int *)((int)this + 0x180));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_00804930 */
uint F_00804930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x804930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  byte bVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar2 = param_1 * 0xbc;
  uVar9 = *(undefined4 *)(iVar2 + 400 + (int)this);
  uVar10 = 0;
  pvVar3 = (undefined *)F_00559b90(*param_2);
  F_00591c00(pvVar3,uVar9,uVar10);
  uVar4 = F_0042a990((int)this + iVar2 + 0x194);
  pvVar3 = (undefined *)F_00559ba0(param_2[6]);
  F_00584110(pvVar3,uVar4);
  uVar4 = F_0042a990((int)this + iVar2 + 0x1ec);
  pvVar3 = (undefined *)F_00559ba0(param_2[2]);
  F_00584110(pvVar3,uVar4);
  F_0059d670((undefined *)param_2[7],*(int *)((int)this + 0x4b00) + 0x65);
  uVar4 = *(uint *)((int)this + iVar2 + 0x1e8);
  uVar7 = uVar4 & 0xf;
  uVar5 = F_0059d670((undefined *)param_2[1],uVar7 + 0x65);
  iVar8 = 0;
  if (uVar7 != 0) {
    bVar1 = 8;
    do {
      uVar5 = F_00561490(param_3,iVar8 + 5);
      uVar5 = F_00559c20(uVar5);
      iVar6 = 0x6a;
      if ((int)(uVar4 >> 4 & 0xf) <= iVar8) {
        iVar6 = 0x70;
      }
      uVar5 = F_0059d670(*(undefined * PTR32 *)(uVar5 + 0x6c),
                           iVar6 - (*(uint *)((int)this + iVar2 + 0x1e8) >> (bVar1 & 0x1f) & 0xf));
      bVar1 = bVar1 + 4;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uVar7);
  }
  return uVar5;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf44 */
uint F_00804a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x804a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  undefined1 uVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined * pAVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar3 = F_0055e2f0(this,0xe);
  piVar4 = (int *)F_00559c20(uVar3);
  if (piVar4 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x3c))(piVar4);
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar7 = 0;
  uVar6 = 0x17;
  *(uint *)(this + 0xa8) = uVar3;
  pAVar8 = this;
  pvVar5 = (undefined *)F_0055e2f0(this,0xd);
  F_00568380(pvVar5,uVar6,uVar7,pAVar8,uVar9,uVar10);
  uVar10 = 0;
  uVar9 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0x17;
  pAVar8 = this;
  pvVar5 = (undefined *)F_0055e2f0(this,0xe);
  F_00568380(pvVar5,uVar6,uVar7,pAVar8,uVar9,uVar10);
  uVar3 = F_0055e2f0(this,4);
  if (uVar3 != 0) {
    pvVar5 = (undefined *)F_00559c20(uVar3);
    if (pvVar5 != (undefined *)0x0) {
      uVar3 = F_005613a0(pvVar5);
      if (uVar3 == 0xf) goto LAB_00804aae;
    }
  }
  pvVar5 = (undefined *)0x0;
LAB_00804aae: ;
  uVar3 = F_0055e2f0(this,0xb);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  F_00561990(pvVar5,uVar3);
  F_00560760(((undefined1 *)(gen_frame + 0xc)));
  (*(undefined1 *)(gen_frame + 0x16)) = 2;
  if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0x1c);
  }
  (*(undefined4 *)(gen_frame + 0x10)) = uVar6;
  if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined1)*(undefined4 *)(param_2 + 0x24);
  }
  AVar1 = this[0x13a];
  (*(undefined1 *)(gen_frame + 0x17)) = uVar2;
  uVar3 = F_0055dcb0();
  F_00590ad0((undefined *)(uVar3 + 0xe0),4,(uint)(byte)AVar1,(*(uint *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0xc)));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar3;
}

/* ref: FUN_00804b30 */
uint F_00804b30(unsigned int gen_a0)
{
  GEN_ENTER(0x804b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb304));
  in_ecx = (int)this + 0x194;
  iVar1 = 0x17;
  do {
    F_0042b630(in_ecx);
    *(undefined4 *)(in_ecx + 0x54) = 0;
    *(undefined4 *)(in_ecx + 0x58) = 0;
    in_ecx = in_ecx + 0x5c;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0xa34) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_00804b90 */
uint F_00804b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x804b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int in_ecx;
  undefined * pvVar1;
  uint uVar2;
  
  in_ecx = param_1 * 0x5c + 0x194 + (int)this;
  if (((*param_2 == 0) || (pvVar1 = (undefined *)F_00559c20(*param_2), pvVar1 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar1), uVar2 != 0xf)) {
    pvVar1 = (undefined *)0x0;
  }
  F_00595190(pvVar1,*(undefined4 *)(in_ecx + 0x54),0,0);
  uVar2 = F_0042a990(in_ecx);
  pvVar1 = (undefined *)F_00559ba0(param_2[1]);
  uVar2 = F_00584110(pvVar1,uVar2);
  return uVar2;
}

/* ref: FUN_00804c00 */
uint F_00804c00(unsigned int gen_a0)
{
  GEN_ENTER(0x804c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined2 *)((int)this + 0x1b0) = 0;
  *(undefined1 *)((int)this + 0x1b2) = 0;
  *(undefined4 *)((int)this + 0x614) = 0;
  *(undefined4 *)((int)this + 0x618) = 0;
  F_00c48350((undefined *)((int)this + 0x1b4),0,0x460);
  F_00c48350((undefined *)((int)this + 0x180),0,0x30);
  *(undefined4 *)((int)this + 0x61c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5a24));
  return (uint)this;
}

/* ref: FUN_00804c70 */
uint F_00804c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x804c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = param_1 * 0x1c;
  F_005951c0(param_3,*(undefined4 *)((int)this + param_1 * 0x1c + 0x1b8),0,0);
  uVar4 = *(undefined4 *)((int)this + iVar1 + 0x1bc);
  pvVar2 = (undefined *)F_00559ba0(*param_2);
  F_00584110(pvVar2,uVar4);
  uVar3 = (uint)*(ushort *)((int)this + iVar1 + 0x1c4);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 0;
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  uVar3 = F_0057eb30(pvVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  if (param_2[4] != 0) {
    pvVar2 = (undefined *)F_00559c20(param_2[4]);
    uVar3 = 0;
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_005613a0(pvVar2);
      if (uVar3 == 8) {
        F_0059cf90(pvVar2,(int)*(short *)((int)this + iVar1 + 0x1cc),0,0);
        uVar3 = F_0059d070(pvVar2,(uint)*(ushort *)((int)this + iVar1 + 0x1ce),0,0);
      }
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonColorantEquipmentSelector::vf44 */
uint F_00804d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x804d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  uVar6 = 0;
  uVar4 = 4;
  uVar3 = 0x21;
  pAVar5 = this;
  pvVar1 = (undefined *)F_0055e2f0(this,4);
  F_00568380(pvVar1,uVar3,uVar4,pAVar5,uVar6,uVar7);
  pvVar1 = (undefined *)F_0055e2f0(this,8);
  F_00568380(pvVar1,0x21,0,this,0,0);
  F_00568380(pvVar1,0x1f,0,this,0,0);
  F_00568380(pvVar1,0x20,0,this,0,0);
  uVar2 = F_0055e2f0(this,8);
  if (uVar2 != 0) {
    pvVar1 = (undefined *)F_00559c20(uVar2);
    if (pvVar1 != (undefined *)0x0) {
      uVar2 = F_005613a0(pvVar1);
      if (uVar2 == 9) {
        F_005624c0(pvVar1,1,1,0);
      }
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00804dd0 */
uint F_00804dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x804dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  int * in_ecx;
  undefined4 uVar3;
  
  F_00560760(((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_1 * 0x60 + 0x1e8 + (int)this);
  (*(undefined1 *)(gen_frame + 0xa)) = 2;
  (*(undefined1 *)(gen_frame + 0xb)) = *(undefined1 *)(param_1 * 0x60 + 0x1ec + (int)this);
  uVar2 = F_0055e2f0(this,8);
  if (((uVar2 == 0) || (in_ecx = (int *)F_00559c20(uVar2), in_ecx == (int *)0x0)) ||
     (uVar2 = F_005613a0(in_ecx), uVar2 != 9)) {
    in_ecx = (int *)0x0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 0x50))(in_ecx,param_1);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(uVar2 + 0x70);
  }
  bVar1 = *(byte *)((int)this + 0x13a);
  uVar2 = F_0055dcb0();
  uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),4,(uint)bVar1,uVar3,((undefined1 *)(gen_frame + 0x0)),0,0);
  return uVar2;
}

/* ref: FUN_00804e80 */
uint F_00804e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x804e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + *(int *)((int)this + 0x180));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_00804ec0 */
uint F_00804ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x804ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb504));
  F_005814a0((undefined *)((int)this + 400));
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined1 *)((int)this + 0x330) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_00c48350((undefined *)((int)this + 0x180),0,0x148);
  F_00c48350((undefined *)((int)this + 0x2c8),0,0x50);
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf46 */
byte F_00804f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x804f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((*param_2 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 4);
  }
  if ((param_2[8] & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  bVar1 = 0;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      uVar3 = F_0055e2f0(this,uVar5 + 8);
      uVar3 = F_00559c20(uVar3);
      if (uVar5 == uVar4 - iVar2) {
        uVar6 = 0x65;
      }
      else {
        uVar6 = 0x17;
      }
      F_0059d670(*(undefined * PTR32 *)(uVar3 + 0x6c),uVar6);
      bVar1 = bVar1 + 1;
      uVar5 = (uint)bVar1;
    } while (uVar5 < uVar4);
  }
  return 1;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf60 */
byte F_00804fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x804fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  undefined1 * puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  cVar3 = '\0';
  uVar4 = 0;
  puVar7 = &REFG(undefined1, 0x10d5b1c);
  do {
    if ((int)cVar3 == *(int *)(this + 0x1ac)) break;
    cVar3 = puVar7[1];
    puVar7 = puVar7 + 1;
    uVar4 = (uint)(byte)((char)uVar4 + 1);
  } while (-1 < cVar3);
  uVar8 = 0;
  if (param_1 == 0xf) {
    uVar2 = (ulonglong)(uVar4 + 1) % 3;
    uVar8 = (uint)uVar2;
    if (((char)param_2 != '\0') && ((char)uVar2 == '\0')) {
      return 0;
    }
  }
  else if (param_1 == 0x10) {
    if ((char)uVar4 == '\0') {
      if ((char)param_2 != '\0') {
        return 0;
      }
      uVar8 = 2;
    }
    else {
      uVar8 = uVar4 - 1;
    }
  }
  piVar6 = *((int * PTR32 *)GEN_TOP((this + (uVar8 & 0xff) * 4 + 400)));
  if ((piVar6 != (int *)0x0) && (uVar4 = F_0055a350(piVar6[0x1c]), (char)uVar4 != '\0')) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    cVar3 = (&REFG(undefined1, 0x10d5b1c))[uVar8 & 0xff];
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = (int)cVar3;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar4 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar6 + 0x60))(piVar6,uVar4 + 0xc0);
    uVar4 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),&(*(undefined4 *)(gen_frame + 0x14)),0xd);
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
    iVar9 = *((int *)GEN_TOP((*(int *)(this + 0x1a8) + 0xcc)));
    if (iVar9 < 0) {
      AVar1 = this[0x13a];
      uVar4 = F_0055dcb0();
      F_00596cb0((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,0);
    }
    else {
      F_00560760(&(*(undefined4 *)(gen_frame + 0x10)));
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + iVar9 * 0x20)));
      (*(undefined1 *)(gen_frame + 0x1b)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[6];
      (*(undefined1 *)(gen_frame + 0x1a)) = 7;
      (*(undefined4 *)(gen_frame + 0x10)) = *puVar5;
      piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x50))))(*(int * PTR32 *)(this + 0x1a8),iVar9)));
      AVar1 = this[0x13a];
      uVar4 = F_0055dcb0();
      uVar11 = 0;
      uVar10 = 0;
      puVar5 = &(*(undefined4 *)(gen_frame + 0x10));
      uVar8 = ((code *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6);
      F_00588780((undefined *)(uVar4 + 0xe0),4,(uint)(byte)AVar1,uVar8,puVar5,uVar10,uVar11);
    }
    puVar5 = &(*(undefined4 *)(gen_frame + 0x10));
    iVar9 = 1;
    do {
      puVar5 = puVar5 + -2;
      F_005a2670(puVar5);
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonInventory::vf37 */
uint F_008051b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8051b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  
  F_005a92d0(this,1,7,0);
  F_005a92d0(this,0,6,0);
  if (*(int *)(this + 0x1b0) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
  }
  F_005840a0(this_00,0x17,0x16,this,0);
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,0,this,0);
  }
  F_00588e00(this + 0x1c0,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_00805220 */
uint F_00805220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x805220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x204) != param_1) {
    *(uint *)((int)this + 0x204) = param_1;
    puVar4 = (undefined4 *)((int)this + 0x198);
    iVar3 = 5;
    do {
      F_0059dde0((undefined *)*puVar4,0);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    F_0059dde0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x198),1);
    if (param_1 == 4) {
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),0);
      uVar1 = F_0059bd30((undefined *)((int)this + 0x1c0),
                           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1fc) + 0x18))),1,1);
      if (*(char *)((int)this + 0x201) != '\0') {
        uVar1 = F_0055dcb0();
        uVar1 = F_0055b9a0(uVar1);
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b990(uVar2);
        uVar1 = F_00560f70(*(undefined4 *)((int)this + 0x1fc),uVar2,uVar1);
        return uVar1;
      }
    }
    else {
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x180),1);
      uVar1 = F_0059bd30((undefined *)((int)this + 0x1c0),
                           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0x18))),1,1);
      if (*(char *)((int)this + 0x200) != '\0') {
        uVar1 = F_0055dcb0();
        uVar1 = F_0055b9a0(uVar1);
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b990(uVar2);
        uVar1 = F_00560f70(*(undefined4 *)((int)this + 0x1f8),uVar2,uVar1);
      }
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonInventory::vf2 */
uint F_00805340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x805340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 != 0x17) {
    if (uVar2 == 0x3e) {
      if ((*(int *)(this + 0x1f8) != 0) && (param_2 == *((int *)GEN_TOP((*(int *)(this + 0x1f8) + 0x18))))) {
        iVar1 = *(int *)this;
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b9a0(uVar2);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar3,uVar2);
        this[0x200] = (undefined1)0x1;
        F_0055a300(*(undefined * PTR32 *)(this + 0x180),1);
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b9a0(uVar2);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        F_00560f70(*(undefined4 *)(this + 0x1f8),uVar3,uVar2);
      }
      uVar2 = *(uint *)(this + 0x1fc);
      if ((uVar2 != 0) && (param_2 == *(int *)(uVar2 + 0x18))) {
        iVar1 = *(int *)this;
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b9a0(uVar2);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar3,uVar2);
        this[0x201] = (undefined1)0x1;
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b9a0(uVar2);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        uVar2 = F_00560f70(*(undefined4 *)(this + 0x1fc),uVar3,uVar2);
      }
    }
    return uVar2;
  }
  F_00557670(param_3,0);
  if (4 < param_2 - 0xfU) {
    if (param_2 != 0x16) {
      uVar2 = F_007a5160(this);
      return uVar2;
    }
    uVar2 = F_007a51f0(this);
    return uVar2;
  }
  uVar2 = F_00805220(this,param_2 + -0xf);
  return uVar2;
}

/* ref: Client::UI2::AddonInventory::vf60 */
byte F_008054a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8054a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  undefined4 in_ecx;
  undefined * pAVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  iVar7 = 0;
  pAVar3 = this + 0x198;
  iVar5 = 0;
  do {
    iVar1 = *(int *)pAVar3;
    iVar6 = iVar5;
    if (iVar7 != 0) goto LAB_008054e1;
    iVar6 = iVar1;
    if (*(char *)(iVar1 + 0x88) != '\0') {
      iVar6 = iVar5;
      iVar7 = iVar1;
    }
    iVar4 = iVar4 + 1;
    pAVar3 = pAVar3 + 4;
    iVar5 = iVar6;
  } while (iVar4 < 5);
  iVar1 = 0;
LAB_008054e1: ;
  if (param_1 != 0xf) {
    if (param_1 != 0x10) {
      return 0;
    }
    if ((iVar6 != 0) && (iVar7 != iVar6)) {
      uVar2 = F_0055a260(*(undefined * PTR32 *)(iVar6 + 0x70),0x17);
      F_00805220(this,uVar2 - 0xf);
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
    return 1;
  }
  if ((iVar1 != 0) && (iVar7 != iVar1)) {
    uVar2 = F_0055a260(*(undefined * PTR32 *)(iVar1 + 0x70),0x17);
    F_00805220(this,uVar2 - 0xf);
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    return 1;
  }
  if (iVar7 != 0) {
    in_ecx = 0;
    if (*(int *)(this + 0x188) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    uVar2 = F_0055a350(in_ecx);
    if (((char)uVar2 != '\0') &&
       (uVar2 = F_0055a260(*(undefined * PTR32 *)(iVar7 + 0x70),0x17), uVar2 == 0x13)) {
      F_007a5160(this);
    }
  }
  return 1;
}

/* ref: FUN_008055d0 */
uint F_008055d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8055d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined3 extraout_var = 0;
  undefined4 uVar5;
  
  (*(undefined2 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,&(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x198));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = (undefined2)(*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((undefined2)(*(undefined4 *)(gen_frame + 0x18)),0x4001);
  (*(undefined2 *)(gen_frame + 0xc)) = (short)(*(undefined4 *)(gen_frame + 0x14));
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar2 = *(int *)((int)this + 0x188);
  F_0055e430(this,&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),iVar2);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar2 + 0x70);
  }
  uVar4 = F_0055a020(uVar5);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = (short)(*(undefined4 *)(gen_frame + 0x14)) + uVar4;
  (*(undefined2 *)(gen_frame + 0xc)) = (undefined2)(*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((short)(*(undefined4 *)(gen_frame + 0x14)) + uVar4,0x4002);
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  if (*(char *)((int)this + 0x202) == '\0') {
    F_0056b780(this,3);
  }
  else {
    F_0055e430(this,&(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x1b0));
    if (*(int *)((int)this + 0x1b0) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x70)));
    }
    uVar4 = F_0055a030(uVar5);
    sVar1 = (short)(*(undefined4 *)(gen_frame + 0x14)) + (uVar4 >> 1);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = sVar1;
    (*(undefined4 *)(gen_frame + 0x14)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 2)),sVar1);
    F_0056b630(this,0x18a89,0,3,4,(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x14)));
  }
  uVar5 = 0x73a;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    uVar5 = 0x73c;
    break;
  case 2: ;
    uVar5 = 0x73b;
    break;
  case 3: ;
    uVar5 = 0x18ac2;
    break;
  case 4: ;
    uVar5 = 0x18ac3;
    break;
  case 6: ;
    uVar5 = 0x18ac5;
    break;
  case 7: ;
    uVar5 = 0x18ac4;
    break;
  case 8: ;
    uVar5 = 0x223;
    break;
  case 9: ;
    uVar5 = 0x18ae0;
  }
  bVar3 = F_0056b630(this,uVar5,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_00805780 */
uint F_00805780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x805780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if ((char)param_1 != '\0') {
    bVar1 = F_0056b630(this,0x18ab8,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_008055d0(this,*(undefined4 *)((int)this + 0x1bc));
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryGrid::vf37 */
uint F_008057c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8057c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pAVar2;
  uint uVar3;
  int iVar4;
  
  F_005a92d0(this,1,7,0);
  F_005a92d0(this,0,6,0);
  pAVar2 = this + 0x1e4;
  iVar4 = 0;
  do {
    iVar1 = *(int *)(pAVar2 + -100);
    if (iVar1 != 0) {
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),3,iVar4,this,0);
    }
    *(undefined4 *)pAVar2 = 0;
    iVar4 = iVar4 + 1;
    pAVar2 = pAVar2 + 4;
  } while (iVar4 < 0x19);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonInventoryGrid::vf44 */
uint F_00805860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x805860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * local_8;
  
  local_8 = this + 0x180;
  uVar4 = 0;
  do {
    uVar2 = F_0055e2f0(this,uVar4 + 3);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 0x11)) {
      uVar2 = 0;
    }
    *(uint *)local_8 = uVar2;
    uVar4 = uVar4 + 1;
    local_8 = local_8 + 4;
  } while (uVar4 < 0x19);
  F_0055dcb0();
  local_8 = this + 0x1e4;
  iVar5 = 0;
  do {
    iVar1 = *(int *)(local_8 + -100);
    if (iVar1 != 0) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84);
      *(int *)(uVar4 + 4) = iVar5;
      *(short *)(iVar1 + 0x9c) = (short)iVar5;
      *(undefined4 *)(iVar1 + 0xa0) = 0x4218;
      *(undefined1 *)(iVar1 + 0xa9) = 0;
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),3,iVar5,this,0,0);
      *(int *)local_8 = iVar1;
    }
    local_8 = local_8 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x19);
  uVar4 = F_0055e2f0(this,0x1c);
  *(uint *)(this + 0x94) = uVar4;
  F_005a91d0(this,1,7);
  uVar4 = F_005a91d0(this,0,6);
  return uVar4;
}

/* ref: Client::UI2::AddonInventoryGrid::vf47 */
unsigned int F_00805980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x805980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  bool bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 * puVar10;
  
  AVar1 = this[0x13c];
  (*(int *)(gen_frame + 0x34)) = *(int *)(param_1 + 0x1c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) = *(undefined4 *)(param_2 + 0x18);
  iVar8 = 0;
  bVar2 = false;
  uVar3 = F_0055dcb0();
  uVar3 = F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
  if (uVar3 != 0) {
    iVar8 = *(int *)(uVar3 + 0x204);
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(uVar3 + 0x1bc))) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 7: ;
    case 9: ;
      bVar2 = true;
    }
    if (iVar8 < 0) {
      return 0;
    }
    if (3 < iVar8) {
      return 0;
    }
  }
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) = iVar8 * 0x19;
  ((byte *)(gen_frame + 0x8))[0x20] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x21] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x22] = 0xff;
  ((byte *)(gen_frame + 0x8))[0x23] = 0xff;
  uVar3 = F_0055dcb0();
  iVar7 = *(int *)(uVar3 + 0xb4);
  if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x98) & 0x10) != 0)) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar7 + 0x84) + 0x28))))()));
    if (*piVar4 == iVar8) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar7 + 0x84) + 0x28))))((int *)(iVar7 + 0x84));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = *(undefined4 *)(uVar3 + 4);
    }
  }
  F_00560760(((byte *)(gen_frame + 0x8)));
  iVar7 = iVar8 * 500 + 0x10;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) = this + 0x1e4;
  ((byte *)(gen_frame + 0x8))[10] = 2;
  ((byte *)(gen_frame + 0x8))[4] = (char)iVar8;
  ((byte *)(gen_frame + 0x8))[5] = (char)((uint)iVar8 >> 8);
  ((byte *)(gen_frame + 0x8))[6] = (char)((uint)iVar8 >> 0x10);
  ((byte *)(gen_frame + 0x8))[7] = (char)((uint)iVar8 >> 0x18);
  param_2 = 0;
  (*(int *)(gen_frame + 0x30)) = iVar8 * 100;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = iVar7;
  do {
    iVar8 = (*(int *)(gen_frame + 0x34));
    piVar4 = *(int * PTR32 *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28));
    if (piVar4 != (int *)0x0) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((iVar7 + -4 + *(int *)((*(int *)(gen_frame + 0x34)) + 0x20))));
      (*(undefined * PTR32 *)(gen_frame + 0x38)) = pvVar6;
      uVar3 = (int)((int)(uintptr_t)pvVar6) >> 0x10 & 0xff;
      uVar5 = 0x13;
      if (uVar3 == 8) {
        uVar5 = 0x16;
      }
      else if (uVar3 == 9) {
        uVar5 = 0x15;
      }
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = iVar7;
      F_0059db40((undefined *)piVar4[0x29],uVar5);
      bVar9 = (char)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x38))) >> 8) != '\0';
      ((byte *)(gen_frame + 0x8))[0x24] = bVar9;
      F_0056e4d0(piVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36)));
      ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,(uint)(((byte *)(gen_frame + 0x8))[0x24] == 0));
      if ((bVar2) && ((char)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x38))) >> 0x18) != '\0')) {
        F_0056e4d0(piVar4,1);
      }
      *(short *)(piVar4 + 0x27) = (short)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) + (short)param_2;
      iVar8 = *((int *)GEN_TOP((iVar7 + -0x10 + *(int *)(iVar8 + 0x20))));
      if (iVar8 < 1) {
        ((code *)*(gen_code32 *)(piVar4[0x21] + 0x30))(piVar4 + 0x21);
        F_00595560(piVar4,0);
        F_00597570(piVar4);
        if (piVar4[0x29] == 0) {
          F_0055a300((undefined *)0x0,0);
        }
        else {
          F_0055a300(*(undefined * PTR32 *)(piVar4[0x29] + 0x70),0);
        }
      }
      else {
        ((code *)*(gen_code32 *)(piVar4[0x21] + 0x28))(piVar4 + 0x21);
        piVar4[0x26] = 0x10;
        F_00595560(piVar4,iVar8);
        if (piVar4[0x29] == 0) {
          pvVar6 = (undefined *)0x0;
        }
        else {
          pvVar6 = *(undefined * PTR32 *)(piVar4[0x29] + 0x70);
        }
        F_0055a300(pvVar6,(uint)(param_2 != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32))));
        iVar8 = *((int *)GEN_TOP((iVar7 + -8 + *(int *)((*(int *)(gen_frame + 0x34)) + 0x20))));
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) + 0x20))))));
        ((byte *)(gen_frame + 0x8))[0xb] = (byte)param_2;
        F_005916c0(piVar4,6,(uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) + 0x13a))),((byte *)(gen_frame + 0x8)));
        uVar3 = iVar8 >> 0x10 & 0xffff;
        if ((uVar3 < 2) && ((char)(*(undefined * PTR32 *)(gen_frame + 0x38)) != '\x05')) {
          pvVar6 = *(undefined * PTR32 *)(piVar4[0x29] + 0xbc);
          puVar10 = &REFG(undefined1, 0x10be90e);
        }
        else {
          (*(undefined * PTR32 *)(gen_frame + 0x38)) = *(undefined * PTR32 *)(piVar4[0x29] + 0xbc);
          puVar10 = (undefined1 *)F_00560910(uVar3);
          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x38));
        }
        F_00584110(pvVar6,puVar10);
        iVar8 = *((int *)GEN_TOP((iVar7 + *(int *)((*(int *)(gen_frame + 0x34)) + 0x20))));
        F_00561860((undefined *)piVar4[0x29],(uint)((byte)iVar8 & 1));
        F_005a03c0((undefined *)piVar4[0x29],iVar8 >> 1);
        iVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24));
      }
    }
    (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 4;
    param_2 = param_2 + 1;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) + 4;
    iVar7 = iVar7 + 0x14;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = iVar7;
  } while (param_2 < 0x19);
  return 0;
}

/* ref: FUN_00805c90 */
uint F_00805c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x805c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_007a5260(this_00,param_1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00805cc0 */
uint F_00805cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x805cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  bVar1 = *(byte *)((int)this + 0x13c);
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)bVar1);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    if ((char)param_1 != '\0') {
      bVar1 = F_0056b630(this_00,0x18ab8,7,0,9,0,0);
      return CONCAT31(extraout_var,bVar1);
    }
    uVar2 = F_008055d0(this_00,*(undefined4 *)((int)this_00 + 0x1bc));
  }
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryGrid::vf53 */
unsigned int F_00805d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x805d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 == '\0') {
    uVar1 = F_0055dcb0();
    if (*(char *)(uVar1 + 0xbc) != '\0') {
      F_005aa300((undefined *)(uVar1 + 0x3c),1,1,9);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf37 */
uint F_00805d40(unsigned int gen_a0)
{
  GEN_ENTER(0x805d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pAVar2;
  uint uVar3;
  int iVar4;
  
  F_005a92d0(this,1,7,0);
  F_005a92d0(this,0,6,0);
  pAVar2 = this + 0x1c8;
  iVar4 = 0;
  do {
    iVar1 = *(int *)(pAVar2 + -0x48);
    if (iVar1 != 0) {
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar4,this,0);
    }
    *(undefined4 *)pAVar2 = 0;
    iVar4 = iVar4 + 1;
    pAVar2 = pAVar2 + 4;
  } while (iVar4 < 0x12);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf44 */
uint F_00805dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x805dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * local_8;
  
  local_8 = this + 0x180;
  uVar4 = 0;
  do {
    uVar2 = F_0055e2f0(this,uVar4 + 0xe);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 0x11)) {
      uVar2 = 0;
    }
    *(uint *)local_8 = uVar2;
    uVar4 = uVar4 + 1;
    local_8 = local_8 + 4;
  } while (uVar4 < 0x12);
  F_0055dcb0();
  local_8 = this + 0x1c8;
  iVar5 = 0;
  do {
    iVar1 = *(int *)(local_8 + -0x48);
    if (iVar1 != 0) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84);
      *(int *)(uVar4 + 4) = iVar5;
      *(undefined4 *)(iVar1 + 0x98) = 0x8000;
      *(undefined4 *)(iVar1 + 0xa0) = 0xc200;
      *(undefined1 *)(iVar1 + 0xa9) = 0;
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar5,this,0,0);
      *(int *)local_8 = iVar1;
    }
    local_8 = local_8 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x12);
  uVar4 = F_0055e2f0(this,0x20);
  *(uint *)(this + 0x94) = uVar4;
  F_005a91d0(this,1,7);
  uVar4 = F_005a91d0(this,0,6);
  return uVar4;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf2 */
uint F_00805ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x805ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined1 AVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  undefined4 * puVar6;
  uint * puVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar4 = param_1 & 0xffff;
  uVar5 = uVar4 - 0x17;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  if (uVar5 < 0x1e) {
    uVar5 = (uint)*(byte *)(uVar4 + 0x8061f5);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0x17: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(int *)(gen_frame + 0x18)) = param_2;
      F_005a9110((*(undefined * PTR32 *)(gen_frame + 0x1c)),1,&(*(undefined4 *)(gen_frame + 0x14)));
      uVar5 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      break;
    case 0x2d: ;
      (*(int *)(gen_frame + 0x10)) = *(int *)(this + param_2 * 4 + 0x1c8);
      uVar4 = F_0055dcb0();
      uVar4 = F_0055b990(uVar4);
      iVar2 = *((int *)GEN_TOP((*(int *)(uVar4 + 0x1c) + 0x20)));
      iVar8 = param_2 * 3 + 0x3b8;
      uVar4 = *(uint *)(iVar2 + 4 + iVar8 * 4);
      uVar5 = (uint)*(ushort *)(iVar2 + 8 + iVar8 * 4);
      (*(int *)(gen_frame + 0x18)) = *(undefined4 *)(iVar2 + iVar8 * 4);
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)uVar5;
      if (uVar5 == 0xffff) {
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0xffffffff;
      }
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4)));
      *puVar6 = 0x26;
      uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4);
      *(undefined * PTR32 *)(uVar5 + 4) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4);
      *(uint *)(uVar5 + 100) = uVar4 & 0xffff;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x10)) + 0x84) + 0x34))))((*(int *)(gen_frame + 0x10)) + 0x84)));
      F_00595560(this_00,(*(int *)(gen_frame + 0x18)));
      F_0058ea90(this_00,(int)uVar4 >> 0x10 & 0xffff);
      F_0058e9a0(this_00,&REFG(undefined, 0x10be921));
      *(undefined4 *)((int)this_00 + 0x94) = 0x100010;
      uVar4 = F_00557670(param_3,0);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar4;
    case 0x30: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4)));
      (*(int *)(gen_frame + 0x18)) = *puVar6;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x18));
      uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4);
      uVar3 = *(undefined4 *)(uVar4 + 4);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      (*(undefined4 *)(gen_frame + 0x34)) = uVar3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
      (*(uint *)(gen_frame + 0x3c)) = 0x26;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(int *)(gen_frame + 0x44)) = param_2;
      uVar4 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x28)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
      *(undefined1 *)(param_3 + 0x15) = 1;
      puVar7 = &(*(uint *)(gen_frame + 0x48));
      iVar8 = 3;
      do {
        puVar7 = puVar7 + -2;
        uVar4 = F_005a2670(puVar7);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar4;
    case 0x34: ;
      F_00557670(param_3,0);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x2c))((int *)*param_4);
      if ((char)uVar5 != '\0') {
        uVar5 = *(byte *)(param_4 + 2) - 1;
        switch((unsigned int)(uintptr_t)(uVar5)) {
        case 0: ;
        case 2: ;
        case 5: ;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(undefined4 *)(gen_frame + 0x30)) = 0;
          (*(undefined4 *)(gen_frame + 0x38)) = 0;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
          (*(undefined4 *)(gen_frame + 0x24)) = 0x26;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
          (*(int *)(gen_frame + 0x2c)) = param_2;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
          (*(undefined4 *)(gen_frame + 0x34)) = 0;
          AVar1 = (*(undefined * PTR32 *)(gen_frame + 0x1c))[0x13c];
          if (AVar1 == (undefined1)0x0) {
            AVar1 = (*(undefined * PTR32 *)(gen_frame + 0x1c))[0x13a];
          }
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
          (*(uint *)(gen_frame + 0x3c)) = (uint)(byte)AVar1;
          uVar4 = F_0055dcb0();
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 4))))(((undefined1 *)(gen_frame + 0x8)),0x24,5,&(*(undefined4 *)(gen_frame + 0x20)));
          F_005a2670(((undefined1 *)(gen_frame + 0x8)));
          puVar7 = &(*(uint *)(gen_frame + 0x48));
          iVar8 = 4;
          do {
            puVar7 = puVar7 + -2;
            uVar4 = F_005a2670(puVar7);
            iVar8 = iVar8 + -1;
          } while (-1 < iVar8);
          F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
          return uVar4;
        case 4: ;
          uVar4 = F_007a5a90((*(undefined * PTR32 *)(gen_frame + 0x1c)),param_2);
          F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
          return uVar4;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: Client::UI2::AddonInventoryEvent::vf37 */
uint F_00806250(unsigned int gen_a0)
{
  GEN_ENTER(0x806250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,7,0);
  F_005a92d0(this,0,6,0);
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,0,this,0);
  }
  F_00588e00(this + 0x1b4,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf47 */
uint F_008062a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8062a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined * pAVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x20))) + 0xed8)));
    uVar3 = uVar2 & 0xffff;
    uVar2 = (int)uVar2 >> 0x10 & 0xffff;
    if ((*(uint *)(this + 0x1f8) != uVar3) || (*(uint *)(this + 0x1fc) != uVar2)) {
      F_00584110(*(undefined * PTR32 *)(this + 0x180),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x434))));
      *(uint *)(this + 0x1f8) = uVar3;
      *(uint *)(this + 0x1fc) = uVar2;
    }
    fVar6 = F_00c4ed10((uint)(ulonglong)gen_d2bits((double)uVar3 / *(double *)&REFG(undefined, 0x1090710)),
                         (int)((ulonglong)gen_d2bits((double)uVar3 / *(double *)&REFG(undefined, 0x1090710)) >>
                              0x20));
    param_1 = (int)fVar6;
    if (param_1 == 0) {
      param_1 = 1;
    }
    iVar5 = 0;
    pAVar4 = this + 0x194;
    do {
      this_00 = *(undefined * PTR32 *)pAVar4;
      if (iVar5 < param_1) {
        if (this_00 == (undefined *)0x0) {
          uVar7 = 1;
        }
        else {
          this_00 = *(undefined * PTR32 *)((int)this_00 + 0x70);
          uVar7 = 1;
        }
      }
      else {
        if (this_00 != (undefined *)0x0) {
          this_00 = *(undefined * PTR32 *)((int)this_00 + 0x70);
        }
        uVar7 = 0;
      }
      uVar2 = F_0055a300(this_00,uVar7);
      iVar5 = iVar5 + 1;
      pAVar4 = pAVar4 + 4;
    } while (iVar5 < 5);
  }
  if (iVar1 != 0) {
    iVar5 = 0x44c;
    do {
      uVar2 = F_00589280(*(undefined * PTR32 *)(this + iVar5 + -0x2b8),
                           *((undefined4 *)GEN_TOP((iVar5 + *(int *)(iVar1 + 0x20)))));
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x460);
  }
  return uVar2;
}

/* ref: FUN_008063b0 */
uint F_008063b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8063b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x200) != param_1) {
    *(uint *)((int)this + 0x200) = param_1;
    puVar4 = (undefined4 *)((int)this + 0x194);
    iVar3 = 5;
    do {
      F_0059dde0((undefined *)*puVar4,0);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    F_0059dde0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x194),1);
    uVar1 = F_0059bd30((undefined *)((int)this + 0x1b4),
                         *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1ec) + 0x18))),1,1);
    if (*(char *)((int)this + 0x1f0) != '\0') {
      uVar1 = F_0055dcb0();
      uVar1 = F_0055b9a0(uVar1);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b990(uVar2);
      uVar1 = F_00560f70(*(undefined4 *)((int)this + 0x1ec),uVar2,uVar1);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonInventoryEvent::vf2 */
uint F_00806460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x806460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 0x17) {
    F_00557670(param_3,0);
    if (param_2 - 9U < 5) {
      uVar2 = F_008063b0(this,param_2 + -9);
      return uVar2;
    }
    uVar2 = F_007a5ed0(this);
  }
  else if (((uVar2 == 0x3e) && (uVar2 = *(uint *)(this + 0x1ec), uVar2 != 0)) &&
          (param_2 == *(int *)(uVar2 + 0x18))) {
    iVar1 = *(int *)this;
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9a0(uVar2);
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b990(uVar3);
    ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar3,uVar2);
    this[0x1f0] = (undefined1)0x1;
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9a0(uVar2);
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b990(uVar3);
    uVar2 = F_00560f70(*(undefined4 *)(this + 0x1ec),uVar3,uVar2);
    return uVar2;
  }
  return uVar2;
}

/* ref: Client::UI2::AddonInventoryEvent::vf60 */
byte F_00806530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x806530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  pAVar4 = this + 0x194;
  do {
    iVar1 = *(int *)pAVar4;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0x70);
    }
    uVar2 = F_0055a2d0(uVar3);
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x14));
    iVar5 = (*(int *)(gen_frame + 0x10));
    if (((char)uVar2 == '\0') || (iVar5 = iVar1, (*(int *)(gen_frame + 0x18)) != 0)) break;
    if (*(char *)(iVar1 + 0x88) == '\0') {
      (*(int *)(gen_frame + 0xc)) = iVar1;
    }
    else {
      (*(int *)(gen_frame + 0x18)) = iVar1;
    }
    iVar6 = iVar6 + 1;
    pAVar4 = pAVar4 + 4;
    iVar5 = (*(int *)(gen_frame + 0x10));
  } while (iVar6 < 5);
  if (param_1 == 0xf) {
    if ((iVar5 != 0) && ((*(int *)(gen_frame + 0x18)) != iVar5)) {
      uVar2 = F_0055a260(*(undefined * PTR32 *)(iVar5 + 0x70),0x17);
      F_008063b0((*(undefined * PTR32 *)(gen_frame + 0x14)),uVar2 - 9);
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x8)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    }
    return 1;
  }
  if (param_1 != 0x10) {
    return 0;
  }
  if (((*(int *)(gen_frame + 0xc)) != 0) && ((*(int *)(gen_frame + 0x18)) != (*(int *)(gen_frame + 0xc)))) {
    uVar2 = F_0055a260(*(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + 0x70),0x17);
    F_008063b0((*(undefined * PTR32 *)(gen_frame + 0x14)),uVar2 - 9);
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x8)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    return 1;
  }
  if ((*(int *)(gen_frame + 0x18)) != 0) {
    uVar3 = 0;
    if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x188) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x188) + 0x70)));
    }
    uVar2 = F_0055a350(uVar3);
    if (((char)uVar2 != '\0') && (uVar2 = F_0055a260(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x70),0x17), uVar2 == 9)
       ) {
      F_007a5ed0(this_00);
    }
  }
  return 1;
}

/* ref: FUN_00806690 */
uint F_00806690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x806690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x194));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x188);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar3 = F_0055a020(uVar4);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar3;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar3,0x4002);
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  uVar4 = 0x18ad4;
  if (param_1 == 8) {
    uVar4 = 0x223;
  }
  bVar2 = F_0056b630(this,uVar4,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf37 */
uint F_00806780(unsigned int gen_a0)
{
  GEN_ENTER(0x806780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  undefined * pAVar3;
  uint uVar4;
  int iVar5;
  
  F_005a92d0(this,1,7,0);
  F_005a92d0(this,0,6,0);
  pAVar3 = this + 0x1e4;
  iVar5 = 0;
  do {
    iVar2 = *(int *)(pAVar3 + -100);
    if (iVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x30,iVar5,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x34,iVar5,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x2d,iVar5,this,0);
    }
    *(undefined4 *)pAVar3 = 0;
    iVar5 = iVar5 + 1;
    pAVar3 = pAVar3 + 4;
  } while (iVar5 < 0x19);
  AVar1 = this[0x13a];
  uVar4 = F_0055dcb0();
  F_00596b90((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,1);
  uVar4 = F_005b0510((undefined *)this);
  return uVar4;
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf44 */
uint F_00806820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x806820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined * local_8;
  
  local_8 = this + 0x180;
  uVar4 = 0;
  do {
    uVar2 = F_0055e2f0(this,uVar4 + 3);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2), uVar3 != 0x11)) {
      uVar2 = 0;
    }
    *(uint *)local_8 = uVar2;
    uVar4 = uVar4 + 1;
    local_8 = local_8 + 4;
  } while (uVar4 < 0x19);
  F_0055dcb0();
  local_8 = this + 0x1e4;
  iVar5 = 0;
  do {
    iVar1 = *(int *)(local_8 + -100);
    if (iVar1 != 0) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84);
      *(int *)(uVar4 + 4) = iVar5;
      *(short *)(iVar1 + 0x9c) = (short)iVar5;
      *(undefined4 *)(iVar1 + 0xa0) = 0x400;
      *(undefined1 *)(iVar1 + 0xa9) = 3;
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x30,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x34,iVar5,this,0,0);
      F_00568380(*(undefined * PTR32 *)(iVar1 + 0x70),0x2d,iVar5,this,0,0);
      *(int *)local_8 = iVar1;
    }
    local_8 = local_8 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x19);
  uVar4 = F_0055e2f0(this,0x1c);
  *(uint *)(this + 0x94) = uVar4;
  F_005a91d0(this,1,7);
  uVar4 = F_005a91d0(this,0,6);
  return uVar4;
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf47 */
uint F_00806930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x806930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined * this_00;
  undefined * pvVar6;
  int iVar7;
  int iVar8;
  undefined * puVar9;
  
  iVar7 = *(int *)(param_1 + 0x1c);
  uVar3 = *(uint *)(param_2 + 0x18);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int *)(gen_frame + 0x28)) = iVar7;
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  if ((iVar7 != 0) && (uVar3 != 0)) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    uVar3 = F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
    if (uVar3 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(uVar3 + 0x200);
      if (iVar8 < 0) {
        return uVar3;
      }
    }
    F_00560760(&(*(undefined4 *)(gen_frame + 0x8)));
    uVar3 = iVar8 * 0x4b;
    param_2 = iVar8 * 100 + 400;
    param_1 = iVar8 * 300 + 2000;
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = this + 0x1e4;
    (*(undefined1 *)(gen_frame + 0x12)) = 2;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x24;
    (*(int *)(gen_frame + 0x20)) = 0x19;
    do {
      pvVar6 = *(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x24));
      if (pvVar6 != (undefined *)0x0) {
        uVar2 = *((undefined4 *)GEN_TOP((param_1 + 8 + *(int *)(iVar7 + 0x20))));
        (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
        F_0056e4d0(pvVar6,(uint)((char)((uint)uVar2 >> 8) != '\0'));
        piVar4 = ((int *)GEN_TOP((*(int *)(iVar7 + 0x20) + param_1)));
        iVar8 = *piVar4;
        if (iVar8 < 1) {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)pvVar6 + 0x84) + 0x30))))((int)pvVar6 + 0x84);
          F_00595560(pvVar6,0);
          F_00597570(pvVar6);
          if (*(int *)((int)pvVar6 + 0xa4) == 0) {
            uVar3 = F_0055a300((undefined *)0x0,0);
          }
          else {
            uVar3 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar6 + 0xa4) + 0x70))),0);
          }
        }
        else {
          uVar3 = piVar4[1];
          uVar5 = uVar3 & 0xffff;
          *(undefined4 *)((int)pvVar6 + 0x98) = 0x400;
          *(short *)((int)pvVar6 + 0x9c) = (short)(uVar3 >> 0x10);
          F_00595560(pvVar6,iVar8);
          this_00 = (undefined *)0x0;
          if (*(int *)((int)pvVar6 + 0xa4) != 0) {
            this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar6 + 0xa4) + 0x70)));
          }
          F_0055a300(this_00,1);
          (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_2 + *(int *)((*(uint *)(gen_frame + 0x1c)) + 0x20))));
          (*(undefined1 *)(gen_frame + 0x13)) = (char)(uVar3 >> 0x10);
          F_005916c0(pvVar6,6,(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x18))[0x13a],&(*(undefined4 *)(gen_frame + 0x8)));
          if ((uVar5 < 2) && ((uVar5 != 1 || ((char)(*(undefined4 *)(gen_frame + 0x14)) != '\x05')))) {
            pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar6 + 0xa4) + 0xbc)));
            puVar9 = &REFG(undefined, 0x10be922);
          }
          else {
            pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar6 + 0xa4) + 0xbc)));
            puVar9 = (undefined *)F_00560910(uVar5);
          }
          uVar3 = F_00584110(pvVar6,puVar9);
          iVar7 = (*(int *)(gen_frame + 0x28));
        }
      }
      param_2 = param_2 + 4;
      param_1 = param_1 + 0xc;
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 4;
      iVar8 = (*(int *)(gen_frame + 0x20)) + -1;
      (*(int *)(gen_frame + 0x20)) = iVar8;
    } while (iVar8 != 0);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf2 */
uint F_00806b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x806b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined1 AVar2;
  ushort uVar3;
  undefined * this_00;
  undefined4 uVar4;
  uint uVar5;
  undefined * this_01;
  undefined4 * puVar6;
  uint * puVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(int *)(gen_frame + 0x1c)) = param_2;
  uVar5 = (param_1 & 0xffff) - 0x17;
  switch((unsigned int)(uintptr_t)(param_1 & 0xffff)) {
  case 0x17: ;
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x1c));
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
    uVar5 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
    break;
  case 0x2d: ;
    F_00557670(param_3,0);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x2c))((int *)*param_4);
    if ((char)uVar5 != '\0') {
      iVar8 = *(int *)(this + (*(int *)(gen_frame + 0x1c)) * 4 + 0x1e4);
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4)));
      *puVar6 = 0x24;
      uVar3 = *(ushort *)(iVar8 + 0x9c);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4);
      *(uint *)(uVar5 + 4) = (uint)uVar3;
      this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar8 + 0x84) + 0x34))))(iVar8 + 0x84)));
      uVar5 = F_00562ff0(iVar8);
      F_00595560(this_01,uVar5);
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_01 + 0xa4) + 0xbc)));
      uVar5 = F_0055aaf0(*((undefined4 *)GEN_TOP((*(int *)(iVar8 + 0xa4) + 0xbc))));
      F_00584110(this_00,uVar5);
      uVar5 = F_0058e9a0(this_01,&REFG(undefined, 0x10be923));
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar5;
    }
    break;
  case 0x30: ;
    F_00557670(param_3,0);
    (*(int *)(gen_frame + 0x18)) = *(int *)(this + (*(int *)(gen_frame + 0x1c)) * 4 + 0x1e4);
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4)));
    (*(int *)(gen_frame + 0x1c)) = *puVar6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x1c));
    uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4);
    uVar4 = *(undefined4 *)(uVar5 + 4);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
    (*(uint *)(gen_frame + 0x34)) = uVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
    (*(uint *)(gen_frame + 0x3c)) = 0x24;
    uVar3 = *(ushort *)((*(int *)(gen_frame + 0x18)) + 0x9c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
    (*(uint *)(gen_frame + 0x44)) = (uint)uVar3;
    uVar5 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x28)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
    *(undefined1 *)(param_3 + 0x15) = 1;
    puVar7 = &(*(uint *)(gen_frame + 0x48));
    iVar8 = 3;
    do {
      puVar7 = puVar7 + -2;
      uVar5 = F_005a2670(puVar7);
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar5;
  case 0x34: ;
    F_00557670(param_3,0);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_4 + 0x2c))((int *)*param_4);
    if ((char)uVar5 != '\0') {
      uVar5 = *(byte *)(param_4 + 2) - 1;
      switch((unsigned int)(uintptr_t)(uVar5)) {
      case 0: ;
      case 2: ;
      case 5: ;
        bVar1 = *(byte *)(param_3 + 7);
        iVar8 = *(int *)(this + (*(int *)(gen_frame + 0x1c)) * 4 + 0x1e4);
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
        (*(undefined4 *)(gen_frame + 0x24)) = 0x24;
        uVar3 = *(ushort *)(iVar8 + 0x9c);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
        (*(uint *)(gen_frame + 0x2c)) = (uint)uVar3;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
        AVar2 = this[0x13c];
        (*(uint *)(gen_frame + 0x34)) = bVar1 & 1;
        if (AVar2 == (undefined1)0x0) {
          AVar2 = this[0x13a];
        }
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
        (*(uint *)(gen_frame + 0x3c)) = (uint)(byte)AVar2;
        uVar5 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(((undefined1 *)(gen_frame + 0x4)),0x24,5,&(*(undefined4 *)(gen_frame + 0x20)));
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
        puVar7 = &(*(uint *)(gen_frame + 0x48));
        iVar8 = 4;
        do {
          puVar7 = puVar7 + -2;
          uVar5 = F_005a2670(puVar7);
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return uVar5;
      case 4: ;
        F_007a6230(this,(*(int *)(gen_frame + 0x1c)));
        uVar5 = F_0055dcb0();
        *((undefined1 *)GEN_TOP((*(int *)(uVar5 + 0x1c) + 0x19))) = 1;
        uVar5 = F_0055dcb0();
        *((undefined1 *)GEN_TOP((*(int *)(uVar5 + 0x1c) + 0x1a))) = 1;
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return uVar5;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: Client::UI2::AddonShop::vf46 */
byte F_00806eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x806eb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 * puVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  byte * pbVar9;
  bool bVar10;
  
  pbVar9 = (*(byte * PTR32 *)&gen_args[2]);
  if (((*(byte * PTR32 *)&gen_args[2])[0x10] & 0xf) == 0) {
    (*(uint *)(gen_frame + 0x8)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x8)) = *((uint *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x14)));
  }
  if (((*(byte * PTR32 *)&gen_args[2])[0x18] & 0xf) == 0) {
    uVar8 = 0;
LAB_00806edf: ;
    F_00577ad0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) + 0x6c))));
  }
  else {
    uVar8 = *((uint *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x1c)));
    if (uVar8 == 0) goto LAB_00806edf;
  }
  if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2a0))) = uVar1;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x298))) < (int)(*(uint *)(gen_frame + 0x8))) {
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x298))) = (*(uint *)(gen_frame + 0x8));
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x290))) != 0) {
      F_00406810(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x290))));
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x290))) = 0;
    }
    piVar2 = (int *)F_00404270();
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x298))) * 0x24,0x10)));
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x290))) = pvVar3;
    F_00c48350(pvVar3,0,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x298))) * 0x24);
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) < (int)uVar8) {
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) = uVar8;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x294))) != 0) {
      F_00406810(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x294))));
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x294))) = 0;
    }
    piVar2 = (int *)F_00404270();
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) * 0x24,0x10)));
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x294))) = pvVar3;
    F_00c48350(pvVar3,0,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) * 0x24);
  }
  bVar10 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2a0))) == 0;
  (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 1, 3),bVar10)));
  if (bVar10) {
    iVar4 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x290)));
  }
  else {
    iVar4 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x294)));
    (*(uint *)(gen_frame + 0x8)) = uVar8;
  }
  if (0 < (int)(*(uint *)(gen_frame + 0x8))) {
    puVar5 = (undefined4 *)(iVar4 + 0x1c);
    pbVar9 = pbVar9 + 0x3c;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x8));
    do {
      if ((*(byte *)((int)puVar5 + 6) & 1) == 0) {
        *(byte *)((int)puVar5 + 6) = *(byte *)((int)puVar5 + 6) | 1;
        *(undefined2 *)(puVar5 + 1) = 1;
      }
      if ((pbVar9[0x8bc] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar9 + 0x8c0);
      }
      *puVar5 = uVar1;
      if ((pbVar9[-4] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)pbVar9;
      }
      puVar5[-7] = uVar1;
      if ((pbVar9[0x13c] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar9 + 0x140);
      }
      puVar5[-5] = uVar1;
      if ((pbVar9[0x27c] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar9 + 0x280);
      }
      puVar5[-4] = uVar1;
      if ((pbVar9[0x3bc] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar9 + 0x3c0);
      }
      puVar5[-1] = uVar1;
      if ((pbVar9[0x4fc] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar9 + 0x500);
      }
      puVar5[-2] = uVar1;
      if ((pbVar9[0x77c] & 0xf) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(pbVar9 + 0x780);
      }
      puVar5[-3] = uVar8;
      puVar5[-6] = 0;
      if ((bVar10) && ((int)uVar8 < 0)) {
        cVar6 = '\x01';
      }
      else {
        cVar6 = '\0';
      }
      bVar7 = (cVar6 << 2 ^ *(byte *)((int)puVar5 + 6)) & 4 ^ *(byte *)((int)puVar5 + 6);
      *(byte *)((int)puVar5 + 6) = bVar7;
      if (bVar10) {
        puVar5[-3] = uVar8 & 0x7fffffff;
      }
      *(byte *)((int)puVar5 + 6) = ((char)(*(undefined * PTR32 *)&gen_args[0])[0x2a4] * '\x02' ^ bVar7) & 2 ^ bVar7;
      pbVar9 = pbVar9 + 8;
      puVar5 = puVar5 + 9;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
    } while ((*(uint *)(gen_frame + 0x4)) != 0);
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2a0))) == 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180)));
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184)));
  }
  uVar8 = ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2);
  if (uVar8 != (*(uint *)(gen_frame + 0x8))) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2);
    F_0058d980(piVar2,(*(uint *)(gen_frame + 0x8)));
  }
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0xf9] & 1) != 0) {
    uVar8 = F_0055dcb0();
    if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar8 + 0x14) + 0xcc))) != (*(undefined * PTR32 *)&gen_args[0])) {
      cVar6 = '\0';
      goto LAB_00807166;
    }
  }
  cVar6 = '\x01';
LAB_00807166: ;
  (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),cVar6);
  if (bVar10) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c)));
    if (piVar2 != (int *)0x0) {
      uVar8 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar8 + 0xc0);
    }
    F_0059d6a0((*(undefined * PTR32 *)&gen_args[0]),0x65,(*(uint *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x4)));
    if (cVar6 == '\0') {
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))));
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = uVar8;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + 0x70))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))));
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400)));
    if (piVar2 != (int *)0x0) {
      uVar8 = F_00561390();
      ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar8 + 0xc0);
    }
    F_0059d6a0((*(undefined * PTR32 *)&gen_args[0]),0x66,(*(uint *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x4)));
    if (cVar6 == '\0') {
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))));
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = uVar8;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) + 0x70))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))));
    if ((*(uint *)(gen_frame + 0x8)) != 0) {
      F_0059c780(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))));
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),(*(byte * PTR32 *)&gen_args[2]));
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),(uint)!bVar10);
  return 1;
}

/* ref: Client::UI2::AddonShop::vf2 */
uint F_00807260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x807260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  undefined1 AVar2;
  byte bVar3;
  short sVar4;
  uint * puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 * this_00;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0x17: ;
    if (param_2 == 0) {
      F_007a6520(this);
    }
    else {
      F_007a65b0(this);
    }
    break;
  default: ;
    goto switchD_0080729d_caseD_18;
  case 0x19: ;
    if (((undefined2 *)param_4[1] != (undefined2 *)0x0) && (-1 < param_4[2])) {
      *((undefined2 *)GEN_TOP((*(int *)(this + 0x290) + 0x20 + param_4[2] * 0x24))) = *(undefined2 *)param_4[1]
      ;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x6c))))(*(int * PTR32 *)(this + 0x180),param_4[2],0,0);
    }
    break;
  case 0x1f: ;
    F_00560760(&(*(int *)(gen_frame + 0x14)));
    iVar9 = param_4[2];
    (*(undefined1 *)(gen_frame + 0x1f)) = (char)param_4[2];
    if (param_2 == 2) {
      iVar1 = *(int *)(this + 0x290) + iVar9 * 0x24;
      (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x290) + 0x1c + iVar9 * 0x24)));
      iVar7 = *(int *)(iVar1 + 4);
      (*(undefined2 *)(gen_frame + 0x1c)) = *(undefined2 *)(iVar1 + 0x20);
      (*(undefined1 *)(gen_frame + 0x1e)) = 7;
    }
    else {
      iVar1 = *(int *)(this + 0x294);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar1 + 0x1c + iVar9 * 0x24);
      iVar7 = *(int *)(iVar1 + iVar9 * 0x24 + 4);
      (*(undefined1 *)(gen_frame + 0x1e)) = 6;
      (*(undefined2 *)(gen_frame + 0x1c)) = *(undefined2 *)(iVar1 + 0xc + iVar9 * 0x24);
    }
    (*(int *)(gen_frame + 0x14)) = iVar7;
    (*(uint *)(gen_frame + 0x24)) = (uint)(iVar7 != 0) * 2 + 4;
    if (*param_4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(*param_4 + 0x70);
    }
    AVar2 = this[0x13a];
    uVar6 = F_0055dcb0();
    F_00588780((undefined *)(uVar6 + 0xe0),(*(uint *)(gen_frame + 0x24)),(uint)(byte)AVar2,uVar8,&(*(int *)(gen_frame + 0x14)),0,0);
    goto switchD_0080729d_caseD_18;
  case 0x20: ;
    uVar6 = F_0055dcb0();
    F_00594d90((undefined *)(uVar6 + 0xe0),0);
    goto switchD_0080729d_caseD_18;
  case 0x21: ;
    (*(uint *)(gen_frame + 0x24)) = param_4[2];
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),3);
    (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x24));
    if (param_2 == 2) {
      sVar4 = *((short *)GEN_TOP((*(int *)(this + 0x290) + 0x20 + param_4[2] * 0x24)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),3);
      (*(uint *)(gen_frame + 0x5c)) = (int)sVar4;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x50)));
    }
    else {
      (*(uint *)(gen_frame + 0x24)) = (int)*((short *)GEN_TOP((*(int *)(this + 0x294) + 0x20 + param_4[2] * 0x24)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),3);
      (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x24));
      if (0 < param_4[2]) {
        iVar9 = param_4[2];
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x7c))))(*(int * PTR32 *)(this + 0x184));
        if ((int)(uVar6 - 1) <= iVar9) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x74))))(*(int * PTR32 *)(this + 0x184),iVar9 + -1,0);
        }
      }
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x50)));
    }
    break;
  case 0x30: ;
    puVar5 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_4 + 0x28))((int *)*param_4)));
    (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar5;
    uVar6 = *puVar5;
    (*(uint *)(gen_frame + 0x24)) = uVar6;
    if (((uVar6 < 4) || (uVar6 == 0x26)) || (0x30 < uVar6)) {
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x24));
      (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)(*(uint * PTR32 *)(gen_frame + 0x20))[1];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      bVar3 = *(byte *)((int)param_4 + 9);
      (*(uint * PTR32 *)(gen_frame + 0x34)) = (*(uint * PTR32 *)(gen_frame + 0x20));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
      (*(uint *)(gen_frame + 0x3c)) = (uint)bVar3;
      uVar6 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x38) + 4))))(*(int * PTR32 *)(uVar6 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x20,5,&(*(undefined4 *)(gen_frame + 0x28)))
      ;
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
      *(undefined1 *)(param_3 + 0x15) = 1;
      this_00 = &(*(undefined4 *)(gen_frame + 0x50));
      iVar9 = 4;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  F_00557670(param_3,0);
switchD_0080729d_caseD_18: ;
  puVar5 = &(*(uint *)(gen_frame + 0x68));
  iVar9 = 2;
  do {
    puVar5 = puVar5 + -2;
    uVar6 = F_005a2670(puVar5);
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar6;
}

/* ref: FUN_008075a0 */
uint F_008075a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8075a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x290) + param_1 * 0x24)));
  iVar1 = *(int *)((int)this + 0x290) + param_1 * 0x24;
  pvVar2 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 4));
  F_00584110(pvVar2,uVar5);
  F_005951c0(param_3,*(undefined4 *)(iVar1 + 0x18),0,0);
  iVar4 = (int)*(short *)(iVar1 + 0x20) * *(int *)(iVar1 + 8);
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  pvVar2 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 0xc));
  F_0057eb30(pvVar2,iVar4,uVar5,uVar6,uVar7,uVar8);
  F_0055a300(*(undefined * PTR32 *)(param_2 + 0x10),(uint)(*(byte *)(iVar1 + 0x22) >> 1 & 1));
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  pvVar2 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 0x14));
  F_0057eb30(pvVar2,uVar5,uVar6,uVar7,uVar8,uVar9);
  uVar3 = F_0055a300(*(undefined * PTR32 *)(param_2 + 8),(uint)(*(byte *)(iVar1 + 0x22) >> 2 & 1));
  if ((*(byte *)(iVar1 + 0x22) & 4) != 0) {
    if (((*(int *)(param_2 + 8) == 0) ||
        (pvVar2 = (undefined *)F_00559c20(*(int *)(param_2 + 8)), pvVar2 == (undefined *)0x0)) ||
       (uVar3 = F_005613a0(pvVar2), uVar3 != 8)) {
      pvVar2 = (undefined *)0x0;
    }
    F_0059cf90(pvVar2,(int)*(short *)(iVar1 + 0x20),0,0);
    uVar3 = F_0059d070(pvVar2,*(undefined4 *)(iVar1 + 0x10),0,0);
    return uVar3;
  }
  return uVar3;
}

/* ref: FUN_00807690 */
uint F_00807690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x807690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  int iVar5;
  undefined1 * puVar6;
  undefined4 uVar7;
  
  uVar2 = F_0055dcb0();
  pvVar3 = (undefined *)(uVar2 + 0xe0);
  F_00596b90(pvVar3,(uint)*(byte *)((int)this + 0x13a),1);
  uVar2 = param_1;
  if (-1 < (int)param_1) {
    iVar5 = param_1 * 0x30;
    F_00595190(*(undefined * PTR32 *)((int)this + 400),*(undefined4 *)(iVar5 + 0x564 + (int)this),0,0);
    F_0057eb30(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 400) + 0xbc))),
                 (uint)*(ushort *)((int)this + iVar5 + 0x572),0,0,0,0);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x198),*(undefined4 *)((int)this + iVar5 + 0x568));
    F_00560760(((undefined1 *)(gen_frame + 0x0)));
    bVar1 = *(byte *)((int)this + 0x13a);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + iVar5 + 0x560);
    (*(undefined2 *)(gen_frame + 0xa)) = 1;
    puVar6 = ((undefined1 *)(gen_frame + 0x0));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x38))))(*(int * PTR32 *)((int)this + 400));
    F_00590ad0(pvVar3,4,(uint)bVar1,uVar2,puVar6);
    if (*(ushort *)((int)this + iVar5 + 0x570) < *(ushort *)((int)this + iVar5 + 0x572)) {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x188) + 0x6c)));
      uVar7 = 7;
    }
    else {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x188) + 0x6c)));
      uVar7 = 0x11;
    }
    F_0059d670(pvVar4,uVar7);
    if (*(int *)((int)this + iVar5 + 0x578) != 0) {
      if (*(ushort *)((int)this + iVar5 + 0x588) < *(ushort *)((int)this + iVar5 + 0x58a)) {
        pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x6c)));
        uVar7 = 7;
      }
      else {
        pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x6c)));
        uVar7 = 0x11;
      }
      F_0059d670(pvVar4,uVar7);
      bVar1 = *(byte *)((int)this + 0x13a);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + iVar5 + 0x578);
      puVar6 = ((undefined1 *)(gen_frame + 0x0));
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x194) + 0x38))))(*(int * PTR32 *)((int)this + 0x194));
      F_00590ad0(pvVar3,4,(uint)bVar1,uVar2,puVar6);
      uVar7 = 0x66;
      pvVar3 = (undefined *)F_0055e2f0(this,9);
      F_0059d670(pvVar3,uVar7);
      F_00595190(*(undefined * PTR32 *)((int)this + 0x194),*(undefined4 *)((int)this + iVar5 + 0x57c),0,0);
      F_0057eb30(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x194) + 0xbc))),
                   (uint)*(ushort *)((int)this + iVar5 + 0x58a),0,0,0,0);
      uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x19c),*(undefined4 *)((int)this + iVar5 + 0x580))
      ;
      return uVar2;
    }
    uVar7 = 0x65;
    pvVar3 = (undefined *)F_0055e2f0(this,9);
    uVar2 = F_0059d670(pvVar3,uVar7);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonTalkSubtitle::vf44 */
byte F_00807870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x807870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  
  pvVar3 = (undefined *)F_0055e340(this,2);
  uVar2 = F_0055a020(pvVar3);
  *(uint *)(this + 0x1d4) = (uint)uVar2;
  F_00584110(pvVar3,"");
  F_0055a3c0(pvVar3,0);
  pvVar3 = (undefined *)F_0055e340(this,3);
  F_00584110(pvVar3,"");
  F_0055a3c0(pvVar3,0);
  pvVar3 = (undefined *)F_0055e340(this,4);
  F_00584110(pvVar3,"");
  F_0055a3c0(pvVar3,0);
  *(undefined4 *)(this + 0xa0) = 0;
  bVar1 = 0;
  if (param_2 != 0) {
    this[0x1d8] = (undefined1)0x1;
    bVar1 = F_007a74b0(this,param_1,param_2);
    this[0x1d8] = (undefined1)0x0;
  }
  return bVar1;
}

/* ref: Client::UI2::AddonTalkSubtitle::vf46 */
byte F_00807920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x807920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    bVar1 = F_007a74b0(this,param_1,param_2);
    return bVar1;
  }
  return 1;
}

/* ref: FUN_00807940 */
uint F_00807940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x807940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  byte bVar2;
  undefined1 * puVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  puVar3 = ((undefined1 *)GEN_TOP((*(uint *)((int)this + 0xf4) >> 0x14 & 0xf)));
  if ((puVar3 != &REFG(undefined, 0x5)) && (puVar3 != &REFG(undefined, 0x4))) {
    bVar2 = *(byte *)((int)this + 0xf9);
    puVar3 = (undefined1 *)(uint)bVar2;
    if (((bVar2 & 1) != 0) &&
       (((-0x400 < *param_2 || (-0x400 < param_2[1])) && (*(char *)((int)this + 0x265) == '\0')))) {
      if ((bVar2 & 0x10) != 0) {
        *(byte *)((int)this + 0xf9) = bVar2 & 0xef;
        return (uint)(bVar2 & 0xef);
      }
      uVar4 = F_0055dcb0();
      puVar3 = ((undefined1 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x14) + 0x74))))(*(int * PTR32 *)(uVar4 + 0x14))))
      ;
      if ((char)puVar3 != '\0') {
        uVar4 = F_0055dcb0();
        puVar3 = ((undefined1 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x14) + 0x78))))(*(int * PTR32 *)(uVar4 + 0x14))));
        if (puVar3 != this) {
          return (uint)puVar3;
        }
      }
      if ((*(byte *)((int)param_2 + 7) & 0x10) == 0) {
        cVar1 = (char)param_2[3];
        puVar3 = ((undefined1 *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)puVar3) >> 8),cVar1)));
        if (((cVar1 == '\0') || (cVar1 == '\x01')) &&
           (puVar3 = ((undefined1 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4))))(*(int * PTR32 *)(param_1 + 4)))),
           (char)puVar3 == '\x01')) {
          bVar2 = F_007a7f20(this);
          puVar3 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
          if (bVar2 == 1) {
            uVar4 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x37);
            puVar3 = (undefined1 *)F_005a2670(((undefined1 *)(gen_frame + 0x4)));
          }
        }
      }
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00807a30 */
uint F_00807a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x807a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
  if ((((uVar2 != 5) && (uVar2 != 4)) && (*(char *)((int)this + 0x265) == '\0')) &&
     ((*(byte *)((int)this + 0xf9) & 0x10) == 0)) {
    bVar1 = *(byte *)(param_2 + 1);
    uVar2 = (uint)bVar1;
    if ((bVar1 == 0) && ((*(byte *)(param_1 + 0x16) & 1) == 0)) {
      if (*param_2 == 1) {
        F_00557670(param_1,0);
        bVar1 = F_007a7f20(this);
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 == 1) {
          uVar2 = F_0055dcb0();
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x37);
          uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0xc)));
          return uVar2;
        }
      }
      else {
        uVar2 = *param_2 - 2;
        if (uVar2 < 2) {
          F_00557670(param_1,0);
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
          (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
          F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
          uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
          return uVar2;
        }
      }
    }
    else if ((bVar1 == 2) && (((*(byte *)(param_1 + 0x16) & 1) == 0 && (*param_2 == 0)))) {
      *(undefined4 *)((int)this + 0x25c) = 3;
      uVar2 = F_00557670(param_1,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00807b40 */
uint F_00807b40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x807b40u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  float fVar2;
  ushort uVar3;
  double dVar4;
  longlong lVar5;
  byte bVar6;
  char * pcVar7;
  uint uVar8;
  undefined * this;
  undefined3 extraout_var = 0;
  char * PTR32 * this_00;
  int iVar9;
  float10 fVar10;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  pcVar7 = (char *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c));
  (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar7;
  if (*(char *)((int)param_1 + 0x248) != '\x01') {
    pcVar7 = *(char * PTR32 *)((int)param_1 + 0x194);
    if (*pcVar7 != '\0') {
      if ((int)*(uint *)((int)param_1 + 0x254) < *(int *)((int)param_1 + 0x23c)) {
        F_0055ad30(*(undefined4 *)((int)param_1 + 0x184),*(uint *)((int)param_1 + 0x254) & 0xffff)
        ;
        F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x184),(uint)(*(int *)((int)param_1 + 0x254) != 0));
        F_0055aa30(*(undefined4 *)((int)param_1 + 0x184),*(undefined4 *)((int)param_1 + 0x188));
        *(int *)((int)param_1 + 0x254) =
             *(int *)((int)param_1 + 0x254) +
             *(int *)((int)param_1 + 0x25c) * *(int *)((int)param_1 + 600);
        iVar9 = *(int *)((int)param_1 + 0x254);
        (*(float *)(gen_frame + 0x14)) = gen_bits2f(iVar9);
        (*(float *)(gen_frame + 0x14)) = (float)iVar9;
        if ((float10)iVar9 < (float10)*(double *)&REFG(undefined, 0x1088070)) {
          fVar2 = ((float)GEN_TOF(((((float10)iVar9 * (float10)REFG(double, 0x1088108)) /
                           (float10)*(double *)&REFG(undefined, 0x1088070) + (float10)REFG(double, 0x1088108)) *
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
          (*(float *)(gen_frame + 0x14)) = fVar2;
          fVar10 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar2);
          (*(float *)(gen_frame + 0x14)) = (float)fVar10;
          (*(float *)(gen_frame + 0x14)) = (float)((float10)1 - (float10)(float)fVar10);
        }
        else {
          (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
        }
        fVar10 = (float10)(*(float *)(gen_frame + 0x14));
        (*(float *)(gen_frame + 0x14)) = (float)(fVar10 * (float10)*(double *)&REFG(undefined, 0x1094560));
        dVar4 = (double)(float)(fVar10 * (float10)*(double *)&REFG(undefined, 0x1094560));
        fVar10 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar4),
                              (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
        (*(float *)(gen_frame + 0x14)) = (float)fVar10;
        uVar8 = (uint)((double)(float)fVar10 + *(double *)&REFG(undefined, 0x10944e0));
        *(uint *)((int)param_1 + 600) = uVar8;
        *(undefined4 *)((int)param_1 + 0x260) = 0;
        F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return uVar8;
      }
      uVar8 = F_0042a990((int)param_1 + 0x194);
      F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x184),uVar8);
      F_0055ad30(*(undefined4 *)((int)param_1 + 0x184),0);
      F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x184),1);
      F_0055aa30(*(undefined4 *)((int)param_1 + 0x184),*(undefined4 *)((int)param_1 + 0x188));
      iVar9 = *(int *)((int)param_1 + 0x240);
      if (iVar9 != 0) {
        iVar9 = iVar9 + -1;
      }
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      uVar8 = F_0042a990((int)param_1 + 0x1e8);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
      (*(uint *)(gen_frame + 0x1c)) = uVar8;
      uVar3 = *(ushort *)((int)param_1 + 0x250);
      uVar8 = *(uint *)((int)param_1 + 0x268);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
      (*(uint *)(gen_frame + 0x24)) = (uint)uVar3 << 0x10 | uVar8;
      uVar8 = F_0055ab00(*(undefined4 *)((int)param_1 + 0x184));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(uint *)(gen_frame + 0x2c)) = uVar8;
      bVar6 = F_0055ab50(*(undefined4 *)((int)param_1 + 0x184));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      (*(uint *)(gen_frame + 0x34)) = (uint)bVar6;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),2);
      uVar8 = *(uint *)((int)param_1 + 0x260);
      (*(undefined1 *)(gen_frame + 0x3c)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
      (*(uint *)(gen_frame + 0x44)) = iVar9 << 0x10 | uVar8;
      uVar8 = F_0055dcb0();
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar8 + 0x38) + 4))))
                        (*(int * PTR32 *)(uVar8 + 0x38),&(*(longlong *)(gen_frame + 0xc)),0x2a,6,&(*(undefined4 *)(gen_frame + 0x18)));
      F_00596cd0((undefined *)((int)param_1 + 0x18c),uVar8);
      F_005a2670(&(*(longlong *)(gen_frame + 0xc)));
      (*(uint *)(gen_frame + 0x4)) = 0;
      F_0056c4c0((undefined *)((int)param_1 + 0x18c),5,&(*(uint *)(gen_frame + 0x4)));
      if (*((char *)GEN_TOP((-(uint)(((*(uint *)(gen_frame + 0x4)) & 0xf) != 0) & (*(uint *)(gen_frame + 0x8))))) == '1') {
        (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x14)) + 2)) = ((undefined2)0x27f);
        (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0))));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)) = ((undefined2)0x27f) | 0xc00;
        (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC((double)param_2 * *(double *)&REFG(undefined, 0x10912a8));
        lVar5 = (*(longlong *)(gen_frame + 0xc));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (int)(longlong)TRUNC((double)param_2 * *(double *)&REFG(undefined, 0x10912a8));
        *(int *)((int)param_1 + 0x260) = *(int *)((int)param_1 + 0x260) + (int)(*(longlong *)(gen_frame + 0xc));
        (*(longlong *)(gen_frame + 0xc)) = lVar5;
        if (0xfffe < *(uint *)((int)param_1 + 0x260)) {
          *(undefined4 *)((int)param_1 + 0x260) = 0xfffe;
        }
      }
      else if (*(int *)((int)param_1 + 0x260) == 0) {
        if (*(char *)((int)param_1 + 0x265) == '\0') {
          this = (undefined *)F_0055e2f0(param_1,4);
          F_0055a300(this,1);
          F_0059d640(this,0x66);
          *(undefined1 *)((int)param_1 + 0x280) = 0;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x248) = 1;
        }
      }
      else {
        F_007a7df0(param_1);
      }
      F_005a2670(&(*(uint *)(gen_frame + 0x4)));
      this_00 = &(*(char * PTR32 *)(gen_frame + 0x48));
      iVar9 = 5;
      do {
        this_00 = this_00 + -2;
        uVar8 = F_005a2670(this_00);
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
      F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar8;
    }
  }
  piVar1 = (int *)((int)param_1 + 0x244);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined1 *)((int)param_1 + 0x280) = 0;
    bVar6 = F_007a7f20(param_1);
    pcVar7 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar6)));
  }
  F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)pcVar7;
}

/* ref: FUN_00807eb0 */
unsigned int F_00807eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x807eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  float fVar2;
  int * piVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  float in_XMM7_Da = 0;
  
  if ((int)param_2 < 1) {
    if (param_1[0x28] == 0) {
      uVar4 = F_0055e2f0(param_1,0xf);
      if (uVar4 != 0) {
        piVar3 = (int *)F_00559c20(uVar4);
        if ((piVar3 == (int *)0x0) || (uVar4 = F_005613a0(piVar3), uVar4 != 2)) {
          piVar3 = (int *)0x0;
        }
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3);
        param_1[0x28] = uVar4;
      }
      *(byte *)((int)param_1 + 0xfa) = *(byte *)((int)param_1 + 0xfa) & 0xbf;
      param_1[0x9c] = 0;
      F_0055dda0(param_1,param_1[0x9d],GEN_TOF(gen_bits2f(param_1[0x9e])),GEN_TOF(gen_bits2f(param_1[0x9f])));
      F_00568210(param_1[0x24],(float)(float10)1,(float)(float10)1);
      F_005876a0(param_1,in_XMM7_Da);
      ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1);
    }
  }
  else if (param_1[0x28] != 0) {
    *(byte *)((int)param_1 + 0xfa) = *(byte *)((int)param_1 + 0xfa) | 0x40;
    param_1[0x28] = 0;
    piVar3 = (int *)F_0055dd80(param_1);
    if (piVar3 != (int *)0x0) {
      param_1[0x9d] = *piVar3;
      param_1[0x9e] = piVar3[1];
      param_1[0x9f] = piVar3[2];
    }
  }
  if (0 < (int)param_2) {
    uVar4 = F_0055dcb0();
    fVar2 = REFG(float, 0x1094834);
    fVar6 = (float10)*(int *)(uVar4 + 0x238);
    if (*(int *)(uVar4 + 0x238) < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar1 = ((float)GEN_TOF(((float10)(int)(((param_2 & 0x7fffffff) + param_3) * 100) / fVar6)));
    bVar5 = GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(param_1[0x9c])))) || GEN_ISNAN((float10)fVar1);
    if (bVar5 == (bVar5 || ((float10)GEN_TOD(gen_bits2f(param_1[0x9c]))) == (float10)fVar1)) {
      param_1[0x9c] = (int)gen_fl2bits(fVar1);
      F_0055dda0(param_1,7,fVar2,fVar1);
      F_00568210(param_1[0x24],(float)(float10)1,(float)(float10)1);
      F_005876a0(param_1,in_XMM7_Da);
      ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1);
      return 0;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonHowTo::vf38 */
uint F_00808060(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x808060u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0xf9) & 1) == 0) goto LAB_00808151;
  iVar3 = 0;
  bVar1 = F_0056c7e0();
  if ((bVar1 != 0) &&
     ((uVar2 = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)))) {
    uVar2 = F_0055dcb0();
    iVar3 = (*((int *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) != param_1) + 1;
  }
  if (*(int *)(param_1 + 0x1a0) == iVar3) goto LAB_00808151;
  F_0059d670(*(undefined * PTR32 *)(param_1 + 0x1a8),0x66 - (uint)(iVar3 != 0));
  F_00563db0(*(undefined4 *)(param_1 + 0x1a4),1);
  if (iVar3 == 1) {
    if (*(char *)(param_1 + 0x1ac) == '\x01') {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x184) != 0) {
        uVar4 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x184) + 0x70)));
      }
      uVar2 = F_0055a2d0(uVar4);
      if ((char)uVar2 != '\0') {
        uVar2 = F_0055dcb0();
        uVar4 = 0x34b;
        goto LAB_00808132;
      }
    }
    uVar2 = F_0055dcb0();
    uVar4 = 0x34a;
LAB_00808132: ;
    uVar2 = F_0056c6b0(*(undefined4 *)(uVar2 + 0x30),uVar4,0);
    F_0058bba0(*(undefined * PTR32 *)(param_1 + 0x1a4),uVar2);
  }
  else if (iVar3 == 2) {
    uVar2 = F_0055dcb0();
    uVar4 = 0x18a8a;
    goto LAB_00808132;
  }
  *(int *)(param_1 + 0x1a0) = iVar3;
LAB_00808151: ;
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: FUN_008080e3 */
uint F_008080e3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8080e3u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  uVar1 = F_0056c6b0(*(undefined4 *)(uVar1 + 0x30),0x18a8a,0);
  F_0058bba0(*(undefined * PTR32 *)(in_esi + 0x1a4),uVar1);
  *(undefined4 *)(in_esi + 0x1a0) = in_edi;
  uVar1 = F_005a2370(in_esi,*(float *)(in_ebp + 8));
  return uVar1;
}

/* ref: Client::UI2::AddonHowTo::vf52 */
byte F_00808170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x808170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  if (*param_1 == 9) {
    uVar1 = 0;
    if (*(int *)(this + 0x184) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if ((char)uVar2 != '\0') {
      F_0059f6f0(*(undefined * PTR32 *)(this + 0x184),-(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x184) + 0xc2))),1
                  );
    }
  }
  else {
    if (*param_1 != 10) {
      return 0;
    }
    uVar1 = 0;
    if (*(int *)(this + 0x184) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if ((char)uVar2 != '\0') {
      F_0059f6f0(*(undefined * PTR32 *)(this + 0x184),(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x184) + 0xc2))),1)
      ;
      return 1;
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonHowTo::vf60 */
byte F_00808200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x808200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  
  if (param_1 == 0xf) {
    if (*(ushort *)(this + 0x19c) < 2) {
      return 1;
    }
    uVar1 = 0;
    if (*(int *)(this + 0x198) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if ((char)uVar2 == '\0') {
      return 1;
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
    this_00 = ((undefined1 *)(gen_frame + 0x4));
  }
  else {
    if (param_1 != 0x10) {
      return 0;
    }
    if (*(ushort *)(this + 0x19c) < 2) {
      return 1;
    }
    uVar1 = 0;
    if (*(int *)(this + 0x194) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x194) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if ((char)uVar2 == '\0') {
      return 1;
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x18)) = 1;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
    this_00 = ((undefined1 *)(gen_frame + 0xc));
  }
  F_005a2670(this_00);
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return 1;
}

/* ref: Client::UI2::AddonChatLog::vf51 */
uint F_008082f0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x8082f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  code * pcVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  float10 fVar9;
  undefined4 uVar10;
  
  uVar8 = (uint)((double)param_2 + REFG(double, 0x1088108));
  dVar2 = REFG(double, 0x1088108) + (double)param_3;
  if ((int)uVar8 < 0xba) {
    uVar8 = 0xba;
  }
  uVar5 = F_0055dcb0();
  dVar3 = (double)*(int *)(uVar5 + 0x234);
  if (*(int *)(uVar5 + 0x234) < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar5 = (int)TRUNC(dVar3 * *(double *)&REFG(undefined, 0x1090b18)) & 0xffff;
  if ((int)uVar5 < (int)uVar8) {
    uVar8 = uVar5;
  }
  uVar5 = (int)dVar2;
  if ((int)dVar2 < (int)(uint)*(ushort *)(param_1 + 0x7a)) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x7a);
  }
  uVar6 = F_0055dcb0();
  dVar2 = (double)*(int *)(uVar6 + 0x238);
  if (*(int *)(uVar6 + 0x238) < 0) {
    dVar2 = dVar2 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar2 = dVar2 * *(double *)&REFG(undefined, 0x1090b18);
  *(short *)(param_1 + 0x7b) = (short)uVar8;
  uVar6 = (int)TRUNC(dVar2) & 0xffff;
  if ((int)uVar6 < (int)uVar5) {
    uVar5 = uVar6;
  }
  pcVar1 = *(gen_code32 *)(*param_1 + 0x4c);
  *(short *)((int)param_1 + 0x1ee) = (short)uVar5;
  (*pcVar1)(param_1,uVar8,uVar5);
  uVar7 = 0;
  if (param_1[0x67] != 0) {
    uVar7 = *(undefined4 *)(param_1[0x67] + 0x70);
  }
  uVar10 = 0;
  uVar4 = F_0055a030(uVar7);
  F_005810f0(param_1 + 0x87,uVar8,(uint)(ushort)((short)uVar5 - uVar4),uVar10);
  uVar7 = 0;
  if (param_1[0x67] != 0) {
    uVar7 = *(undefined4 *)(param_1[0x67] + 0x70);
  }
  uVar4 = F_0055a030(uVar7);
  uVar7 = 0;
  if (param_1[0x67] != 0) {
    uVar7 = *(undefined4 *)(param_1[0x67] + 0x70);
  }
  fVar9 = F_00559d60(uVar7);
  uVar7 = 0;
  if (param_1[0x67] != 0) {
    uVar7 = *(undefined4 *)(param_1[0x67] + 0x70);
  }
  uVar8 = F_0057f4c0(uVar7,(uint)(ushort)(((short)uVar8 - (short)param_1[0x68]) -
                                           (short)(int)fVar9),(uint)uVar4);
  return uVar8;
}

/* ref: FUN_00808460 */
uint F_00808460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x808460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  uint uVar2;
  undefined4 in_ecx;
  
  if (*(int *)((int)this + 0x19c) == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + 0x70)));
  }
  uVar1 = F_0055a030(in_ecx);
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x4c))
                    (param_1,(uint)*(ushort *)((int)this + 0x1ec),
                     (uint)(ushort)(*(short *)((int)this + 0x1ee) - uVar1));
  return uVar2;
}

/* ref: FUN_008084b0 */
ushort F_008084b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8084b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_ecx_00;
  int * piVar4;
  int iVar5;
  
  sVar1 = 0;
  piVar4 = (int *)(in_ecx + 0x1a4);
  iVar5 = 5;
  do {
    if (*piVar4 != 0) {
      uVar3 = F_0055a350(*(undefined4 *)(*piVar4 + 0x70));
      if ((char)uVar3 != '\0') {
        in_ecx_00 = 0;
        if (*piVar4 != 0) {
          in_ecx_00 = *(undefined4 *)(*piVar4 + 0x70);
        }
        uVar2 = F_0055a020(in_ecx_00);
        sVar1 = sVar1 + uVar2;
      }
    }
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return sVar1 + 1;
}

/* ref: FUN_00808500 */
byte F_00808500(unsigned int gen_a0)
{
  GEN_ENTER(0x808500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  byte bVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  bVar1 = F_0055de10(this,uVar2);
  if (bVar1 != 0) {
    return 1;
  }
  iVar3 = 0;
  piVar4 = (int *)((int)this + 0x1a4);
  do {
    uVar2 = F_00581060((undefined *)((int)this + 0x21c),**(int * PTR32 *)(*piVar4 + 0x110) + 1);
    if (uVar2 != 0) {
      in_ecx = *(int *)(uVar2 + 4);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      bVar1 = F_0055de10(in_ecx,uVar2);
      if ((bVar1 != 0) || (*(char *)(in_ecx + 0x261) != '\0')) {
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
    if (4 < iVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_008085a0 */
uint F_008085a0(unsigned int gen_a0)
{
  GEN_ENTER(0x8085a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  ushort uVar3;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    bVar5 = 1;
    if (*(char *)((int)this + 0x25c) != '\0') {
      bVar5 = 5;
    }
    iVar2 = *(int *)((int)this + 0x19c);
    if ((iVar2 == 0) || (*(char *)(iVar2 + 0x84) == '\0')) {
      cVar1 = *(char *)((int)this + 0x1cc);
      in_EAX = CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
      if ((-1 < cVar1) && (in_EAX = F_007a8b00(this,(int)cVar1), in_EAX != 0)) {
        if (*(int *)(in_EAX + 0x264) < 0) {
          if (*(char *)((int)this + 0x1cc) < '\x02') {
            bVar5 = (bVar5 != 1) + 7;
          }
        }
        else {
          bVar5 = (*(char *)((int)this + 0x25c) != '\0') * '\x02' + 4;
        }
      }
    }
    else {
      in_EAX = F_0055a2d0(*(undefined4 *)(iVar2 + 0x300));
      bVar5 = ((char)in_EAX != '\0') + 2;
    }
    if (bVar5 != *(byte *)((int)this + 600)) {
      *(byte *)((int)this + 600) = bVar5;
      F_0056b780(this,0);
      in_EAX = bVar5 - 1;
      switch((unsigned int)(uintptr_t)(in_EAX)) {
      case 0: ;
        F_0056b630(this,0x18aa9,6,0,3,0,0);
        uVar4 = F_007a8bc0(this);
        return uVar4;
      case 1: ;
        uVar6 = 0x18aac;
        break;
      case 2: ;
        uVar6 = 0x18aad;
        break;
      case 3: ;
        F_0056b630(this,0x18aaa,6,0,3,0,0);
        uVar4 = F_007a8bc0(this);
        return uVar4;
      case 4: ;
        uVar6 = 0;
        uVar3 = F_008084b0(this);
        F_0056b630(this,0x18aec,6,0,4,(uint)(ushort)((uVar3 >> 1) + *(short *)((int)this + 0x214))
                     ,uVar6);
        uVar4 = F_007a8bc0(this);
        return uVar4;
      case 5: ;
        uVar6 = 0;
        uVar3 = F_008084b0(this);
        F_0056b630(this,0x18aab,6,0,4,(uint)(ushort)((uVar3 >> 1) + *(short *)((int)this + 0x214))
                     ,uVar6);
        uVar4 = F_007a8bc0(this);
        return uVar4;
      case 6: ;
        F_0056b630(this,0x18af3,6,0,3,0,0);
        uVar4 = F_007a8bc0(this);
        return uVar4;
      case 7: ;
        uVar6 = 0;
        uVar3 = F_008084b0(this);
        F_0056b630(this,0x18af4,6,0,4,(uint)(ushort)((uVar3 >> 1) + *(short *)((int)this + 0x214))
                     ,uVar6);
        uVar4 = F_007a8bc0(this);
        return uVar4;
      default: ;
        goto switchD_0080864c_default;
      }
      F_0056b630(this,uVar6,6,0,3,0,0);
      F_0056b780(this,1);
      bVar5 = F_0056b780(this,2);
      in_EAX = CONCAT31(extraout_var,bVar5);
    }
  }
switchD_0080864c_default: ;
  return in_EAX;
}

/* ref: Client::UI2::AddonChatLogPanel::vf37 */
uint F_008087b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8087b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x16,0x3e9,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar1,6,0x3ec,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar1,7,0x3ed,this,0);
  }
  F_005a92d0(this,1,0,0);
  F_005a92d0(this,1,1,0);
  F_005a92d0(this,0,0,0);
  if (*(undefined * PTR32 *)(this + 0x188) != (undefined *)0x0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x188),0x12,0x3ef,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x188),9,0x3f0,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x188),6,0x3f1,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x188),7,0x3f3,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x188),8,0x3f1,this,0);
  }
  if (*(undefined * PTR32 *)(this + 0x198) != (undefined *)0x0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x198),0x42,0,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x198),0x43,0,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x198),0x44,0,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x198),0xf,0,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x198),0x12,0,this,0);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonChatLogPanel::vf5 */
uint F_00808910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x808910u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  double dVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint in_ecx;
  uint uVar6;
  uint in_ecx_00;
  undefined * this;
  undefined2 extraout_var = 0;
  float10 fVar7;
  
  uVar5 = F_005a89b0((*(int * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]),1);
  if ((*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xf9))) & 1) != 0) {
    uVar5 = F_0055e2f0((*(int * PTR32 *)&gen_args[0]),4);
    in_ecx = F_0055e2f0((*(int * PTR32 *)&gen_args[0]),5);
    uVar6 = F_0055e2f0((*(int * PTR32 *)&gen_args[0]),7);
    in_ecx_00 = F_0055e2f0((*(int * PTR32 *)&gen_args[0]),8);
    uVar3 = F_0055a020(uVar5);
    fVar7 = F_00559d60(uVar5);
    F_00559e70(in_ecx,(float)(fVar7 + (float10)uVar3));
    uVar3 = F_0055a020(in_ecx);
    F_0055a060(uVar6,(uint)uVar3);
    uVar3 = F_0055a020(in_ecx);
    uVar5 = (uint)uVar3;
    uVar6 = F_0055e2f0((*(int * PTR32 *)&gen_args[0]),6);
    F_0055a060(uVar6,uVar5);
    uVar3 = F_0055a020(in_ecx);
    fVar7 = F_00559d60(in_ecx);
    F_00559e70(in_ecx_00,(float)(fVar7 + (float10)uVar3));
    gen_piece_set(&(*(uint *)&gen_args[1]), 1, 3, (unsigned long long)((undefined3)((uint)gen_fl2bits((float)(fVar7 + (float10)uVar3)) >> 8)));
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xfb))) >> 1) & 0xffffff01;
    if ((*(int * PTR32 *)&gen_args[0])[0x61] == 0) {
      this = (undefined *)0x0;
    }
    else {
      this = *((undefined * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[0x61] + 0x70)));
    }
    F_0055a300(this,(*(uint *)&gen_args[1]));
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x61])) + 0x28))))
              (((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x61])),(uint)(*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xfb))) >> 1 & 1));
    bVar2 = false;
    if ((*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xfb))) & 2) == 0) {
      uVar5 = F_00561490(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x65])),4);
      (*(int * PTR32 *)&gen_args[0])[0x25] = uVar5;
      (*(int * PTR32 *)&gen_args[0])[0x27] = 0;
      if ((*(int * PTR32 *)&gen_args[0])[0x3f] != 0) {
        bVar2 = true;
        (*(int * PTR32 *)&gen_args[0])[0x3f] = 0;
      }
    }
    else {
      (*(int * PTR32 *)&gen_args[0])[0x25] = (*(int * PTR32 *)&gen_args[0])[0x62];
      (*(int * PTR32 *)&gen_args[0])[0x27] = (*(int * PTR32 *)&gen_args[0])[99];
      (*(int * PTR32 *)&gen_args[0])[0x3f] = 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x48))))((*(int * PTR32 *)&gen_args[0]),&(*(uint *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x14)),0);
    if ((ushort)(*(uint *)(gen_frame + 0x18)) < 0xba) {
      (*(uint *)(gen_frame + 0x18)) = 0xba;
    }
    uVar5 = F_0055dcb0();
    dVar1 = (double)*(int *)(uVar5 + 0x234);
    if (*(int *)(uVar5 + 0x234) < 0) {
      dVar1 = dVar1 + (double)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(ushort *)(gen_frame + 0xc)) = (ushort)(int)TRUNC(dVar1 * *(double *)&REFG(undefined, 0x1090b18));
    if ((*(ushort *)(gen_frame + 0xc)) < (ushort)(*(uint *)(gen_frame + 0x18))) {
      (*(uint *)(gen_frame + 0x18)) = (int)TRUNC(dVar1 * *(double *)&REFG(undefined, 0x1090b18)) & 0xffff;
    }
    if ((ushort)(*(uint *)(gen_frame + 0x14)) < 0xba) {
      (*(uint *)(gen_frame + 0x14)) = 0xba;
    }
    uVar5 = F_0055dcb0();
    dVar1 = (double)*(int *)(uVar5 + 0x238);
    if (*(int *)(uVar5 + 0x238) < 0) {
      dVar1 = dVar1 + (double)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(ushort *)(gen_frame + 0xc)) = (ushort)(int)TRUNC(dVar1 * *(double *)&REFG(undefined, 0x1090b18));
    if ((*(ushort *)(gen_frame + 0xc)) < (ushort)(*(uint *)(gen_frame + 0x14))) {
      (*(uint *)(gen_frame + 0x14)) = (int)TRUNC(dVar1 * *(double *)&REFG(undefined, 0x1090b18)) & 0xffff;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x4c))))((*(int * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x14)));
    if (bVar2) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x7c))))((*(int * PTR32 *)&gen_args[0]),1);
    }
    uVar3 = F_00559d70(in_ecx_00);
    uVar4 = F_0055a020(in_ecx_00);
    uVar3 = F_0055a060((*(int * PTR32 *)&gen_args[0])[99],(uint)(ushort)(uVar3 + uVar4));
    uVar5 = CONCAT22(extraout_var,uVar3);
  }
  return uVar5;
}

/* ref: FUN_00808ba0 */
uint F_00808ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x808ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  ushort uVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)));
  uVar7 = (*(short *)((int)this + 0x29a) - param_2[1]) + *(short *)((int)this + 0x296);
  uVar5 = (*(short *)((int)this + 0x294) - *(short *)((int)this + 0x298)) + *param_2;
  uVar8 = (uint)uVar7;
  (*(uint *)(gen_frame + 0x4)) = uVar8;
  uVar3 = F_0055dcb0();
  uVar4 = (uint)(ushort)(*(short *)(uVar3 + 0x234) - (short)(*(undefined4 *)(gen_frame + 0x0)));
  uVar3 = (uint)uVar5;
  if ((int)uVar4 < (int)(short)uVar5) {
    uVar3 = uVar4;
  }
  uVar4 = F_0055dcb0();
  dVar2 = (double)*(int *)(uVar4 + 0x234);
  if (*(int *)(uVar4 + 0x234) < 0) {
    dVar2 = dVar2 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar4 = (int)TRUNC(dVar2 * *(double *)&REFG(undefined, 0x1090b18)) & 0xffff;
  if ((int)uVar4 < (int)(short)uVar3) {
    uVar3 = uVar4;
  }
  if ((short)uVar3 < 0xba) {
    uVar3 = 0xba;
  }
  if ((short)uVar7 < 0xba) {
    uVar8 = 0xba;
    (*(uint *)(gen_frame + 0x4)) = 0xba;
  }
  uVar4 = F_0055dcb0();
  dVar2 = (double)*(int *)(uVar4 + 0x238);
  if (*(int *)(uVar4 + 0x238) < 0) {
    dVar2 = dVar2 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar4 = (int)TRUNC(dVar2 * *(double *)&REFG(undefined, 0x1090b18)) & 0xffff;
  if ((int)uVar4 < (int)(short)uVar8) {
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    uVar8 = uVar4;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x2c))
            (this,(*(undefined4 *)(gen_frame + 0x0)),
             (uint)(ushort)((*(short *)((int)this + 0x292) - (short)uVar8) +
                           *(short *)((int)this + 0x296)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,uVar3,uVar8);
  uVar8 = F_0055e2f0(this,8);
  uVar5 = F_00559d70(uVar8);
  uVar7 = F_0055a020(uVar8);
  F_0055a060(*(undefined4 *)((int)this + 0x18c),(uint)(ushort)(uVar5 + uVar7));
  uVar6 = 0;
  if (*(int *)((int)this + 0x194) != 0) {
    uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x194) + 0x70)));
  }
  F_0057f4c0(uVar6,(uint)(ushort)(((short)uVar3 - *(short *)((int)this + 0x288)) -
                                   *(short *)((int)this + 0x280)),
               (uint)(ushort)(((short)(*(uint *)(gen_frame + 0x4)) - *(short *)((int)this + 0x28c)) -
                             *(short *)((int)this + 0x284)));
  this_00 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x194),5);
  F_0055a040(this_00,uVar3,(uint)(ushort)((short)(*(uint *)(gen_frame + 0x4)) - *(short *)((int)this + 0x2a2)));
  uVar5 = F_00559d90(this_00);
  sVar1 = *(short *)((int)this + 0x2a6);
  uVar7 = F_00559d70(this_00);
  if (*(int *)((int)this + 0x184) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x184) + 0x70)));
  }
  uVar8 = F_00559da0(uVar6,(float)(int)(short)(uVar7 + ((short)uVar3 -
                                                         *(short *)((int)this + 0x2a4))),
                       (float)(int)(short)(uVar5 + sVar1));
  return uVar8;
}

/* ref: FUN_00808df0 */
uint F_00808df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x808df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  short sVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  iVar1 = *(int *)((int)this + 0x184);
  *(undefined1 *)((int)this + 0x29c) = 0;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar1 + 0x70);
  }
  (*(uint *)(gen_frame + 0x20)) = (int)*(float *)(iVar6 + 0x30) & 0xffff;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar1 + 0x70);
  }
  sVar2 = (short)(int)*(float *)(iVar6 + 0x34);
  pvVar3 = (undefined *)0x0;
  if (iVar1 != 0) {
    pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_0055a000(pvVar3,((ushort *)(gen_frame + 0x28)),((ushort *)(gen_frame + 0x24)));
  if ((((*param_2 < (short)(*(uint *)(gen_frame + 0x20))) ||
       ((int)((uint)((ushort *)(gen_frame + 0x28))[0] + (int)(short)(*(uint *)(gen_frame + 0x20))) < (int)*param_2)) || (param_2[1] < sVar2)) ||
     ((int)((uint)((ushort *)(gen_frame + 0x24))[0] + (int)sVar2) < (int)param_2[1])) {
    F_00557640(((undefined1 *)(gen_frame + 0x0)),7);
    puVar9 = ((undefined1 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)param_2;
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + 2);
    pvVar3 = (undefined *)F_0055dcb0();
    F_00599f80(pvVar3,puVar9);
    uVar4 = F_0055dcb0();
    *(undefined1 *)(uVar4 + 0x21b) = 0;
    uVar4 = F_0055dcb0();
    F_005aa060((undefined *)(uVar4 + 0x20c),0,0);
  }
  uVar8 = 0x3ea;
  uVar7 = 5;
  pvVar3 = this;
  pvVar5 = (undefined *)F_0055dcb0();
  F_00586850(pvVar5,uVar7,uVar8,pvVar3);
  uVar8 = 0x3eb;
  uVar7 = 4;
  pvVar3 = this;
  pvVar5 = (undefined *)F_0055dcb0();
  F_00586850(pvVar5,uVar7,uVar8,pvVar3);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,1);
  return uVar4;
}

/* ref: Client::UI2::AddonChatLogPanel::vf54 */
uint F_00808f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x808f10u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  short sVar2;
  double dVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined * this_00;
  undefined4 uVar9;
  bool bVar10;
  
  uVar8 = (*(uint *)&gen_args[2]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x10)));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x18)),0);
  dVar3 = (double)(*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(uint *)(gen_frame + 0xc)) = ((undefined2)0x27f) | 0xc00;
  uVar1 = (uint)TRUNC(dVar3 * *(double *)&REFG(undefined, 0x1090b18));
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar1 = (*(uint *)(gen_frame + 0xc));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (ushort)uVar1;
  bVar10 = (ushort)(*(uint *)(gen_frame + 0x14)) <= (ushort)(*(uint *)(gen_frame + 0xc));
  if (!bVar10) {
    (*(uint *)(gen_frame + 0x14)) = uVar1 & 0xffff;
  }
  uVar4 = (*(uint *)(gen_frame + 0x14));
  dVar3 = (double)(int)(*(uint *)&gen_args[2]);
  if ((int)(*(uint *)&gen_args[2]) < 0) {
    dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(undefined2 *)((char *)&(*(uint *)&gen_args[2]) + 0)) = (ushort)(int)TRUNC(dVar3 * *(double *)&REFG(undefined, 0x1090b18));
  uVar7 = (int)TRUNC(dVar3 * *(double *)&REFG(undefined, 0x1090b18)) & 0xffff;
  if ((ushort)(*(uint *)&gen_args[2]) < (ushort)(*(uint *)(gen_frame + 0x18))) {
    (*(uint *)(gen_frame + 0x18)) = uVar7;
    if ((short)(*(uint *)(gen_frame + 0x10)) < 0) {
      (*(uint *)(gen_frame + 0x10)) = 0;
    }
    if (uVar8 < ((*(uint *)(gen_frame + 0x10)) + uVar7 & 0xffff)) {
      (*(uint *)(gen_frame + 0x10)) = uVar8 - uVar7 & 0xffff;
    }
  }
  else if (bVar10) {
    return uVar7;
  }
  uVar7 = (*(uint *)(gen_frame + 0x14)) & 0xffff;
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar8 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),8);
  uVar5 = F_00559d70(uVar8);
  uVar6 = F_0055a020(uVar8);
  if ((int)(short)uVar4 < (int)((uint)uVar6 + (int)(short)uVar5)) {
    uVar5 = F_00559d70(uVar8);
    uVar6 = F_0055a020(uVar8);
    uVar7 = (uint)(ushort)(uVar5 + uVar6);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0]),uVar7,(*(uint *)(gen_frame + 0x18)));
  uVar9 = 0;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))) != 0) {
    uVar9 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))) + 0x70)));
  }
  F_0057f4c0(uVar9,(uint)(ushort)(((short)(*(uint *)(gen_frame + 0x14)) - *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x288)))) -
                                   *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x280)))),
               (uint)(ushort)(((ushort)(*(uint *)(gen_frame + 0x18)) - *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x28c)))) -
                             *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x284)))));
  this_00 = (undefined *)F_00561490(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),5);
  F_0055a040(this_00,(*(uint *)(gen_frame + 0x14)),(uint)(ushort)((ushort)(*(uint *)(gen_frame + 0x18)) - *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2a2)))));
  uVar5 = F_00559d90(this_00);
  sVar2 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2a6)));
  uVar6 = F_00559d70(this_00);
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) + 0x70)));
  }
  uVar8 = F_00559da0(uVar9,(float)(int)(short)(uVar6 + ((short)(*(uint *)(gen_frame + 0x14)) - *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2a4))))
                                                ),(float)(int)(short)(uVar5 + sVar2));
  return uVar8;
}

/* ref: FUN_00809130 */
uint F_00809130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x809130u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x194))) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x194))) + 0x70)));
  }
  F_0057f4c0(uVar3,(uint)(ushort)(((ushort)(*(undefined4 *)&gen_args[1]) - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x288)))) -
                                   *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x280)))),
               (uint)(ushort)(((short)(*(undefined4 *)&gen_args[2]) - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28c)))) -
                             *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x284)))));
  uVar2 = F_00561490(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x194))),5);
  fVar4 = F_00559d80(uVar2);
  sVar1 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a6)));
  fVar5 = F_00559d60(uVar2);
  uVar2 = (uint)(ushort)(*(undefined4 *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184))) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184))) + 0x70)));
  }
  (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = (ushort)(int)((float10)(int)sVar1 + fVar4);
  uVar2 = F_00559da0(uVar3,(float)(int)(short)(int)(((float10)uVar2 + fVar5) -
                                                     (float10)(int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a4)))),
                       (float)(int)(short)(ushort)(*(undefined4 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_00809220 */
uint F_00809220(unsigned int gen_a0)
{
  GEN_ENTER(0x809220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc804));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x330);
  iVar2 = 100;
  do {
    puVar1[-100] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  iVar2 = (int)this + 0x4d0;
  local_8 = 99;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined2 *)((int)this + 0x2604) = 0;
  *(undefined4 *)((int)this + 0x2608) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonMacro::vf37 */
uint F_008092d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8092d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined * local_8;
  
  *(undefined4 *)(this + 0x4c0) = 0;
  if (*(int *)(this + 0x4c4) != 0) {
    local_8 = this + 0x330;
    iVar5 = 3;
    do {
      iVar2 = *(int *)local_8;
      if (iVar2 != 0) {
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x84) + 0x14))))(iVar2 + 0x84)));
        if (pvVar3 != (undefined *)0x0) {
          F_005840a0(pvVar3,0x11,iVar5,this,0);
          F_005840a0(pvVar3,4,iVar5,this,0);
        }
        F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x34,iVar5,this,0);
        F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x2d,iVar5,this,0);
        F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x32,iVar5,this,0);
        F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x33,iVar5,this,0);
      }
      local_8 = local_8 + 4;
      uVar4 = iVar5 - 2;
      iVar5 = iVar5 + 1;
    } while (uVar4 < *(uint *)(this + 0x4c4));
  }
  if ((*(int *)(this + 0x188) != 0) &&
     (pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x98))), pvVar3 != (undefined *)0x0)) {
    F_005840a0(pvVar3,0x11,0x6d,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x98))),0x12,0x6d,this,0);
  }
  iVar5 = *(int *)(this + 0x18c);
  if (((iVar5 != 0) && (*(undefined * PTR32 *)(iVar5 + 0x98) != (undefined *)0x0)) && (*(int *)(iVar5 + 0x68) != 0))
  {
    F_005840a0(*(undefined * PTR32 *)(iVar5 + 0x98),0x11,0x6e,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x98))),0x12,0x6e,this,0);
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x68)));
    F_005840a0(pvVar3,0x31,0x6e,this,0);
    F_005840a0(pvVar3,0x30,0x6e,this,0);
  }
  if ((*(int *)(this + 400) != 0) && (*(undefined * PTR32 *)(this + 0x194) != (undefined *)0x0)) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x194),9,0x68,this,0);
  }
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0x6f,this,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0x70,this,0);
  }
  AVar1 = this[0x13a];
  uVar4 = F_0055dcb0();
  F_00596b90((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,1);
  uVar4 = F_005b0510((undefined *)this);
  return uVar4;
}

/* ref: Client::UI2::AddonMacro::vf46 */
byte F_008094a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8094a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined * this_01;
  undefined4 uVar5;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      (*(int *)(gen_frame + 0x18)) = 0;
    }
    else {
      (*(int *)(gen_frame + 0x18)) = *(int *)(param_2 + 0x14);
    }
    this_00 = *(undefined * PTR32 *)(this + (*(int *)(gen_frame + 0x18)) * 4 + 0x330);
    if (this_00 != (undefined *)0x0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this_00 + 0x84) + 0x28))))((int)this_00 + 0x84);
      if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0x2c);
      }
      F_00595560(this_00,uVar3);
      if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0x34);
      }
      F_0042e430((undefined *)(uVar2 + 0x10),uVar3);
      *(int *)(uVar2 + 0xc) = param_2 + 0x38;
      *(uint *)(uVar2 + 4) = (uint)*(ushort *)((int)this_00 + 0x9c);
      *(undefined4 *)((int)this_00 + 0x98) = 0x20;
      *(uint *)(uVar2 + 100) = (uint)(byte)this[(*(int *)(gen_frame + 0x18)) + 0x25a0];
      F_007a9300(this,this_00,uVar2);
      this[(*(int *)(gen_frame + 0x18)) + 0x25a0] = *(undefined *)(uVar2 + 100);
      *(undefined4 *)(uVar2 + 0xc) = 0;
      if (((*(byte *)(uVar2 + 100) & 1) != 0) &&
         (uVar4 = F_00562ff0(this_00), uVar4 == 0xffffffff)) {
        F_00595560(this_00,*(undefined4 *)(this + 0x4c8));
      }
      uVar4 = F_00562ff0(this_00);
      if ((uVar4 == 0xffffffff) || (uVar4 = F_00562ff0(this_00), uVar4 == *(uint *)(this + 0x4cc))
         ) {
        *(byte *)((int)this_00 + 0xaa) = *(byte *)((int)this_00 + 0xaa) | 2;
        this_01 = (undefined *)0x0;
        if (*(int *)((int)this_00 + 0xa4) != 0) {
          this_01 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0xa4) + 0x70)));
        }
        uVar3 = 0;
      }
      else {
        *(byte *)((int)this_00 + 0xaa) = *(byte *)((int)this_00 + 0xaa) & 0xfd;
        if (*(int *)((int)this_00 + 0xa4) == 0) {
          uVar3 = 1;
          this_01 = (undefined *)0x0;
        }
        else {
          this_01 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0xa4) + 0x70)));
          uVar3 = 1;
        }
      }
      F_0055a300(this_01,uVar3);
      if (*(int *)(this + 0x4c0) != 0) {
        if (*(short *)((int)this_00 + 0x9c) == *((short *)GEN_TOP((*(int *)(this + 0x4c0) + 0x9c)))) {
          uVar4 = F_00562ff0(this_00);
          if ((uVar4 == 0xffffffff) ||
             (uVar4 = F_00562ff0(this_00), uVar4 == *(uint *)(this + 0x4cc))) {
            if (*(undefined * PTR32 *)(this + 400) != (undefined *)0x0) {
              F_0058d590(*(undefined * PTR32 *)(this + 400));
            }
          }
          else {
            uVar5 = 0;
            uVar3 = 0;
            uVar4 = F_00562ff0(this_00);
            F_00595190(*(undefined * PTR32 *)(this + 400),uVar4,uVar3,uVar5);
          }
        }
        F_0057eb30(*(undefined * PTR32 *)(this + 0x198),(uint)*(ushort *)((int)this_00 + 0x9c),0,0,0,0);
        if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_2 + 0x34);
        }
        F_005b2fe0(*(undefined * PTR32 *)(this + 0x188),uVar3);
        if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_2 + 0x1c);
        }
        if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(param_2 + 0x24);
        }
        F_005abc40(*(undefined * PTR32 *)(this + 0x18c),uVar5,uVar3,0);
      }
      uVar4 = F_0042b790((undefined *)(uVar2 + 0x10));
      iVar1 = (*(int *)(gen_frame + 0x18));
      if (uVar4 == 0) {
        uVar2 = F_00560910(*(undefined4 *)(uVar2 + 4));
      }
      else if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(param_2 + 0x34);
      }
      F_0042e430(this + iVar1 * 0x54 + 0x4d0,uVar2);
      F_00560760(((uint *)(gen_frame + 0xc)));
      uVar2 = F_0042a990(this + iVar1 * 0x54 + 0x4d0);
      ((uint *)(gen_frame + 0xc))[0] = uVar2;
      F_005916c0(this_00,2,(uint)(byte)this[0x13a],((uint *)(gen_frame + 0xc)));
      F_007a9370(this);
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonMacro::vf52 */
byte F_00809730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x809730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  
  bVar4 = 0;
  if (*(char *)(param_1 + 1) == '\0') {
    switch((unsigned int)(uintptr_t)(*param_1)) {
    case 1: ;
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      if (uVar2 == *(uint *)(this + 0x194)) {
        F_007a94c0(this);
        return 1;
      }
      if (*((ushort *)GEN_TOP((*(int *)(this + 0x4c0) + 0x9c))) < 100) {
        if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((this + (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x4c0) + 0x9c))) * 4 + 0x330)))
                      + 0xaa))) & 2) == 0) {
          uVar5 = *(undefined4 *)(this + 0x18c);
        }
        else {
          uVar5 = *(undefined4 *)(this + 0x188);
        }
        F_0059b390(this,uVar5,1,0);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x10)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0x10)));
        return 1;
      }
      break;
    case 2: ;
      piVar1 = *((int * PTR32 *)GEN_TOP((this + (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x4c0) + 0x9c))) * 4 + 0x330)));
      (*(uint *)(gen_frame + 0x38)) = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x4c0) + 0x9c)));
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
      if (uVar3 != uVar2) {
        F_0059b390(this,*(undefined4 *)(this + (*(uint *)(gen_frame + 0x38)) * 4 + 0x330),1,0);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x8)),3);
        F_005a2670(((undefined1 *)(gen_frame + 0x8)));
        bVar4 = 1;
      }
      break;
    case 3: ;
    case 4: ;
    case 5: ;
    case 6: ;
      break;
    case 7: ;
      piVar1 = *(int * PTR32 *)(this + 0x188);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
      if (uVar2 == uVar3) {
        F_0059b340(this,*(undefined4 *)(this + 0x194),1,0);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x30)),0);
        F_005a2670(((undefined1 *)(gen_frame + 0x30)));
        return 1;
      }
      break;
    case 8: ;
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      if (uVar2 == *(uint *)(this + 0x194)) {
        F_0059b390(this,*(undefined4 *)(this + 0x188),1,0);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x28)),0);
        F_005a2670(((undefined1 *)(gen_frame + 0x28)));
        return 1;
      }
      break;
    case 9: ;
      piVar1 = *(int * PTR32 *)(this + 0x18c);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
      if (uVar2 == uVar3) {
        F_0059b390(this,*(undefined4 *)(this + 0x188),1,0);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x20)),0);
        F_005a2670(((undefined1 *)(gen_frame + 0x20)));
        return 1;
      }
      break;
    case 10: ;
      piVar1 = *(int * PTR32 *)(this + 0x188);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
      if (uVar2 == uVar3) {
LAB_008098b9: ;
        F_0059b390(this,*(undefined4 *)(this + 0x18c),1,0);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x18)),0);
        F_005a2670(((undefined1 *)(gen_frame + 0x18)));
        return 1;
      }
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      if (uVar2 == *(uint *)(this + 0x194)) goto LAB_008098b9;
      break;
    default: ;
      goto switchD_00809755_default;
    }
  }
switchD_00809755_default: ;
  return bVar4;
}

/* ref: FUN_00809a30 */
uint F_00809a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x809a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  byte * pbVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  int iVar8;
  uint * this_00;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(char * PTR32 *)(gen_frame + 0x10)) = param_3;
  if (param_1 == 3) goto LAB_00809cb0;
  if (*(int *)((int)this + 0x4c0) == 0) {
LAB_00809c6d: ;
    if (param_1 == 1) {
      F_0059b390(this,*(undefined4 *)((int)this + 0x188),1,0);
    }
    if (*(char *)((int)this + 0x2605) == '\0') goto LAB_00809cb0;
    if (*(int *)((int)this + 0x2608) != -1) {
      uVar9 = *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2608) * 4 + 0x330)));
LAB_00809ca1: ;
      F_007a93f0(this,uVar9);
    }
  }
  else {
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0x84)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1);
    (*(uint *)(gen_frame + 0x14)) = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0x9c)));
    if ((param_1 != 2) || (bVar4 = F_0042b6a0((undefined *)(uVar5 + 0x10),param_3), bVar4 == 0)) {
      F_0042e430((undefined *)(uVar5 + 0x10),param_3);
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        iVar8 = *((int *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0xa4)));
        if (iVar8 == 0) {
          pvVar7 = (undefined *)0x0;
        }
        else {
          pvVar7 = *(undefined * PTR32 *)(iVar8 + 0x70);
        }
        F_0055a300(pvVar7,1);
        uVar6 = F_00562ff0(*(undefined4 *)((int)this + 0x4c0));
        if ((uVar6 == 0xffffffff) ||
           (uVar6 = F_00562ff0(*(undefined4 *)((int)this + 0x4c0)),
           uVar6 == *(uint *)((int)this + 0x4cc))) {
          F_00595560(*(undefined * PTR32 *)((int)this + 0x4c0),*(undefined4 *)((int)this + 0x4c8));
          if (*(undefined * PTR32 *)((int)this + 400) != (undefined *)0x0) {
            F_00595190(*(undefined * PTR32 *)((int)this + 400),*(undefined4 *)((int)this + 0x4c8),0,0);
          }
        }
      }
      uVar6 = F_0042b790((undefined *)(uVar5 + 0x10));
      if (uVar6 == 0) {
        pvVar7 = (undefined *)((*(uint *)(gen_frame + 0x14)) * 0x54 + 0x4d0 + (int)this);
        uVar6 = F_00560910(*(undefined4 *)(uVar5 + 4));
        F_0042e430(pvVar7,uVar6);
      }
      else {
        pvVar7 = (undefined *)((*(uint *)(gen_frame + 0x14)) * 0x54 + 0x4d0 + (int)this);
        F_0042ccf0(pvVar7,uVar5 + 0x10);
      }
      F_00560760(((uint *)(gen_frame + 0x4)));
      uVar6 = F_0042a990(pvVar7);
      ((uint *)(gen_frame + 0x4))[0] = uVar6;
      F_005916c0(*(undefined * PTR32 *)((int)this + 0x4c0),2,(uint)*(byte *)((int)this + 0x13a),((uint *)(gen_frame + 0x4)));
      uVar6 = (*(uint *)(gen_frame + 0x14));
      pbVar2 = ((byte *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0xaa)));
      *pbVar2 = *pbVar2 & 0xfd;
      *(uint *)(uVar5 + 100) = (uint)*(byte *)((int)this + (*(uint *)(gen_frame + 0x14)) + 0x25a0);
      F_007a9300(this,*(undefined4 *)((int)this + 0x4c0),uVar5);
      *(undefined1 *)((int)this + uVar6 + 0x25a0) = *(undefined1 *)(uVar5 + 100);
      iVar8 = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 3;
      uVar3 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0x9c)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(uint *)(gen_frame + 0x24)) = (uint)uVar3;
      uVar5 = F_00562ff0(*(undefined4 *)((int)this + 0x4c0));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
      (*(uint *)(gen_frame + 0x2c)) = uVar5;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
      (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x10));
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
      F_007a9370(this);
      this_00 = &(*(uint *)(gen_frame + 0x38));
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      goto LAB_00809c6d;
    }
    if (*(char *)((int)this + 0x2605) == '\0') goto LAB_00809cb0;
    if (*(int *)((int)this + 0x2608) != -1) {
      uVar9 = *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2608) * 4 + 0x330)));
      goto LAB_00809ca1;
    }
  }
  *(undefined1 *)((int)this + 0x2605) = 0;
LAB_00809cb0: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_00809cd0 */
uint F_00809cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x809cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined * this_01;
  int iVar4;
  uint * this_02;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_1 != 3) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x4c0);
    if (this_00 != (undefined *)0x0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this_00 + 0x84) + 0x28))))((int)this_00 + 0x84);
      if (((param_3 != (char *)0x0) && (*param_3 != '\0')) &&
         ((uVar3 = F_00562ff0(this_00), uVar3 == 0xffffffff ||
          (uVar3 = F_00562ff0(this_00), uVar3 == *(uint *)((int)this + 0x4cc))))) {
        F_00595560(this_00,*(undefined4 *)((int)this + 0x4c8));
        if (*(undefined * PTR32 *)((int)this + 400) != (undefined *)0x0) {
          F_00595190(*(undefined * PTR32 *)((int)this + 400),*(undefined4 *)((int)this + 0x4c8),0,0);
        }
        *(byte *)((int)this_00 + 0xaa) = *(byte *)((int)this_00 + 0xaa) & 0xfd;
        this_01 = (undefined *)0x0;
        if (*(int *)((int)this_00 + 0xa4) != 0) {
          this_01 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0xa4) + 0x70)));
        }
        F_0055a300(this_01,1);
      }
      uVar1 = *(ushort *)((int)this_00 + 0x9c);
      *(uint *)(uVar2 + 100) = (uint)*(byte *)((int)this + uVar1 + 0x25a0);
      F_007a9300(this,this_00,uVar2);
      *(undefined1 *)((int)this + uVar1 + 0x25a0) = *(undefined1 *)(uVar2 + 100);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = 4;
      uVar1 = *(ushort *)((int)this_00 + 0x9c);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(uint *)(gen_frame + 0x14)) = (uint)uVar1;
      uVar2 = F_00562ff0(this_00);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
      (*(uint *)(gen_frame + 0x1c)) = uVar2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
      (*(char * PTR32 *)(gen_frame + 0x24)) = param_3;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      F_007a9370(this);
      this_02 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 3;
      do {
        this_02 = this_02 + -2;
        F_005a2670(this_02);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    if (*(char *)((int)this + 0x2605) != '\0') {
      if (*(int *)((int)this + 0x2608) != -1) {
        F_007a93f0(this,*((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2608) * 4 + 0x330))));
      }
      *(undefined1 *)((int)this + 0x2605) = 0;
    }
    if (param_1 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 2;
    }
    if (param_1 == 1) {
      F_0059b390(this,*(undefined4 *)((int)this + 0x18c),1,0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_00809ea0 */
uint F_00809ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x809ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_EAX = 0;
  undefined * this_00;
  
  iVar1 = *(int *)((int)this + 0x4c0);
  if (iVar1 != 0) {
    in_EAX = *param_2;
    uVar2 = param_2[1];
    *(undefined1 *)((int)this + 0x2604) = 1;
    uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x188) + 0x98)));
    if (((in_EAX != uVar3) || (uVar2 != *((uint *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x98))))) &&
       ((in_EAX != *((uint *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x98))) || (uVar2 != uVar3)))) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84);
      in_EAX = F_00562ff0(*(undefined4 *)((int)this + 0x4c0));
      if (in_EAX == 0xffffffff) {
        F_00595560(*(undefined * PTR32 *)((int)this + 0x4c0),*(undefined4 *)((int)this + 0x4cc));
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0xa4)));
        if (iVar1 == 0) {
          this_00 = (undefined *)0x0;
        }
        else {
          this_00 = *(undefined * PTR32 *)(iVar1 + 0x70);
        }
        F_0055a300(this_00,1);
        in_EAX = F_00595190(*(undefined * PTR32 *)((int)this + 400),*(undefined4 *)((int)this + 0x4cc),0,0);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00809f70 */
uint F_00809f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x809f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_EAX = 0;
  undefined * this_00;
  
  iVar1 = *(int *)((int)this + 0x4c0);
  if (iVar1 != 0) {
    in_EAX = *param_2;
    uVar2 = param_2[1];
    *(undefined1 *)((int)this + 0x2604) = 0;
    uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x188) + 0x98)));
    if (((in_EAX != uVar3) || (uVar2 != *((uint *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x98))))) &&
       ((in_EAX != *((uint *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x98))) || (uVar2 != uVar3)))) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84);
      in_EAX = F_00562ff0(*(undefined4 *)((int)this + 0x4c0));
      if (in_EAX == *(uint *)((int)this + 0x4cc)) {
        F_00595560(*(undefined * PTR32 *)((int)this + 0x4c0),0xffffffff);
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x4c0) + 0xa4)));
        this_00 = (undefined *)0x0;
        if (iVar1 != 0) {
          this_00 = *(undefined * PTR32 *)(iVar1 + 0x70);
        }
        F_0055a300(this_00,0);
        in_EAX = F_0058d590(*(undefined * PTR32 *)((int)this + 400));
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_0080a030 */
uint F_0080a030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80a030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = param_2;
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = F_00559c20(*(int *)(param_2 + 4));
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 0x11)) {
      uVar1 = 0;
    }
    if (*(char *)((int)this + 0x2604) == '\0') {
      F_007a93f0(this,uVar1);
    }
    else {
      *(undefined1 *)((int)this + 0x2605) = 1;
      *(uint *)((int)this + 0x2608) = (uint)*(ushort *)(uVar1 + 0x9c);
    }
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 3;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: Client::UI2::AddonActionDetail::vf47 */
uint F_0080a110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80a110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 extraout_var = 0;
  uint uVar8;
  undefined2 extraout_var_00 = 0;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  uVar6 = *(uint *)(param_1 + 0x7c);
  iVar7 = *(int *)(param_2 + 0x70);
  uVar11 = *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x10)));
  uVar8 = *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x14)));
  uVar3 = F_0055dcb0();
  uVar10 = *(uint *)(uVar3 + 0x234) >> 1;
  uVar4 = F_0055dcb0();
  uVar2 = *((ushort *)GEN_TOP((*(int *)(uVar4 + 0x18) + 0xc64)));
  uVar3 = (uint)uVar2;
  uVar4 = (uint)*((ushort *)GEN_TOP((*(int *)(uVar4 + 0x18) + 0xc66)));
  if ((uVar11 & 2) == 0) {
    uVar5 = F_0055a300(*(undefined * PTR32 *)(this + 400),0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)(this + 400),1);
    uVar5 = F_00584110(*(undefined * PTR32 *)(this + 400),*((undefined4 *)GEN_TOP((*(int *)(iVar7 + 0x20) + 8))));
  }
  if ((uVar11 & 1) != 0) {
    F_007a99b0(this,uVar6,iVar7);
    F_007a9e00(this,uVar6);
    if ((uVar8 == 1) || (uVar5 = uVar8, uVar8 == 2)) {
      uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
      iVar9 = (int)(short)uVar6;
      uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1);
      iVar7 = ((uVar6 & 0xffff) >> 1) + iVar9;
      if ((uVar8 == 1) &&
         ((((int)(short)uVar2 < (int)uVar10 && (iVar7 < (int)uVar10)) ||
          (((int)uVar10 < (int)(short)uVar2 && ((int)uVar10 < iVar7)))))) {
        uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1);
        iVar9 = (uVar10 * 2 - ((uVar6 & 0xffff) >> 1)) - iVar7;
      }
      uVar12 = 0;
      uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this);
      uVar1 = F_007a9f90(this,iVar9,uVar6 & 0xffff,uVar12);
      uVar5 = CONCAT22(extraout_var,uVar1);
    }
  }
  if (uVar8 != 0) {
    return uVar5;
  }
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1);
  uVar6 = (uint)(ushort)((short)uVar6 + 0x1a);
  if ((int)(short)uVar2 < (int)uVar10) {
    uVar11 = uVar3 - uVar6;
    uVar6 = F_0056b390(this,uVar11,uVar4,1);
    if ((uVar6 & 1) != 0) {
      uVar3 = uVar3 + 0x20;
      goto LAB_0080a295;
    }
  }
  else {
    uVar11 = uVar3 + 0x20;
    uVar8 = F_0056b390(this,uVar11,uVar4,1);
    if ((uVar8 & 2) != 0) {
      uVar3 = uVar3 - uVar6;
      goto LAB_0080a295;
    }
  }
  param_1 = uVar11 & 0xffff;
  uVar3 = param_1;
LAB_0080a295: ;
  uVar2 = F_007a9f90(this,uVar3,uVar4 + 0x18,1);
  return CONCAT22(extraout_var_00,uVar2);
}

/* ref: Client::UI2::AddonActionDetail::vf11 */
unsigned int F_0080a2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80a2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(undefined4 *)(this + 0x204) = 0;
  F_0055de90(this,param_1,param_2);
  return 0;
}

/* ref: Client::UI2::AddonActionDetail::vf12 */
double F_0080a2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80a2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float10 fVar1;
  
  *(undefined4 *)(this + 0x204) = 0;
  *(short *)(this + 0x12a) = (short)param_1;
  fVar1 = F_00559e70(*(undefined4 *)(this + 0x90),(float)(int)(short)param_1);
  return (double)fVar1;
}

/* ref: Client::UI2::AddonActionDetail::vf13 */
uint F_0080a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80a310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x204) = 0;
  *(short *)(this + 300) = (short)param_1;
  uVar1 = F_00559f00(*(undefined4 *)(this + 0x90),(float)(int)(short)param_1);
  return uVar1;
}

/* ref: FUN_0080a350 */
uint F_0080a350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80a350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) & 2) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x200),0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x200),1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x200),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 8))));
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((*(byte *)(uVar1 + 8) & 4) != 0) {
    uVar1 = F_00584110(*(undefined * PTR32 *)((int)this + 0x1b0),
                         *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34))));
  }
  return uVar1;
}

/* ref: FUN_0080a3c0 */
byte F_0080a3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80a3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  ushort uVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  ((int *)(gen_frame + 0x20))[0xe] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar2 = **(int * PTR32 *)(param_1 + 0x20);
  (*(int *)(gen_frame + 0x4)) = param_2;
  (*(int *)(gen_frame + 0x0)) = iVar2;
  if (iVar2 == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  uVar4 = (*(int * PTR32 *)(param_1 + 0x20))[4];
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  F_0059d640(*(undefined * PTR32 *)((int)this + 0x18c),(-(uint)((uVar4 & 0x4000) != 0) & 0xfffffff6) + 0x11);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x198),**(undefined4 * PTR32 *)(param_2 + 0x20));
  F_00584110(*(undefined * PTR32 *)((int)this + 0x19c),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))));
  F_00595190(*(undefined * PTR32 *)((int)this + 0x1a0),(*(int *)(gen_frame + 0x0)),0,0);
  iVar2 = (-(uint)(*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) != 0) & 0x52) + 0x13;
  pvVar3 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x1a0),6);
  F_0059d640(pvVar3,iVar2);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a4),(uint)(0 < *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x28)))));
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a8),(uint)(0 < *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x30)))));
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x1ac),(uint)(0 < *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x2c)))));
  F_00584110(*(undefined * PTR32 *)((int)this + 0x1b0),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34))));
  if (((*(uint *)(gen_frame + 0x8)) & 0x400) == 0) {
    F_00561860(*(undefined * PTR32 *)((int)this + 0x1a0),0);
  }
  else {
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 4)));
    F_00561860(*(undefined * PTR32 *)((int)this + 0x1a0),1);
    F_005a03c0(*(undefined * PTR32 *)((int)this + 0x1a0),uVar9);
  }
  if (((*(uint *)(gen_frame + 0x8)) & 4) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1b8),0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1b8),1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1b8),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x50))));
  }
  if (((*(uint *)(gen_frame + 0x8)) & 2) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1bc),0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1bc),1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1c0),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x30))));
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = REFG(undefined4, 0x108cc50);
    uVar4 = F_0055aaf0(*(undefined4 *)((int)this + 0x1c0));
    F_00577d20(*(undefined * PTR32 *)((int)this + 0x1c0),&(*(int *)(gen_frame + 0x0)),((ushort *)(gen_frame + 0xc)),uVar4,uVar8,uVar9,uVar10);
    uVar1 = F_00559d90(*(undefined4 *)((int)this + 0x1c0));
    F_0055a080(*(undefined4 *)((int)this + 0x1bc),(uint)(ushort)(uVar1 + ((ushort *)(gen_frame + 0xc))[0]));
  }
  if (((*(uint *)(gen_frame + 0x8)) & 1) == 0) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1c4),0);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x1c4),1);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1c4),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x54))));
  }
  ((int *)(gen_frame + 0x20))[0] = 5;
  ((int *)(gen_frame + 0x20))[7] = 5;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x800;
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = 9;
  (*(undefined4 *)(gen_frame + 0x1c)) = 6;
  ((int *)(gen_frame + 0x20))[1] = 0x1000;
  ((int *)(gen_frame + 0x20))[2] = 4;
  ((int *)(gen_frame + 0x20))[3] = 10;
  ((int *)(gen_frame + 0x20))[4] = 7;
  ((int *)(gen_frame + 0x20))[5] = 6;
  ((int *)(gen_frame + 0x20))[6] = 0x2000;
  ((int *)(gen_frame + 0x20))[8] = 0xb;
  ((int *)(gen_frame + 0x20))[9] = 8;
  ((int *)(gen_frame + 0x20))[10] = 7;
  ((int *)(gen_frame + 0x20))[0xb] = 0x11;
  ((int *)(gen_frame + 0x20))[0xc] = 0x65;
  ((int *)(gen_frame + 0x20))[0xd] = 0x66;
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x1c8),0);
  uVar4 = 0x28;
  piVar6 = ((int *)(gen_frame + 0x20));
  do {
    bVar7 = (piVar6[-4] & (*(uint *)(gen_frame + 0x8))) != 0;
    if (bVar7) {
      iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + *piVar6 * 4)));
      F_0055a300(*(undefined * PTR32 *)(uVar4 + 0x1a4 + (int)this),1);
      F_0059d640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar4 + 0x1a4 + (int)this) + 0x8c))) + 0x6c))),
                   ((int *)(gen_frame + 0x20))[(int)(iVar2 + 0xb)]);
      F_00584110(*(undefined * PTR32 *)(uVar4 + 0x1b0 + (int)this),
                   *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4)) + 0x20) + piVar6[-3] * 4))));
      F_00584110(*(undefined * PTR32 *)(uVar4 + 0x1c8 + (int)this),
                   *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4)) + 0x20) + piVar6[-2] * 4))));
      F_0057eb00(*(undefined * PTR32 *)(uVar4 + 0x1c8 + (int)this),1);
      F_00584110(*(undefined * PTR32 *)(uVar4 + 0x1bc + (int)this),
                   *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4)) + 0x20) + piVar6[-1] * 4))));
      F_0057eb00(*(undefined * PTR32 *)(uVar4 + 0x1bc + (int)this),1);
      uVar10 = 0;
      uVar8 = 0;
      uVar9 = REFG(undefined4, 0x108cc50);
      uVar5 = F_0055aaf0(*(undefined4 *)(uVar4 + 0x1c8 + (int)this));
      F_00577d20(*(undefined * PTR32 *)(uVar4 + 0x1c8 + (int)this),((ushort *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x0)),uVar5,uVar8,uVar9,uVar10
                  );
      F_00559e70(*(undefined4 *)(uVar4 + 0x1bc + (int)this),GEN_TOF(gen_bits2f((uint)gen_fl2bits((float)((ushort *)(gen_frame + 0xc))[0]) ^ REFG(uint, 0x10920d0))));
      pvVar3 = *(undefined * PTR32 *)((int)this + 0x1c8);
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(uVar4 + 0x1a4 + (int)this);
    }
    F_0055a300(pvVar3,(uint)bVar7);
    uVar4 = uVar4 + 4;
    piVar6 = piVar6 + 5;
  } while (uVar4 < 0x34);
  F_00c47745(((int *)(gen_frame + 0x20))[0xe] ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_0080a7a0 */
uint F_0080a7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80a7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x1fc),
               (uint)((*((byte *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) & 0x80) != 0));
  uVar1 = F_007aa620(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0080a7e0 */
uint F_0080a7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80a7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  char cVar2;
  char * pcVar3;
  int in_ecx;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  undefined2 extraout_var = 0;
  undefined4 uVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x234),0);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x23c),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x58))));
  uVar6 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3c)));
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(*(int *)((int)this + 0x240));
  ((uint *)(gen_frame + 0x10))[0] = 0x11;
  ((uint *)(gen_frame + 0x10))[1] = 0x65;
  ((uint *)(gen_frame + 0x10))[2] = 0x66;
  ((uint *)(gen_frame + 0x10))[3] = 0x67;
  ((uint *)(gen_frame + 0x10))[4] = 0x68;
  ((uint *)(gen_frame + 0x10))[5] = 0x69;
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x240) + 0x8c))) + 0x6c))),
               ((uint *)(gen_frame + 0x10))[(int)(uVar6 >> 0x10)]);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x244),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x44))));
  uVar11 = 0;
  uVar10 = 0;
  uVar8 = REFG(undefined4, 0x108cc50);
  uVar5 = F_0055aaf0(*(undefined4 *)((int)this + 0x244));
  F_00577d20(*(undefined * PTR32 *)((int)this + 0x244),((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),uVar5,uVar10,uVar8,uVar11);
  F_0055a080(*(undefined4 *)((int)this + 0x240),(*(undefined4 *)(gen_frame + 0x8)));
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x248) + 0x8c))) + 0x6c))),
               ((uint *)(gen_frame + 0x10))[(int)(uVar6 & 0xffff)]);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x24c),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x48))));
  uVar11 = 0;
  uVar10 = 0;
  uVar8 = REFG(undefined4, 0x108cc50);
  uVar6 = F_0055aaf0(*(undefined4 *)((int)this + 0x24c));
  F_00577d20(*(undefined * PTR32 *)((int)this + 0x24c),((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),uVar6,uVar10,uVar8,uVar11);
  F_0055a080(*(undefined4 *)((int)this + 0x248),(*(undefined4 *)(gen_frame + 0x8)));
  in_ecx = (int)gen_fl2bits((*(float *)(gen_frame + 0xc)));
  uVar4 = F_0055a030((undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc))));
  (*(float *)(gen_frame + 0xc)) = gen_bits2f((uint)uVar4);
  fVar9 = F_00559d80(in_ecx);
  fVar1 = (float)(fVar9 + (float10)uVar4);
  (*(float *)(gen_frame + 0xc)) = fVar1;
  F_00559f00(*(undefined4 *)((int)this + 0x248),fVar1);
  pcVar3 = *((char * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x4c)));
  uVar8 = *(undefined4 *)((int)this + 0x248);
  if (pcVar3 != (char *)0x0) {
    pcVar7 = pcVar3;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (pcVar7 != pcVar3 + 1) {
      F_0059d640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x250) + 0x8c))) + 0x6c))),0x11);
      F_00584110(*(undefined * PTR32 *)((int)this + 0x254),pcVar3);
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = REFG(undefined4, 0x108cc50);
      uVar6 = F_0055aaf0(*(undefined4 *)((int)this + 0x254));
      F_00577d20(*(undefined * PTR32 *)((int)this + 0x254),((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),uVar6,uVar11,uVar10,uVar12);
      F_0055a080(*(undefined4 *)((int)this + 0x250),(*(undefined4 *)(gen_frame + 0x8)));
      uVar4 = F_0055a030(uVar8);
      (*(float *)(gen_frame + 0xc)) = gen_bits2f((uint)uVar4);
      fVar9 = F_00559d80(uVar8);
      fVar1 = (float)(fVar9 + (float10)uVar4);
      (*(float *)(gen_frame + 0xc)) = fVar1;
      F_00559f00(*(undefined4 *)((int)this + 0x250),fVar1);
      uVar8 = *(undefined4 *)((int)this + 0x250);
      goto LAB_0080aa2a;
    }
  }
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x250) + 0x8c))) + 0x6c))),0x69);
LAB_0080aa2a: ;
  uVar4 = F_0055a030(uVar8);
  (*(float *)(gen_frame + 0xc)) = gen_bits2f((uint)uVar4);
  fVar9 = F_00559d80(uVar8);
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xc)) + 2)) = ((undefined2)0x27f);
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xc)) + 0))));
  uVar4 = F_0055a080(*(undefined4 *)((int)this + 0x238),
                       (int)TRUNC(fVar9 + (float10)uVar4) & 0xffff);
  F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
  return CONCAT22(extraout_var,uVar4);
}

/* ref: FUN_0080aa90 */
uint F_0080aa90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80aa90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 extraout_var = 0;
  undefined4 * puVar7;
  int * piVar8;
  int iVar9;
  ushort uVar10;
  int * piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if ((*((byte *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x20) + 0x10))) & 0x10) == 0) {
    uVar5 = F_0055a300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2fc))),0);
    return uVar5;
  }
  F_0055a300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2fc))),1);
  fVar1 = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2f8)));
  piVar8 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x304)));
  uVar5 = 6;
  piVar11 = piVar8;
  do {
    F_0055a300((undefined *)*piVar11,0);
    piVar11 = piVar11 + 3;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  uVar6 = *((uint *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x20) + 0x50)));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (ushort)(int)fVar1;
  (*(uint *)(gen_frame + 0x14)) = uVar6;
  uVar10 = (ushort)(*(uint *)(gen_frame + 0xc));
  uVar3 = (int)fVar1 & 0xffff;
  if (uVar6 != 0) {
    (*(uint *)(gen_frame + 0x18)) = uVar5;
    (*(int *)(gen_frame + 0x10)) = 0x78;
    uVar5 = 0;
    do {
      F_0055a300((undefined *)*piVar8,1);
      F_00559f00(*piVar8,(float)(int)(short)uVar10);
      F_00584110((undefined *)piVar8[1],*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + *(int *)((*(int *)&gen_args[2]) + 0x20)))));
      uVar4 = F_0055a030(piVar8[1]);
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 4;
      uVar10 = uVar10 + uVar4;
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*piVar8 + 0x8c) + 0x6c)));
      (*(uint *)(gen_frame + 0xc)) = (uint)uVar10;
      uVar3 = (*(uint *)(gen_frame + 0xc));
      if ((*(uint *)(gen_frame + 0x14)) <= uVar5 + 1) {
        F_0059d640(this_00,0x65);
        break;
      }
      F_0059d640(this_00,0x66);
      F_00584110((undefined *)piVar8[2],*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + *(int *)((*(int *)&gen_args[2]) + 0x20)))));
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 4;
      uVar5 = uVar5 + 2;
      if ((*(uint *)(gen_frame + 0x14)) <= uVar5) break;
      uVar6 = (*(uint *)(gen_frame + 0x18)) + 1;
      piVar8 = piVar8 + 3;
      (*(uint *)(gen_frame + 0x18)) = uVar6;
    } while (uVar6 < 6);
  }
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  (*(int *)&gen_args[1]) = *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x20) + 0x54)));
  puVar7 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34c)));
  iVar9 = 6;
  do {
    F_0055a300((undefined *)*puVar7,0);
    iVar2 = (*(int *)&gen_args[1]);
    puVar7 = puVar7 + 3;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if ((*(int *)&gen_args[1]) != 0) {
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))),*((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x20) + 0x94))));
    if (iVar2 != 0) {
      iVar9 = 0x98;
      puVar7 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x354)));
      (*(int *)(gen_frame + 0x4)) = (*(int *)&gen_args[1]);
      do {
        F_0055a300((undefined *)puVar7[-2],1);
        F_00559f00(puVar7[-2],(float)(int)(short)uVar10);
        F_00584110((undefined *)*puVar7,*((undefined4 *)GEN_TOP((iVar9 + *(int *)((*(int *)&gen_args[2]) + 0x20)))));
        uVar14 = 0;
        uVar12 = 0;
        uVar13 = REFG(undefined4, 0x108cc50);
        uVar5 = F_0055aaf0(*puVar7);
        F_00577d20((undefined *)*puVar7,&(*(uint *)(gen_frame + 0x14)),&(*(int *)&gen_args[1]),uVar5,uVar12,uVar13,uVar14);
        uVar10 = uVar10 + (short)(*(int *)&gen_args[1]);
        iVar9 = iVar9 + 4;
        puVar7 = puVar7 + 3;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
      } while ((*(int *)(gen_frame + 0x4)) != 0);
    }
    uVar14 = 0;
    uVar12 = 0;
    uVar13 = REFG(undefined4, 0x108cc50);
    uVar5 = F_0055aaf0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
    F_00577d20(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))),&(*(int *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x18)),uVar5,uVar12,uVar13,uVar14);
    (*(uint *)(gen_frame + 0xc)) = (uint)(ushort)(uVar10 + (short)(*(uint *)(gen_frame + 0x18)));
  }
  uVar10 = F_0055a080(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2fc))),(*(uint *)(gen_frame + 0xc)));
  return CONCAT22(extraout_var,uVar10);
}

/* ref: FUN_0080acd0 */
uint F_0080acd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80acd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  char * pcVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  undefined2 extraout_var = 0;
  uint uVar8;
  int * piVar9;
  undefined4 uVar10;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) & 0x20) == 0) {
    uVar5 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x290),0);
    return uVar5;
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x290),1);
  local_8 = (int)*(float *)((int)this + 0x28c) & 0xffff;
  uVar5 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58)));
  uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x5c)));
  local_c = 0;
  local_10 = 1;
  uVar8 = 0xb4;
  piVar9 = (int *)((int)this + 0x294);
  do {
    iVar6 = *((int *)GEN_TOP(((uVar8 - 0x54) + *(int *)(param_1 + 0x20))));
    if (iVar6 == -2) {
      F_0055a300((undefined *)*piVar9,0);
    }
    else {
      if (iVar6 < 0) {
        uVar10 = 0x6a;
      }
      else {
        if (4 < iVar6) {
          iVar6 = 4;
        }
        if (local_c < uVar5) {
          uVar10 = *(undefined4 *)(&REFG(undefined, 0x10ccb1c) + iVar6 * 4);
        }
        else {
          uVar10 = *(undefined4 *)(&REFG(undefined, 0x10ccb30) + iVar6 * 4);
        }
      }
      F_0055a300((undefined *)*piVar9,1);
      F_00559f00(*piVar9,(float)(int)(short)local_8);
      F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)(*piVar9 + 0x8c) + 0x6c))),uVar10);
      F_0059d640((undefined *)piVar9[2],(-(uint)((local_10 & uVar3) != 0) & 0x54) + 0x11);
      F_00584110((undefined *)piVar9[3],*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + uVar8))));
      pcVar7 = *((char * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x18 + uVar8)));
      F_00584110((undefined *)piVar9[4],pcVar7);
      pcVar1 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if (pcVar7 == pcVar1) {
        iVar6 = piVar9[1];
      }
      else {
        iVar6 = *piVar9;
      }
      uVar4 = F_0055a030(iVar6);
      local_8 = (uint)(ushort)((short)local_8 + uVar4);
      local_c = local_c + 1;
    }
    piVar9 = piVar9 + 5;
    uVar8 = uVar8 + 4;
    local_10 = local_10 << 1 | (uint)((int)local_10 < 0);
  } while (uVar8 < 200);
  uVar4 = F_0055a080(*(undefined4 *)((int)this + 0x290),local_8);
  return CONCAT22(extraout_var,uVar4);
}

/* ref: Client::UI2::AddonItemDetail::vf11 */
unsigned int F_0080ae60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80ae60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(undefined4 *)(this + 0x188) = 0;
  F_0055de90(this,param_1,param_2);
  return 0;
}

/* ref: Client::UI2::AddonItemDetail::vf12 */
double F_0080ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80ae80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float10 fVar1;
  
  *(undefined4 *)(this + 0x188) = 0;
  *(short *)(this + 0x12a) = (short)param_1;
  fVar1 = F_00559e70(*(undefined4 *)(this + 0x90),(float)(int)(short)param_1);
  return (double)fVar1;
}

/* ref: Client::UI2::AddonItemDetail::vf13 */
uint F_0080aec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80aec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x188) = 0;
  *(short *)(this + 300) = (short)param_1;
  uVar1 = F_00559f00(*(undefined4 *)(this + 0x90),(float)(int)(short)param_1);
  return uVar1;
}

/* ref: FUN_0080af00 */
uint F_0080af00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80af00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  
  this = (undefined *)F_0057f810(*(undefined * PTR32 *)(param_2 + 0x14),(uint)*(byte *)(param_1 + 0x13c));
  if ((this != (undefined *)0x0) && ((char)param_3 != '\0')) {
    bVar1 = F_0056b780(this,0);
    this = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  }
  return (uint)this;
}

/* ref: FUN_0080af30 */
byte F_0080af30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80af30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_0057f810(*(undefined * PTR32 *)(param_2 + 0x14),(uint)*(byte *)(param_1 + 0x13c));
  if (this != (undefined *)0x0) {
    uVar1 = F_00573130((int)this + 0x24,param_3,1,0);
    if (uVar1 != 0) {
      F_0059b390(this,uVar1,1,param_4);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0080af80 */
byte F_0080af80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80af80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  
  this = (undefined *)F_0057f810(*(undefined * PTR32 *)(param_2 + 0x14),(uint)*(byte *)(param_1 + 0x13c));
  if ((this != (undefined *)0x0) && (param_3 < 0xe)) {
    F_0059b340(this,*(undefined4 *)((int)this + param_3 * 4 + 0x20c),1,param_4);
    return 1;
  }
  return 0;
}

/* ref: FUN_0080afd0 */
uint F_0080afd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80afd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055b9e0(param_1);
  uVar1 = F_00561680(uVar1);
  uVar1 = F_007ab070(uVar1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_0080b000 */
uint F_0080b000(unsigned int gen_a0)
{
  GEN_ENTER(0x80b000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccb4c));
  F_0090a400((undefined *)((int)this + 0x180));
  *(undefined4 *)((int)this + 0x280) = 0;
  F_00580ea0((undefined *)((int)this + 0x284));
  *(undefined4 *)((int)this + 700) = 0;
  puVar1 = (undefined4 *)((int)this + 0x2c0);
  iVar2 = 0xd;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    F_0042b630(puVar1 + 2);
    puVar1 = puVar1 + 0x17;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined2 *)((int)this + 0x7cc) = 0;
  *(undefined4 *)((int)this + 2000) = 0;
  *(undefined4 *)((int)this + 0x7c8) = 0xffffffff;
  puVar1 = (undefined4 *)((int)this + 0x7d4);
  iVar2 = 0x3d;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  return (uint)this;
}

/* ref: FUN_0080b0d0 */
uint F_0080b0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80b0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int in_ecx;
  int iVar1;
  uint uVar2;
  undefined4 in_ecx_00;
  undefined4 * puVar3;
  undefined * this_00;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x2c))((int *)*param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = F_007ab5b0(this,param_1,param_2,param_3);
    in_ecx = *(int *)(param_3 * 0x5c + 0x2c0 + (int)this);
    if (in_ecx != 0) {
      in_ecx_00 = 0;
      if (*(int *)(in_ecx + 0xa4) != 0) {
        in_ecx_00 = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0xa4) + 0x70)));
      }
      uVar2 = F_0055a2d0(in_ecx_00);
      if ((char)uVar2 != '\0') {
        puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2)));
        *puVar3 = 0x23;
        uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x28))((int *)*param_2);
        *(int *)(uVar2 + 4) = param_3;
        uVar2 = F_0055dcb0();
        uVar2 = F_0055b990(uVar2);
        iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x20))) + 0xc + param_3 * 0x10)));
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(in_ecx + 0x84) + 0x34))))(in_ecx + 0x84)));
        uVar2 = F_00562ff0(in_ecx);
        F_00595560(this_00,uVar2);
        uVar2 = F_00563030(in_ecx);
        F_0058ea60(this_00,uVar2);
        F_0058e9a0(this_00,"");
        F_00561860(*(undefined * PTR32 *)((int)this_00 + 0xa4),(uint)((byte)iVar1 & 1));
        uVar2 = F_005a03c0(*(undefined * PTR32 *)((int)this_00 + 0xa4),iVar1 >> 1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0080b1e0 */
uint F_0080b1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80b1e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_ecx;
  
  pvVar2 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) < (undefined *)0xe) {
    pvVar2 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) * 0x5c + (int)(*(undefined * PTR32 *)&gen_args[0]))));
    iVar1 = *(int *)((int)pvVar2 + 0x2c0);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar2;
    if (iVar1 != 0) {
      uVar3 = F_0055dcb0();
      F_00560760(((uint *)(gen_frame + 0xc)));
      uVar4 = F_0042a990((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x2c8);
      ((uint *)(gen_frame + 0xc))[0] = uVar4;
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0)) = 2;
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x18)), 1, 3),2)));
      in_ecx = 0;
      if (*(int *)(iVar1 + 0xa4) != 0) {
        in_ecx = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0xa4) + 0x70)));
      }
      uVar4 = F_0055a2d0(in_ecx);
      if ((char)uVar4 != '\0') {
        (*(undefined1 *)(gen_frame + 0x16)) = 2;
        ((uint *)(gen_frame + 0xc))[1] = 4;
        (*(undefined1 *)(gen_frame + 0x17)) = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0))));
        (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0)) = 6;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x18)), 1, 3),6)));
      }
      pvVar2 = (undefined *)F_00588780((undefined *)(uVar3 + 0xe0),(*(undefined * PTR32 *)(gen_frame + 0x18)),
                                    (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13a))),*(undefined4 *)(iVar1 + 0x70)
                                    ,((uint *)(gen_frame + 0xc)),0,0);
      *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c8))) = (*(undefined * PTR32 *)&gen_args[1]);
    }
  }
  return (uint)pvVar2;
}

/* ref: Client::UI2::AddonCharacter::vf53 */
uint F_0080b290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80b290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar3;
  undefined * pAVar4;
  
  if ((char)param_1 != '\0') {
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2);
    iVar3 = 0;
    pAVar4 = this + 0x20c;
    do {
      if (uVar2 == *(uint *)pAVar4) {
        if ((-1 < iVar3) && (iVar3 < 0xe)) {
          bVar1 = F_0056b630(this,0x2fb,7,0,9,0,0);
          return CONCAT31(extraout_var_00,bVar1);
        }
        break;
      }
      iVar3 = iVar3 + 1;
      pAVar4 = pAVar4 + 4;
    } while (iVar3 < 0xe);
  }
  bVar1 = F_0056b780(this,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0080b2f0 */
uint F_0080b2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x80b2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar6;
  
  (*(undefined2 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,&(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x180));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = (undefined2)(*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((undefined2)(*(undefined4 *)(gen_frame + 0x18)),0x4001);
  (*(undefined2 *)(gen_frame + 0xc)) = (short)(*(undefined4 *)(gen_frame + 0x14));
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar2 = *(int *)((int)this + 0x18c);
  F_0055e430(this,&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),iVar2);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(iVar2 + 0x70);
  }
  uVar4 = F_0055a020(uVar6);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = (short)(*(undefined4 *)(gen_frame + 0x14)) + uVar4;
  (*(undefined2 *)(gen_frame + 0xc)) = (undefined2)(*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((short)(*(undefined4 *)(gen_frame + 0x14)) + uVar4,0x4002);
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  if (*(int *)((int)this + 0x1b8) != 0) {
    uVar5 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1b8) + 0x70))));
    if ((char)uVar5 != '\0') {
      F_0055e430(this,&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),*(undefined4 *)((int)this + 0x1b8));
      uVar6 = 0;
      if (*(int *)((int)this + 0x1b8) != 0) {
        uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1b8) + 0x70)));
      }
      uVar4 = F_0055a020(uVar6);
      sVar1 = (short)(*(undefined4 *)(gen_frame + 0x14)) + uVar4;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = sVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 2)),sVar1);
      bVar3 = F_0056b630(this,0x18a89,0,3,4,(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)));
      return CONCAT31(extraout_var,bVar3);
    }
  }
  bVar3 = F_0056b780(this,3);
  return CONCAT31(extraout_var_00,bVar3);
}

/* ref: FUN_0080b430 */
uint F_0080b430(unsigned int gen_a0)
{
  GEN_ENTER(0x80b430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 in_ecx;
  uint uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (*(int *)((int)this + 0x1b0) == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x70)));
  }
  uVar1 = F_0055a350(in_ecx);
  if ((char)uVar1 != '\0') {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 10;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
    fVar4 = F_0055dfa0(this,1);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = (int)((double)(int)(short)uVar2 + ((double)GEN_TOD((fVar4 * (float10)(uVar1 & 0xffff)))));
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(int *)(gen_frame + 0x14)) = (int)(short)uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_0080b520 */
byte F_0080b520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80b520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined * pvVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar5 = param_1;
  pvVar6 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x244);
  if (pvVar6 != (undefined *)0x0) {
    F_0055a300(pvVar6,1);
  }
  this_00 = *(int * PTR32 *)(param_1 * 0x5c + 0x2c0 + (int)this);
  if (this_00 != (int *)0x0) {
    iVar1 = *(int *)((int)this + param_1 * 0x5c + 0x2c4);
    iVar2 = *(int *)((int)this + param_1 * 4 + 0x1d4);
    iVar3 = *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + param_1 * 0x10)));
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + param_1 * 0x10 + 4)));
    if (0 < iVar3) {
      if (iVar1 != 0) {
        iVar4 = *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 8 + param_1 * 0x10)));
        if (iVar2 != 0) {
          if (iVar4 == 0) {
            uVar8 = 0x66;
          }
          else if (iVar4 == 100) {
            uVar8 = 0x65;
          }
          else {
            uVar8 = 0x13;
          }
          F_0059d640(*(undefined * PTR32 *)(iVar2 + 0x6c),uVar8);
        }
        F_00568250(iVar1,(float)((float10)iVar4 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
      }
      this_00[0x26] = 0x18;
      F_00595560(this_00,iVar3);
      F_0055a300((undefined *)this_00[0x1c],1);
      bVar7 = (char)((uint)uVar9 >> 8) != '\0';
      param_1 = CONCAT31((int3)((uint)iVar1 >> 8),bVar7);
      F_0056e4d0(this_00,param_1);
      ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,(uint)!bVar7);
      iVar5 = *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc + iVar5 * 0x10)));
      F_005a03c0((undefined *)this_00[0x29],iVar5 >> 1);
      F_00561860((undefined *)this_00[0x29],(uint)((byte)iVar5 & 1));
      F_0055a300(pvVar6,0);
      pvVar6 = (undefined *)0x0;
      if (this_00[0x29] != 0) {
        pvVar6 = *(undefined * PTR32 *)(this_00[0x29] + 0x70);
      }
      F_0055a300(pvVar6,1);
      if ((char)((uint)uVar9 >> 0x18) == '\0') {
        uVar9 = 0x13;
      }
      else {
        uVar9 = 0x65;
      }
      pvVar6 = (undefined *)F_00561490((undefined *)this_00[0x29],6);
      F_0059d640(pvVar6,uVar9);
      return 1;
    }
    if (this_00[0x29] == 0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *(undefined * PTR32 *)(this_00[0x29] + 0x70);
    }
    F_0055a300(pvVar6,0);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      F_0059d640(*(undefined * PTR32 *)(iVar2 + 0x6c),0x14);
    }
  }
  return 0;
}

/* ref: FUN_0080b6d0 */
unsigned int F_0080b6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80b6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (((param_1 != 0) && (*(int *)((int)this + 700) != 0)) &&
     (*((int *)GEN_TOP((*(int *)((int)this + 700) + 4))) == param_1)) {
    F_00568380(*(undefined * PTR32 *)(param_1 + 0x90),0xc,0x14,this,0,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonCharacterStatus::vf2 */
uint F_0080b710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x80b710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  piVar1 = (int *)(param_1 & 0xffff);
  if (((piVar1 == (int *)0x9) ||
      (((piVar1 == (int *)0xc && (piVar1 = param_4, (char)param_4[1] == '\0')) && (*param_4 == 1))))
     && (param_2 == 0)) {
    F_00557670(param_3,0);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 0xd;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    piVar1 = (int *)F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return (uint)piVar1;
}

/* ref: Client::UI2::AddonCharacterStatus::vf53 */
uint F_0080b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80b780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)this[0x13c]);
  if ((this_00 != (undefined *)0x0) && ((char)param_1 != '\0')) {
    bVar1 = F_0056b780(this_00,0);
    this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  }
  return (uint)this_00;
}

/* ref: Client::UI2::AddonCharacterProfile::vf47 */
uint F_0080b7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80b7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar2 = *(int *)(param_1 + 0xf4);
  uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x7c)));
  iVar3 = *(int *)(param_2 + 0xe0);
  iVar6 = 0;
  if ((short)uVar1 < 1) {
    *(undefined2 *)(this + 0x2e0) = 0;
    F_0058d980(*((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))),0);
    pvVar5 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar5,0x23,1,this,0);
  }
  else {
    uVar7 = (uint)(short)uVar1;
    if (0 < (int)uVar7) {
      iVar4 = 0x80;
      do {
        this[iVar6 + 0x1e0] = *((undefined *)GEN_TOP((iVar4 + *(int *)(iVar2 + 0x20))));
        *(undefined4 *)(this + iVar4 + 0x264) =
             *((undefined4 *)GEN_TOP((iVar4 + -0x74 + *(int *)(iVar3 + 0x20))));
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar6 < (int)uVar7);
    }
    if (uVar7 != *(ushort *)(this + 0x2e0)) {
      *(ushort *)(this + 0x2e0) = uVar1;
      iVar6 = *((int *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))) + 0xc0)));
      F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))),(uint)uVar1,this + 0x2e4,1);
      pvVar5 = (undefined *)0x0;
      if (*(int *)(this + 0x184) != 0) {
        pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
      }
      F_005840a0(pvVar5,0x23,1,this,0);
      pvVar5 = (undefined *)0x0;
      if (*(int *)(this + 0x184) != 0) {
        pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
      }
      F_00568380(pvVar5,0x23,1,this,0,0);
      F_005623b0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))),iVar6);
      if (-1 < iVar6) {
        ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))) + 0x4c))))
                  (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x88))),iVar6);
      }
    }
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x18c),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4bc))));
  F_00584110(*(undefined * PTR32 *)(this + 400),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4c0))));
  F_00584110(*(undefined * PTR32 *)(this + 0x1b0),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4cc))));
  F_00584110(*(undefined * PTR32 *)(this + 0x1c0),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4d0))));
  F_00591c00(*(undefined * PTR32 *)(this + 0x1bc),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x530))),0);
  F_00584110(*(undefined * PTR32 *)(this + 0x1cc),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4d4))));
  F_00584110(*(undefined * PTR32 *)(this + 0x1dc),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4d8))));
  F_00591c00(*(undefined * PTR32 *)(this + 0x1d8),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x534))),0);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar6 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xd0)));
  if (iVar6 < 1) {
    uVar8 = 0x11;
  }
  else {
    uVar8 = 0x65;
  }
  uVar7 = F_0059d670(*(undefined * PTR32 *)(this + 0x180),uVar8);
  if (0 < iVar6) {
    F_00584110(*(undefined * PTR32 *)(this + 0x198),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4c4))));
    F_00584110(*(undefined * PTR32 *)(this + 0x19c),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4c8))));
    F_00591c00(*(undefined * PTR32 *)(this + 0x1a0),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xd0))),0);
    uVar7 = F_00591c00(*(undefined * PTR32 *)(this + 0x1a4),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xd4))),0);
  }
  return uVar7;
}

/* ref: Client::UI2::AddonCharacterProfile::vf2 */
uint F_0080ba40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x80ba40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0x17) {
    if (param_2 == 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
      (*(undefined4 *)(gen_frame + 0x8)) = 0xe;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  else if ((uVar1 == 0x23) && (param_2 == 1)) {
    uVar1 = F_007ab9d0(this,param_3,param_4);
    return uVar1;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterProfile::vf59 */
byte F_0080bab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80bab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_005b1020((undefined *)this,param_1,param_2);
  if ((char)uVar2 != '\0') {
    return 1;
  }
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  uVar2 = F_00561680(uVar2);
  uVar2 = F_007ab070(uVar2,param_1,param_2);
  if ((0 < (int)uVar2) && (uVar2 != 0xff)) {
    uVar3 = F_0055dcb0();
    bVar1 = F_0080af30(this,uVar3,uVar2,param_1);
    if (bVar1 != 0) {
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonCharacterProfile::vf53 */
uint F_0080bb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80bb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)this[0x13c]);
  if ((this_00 != (undefined *)0x0) && ((char)param_1 != '\0')) {
    bVar1 = F_0056b780(this_00,0);
    this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  }
  return (uint)this_00;
}

/* ref: Client::UI2::AddonCharacterClass::vf2 */
uint F_0080bb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x80bb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined * this_00;
  
  if ((param_1 & 0xffff) == 6) {
    uVar1 = F_007abc40(this,param_3,param_4,param_2);
  }
  else {
    uVar1 = (param_1 & 0xffff) - 7;
    if (uVar1 == 0) {
      this_00 = (undefined *)F_0055e2f0(this,0x4b);
      uVar1 = F_0055a300(this_00,uVar1);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterClass::vf59 */
byte F_0080bbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80bbd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_005b1020((undefined *)this,param_1,param_2);
  if ((char)uVar2 != '\0') {
    return 1;
  }
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  uVar2 = F_00561680(uVar2);
  uVar2 = F_007ab070(uVar2,param_1,param_2);
  if ((0 < (int)uVar2) && (uVar2 != 0xff)) {
    uVar3 = F_0055dcb0();
    bVar1 = F_0080af30(this,uVar3,uVar2,param_1);
    if (bVar1 != 0) {
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonCharacterClass::vf53 */
uint F_0080bc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80bc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)this[0x13c]);
  if ((this_00 != (undefined *)0x0) && ((char)param_1 != '\0')) {
    bVar1 = F_0056b780(this_00,0);
    this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  }
  return (uint)this_00;
}

/* ref: FUN_0080bcb0 */
uint F_0080bcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x80bcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccf4c));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterCurrency::vf47 */
uint F_0080bd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80bd60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  undefined1 AVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined * pAVar9;
  int iVar10;
  undefined * pAVar11;
  bool bVar12;
  byte * pbVar13;
  
  iVar3 = *(int *)(param_2 + 0xe0);
  (*(int *)(gen_frame + 0x1c)) = *(int *)(param_1 + 0xf4);
  F_00560760(((byte *)(gen_frame + 0x4)));
  uVar6 = F_0055dcb0();
  pvVar7 = (undefined *)(uVar6 + 0xe0);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar7;
  F_00584110(*(undefined * PTR32 *)(this + 0x188),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 8))));
  uVar4 = F_00559d90(*(undefined4 *)(this + 0x180));
  uVar5 = F_0055a030(*(undefined4 *)(this + 0x180));
  (*(uint *)(gen_frame + 0x28)) = (uint)(ushort)(uVar4 + uVar5);
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x38))))(*(int * PTR32 *)(this + 0x184));
  F_00596b10(pvVar7,uVar6);
  AVar2 = this[0x13a];
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x4dc)));
  pbVar13 = ((byte *)(gen_frame + 0x4));
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x38))))(*(int * PTR32 *)(this + 0x184));
  F_00590ad0(pvVar7,2,(uint)(byte)AVar2,uVar6,pbVar13);
  pAVar11 = this + 400;
  param_2 = 2;
  pAVar9 = pAVar11;
  do {
    if (*(int *)pAVar9 == 0) {
      pvVar7 = (undefined *)0x0;
    }
    else {
      pvVar7 = *(undefined * PTR32 *)(*(int *)pAVar9 + 0x70);
    }
    F_0055a300(pvVar7,0);
    pAVar9 = pAVar9 + 0x10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  bVar12 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x1c)) + 0x20) + 0x6b4))) != 0;
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x14)) + 0)) = bVar12;
  (*(int *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x14)), 1, 3),bVar12);
  if (bVar12) {
    F_00559f40(*(undefined4 *)(this + 0x18c),(*(uint *)(gen_frame + 0x28)));
    if (*(int *)pAVar11 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(*(int *)pAVar11 + 0x70);
    }
    uVar4 = F_0055a030(uVar8);
    uVar5 = F_0055a030(*(undefined4 *)(this + 0x18c));
    param_2 = (uint)(ushort)(uVar5 - uVar4);
    (*(uint *)(gen_frame + 0x20)) = 0;
    iVar10 = 0x4e8;
    do {
      F_00584110(*(undefined * PTR32 *)(pAVar11 + 8),*((undefined4 *)GEN_TOP((iVar10 + -8 + *(int *)(iVar3 + 0x20)))));
      F_00584110(*(undefined * PTR32 *)(pAVar11 + 0xc),*((undefined4 *)GEN_TOP((iVar10 + *(int *)(iVar3 + 0x20)))));
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar11 + 0x38))))(*(int * PTR32 *)pAVar11);
      F_00596b10((*(undefined * PTR32 *)(gen_frame + 0x24)),uVar6);
      (*(uint *)(gen_frame + 0x18)) = (uint)(byte)this[0x13a];
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = *((undefined4 *)GEN_TOP((iVar10 + 8 + *(int *)(iVar3 + 0x20))));
      pbVar13 = ((byte *)(gen_frame + 0x4));
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar11 + 0x38))))(*(int * PTR32 *)pAVar11);
      F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x24)),2,(*(uint *)(gen_frame + 0x18)),uVar6,pbVar13);
      pvVar7 = (undefined *)0x0;
      if (*(int *)pAVar11 != 0) {
        pvVar7 = *(undefined * PTR32 *)(*(int *)pAVar11 + 0x70);
      }
      F_0055a300(pvVar7,1);
      uVar8 = 0;
      if (*(int *)pAVar11 != 0) {
        uVar8 = *(undefined4 *)(*(int *)pAVar11 + 0x70);
      }
      F_00559f00(uVar8,(float)(int)(short)param_2);
      if (*(int *)pAVar11 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(*(int *)pAVar11 + 0x70);
      }
      uVar4 = F_0055a030(uVar8);
      param_2 = (uint)(ushort)((short)param_2 + uVar4);
      F_0059d670(*(undefined * PTR32 *)(pAVar11 + 4),(*(uint *)(gen_frame + 0x20)) + 0x65);
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
      iVar10 = iVar10 + 4;
      pAVar11 = pAVar11 + 0x10;
    } while (iVar10 < 0x4f0);
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + param_2;
  }
  F_0055a300(*(undefined * PTR32 *)(this + 0x18c),(*(int *)(gen_frame + 0x14)));
  (*(uint *)(gen_frame + 0x18)) = 0;
  F_00559f40(*(undefined4 *)(this + 0x1b0),(*(uint *)(gen_frame + 0x28)));
  pAVar11 = this + 0x1b4;
  if (*(int *)(this + 0x1b4) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1b4) + 0x70)));
  }
  uVar4 = F_0055a030(uVar8);
  uVar5 = F_0055a030(*(undefined4 *)(this + 0x1b0));
  (*(uint *)(gen_frame + 0x20)) = (uint)(ushort)(uVar5 - uVar4);
  (*(int *)(gen_frame + 0x14)) = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x1c)) + 0x20) + 0x6b8)));
  param_2 = 0;
  iVar10 = 0x4f8;
  do {
    bVar12 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x1c)) + 0x20) + 0x1c4 + iVar10))) != 0;
    ((byte *)(gen_frame + 0x4))[0xc] = bVar12;
    if (bVar12) {
      F_00584110(*(undefined * PTR32 *)(pAVar11 + 8),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar10))));
      uVar8 = 0;
      if (*(int *)pAVar11 != 0) {
        uVar8 = *(undefined4 *)(*(int *)pAVar11 + 0x70);
      }
      F_00559f00(uVar8,(float)(int)(short)(*(uint *)(gen_frame + 0x20)));
      if (*(int *)pAVar11 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(*(int *)pAVar11 + 0x70);
      }
      uVar4 = F_0055a030(uVar8);
      sVar1 = (short)(*(uint *)(gen_frame + 0x20)) + uVar4;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = sVar1;
      (*(uint *)(gen_frame + 0x20)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)),sVar1);
      F_0059d670(*(undefined * PTR32 *)(*(int *)pAVar11 + 0x6c),
                   (-(uint)(param_2 != (*(int *)(gen_frame + 0x14))) & 0xfffffff6) + 0x11);
      F_0059d670(*(undefined * PTR32 *)(pAVar11 + 4),param_2 + 0x65);
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar11 + 0x38))))(*(int * PTR32 *)pAVar11);
    F_00596b10((*(undefined * PTR32 *)(gen_frame + 0x24)),uVar6);
    (*(uint *)(gen_frame + 0x28)) = (uint)(byte)this[0x13a];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xc + iVar10)));
    pbVar13 = ((byte *)(gen_frame + 0x4));
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar11 + 0x38))))(*(int * PTR32 *)pAVar11);
    F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x24)),2,(*(uint *)(gen_frame + 0x28)),uVar6,pbVar13);
    pvVar7 = (undefined *)0x0;
    if (*(int *)pAVar11 != 0) {
      pvVar7 = *(undefined * PTR32 *)(*(int *)pAVar11 + 0x70);
    }
    F_0055a300(pvVar7,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)));
    param_2 = param_2 + 1;
    iVar10 = iVar10 + 4;
    pAVar11 = pAVar11 + 0xc;
  } while (iVar10 < 0x504);
  uVar6 = F_0055a300(*(undefined * PTR32 *)(this + 0x1b0),(uint)(0 < (int)(*(uint *)(gen_frame + 0x18))));
  return uVar6;
}

/* ref: Client::UI2::AddonCharacterCurrency::vf53 */
uint F_0080c110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80c110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0055dcb0();
  this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)(byte)this[0x13c]);
  if ((this_00 != (undefined *)0x0) && ((char)param_1 != '\0')) {
    bVar1 = F_0056b780(this_00,0);
    this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  }
  return (uint)this_00;
}

/* ref: FUN_0080c150 */
uint F_0080c150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80c150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  undefined4 in_ecx;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((int *)(gen_frame + 0x10))[0xe] = uVar1;
  if ((*(byte *)((int)this + 0xf9) & 1) == 0) goto LAB_0080c27c;
  iVar4 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  uVar1 = F_0055a2d0(*(undefined4 *)((int)this + 0x18c));
  ((int *)(gen_frame + 0x10))[0] = -1;
  ((int *)(gen_frame + 0x10))[1] = 0;
  ((int *)(gen_frame + 0x10))[2] = 0;
  ((int *)(gen_frame + 0x10))[5] = 2;
  ((int *)(gen_frame + 0x10))[10] = 2;
  if ((char)uVar1 == '\0') {
    ((int *)(gen_frame + 0x10))[3] = 1;
    ((int *)(gen_frame + 0x10))[4] = 2;
    ((int *)(gen_frame + 0x10))[6] = 2;
    ((int *)(gen_frame + 0x10))[7] = 2;
    ((int *)(gen_frame + 0x10))[8] = 2;
    ((int *)(gen_frame + 0x10))[9] = 1;
    ((int *)(gen_frame + 0x10))[0xb] = 2;
    ((int *)(gen_frame + 0x10))[0xc] = 2;
    ((int *)(gen_frame + 0x10))[0xd] = 2;
    iVar2 = ((int *)(gen_frame + 0x10))[(int)(param_1)];
LAB_0080c213: ;
    ((int *)(gen_frame + 0x10))[9] = 1;
    ((int *)(gen_frame + 0x10))[3] = 1;
    if (iVar2 < 0) goto LAB_0080c25d;
    piVar3 = (int *)((int)this + 0x1b4);
    do {
      in_ecx = 0;
      if (*piVar3 != 0) {
        in_ecx = *(undefined4 *)(*piVar3 + 0x70);
      }
      uVar1 = F_0055a2d0(in_ecx);
      if ((char)uVar1 != '\0') {
        (*(uint *)(gen_frame + 0xc)) = ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0x3c))((int *)*piVar3);
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) break;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar4 < 3);
LAB_0080c254: ;
    if ((*(uint *)(gen_frame + 0xc)) == 0) goto LAB_0080c25d;
  }
  else {
    ((int *)(gen_frame + 0x10))[3] = 1;
    ((int *)(gen_frame + 0x10))[4] = 1;
    ((int *)(gen_frame + 0x10))[6] = 4;
    ((int *)(gen_frame + 0x10))[7] = 4;
    ((int *)(gen_frame + 0x10))[8] = 1;
    ((int *)(gen_frame + 0x10))[9] = 1;
    ((int *)(gen_frame + 0x10))[0xb] = 4;
    ((int *)(gen_frame + 0x10))[0xc] = 4;
    ((int *)(gen_frame + 0x10))[0xd] = 4;
    iVar2 = ((int *)(gen_frame + 0x10))[(int)(param_1)];
    if (-1 < iVar2) {
      if (1 < iVar2) {
        iVar2 = iVar2 + -2;
        goto LAB_0080c213;
      }
      piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + (iVar2 + 0x19) * 0x10)));
      (*(uint *)(gen_frame + 0xc)) = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
      goto LAB_0080c254;
    }
LAB_0080c25d: ;
    (*(uint *)(gen_frame + 0xc)) = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x3c))))(*(int * PTR32 *)((int)this + 0x184));
  }
  uVar1 = F_0059b340(this,(*(uint *)(gen_frame + 0xc)),1,param_2);
LAB_0080c27c: ;
  F_00c47745(((int *)(gen_frame + 0x10))[0xe] ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterInspect::vf37 */
uint F_0080c290(unsigned int gen_a0)
{
  GEN_ENTER(0x80c290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined * pAVar2;
  int local_8;
  
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),6,0,this,0);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),7,0,this,0);
  uVar1 = F_0055dcb0();
  this_00 = (undefined *)(uVar1 + 0xe0);
  pAVar2 = this + 0x1b8;
  local_8 = 0xe;
  do {
    if (*(int *)pAVar2 != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar2 + 0x38))))(*(int * PTR32 *)pAVar2);
      F_00596b10(this_00,uVar1);
    }
    pAVar2 = pAVar2 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  F_00596b10(this_00,*(undefined4 *)(this + 0x25c));
  F_00596b10(this_00,*(undefined4 *)(this + 0x278));
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_0080c320 */
uint F_0080c320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80c320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  int * piVar7;
  undefined4 * puVar8;
  
  if (((*(byte *)(param_1 + 0x10) & 0xf) == 0) || (*(int *)(param_1 + 0x14) == 0)) {
    if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x228),uVar3);
    if ((*(byte *)(param_1 + 0x18) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x18) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x228),uVar3);
    if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x22c),uVar3);
  if ((*(byte *)(param_1 + 0x28) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x248),uVar3);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x23c),1);
  if ((*(byte *)(param_1 + 0x30) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
  }
  F_00591c00(*(undefined * PTR32 *)((int)this + 0x23c),uVar3,0);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  if ((*(byte *)(param_1 + 0x38) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x240),uVar3);
  F_00559d10(*(undefined4 *)((int)this + 0x240),&(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x1c)));
  if ((*(byte *)(param_1 + 0x40) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x44);
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x244),uVar3);
  pvVar6 = *(undefined * PTR32 *)((int)this + 0x240);
  (*(uint * PTR32 *)(gen_frame + 0x24)) = (uint *)(uint)*(ushort *)((int)this + 0x28a);
  (*(int *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x244);
  uVar4 = F_00577bc0(pvVar6,0,0,REFG(undefined4, 0x108cc50),0);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)uVar4;
  uVar2 = F_00559d70(pvVar6);
  F_00559eb0((*(int *)(gen_frame + 0x28)),(uint)(ushort)((short)(*(undefined * PTR32 *)(gen_frame + 0x20)) + uVar2 + (short)(*(uint * PTR32 *)(gen_frame + 0x24))));
  uVar4 = F_0055dcb0();
  (*(uint * PTR32 *)(gen_frame + 0x24)) = (uint *)(param_1 + 0x124);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)(uVar4 + 0xe0);
  (*(int *)(gen_frame + 0x28)) = 0;
  piVar7 = (int *)((int)this + 0x180);
  do {
    iVar5 = piVar7[0xe];
    if ((iVar5 != 0) && (*piVar7 != 0)) {
      pvVar6 = (undefined *)piVar7[0x1c];
      if ((((*(uint * PTR32 *)(gen_frame + 0x24))[-0x37] & 0xf) == 0) || ((*(uint *)(gen_frame + 0x14)) = (*(uint * PTR32 *)(gen_frame + 0x24))[-0x36], (*(uint * PTR32 *)(gen_frame + 0x24))[-0x36] == 0)) {
        F_0059d670(*(undefined * PTR32 *)(iVar5 + 0x6c),0x66);
        if (pvVar6 != (undefined *)0x0) {
          F_0055a300(pvVar6,1);
        }
      }
      else {
        F_0059d670(*(undefined * PTR32 *)(iVar5 + 0x6c),0x65);
        F_00595190((undefined *)*piVar7,(*(uint *)(gen_frame + 0x14)),0,0);
        if (pvVar6 != (undefined *)0x0) {
          F_0055a300(pvVar6,0);
        }
        if (((*(uint * PTR32 *)(gen_frame + 0x24))[-1] & 0xf) == 0) {
          bVar1 = 0;
        }
        else {
          bVar1 = (byte)*(*(uint * PTR32 *)(gen_frame + 0x24));
        }
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = bVar1 & 1;
        (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),bVar1) & 0xffffff01;
        if (((*(uint * PTR32 *)(gen_frame + 0x24))[-1] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(*(uint * PTR32 *)(gen_frame + 0x24));
        }
        F_005a03c0((undefined *)*piVar7,uVar4 >> 1);
        F_00561860((undefined *)*piVar7,(*(uint *)(gen_frame + 0x10)));
        F_00560760(&(*(undefined4 *)(gen_frame + 0x4)));
        bVar1 = *(byte *)((int)this + 0x13a);
        (*(undefined1 *)(gen_frame + 0xe)) = 2;
        (*(undefined4 *)(gen_frame + 0x8)) = 0x2f;
        (*(undefined1 *)(gen_frame + 0xf)) = (undefined1)(*(int *)(gen_frame + 0x28));
        puVar8 = &(*(undefined4 *)(gen_frame + 0x4));
        uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar7[0xe] + 0x38))((int *)piVar7[0xe]);
        F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x20)),4,(uint)bVar1,uVar4,puVar8);
        if ((*(byte *)(param_1 + 400) & 0xf) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 0x194);
        }
        iVar5 = (-(uint)(iVar5 != 0) & 0x52) + 0x13;
        pvVar6 = (undefined *)F_00561490((undefined *)*piVar7,6);
        F_0059d640(pvVar6,iVar5);
      }
    }
    iVar5 = (*(int *)(gen_frame + 0x28)) + 1;
    (*(uint * PTR32 *)(gen_frame + 0x24)) = (*(uint * PTR32 *)(gen_frame + 0x24)) + 2;
    piVar7 = piVar7 + 1;
    (*(int *)(gen_frame + 0x28)) = iVar5;
  } while (iVar5 < 0xe);
  if (((*(byte *)(param_1 + 0xc0) & 0xf) != 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    F_0055a300(*(undefined * PTR32 *)((int)this + 600),1);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x260),1);
    if ((*(byte *)(param_1 + 0xd0) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0xd4);
    }
    F_00591c00(*(undefined * PTR32 *)((int)this + 600),uVar3,0);
    uVar4 = F_0055dcb0();
    piVar7 = (int *)F_0055b990(uVar4);
    iVar5 = *((int *)GEN_TOP((*(int *)(*piVar7 + 0x20) + 0x44)));
    if (((iVar5 != 0) && (iVar5 != 4)) && (iVar5 != 5)) {
      if ((*(byte *)(param_1 + 0xe0) & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0xe4);
      }
      F_00584110(*(undefined * PTR32 *)((int)this + 0x260),uVar3);
      F_00560760(&(*(undefined4 *)(gen_frame + 0x4)));
      if ((*(byte *)(param_1 + 0xd8) & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0xdc);
      }
      (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
      uVar4 = F_00590ad0((*(undefined * PTR32 *)(gen_frame + 0x20)),2,(uint)*(byte *)((int)this + 0x13a),
                           *(undefined4 *)((int)this + 0x25c),&(*(undefined4 *)(gen_frame + 0x4)));
      return uVar4;
    }
    if ((*(byte *)(param_1 + 0xd8) & 0xf) != 0) {
      uVar4 = F_00584110(*(undefined * PTR32 *)((int)this + 0x260),*(undefined4 *)(param_1 + 0xdc));
      return uVar4;
    }
    uVar4 = F_00584110(*(undefined * PTR32 *)((int)this + 0x260),0);
    return uVar4;
  }
  uVar4 = F_0059d640(*(undefined * PTR32 *)((int)this + 0x254),0x65);
  return uVar4;
}

/* ref: FUN_0080c700 */
uint F_0080c700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80c700u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  ushort uVar2;
  undefined2 extraout_var = 0;
  undefined * this_00;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar3 = (*(uint *)&gen_args[1]);
  if ((((*(byte *)((*(uint *)&gen_args[1]) + 0xb8) & 0xf) != 0) &&
      (pcVar1 = *(char * PTR32 *)((*(uint *)&gen_args[1]) + 0xbc), pcVar1 != (char *)0x0)) && (*pcVar1 != '\0')) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) + 0x70)));
    }
    F_0055a300(this_00,1);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))),pcVar1);
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))),0);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    (*(uint *)&gen_args[1]) = 0;
    F_00577d20(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0,0,REFG(undefined4, 0x108cc50),0);
    uVar3 = (uint)(ushort)(*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x288))) + (short)(*(uint *)&gen_args[1]));
    uVar2 = F_0055a020(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))));
    uVar2 = F_0055a040(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))),(uint)uVar2,uVar3);
    uVar3 = CONCAT22(extraout_var,uVar2);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonCharacterBonus::vf37 */
uint F_0080c7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x80c7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  F_005a92d0(this,1,0x3d,0);
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1d4) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d4) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0x2c,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1cc) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0x2d,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1d0) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0x2e,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1b4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b4) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,7,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1bc) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1bc) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0x13,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1b8) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b8) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0xd,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1c0) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c0) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0x19,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1c4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c4) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0x1f,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1c8) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0x25,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacterBonus::vf47 */
uint F_0080c8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80c8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined * this_00;
  undefined * pvVar3;
  uint uVar4;
  undefined * pAVar5;
  
  iVar1 = *(int *)(param_1 + 0xf4);
  pAVar5 = this + 0x19c;
  param_1 = 6;
  do {
    uVar2 = *((undefined4 *)GEN_TOP((pAVar5 + *(int *)(iVar1 + 0x20) + (0x548 - (int)this))));
    *(undefined4 *)(pAVar5 + 0x5c) = uVar2;
    F_0057eb30(*(undefined * PTR32 *)pAVar5,uVar2,0,0,0,0);
    F_0057eb30(*(undefined * PTR32 *)(pAVar5 + -0x18),
                 *((undefined4 *)GEN_TOP((pAVar5 + *(int *)(iVar1 + 0x20) + (0x52c - (int)this)))),0,0,0,0);
    pAVar5 = pAVar5 + 4;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *(undefined4 *)(this + 0x1f0) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x700)));
  *(undefined4 *)(this + 500) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x6fc)));
  pAVar5 = this + 0x1f8;
  param_1 = 6;
  do {
    this_00 = *(undefined * PTR32 *)(pAVar5 + -0x44);
    if (this_00 != (undefined *)0x0) {
      F_0059cf90(this_00,0,0,1);
      F_0059d040(this_00,0,1,1);
      pvVar3 = (undefined *)F_00561530(this_00,2);
      F_0057eb30(pvVar3,0,0,0,0,0);
      F_0059d070(this_00,*(int *)(this + 500) - *(int *)pAVar5,1,1);
      pvVar3 = (undefined *)F_00561530(this_00,4);
      F_0057eb30(pvVar3,*(int *)(this + 500) - *(int *)pAVar5,0,0,0,0);
      F_00563ad0(this_00,0);
    }
    pAVar5 = pAVar5 + 4;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  F_0057eb30(*(undefined * PTR32 *)(this + 0x180),*(undefined4 *)(this + 0x1f0),0,0,0,0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 0x28))))(*(int * PTR32 *)(this + 0x1d4),0);
  uVar4 = F_007ac4e0(this);
  return uVar4;
}

/* ref: FUN_0080ca40 */
uint F_0080ca40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x80ca40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  F_00557670(param_3,0);
  uVar1 = F_007ac4e0(this);
  return uVar1;
}

/* ref: FUN_0080ca80 */
unsigned int F_0080ca80(unsigned int gen_a0)
{
  GEN_ENTER(0x80ca80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = 0;
    this_00 = (undefined *)F_00564700(*(int *)this);
    F_0055a300(this_00,uVar1);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_0080caa0 */
uint F_0080caa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80caa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined1 * puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x74) != 0) {
    F_00406b30(*(int *)((int)this + 0x74));
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  uVar4 = 0;
  *(short *)((int)this + 0x78) = (short)param_1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_1 * 0x1c >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 0x1c),0,uVar1,uVar4);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    iVar3 = param_1 - 1;
    if (-1 < iVar3) {
      puVar2 = (undefined1 *)(uVar1 + 0x19);
      do {
        *(undefined4 *)(puVar2 + -0x19) = 0;
        *(undefined4 *)(puVar2 + -9) = 0xffffffff;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x1c;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      *(uint *)((int)this + 0x74) = uVar1;
      return uVar1;
    }
  }
  *(uint *)((int)this + 0x74) = uVar1;
  return uVar1;
}

/* ref: FUN_0080cb30 */
uint F_0080cb30(unsigned int gen_a0)
{
  GEN_ENTER(0x80cb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  int local_8;
  
  uVar1 = 0;
  uVar2 = 0;
  if (*(short *)((int)this + 0x38) != 0) {
    local_8 = 0;
    do {
      uVar1 = *(uint *)((int)this + 0x74);
      if (((uVar1 != 0) && (uVar2 < *(ushort *)((int)this + 0x78))) &&
         (piVar3 = (int *)(local_8 + uVar1), piVar3 != (int *)0x0)) {
        if (*piVar3 != 0) {
          uVar4 = 0;
          this_00 = (undefined *)F_00564700(*piVar3);
          uVar1 = F_0055a300(this_00,uVar4);
        }
        *piVar3 = 0;
      }
      uVar2 = uVar2 + 1;
      local_8 = local_8 + 0x1c;
    } while (uVar2 < *(ushort *)((int)this + 0x38));
  }
  return uVar1;
}

/* ref: FUN_0080cb90 */
uint F_0080cb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80cb90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  undefined * this;
  uint uVar5;
  undefined * in_EAX = 0;
  float10 fVar6;
  float10 fVar7;
  
  if (*(char *)(param_1 + 0x4ee) != '\0') {
    sVar3 = *(short *)param_2;
    sVar4 = *(short *)(param_2 + 2);
    fVar1 = *(float *)(param_1 + 0x254);
    *(float *)(param_1 + 0x254) = (float)(int)sVar3;
    fVar2 = *(float *)(param_1 + 600);
    *(float *)(param_1 + 600) = (float)(int)sVar4;
    fVar6 = (float10)(float)((float10)(int)sVar3 - (float10)fVar1);
    *(float *)(param_1 + 0x244) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x244) - fVar6)));
    fVar7 = (float10)(float)((float10)(int)sVar4 - (float10)fVar2);
    *(float *)(param_1 + 0x248) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x248) - fVar7)));
    F_007ad100((undefined *)(param_1 + 0x204));
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x25c);
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x260);
    this = *(undefined * PTR32 *)(param_1 + 0x1a0);
    *(undefined1 *)(param_1 + 0x4ef) = 0;
    if ((this != (undefined *)0x0) && (*(char *)((int)this + 0x88) != '\0')) {
      F_0059dde0(this,0);
    }
    in_EAX = (undefined *)F_007ace70((undefined *)(param_1 + 0x204));
    uVar5 = *(uint *)(param_1 + 0x4a8);
    if ((uVar5 != 0xffffffff) &&
       (*(double *)&REFG(undefined, 0x1090710) < (double)(float)(fVar7 * fVar7 + fVar6 * fVar6))) {
      if ((uVar5 <= *(uint *)(param_1 + 0x4bc)) &&
         ((in_EAX = (undefined *)F_007accb0((undefined *)(param_1 + 0x204),uVar5), in_EAX != (undefined *)0x0 &&
          (*(char *)((int)in_EAX + 0x19) != '\0')))) {
        in_EAX = (undefined *)F_007ac8c0(in_EAX,1);
      }
      *(undefined4 *)(param_1 + 0x4a8) = 0xffffffff;
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_0080ccd0 */
uint F_0080ccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80ccd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(bool *)((int)this + 0x4f1) = (char)param_1 == '\0';
  this_00 = *(undefined * PTR32 *)((int)this + 0x1a4);
  if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x88) != (char)param_1)) {
    F_0059dde0(this_00,param_1);
  }
  uVar1 = F_007ae540(this);
  return uVar1;
}

/* ref: FUN_0080cd10 */
uint F_0080cd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80cd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  char cVar3;
  int iVar4;
  undefined1 * this_01;
  
  this_01 = (gen_frame + 0x1c);
  this_00 = *(undefined * PTR32 *)((int)this + 0x1a0);
  cVar3 = (char)param_1;
  *(char *)((int)this + 0x4ef) = cVar3;
  if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x88) != cVar3)) {
    F_0059dde0(this_00,param_1);
  }
  if (cVar3 != '\0') {
    *(undefined4 *)((int)this + 0x494) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar4 = 1;
    do {
      this_01 = this_01 + -8;
      F_005a2670(this_01);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b990(uVar1);
  puVar2 = (uint *)0x0;
  if (uVar1 != 0) {
    puVar2 = (uint *)0x0;
    if (*(int *)(uVar1 + 0xd4) != 0) {
      puVar2 = *((uint * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0xd4) + 0x20)));
      *puVar2 = *puVar2 | 2;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_0080cdc0 */
uint F_0080cdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80cdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)((int)this + 0x4ec) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x1f8) != (undefined *)0x0) {
    F_005614a0(*(undefined * PTR32 *)((int)this + 0x1f8),((short *)(gen_frame + 0x38)),((short *)(gen_frame + 0x30)));
    pvVar1 = (undefined *)0x0;
    if (*(int *)((int)this + 0x1f8) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0x70)));
    }
    F_0055a000(pvVar1,((ushort *)(gen_frame + 0x34)),((ushort *)(gen_frame + 0x2c)));
    if ((((*param_1 < ((short *)(gen_frame + 0x38))[0]) || ((int)((uint)((ushort *)(gen_frame + 0x34))[0] + (int)((short *)(gen_frame + 0x38))[0]) < (int)*param_1)) ||
        (param_1[1] < ((short *)(gen_frame + 0x30))[0])) ||
       ((int)((uint)((ushort *)(gen_frame + 0x2c))[0] + (int)((short *)(gen_frame + 0x30))[0]) < (int)param_1[1])) {
      F_00557640(((undefined1 *)(gen_frame + 0xc)),7);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 2);
      uVar3 = 0;
      if (*(int *)((int)this + 0x1f8) != 0) {
        uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0x70)));
      }
      F_005997b0(uVar3,((undefined1 *)(gen_frame + 0xc)));
    }
  }
  F_0056ae10(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,1);
  uVar4 = 0xf;
  uVar3 = 4;
  pvVar1 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_00586850(this_00,uVar3,uVar4,pvVar1);
  uVar4 = 0xd;
  uVar3 = 5;
  pvVar1 = (undefined *)F_0055dcb0();
  uVar2 = F_00586850(pvVar1,uVar3,uVar4,this);
  return uVar2;
}

/* ref: FUN_0080ceb0 */
uint F_0080ceb0(unsigned int gen_a0)
{
  GEN_ENTER(0x80ceb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(short *)((int)this + 0x4c2) != -1) {
    bVar2 = *(byte *)((int)this + 0x13a);
    uVar3 = F_0055dcb0();
    uVar4 = 0;
    F_00596cb0((undefined *)(uVar3 + 0xe0),(uint)bVar2,0);
    uVar3 = F_0055dcb0();
    if ((*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x1c) + 4))) == this) && (*(int *)((int)this + 0x184) != 0)) {
      uVar3 = F_0055dcb0();
      bVar2 = F_005615c0(*(undefined4 *)((int)this + 0x184),
                           *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x1c) + 8))));
      if (bVar2 != 0) {
        uVar3 = F_0055dcb0();
        iVar1 = *(int *)(uVar3 + 0x1c);
        *(undefined4 *)(iVar1 + 4) = 0;
        *(undefined4 *)(iVar1 + 8) = 0;
        *(undefined1 *)(iVar1 + 0x20) = 0;
      }
    }
    F_0080cb30((undefined *)((int)this + 0x204));
    if (*(int *)((int)this + 0x274) != 0) {
      do {
        F_00591760(*(undefined * PTR32 *)((int)this + 0x274),uVar4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 4);
    }
    *(undefined4 *)((int)this + 0x208) = 0;
    *(undefined4 *)((int)this + 0x4bc) = 0;
    *(undefined2 *)((int)this + 0x4c2) = 0xffff;
  }
  return 0xffff;
}

/* ref: FUN_0080cf70 */
unsigned int F_0080cf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x80cf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined * this_00;
  undefined4 * in_ecx;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  in_ecx = (*(undefined4 * PTR32 *)&gen_args[1]);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    return 0;
  }
  this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  F_00595840(this_00,(*(undefined4 *)&gen_args[2]));
  F_005958b0(this_00,(*(undefined4 *)&gen_args[3]));
  if (!(*(double *)&REFG(undefined, 0x1094878) < (double)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))))) {
    uVar5 = 0;
    pvVar1 = (undefined *)F_00564820(this_00);
    F_0055a300(pvVar1,uVar5);
    uVar5 = 0;
    pvVar1 = (undefined *)F_00564840(this_00);
    F_0055a300(pvVar1,uVar5);
  }
  uVar2 = F_005646f0(this_00);
  if (uVar2 == 1) {
    uVar2 = F_007ac840((*(undefined4 * PTR32 *)&gen_args[1]));
    uVar3 = F_005647a0(this_00);
  }
  else {
    if (uVar2 != 2) {
      if (uVar2 == 3) {
        uVar2 = F_00564820(this_00);
        uVar2 = F_0055a2d0(uVar2);
        (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3),(char)uVar2)));
        uVar3 = F_007ac7d0(in_ecx);
        if (uVar3 == 1) {
          uVar4 = F_005647e0(this_00);
          F_005648a0(this_00,uVar4,uVar3);
          if ((char)uVar2 == '\0') {
            uVar2 = F_005647e0(this_00);
          }
          else {
            uVar2 = F_00564820(this_00);
          }
          uVar3 = F_007ac7d0(in_ecx);
          F_0057e2a0(this_00,(short)this_00,(short)in_ecx,uVar2,uVar3);
        }
        else {
          uVar2 = F_007ac7d0(in_ecx);
          uVar3 = F_005647e0(this_00);
          F_0057e2a0(this_00,(short)this_00,(short)in_ecx,uVar3,uVar2);
          uVar3 = 2;
          uVar2 = F_005647a0(this_00);
          F_005648a0(this_00,uVar2,uVar3);
        }
        pvVar1 = (undefined *)F_00564880(this_00);
        F_0055a300(pvVar1,(*(undefined4 * PTR32 *)&gen_args[1]));
        F_00576260(this_00);
      }
      goto LAB_0080d0b1;
    }
    uVar2 = F_007ac840((*(undefined4 * PTR32 *)&gen_args[1]));
    uVar3 = F_005647e0(this_00);
  }
  F_005648a0(this_00,uVar3,uVar2);
LAB_0080d0b1: ;
  pvVar1 = (undefined *)F_0057e180(this_00);
  if (((char)(*(undefined4 *)&gen_args[4]) == '\0') ||
     (uVar2 = F_005646f0(this_00), *(int *)(&REFG(undefined, 0x10d5b30) + uVar2 * 4) == 0)) {
    uVar2 = F_005646f0(this_00);
    if (*(int *)(&REFG(undefined, 0x10d5b20) + uVar2 * 4) != 0) {
      uVar2 = F_005646f0(this_00);
      F_0059d640(pvVar1,*(undefined4 *)(&REFG(undefined, 0x10d5b20) + uVar2 * 4));
    }
  }
  else {
    uVar2 = F_005646f0(this_00);
    uVar3 = F_00559cf0(pvVar1);
    if ((uVar3 & 0xffff) != *(uint *)(&REFG(undefined, 0x10d5b30) + uVar2 * 4)) {
      uVar2 = F_005646f0(this_00);
      F_0059d640(pvVar1,*(undefined4 *)(&REFG(undefined, 0x10d5b30) + uVar2 * 4));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0080d140 */
unsigned int F_0080d140(unsigned int gen_a0)
{
  GEN_ENTER(0x80d140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  char cVar2;
  
  cVar2 = -1;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)this) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),0xff);
  if (*(char *)((int)this + 0x4f1) == '\0') {
    uVar1 = F_0055dcb0();
    if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0x14) + 0xcc))) != this) {
      cVar2 = *(char *)((int)this + 0x4f8);
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar2);
    }
  }
  *(char *)((int)this + 0x13f) = cVar2;
  if (((byte)(*(uint *)((int)this + 0xf4) >> 0x14) & 0xf) == 3) {
    F_0055a200(*(undefined4 *)((int)this + 0x90),(*(undefined4 *)(gen_frame + 0x8)));
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x188),(uint)(cVar2 == -1));
  }
  return 0;
}

/* ref: FUN_0080d1c0 */
unsigned int F_0080d1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80d1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined1 *)((int)this + 0x4f8) = (undefined1)param_1;
  F_0080d140(this);
  return 0;
}

/* ref: FUN_0080d1e0 */
unsigned int F_0080d1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80d1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint3 uVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (this_00 = (undefined *)*param_1, this_00 != (undefined *)0x0)) {
    uVar1 = (uint3)((uint)((int)(uintptr_t)param_1) >> 8);
    if (*(char *)((int)param_1 + 0x19) == '\0') {
      if (((*(char *)(param_1 + 6) != '\0') && (*(char *)((int)this + 0x4f0) == '\0')) &&
         ((!GEN_ISNAN(*(float *)((int)this + 0x24c)) && !GEN_ISNAN(REFG(float, 0x1088068))) &&
          !(*(float *)((int)this + 0x24c) <= REFG(float, 0x1088068)))) {
        F_0056f120(this_00,CONCAT31(uVar1,1));
        return 0;
      }
    }
    else if (((*(char *)(param_1 + 6) != '\0') && (*(char *)((int)this + 0x4f0) == '\0')) &&
            ((!GEN_ISNAN(*(float *)((int)this + 0x24c)) && !GEN_ISNAN(REFG(float, 0x10c2084))) &&
             !(*(float *)((int)this + 0x24c) <= REFG(float, 0x10c2084)))) {
      F_0056f120(this_00,CONCAT31(uVar1,1));
      return 0;
    }
    F_0056f120(this_00,(uint)uVar1 << 8);
  }
  return 0;
}

/* ref: FUN_0080d260 */
uint F_0080d260(unsigned int gen_a0)
{
  GEN_ENTER(0x80d260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int in_ecx;
  double dVar2;
  byte bVar3;
  int * piVar4;
  undefined * pvVar5;
  undefined3 extraout_var = 0;
  uint uVar7;
  undefined3 extraout_var_00 = 0;
  uint local_10;
  int local_c;
  undefined * pvVar6;
  
  dVar2 = *(double *)&REFG(undefined, 0x1094878);
  piVar4 = (int *)0xffff;
  if (*(short *)((int)this + 0x4c2) != -1) {
    fVar1 = *(float *)((int)this + 0x24c);
    local_10 = 0;
    if (*(int *)((int)this + 0x4bc) != 0) {
      local_c = 0;
      do {
        piVar4 = *(int * PTR32 *)((int)this + 0x278);
        if ((((piVar4 != (int *)0x0) && (local_10 < *(ushort *)((int)this + 0x27c))) &&
            (piVar4 = (int *)((int)piVar4 + local_c), piVar4 != (int *)0x0)) &&
           (in_ecx = *piVar4, in_ecx != 0)) {
          pvVar5 = (undefined *)F_00564820(in_ecx);
          pvVar6 = pvVar5;
          if (dVar2 < (double)fVar1) {
            bVar3 = F_00577b50(pvVar5);
            pvVar6 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
            if (bVar3 == 0) goto LAB_0080d2ee;
            uVar7 = CONCAT31(extraout_var,1);
          }
          else {
LAB_0080d2ee: ;
            uVar7 = (uint)pvVar6 & 0xffffff00;
          }
          F_0055a300(pvVar5,uVar7);
          pvVar5 = (undefined *)F_00564840(in_ecx);
          pvVar6 = pvVar5;
          if (dVar2 < (double)fVar1) {
            bVar3 = F_00577b50(pvVar5);
            pvVar6 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_00,bVar3)));
            if (bVar3 == 0) goto LAB_0080d316;
            uVar7 = CONCAT31(extraout_var_00,1);
          }
          else {
LAB_0080d316: ;
            uVar7 = (uint)pvVar6 & 0xffffff00;
          }
          piVar4 = (int *)F_0055a300(pvVar5,uVar7);
        }
        local_c = local_c + 0x1c;
        local_10 = local_10 + 1;
      } while (local_10 < *(uint *)((int)this + 0x4bc));
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_0080d340 */
uint F_0080d340(unsigned int gen_a0)
{
  GEN_ENTER(0x80d340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  float10 fVar2;
  float10 fVar3;
  uint in_EAX = 0;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  iVar1 = *(int *)((int)this + 0x184);
  in_ecx = *(int *)((int)this + 0x200);
  if ((in_ecx != 0) && (iVar1 != 0)) {
    fVar6 = F_00559d60(*(undefined4 *)(iVar1 + 0x70));
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
    fVar2 = (float10)REFG(double, 0x1088108);
    fVar7 = F_0055a750(in_ecx);
    fVar8 = F_00559d80(*(undefined4 *)(iVar1 + 0x70));
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,0);
    fVar3 = (float10)REFG(double, 0x1088108);
    fVar9 = F_0055a760(in_ecx);
    in_EAX = F_00559da0(in_ecx,(float)(int)((float10)((double)GEN_TOD(((float10)(int)(short)(int)fVar6 +
                                                               (float10)(uVar4 & 0xffff) * fVar2))) -
                                             fVar7),
                          (float)(int)((float10)((double)GEN_TOD(((float10)(int)(short)(int)fVar8 +
                                                        (float10)(uVar5 & 0xffff) * fVar3))) - fVar9))
    ;
  }
  return in_EAX;
}

/* ref: FUN_0080d430 */
uint F_0080d430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80d430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(int *)((int)this + 0x4bc) - 1;
  if (-1 < (int)uVar4) {
    iVar5 = uVar4 * 0x1c;
    do {
      if ((((*(int *)((int)this + 0x278) != 0) && (uVar4 < *(ushort *)((int)this + 0x27c))) &&
          (puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x278) + iVar5))), puVar2 != (undefined4 *)0x0
          )) && ((undefined *)*puVar2 != (undefined *)0x0)) {
        uVar3 = param_3;
        if (*(short *)(puVar2 + 3) == 5) {
          uVar3 = 2;
        }
        bVar1 = F_00576160((undefined *)*puVar2,param_1,param_2,uVar3);
        if (bVar1 != 0) {
          return uVar4;
        }
      }
      iVar5 = iVar5 + -0x1c;
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  return 0xffffffff;
}

/* ref: FUN_0080d4b0 */
uint F_0080d4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80d4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 * this_00;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  *(undefined1 *)((int)this + 0x4fc) = 1;
  if (*(int *)((int)this + 0x18c) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
    uVar3 = 0;
    if (*(int *)((int)this + 0x18c) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x70)));
    }
    F_00559da0(uVar3,(float)(int)(short)((short)param_2 - (short)uVar2),
                 (float)(int)(short)((short)param_3 - (short)uVar1));
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 7;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar4 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return uVar1;
}

/* ref: FUN_0080d5a0 */
uint F_0080d5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80d5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = param_1;
  if (param_1 < (uint)(*(int *)((int)this + 0x28c) - *(int *)((int)this + 0x288) >> 3)) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x288) + param_1 * 8)));
    uVar4 = *puVar1;
    this_00 = (undefined *)F_00559ba0(param_2[1]);
    F_00584110(this_00,uVar4);
    uVar2 = F_00559b90(*param_2);
    uVar3 = F_0055da10(uVar2);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_0058f730((undefined *)(uVar3 + 4),puVar1[1],0,6);
    }
  }
  return uVar2;
}

/* ref: FUN_0080d610 */
unsigned int F_0080d610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80d610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_0055a300((undefined *)*param_1,0);
    this_00 = (undefined *)F_00559c20(*param_1);
    uVar1 = F_00568410((undefined *)*param_1);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 2: ;
    case 5: ;
    case 0xf: ;
      uVar1 = F_00561490(this_00,1);
      param_1[1] = uVar1;
      uVar1 = F_00561530(this_00,4);
      param_1[0x1d] = uVar1;
      uVar1 = F_00561550(this_00,3);
      param_1[0x1e] = uVar1;
      return 0;
    case 3: ;
      uVar1 = F_00561490(this_00,1);
      param_1[1] = uVar1;
      puVar2 = param_1 + 3;
      uVar1 = F_00561490(this_00,6);
      *puVar2 = uVar1;
      uVar1 = F_00561490(this_00,5);
      param_1[7] = uVar1;
      uVar1 = F_00561490(this_00,4);
      param_1[0xb] = uVar1;
      uVar1 = F_00561490(this_00,3);
      param_1[0xf] = uVar1;
      uVar1 = F_00561490(this_00,2);
      param_1[0x13] = uVar1;
      iVar3 = 5;
      do {
        F_007aed20(puVar2,1);
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return 0;
    case 4: ;
      uVar1 = F_00561490(this_00,1);
      puVar2 = param_1 + 3;
      param_1[1] = uVar1;
      uVar1 = F_00561490(this_00,6);
      *puVar2 = uVar1;
      uVar1 = F_00561490(this_00,5);
      param_1[7] = uVar1;
      uVar1 = F_00561490(this_00,4);
      param_1[0xb] = uVar1;
      uVar1 = F_00561490(this_00,3);
      param_1[0xf] = uVar1;
      uVar1 = F_00561490(this_00,2);
      param_1[0x13] = uVar1;
      uVar1 = F_00561490(this_00,7);
      param_1[0x17] = uVar1;
      iVar3 = 5;
      do {
        F_007aed20(puVar2,2);
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      F_007aed20(param_1 + 0x17,5);
      return 0;
    case 6: ;
      uVar1 = F_00561490(this_00,1);
      param_1[1] = uVar1;
      uVar1 = F_00561530(this_00,3);
      param_1[0x1b] = uVar1;
      uVar1 = F_00561530(this_00,4);
      param_1[0x1c] = uVar1;
      return 0;
    case 7: ;
    case 8: ;
    case 0xe: ;
      uVar1 = F_00561490(this_00,1);
      param_1[1] = uVar1;
      uVar1 = F_00561530(this_00,2);
      param_1[0x1c] = uVar1;
      break;
    case 9: ;
      uVar1 = F_00561490(this_00,1);
      param_1[1] = uVar1;
      uVar1 = F_00561530(this_00,2);
      param_1[0x1d] = uVar1;
      return 0;
    case 10: ;
      uVar1 = F_00561490(this_00,1);
      param_1[1] = uVar1;
      puVar2 = param_1 + 3;
      uVar1 = F_00561490(this_00,6);
      *puVar2 = uVar1;
      uVar1 = F_00561490(this_00,5);
      param_1[7] = uVar1;
      uVar1 = F_00561490(this_00,4);
      param_1[0xb] = uVar1;
      uVar1 = F_00561490(this_00,3);
      param_1[0xf] = uVar1;
      uVar1 = F_00561490(this_00,2);
      param_1[0x13] = uVar1;
      iVar3 = 5;
      do {
        F_007aed20(puVar2,3);
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return 0;
    case 0xb: ;
      uVar1 = F_00561490(this_00,1);
      puVar2 = param_1 + 3;
      param_1[1] = uVar1;
      uVar1 = F_00561490(this_00,6);
      *puVar2 = uVar1;
      uVar1 = F_00561490(this_00,5);
      param_1[7] = uVar1;
      uVar1 = F_00561490(this_00,4);
      param_1[0xb] = uVar1;
      uVar1 = F_00561490(this_00,3);
      param_1[0xf] = uVar1;
      uVar1 = F_00561490(this_00,2);
      param_1[0x13] = uVar1;
      uVar1 = F_00561490(this_00,7);
      param_1[0x17] = uVar1;
      iVar3 = 5;
      do {
        F_007aed20(puVar2,2);
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      F_007aed20(param_1 + 0x17,5);
      return 0;
    case 0xc: ;
      uVar1 = F_00561490(this_00,1);
      param_1[1] = uVar1;
      uVar1 = F_00561530(this_00,2);
      param_1[0x1c] = uVar1;
      puVar2 = param_1 + 3;
      uVar1 = F_00561490(this_00,7);
      *puVar2 = uVar1;
      uVar1 = F_00561490(this_00,6);
      param_1[7] = uVar1;
      uVar1 = F_00561490(this_00,5);
      param_1[0xb] = uVar1;
      uVar1 = F_00561490(this_00,4);
      param_1[0xf] = uVar1;
      uVar1 = F_00561490(this_00,3);
      param_1[0x13] = uVar1;
      iVar3 = 5;
      do {
        F_007aed20(puVar2,3);
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return 0;
    case 0xd: ;
      uVar1 = F_00561490(this_00,1);
      param_1[1] = uVar1;
      uVar1 = F_00561530(this_00,2);
      puVar2 = param_1 + 3;
      param_1[0x1c] = uVar1;
      uVar1 = F_00561490(this_00,7);
      *puVar2 = uVar1;
      uVar1 = F_00561490(this_00,6);
      param_1[7] = uVar1;
      uVar1 = F_00561490(this_00,5);
      param_1[0xb] = uVar1;
      uVar1 = F_00561490(this_00,4);
      param_1[0xf] = uVar1;
      uVar1 = F_00561490(this_00,3);
      param_1[0x13] = uVar1;
      iVar3 = 5;
      do {
        F_007aed20(puVar2,3);
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return 0;
    case 0x10: ;
      uVar1 = F_00561490(this_00,1);
      param_1[1] = uVar1;
      uVar1 = F_00561530(this_00,4);
      param_1[0x1d] = uVar1;
      uVar1 = F_00561530(this_00,5);
      param_1[0x1c] = uVar1;
      uVar1 = F_00561550(this_00,3);
      param_1[0x1e] = uVar1;
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0080da60 */
uint F_0080da60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80da60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  undefined * this_00;
  uint uVar2;
  byte * pbVar3;
  
  if (0x25 < param_1) {
    return 0;
  }
  this_00 = *(undefined * PTR32 *)(param_1 * 0x7c + 0x18c + (int)this);
  uVar2 = 0;
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  pbVar3 = (byte *)((int)this + 0x13ff);
  while ((*pbVar3 & 2) != 0) {
    uVar2 = uVar2 + 1;
    pbVar3 = pbVar3 + 0x7c;
    if (0x4b < uVar2) {
      return 0;
    }
  }
  puVar1 = (uint *)(uVar2 * 0x7c + 0x13f4 + (int)this);
  if (puVar1 != (uint *)0x0) {
    uVar2 = F_00568410(this_00);
    uVar2 = F_005a82c0((undefined *)((int)this + 0x24),uVar2,1,(uint)*(byte *)((int)puVar1 + 10));
    if (uVar2 != 0) {
      *(byte *)((int)puVar1 + 0xb) = *(byte *)((int)puVar1 + 0xb) | 2;
      *puVar1 = uVar2;
      F_0080d610(this,puVar1);
      return (uint)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_0080daf0 */
uint F_0080daf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80daf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = F_00568410((undefined *)*param_1);
    F_00590210((undefined *)((int)this + 0x24),uVar1,(uint)*(byte *)((int)param_1 + 10));
    *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 0xb) & 0xfd;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    if (param_1 + 0x17 != (undefined4 *)0x0) {
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
    }
    in_EAX = param_1 + 3;
    iVar2 = 5;
    do {
      if (in_EAX != (undefined4 *)0x0) {
        *in_EAX = 0;
        in_EAX[1] = 0;
        in_EAX[2] = 0;
        in_EAX[3] = 0;
      }
      in_EAX = in_EAX + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (uint)in_EAX;
}

/* ref: FUN_0080db70 */
uint F_0080db70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80db70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 * 9 + 99) * 4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = 4;
    break;
  case 1: ;
    uVar3 = 8;
    break;
  case 2: ;
    uVar3 = 5;
    break;
  case 3: ;
    uVar3 = 0x16;
    break;
  case 4: ;
    uVar3 = 0x17;
    break;
  case 5: ;
    uVar3 = 0xb;
    break;
  case 6: ;
    uVar3 = 0xc;
    break;
  case 7: ;
    uVar3 = 0x1e;
    break;
  case 8: ;
    uVar2 = F_005a82c0((undefined *)((int)this + 0x24),0x1e,1,0);
    *puVar1 = uVar2;
    uVar2 = F_007af110(puVar1,param_1);
    return uVar2;
  case 9: ;
    uVar3 = 0xe;
    break;
  case 10: ;
    uVar3 = 9;
    break;
  case 0xb: ;
    uVar3 = 10;
    break;
  case 0xc: ;
    uVar3 = 0x12;
    break;
  case 0xd: ;
    uVar3 = 0x13;
    break;
  case 0xe: ;
    uVar3 = 0x14;
    break;
  default: ;
    goto switchD_0080db8b_caseD_f;
  case 0x10: ;
    uVar3 = 0x15;
    break;
  case 0x11: ;
    uVar3 = 0xd;
    break;
  case 0x12: ;
    uVar3 = 6;
    break;
  case 0x13: ;
    uVar3 = 3;
    break;
  case 0x14: ;
    uVar2 = F_005a82c0((undefined *)((int)this + 0x24),3,1,1);
    *puVar1 = uVar2;
    uVar2 = F_007af110(puVar1,param_1);
    return uVar2;
  case 0x15: ;
    uVar2 = F_005a82c0((undefined *)((int)this + 0x24),3,1,2);
    *puVar1 = uVar2;
    uVar2 = F_007af110(puVar1,param_1);
    return uVar2;
  case 0x16: ;
    uVar3 = 0xf;
    break;
  case 0x17: ;
    uVar3 = 0x10;
    break;
  case 0x18: ;
    uVar3 = 0x11;
    break;
  case 0x19: ;
    uVar3 = 0x1b;
    break;
  case 0x1a: ;
    uVar3 = 0x1d;
    break;
  case 0x1b: ;
    uVar2 = F_005a82c0((undefined *)((int)this + 0x24),0x1d,1,3);
    *puVar1 = uVar2;
    uVar2 = F_007af110(puVar1,param_1);
    return uVar2;
  case 0x1c: ;
    uVar3 = 0x1a;
    break;
  case 0x1d: ;
    uVar3 = 0x1f;
    break;
  case 0x1e: ;
    uVar3 = 0x18;
    break;
  case 0x1f: ;
    uVar3 = 7;
    break;
  case 0x20: ;
    uVar3 = 2;
    break;
  case 0x21: ;
    uVar2 = F_005a82c0((undefined *)((int)this + 0x24),0x12,1,4);
    *puVar1 = uVar2;
    uVar2 = F_007af110(puVar1,param_1);
    return uVar2;
  case 0x22: ;
    uVar2 = F_005a82c0((undefined *)((int)this + 0x24),0x13,1,5);
    *puVar1 = uVar2;
    uVar2 = F_007af110(puVar1,param_1);
    return uVar2;
  case 0x23: ;
    uVar2 = F_005a82c0((undefined *)((int)this + 0x24),0x14,1,6);
    *puVar1 = uVar2;
    uVar2 = F_007af110(puVar1,param_1);
    return uVar2;
  case 0x24: ;
    uVar3 = 0x1c;
    break;
  case 0x25: ;
    uVar3 = 0x19;
  }
  uVar2 = F_0055e2f0(this,uVar3);
  *puVar1 = uVar2;
switchD_0080db8b_caseD_f: ;
  uVar2 = F_007af110(puVar1,param_1);
  return uVar2;
}

/* ref: FUN_0080dde0 */
uint F_0080dde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0x80dde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int param_8 = (int)gen_a7;
  float param_9 = (float)gen_a8;
  undefined * this;
  float fVar1;
  byte bVar2;
  undefined4 * puVar3;
  uint uVar4;
  float10 fVar5;
  
  if (0x25 < param_2) {
    return 0;
  }
  if ((*(byte *)((int)param_1 + param_2 * 0x24 + 400) & 1) == 0) {
    puVar3 = ((undefined4 *)GEN_TOP(((int)param_1 + (param_2 * 9 + 99) * 4)));
  }
  else {
    puVar3 = (undefined4 *)F_007af500(param_1,param_2);
  }
  if ((puVar3 != (undefined4 *)0x0) && ((undefined *)*puVar3 != (undefined *)0x0)) {
    *(ushort *)(puVar3 + 1) = *(ushort *)(puVar3 + 1) | 1;
    F_0055a300((undefined *)*puVar3,1);
    F_00568210(*puVar3,*(float *)((int)param_1 + 0x12f4),*(float *)((int)param_1 + 0x12f4));
    F_00559e70(*puVar3,(float)(float10)0);
    F_00559f00(*puVar3,param_9);
    if ((undefined *)puVar3[3] != (undefined *)0x0) {
      F_0057eb30((undefined *)puVar3[3],param_3,0,0,0,0);
      uVar4 = F_005612d0(param_6);
      F_0055ab90(puVar3[3],uVar4);
    }
    if (((undefined *)puVar3[4] != (undefined *)0x0) && (param_5 != 0)) {
      F_00584110((undefined *)puVar3[4],param_5);
      uVar4 = F_005612d0(param_6);
      F_0055ab90(puVar3[4],uVar4);
    }
    if (puVar3[5] != 0) {
      uVar4 = F_005612d0(param_6);
      F_0055ab90(puVar3[5],uVar4);
      if ((undefined *)puVar3[3] != (undefined *)0x0) {
        uVar4 = F_00577bc0((undefined *)puVar3[3],0,0,REFG(undefined4, 0x108cc50),0);
        fVar1 = (float)(int)uVar4;
        if ((int)uVar4 < 0) {
          fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
        }
        fVar5 = F_00559d60(puVar3[3]);
        F_00559e70(puVar3[5],((float)GEN_TOF(((fVar5 + (float10)fVar1) + (float10)*(double *)&REFG(undefined, 0x1092098))))
                    );
      }
    }
    if (puVar3[8] != 0) {
      uVar4 = F_0055da10(puVar3[8]);
      if (uVar4 != 0) {
        F_0058f730((undefined *)(uVar4 + 4),param_7,0,6);
      }
    }
    if (((undefined *)puVar3[6] != (undefined *)0x0) && (param_8 != 0)) {
      F_00584110((undefined *)puVar3[6],param_8);
      uVar4 = F_005612d0(param_6);
      F_0055ab90(puVar3[6],uVar4);
    }
    if (puVar3[7] != 0) {
      uVar4 = F_005612d0(param_6);
      F_0055ab90(puVar3[7],uVar4);
      this = (undefined *)puVar3[3];
      if ((this != (undefined *)0x0) &&
         (((bVar2 = *(byte *)((int)this + 0xfc) & 0xf, bVar2 == 0 || (bVar2 == 3)) || (bVar2 == 6)))
         ) {
        uVar4 = F_00577bc0(this,0,0,REFG(undefined4, 0x108cc50),0);
        fVar1 = (float)(int)uVar4;
        if ((int)uVar4 < 0) {
          fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
        }
        fVar5 = F_00559d60(puVar3[3]);
        F_00559e70(puVar3[7],((float)GEN_TOF(((fVar5 + (float10)fVar1) + (float10)*(double *)&REFG(undefined, 0x1092098))))
                    );
      }
    }
    return (uint)puVar3;
  }
  return 0;
}

/* ref: FUN_0080e000 */
unsigned int F_0080e000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80e000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfffe;
    F_0055a300((undefined *)*param_1,0);
    if ((*(byte *)(param_1 + 1) & 2) != 0) {
      uVar1 = F_00568410((undefined *)*param_1);
      F_00590210((undefined *)((int)this + 0x24),uVar1,(uint)*(ushort *)((int)param_1 + 6));
      *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfffd;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonSynthesis::vf37 */
uint F_0080e070(unsigned int gen_a0)
{
  GEN_ENTER(0x80e070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((((byte)this[0xf9] & 1) != 0) && (*(int *)(this + 0x180) != 0)) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf37 */
uint F_0080e0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x80e0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((((byte)this[0xf9] & 1) != 0) && (*(int *)(this + 0x180) != 0)) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_0080e0d0 */
byte F_0080e0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80e0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  byte * pbVar7;
  undefined4 uVar8;
  uint uVar9;
  uint local_c;
  uint local_8;
  
  uVar6 = 0;
  if ((param_1 != 0) && (param_2 != (byte *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    *(undefined4 *)((int)this + 0x8f8) = uVar1;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)((int)this + 0x8fc) = uVar1;
    if ((param_2[0x38] & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x3c);
    }
    if (iVar2 == 1) {
      *(undefined4 *)((int)this + 0x900) = 0;
    }
    else if (iVar2 == 2) {
      *(undefined4 *)((int)this + 0x900) = 2;
    }
    else if (iVar2 == 4) {
      *(undefined4 *)((int)this + 0x900) = 1;
    }
    if ((param_2[0x20] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
    }
    if ((param_2[0x18] & 0xf) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((param_2[0x30] & 0xf) != 0) {
      uVar6 = *(undefined4 *)(param_2 + 0x34);
    }
    if ((param_2[0x28] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_007b01c0(this,uVar1,uVar8,uVar6,uVar3);
    if ((param_2[0x10] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x14);
    }
    *(bool *)((int)this + 0x230) = (uVar4 & 1) != 0;
    *(bool *)((int)this + 0x231) = (uVar4 & 2) != 0;
    *(bool *)((int)this + 0x232) = (uVar4 & 4) != 0;
    *(bool *)((int)this + 0x233) = (uVar4 & 8) != 0;
    *(bool *)((int)this + 0x234) = (uVar4 & 0x10) != 0;
    *(bool *)((int)this + 0x235) = (uVar4 & 0x20) != 0;
    *(bool *)((int)this + 0x236) = (uVar4 & 0x40) != 0;
    *(bool *)((int)this + 0x237) = (uVar4 & 0x80) != 0;
    *(bool *)((int)this + 0x238) = (uVar4 & 0x100) != 0;
    *(bool *)((int)this + 0x239) = (uVar4 & 0x200) != 0;
    if ((param_2[0x688] & 0xf) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(uint *)(param_2 + 0x68c);
    }
    if ((param_2[0x780] & 0xf) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(uint *)(param_2 + 0x784);
    }
    if (param_1 != 0) {
      puVar5 = (undefined4 *)((int)this + 0x244);
      pbVar7 = param_2 + 0x6a4;
      local_c = param_1;
      uVar4 = 1;
      do {
        if ((pbVar7[-0x14] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(pbVar7 + -0x10);
        }
        puVar5[-2] = uVar6;
        if ((pbVar7[-0xc] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(pbVar7 + -8);
        }
        puVar5[-1] = uVar6;
        if ((pbVar7[-4] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)pbVar7;
        }
        *puVar5 = uVar6;
        *(bool *)(puVar5 + 1) = (local_8 & uVar4) != 0;
        puVar5 = puVar5 + 4;
        uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
        pbVar7 = pbVar7 + 0x18;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
    if (param_1 < 10) {
      iVar2 = 10 - param_1;
      puVar5 = (undefined4 *)((int)this + param_1 * 0x10 + 0x244);
      do {
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        *(undefined1 *)(puVar5 + 1) = 0;
        puVar5 = puVar5 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if ((param_2[0x8c8] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x8cc);
    }
    *(undefined4 *)((int)this + 0x904) = uVar6;
    if ((param_2[0x8d0] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x8d4);
    }
    *(uint *)((int)this + 0x908) = uVar4 & 0xff;
    *(uint *)((int)this + 0x90c) = uVar4 >> 8 & 0xff;
    if ((param_2[0x40] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x44);
    }
    *(uint *)((int)this + 0x854) = uVar4;
    if (0x32 < uVar4) {
      *(undefined4 *)((int)this + 0x854) = 0x32;
    }
    param_1 = 0;
    if (*(int *)((int)this + 0x8f8) == 3) {
      if (*(int *)((int)this + 0x854) != 0) {
        puVar5 = (undefined4 *)((int)this + 0x2e4);
        pbVar7 = param_2 + 0x54;
        do {
          if ((pbVar7[0xc] & 0xf) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(pbVar7 + 0x10);
          }
          uVar6 = 0;
          puVar5[-2] = 0;
          puVar5[-1] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 9;
          *(undefined2 *)(puVar5 + 4) = 0;
          if ((pbVar7[-4] & 0xf) != 0) {
            uVar6 = *(undefined4 *)pbVar7;
          }
          puVar5[-2] = uVar6;
          uVar9 = uVar4 >> 8 & 0xff;
          puVar5[-1] = *(undefined4 *)((int)this + uVar9 * 8 + 0x94c);
          if ((pbVar7[-0xc] & 0xf) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(pbVar7 + -8);
          }
          *puVar5 = uVar6;
          if ((pbVar7[4] & 0xf) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(pbVar7 + 8);
          }
          puVar5[1] = uVar6;
          *(bool *)(puVar5 + 4) = *(uint *)((int)this + 0x904) < *(uint *)((int)this + 0x908);
          puVar5[2] = *(undefined4 *)((int)this + uVar9 * 8 + 0x950);
          *(bool *)((int)puVar5 + 0x11) = (char)uVar4 != '\0';
          puVar5[3] = uVar9;
          param_1 = param_1 + 1;
          puVar5 = puVar5 + 7;
          pbVar7 = pbVar7 + 0x20;
        } while (param_1 < *(uint *)((int)this + 0x854));
      }
    }
    else if (*(int *)((int)this + 0x854) != 0) {
      pbVar7 = param_2 + 0x5c;
      puVar5 = (undefined4 *)((int)this + 0x2e0);
      do {
        if ((pbVar7[-0x14] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(pbVar7 + -0x10);
        }
        uVar9 = uVar4 >> 0x18;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 9;
        *(undefined2 *)(puVar5 + 5) = 0;
        if ((pbVar7[-0xc] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(pbVar7 + -8);
        }
        puVar5[-1] = uVar6;
        *puVar5 = *(undefined4 *)((int)this + uVar9 * 8 + 0x94c);
        puVar5[1] = uVar4 & 0xffffff;
        if ((pbVar7[-4] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)pbVar7;
        }
        puVar5[2] = uVar6;
        if ((pbVar7[4] & 0xf) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(pbVar7 + 8);
        }
        *(bool *)(puVar5 + 5) = iVar2 != 0;
        uVar6 = *(undefined4 *)((int)this + uVar9 * 8 + 0x950);
        puVar5[4] = uVar9;
        puVar5[3] = uVar6;
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 7;
        pbVar7 = pbVar7 + 0x20;
      } while (param_1 < *(uint *)((int)this + 0x854));
    }
    if (*(int *)((int)this + 0x8f8) == 3) {
      pbVar7 = param_2 + 0x79c;
      puVar5 = (undefined4 *)((int)this + 0x860);
      param_1 = 2;
      do {
        if (((pbVar7[-0x14] & 0xf) == 0) || (*(int *)(pbVar7 + -0x10) == 0)) {
          puVar5[-1] = 0;
          puVar5[-2] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        else {
          if ((pbVar7[4] & 0xf) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(pbVar7 + 8);
          }
          puVar5[-1] = *(int *)(pbVar7 + -0x10);
          puVar5[-2] = *(uint *)((int)this + iVar2 * 8 + 0x94c) | 0x2000000;
          if ((pbVar7[-4] & 0xf) == 0) {
            *puVar5 = 0;
            puVar5[1] = iVar2;
          }
          else {
            *puVar5 = *(undefined4 *)pbVar7;
            puVar5[1] = iVar2;
          }
        }
        if (((pbVar7[0xc] & 0xf) == 0) || (*(int *)(pbVar7 + 0x10) == 0)) {
          puVar5[3] = 0;
          puVar5[2] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
        }
        else {
          if ((pbVar7[0x24] & 0xf) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(pbVar7 + 0x28);
          }
          puVar5[3] = *(int *)(pbVar7 + 0x10);
          puVar5[2] = *(uint *)((int)this + iVar2 * 8 + 0x94c) | 0x2000000;
          if ((pbVar7[0x1c] & 0xf) == 0) {
            puVar5[4] = 0;
            puVar5[5] = iVar2;
          }
          else {
            puVar5[4] = *(undefined4 *)(pbVar7 + 0x20);
            puVar5[5] = iVar2;
          }
        }
        if (((pbVar7[0x2c] & 0xf) == 0) || (*(int *)(pbVar7 + 0x30) == 0)) {
          puVar5[7] = 0;
          puVar5[6] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
        }
        else {
          if ((pbVar7[0x44] & 0xf) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(pbVar7 + 0x48);
          }
          puVar5[7] = *(int *)(pbVar7 + 0x30);
          puVar5[6] = *(uint *)((int)this + iVar2 * 8 + 0x94c) | 0x2000000;
          if ((pbVar7[0x3c] & 0xf) == 0) {
            puVar5[8] = 0;
            puVar5[9] = iVar2;
          }
          else {
            puVar5[8] = *(undefined4 *)(pbVar7 + 0x40);
            puVar5[9] = iVar2;
          }
        }
        if (((pbVar7[0x4c] & 0xf) == 0) || (*(int *)(pbVar7 + 0x50) == 0)) {
          puVar5[0xb] = 0;
          puVar5[10] = 0;
          puVar5[0xc] = 0;
          puVar5[0xd] = 0;
        }
        else {
          if ((pbVar7[100] & 0xf) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(pbVar7 + 0x68);
          }
          puVar5[0xb] = *(int *)(pbVar7 + 0x50);
          puVar5[10] = *(uint *)((int)this + iVar2 * 8 + 0x94c) | 0x2000000;
          if ((pbVar7[0x5c] & 0xf) == 0) {
            puVar5[0xc] = 0;
            puVar5[0xd] = iVar2;
          }
          else {
            puVar5[0xc] = *(undefined4 *)(pbVar7 + 0x60);
            puVar5[0xd] = iVar2;
          }
        }
        if (((pbVar7[0x6c] & 0xf) == 0) || (*(int *)(pbVar7 + 0x70) == 0)) {
          puVar5[0xf] = 0;
          puVar5[0xe] = 0;
          puVar5[0x10] = 0;
          puVar5[0x11] = 0;
        }
        else {
          if ((pbVar7[0x84] & 0xf) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(pbVar7 + 0x88);
          }
          puVar5[0xf] = *(int *)(pbVar7 + 0x70);
          puVar5[0xe] = *(uint *)((int)this + iVar2 * 8 + 0x94c) | 0x2000000;
          if ((pbVar7[0x7c] & 0xf) == 0) {
            puVar5[0x10] = 0;
            puVar5[0x11] = iVar2;
          }
          else {
            puVar5[0x10] = *(undefined4 *)(pbVar7 + 0x80);
            puVar5[0x11] = iVar2;
          }
        }
        puVar5 = puVar5 + 0x14;
        pbVar7 = pbVar7 + 0xa0;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    if ((param_2[0x8d8] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x8dc);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x91c),uVar6);
    if ((param_2[0x8d8] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x8dc);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x92c),uVar6);
    F_007b0480(this,*(undefined4 *)((int)this + 0x8f8),*(undefined4 *)((int)this + 0x8fc));
    F_007b0320(this);
  }
  return 1;
}

/* ref: Client::UI2::AddonActionMenu::vf2 */
uint F_0080e710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x80e710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * pAVar1;
  char cVar2;
  undefined1 AVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined * pvVar7;
  uint * puVar8;
  undefined * this_00;
  int * piVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  uint uVar13;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(int *)(gen_frame + 0x2c)) = param_3;
  (*(int * PTR32 *)(gen_frame + 0x20)) = param_4;
  uVar6 = param_2;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 6: ;
    uVar6 = param_2 - 0xb;
    if (uVar6 < 10) {
      if (*(int *)(this + uVar6 * 0x10 + 0x244) != 0) {
        (*(uint *)(gen_frame + 0x24)) = *((uint *)GEN_TOP((*(int *)(this + uVar6 * 0xc + 0x1b8) + 0x68)));
        F_00560760(&(*(undefined4 *)(gen_frame + 0x14)));
        AVar3 = this[0x13a];
        (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + uVar6 * 0x10 + 0x244);
        uVar6 = F_0055dcb0();
        F_00588780((undefined *)(uVar6 + 0xe0),2,(uint)(byte)AVar3,(*(uint *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x14)),0,0);
      }
      goto LAB_0080ef1c;
    }
    break;
  case 7: ;
    uVar6 = param_2 - 0xb;
    if (uVar6 < 10) {
      AVar3 = this[0x13a];
      uVar6 = F_0055dcb0();
      F_00596cb0((undefined *)(uVar6 + 0xe0),(uint)(byte)AVar3,0);
      goto LAB_0080ef1c;
    }
    break;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x18: ;
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
  case 0x26: ;
  case 0x27: ;
  case 0x28: ;
  case 0x29: ;
  case 0x2a: ;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2f: ;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
    break;
  case 0x11: ;
    if (param_2 - 0x15 < 4) {
      F_007b0690(this,*(undefined4 *)(this + param_2 * 4 + 300),0);
    }
    goto LAB_0080ef1c;
  case 0x12: ;
    if (param_2 - 0x15 < 4) {
      if ((*(int *)(this + 0x188) == 0) ||
         (bVar5 = F_005612e0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),param_4[1]),
         bVar5 == 0)) {
        uVar6 = F_0055dcb0();
        F_005d47c0((undefined *)(uVar6 + 0x3c),1);
      }
      F_0056b780(this,0);
    }
    goto LAB_0080ef1c;
  case 0x17: ;
    if (9 < param_2 - 1) {
      uVar13 = param_2 - 0xb;
      if (uVar13 < 10) {
        if (this[uVar13 * 0x10 + 0x248] != (undefined1)0x0) {
          if ((int)uVar13 < 0) {
            uVar12 = *(undefined4 *)(this + 0x188);
          }
          else {
            uVar12 = *(undefined4 *)(this + 0x18c);
          }
          F_0059b390(this,uVar12,1,0);
          (*(undefined4 *)(gen_frame + 0x30)) = 0;
          (*(undefined4 *)(gen_frame + 0x38)) = 0;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          (*(undefined4 *)(gen_frame + 0x48)) = 0;
          (*(undefined4 *)(gen_frame + 0x50)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
          (*(undefined4 *)(gen_frame + 0x34)) = 3;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
          (*(uint *)(gen_frame + 0x3c)) = uVar13;
          F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x30)));
          puVar8 = &(*(uint *)(gen_frame + 0x58));
          iVar10 = 4;
          do {
            puVar8 = puVar8 + -2;
            F_005a2670(puVar8);
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
        }
        goto LAB_0080ef1c;
      }
      break;
    }
    if (this[param_2 + 0x22f] == (undefined1)0x0) goto LAB_0080ef1c;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
    (*(undefined4 *)(gen_frame + 0x34)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
    (*(uint *)(gen_frame + 0x3c)) = param_2 - 1;
    F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x30)));
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 1: ;
    case 2: ;
    case 5: ;
    case 6: ;
    case 7: ;
    case 8: ;
    case 9: ;
    case 10: ;
      uVar12 = *(undefined4 *)(this + 0x180);
      break;
    case 3: ;
      uVar12 = *(undefined4 *)(this + 0x184);
      break;
    case 4: ;
      uVar12 = *(undefined4 *)(this + 0x188);
      break;
    default: ;
      goto switchD_0080e7b3_default;
    }
    F_0059b390(this,uVar12,1,0);
switchD_0080e7b3_default: ;
    puVar8 = &(*(uint *)(gen_frame + 0x58));
    iVar10 = 4;
    do {
      puVar8 = puVar8 + -2;
      F_005a2670(puVar8);
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    goto LAB_0080ef1c;
  case 0x1f: ;
    if (param_2 - 0x15 < 4) {
      if (*param_4 == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = *(undefined * PTR32 *)(*param_4 + 0x1e4);
      }
      if ((*(undefined * PTR32 *)(gen_frame + 0x28)) != (undefined *)0x0) {
        uVar6 = F_00568410((*(undefined * PTR32 *)(gen_frame + 0x28)));
        if (((uVar6 == 5) || (uVar6 == 4)) && ((uint)param_4[2] < *(uint *)(this + 0x854))) {
          iVar10 = param_4[2] * 0x1c;
          F_00560760(&(*(undefined4 *)(gen_frame + 0x14)));
          AVar3 = this[0x13a];
          (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + iVar10 + 0x2e4);
          (*(undefined1 *)(gen_frame + 0x1e)) = this[iVar10 + 0x2ec];
          (*(undefined1 *)(gen_frame + 0x1f)) = 0;
          uVar6 = F_0055dcb0();
          F_00588780((undefined *)(uVar6 + 0xe0),8,(uint)(byte)AVar3,(*(undefined * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x14)),0,0);
        }
      }
    }
LAB_0080ef1c: ;
    uVar6 = F_00557670((*(int *)(gen_frame + 0x2c)),0);
    break;
  case 0x20: ;
    uVar6 = param_2 - 0x15;
    if (uVar6 < 4) {
      AVar3 = this[0x13a];
      uVar6 = F_0055dcb0();
      F_00596cb0((undefined *)(uVar6 + 0xe0),(uint)(byte)AVar3,0);
      goto LAB_0080ef1c;
    }
    break;
  case 0x21: ;
    uVar6 = param_2 - 0x15;
    if (uVar6 < 4) {
      (*(uint *)(gen_frame + 0x24)) = param_4[2];
      if (uVar6 == 3) {
        if (((uint)param_4[2] < *(uint *)(this + 0x854)) && (iVar10 = *param_4, iVar10 != 0)) {
          piVar9 = *(int * PTR32 *)(iVar10 + 0x1e4);
          (*(int * PTR32 *)(gen_frame + 0x20)) = piVar9;
          if (piVar9 != (int *)0x0) {
            uVar6 = F_00568410(piVar9);
            if (uVar6 == 3) {
              pvVar7 = (undefined *)F_005bdc10((*(int * PTR32 *)(gen_frame + 0x20)),3);
              (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0)) = *(undefined1 *)((int)pvVar7 + 0x88);
              (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x28)), 1, 3),*(undefined1 *)((int)pvVar7 + 0x88))));
            }
            else {
              pvVar7 = (undefined *)F_005bdc10(*(undefined * PTR32 *)(iVar10 + 0x150),3);
              bVar11 = *(char *)((int)pvVar7 + 0x88) == '\0';
              (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0)) = bVar11;
              (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x28)), 1, 3),bVar11)));
            }
            uVar6 = F_005c0730(pvVar7);
            if ((char)uVar6 != '\0') {
              F_0059dde0(pvVar7,(*(undefined * PTR32 *)(gen_frame + 0x28)));
              iVar10 = (*(uint *)(gen_frame + 0x24)) * 0x1c;
              (*(undefined4 *)(gen_frame + 0x30)) = 0;
              (*(undefined4 *)(gen_frame + 0x38)) = 0;
              (*(undefined4 *)(gen_frame + 0x40)) = 0;
              (*(undefined4 *)(gen_frame + 0x48)) = 0;
              (*(undefined4 *)(gen_frame + 0x50)) = 0;
              F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
              piVar9 = *(int * PTR32 *)(this + iVar10 + 0x2e4);
              (*(undefined4 *)(gen_frame + 0x34)) = 0;
              F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),4);
              (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar9;
              if (((char)(*(undefined * PTR32 *)(gen_frame + 0x28)) == '\0') || (*(uint *)(this + 0x908) <= *(uint *)(this + 0x904)))
              {
                F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),4);
                (*(undefined4 *)(gen_frame + 0x54)) = 0;
              }
              else {
                F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),4);
                (*(undefined4 *)(gen_frame + 0x54)) = 1;
              }
              F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x30)));
              puVar8 = &(*(uint *)(gen_frame + 0x58));
              iVar10 = 4;
              do {
                puVar8 = puVar8 + -2;
                F_005a2670(puVar8);
                iVar10 = iVar10 + -1;
              } while (-1 < iVar10);
            }
          }
        }
        goto LAB_0080ef1c;
      }
    }
    break;
  case 0x25: ;
    uVar6 = param_2 - 0x15;
    if (uVar6 < 4) {
      uVar6 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x38) + 8))))(*(int * PTR32 *)(uVar6 + 0x38),((undefined1 *)(gen_frame + 0xc)),3);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      F_007b05b0(this,*(undefined4 *)(this + 0x8f8),0xffffffff,1);
      goto LAB_0080ef1c;
    }
    break;
  case 0x2d: ;
    uVar6 = param_2 - 0x15;
    if (uVar6 < 4) {
      uVar13 = param_4[2];
      if (uVar6 == 0) {
        if (uVar13 < *(uint *)(this + 0x854)) {
          *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0xe4))) =
               *(undefined4 *)(this + uVar13 * 0x1c + 0x2e0);
          F_005624f0(*(undefined * PTR32 *)(this + 0x180),*(undefined4 *)(this + uVar13 * 0x1c + 0x2e8),
                       *(undefined4 *)(this + uVar13 * 0x1c + 0x2e4),uVar13);
          *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) = *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) | 0x80000;
          *(undefined1 *)((*(int *)(gen_frame + 0x2c)) + 0x15) = 1;
        }
      }
      else if ((uVar6 == 2) && (uVar13 < 10)) {
        pAVar1 = this + uVar13 * 0x10 + 0x858;
        if (*(int *)(this + uVar13 * 0x10 + 0x85c) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0xe4))) = *(undefined4 *)pAVar1;
          F_005624f0(*(undefined * PTR32 *)(this + 0x188),*(undefined4 *)(pAVar1 + 8),
                       *(undefined4 *)(pAVar1 + 4),uVar13);
          *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) = *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) | 0x80000;
          *(undefined1 *)((*(int *)(gen_frame + 0x2c)) + 0x15) = 1;
        }
        F_007b0690(this,*(undefined4 *)(this + 0x188),1);
      }
      goto LAB_0080ef1c;
    }
    break;
  case 0x2e: ;
    uVar6 = param_2 - 0x4b;
    if (uVar6 < 10) {
      F_007b0690(this,*(undefined4 *)(this + 0x188),0);
      *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) = *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) | 0x80000;
      *(undefined1 *)((*(int *)(gen_frame + 0x2c)) + 0x15) = 1;
      goto LAB_0080ef1c;
    }
    break;
  case 0x30: ;
    uVar6 = param_2 - 0x4b;
    (*(uint *)(gen_frame + 0x24)) = uVar6;
    if (uVar6 < 10) {
      if (uVar6 < 10) {
        piVar9 = (int *)*param_4;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        (*(undefined4 *)(gen_frame + 0x50)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
        (*(undefined4 *)(gen_frame + 0x34)) = 1;
        puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0x28))(piVar9)));
        uVar6 = *puVar8;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
        (*(uint *)(gen_frame + 0x3c)) = uVar6;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
        (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x24));
        F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x30)));
        puVar8 = &(*(uint *)(gen_frame + 0x58));
        iVar10 = 4;
        do {
          puVar8 = puVar8 + -2;
          F_005a2670(puVar8);
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
      }
      *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) = *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) | 0x80000;
      *(undefined1 *)((*(int *)(gen_frame + 0x2c)) + 0x15) = 1;
      goto LAB_0080ef1c;
    }
    break;
  case 0x34: ;
    uVar13 = param_2 - 0x19;
    if (uVar13 < 0x32) {
      if (uVar13 < *(uint *)(this + 0x854)) {
        iVar10 = *(int *)(this + uVar13 * 0x1c + 0x2f0);
        pvVar7 = *(undefined * PTR32 *)(this + uVar13 * 0x1c + 0x2e4);
        this_00 = *(undefined * PTR32 *)(this + 0x180);
LAB_0080e8f7: ;
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar7;
        uVar6 = F_005623b0(this_00,uVar13);
        if ((*(undefined * PTR32 *)(gen_frame + 0x28)) != (undefined *)0x0) {
          cVar2 = (char)(*(int * PTR32 *)(gen_frame + 0x20))[2];
          if ((cVar2 == '\x03') || (cVar2 == '\x04')) {
            iVar4 = *(*(int * PTR32 *)(gen_frame + 0x20));
            if ((iVar4 != 0) && ((iVar4 != 0x84 && ((*(byte *)(iVar4 + 0x26) & 2) == 0)))) {
              (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)(iVar10 * 0x1000000 + (int)(*(undefined * PTR32 *)(gen_frame + 0x28)));
              (*(undefined4 *)(gen_frame + 0x30)) = 0;
              (*(undefined4 *)(gen_frame + 0x38)) = 0;
              (*(undefined4 *)(gen_frame + 0x40)) = 0;
              (*(undefined4 *)(gen_frame + 0x48)) = 0;
              (*(undefined4 *)(gen_frame + 0x50)) = 0;
              F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
              (*(undefined4 *)(gen_frame + 0x34)) = 5;
              F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),4);
              uVar12 = *(undefined4 *)(this + iVar10 * 8 + 0x94c);
              (*(int * PTR32 *)(gen_frame + 0x4c)) = (*(int * PTR32 *)(gen_frame + 0x20));
              F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),4);
              (*(undefined4 *)(gen_frame + 0x54)) = uVar12;
              F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x30)));
              puVar8 = &(*(uint *)(gen_frame + 0x58));
              iVar10 = 4;
              do {
                puVar8 = puVar8 + -2;
                F_005a2670(puVar8);
                iVar10 = iVar10 + -1;
              } while (-1 < iVar10);
            }
            *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) = *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) | 0x80000;
            *(undefined1 *)((*(int *)(gen_frame + 0x2c)) + 0x15) = 1;
          }
          else if (((cVar2 == '\x01') || (cVar2 == '\x05')) || (cVar2 == '\x06')) {
            piVar9 = (int *)(iVar10 * 0x1000000 + (int)(*(undefined * PTR32 *)(gen_frame + 0x28)));
            (*(undefined4 *)(gen_frame + 0x30)) = 0;
            (*(undefined4 *)(gen_frame + 0x38)) = 0;
            (*(undefined4 *)(gen_frame + 0x40)) = 0;
            (*(undefined4 *)(gen_frame + 0x48)) = 0;
            (*(undefined4 *)(gen_frame + 0x50)) = 0;
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
            (*(undefined4 *)(gen_frame + 0x34)) = 4;
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),4);
            (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar9;
            F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x30)));
            *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) = *(uint *)((*(int *)(gen_frame + 0x2c)) + 0x14) | 0x80000;
            *(undefined1 *)((*(int *)(gen_frame + 0x2c)) + 0x15) = 1;
            puVar8 = &(*(uint *)(gen_frame + 0x58));
            iVar10 = 4;
            do {
              puVar8 = puVar8 + -2;
              F_005a2670(puVar8);
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
          goto LAB_0080ef1c;
        }
      }
    }
    else {
      uVar13 = param_2 - 0x4b;
      if ((uVar13 < 10) && (uVar13 < 10)) {
        this_00 = *(undefined * PTR32 *)(this + 0x188);
        iVar10 = *(int *)(this + uVar13 * 0x10 + 0x864);
        pvVar7 = *(undefined * PTR32 *)(this + uVar13 * 0x10 + 0x85c);
        goto LAB_0080e8f7;
      }
    }
    break;
  default: ;
    goto switchD_0080e74b_default;
  }
switchD_0080e74b_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar6;
}

/* ref: FUN_0080efc0 */
uint F_0080efc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80efc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined * this_00;
  undefined4 uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (param_1 < *(uint *)((int)this + 0x854)) {
    uVar6 = *(undefined4 *)((int)this + param_1 * 0x1c + 0x2dc);
    iVar1 = param_1 * 0x1c;
    pvVar3 = (undefined *)F_00559ba0(param_2[1]);
    F_00584110(pvVar3,uVar6);
    if (((*param_2 == 0) || (pvVar3 = (undefined *)F_00559c20(*param_2), pvVar3 == (undefined *)0x0)) ||
       (uVar4 = F_005613a0(pvVar3), uVar4 != 0x11)) {
      pvVar3 = (undefined *)0x0;
    }
    F_00595560(pvVar3,*(undefined4 *)((int)this + iVar1 + 0x2e8));
    *(byte *)((int)pvVar3 + 0xaa) =
         *(byte *)((int)pvVar3 + 0xaa) ^
         ((*(char *)((int)this + iVar1 + 0x2f4) == '\0') * '\x02' ^ *(byte *)((int)pvVar3 + 0xaa)) &
         2;
    F_00563050(pvVar3,(uint)*(byte *)((int)this + iVar1 + 0x2f4));
    *(undefined1 *)((int)pvVar3 + 0xa9) = 3;
    if (param_3 == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *(undefined * PTR32 *)(param_3 + 0x70);
    }
    bVar2 = F_0055a220(pvVar5,0x34);
    if (bVar2 != 0) {
      if (param_3 == 0) {
        pvVar5 = (undefined *)0x0;
      }
      else {
        pvVar5 = *(undefined * PTR32 *)(param_3 + 0x70);
      }
      uVar4 = F_0055a260(pvVar5,0x34);
      if (param_3 == 0) {
        pvVar5 = (undefined *)0x0;
      }
      else {
        pvVar5 = *(undefined * PTR32 *)(param_3 + 0x70);
      }
      F_005840a0(pvVar5,0x34,uVar4,(*(undefined * PTR32 *)(gen_frame + 0x18)),0);
    }
    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x18));
    if (param_3 == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = *(undefined * PTR32 *)(param_3 + 0x70);
    }
    F_00568380(this_00,0x34,param_1 + 0x19,(*(undefined * PTR32 *)(gen_frame + 0x18)),0,0);
    F_00560760(((undefined1 *)(gen_frame + 0xc)));
    (*(undefined1 *)(gen_frame + 0x16)) = *(undefined1 *)((int)this + iVar1 + 0x2ec);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + iVar1 + 0x2e4);
    (*(undefined1 *)(gen_frame + 0x17)) = 0;
    uVar4 = F_005916c0(pvVar3,8,(uint)*(byte *)((int)pvVar5 + 0x13a),((undefined1 *)(gen_frame + 0xc)));
    return uVar4;
  }
  return param_1;
}

/* ref: FUN_0080f100 */
uint F_0080f100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80f100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  undefined * this_00;
  int * this_01;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(uint *)((int)this + 0x854) <= param_1) {
    return param_1;
  }
  uVar3 = *(undefined4 *)((int)this + param_1 * 0x1c + 0x2dc);
  iVar1 = param_1 * 0x1c;
  this_00 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 8));
  F_00584110(this_00,uVar3);
  F_005951c0(param_3,*(undefined4 *)((int)this + iVar1 + 0x2e8),0,0);
  if (((*(int *)(param_2 + 4) == 0) ||
      (this_01 = (int *)F_00559c20(*(int *)(param_2 + 4)), this_01 == (int *)0x0)) ||
     (uVar2 = F_005613a0(this_01), uVar2 != 3)) {
    this_01 = (int *)0x0;
  }
  F_0059dde0(this_01,(uint)*(byte *)((int)this + iVar1 + 0x2f5));
  if (*(char *)((int)this + iVar1 + 0x2f5) == '\0') {
    uVar2 = ((code *)*(gen_code32 *)(*this_01 + 0x28))(this_01,(uint)*(byte *)((int)this + iVar1 + 0x2f4));
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*this_01 + 0x28))(this_01,1);
  return uVar2;
}

/* ref: FUN_0080f1a0 */
unsigned int F_0080f1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80f1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  if (9 < param_1) {
    return 0;
  }
  (*(int *)(gen_frame + 0x18)) = (int)this + param_1 * 0x10 + 0x858;
  if (((*param_2 == 0) || (this_00 = (undefined *)F_00559c20(*param_2), this_00 == (undefined *)0x0)) ||
     (uVar3 = F_005613a0(this_00), uVar3 != 0x11)) {
    this_00 = (undefined *)0x0;
  }
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this_00 + 0x84) + 0xc))))((int)this_00 + 0x84)));
  *(undefined4 *)((int)this_00 + 0xa0) = 0x2000000;
  bVar2 = F_0055a220(*(undefined * PTR32 *)((int)this_00 + 0x70),0x30);
  if (bVar2 != 0) {
    uVar3 = F_0055a260(*(undefined * PTR32 *)((int)this_00 + 0x70),0x30);
    F_005840a0(*(undefined * PTR32 *)((int)this_00 + 0x70),0x30,uVar3,this,0);
  }
  F_00568380(*(undefined * PTR32 *)((int)this_00 + 0x70),0x30,param_1 + 0x4b,this,0,0);
  bVar2 = F_0055a220(*(undefined * PTR32 *)((int)this_00 + 0x70),0x2e);
  if (bVar2 != 0) {
    uVar3 = F_0055a260(*(undefined * PTR32 *)((int)this_00 + 0x70),0x30);
    F_005840a0(*(undefined * PTR32 *)((int)this_00 + 0x70),0x2e,uVar3,this,0);
  }
  F_00568380(*(undefined * PTR32 *)((int)this_00 + 0x70),0x2e,param_1 + 0x4b,this,0,0);
  iVar1 = (*(int *)(gen_frame + 0x18));
  if (*(int *)((*(int *)(gen_frame + 0x18)) + 4) != 0) {
    F_0055a300(pvVar4,1);
    F_00595560(this_00,*(undefined4 *)(iVar1 + 8));
    *(undefined1 *)((int)this_00 + 0xa9) = 0;
    if (param_3 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(param_3 + 0x70);
    }
    bVar2 = F_0055a220(pvVar4,0x34);
    if (bVar2 != 0) {
      if (param_3 == 0) {
        pvVar4 = (undefined *)0x0;
      }
      else {
        pvVar4 = *(undefined * PTR32 *)(param_3 + 0x70);
      }
      uVar3 = F_0055a260(pvVar4,0x34);
      if (param_3 == 0) {
        pvVar4 = (undefined *)0x0;
      }
      else {
        pvVar4 = *(undefined * PTR32 *)(param_3 + 0x70);
      }
      F_005840a0(pvVar4,0x34,uVar3,this,0);
    }
    pvVar4 = (undefined *)0x0;
    if (param_3 != 0) {
      pvVar4 = *(undefined * PTR32 *)(param_3 + 0x70);
    }
    F_00568380(pvVar4,0x34,param_1 + 0x4b,this,0,0);
    if (param_1 < *(uint *)((int)this + 0x90c)) {
      uVar5 = 0x13;
    }
    else {
      uVar5 = 0x14;
    }
    pvVar4 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this_00 + 0xa4),5);
    F_0059d670(pvVar4,uVar5);
    F_00560760(((undefined1 *)(gen_frame + 0xc)));
    (*(undefined1 *)(gen_frame + 0x16)) = *((undefined1 *)GEN_TOP(((int)this + *(int *)((*(int *)(gen_frame + 0x18)) + 0xc) * 8 + 0x950)));
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 4);
    (*(undefined1 *)(gen_frame + 0x17)) = 0;
    F_005916c0(this_00,8,(uint)*(byte *)((int)this + 0x13a),((undefined1 *)(gen_frame + 0xc)));
    return 0;
  }
  F_0055a300(pvVar4,0);
  F_00597570(this_00);
  return 0;
}

/* ref: Client::UI2::AddonGathering::vf37 */
uint F_0080f380(unsigned int gen_a0)
{
  GEN_ENTER(0x80f380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  undefined * local_8;
  
  if (((byte)this[0xf9] & 1) != 0) {
    local_8 = this + 0x180;
    iVar4 = 0;
    do {
      piVar1 = *(int * PTR32 *)local_8;
      if (piVar1 == (int *)0x0) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = (undefined *)piVar1[0x1c];
      }
      F_005840a0(this_00,0x17,iVar4,this,0);
      uVar2 = F_0055dcb0();
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
      F_00596b10((undefined *)(uVar2 + 0xe0),uVar3);
      local_8 = local_8 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonGathering::vf2 */
unsigned int F_0080f400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x80f400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (((short)param_1 == 0x17) && (*(char *)(param_4 + 6) == '\0')) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_0080f450 */
uint F_0080f450(unsigned int gen_a0)
{
  GEN_ENTER(0x80f450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd9cc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1a4);
  local_8 = 2;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    F_0042b630(puVar1 + 4);
    puVar1 = puVar1 + 0x19;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  F_0042b630((int)this + 0x2e4);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined1 *)((int)this + 0x344) = 0;
  F_0055e2a0(this,0x1000000,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonFateReward::vf37 */
uint F_0080f520(unsigned int gen_a0)
{
  GEN_ENTER(0x80f520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  int local_8;
  
  uVar1 = F_0055dcb0();
  pAVar2 = this + 0x1ac;
  local_8 = 3;
  do {
    F_00596b10((undefined *)(uVar1 + 0xe0),*(undefined4 *)pAVar2);
    pAVar2 = pAVar2 + 100;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  F_00596b10((undefined *)(uVar1 + 0xe0),*(undefined4 *)(this + 0x2e0));
  if (*(int *)(this + 0x338) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x338) + 0x70))),0x17,0xffffffff,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFateReward::vf2 */
uint F_0080f590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x80f590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 6) {
    if (param_2 == 10) {
      F_00560760(&(*(uint *)(gen_frame + 0x0)));
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(this + 0x2d0);
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) = 1;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = *(undefined2 *)(this + 0x2d4);
      (*(int *)(gen_frame + 0x8)) = CONCAT22(1,*(undefined2 *)(this + 0x2d4));
      uVar2 = F_0042a990(this + 0x2e4);
      AVar1 = this[0x13a];
      (*(uint *)(gen_frame + 0x0)) = uVar2;
      uVar2 = F_0055dcb0();
      uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),6,(uint)(byte)AVar1,*(undefined4 *)(this + 0x2e0),
                           &(*(uint *)(gen_frame + 0x0)),((code *)REFP(0x7b0de0)),0);
    }
    else {
      uVar2 = param_2 * 100;
      if ((*(int *)(this + uVar2 + 0x1a8) != 0) && (*(int *)(this + uVar2 + 0x1ac) != 0)) {
        F_00560760(&(*(uint *)(gen_frame + 0x0)));
        uVar3 = F_0042a990(this + uVar2 + 0x1b4);
        AVar1 = this[0x13a];
        (*(uint *)(gen_frame + 0x0)) = uVar3;
        uVar3 = F_0055dcb0();
        uVar2 = F_00588780((undefined *)(uVar3 + 0xe0),2,(uint)(byte)AVar1,
                             *(undefined4 *)(this + uVar2 + 0x1ac),&(*(uint *)(gen_frame + 0x0)),((code *)REFP(0x7b0de0)),0);
        return uVar2;
      }
    }
  }
  else {
    if (uVar2 == 7) {
      uVar2 = F_0055dcb0();
      uVar2 = F_00594d90((undefined *)(uVar2 + 0xe0),0);
      return uVar2;
    }
    uVar2 = uVar2 - 0x17;
    if (uVar2 == 0) {
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(int *)(gen_frame + 0x8)) = param_2;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
      uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonRepair::vf37 */
uint F_0080f6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x80f6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x19c) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,2,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar3,0x21,0,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x1ac) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
    }
    F_005840a0(pvVar3,0x21,1,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x1ac) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
    }
    F_005840a0(pvVar3,0x1f,1,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x1ac) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
    }
    F_005840a0(pvVar3,0x20,1,this,0);
    F_005a92d0(this,0,0x20,0);
  }
  AVar1 = this[0x13a];
  this[0x180] = (undefined1)0x0;
  uVar2 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_0080f7c0 */
uint F_0080f7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x80f7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_0042a990(param_1 * 0x54 + *(int *)((int)this + 0x4998));
  uVar1 = F_00584110(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_0080f800 */
uint F_0080f800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80f800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint in_EAX = 0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = (uint)param_1;
  if (param_1 < 100) {
    uVar1 = F_0055dcb0();
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)(uVar1 + 0xe0);
    uVar1 = F_0055e2f0(this,0x15);
    if (uVar1 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)F_00559c20(uVar1);
      if ((param_1 == (int *)0x0) || (uVar1 = F_005613a0(param_1), uVar1 != 9)) {
        param_1 = (int *)0x0;
      }
    }
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,uVar2);
    in_EAX = 0;
    if (uVar1 != 0) {
      F_00560760(((undefined1 *)(gen_frame + 0xc)));
      iVar3 = uVar2 * 0xb8;
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar3 + 0x268 + (int)this);
      (*(undefined1 *)(gen_frame + 0x17)) = *(undefined1 *)(iVar3 + 0x26c + (int)this);
      (*(undefined1 *)(gen_frame + 0x16)) = 2;
      in_EAX = F_00588780((*(undefined * PTR32 *)(gen_frame + 0x18)),4,(uint)*(byte *)((int)this + 0x13a),
                            *(undefined4 *)(uVar1 + 0x70),((undefined1 *)(gen_frame + 0xc)),0,0);
      if ((char)param_2 != '\0') {
        uVar5 = 0;
        uVar4 = 1;
        uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x3c))(param_1);
        in_EAX = F_0059b340(this,uVar2,uVar4,uVar5);
      }
      *(undefined1 *)((int)this + 0x180) = 1;
    }
  }
  return in_EAX;
}

/* ref: FUN_0080f8f0 */
uint F_0080f8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x80f8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  
  cVar3 = '\0';
  uVar4 = 0x68;
  uVar2 = 0x66;
  if ((char)param_1 != '\0') {
    uVar2 = 0x65;
  }
  if ((char)param_3 == '\0') {
    if ((char)param_2 == '\0') goto LAB_0080f94e;
    uVar4 = 0x66;
  }
  else {
    if ((char)param_2 == '\0') {
      uVar4 = 0x67;
      goto LAB_0080f94e;
    }
    uVar4 = 0x65;
  }
  cVar3 = '\x01';
  if (param_4 < 0xb) {
    uVar4 = 0x6a;
    cVar3 = '\x03';
  }
  else if (param_4 < 0x15) {
    uVar4 = 0x69;
    cVar3 = '\x02';
  }
LAB_0080f94e: ;
  F_0059d670(*(undefined * PTR32 *)((int)this + 4),uVar2);
  uVar1 = F_00559c20(*(undefined4 *)this);
  if (*(char *)((int)this + 0x2d) != cVar3) {
    uVar1 = F_0059d640(*(undefined * PTR32 *)(uVar1 + 0x6c),uVar4);
    *(char *)((int)this + 0x2d) = cVar3;
  }
  return uVar1;
}

/* ref: FUN_0080f980 */
uint F_0080f980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x80f980u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  float * pfVar2;
  uint uVar3;
  float10 fVar4;
  
  fVar4 = (float10)(int)(*(uint *)&gen_args[4]);
  (*(uint *)&gen_args[4]) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)&gen_args[4]));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar4 * (float10)*(double *)&REFG(undefined, 0x10928e8));
  F_0055a200(*(*(undefined4 * PTR32 *)&gen_args[0]),(int)TRUNC((double)(float)(fVar4 * (float10)*(double *)&REFG(undefined, 0x10928e8)) *
                                   *(double *)&REFG(undefined, 0x1088100)) & 0xff);
  pfVar2 = &(*(float *)(gen_frame + 0x8));
  if (!(*(double *)&REFG(undefined, 0x10a1b58) < (double)(*(float *)(gen_frame + 0x8)))) {
    pfVar2 = (float *)&REFG(undefined4, 0x10c2174);
  }
  (*(uint *)&gen_args[4]) = (uint)gen_fl2bits((float)((float10)*pfVar2 * (float10)(*(float *)&gen_args[5])));
  F_00568210(*(*(undefined4 * PTR32 *)&gen_args[0]),GEN_TOF(gen_bits2f((*(uint *)&gen_args[4]))),GEN_TOF(gen_bits2f((*(uint *)&gen_args[4]))));
  (*(uint *)&gen_args[4]) = (uint)gen_fl2bits((float)(float10)0);
  F_00c46e20(&(*(uint *)&gen_args[4]),&(*(undefined4 *)&gen_args[3]),4);
  uVar1 = F_0055a030(*(*(undefined4 * PTR32 *)&gen_args[0]));
  uVar3 = (uint)(ushort)((short)(*(undefined4 *)&gen_args[2]) - uVar1);
  uVar1 = F_0055a020(*(*(undefined4 * PTR32 *)&gen_args[0]));
  uVar3 = F_00559e00(*(*(undefined4 * PTR32 *)&gen_args[0]),(uint)(ushort)((short)(*(undefined4 *)&gen_args[1]) - (uVar1 >> 1)),uVar3);
  F_0055a710(*(*(undefined4 * PTR32 *)&gen_args[0]),GEN_TOF(gen_bits2f((*(uint *)&gen_args[4]))));
  return uVar3;
}

/* ref: FUN_0080fa60 */
unsigned int F_0080fa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80fa60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005612d0(param_1);
  F_0055aa30(*(undefined4 *)((int)this + 8),uVar1);
  uVar1 = F_005612d0(param_2);
  F_0055ab90(*(undefined4 *)((int)this + 8),uVar1);
  F_007b1110(this,param_1,param_1,param_2);
  return 0;
}

/* ref: FUN_0080fab0 */
uint F_0080fab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80fab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((param_1 != -1) && (param_1 != 0)) {
    F_007b1200(this,param_2);
    F_0055a300(*(undefined * PTR32 *)((int)this + 0xc),1);
    uVar1 = F_00591c00(*(undefined * PTR32 *)((int)this + 0xc),param_1,0);
    return uVar1;
  }
  F_0055a300(*(undefined * PTR32 *)((int)this + 0xc),0);
  uVar1 = F_0058f5b0(*(undefined * PTR32 *)((int)this + 0xc));
  return uVar1;
}

/* ref: Client::UI2::AddonNamePlate::vf44 */
uint F_0080fb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x80fb00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint * puVar9;
  int local_c;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x2c);
  iVar8 = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  (*pcVar1)(this,0,0);
  local_c = 0;
  do {
    puVar9 = ((uint *)GEN_TOP((*(int *)(this + 0x180) + local_c)));
    uVar3 = F_00578f50(this + 0x24,2,iVar8,0);
    *puVar9 = uVar3;
    pvVar4 = (undefined *)F_00559c20(uVar3);
    uVar3 = F_00561490(pvVar4,2);
    puVar9[1] = uVar3;
    uVar3 = F_00561530(pvVar4,3);
    puVar9[2] = uVar3;
    uVar3 = F_00561550(pvVar4,4);
    puVar9[3] = uVar3;
    uVar3 = F_00561550(pvVar4,9);
    puVar9[4] = uVar3;
    uVar3 = F_00561490(pvVar4,8);
    puVar9[5] = uVar3;
    uVar3 = F_00561490(pvVar4,6);
    puVar9[6] = uVar3;
    uVar3 = F_00561490(pvVar4,7);
    puVar9[7] = uVar3;
    uVar3 = F_00561490(pvVar4,0xb);
    puVar9[8] = uVar3;
    uVar3 = F_00561490(pvVar4,10);
    puVar9[9] = uVar3;
    F_0059d670(*(undefined * PTR32 *)((int)pvVar4 + 0x6c),0x68);
    F_0059d670((undefined *)puVar9[1],0x66);
    F_0055a300((undefined *)puVar9[4],0);
    F_0055a300((undefined *)*puVar9,0);
    *(undefined1 *)(puVar9 + 0xb) = 0;
    *(short *)(puVar9 + 10) = (short)iVar8;
    F_0055abd0(puVar9[2],1);
    pvVar4 = (undefined *)puVar9[9];
    F_00568380(pvVar4,6,iVar8,this,0,0);
    F_00568380(pvVar4,7,iVar8,this,0,0);
    F_00568380(pvVar4,4,iVar8,this,0,0);
    F_0055a300(pvVar4,0);
    F_0055a3c0(pvVar4,0);
    pvVar4 = (undefined *)puVar9[8];
    F_00568380(pvVar4,6,iVar8,this,0,0);
    F_00568380(pvVar4,7,iVar8,this,0,0);
    F_00568380(pvVar4,4,iVar8,this,0,0);
    F_0055a300(pvVar4,0);
    F_0055a3c0(pvVar4,0);
    local_c = local_c + 0x30;
    iVar8 = iVar8 + 1;
  } while (local_c < 0x960);
  F_005a91d0(this,1,5);
  F_005a91d0(this,0,4);
  uVar3 = F_0055dcb0();
  uVar2 = *(undefined4 *)(uVar3 + 0x238);
  uVar3 = F_0055dcb0();
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,(uint)*(ushort *)(uVar3 + 0x234),uVar2);
  if (((byte)this[0xf9] & 1) != 0) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b990(uVar3);
    iVar8 = *(int *)(uVar3 + 0x14);
    iVar5 = 0xc;
    iVar7 = 0x32;
    do {
      *((undefined4 *)GEN_TOP((iVar5 + 4 + *(int *)(iVar8 + 0x20)))) = 7;
      iVar5 = iVar5 + 0x40;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar8 = *(int *)this;
    uVar6 = F_0055dcb0();
    uVar6 = F_0055b9a0(uVar6);
    uVar3 = ((code *)*(gen_code32 *)(iVar8 + 0xbc))(this,uVar3,uVar6);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonNamePlate::vf2 */
uint F_0080fd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x80fd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 4) {
    uVar1 = F_0055dcb0();
    uVar1 = F_0055ba00(uVar1);
  }
  else {
    if (uVar1 == 6) {
      uVar1 = F_007b1590(this,param_2);
      return uVar1;
    }
    uVar1 = uVar1 - 7;
    if (uVar1 == 0) {
      uVar1 = F_007b1680(this,param_2);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonNamePlate::vf5 */
unsigned int F_0080fd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80fd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_005a89b0(this,param_1,1);
  F_007b1730(this);
  return 0;
}

/* ref: Client::UI2::AddonNeedGreed::vf37 */
uint F_0080fd90(unsigned int gen_a0)
{
  GEN_ENTER(0x80fd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  uint uVar4;
  
  F_005a92d0(this,1,0xc,0);
  if (((byte)this[0xf9] & 1) != 0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0);
    if (*(int *)(this + 0x198) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,4,this,0);
    uVar4 = 0;
    do {
      if (*((int *)GEN_TOP((uVar4 + *(int *)(this + 0x1d0)))) == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + *(int *)(this + 0x1d0)))) + 0x70)));
      }
      F_005840a0(pvVar2,0x17,5,this,0);
      if (*((int *)GEN_TOP((uVar4 + *(int *)(this + 0x1d0)))) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar4 + *(int *)(this + 0x1d0)))) + 0x70)));
      }
      uVar1 = F_0055dcb0();
      F_00596b10((undefined *)(uVar1 + 0xe0),uVar3);
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x1c);
  }
  uVar4 = F_005b0510((undefined *)this);
  return uVar4;
}

/* ref: FUN_0080fe90 */
uint F_0080fe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x80fe90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint local_10;
  uint local_c;
  uint local_8;
  
  bVar5 = 0;
  uVar3 = local_10 >> 8;
  local_10 = local_10 & 0xffffff00;
  uVar1 = local_8 >> 8;
  local_8 = local_8 & 0xffffff00;
  uVar2 = local_c >> 8;
  local_c = local_c & 0xffffff00;
  if (*(int *)(param_1 + 0x18) == 0) {
    bVar5 = ~*(byte *)(param_1 + 0x14) & 1;
    local_10 = CONCAT31((int3)uVar3,~*(byte *)(param_1 + 0x14)) & 0xffffff01;
    local_8 = CONCAT31((int3)uVar1,~(byte)(*(uint *)(param_1 + 0x14) >> 1)) & 0xffffff01;
    local_c = CONCAT31((int3)uVar2,1);
  }
  uVar4 = 0;
  if (*(int *)((int)this + 0x198) != 0) {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + 0x70)));
  }
  uVar3 = F_0055a350(uVar4);
  if ((byte)uVar3 != bVar5) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x28))))(*(int * PTR32 *)((int)this + 0x198),local_10);
  }
  uVar4 = 0;
  if (*(int *)((int)this + 0x19c) != 0) {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + 0x70)));
  }
  uVar3 = F_0055a350(uVar4);
  if ((char)uVar3 != (char)local_8) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x28))))(*(int * PTR32 *)((int)this + 0x19c),local_8);
  }
  uVar4 = 0;
  if (*(int *)((int)this + 0x1a0) != 0) {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x70)));
  }
  uVar3 = F_0055a350(uVar4);
  if ((char)uVar3 != (char)local_c) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a0) + 0x28))))
                      (*(int * PTR32 *)((int)this + 0x1a0),local_c);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonArmouryBoard::vf37 */
uint F_0080ff50(unsigned int gen_a0)
{
  GEN_ENTER(0x80ff50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  int local_c;
  undefined * local_8;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005a92d0(this,0,0x23,0);
    F_005a92d0(this,1,0x26,0);
    F_0055dcb0();
    local_8 = this + 0x21c;
    iVar2 = 0xf;
    local_c = 0x19;
    do {
      this_00 = *(undefined * PTR32 *)local_8;
      if (this_00 != (undefined *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this_00 + 0x84) + 0x30))))((int)this_00 + 0x84);
        F_005840a0(*(undefined * PTR32 *)((int)this_00 + 0x70),0x30,iVar2,this,0);
        F_005840a0(*(undefined * PTR32 *)((int)this_00 + 0x70),0x34,iVar2,this,0);
        F_005840a0(*(undefined * PTR32 *)((int)this_00 + 0x70),0x2d,iVar2,this,0);
        F_005840a0(*(undefined * PTR32 *)((int)this_00 + 0x70),0x2e,iVar2,this,0);
        F_005840a0(*(undefined * PTR32 *)((int)this_00 + 0x70),0x32,iVar2,this,0);
        F_00597570(this_00);
      }
      local_8 = local_8 + 4;
      iVar2 = iVar2 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (*(int *)(this + 0x290) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x290) + 0x70))),0x17,0x29,this,0);
    }
    F_005840a0(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonArmouryBoard::vf46 */
byte F_00810050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x810050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined * pAVar3;
  int iVar4;
  int iVar5;
  
  if ((*param_2 & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 4);
  }
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this + 0x180;
  do {
    this_00 = *(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x18));
    if (this_00 != (undefined *)0x0) {
      if (iVar5 == iVar4) {
        F_0059dde0(this_00,1);
        if (iVar4 != *(int *)(this + 0x298)) {
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
          (*(undefined4 *)(gen_frame + 0x14)) = 1;
          uVar1 = F_0055dcb0();
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))
                    (*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x17,1,&(*(undefined4 *)(gen_frame + 0x10)));
          F_005a2670(((undefined1 *)(gen_frame + 0x8)));
          F_005a2670(&(*(undefined4 *)(gen_frame + 0x10)));
          if (iVar4 != *(int *)(this + 0x298)) {
            *(int *)(this + 0x298) = iVar4;
          }
        }
      }
      else {
        F_0059dde0(this_00,0);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xd);
  if ((param_2[8] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)(this + 0x29c) = uVar2;
  if ((param_2[0x20] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x24);
  }
  *(undefined4 *)(this + 0x2a0) = uVar2;
  if ((param_2[0x10] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x14);
  }
  iVar4 = 5;
  *(undefined4 *)(this + 0x2b0) = uVar2;
  pAVar3 = this + 0x220;
  do {
    iVar5 = *(int *)(pAVar3 + -4);
    if (iVar5 != 0) {
      if ((*(int *)(this + 0x29c) < 1) || (*(int *)(this + 0x29c) == 9)) {
        *(undefined1 *)(iVar5 + 0xa9) = 0;
      }
      else {
        *(undefined1 *)(iVar5 + 0xa9) = 3;
      }
    }
    iVar5 = *(int *)pAVar3;
    if (iVar5 != 0) {
      if ((*(int *)(this + 0x29c) < 1) || (*(int *)(this + 0x29c) == 9)) {
        *(undefined1 *)(iVar5 + 0xa9) = 0;
      }
      else {
        *(undefined1 *)(iVar5 + 0xa9) = 3;
      }
    }
    iVar5 = *(int *)(pAVar3 + 4);
    if (iVar5 != 0) {
      if ((*(int *)(this + 0x29c) < 1) || (*(int *)(this + 0x29c) == 9)) {
        *(undefined1 *)(iVar5 + 0xa9) = 0;
      }
      else {
        *(undefined1 *)(iVar5 + 0xa9) = 3;
      }
    }
    iVar5 = *(int *)(pAVar3 + 8);
    if (iVar5 != 0) {
      if ((*(int *)(this + 0x29c) < 1) || (*(int *)(this + 0x29c) == 9)) {
        *(undefined1 *)(iVar5 + 0xa9) = 0;
      }
      else {
        *(undefined1 *)(iVar5 + 0xa9) = 3;
      }
    }
    iVar5 = *(int *)(pAVar3 + 0xc);
    if (iVar5 != 0) {
      if ((*(int *)(this + 0x29c) < 1) || (*(int *)(this + 0x29c) == 9)) {
        *(undefined1 *)(iVar5 + 0xa9) = 0;
      }
      else {
        *(undefined1 *)(iVar5 + 0xa9) = 3;
      }
    }
    pAVar3 = pAVar3 + 0x14;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  F_007b1d80(this);
  F_007b1ff0(this);
  if (((param_2[0x18] & 0xf) != 0) && (*(int *)(param_2 + 0x1c) != 0)) {
    uVar1 = F_0055dcb0();
    F_0059b860(*(undefined * PTR32 *)(uVar1 + 0x14),this,0);
    this[0x2a8] = (undefined1)0x1;
    if ((this[0x2a4] != (undefined1)0x0) &&
       ((uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar1 == 3 || (uVar1 == 2)))) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    }
  }
  return 1;
}

/* ref: FUN_00810290 */
unsigned int F_00810290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x810290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int * piVar8;
  bool bVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  if ((param_1 != 0) && (param_2 != 0)) {
    F_0055dcb0();
    uVar7 = (-(uint)(*(int *)((int)this + 0x298) != 0xc) & 0x10) + 9;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) = uVar7;
    F_00560760(((byte *)(gen_frame + 0xc)));
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) = *(int *)((int)this + 0x298) + 0x31;
    ((byte *)(gen_frame + 0xc))[10] = 2;
    (*(char *)(gen_frame + 0x3b)) = '\0';
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x29c))) {
    case 3: ;
    case 4: ;
    case 5: ;
    case 7: ;
    case 9: ;
      (*(char *)(gen_frame + 0x3b)) = '\x01';
    }
    (*(uint *)(gen_frame + 0x34)) = 0;
    if (uVar7 != 0) {
      (*(int *)(gen_frame + 0x2c)) = 0x48;
      do {
        piVar8 = *(int * PTR32 *)((int)this + (*(uint *)(gen_frame + 0x34)) * 4 + 0x21c);
        iVar6 = (*(int *)(gen_frame + 0x2c));
        if (piVar8 != (int *)0x0) {
          iVar6 = *(int *)(param_1 + 0x20);
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) = *(undefined4 *)((*(int *)(gen_frame + 0x2c)) + -0x10 + iVar6);
          iVar1 = *(int *)((*(int *)(gen_frame + 0x2c)) + -4 + iVar6);
          uVar7 = iVar1 >> 0x10 & 0xff;
          ((byte *)(gen_frame + 0xc))[0x10] = *(byte *)((*(int *)(gen_frame + 0x2c)) + iVar6) & 1;
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) = CONCAT31(GEN_PIECE(((byte *)(gen_frame + 0xc)), 17, 3),*(byte *)((*(int *)(gen_frame + 0x2c)) + iVar6)) & 0xffffff01;
          ((byte *)(gen_frame + 0xc))[0xc] = (char)uVar7;
          ((byte *)(gen_frame + 0xc))[0xd] = (char)(uVar7 >> 8);
          ((byte *)(gen_frame + 0xc))[0xe] = (char)(uVar7 >> 0x10);
          ((byte *)(gen_frame + 0xc))[0xf] = (char)(uVar7 >> 0x18);
          iVar6 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + *(int *)(param_1 + 0x20))));
          bVar9 = (char)((uint)iVar1 >> 8) != '\0';
          ((byte *)(gen_frame + 0xc))[0x1c] = bVar9;
          F_0056e4d0(piVar8,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 28)));
          ((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8,(uint)(((byte *)(gen_frame + 0xc))[0x1c] == 0));
          if (((*(char *)(gen_frame + 0x3b)) != '\0') && ((char)((uint)iVar1 >> 0x18) != '\0')) {
            F_0056e4d0(piVar8,1);
          }
          *(undefined2 *)(piVar8 + 0x27) = (undefined2)(*(uint *)(gen_frame + 0x34));
          F_0055a300((undefined *)piVar8[0x1c],1);
          F_0059d640((undefined *)piVar8[0x1b],1);
          piVar2 = piVar8 + 0x21;
          if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) < 1) {
            ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2);
            F_00595560(piVar8,0);
            F_00597570(piVar8);
            F_00561860((undefined *)piVar8[0x29],0);
            if (piVar8[0x29] == 0) {
              F_0055a300((undefined *)0x0,0);
              iVar6 = (*(int *)(gen_frame + 0x2c));
              this = (*(undefined * PTR32 *)(gen_frame + 0x30));
              uVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20));
            }
            else {
              F_0055a300(*(undefined * PTR32 *)(piVar8[0x29] + 0x70),0);
              iVar6 = (*(int *)(gen_frame + 0x2c));
              this = (*(undefined * PTR32 *)(gen_frame + 0x30));
              uVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20));
            }
          }
          else {
            ((code *)*(gen_code32 *)(piVar8[0x21] + 0x28))(piVar2);
            ((code *)*(gen_code32 *)(piVar8[0x21] + 0xc))(piVar8 + 0x21);
            piVar8[0x26] = 0x10;
            F_00595560(piVar8,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)));
            pvVar3 = (undefined *)0x0;
            if (piVar8[0x29] != 0) {
              pvVar3 = *(undefined * PTR32 *)(piVar8[0x29] + 0x70);
            }
            F_0055a300(pvVar3,1);
            F_005a03c0((undefined *)piVar8[0x29],iVar6 >> 1);
            F_00561860((undefined *)piVar8[0x29],(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)));
            uVar4 = 0x13;
            if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) == 8) {
              uVar4 = 0x16;
            }
            else if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) == 9) {
              uVar4 = 0x15;
            }
            F_0059db40((undefined *)piVar8[0x29],uVar4);
            (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + (*(uint *)(gen_frame + 0x34)) * 4)));
            ((byte *)(gen_frame + 0xc))[0xb] = (byte)(*(uint *)(gen_frame + 0x34));
            F_005916c0(piVar8,6,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x13a),((byte *)(gen_frame + 0xc)));
            iVar6 = (*(int *)(gen_frame + 0x2c));
            this = (*(undefined * PTR32 *)(gen_frame + 0x30));
            uVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20));
          }
        }
        uVar5 = (*(uint *)(gen_frame + 0x34)) + 1;
        (*(uint *)(gen_frame + 0x34)) = uVar5;
        (*(int *)(gen_frame + 0x2c)) = iVar6 + 0x14;
      } while (uVar5 < uVar7);
    }
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) = *(undefined4 *)((int)this + 0x21c);
    if (*(int *)((int)this + 0x298) == 0xc) {
      piVar8 = (int *)((int)this + 0x240);
      param_1 = 0x10;
      do {
        piVar2 = (int *)*piVar8;
        if (piVar2 != (int *)0x0) {
          F_0059d640((undefined *)piVar2[0x1b],7);
          F_0059d640(*(undefined * PTR32 *)(piVar2[0x29] + 0x6c),7);
          pvVar3 = (undefined *)0x0;
          if (piVar2[0x29] != 0) {
            pvVar3 = *(undefined * PTR32 *)(piVar2[0x29] + 0x70);
          }
          F_0055a300(pvVar3,0);
          F_0055a300((undefined *)piVar2[0x1c],0);
          uVar7 = F_0055dcb0();
          uVar7 = F_0055b9e0(uVar7);
          ((byte *)(gen_frame + 0xc))[0xc] = (char)uVar7;
          ((byte *)(gen_frame + 0xc))[0xd] = (char)(uVar7 >> 8);
          ((byte *)(gen_frame + 0xc))[0xe] = (char)(uVar7 >> 0x10);
          ((byte *)(gen_frame + 0xc))[0xf] = (char)(uVar7 >> 0x18);
          uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
          if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) == uVar7) {
            F_0059b390(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)),1,0);
          }
        }
        piVar8 = piVar8 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    if (*(undefined * PTR32 *)((int)this + 0x294) != (undefined *)0x0) {
      F_00584110(*(undefined * PTR32 *)((int)this + 0x294),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 100))));
    }
    *(undefined1 *)((int)this + 0x2a8) = 1;
  }
  return 0;
}

/* ref: FUN_008105c0 */
uint F_008105c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8105c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar1 = *(uint *)((int)this + 0x29c);
  if (uVar1 != 0) {
    if (uVar1 == 3) {
      uVar1 = param_1 - 0xf;
      (*(uint *)(gen_frame + 0xc)) = uVar1;
      if (uVar1 < 0x19) {
        iVar2 = *(int *)((int)this + 0x298);
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
        (*(int *)(gen_frame + 0x14)) = iVar2 + 0x31;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0xc));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        uVar1 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))
                  (*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x20,5,&(*(undefined4 *)(gen_frame + 0x10)));
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
        this_00 = &(*(uint *)(gen_frame + 0x38));
        iVar2 = 4;
        do {
          this_00 = this_00 + -2;
          uVar1 = F_005a2670(this_00);
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
      }
    }
    else if (param_1 - 0xfU < 0x19) {
      uVar1 = F_007b26e0(this,*(undefined4 *)(&REFG(undefined, 0x10c21e8) + uVar1 * 4),param_1 + -0xf);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_008106c0 */
uint F_008106c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8106c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined4 uVar5;
  int * piVar6;
  bool bVar7;
  int local_8;
  
  uVar3 = *(uint *)((int)this + 0x29c);
  if ((uVar3 == 0) || (uVar3 == 2)) {
    uVar3 = F_0055dcb0();
    uVar4 = F_0055b9e0(uVar3);
    uVar3 = uVar4;
    if (uVar4 != 0) {
      piVar6 = (int *)((int)this + 0x21c);
      local_8 = 0x19;
      do {
        piVar1 = (int *)*piVar6;
        if ((piVar1 != (int *)0x0) &&
           (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1), uVar3 == uVar4)) {
          if (piVar1[0x29] == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(piVar1[0x29] + 0x70);
          }
          uVar3 = F_0055a2d0(uVar5);
          bVar7 = (char)uVar3 == '\0';
          uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar7);
          if (*(char *)((int)this + 0x2a6) == '\0') {
            *(bool *)((int)this + 0x2a5) = bVar7;
            F_0056b780(this,0);
            if (*(char *)((int)this + 0x2a5) == '\0') {
              uVar5 = 0x18ac6;
            }
            else {
              uVar5 = 0x18ac7;
            }
            bVar2 = F_0056b630(this,uVar5,7,0,9,0,0);
            uVar3 = CONCAT31(extraout_var,bVar2);
          }
        }
        piVar6 = piVar6 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return uVar3;
}

/* ref: FUN_00810780 */
uint F_00810780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x810780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_ecx;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar3 = *(uint *)((int)this + 0x29c);
  if ((uVar3 != 0) && (uVar3 != 2)) {
    return uVar3;
  }
  uVar3 = F_0055dcb0();
  if (*(char *)(uVar3 + 0x21d) != '\0') {
    return uVar3;
  }
  F_00557670(param_2,0);
  if (0x18 < param_1 - 0xf) {
    return param_1;
  }
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e0);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0xa4);
    in_ecx = 0;
    if (iVar1 != 0) {
      in_ecx = *(undefined4 *)(iVar1 + 0x70);
    }
    uVar3 = F_0055a2d0(in_ecx);
    if ((char)uVar3 != '\0') {
      if (*(char *)((int)this + 0x2a6) != '\0') {
        return uVar3;
      }
      if (*(char *)((int)this + 0x2a5) == '\0') {
        return uVar3;
      }
      *(undefined1 *)((int)this + 0x2a5) = 0;
      goto LAB_00810800;
    }
  }
  if (*(char *)((int)this + 0x2a6) != '\0') {
    return uVar3;
  }
  if (*(char *)((int)this + 0x2a5) == '\x01') {
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  *(undefined1 *)((int)this + 0x2a5) = 1;
LAB_00810800: ;
  F_0056b780(this,0);
  if (*(char *)((int)this + 0x2a5) == '\0') {
    bVar2 = F_0056b630(this,0x18ac6,7,0,9,0,0);
    return CONCAT31(extraout_var_00,bVar2);
  }
  bVar2 = F_0056b630(this,0x18ac7,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00810860 */
uint F_00810860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x810860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_00557670(param_2,0);
  uVar3 = (uint)*(byte *)(param_3 + 2);
  piVar2 = (int *)*param_3;
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  if ((piVar2 != (int *)0x0) && (((uVar3 == 3 || (uVar3 == 6)) || (uVar3 == 1)))) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2);
    bVar1 = *(byte *)(param_2 + 7);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    if (param_1 - 0xfU < 0x19) {
      (*(uint *)(gen_frame + 0xc)) = *(int *)((int)this + 0x298) + 0x31;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0xc));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
      (*(uint *)(gen_frame + 0x1c)) = param_1 - 0xfU;
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(uint *)(gen_frame + 0x24)) = bVar1 & 1;
    bVar1 = *(byte *)((int)this + 0x13a);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = (uint)bVar1;
    uVar3 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x24,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x38));
    iVar4 = 4;
    do {
      this_00 = this_00 + -2;
      uVar3 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar3;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2);
  if (((char)uVar3 != '\0') && ((*(uint *)(gen_frame + 0xc)) == 5)) {
    uVar3 = F_008105c0(this,param_1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_008109a0 */
uint F_008109a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8109a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int * piVar5;
  int iVar6;
  
  uVar3 = F_00557670(param_2,0);
  if ((*param_3 != 0) && (uVar3 = param_1 - 0xf, uVar3 < 0x19)) {
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e0);
    iVar6 = param_1 + -0xf;
    iVar2 = *(int *)(iVar1 + 0xa4);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x70);
    }
    uVar3 = F_0055a2d0(uVar4);
    if ((char)uVar3 == '\0') {
      uVar3 = F_007b1d10(this);
    }
    else {
      uVar3 = F_0055dcb0();
      uVar3 = F_0055b990(uVar3);
      uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0x1c) + 0x20))) + 0x40 + iVar6 * 0x14)));
      iVar2 = *(int *)((int)this + 0x298);
      piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_3 + 0x28))((int *)*param_3)));
      *piVar5 = iVar2 + 0x31;
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x28))((int *)*param_3);
      *(int *)(uVar3 + 4) = iVar6;
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x28))((int *)*param_3);
      *(undefined4 *)(uVar3 + 100) = uVar4;
      uVar3 = F_007b2240(this,iVar1);
      if (*(int *)((int)this + 0x29c) == 9) {
        uVar3 = F_007b26e0(this,0xb,iVar6);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00810a80 */
uint F_00810a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x810a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 in_EAX = 0;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[3]) + 1)));
  uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  uVar2 = *(*(undefined4 * PTR32 *)&gen_args[3]);
  (*(undefined4 * PTR32 *)&gen_args[3]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[3]), 1, 3),cVar1)));
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
    goto switchD_00810a9e_caseD_1;
  default: ;
    return uVar4;
  case 5: ;
    if (cVar1 == '\0') {
      F_007b1ea0((*(undefined * PTR32 *)&gen_args[0]));
      uVar4 = F_00557670((*(undefined4 *)&gen_args[2]),0);
      return uVar4;
    }
    return uVar4;
  case 0xf: ;
    if ((cVar1 != '\0') && (cVar1 != '\x02')) {
      return uVar4;
    }
    bVar3 = F_007b1f10((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[3]));
    break;
  case 0x10: ;
    if ((cVar1 != '\0') && (cVar1 != '\x02')) {
      return uVar4;
    }
    bVar3 = F_007b1f80((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  if (bVar3 != 0) {
    F_007b2750((*(undefined * PTR32 *)&gen_args[0]));
  }
switchD_00810a9e_caseD_1: ;
  uVar4 = F_00557670((*(undefined4 *)&gen_args[2]),0);
  return uVar4;
}

/* ref: Client::UI2::AddonAchievement::vf37 */
uint F_00810b30(unsigned int gen_a0)
{
  GEN_ENTER(0x810b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x188) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x21,0,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x188) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
      }
      F_005840a0(pvVar1,0x29,1,this,0);
    }
    if (*(int *)(this + 400) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x21,2,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 400) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
      }
      F_005840a0(pvVar1,0x29,4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 400) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
      }
      F_005840a0(pvVar1,0x1f,0,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 400) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
      }
      F_005840a0(pvVar1,0x20,1,this,0);
    }
    if (*(int *)(this + 0x198) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70))),0x23,0,this,0);
    }
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_00810c00 */
uint F_00810c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x810c00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10)));
  this = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 4));
  uVar1 = F_00584110(this,uVar2);
  return uVar1;
}

/* ref: FUN_00810c30 */
uint F_00810c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x810c30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10)));
  this = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 4));
  uVar1 = F_00584110(this,uVar2);
  return uVar1;
}

/* ref: FUN_00810c60 */
uint F_00810c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x810c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar3 = *(uint *)((int)this + 0x230);
  uVar4 = *((uint *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4))) >> 8;
  if (*(uint *)((int)this + 0x22c) == uVar3) {
    return uVar3;
  }
  uVar3 = (int)(uVar3 - *(uint *)((int)this + 0x22c)) / 0x18;
  if (uVar3 <= uVar4) {
    return uVar3;
  }
  iVar1 = uVar4 * 0x18;
  uVar3 = *((uint *)GEN_TOP((iVar1 + *(int *)((int)this + 0x22c))));
  bVar5 = (uVar3 & 2) == 0;
  if ((uVar3 & 1) == 0) {
    if (bVar5) {
      uVar9 = 0x11;
    }
    else {
      uVar9 = 0x66;
    }
  }
  else if (bVar5) {
    uVar9 = 0x65;
  }
  else {
    uVar9 = 0x67;
  }
  F_0059d670(*(undefined * PTR32 *)(param_2 + 0x10),uVar9);
  F_0055a300(*(undefined * PTR32 *)(param_2 + 0x20),(uint)((uVar3 & 0x78) != 0));
  pvVar2 = (undefined *)F_00559b90(*(undefined4 *)(param_2 + 4));
  if (pvVar2 != (undefined *)0x0) {
    F_00591c00(pvVar2,*((undefined4 *)GEN_TOP((iVar1 + 4 + *(int *)((int)this + 0x22c)))),0);
  }
  F_0055a300(*(undefined * PTR32 *)(param_2 + 0xc),0);
  bVar5 = (uVar3 & 4) == 0;
  if ((uVar3 & 8) == 0) {
    if ((uVar3 & 0x10) == 0) {
      if (bVar5) goto LAB_00810d74;
      pvVar2 = *(undefined * PTR32 *)(param_2 + 0xc);
      uVar9 = 0x67;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(param_2 + 0xc);
      if (bVar5) {
        uVar9 = 0x66;
      }
      else {
        uVar9 = 0x69;
      }
    }
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_2 + 0xc);
    if (bVar5) {
      uVar9 = 0x65;
    }
    else {
      uVar9 = 0x68;
    }
  }
  F_0059d670(pvVar2,uVar9);
  F_0055a300(*(undefined * PTR32 *)(param_2 + 0xc),1);
LAB_00810d74: ;
  uVar9 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x22c) + 8 + iVar1)));
  pvVar2 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 0x14));
  F_00584110(pvVar2,uVar9);
  uVar9 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x22c) + 0xc + iVar1)));
  pvVar2 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 0x18));
  F_00584110(pvVar2,uVar9);
  uVar9 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x22c) + 0x10 + iVar1)));
  uVar10 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  pvVar2 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 0x1c));
  uVar3 = F_0057eb30(pvVar2,uVar9,uVar6,uVar7,uVar8,uVar10);
  return uVar3;
}

/* ref: FUN_00810de0 */
uint F_00810de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x810de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 uVar5;
  
  uVar3 = *(uint *)((int)this + 0x260);
  uVar4 = *((int *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4))) >> 8;
  if (*(uint *)((int)this + 0x25c) != uVar3) {
    uVar3 = (int)(uVar3 - *(uint *)((int)this + 0x25c)) / 0xc;
    if (uVar4 < uVar3) {
      F_0055a300(*(undefined * PTR32 *)(param_2 + 4),1);
      iVar2 = uVar4 * 0xc;
      iVar1 = *((int *)GEN_TOP((iVar2 + *(int *)((int)this + 0x25c))));
      if (iVar1 == 0) {
        F_0055a300(*(undefined * PTR32 *)(param_2 + 8),0);
      }
      else {
        F_005951c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))),iVar1,0,0);
      }
      if (*((int *)GEN_TOP((iVar2 + 8 + *(int *)((int)this + 0x25c)))) == 0) {
        uVar3 = F_0055a300(*(undefined * PTR32 *)(param_2 + 0xc),0);
        return uVar3;
      }
      uVar5 = *((undefined4 *)GEN_TOP((iVar2 + 8 + *(int *)((int)this + 0x25c))));
      this_00 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 0xc));
      F_00584110(this_00,uVar5);
      uVar3 = F_0055a300(*(undefined * PTR32 *)(param_2 + 0xc),1);
    }
  }
  return uVar3;
}

/* ref: FUN_00810eb0 */
uint F_00810eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x810eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)((int)this + 0x270);
  uVar2 = *((int *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4))) >> 8;
  if ((*(uint *)((int)this + 0x26c) != uVar1) &&
     (uVar1 = (int)(uVar1 - *(uint *)((int)this + 0x26c)) >> 2, uVar2 < uVar1)) {
    F_0055a300(*(undefined * PTR32 *)(param_2 + 4),1);
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x26c) + uVar2 * 4))) == 0) {
      uVar1 = F_0055a300(*(undefined * PTR32 *)(param_2 + 8),0);
      return uVar1;
    }
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x26c) + uVar2 * 4)));
    this_00 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 8));
    F_00584110(this_00,uVar3);
    uVar1 = F_0055a300(*(undefined * PTR32 *)(param_2 + 8),1);
  }
  return uVar1;
}

/* ref: FUN_00810f30 */
uint F_00810f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x810f30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  bool bVar5;
  float10 fVar6;
  undefined4 uVar7;
  
  this = (undefined *)*param_3;
  iVar2 = *(int *)(param_1 + 0x23c);
  uVar3 = *((int *)GEN_TOP((**(int * PTR32 *)(param_2 + 4) + 4))) >> 8;
  if ((iVar2 != *(int *)(param_1 + 0x240)) &&
     (uVar3 < (uint)(*(int *)(param_1 + 0x240) - iVar2 >> 3))) {
    pvVar4 = (undefined *)param_3[1];
    iVar1 = uVar3 * 8;
    bVar5 = *(int *)(iVar1 + iVar2) != 0;
    if (bVar5) {
      uVar7 = 4;
      uVar3 = F_00559ba0(pvVar4);
      F_0055aa90(uVar3,uVar7);
      uVar7 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x23c) + iVar1)));
      pvVar4 = (undefined *)F_00559ba0(param_3[1]);
      F_00584110(pvVar4,uVar7);
      pvVar4 = (undefined *)param_3[1];
    }
    F_0055a300(pvVar4,(uint)bVar5);
    iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + 0x23c) + 4 + iVar1)));
    fVar6 = (float10)iVar2;
    if (iVar2 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    F_00568230(param_3[2],(float)(fVar6 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
    if (iVar2 == 100) {
      uVar3 = F_0059d670(this,0x65);
      return uVar3;
    }
    uVar3 = F_0059d670(this,0x11);
  }
  return uVar3;
}

/* ref: FUN_00811010 */
uint F_00811010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x811010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)((int)this + 0x24c);
  uVar1 = *(uint *)((int)this + 0x250);
  uVar3 = *((int *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4))) >> 8;
  if ((uVar2 != uVar1) && (uVar1 = (int)(uVar1 - uVar2) >> 3, uVar3 < uVar1)) {
    if (*(char *)(uVar2 + uVar3 * 8) == '\0') {
      uVar4 = 0x11;
    }
    else {
      uVar4 = 0x65;
    }
    F_0059d670((undefined *)*param_2,uVar4);
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x24c) + 4 + uVar3 * 8))) == 0) {
      uVar2 = F_0055a300((undefined *)param_2[2],0);
      return uVar2;
    }
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24c) + uVar3 * 8 + 4)));
    this_00 = (undefined *)F_00559ba0(param_2[2]);
    F_00584110(this_00,uVar4);
    uVar1 = F_0055a300((undefined *)param_2[2],1);
  }
  return uVar1;
}

/* ref: FUN_008110a0 */
uint F_008110a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8110a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)*((byte *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4)));
  if (uVar1 < 5) {
    return *(uint *)((int)this + uVar1 * 4 + 0x200);
  }
  return 0;
}

/* ref: FUN_008110d0 */
uint F_008110d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8110d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 8;
  if (uVar1 < 2) {
    return *(uint *)((int)this + uVar1 * 4 + 0x1f8);
  }
  return 0;
}

/* ref: FUN_00811100 */
uint F_00811100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x811100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  undefined1 * this_01;
  int iVar3;
  
  this_01 = (gen_frame + 0x1c);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x7c))))(*(int * PTR32 *)((int)this + 400));
  iVar3 = *(int *)((int)this + 400);
  if (uVar2 == 0) {
    this_00 = (undefined *)0x0;
    if (iVar3 != 0) {
      this_00 = *(undefined * PTR32 *)(iVar3 + 0x70);
    }
  }
  else if (iVar3 == 0) {
    F_0055a300((undefined *)0x0,0);
    this_00 = *(undefined * PTR32 *)((int)this + 0x194);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)(iVar3 + 0x70),0);
    this_00 = *(undefined * PTR32 *)((int)this + 0x194);
  }
  F_0055a300(this_00,0);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),4);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
  (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar3 = 1;
  do {
    this_01 = this_01 + -8;
    uVar2 = F_005a2670(this_01);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_008111c0 */
uint F_008111c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8111c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  ushort uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  uint * this_00;
  int iVar7;
  
  piVar3 = (int *)F_0056dc60(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))),(*(uint *)&gen_args[1]));
  if ((piVar3 != (int *)0x0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x194))) != 0)) {
    uVar2 = F_007b2940((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]));
    (*(uint *)(gen_frame + 0x18)) = (uint)uVar2;
    cVar1 = *(char *)((int)piVar3 + 0x2b);
    if (cVar1 == '\x02') {
      (*(int * PTR32 *)&gen_args[2]) = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188)));
      if ((*(byte *)((int)piVar3 + 0x2a) & 1) == 0) {
        uVar4 = F_0058e350((*(int * PTR32 *)&gen_args[2]),(*(uint *)&gen_args[1]),1);
        return uVar4;
      }
      iVar7 = *(*(int * PTR32 *)&gen_args[2]);
      uVar4 = F_0057c720((*(int * PTR32 *)&gen_args[2]),piVar3);
      ((code *)*(gen_code32 *)(iVar7 + 0x4c))((*(int * PTR32 *)&gen_args[2]),uVar4 + (*(uint *)&gen_args[1]));
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))),(*(uint *)&gen_args[1]));
      uVar4 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(uint *)(gen_frame + 0x18)) & 0xffff) * 4 + 0x19e)));
      piVar3 = (int *)F_0056dc60(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))),uVar4);
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))),uVar4);
    }
    else {
      uVar4 = (*(uint *)&gen_args[1]);
      if ((((cVar1 == '\0') || (cVar1 == '\x01')) && ((char)(*(int * PTR32 *)&gen_args[2]) != '\0')) &&
         (uVar5 = F_0059b390((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))),1,0),
         *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4d4))) == (*(uint *)&gen_args[1]))) {
        return uVar5;
      }
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4d4))) = uVar4;
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(uint *)(gen_frame + 0x18)) & 0xffff) * 4 + 0x19e))) = (short)uVar4;
    F_00591410(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))),0);
    F_0058e350(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))),uVar4,1);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),*(undefined4 *)piVar3[4]);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))) + 0x7c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))));
    iVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400)));
    if (uVar5 == 0) {
      pvVar6 = (undefined *)0x0;
      if (iVar7 != 0) {
        pvVar6 = *(undefined * PTR32 *)(iVar7 + 0x70);
      }
    }
    else if (iVar7 == 0) {
      F_0055a300((undefined *)0x0,0);
      pvVar6 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x194)));
    }
    else {
      F_0055a300(*(undefined * PTR32 *)(iVar7 + 0x70),0);
      pvVar6 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x194)));
    }
    F_0055a300(pvVar6,0);
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3),*(int *)(*piVar3 + 4) != 0)));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x198))) == 0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x198))) + 0x70)));
    }
    F_0055a300(pvVar6,(*(int * PTR32 *)&gen_args[2]));
    F_00562c60(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x198))));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(uint *)(gen_frame + 0x14)) = uVar4;
    F_005a9110((*(undefined * PTR32 *)&gen_args[0]),2,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar7 = 1;
    do {
      this_00 = this_00 + -2;
      piVar3 = (int *)F_005a2670(this_00);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return (uint)piVar3;
}

/* ref: FUN_008113c0 */
uint F_008113c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8113c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  ushort * puVar3;
  uint uVar4;
  
  if ((*(byte *)(param_2 + 0x40) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x44);
  }
  if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
  }
  F_0059caa0(*(undefined * PTR32 *)((int)this + 0x198),uVar1);
  F_0058e2d0(*(undefined * PTR32 *)((int)this + 0x188));
  uVar2 = 0;
  puVar3 = (ushort *)((int)this + 0x1a0);
  while ((uVar4 < puVar3[-2] || (*puVar3 <= uVar4))) {
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 2;
    if (0x12 < (int)uVar2) {
      uVar2 = 0x13;
LAB_00811420: ;
      F_00592870(*(undefined * PTR32 *)((int)this + 0x188),(uint)*(ushort *)((int)this + uVar2 * 4 + 0x19c),0)
      ;
      F_0058e350(*(undefined * PTR32 *)((int)this + 0x188),uVar4,1);
      uVar4 = F_008111c0(this,uVar4,0);
      return uVar4;
    }
  }
  uVar2 = uVar2 & 0xffff;
  goto LAB_00811420;
}

/* ref: FUN_00811460 */
uint F_00811460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x811460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  byte * pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if ((param_2[0x48] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x4c);
  }
  uVar12 = uVar1 & 0xff;
  uVar1 = uVar1 >> 8 & 0xff;
  uVar2 = 0;
  iVar10 = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  if ((*param_2 & 0xf) != 0) {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x184),uVar2);
  if ((param_2[8] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)((int)this + 0x4d8) = uVar2;
  if ((param_2[0x10] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x14);
  }
  *(undefined4 *)((int)this + 0x4dc) = uVar2;
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
  if ((param_2[0x20] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x24);
  }
  *(undefined4 *)((int)this + 0x1ec) = uVar2;
  if ((param_2[0x28] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x2c);
  }
  *(undefined4 *)((int)this + 0x1f0) = uVar2;
  if ((param_2[0x30] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x34);
  }
  *(undefined4 *)((int)this + 500) = uVar2;
  F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 0x88))),3,0,1);
  F_0059caa0(*(undefined * PTR32 *)((int)this + 0x198),0);
  uVar2 = 0;
  (*(uint *)(gen_frame + 0x48)) = uVar1 * 2;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = (undefined *)0x0;
  (*(uint *)(gen_frame + 0x20)) = uVar1;
  (*(undefined2 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[2])REFP(0x10a0934));
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  uVar3 = F_00404270();
  pvVar4 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)(*(uint *)(gen_frame + 0x48)) * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)(*(uint *)(gen_frame + 0x48)) * 4),0,uVar3,uVar2);
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = pvVar4;
  F_00c48350(pvVar4,0,(*(uint *)(gen_frame + 0x48)) * 4);
  F_00556c70(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)));
  iVar8 = 10;
  iVar9 = (*(int *)(gen_frame + 0x14));
  for (; uVar12 != 0; uVar12 = uVar12 - 1) {
    if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4) != 0) {
      *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4) = 0;
      (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x60)) + 1)) = 1;
      (*(undefined2 *)(gen_frame + 0x60)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x60)));
    }
    if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4 + 4) != 0) {
      *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4 + 4) = 0;
      (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x60)) + 1)) = 1;
      (*(undefined2 *)(gen_frame + 0x60)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x60)));
    }
    if ((param_2[iVar8 * 8] & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + iVar8 * 8 + 4);
    }
    if (iVar5 != *(int *)((*(int *)(gen_frame + 0x3c)) + iVar9 * 4)) {
      *(int *)((*(int *)(gen_frame + 0x3c)) + iVar9 * 4) = iVar5;
      (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x38)) + 1)) = 1;
      (*(undefined2 *)(gen_frame + 0x38)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x38)));
    }
    if ((param_2[iVar8 * 8 + 8] & 0xf) == 0) {
      (*(uint *)(gen_frame + 0x0)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x0)) = *(uint *)(param_2 + iVar8 * 8 + 0xc);
      if (((*(uint *)(gen_frame + 0x0)) != 0) && (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4) != 2)) {
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4) = 2;
        (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x60)) + 1)) = 1;
        (*(undefined2 *)(gen_frame + 0x60)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x60)));
      }
    }
    (*(int *)(gen_frame + 0x14)) = iVar9 + 1;
    iVar9 = iVar8 + 2;
    iVar10 = iVar10 + 2;
    (*(uint *)(gen_frame + 0x10)) = 0;
    iVar8 = iVar9;
    if ((*(uint *)(gen_frame + 0x0)) != 0) {
      iVar8 = iVar9 + (*(uint *)(gen_frame + 0x0)) * 2;
      pbVar6 = param_2 + iVar9 * 8 + 4;
      do {
        if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4) != 0x100) {
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4) = 0x100;
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x60)) + 1)) = 1;
          (*(undefined2 *)(gen_frame + 0x60)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x60)));
        }
        if ((pbVar6[-4] & 0xf) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)pbVar6;
        }
        if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4 + 4) != iVar9) {
          *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4 + 4) = iVar9;
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x60)) + 1)) = 1;
          (*(undefined2 *)(gen_frame + 0x60)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x60)));
        }
        if ((pbVar6[4] & 0xf) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(pbVar6 + 8);
        }
        if (iVar9 != *(int *)((*(int *)(gen_frame + 0x3c)) + (*(int *)(gen_frame + 0x14)) * 4)) {
          *(int *)((*(int *)(gen_frame + 0x3c)) + (*(int *)(gen_frame + 0x14)) * 4) = iVar9;
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x38)) + 1)) = 1;
          (*(undefined2 *)(gen_frame + 0x38)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x38)));
        }
        if (((*(uint *)(gen_frame + 0x10)) == (*(uint *)(gen_frame + 0x0)) - 1) && (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4) != 0x101)) {
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + iVar10 * 4) = 0x101;
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x60)) + 1)) = 1;
          (*(undefined2 *)(gen_frame + 0x60)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x60)));
        }
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
        (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
        iVar10 = iVar10 + 2;
        pbVar6 = pbVar6 + 0x10;
      } while ((*(uint *)(gen_frame + 0x10)) < (*(uint *)(gen_frame + 0x0)));
    }
    iVar9 = (*(int *)(gen_frame + 0x14));
  }
  if (*(int *)((int)this + 0x188) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x188) + 0x70)));
  }
  F_0055a300(pvVar4,1);
  F_00596e00(*(undefined * PTR32 *)((int)this + 0x188),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),0,0,2,1,uVar1,(int)this + 0x214);
  uVar1 = 0;
  uVar11 = 0;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x188) + 0x7c))))(*(int * PTR32 *)((int)this + 0x188));
  uVar12 = uVar1;
  if (uVar3 != 0) {
    do {
      uVar3 = F_0056dc60(*(undefined4 *)((int)this + 0x188),uVar11);
      uVar1 = uVar12;
      if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0x2b) & 2) != 0)) {
        *(short *)((int)this + uVar12 * 4 + 0x19c) = (short)uVar11;
        bVar7 = (char)uVar12 + 1;
        uVar1 = (uint)bVar7;
        *(short *)((int)this + uVar12 * 4 + 0x19e) = (short)uVar11 + 1;
        if (0x13 < bVar7) goto LAB_008117e7;
      }
      uVar11 = uVar11 + 1;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x188) + 0x7c))))(*(int * PTR32 *)((int)this + 0x188));
      uVar12 = uVar1;
    } while (uVar11 < uVar3);
    if (0x13 < (byte)uVar1) goto LAB_008117e7;
  }
  uVar12 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x188) + 0x7c))))(*(int * PTR32 *)((int)this + 0x188));
  *(short *)((int)this + uVar1 * 4 + 0x19c) = (short)uVar12;
LAB_008117e7: ;
  F_00556bf0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
  uVar1 = 0;
  if ((*(undefined * PTR32 *)(gen_frame + 0x64)) != (undefined *)0x0) {
    uVar13 = F_00406b30((*(undefined * PTR32 *)(gen_frame + 0x64)));
    uVar1 = (uint)uVar13;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar1;
}

/* ref: Client::UI2::AddonHowtoList::vf37 */
uint F_00811820(unsigned int gen_a0)
{
  GEN_ENTER(0x811820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1530) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1530) + 0x70))),0x23,0,this,0);
    }
    if (*(int *)(this + 0x1538) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1538) + 0x70))),0x21,0,this,0);
    }
  }
  this[0x1540] = (undefined1)0x0;
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonHowtoList::vf46 */
byte F_00811870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x811870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  byte * pbVar3;
  
  pbVar3 = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if (this[0x1540] != (undefined1)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1534),uVar1);
    if ((param_2[0x108] & 0xf) == 0) {
      param_2 = (byte *)0x0;
    }
    else {
      param_2 = *(byte * PTR32 *)(param_2 + 0x10c);
    }
    if (param_2 != (byte *)0x0) {
      this_00 = this + 0xb58;
      pbVar3 = pbVar3 + 0x110;
      iVar2 = (int)param_2;
      do {
        if ((*pbVar3 & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(pbVar3 + 4);
        }
        F_0042e430(this_00,uVar1);
        pbVar3 = pbVar3 + 8;
        this_00 = this_00 + 0x54;
        iVar2 = iVar2 + -1;
        this = (*(undefined * PTR32 *)(gen_frame + 0x28));
      } while (iVar2 != 0);
    }
    if (param_2 == (byte *)0x0) {
      uVar1 = 0x66;
    }
    else {
      uVar1 = 0x65;
    }
    F_0059d670(*(undefined * PTR32 *)(this + 0x153c),uVar1);
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x7b2be0));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    F_00574320(*(undefined * PTR32 *)(this + 0x1538),&(*(undefined * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x1c)),1,0);
    F_0059ead0(*(undefined * PTR32 *)(this + 0x1538),param_2,0,1);
  }
  return 1;
}

/* ref: FUN_00811960 */
uint F_00811960(unsigned int gen_a0)
{
  GEN_ENTER(0x811960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdde4));
  iVar2 = (int)this + 0x180;
  iVar1 = 0x31;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x68;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar2 = (int)this + 0x15d0;
  iVar1 = 6;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined4 *)((int)this + 0x181c) = 0;
  *(undefined4 *)((int)this + 0x1820) = 0;
  *(undefined4 *)((int)this + 0x1824) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonCabinet::vf37 */
uint F_008119e0(unsigned int gen_a0)
{
  GEN_ENTER(0x8119e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005a92d0(this,1,0x2d,0);
    F_005a92d0(this,0,0x29,0);
    if (*(int *)(this + 0x1820) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1820) + 0x70))),0x23,0,this,0);
    }
    if (*(int *)(this + 0x181c) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x181c) + 0x70))),0x21,0,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x181c) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x181c) + 0x70)));
      }
      F_005840a0(pvVar1,0x1f,0,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x181c) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x181c) + 0x70)));
      }
      F_005840a0(pvVar1,0x20,0,this,0);
    }
    uVar2 = F_0055dcb0();
    F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)this[0x13a],1);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_00811aa0 */
uint F_00811aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x811aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdeec));
  *(undefined1 *)((int)this + 0x180) = 0;
  in_ecx = (int)this + 0x184;
  iVar1 = 0x31;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x60;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x1444) = 0;
  *(undefined4 *)((int)this + 0x1448) = 0;
  *(undefined4 *)((int)this + 0x144c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x1450) = 0;
  *(undefined4 *)((int)this + 0x1454) = 0;
  *(undefined4 *)((int)this + 0x1458) = 0;
  *(undefined4 *)((int)this + 0x145c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf37 */
uint F_00811b20(unsigned int gen_a0)
{
  GEN_ENTER(0x811b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1450) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1450) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1454) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1454) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1458) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1458) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x145c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x145c) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,3,this,0);
    F_005a92d0(this,1,0x2d,0);
    F_005a92d0(this,0,0x29,0);
    if (*(int *)(this + 0x1444) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1444) + 0x70))),0x21,0,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)(this + 0x1444) != 0) {
        pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1444) + 0x70)));
      }
      F_005840a0(pvVar2,0x1f,0,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)(this + 0x1444) != 0) {
        pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1444) + 0x70)));
      }
      F_005840a0(pvVar2,0x20,0,this,0);
    }
    uVar1 = F_0055dcb0();
    F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf47 */
uint F_00811c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x811c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pAVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_2 + 0xa4);
  iVar2 = *(int *)(param_1 + 0xb4);
  iVar5 = 0;
  if (iVar2 == 0) {
    return param_1;
  }
  if (iVar1 == 0) {
    return param_1;
  }
  uVar3 = **(uint * PTR32 *)(iVar2 + 0x20);
  param_1 = 0;
  if (uVar3 != 0) {
    pAVar4 = this + 0x1d8;
    do {
      F_0042e430(pAVar4 + -0x54,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + param_1 * 4))));
      *(undefined4 *)pAVar4 = *((undefined4 *)GEN_TOP((iVar5 + 8 + *(int *)(iVar2 + 0x20))));
      *(undefined4 *)(pAVar4 + 4) = *((undefined4 *)GEN_TOP((iVar5 + 0x14 + *(int *)(iVar2 + 0x20))));
      *(undefined4 *)(pAVar4 + 8) = *((undefined4 *)GEN_TOP((iVar5 + 0x18 + *(int *)(iVar2 + 0x20))));
      param_1 = param_1 + 1;
      pAVar4 = pAVar4 + 0x60;
      iVar5 = iVar5 + 0x14;
    } while (param_1 < uVar3);
  }
  F_0059ead0(*(undefined * PTR32 *)(this + 0x1444),uVar3,0,1);
  uVar6 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4)));
  if (uVar3 != 0) {
    if (this[0x180] != (undefined1)0x0) {
      F_007b3110(this,0);
    }
    uVar3 = F_0059d670(*(undefined * PTR32 *)(this + 0x1448),0x11);
    return uVar3;
  }
  F_0059d670(*(undefined * PTR32 *)(this + 0x1448),0x65);
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 0: ;
    uVar6 = 0x65;
    break;
  case 1: ;
    uVar6 = 0x66;
    break;
  case 2: ;
    uVar6 = 0x67;
    break;
  case 3: ;
    uVar6 = 0x68;
    break;
  default: ;
    goto switchD_00811d23_default;
  }
  F_0059d670(*(undefined * PTR32 *)(this + 0x144c),uVar6);
switchD_00811d23_default: ;
  this[0x180] = (undefined1)0x0;
  uVar3 = F_0055dcb0();
  uVar3 = F_00594d90((undefined *)(uVar3 + 0xe0),1);
  return uVar3;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf2 */
uint F_00811d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x811d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar2 = param_1 & 0xffff;
  if (uVar2 - 0x17 < 0xb) {
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0x17: ;
      goto switchD_00811da2_caseD_17;
    default: ;
      return (uint)*(byte *)(uVar2 + 0x811f5d);
    case 0x1f: ;
      uVar2 = F_007b3110(this,*(undefined4 *)(param_4 + 8));
      return uVar2;
    case 0x20: ;
      this[0x180] = (undefined1)0x0;
      uVar2 = F_0055dcb0();
      uVar2 = F_00594d90((undefined *)(uVar2 + 0xe0),0);
      return uVar2;
    case 0x21: ;
      F_00557670(param_3,0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      uVar1 = *((undefined4 *)GEN_TOP((this + (*(int *)(param_4 + 8) * 3 + 0xf) * 0x20)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
      (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
      this[0x180] = (undefined1)0x0;
      uVar2 = F_0055dcb0();
      F_00594d90((undefined *)(uVar2 + 0xe0),1);
      iVar3 = 1;
      do {
        this_01 = this_01 + -8;
        uVar2 = F_005a2670(this_01);
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      return uVar2;
    }
  }
  return uVar2 - 0x17;
switchD_00811da2_caseD_17: ;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    F_00557670(param_3,0);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    break;
  case 1: ;
    F_00557670(param_3,0);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = 1;
    break;
  case 2: ;
    F_00557670(param_3,0);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    break;
  case 3: ;
    F_00557670(param_3,0);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = 3;
    break;
  default: ;
    goto switchD_00811dbd_default;
  }
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
switchD_00811dbd_default: ;
  iVar3 = 1;
  do {
    this_00 = this_00 + -8;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_00811f90 */
uint F_00811f90(unsigned int gen_a0)
{
  GEN_ENTER(0x811f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_ecx;
  
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x1450));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x145c);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar2 = F_0055a020(in_ecx);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar2;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar2,0x4002);
  uVar3 = F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: FUN_00812060 */
unsigned int F_00812060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x812060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = F_00561390();
  ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,uVar1 + 0xc0);
  uVar1 = F_0055a260((undefined *)param_1[0x1c],0x17);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    break;
  case 1: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 1;
    break;
  case 2: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    break;
  case 3: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    break;
  default: ;
    goto switchD_008120ac_default;
  }
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
switchD_008120ac_default: ;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x14)),0xd);
  F_005a2670(((undefined1 *)(gen_frame + 0x14)));
  this_00 = ((undefined1 *)(gen_frame + 0x14));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return 0;
}

/* ref: FUN_008121b0 */
uint F_008121b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8121b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdfec));
  in_ecx = (int)this + 0x180;
  iVar1 = 0x9f;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x60;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined4 *)((int)this + 0x3d80) = 0;
  *(undefined4 *)((int)this + 0x3d84) = 0;
  *(undefined4 *)((int)this + 0x3d88) = 0;
  *(undefined4 *)((int)this + 0x3d8c) = 0;
  *(undefined4 *)((int)this + 0x3d90) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf37 */
uint F_00812220(unsigned int gen_a0)
{
  GEN_ENTER(0x812220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005a92d0(this,1,0x29,0);
    F_005a92d0(this,0,0x25,0);
    if (*(int *)(this + 0x3d84) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x3d84) + 0x70))),0x21,0,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x3d84) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x3d84) + 0x70)));
      }
      F_005840a0(pvVar1,0x1f,0,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x3d84) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x3d84) + 0x70)));
      }
      F_005840a0(pvVar1,0x20,0,this,0);
    }
    uVar2 = F_0055dcb0();
    F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)this[0x13a],1);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf44 */
uint F_008122c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8122c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x3d88) = uVar1;
  uVar1 = F_0055e340(this,9);
  *(uint *)(this + 0x3d8c) = uVar1;
  uVar1 = F_0055e340(this,10);
  *(uint *)(this + 0x3d90) = uVar1;
  uVar1 = F_0055e2f0(this,6);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
      uVar1 = 0;
    }
  }
  *(uint *)(this + 0x3d84) = uVar1;
  pvVar3 = (undefined *)0x0;
  if (uVar1 != 0) {
    pvVar3 = *(undefined * PTR32 *)(uVar1 + 0x70);
  }
  F_00568380(pvVar3,0x21,0,this,0,0);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0x3d84) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x3d84) + 0x70)));
  }
  F_00568380(pvVar3,0x1f,0,this,0,0);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0x3d84) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x3d84) + 0x70)));
  }
  F_00568380(pvVar3,0x20,0,this,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x3d84),1,1,0);
  F_005a91d0(this,1,0x29);
  uVar1 = F_005a91d0(this,0,0x25);
  return uVar1;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf47 */
uint F_008123b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8123b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined1 AVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined * pAVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar2 = *(int *)(param_2 + 0x94);
  iVar6 = *(int *)(param_1 + 0xa4);
  iVar4 = 0;
  (*(int *)(gen_frame + 0x18)) = iVar6;
  uVar3 = param_1;
  if ((iVar6 != 0) && (iVar2 != 0)) {
    uVar3 = F_0055dcb0();
    this_00 = *(undefined * PTR32 *)(uVar3 + 0x30);
    (*(uint *)(gen_frame + 0x1c)) = **(uint * PTR32 *)(iVar6 + 0x20);
    (*(uint *)(gen_frame + 0x20)) = 0;
    if (**(uint * PTR32 *)(iVar6 + 0x20) != 0) {
      pAVar5 = this + 0x1d4;
      do {
        F_0042e430(pAVar5 + -0x54,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + (*(uint *)(gen_frame + 0x20)) * 4))));
        *(undefined4 *)pAVar5 = *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + 8 + iVar4)));
        *(undefined4 *)(pAVar5 + 4) = *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + 0xc + iVar4)));
        uVar3 = (*(uint *)(gen_frame + 0x20)) + 1;
        *(undefined4 *)(pAVar5 + 8) = *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + 0x10 + iVar4)));
        iVar4 = iVar4 + 0xc;
        pAVar5 = pAVar5 + 0x60;
        (*(uint *)(gen_frame + 0x20)) = uVar3;
        iVar6 = (*(int *)(gen_frame + 0x18));
      } while (uVar3 < (*(uint *)(gen_frame + 0x1c)));
    }
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 2;
    (*(undefined4 *)(gen_frame + 0x30)) = 3;
    (*(undefined4 *)(gen_frame + 0x3c)) = 4;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x7b3380));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_00574320(*(undefined * PTR32 *)(this + 0x3d84),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x24)),3,0);
    F_0059ead0(*(undefined * PTR32 *)(this + 0x3d84),(*(uint *)(gen_frame + 0x1c)),0,1);
    if ((*(uint *)(gen_frame + 0x1c)) == 0) {
      F_0059d670(*(undefined * PTR32 *)(this + 0x3d88),0x65);
    }
    else {
      F_0059d670(*(undefined * PTR32 *)(this + 0x3d88),0x11);
      if ((*(uint *)(gen_frame + 0x1c)) <= *(uint *)(this + 0x3d80)) {
        *(uint *)(this + 0x3d80) = (*(uint *)(gen_frame + 0x1c)) - 1;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x3d84) + 0x4c))))
                (*(int * PTR32 *)(this + 0x3d84),(uint)*(ushort *)(this + 0x3d80));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x3d84) + 0x74))))
                (*(int * PTR32 *)(this + 0x3d84),*(undefined4 *)(this + 0x3d80),0);
      F_005624a0(*(undefined4 *)(this + 0x3d84),*(undefined4 *)(this + 0x3d80));
      F_00560760(&(*(gen_code32 *)(gen_frame + 0xc)));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 2)) = 9;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 3)) = this[*(int *)(this + 0x3d80) * 0x60 + 0x1dc];
      (*(undefined4 *)(gen_frame + 0x14)) = CONCAT13(this[*(int *)(this + 0x3d80) * 0x60 + 0x1dc],
                          CONCAT12(9,(undefined2)(*(undefined4 *)(gen_frame + 0x14))));
      uVar3 = F_0056d250(*(undefined * PTR32 *)(this + 0x3d84),0,(uint)*(ushort *)(this + 0x3d80));
      if (uVar3 == 0) {
        (*(uint *)(gen_frame + 0x20)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = *(uint *)(uVar3 + 0x70);
      }
      AVar1 = this[0x13a];
      uVar3 = F_0055dcb0();
      F_00588780((undefined *)(uVar3 + 0xe0),4,(uint)(byte)AVar1,(*(uint *)(gen_frame + 0x20)),&(*(gen_code32 *)(gen_frame + 0xc)),0,0);
      iVar6 = (*(int *)(gen_frame + 0x18));
    }
    uVar3 = F_00460bd0(this_00,0x1207,*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 4))));
    F_00584110(*(undefined * PTR32 *)(this + 0x3d8c),uVar3);
    uVar3 = F_00460bd0(this_00,0x1208,(*(uint *)(gen_frame + 0x1c)));
    uVar3 = F_00584110(*(undefined * PTR32 *)(this + 0x3d90),uVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: Client::UI2::AddonGearSet::vf46 */
byte F_008125f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8125f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  uVar1 = *(undefined4 *)(uVar2 + 0xac);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2);
  F_007b3680(this,uVar1,*(undefined4 *)(uVar2 + 0x9c));
  if (param_1 < 1) {
    F_007b3bc0(this,0xffffffff);
    return 1;
  }
  if ((*param_2 & 0xf) == 0) {
    F_007b3bc0(this,0);
    return 1;
  }
  F_007b3bc0(this,*(undefined4 *)(param_2 + 4));
  return 1;
}

/* ref: Client::UI2::AddonGearSet::vf47 */
uint F_00812670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x812670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined1 AVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  iVar2 = *(int *)(param_2 + 0x9c);
  iVar3 = *(int *)(param_1 + 0xac);
  F_007b3680(this,iVar3,iVar2);
  piVar4 = *(int * PTR32 *)(this + 0x18c);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0x70))(piVar4);
  }
  if (iVar2 != 0) {
    F_00584110(*(undefined * PTR32 *)(this + 400),**(undefined4 * PTR32 *)(iVar2 + 0x20));
  }
  if (iVar3 != 0) {
    uVar6 = F_0055dcb0();
    this_00 = (undefined *)(uVar6 + 0xe0);
    iVar5 = **(int * PTR32 *)(iVar3 + 0x20);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x7c))))(*(int * PTR32 *)(this + 0x18c));
    param_2 = CONCAT31((int3)((uint)iVar5 >> 8),(int)uVar6 < iVar5);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x28))))(*(int * PTR32 *)(this + 0x184),param_2);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x38))))(*(int * PTR32 *)(this + 0x184));
    F_00596b10(this_00,uVar6);
    F_00560760(((undefined4 *)(gen_frame + 0x0)));
    AVar1 = this[0x13a];
    ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 8)));
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x38))))(*(int * PTR32 *)(this + 0x184));
    F_00590ad0(this_00,2,(uint)(byte)AVar1,uVar6,puVar7);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x28))))
              (*(int * PTR32 *)(this + 0x180),(uint)(*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 4))) != 0));
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x38))))(*(int * PTR32 *)(this + 0x180));
    F_00596b10(this_00,uVar6);
    F_00560760(((undefined4 *)(gen_frame + 0x0)));
    AVar1 = this[0x13a];
    ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4)));
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x38))))(*(int * PTR32 *)(this + 0x180));
    F_00590ad0(this_00,2,(uint)(byte)AVar1,uVar6,puVar7);
  }
  uVar6 = F_007b3aa0(this);
  if (this[0xc88] == (undefined1)0x0) {
    uVar6 = F_007b3bc0(this,0xffffffff);
    this[0xc88] = (undefined1)0x1;
  }
  return uVar6;
}

/* ref: FUN_008127f0 */
uint F_008127f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8127f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  undefined1 * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  this_00 = (gen_frame + 0x1c);
  F_00557670(param_2,0);
  if (*(undefined * PTR32 *)((int)this + 0x18c) != (undefined *)0x0) {
    F_005623b0(*(undefined * PTR32 *)((int)this + 0x18c),*(undefined4 *)(param_3 + 8));
  }
  if (*(char *)(param_3 + 0x10) == '\x01') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + *(int *)(param_3 + 8) * 0x1c + 0x194)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar3;
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = F_007b3aa0(this);
  if (*(char *)(param_3 + 0x10) != '\x01') {
    uVar3 = 0;
    if (*(int *)((int)this + 0x188) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x188) + 0x70)));
    }
    uVar1 = F_0055a350(uVar3);
    if ((char)uVar1 != '\0') {
      uVar4 = 0;
      uVar3 = 1;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x188) + 0x3c))))(*(int * PTR32 *)((int)this + 0x188));
      uVar1 = F_0059b340(this,uVar1,uVar3,uVar4);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonGearSetView::vf44 */
uint F_008128d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8128d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  byte * pbVar7;
  
  ((int *)(gen_frame + 0x50))[0xe] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  this[0xfa] = (undefined1)
               ((byte)this[0xfa] ^
               ((this[0x13d] != (undefined1)0x0) << 6 ^ (byte)this[0xfa]) & 0x40);
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  *(undefined4 *)(this + 0x184) = uVar2;
  uVar3 = F_0055e340(this,2);
  *(uint *)(this + 0x2a0) = uVar3;
  uVar3 = F_0055e360(this,3);
  *(uint *)(this + 0x2a4) = uVar3;
  uVar3 = F_0055e340(this,4);
  *(uint *)(this + 0x2a8) = uVar3;
  uVar3 = F_0055e2f0(this,5);
  *(uint *)(this + 0x2ac) = uVar3;
  uVar3 = F_0055e2f0(this,7);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00559c20(uVar3);
    if ((uVar3 == 0) || (uVar4 = F_005613a0(uVar3), uVar4 != 9)) {
      uVar3 = 0;
    }
  }
  *(uint *)(this + 0x180) = uVar3;
  F_0058d980(uVar3,0xe);
  if (*(int *)(this + 0x180) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_00568380(pvVar5,0x21,0,this,0,0);
  if (*(int *)(this + 0x180) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_00568380(pvVar5,0x1f,0,this,0,0);
  if (*(int *)(this + 0x180) == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_00568380(pvVar5,0x20,0,this,0,0);
  iVar6 = 0;
  pbVar7 = param_2 + 0x14;
  do {
    if ((pbVar7[-0xc] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(pbVar7 + -8);
    }
    ((int *)(gen_frame + 0x50))[0] = 0;
    ((int *)(gen_frame + 0x50))[1] = 1;
    ((int *)(gen_frame + 0x50))[2] = 2;
    ((int *)(gen_frame + 0x50))[3] = 3;
    ((int *)(gen_frame + 0x50))[4] = 4;
    ((int *)(gen_frame + 0x50))[5] = 5;
    ((int *)(gen_frame + 0x50))[6] = 6;
    ((int *)(gen_frame + 0x50))[7] = 7;
    ((int *)(gen_frame + 0x50))[8] = 9;
    ((int *)(gen_frame + 0x50))[9] = 8;
    ((int *)(gen_frame + 0x50))[10] = 10;
    ((int *)(gen_frame + 0x50))[0xb] = 0xc;
    ((int *)(gen_frame + 0x50))[0xc] = 0xb;
    ((int *)(gen_frame + 0x50))[0xd] = 0xd;
    *(undefined4 *)(this + ((int *)(gen_frame + 0x50))[(int)(iVar6)] * 0x14 + 0x18c) = uVar2;
    if ((pbVar7[-4] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)pbVar7;
    }
    ((int *)(gen_frame + 0x50))[0] = 0;
    ((int *)(gen_frame + 0x50))[1] = 1;
    ((int *)(gen_frame + 0x50))[2] = 2;
    ((int *)(gen_frame + 0x50))[3] = 3;
    ((int *)(gen_frame + 0x50))[4] = 4;
    ((int *)(gen_frame + 0x50))[5] = 5;
    ((int *)(gen_frame + 0x50))[6] = 6;
    ((int *)(gen_frame + 0x50))[7] = 7;
    ((int *)(gen_frame + 0x50))[8] = 9;
    ((int *)(gen_frame + 0x50))[9] = 8;
    ((int *)(gen_frame + 0x50))[10] = 10;
    ((int *)(gen_frame + 0x50))[0xb] = 0xc;
    ((int *)(gen_frame + 0x50))[0xc] = 0xb;
    ((int *)(gen_frame + 0x50))[0xd] = 0xd;
    iVar1 = iVar6 + 1;
    iVar6 = iVar6 + 2;
    pbVar7 = pbVar7 + 0x10;
    *(undefined4 *)(this + ((int *)(gen_frame + 0x50))[(int)(iVar1)] * 0x14 + 0x18c) = uVar2;
  } while (iVar6 < 0xe);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  (*(undefined4 *)(gen_frame + 0x20)) = 4;
  (*(undefined4 *)(gen_frame + 0x2c)) = 3;
  (*(undefined4 *)(gen_frame + 0x38)) = 5;
  (*(undefined4 *)(gen_frame + 0x44)) = 6;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7b43c0));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x180),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),5,0);
  F_005a91d0(this,1,0x2b);
  F_005a91d0(this,0,0x27);
  F_005a91d0(this,1,0x40);
  uVar3 = F_005a91d0(this,0,0x3b);
  F_00c47745(((int *)(gen_frame + 0x50))[0xe] ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: Client::UI2::AddonGearSetView::vf47 */
uint F_00812ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x812ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * param_1 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pAVar1;
  undefined * pAVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar9;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)param_1;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[1] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)param_2;
  pppppppuVar9 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)param_1;
  pppppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)param_2;
  if (-1 < *(int *)(this + 0x184)) {
    pppppuVar3 = param_1[0x2b];
    (*(int *)(gen_frame + 0xc)) = *(int *)(param_2 + 0x9c);
    F_0057eb30(*(undefined * PTR32 *)(this + 0x2a0),*(int *)(this + 0x184) + 1,0,0,0,0);
    iVar6 = *(int *)(this + 0x184);
    F_00591c00(*(undefined * PTR32 *)(this + 0x2a4),pppppuVar3[8][iVar6 * 5 + 4],0);
    F_00584110(*(undefined * PTR32 *)(this + 0x2a8),
                 *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xc)) + 0x20) + 0x24 + *(int *)(this + 0x184) * 4))));
    pppuVar4 = pppppuVar3[8][iVar6 * 5 + 6];
    uVar8 = 0x11;
    if (((uint)pppuVar4 & 1) == 0) {
      if (((uint)pppuVar4 & 6) == 0) {
        if (((uint)pppuVar4 & 8) != 0) {
          uVar8 = 0x67;
        }
      }
      else {
        uVar8 = 0x66;
      }
    }
    else {
      uVar8 = 0x65;
    }
    F_0059d670(*(undefined * PTR32 *)(this + 0x2ac),uVar8);
    pppppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[0];
    pppppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[1];
  }
  iVar5 = *(int *)((int)pppppppuVar10 + 0xec);
  pppppuVar3 = pppppppuVar9[0x40];
  iVar11 = 0xc;
  (*(int *)(gen_frame + 0xc)) = iVar5;
  iVar6 = 0x1c;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4))[1] = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4)) + 1;
  do {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    (*(undefined4 *)(gen_frame + 0x1c)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 4;
    (*(undefined4 *)(gen_frame + 0x24)) = 5;
    (*(undefined4 *)(gen_frame + 0x28)) = 6;
    (*(undefined4 *)(gen_frame + 0x2c)) = 7;
    (*(undefined4 *)(gen_frame + 0x30)) = 9;
    (*(undefined4 *)(gen_frame + 0x34)) = 8;
    (*(undefined4 *)(gen_frame + 0x38)) = 10;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0xc;
    (*(undefined4 *)(gen_frame + 0x40)) = 0xb;
    (*(undefined4 *)(gen_frame + 0x44)) = 0xd;
    pAVar1 = this + *(int *)((int)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4)) + iVar11) * 0x14 + 0x188;
    *(undefined4 *)pAVar1 = *(undefined4 *)(iVar6 + -0x1c + (int)pppppuVar3[8]);
    *(undefined4 *)(pAVar1 + 8) = *(undefined4 *)(iVar6 + -0x18 + (int)pppppuVar3[8]);
    *(undefined4 *)(pAVar1 + 0xc) = *((undefined4 *)GEN_TOP((iVar11 + *(int *)(iVar5 + 0x20))));
    pAVar1[0x10] = SUB41(*(int *)(iVar6 + -0x14 + (int)pppppuVar3[8]) >> 1,0);
    pAVar1[0x11] = *(undefined *)(iVar6 + -0x10 + (int)pppppuVar3[8]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    (*(undefined4 *)(gen_frame + 0x1c)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 4;
    (*(undefined4 *)(gen_frame + 0x24)) = 5;
    (*(undefined4 *)(gen_frame + 0x28)) = 6;
    (*(undefined4 *)(gen_frame + 0x2c)) = 7;
    (*(undefined4 *)(gen_frame + 0x30)) = 9;
    (*(undefined4 *)(gen_frame + 0x34)) = 8;
    (*(undefined4 *)(gen_frame + 0x38)) = 10;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0xc;
    (*(undefined4 *)(gen_frame + 0x40)) = 0xb;
    (*(undefined4 *)(gen_frame + 0x44)) = 0xd;
    pAVar2 = this + *((int *)GEN_TOP(((int)(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4)) + 1) + iVar11))) * 0x14 + 0x188;
    *(undefined4 *)pAVar2 = *(undefined4 *)(iVar6 + -0xc + (int)pppppuVar3[8]);
    *(undefined4 *)(pAVar2 + 8) = *(undefined4 *)(iVar6 + -8 + (int)pppppuVar3[8]);
    *(undefined4 *)(pAVar2 + 0xc) = *((undefined4 *)GEN_TOP((iVar11 + 4 + *(int *)(iVar5 + 0x20))));
    pAVar2[0x10] = SUB41(*(int *)(iVar6 + -4 + (int)pppppuVar3[8]) >> 1,0);
    pAVar1 = (undefined *)(iVar6 + (int)pppppuVar3[8]);
    iVar6 = iVar6 + 0x20;
    iVar11 = iVar11 + 8;
    pAVar2[0x11] = *pAVar1;
  } while (iVar6 < 0xfc);
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x70))))(*(int * PTR32 *)(this + 0x180));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar7;
}

/* ref: Client::UI2::AddonGearSetView::vf2 */
uint F_00812e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x812e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0x1f) {
    uVar1 = F_007b44c0(this,param_2,param_3,param_4);
  }
  else {
    if (uVar1 == 0x20) {
      F_00557670(param_3,0);
      uVar1 = F_0055dcb0();
      uVar1 = F_00594d90((undefined *)(uVar1 + 0xe0),0);
      return uVar1;
    }
    uVar1 = uVar1 - 0x21;
    if ((uVar1 == 0) && (uVar1 = param_4, -1 < *(int *)(param_4 + 8))) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x180) + 0x113))) = 0;
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
      *(undefined1 *)(param_3 + 0x15) = 1;
      uVar1 = F_00557670(param_3,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonTrade::vf37 */
uint F_00812ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x812ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined * pAVar5;
  int local_c;
  undefined * local_8;
  
  AVar1 = this[0x13a];
  uVar3 = F_0055dcb0();
  F_00596b90((undefined *)(uVar3 + 0xe0),(uint)(byte)AVar1,1);
  F_005a92d0(this,1,0xb,0);
  F_005a92d0(this,0,10,0);
  local_8 = this + 0x1d0;
  iVar4 = 8;
  local_c = 5;
  do {
    iVar2 = *(int *)local_8;
    if (iVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x2d,iVar4 + -5,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x30,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x34,iVar4 + 5,this,0);
      *(int *)local_8 = 0;
    }
    local_8 = local_8 + 4;
    iVar4 = iVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  pAVar5 = this + 0x1e4;
  iVar4 = 5;
  do {
    if (*(int *)pAVar5 != 0) {
      uVar3 = F_0055dcb0();
      F_00596b10((undefined *)(uVar3 + 0xe0),*(int *)(pAVar5 + 0x14));
      F_0058d590(*(undefined * PTR32 *)pAVar5);
      *(int *)pAVar5 = 0;
    }
    pAVar5 = pAVar5 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int *)(this + 0x1b8) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b8) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x1bc) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1bc) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 0x1b4) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b4) + 0x70))),0x17,2,this,0);
  }
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: FUN_00812fe0 */
uint F_00812fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x812fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x220) = 0;
  if (param_1 == 1) {
    uVar1 = F_00559cd0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x214) + 0x6c))));
    if (uVar1 == 1) {
      uVar1 = F_00559c60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x214) + 0x6c))),2);
    }
  }
  else if (param_1 == 2) {
    uVar1 = F_00559cd0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x214) + 0x6c))));
    if (uVar1 != 1) {
      F_00559c60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x214) + 0x6c))),1);
    }
    uVar2 = F_00559cd0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20c) + 0x6c))));
    uVar1 = 1;
    if (uVar2 != 1) {
      uVar1 = F_00559c60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20c) + 0x6c))),1);
      return uVar1;
    }
  }
  else {
    uVar1 = param_1 - 3;
    if (uVar1 == 0) {
      *(undefined1 *)((int)this + 0x220) = 1;
      uVar1 = F_00559cd0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20c) + 0x6c))));
      if (uVar1 == 1) {
        uVar1 = F_00559c60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20c) + 0x6c))),2);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_008130b0 */
uint F_008130b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8130b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 1) {
    uVar1 = F_00559cd0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x218) + 0x6c))));
    if (uVar1 == 1) {
      uVar1 = F_00559c60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x218) + 0x6c))),2);
    }
  }
  else if (param_1 == 2) {
    uVar1 = F_00559cd0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x218) + 0x6c))));
    if (uVar1 != 1) {
      F_00559c60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x218) + 0x6c))),1);
    }
    uVar2 = F_00559cd0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x210) + 0x6c))));
    uVar1 = 1;
    if (uVar2 != 1) {
      uVar1 = F_00559c60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x210) + 0x6c))),1);
      return uVar1;
    }
  }
  else {
    uVar1 = param_1 - 3;
    if (uVar1 == 0) {
      uVar1 = F_00559cd0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x210) + 0x6c))));
      if (uVar1 == 1) {
        uVar1 = F_00559c60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x210) + 0x6c))),2);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCrossEditor::vf47 */
uint F_00813170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x813170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined * this_00;
  
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5);
  iVar1 = *(int *)(uVar5 + 0xcc);
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b9a0(uVar5);
  iVar2 = *(int *)(uVar5 + 0xbc);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    if (*(undefined * PTR32 *)(this + 0x184) != (undefined *)0x0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x184),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4))));
    }
    if (*(int *)(this + 0x18c) != 0) {
      F_00563db0(*(int *)(this + 0x18c),1);
      F_0058bba0(*(undefined * PTR32 *)(this + 0x18c),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 8))));
      F_005832e0(*(undefined * PTR32 *)(this + 0x18c));
    }
    uVar5 = **(uint * PTR32 *)(iVar1 + 0x20);
    if ((*(undefined * PTR32 *)(this + 0x188) != (undefined *)0x0) && (*(undefined * PTR32 *)(this + 400) != (undefined *)0x0)) {
      if ((int)uVar5 < 1) {
        F_0055a300(*(undefined * PTR32 *)(this + 0x188),0);
        if (*(int *)(this + 400) == 0) {
          uVar5 = F_0055a300((undefined *)0x0,0);
          return uVar5;
        }
        uVar5 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0);
        return uVar5;
      }
      F_00595190(*(undefined * PTR32 *)(this + 400),uVar5,0,0);
      uVar3 = **(undefined4 * PTR32 *)(iVar2 + 0x20);
      bVar4 = F_00584440(*(undefined * PTR32 *)(this + 0x188),uVar3);
      if (bVar4 == 0) {
        F_00584110(*(undefined * PTR32 *)(this + 0x188),uVar3);
      }
      else {
        F_005842e0(*(undefined * PTR32 *)(this + 0x188),uVar3,0);
      }
      this_00 = (undefined *)0x0;
      if (*(int *)(this + 400) != 0) {
        this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
      }
      F_0055a300(this_00,1);
      uVar5 = F_0055a300(*(undefined * PTR32 *)(this + 0x188),1);
    }
  }
  return uVar5;
}

/* ref: Client::UI2::AddonContentsInfo::vf44 */
uint F_008132b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8132b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  code * pcVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined * pAVar6;
  int local_c;
  int local_8;
  
  uVar3 = F_0055e2f0(this,3);
  pvVar4 = (undefined *)F_00559c20(uVar3);
  if (pvVar4 != (undefined *)0x0) {
    uVar3 = F_00561530(pvVar4,2);
    *(uint *)(this + 0x180) = uVar3;
    uVar3 = F_00561550(pvVar4,3);
    *(uint *)(this + 0x184) = uVar3;
  }
  uVar3 = F_0055e2f0(this,4);
  pvVar4 = (undefined *)F_00559c20(uVar3);
  if (pvVar4 != (undefined *)0x0) {
    uVar3 = F_00561530(pvVar4,2);
    *(uint *)(this + 0x188) = uVar3;
    uVar3 = F_00561550(pvVar4,3);
    *(uint *)(this + 0x18c) = uVar3;
  }
  uVar3 = F_0055e2f0(this,6);
  pvVar4 = (undefined *)F_00559c20(uVar3);
  if (pvVar4 != (undefined *)0x0) {
    uVar3 = F_00561530(pvVar4,2);
    *(uint *)(this + 400) = uVar3;
    uVar3 = F_00561550(pvVar4,3);
    *(uint *)(this + 0x194) = uVar3;
  }
  uVar3 = F_0055e2f0(this,7);
  pvVar4 = (undefined *)F_00559c20(uVar3);
  if (pvVar4 != (undefined *)0x0) {
    uVar3 = F_00561530(pvVar4,2);
    *(uint *)(this + 0x198) = uVar3;
    uVar3 = F_00561550(pvVar4,3);
    *(uint *)(this + 0x19c) = uVar3;
  }
  local_8 = 0xd;
  pAVar6 = this + 0x1a8;
  local_c = 8;
  do {
    uVar3 = F_0055e2f0(this,local_8);
    pvVar4 = (undefined *)F_00559c20(uVar3);
    if (pvVar4 != (undefined *)0x0) {
      *(undefined * PTR32 *)(pAVar6 + -8) = pvVar4;
      uVar3 = F_0055e2f0(this,local_8);
      *(uint *)(pAVar6 + -4) = uVar3;
      uVar3 = F_00561530(pvVar4,4);
      *(uint *)pAVar6 = uVar3;
      uVar3 = F_00561550(pvVar4,3);
      *(uint *)(pAVar6 + 4) = uVar3;
      uVar3 = F_00561530(pvVar4,5);
      *(uint *)(pAVar6 + 8) = uVar3;
      uVar3 = F_00561530(pvVar4,6);
      *(uint *)(pAVar6 + 0xc) = uVar3;
    }
    local_8 = local_8 + 1;
    pAVar6 = pAVar6 + 0x18;
    local_c = local_c + -1;
  } while (local_c != 0);
  local_8 = 0x18;
  pAVar6 = this + 0x268;
  local_c = 3;
  do {
    uVar3 = F_0055e2f0(this,local_8);
    pvVar4 = (undefined *)F_00559c20(uVar3);
    if (pvVar4 != (undefined *)0x0) {
      *(undefined * PTR32 *)(pAVar6 + -8) = pvVar4;
      uVar3 = F_0055e2f0(this,local_8);
      *(uint *)(pAVar6 + -4) = uVar3;
      uVar3 = F_00561530(pvVar4,4);
      *(uint *)pAVar6 = uVar3;
      uVar3 = F_00561550(pvVar4,3);
      *(uint *)(pAVar6 + 4) = uVar3;
      uVar3 = F_00561530(pvVar4,5);
      *(uint *)(pAVar6 + 8) = uVar3;
      uVar3 = F_00561530(pvVar4,6);
      *(uint *)(pAVar6 + 0xc) = uVar3;
    }
    local_8 = local_8 + 1;
    pAVar6 = pAVar6 + 0x18;
    local_c = local_c + -1;
  } while (local_c != 0);
  F_005a91d0(this,0,2);
  F_005a91d0(this,1,3);
  if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x14);
  }
  pvVar4 = (undefined *)F_0055e340(this,0x21);
  F_00584110(pvVar4,uVar5);
  uVar3 = F_0055e2f0(this,0xb);
  *(uint *)(this + 0x2a8) = uVar3;
  uVar3 = F_0055e2f0(this,0x16);
  *(uint *)(this + 0x2ac) = uVar3;
  uVar3 = F_0055e2f0(this,0x1e);
  uVar2 = F_0055a030(uVar3);
  *(ushort *)(this + 0x2b0) = uVar2;
  uVar3 = F_0055e2f0(this,0x1f);
  uVar2 = F_0055a030(uVar3);
  *(ushort *)(this + 0x2b2) = uVar2;
  uVar3 = F_0055e2f0(this,0x20);
  uVar2 = F_0055a030(uVar3);
  *(ushort *)(this + 0x2b4) = uVar2;
  uVar3 = F_0055e2f0(this,0x21);
  uVar2 = F_0055a030(uVar3);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xb8);
  *(ushort *)(this + 0x2b6) = uVar2;
  uVar3 = (*pcVar1)(this,param_1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonContentsInfo::vf46 */
byte F_00813560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x813560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  uint uVar5;
  code * pcVar6;
  ushort uVar7;
  byte * pbVar8;
  undefined * pAVar9;
  int iVar10;
  
  if (*(undefined * PTR32 *)(this + 0x180) == (undefined *)0x0) {
    return 1;
  }
  if ((*param_2 & 0xf) == 0) {
    (*(uint *)(gen_frame + 0x14)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_2 + 4);
  }
  bVar2 = false;
  if (((*(uint *)(gen_frame + 0x14)) & 1) != 0) {
    bVar2 = true;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x180),uVar3);
    if ((param_2[0x20] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x24);
    }
    F_00591c00(*(undefined * PTR32 *)(this + 0x184),uVar3,0);
    if ((param_2[0x28] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x188),uVar3);
    F_0055a300(*(undefined * PTR32 *)(this + 0x18c),0);
  }
  bVar1 = false;
  if (((*(uint *)(gen_frame + 0x14)) & 2) != 0) {
    bVar1 = true;
    if ((param_2[0x30] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x34);
    }
    F_00584110(*(undefined * PTR32 *)(this + 400),uVar3);
    if ((param_2[0x38] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x3c);
    }
    F_00591c00(*(undefined * PTR32 *)(this + 0x194),uVar3,0);
    if ((param_2[0x48] & 0xf) == 0) {
      (*(byte *)(gen_frame + 0xc)) = 0;
    }
    else {
      (*(byte *)(gen_frame + 0xc)) = (byte)*(undefined4 *)(param_2 + 0x4c);
    }
    (*(byte *)(gen_frame + 0x1b)) = 0;
    pAVar9 = this + 0x1a8;
    pbVar8 = param_2 + 0x10c;
    do {
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(*(byte *)(gen_frame + 0x1b)) < (*(byte *)(gen_frame + 0xc)));
      F_0055a300(*(undefined * PTR32 *)(pAVar9 + -4),(*(undefined4 *)(gen_frame + 0x8)));
      if ((*(byte *)(gen_frame + 0x1b)) < (*(byte *)(gen_frame + 0xc))) {
        if ((pbVar8[-0xa4] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar8 + -0xa0);
        }
        F_00584110(*(undefined * PTR32 *)pAVar9,uVar3);
        if ((pbVar8[-4] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)pbVar8;
        }
        F_0057eb30(*(undefined * PTR32 *)(pAVar9 + 8),uVar3,0,0,0,0);
        if ((pbVar8[0x4c] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar8 + 0x50);
        }
        F_0057eb30(*(undefined * PTR32 *)(pAVar9 + 0xc),uVar3,0,0,0,0);
        if ((pbVar8[-0x54] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar8 + -0x50);
        }
        F_00591c00(*(undefined * PTR32 *)(pAVar9 + 4),uVar3,0);
        if (((pbVar8[0x9c] & 0xf) == 0) || (pbVar8[0xa0] == 0)) {
          pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(pAVar9 + -8) + 0x6c)));
          uVar3 = 0x11;
        }
        else {
          pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(pAVar9 + -8) + 0x6c)));
          uVar3 = 0x65;
        }
        F_0059d670(pvVar4,uVar3);
      }
      (*(byte *)(gen_frame + 0x1b)) = (*(byte *)(gen_frame + 0x1b)) + 1;
      pbVar8 = pbVar8 + 8;
      pAVar9 = pAVar9 + 0x18;
    } while ((*(byte *)(gen_frame + 0x1b)) < 8);
    if ((param_2[0x50] & 0xf) == 0) {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
    }
    else {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (byte)*(undefined4 *)(param_2 + 0x54);
    }
    (*(byte *)(gen_frame + 0x1b)) = 0;
    pAVar9 = this + 0x264;
    pbVar8 = param_2 + 0x29c;
    do {
      if (*(undefined * PTR32 *)pAVar9 != (undefined *)0x0) {
        (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(*(byte *)(gen_frame + 0x1b)) < (byte)(*(undefined4 *)(gen_frame + 0x8)));
        F_0055a300(*(undefined * PTR32 *)pAVar9,(*(undefined4 *)(gen_frame + 0x4)));
        if ((*(byte *)(gen_frame + 0x1b)) < (byte)(*(undefined4 *)(gen_frame + 0x8))) {
          if ((pbVar8[-0xa4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar8 + -0xa0);
          }
          F_00584110(*(undefined * PTR32 *)(pAVar9 + 4),uVar3);
          if ((pbVar8[-4] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)pbVar8;
          }
          F_0057eb30(*(undefined * PTR32 *)(pAVar9 + 0xc),uVar3,0,0,0,0);
          if ((pbVar8[0x4c] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar8 + 0x50);
          }
          F_0057eb30(*(undefined * PTR32 *)(pAVar9 + 0x10),uVar3,0,0,0,0);
          if ((pbVar8[-0x54] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar8 + -0x50);
          }
          F_00591c00(*(undefined * PTR32 *)(pAVar9 + 8),uVar3,0);
          if (((pbVar8[0x9c] & 0xf) == 0) || (pbVar8[0xa0] == 0)) {
            pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(pAVar9 + -4) + 0x6c)));
            uVar3 = 0x11;
          }
          else {
            pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(pAVar9 + -4) + 0x6c)));
            uVar3 = 0x65;
          }
          F_0059d670(pvVar4,uVar3);
        }
      }
      (*(byte *)(gen_frame + 0x1b)) = (*(byte *)(gen_frame + 0x1b)) + 1;
      pbVar8 = pbVar8 + 8;
      pAVar9 = pAVar9 + 0x18;
    } while ((*(byte *)(gen_frame + 0x1b)) < 3);
    F_0059d670(*(undefined * PTR32 *)(this + 0x2a8),(-(uint)((*(byte *)(gen_frame + 0xc)) != 0) & 0xffffffac) + 0x65);
    F_0059d670(*(undefined * PTR32 *)(this + 0x2ac),(-(uint)((byte)(*(undefined4 *)(gen_frame + 0x8)) != 0) & 0xffffffac) + 0x65);
  }
  if (((*(uint *)(gen_frame + 0x14)) & 4) == 0) {
    if (!bVar1) {
      iVar10 = *(int *)this;
      pcVar6 = *(gen_code32 *)(iVar10 + 0x50);
      if (bVar2) {
        uVar5 = (uint)*(ushort *)(this + 0x2b0);
        uVar7 = 0x65;
      }
      else {
        uVar5 = (uint)*(ushort *)(this + 0x2b6);
        uVar7 = 0x68;
      }
      goto LAB_008138df;
    }
  }
  else {
    if ((param_2[0x40] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x44);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x198),uVar3);
    F_0055a300(*(undefined * PTR32 *)(this + 0x19c),0);
  }
  iVar10 = *(int *)this;
  pcVar6 = *(gen_code32 *)(iVar10 + 0x50);
  if (bVar2) {
    uVar5 = (uint)*(ushort *)(this + 0x2b4);
    uVar7 = 0x67;
  }
  else {
    uVar5 = (uint)*(ushort *)(this + 0x2b2);
    uVar7 = 0x66;
  }
LAB_008138df: ;
  uVar5 = (*pcVar6)(this,0,uVar5);
  ((code *)*(gen_code32 *)(iVar10 + 0x4c))(this,uVar5 & 0xffff);
  if (*(ushort *)(this + 0x2b8) != uVar7) {
    F_0059d670(*(undefined * PTR32 *)(this + 0x90),(uint)uVar7);
    *(ushort *)(this + 0x2b8) = uVar7;
  }
  return 1;
}

/* ref: Client::UI2::AddonBank::vf37 */
uint F_00813920(unsigned int gen_a0)
{
  GEN_ENTER(0x813920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x19,0,this,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,2,this,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),0x17,3,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_00813990 */
byte F_00813990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x813990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x38) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x3c);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x19c),uVar1);
    if ((*(byte *)(param_2 + 0x40) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x44);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1a0),uVar1);
    if ((*(byte *)(param_2 + 0x48) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x4c);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1a8),uVar1);
    if ((*(byte *)(param_2 + 0x50) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x54);
    }
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1ac),uVar1);
    if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
    }
    F_0059cf90(*(undefined * PTR32 *)((int)this + 0x180),uVar1,1,1);
    if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_0059d040(*(undefined * PTR32 *)((int)this + 0x180),uVar1,1,1);
    if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x34);
    }
    F_0059d070(*(undefined * PTR32 *)((int)this + 0x180),uVar1,1,1);
    iVar4 = **(int * PTR32 *)((int)this + 0x180);
    uVar2 = F_00563a70(*(int * PTR32 *)((int)this + 0x180));
    uVar3 = F_00563a80(*(undefined4 *)((int)this + 0x180));
    ((code *)*(gen_code32 *)(iVar4 + 0x28))(*(undefined4 *)((int)this + 0x180),(uint)(uVar2 != uVar3));
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x1c);
    }
    bVar6 = iVar5 == 0;
    param_2 = CONCAT31((int3)((uint)iVar4 >> 8),bVar6);
    if (bVar6 != (bool)*((char *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x18c) + 0x88)))) {
      F_0059dde0(*(undefined * PTR32 *)((int)this + 0x18c),param_2);
      F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x6c))),!bVar6 + 0xf);
    }
    if (*(int *)((int)this + 0x180) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0x178)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))
              (*(int * PTR32 *)((int)this + 0x184),(uint)(iVar4 != 0));
    uVar2 = F_005612d0(0xffcccccc);
    F_0055aa30(*(undefined4 *)((int)this + 0x1a0),uVar2);
    uVar2 = F_005612d0(0xffcccccc);
    F_0055aa30(*(undefined4 *)((int)this + 0x1ac),uVar2);
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x88))) == '\0') {
      uVar2 = F_005612d0(0xffc5e1ee);
      F_0055aa30(*(undefined4 *)((int)this + 400),uVar2);
      uVar2 = F_005612d0(0xff999999);
      F_0055aa30(*(undefined4 *)((int)this + 0x194),uVar2);
      if (*(int *)((int)this + 0x180) == 0) {
        return 1;
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0x178))) < 1) {
        return 1;
      }
      uVar2 = F_005612d0(0xffe6cf97);
      F_0055aa30(*(undefined4 *)((int)this + 0x1a0),uVar2);
      uVar1 = 0xff817bf0;
    }
    else {
      uVar2 = F_005612d0(0xff999999);
      F_0055aa30(*(undefined4 *)((int)this + 400),uVar2);
      uVar2 = F_005612d0(0xffc5e1ee);
      F_0055aa30(*(undefined4 *)((int)this + 0x194),uVar2);
      if (*(int *)((int)this + 0x180) == 0) {
        return 1;
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0x178))) < 1) {
        return 1;
      }
      uVar2 = F_005612d0(0xff817bf0);
      F_0055aa30(*(undefined4 *)((int)this + 0x1a0),uVar2);
      uVar1 = 0xffe6cf97;
    }
    uVar2 = F_005612d0(uVar1);
    F_0055aa30(*(undefined4 *)((int)this + 0x1ac),uVar2);
  }
  return 1;
}

/* ref: FUN_00813c30 */
uint F_00813c30(unsigned int gen_a0)
{
  GEN_ENTER(0x813c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x6c))),
               (*((char *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x88))) == '\0') + 0xf);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00813cb0 */
uint F_00813cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x813cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce8ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined2 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  F_0090b2e0((undefined *)((int)this + 0x1c0));
  this_00 = (undefined *)((int)this + 0x2e8);
  local_8 = 2;
  do {
    F_0090b030(this_00);
    this_00 = (undefined *)((int)this_00 + 0x1c4);
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x834) = 0;
  *(undefined4 *)((int)this + 0x838) = 0;
  *(undefined4 *)((int)this + 0x83c) = 0;
  *(undefined4 *)((int)this + 0x840) = 0;
  *(undefined4 *)((int)this + 0x844) = 0;
  *(undefined4 *)((int)this + 0x848) = 0;
  *(undefined4 *)((int)this + 0x84c) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x850) = 0;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  return (uint)this;
}

/* ref: Client::UI2::AddonBuddy::vf45 */
uint F_00813dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x813dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_007b6220(this);
  return uVar1;
}

/* ref: Client::UI2::AddonBuddy::vf47 */
uint F_00813dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x813dd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  float fVar7;
  
  iVar1 = *(int *)(param_2 + 0xe0);
  iVar2 = *(int *)(param_3 + 0xd0);
  uVar4 = param_2;
  if ((iVar1 != 0) && (iVar2 != 0)) {
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x180),**(undefined4 * PTR32 *)(iVar2 + 0x20));
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x184),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4))));
    iVar6 = (*(int * PTR32 *)(iVar1 + 0x20))[1];
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)((uint)*(ushort *)(param_1 + 0x1bc) * **(int * PTR32 *)(iVar1 + 0x20)) / iVar6;
    }
    F_0055a060(*(undefined4 *)(param_1 + 0x188),iVar6);
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x18c),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xc))));
    F_00584110(*(undefined * PTR32 *)(param_1 + 400),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x10))));
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc)));
    fVar7 = (float)iVar6;
    if ((GEN_ISNAN(fVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(fVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar7 == *(float *)&REFG(undefined, 0x1088114))) {
      fVar7 = ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))) / (float10)iVar6)));
    }
    F_00568230(*(undefined4 *)(param_1 + 0x194),fVar7);
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x198),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x14))));
    F_00584110(*(undefined * PTR32 *)(param_1 + 0x19c),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x18))));
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x14)));
    fVar7 = (float)iVar6;
    if ((GEN_ISNAN(fVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(fVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar7 == *(float *)&REFG(undefined, 0x1088114))) {
      fVar7 = ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x10))) / (float10)iVar6)));
    }
    F_00568230(*(undefined4 *)(param_1 + 0x1a0),fVar7);
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x18)));
    uVar3 = 0x67;
    if (iVar6 == 1) {
      uVar3 = 0x66;
    }
    else if (iVar6 == 2) {
      uVar3 = 0x65;
    }
    F_0059d640(*(undefined * PTR32 *)(param_1 + 0x1a4),uVar3);
    iVar1 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x1c)));
    iVar6 = 0;
    piVar5 = (int *)(param_1 + 0x21c);
    do {
      F_0059d670(*(undefined * PTR32 *)(*piVar5 + 0x6c),(-(uint)(iVar1 != iVar6) & 0xffffffac) + 0x65);
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 10;
    } while (iVar6 < 6);
    uVar4 = F_00584110(*(undefined * PTR32 *)(param_1 + 0x850),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1c))))
    ;
  }
  return uVar4;
}

/* ref: Client::UI2::AddonBuddy::vf2 */
uint F_00813fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x813fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)(param_1 & 0xffff);
  if (piVar2 == (int *)0x17) {
    if ((int)param_2 - 9U < 0x1e) {
      uVar3 = F_007b6060(this,((int)param_2 - 9U) / 10,param_3,param_4);
      return uVar3;
    }
    piVar2 = param_2;
    if ((int)param_2 - 0x27U < 3) {
      uVar3 = F_007b6100(this,(int)param_2 + -0x27,param_3,param_4);
      return uVar3;
    }
  }
  else if (piVar2 == (int *)0x2d) {
    if (((((int *)0x2 < param_2) && (param_2 < (int *)0x9)) || (param_2 == (int *)0x1)) ||
       (piVar2 = param_2, param_2 == (int *)0x2)) {
      piVar2 = (int *)*param_4;
      if (piVar2 != (int *)0x0) {
        uVar1 = *(ushort *)(piVar2 + 6);
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2);
        *(uint *)(uVar3 + 4) = (uint)uVar1;
      }
      uVar3 = F_00557670(param_3,0);
      return uVar3;
    }
  }
  else if (piVar2 == (int *)0x34) {
    piVar2 = param_4;
    if ((char)param_4[2] == '\x03') {
      if ((int)param_2 - 3U < 6) {
        if (this[(int)((int)(uintptr_t)param_2) * 0x28 + 0x1a0] != (undefined1)0x0) {
          uVar3 = F_007b5fb0(this,0x80000,param_3,param_4);
          return uVar3;
        }
      }
      else {
        if (param_2 == (int *)0x1) {
          uVar3 = F_007b5fb0(this,0x10000,param_3,param_4);
          return uVar3;
        }
        if (param_2 == (int *)0x2) {
          uVar3 = F_007b5fb0(this,0x1000000,param_3,param_4);
          return uVar3;
        }
      }
    }
    else if ((int)param_2 - 3U < 6) {
      piVar2 = (int *)F_007b5f00(this,0xc,6,param_3,param_4);
    }
    else {
      if (param_2 == (int *)0x1) {
        uVar3 = F_007b5f00(this,0xb,0,param_3,param_4);
        return uVar3;
      }
      if (param_2 == (int *)0x2) {
        uVar3 = F_007b5f00(this,0xc,0xd,param_3,param_4);
        return uVar3;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: Client::UI2::AddonBuddy::vf59 */
byte F_00814100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x814100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005b1020((undefined *)this,param_1,param_2);
  if ((byte)uVar1 != 0) {
    F_007b6220(this);
  }
  return (byte)uVar1;
}

/* ref: FUN_00814130 */
uint F_00814130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x814130u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte * pbVar1;
  byte * pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * pvVar6;
  bool bVar7;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[3]);
  if ((*(*(byte * PTR32 *)&gen_args[3]) & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[3]) + 4)));
  }
  bVar7 = iVar3 != 0;
  pbVar1 = (*(byte * PTR32 *)&gen_args[3]) + 0x10;
  (*(byte * PTR32 *)&gen_args[3]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[3]), 1, 3),bVar7)));
  if ((*pbVar1 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(pbVar2 + 0x14);
  }
  F_0057eb30(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])),uVar4,0,0,0,0);
  if ((pbVar2[0x28] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(pbVar2 + 0x2c);
  }
  F_00591c00(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[3])),uVar4,0);
  uVar4 = 0x67;
  if (((pbVar2[8] & 0xf) == 0) || (*(int *)(pbVar2 + 0xc) == 0)) {
    if (bVar7) {
      uVar4 = 0x65;
    }
  }
  else {
    uVar4 = 0x68;
  }
  F_0059d640(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1])),uVar4);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0x28))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))),(*(byte * PTR32 *)&gen_args[3]));
  pvVar6 = (undefined *)0x0;
  if (*(*(int * PTR32 *)&gen_args[1]) != 0) {
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x70)));
  }
  F_005840a0(pvVar6,0x17,(*(undefined4 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[0]),0);
  if (bVar7) {
    if (*(*(int * PTR32 *)&gen_args[1]) == 0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x70)));
    }
    F_00568380(pvVar6,0x17,(*(undefined4 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[0]),0,0);
  }
  if ((pbVar2[0x18] & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(pbVar2 + 0x1c);
  }
  (*(int * PTR32 *)&gen_args[1])[4] = 0;
  (*(int * PTR32 *)&gen_args[1])[5] = 0;
  (*(int * PTR32 *)&gen_args[1])[7] = 0;
  (*(int * PTR32 *)&gen_args[1])[9] = 9;
  *((undefined2 *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 10))) = 0;
  (*(int * PTR32 *)&gen_args[1])[6] = uVar5 & 0xffffff;
  (*(int * PTR32 *)&gen_args[1])[8] = 0x17;
  if ((uVar5 & 0xff000000) == 0x1000000) {
    (*(int * PTR32 *)&gen_args[1])[8] = 0x15;
  }
  if ((pbVar2[0x20] & 0xf) == 0) {
    (*(int * PTR32 *)&gen_args[1])[4] = 0;
    return 0;
  }
  (*(int * PTR32 *)&gen_args[1])[4] = *(int *)(pbVar2 + 0x24);
  return uVar5 & 0xff000000;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf44 */
uint F_00814270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x814270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  
  uVar1 = F_0055e320(this);
  if (uVar1 != 0) {
    if ((param_2[0x10] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x14);
    }
    if ((param_2[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 0xc);
    }
    F_0058a320(uVar1,uVar4,uVar3);
  }
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  *(undefined4 *)(this + 0x184) = uVar2;
  uVar1 = F_0055e2f0(this,4);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar3 = F_005613a0(uVar1), uVar3 != 9)) {
      uVar1 = 0;
    }
  }
  *(uint *)(this + 0x180) = uVar1;
  if (uVar1 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *(undefined * PTR32 *)(uVar1 + 0x70);
  }
  F_00568380(this_00,0x21,1,this,0,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0x7b65c0));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x180),&(*(undefined * PTR32 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x4)),2,0);
  F_0056b630(this,0x18ae4,7,0,9,0,0);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCatch::vf38 */
uint F_00814380(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x814380u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 extraout_var = 0;
  undefined2 extraout_var_00 = 0;
  undefined1 * this;
  int iVar5;
  
  this = (gen_frame + 0x1c);
  F_005a2370(param_1,param_2);
  uVar3 = *(byte *)((int)param_1 + 0x18a) - 1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    if ((*(byte *)((int)param_1 + 0xf9) & 1) == 0) {
      return uVar3;
    }
    goto LAB_008144f6;
  case 1: ;
    uVar4 = F_00559cd0(*(undefined4 *)((int)param_1 + 0x90));
    uVar3 = F_00559cb0(*(undefined4 *)((int)param_1 + 0x90));
    if (uVar3 <= uVar4) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      bVar1 = *(byte *)((int)param_1 + 0x13a);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
      (*(uint *)(gen_frame + 0x18)) = (uint)bVar1;
      F_005a9110(param_1,2,&(*(undefined4 *)(gen_frame + 0xc)));
      *(undefined1 *)((int)param_1 + 0x18a) = 0;
      iVar5 = 1;
      do {
        this = this + -8;
        uVar3 = F_005a2670(this);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      return uVar3;
    }
    break;
  case 2: ;
    uVar4 = F_00559cd0(*(undefined4 *)((int)param_1 + 0x90));
    uVar2 = F_00567f90(*(undefined * PTR32 *)((int)param_1 + 0x90),0x68);
    uVar3 = CONCAT22(extraout_var,uVar2 - 1);
    if ((ushort)(uVar2 - 1) <= uVar4) {
      F_0059d640(*(undefined * PTR32 *)((int)param_1 + 0x90),0x68);
      uVar3 = F_007b6d80(param_1);
      *(undefined1 *)((int)param_1 + 0x18a) = 4;
      return uVar3;
    }
    break;
  case 3: ;
    if ((*(int *)((int)param_1 + 0x180) != 0) || (*(int *)((int)param_1 + 0x184) != 0)) {
      uVar3 = F_00559cd0(*(undefined4 *)((int)param_1 + 0x90));
      uVar2 = F_00567f90(*(undefined * PTR32 *)((int)param_1 + 0x90),0x69);
      if (uVar3 < (ushort)(uVar2 - 1)) {
        return CONCAT22(extraout_var_00,uVar2 - 1);
      }
      uVar3 = 0;
      *(undefined2 *)((int)param_1 + 0x188) = 0;
    }
    *(undefined1 *)((int)param_1 + 0x18a) = 5;
    return uVar3;
  case 4: ;
    *(short *)((int)param_1 + 0x188) = *(short *)((int)param_1 + 0x188) + -1;
    if (0 < *(short *)((int)param_1 + 0x188)) {
      return uVar3;
    }
    *(undefined2 *)((int)param_1 + 0x188) = 0;
LAB_008144f6: ;
    uVar3 = F_0059d640(*(undefined * PTR32 *)((int)param_1 + 0x90),0x69);
    *(undefined1 *)((int)param_1 + 0x18a) = 2;
  }
  return uVar3;
}

/* ref: Client::UI2::AddonCatch::vf2 */
unsigned int F_00814530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x814530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  short * param_4 = (short *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if (((short)param_1 == 0x41) && (param_2 == 0)) {
    sVar1 = *param_4;
    if (sVar1 == 0x66) {
      if (this[399] == (undefined1)0x0) {
        if (((this[0x18e] != (undefined1)0x0) || (this[0x18c] != (undefined1)0x0)) ||
           (this[0x18d] != (undefined1)0x0)) {
          uVar3 = F_0055dcb0();
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x44);
          F_005a2670(((undefined1 *)(gen_frame + 0x4)));
        }
        pvVar2 = (undefined *)F_0055e2f0(this,0xe);
        F_0059d640(pvVar2,(this[0x18b] == (undefined1)0x0) + 0x65);
        this[399] = (undefined1)0x1;
      }
    }
    else if (sVar1 == 0x67) {
      if ((this[400] == (undefined1)0x0) && (this[0x18a] == (undefined1)0x0)) {
        pvVar2 = (undefined *)F_0055e2f0(this,4);
        F_0059d640(pvVar2,(-(uint)(this[0x18c] != (undefined1)0x0) & 0x54) + 0x11);
        pvVar2 = (undefined *)F_0055e2f0(this,0xb);
        F_0059d640(pvVar2,(-(uint)(this[0x18d] != (undefined1)0x0) & 0x54) + 0x11);
        this[400] = (undefined1)0x1;
        this[0x18a] = (undefined1)0x3;
        return 0;
      }
    }
    else if (sVar1 == 0x68) {
      F_007b6d80(this);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00814660 */
unsigned int F_00814660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x814660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint * puVar1;
  int iVar2;
  int * piVar3;
  undefined4 in_ecx;
  uint uVar4;
  
  if (((param_1 == 0x2d) && (iVar2 = *(int *)((int)this + 0x184), iVar2 != 0)) &&
     ((*(byte *)(iVar2 + 0x2c) & 1) != 0)) {
    if (((*param_2 & 0xf) != 0) && (*(int *)(param_2 + 4) != 0)) {
      F_00560f40(iVar2,0x2d,param_2);
    }
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x184) + 4))) + 0x120)));
    *puVar1 = *puVar1 | 0x400;
    in_ecx = 0;
    if (*(int *)((int)this + 0x18c) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x70)));
    }
    uVar4 = F_0055a2d0(in_ecx);
    if ((char)uVar4 == '\0') {
      uVar4 = F_0055dcb0();
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x14) + 0xcc))) == *((int *)GEN_TOP((*(int *)((int)this + 0x184) + 4)))) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
      }
      piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x184) + 4)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0,0);
    }
    else {
      piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x184) + 4)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3,0);
    }
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x184) + 4))) + 0x120)));
    *puVar1 = *puVar1 & 0xfffffbff;
  }
  return 0;
}

/* ref: FUN_00814740 */
uint F_00814740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x814740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*((int *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4))) == 0) {
    uVar1 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x18c),2,0);
    return uVar1;
  }
  uVar1 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x18c),3,0);
  return uVar1;
}

/* ref: FUN_00814770 */
uint F_00814770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x814770u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  return uVar1;
}

/* ref: FUN_008147a0 */
uint F_008147a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8147a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 8)));
  this_00 = (undefined *)F_00559ba0(param_2[1]);
  this_01 = (undefined *)F_00559ba0(param_2[2]);
  this = (undefined *)*param_2;
  F_0055a300(this,(uint)(iVar1 != 0));
  if (iVar1 != 0) {
    F_005951c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x20))),iVar1,0,this);
  }
  F_00584110(this_00,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  uVar2 = F_00584110(this_01,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))) + 4))));
  return uVar2;
}

/* ref: FUN_00814820 */
byte F_00814820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x814820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18c) + 0x7c))))(*(int * PTR32 *)((int)this + 0x18c));
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = (int *)F_0056dc60(*(undefined4 *)((int)this + 0x18c),uVar3);
      if (*(int *)(*piVar2 + 4) == param_3) {
        *param_1 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00814880 */
uint F_00814880(unsigned int gen_a0)
{
  GEN_ENTER(0x814880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  *(undefined * PTR32 *)((int)this + 0x194) = this;
  *(gen_code32 *)((int)this + 0x198) = ((code *)REFP(0x814740));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0x814770));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00574320(*(undefined * PTR32 *)((int)this + 0x18c),&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)),1,2);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 2;
  (*(undefined4 *)(gen_frame + 0x30)) = 3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 6;
  (*(undefined4 *)(gen_frame + 0x54)) = 7;
  (*(undefined4 *)(gen_frame + 0x60)) = 8;
  (*(undefined4 *)(gen_frame + 0x6c)) = 9;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0x8147a0));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  uVar1 = F_00574320(*(undefined * PTR32 *)((int)this + 0x18c),&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x24)),7,3);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: FUN_00814980 */
byte F_00814980(unsigned int gen_a0)
{
  GEN_ENTER(0x814980u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 != (int *)0x0) && (*(int *)(*param_1 + 4) != 0)) {
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_008149a0 */
uint F_008149a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8149a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(*param_1 + 4);
    F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf5 */
uint F_00814a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x814a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((*(int *)(this + 0x184) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x184) + 4))) != 0)) &&
     (*(int *)(this + 0x18c) != 0)) {
    uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))));
    if ((char)uVar1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 4))) + 0x14))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 4))),param_1);
    }
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf6 */
uint F_00814a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x814a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (((*(int *)(this + 0x184) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x184) + 4))) != 0)) &&
     (*(int *)(this + 0x18c) != 0)) {
    uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))));
    if ((char)uVar1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 4))) + 0x18))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 4))),param_1,0);
    }
  }
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonCutSceneReplayDetail::vf46 */
byte F_00814ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x814ac0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  char cVar2;
  ushort uVar3;
  byte * pbVar4;
  int iVar5;
  undefined4 uVar6;
  char * pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined * this_00;
  undefined4 uVar11;
  undefined4 uVar12;
  
  pbVar4 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(int *)&gen_args[1]) != 0) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) = iVar5;
    if (iVar5 != 0) {
      if (((*(byte * PTR32 *)&gen_args[2])[0x28] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x2c)));
      }
      F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),uVar6);
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),1);
      if ((*(uint *)(pbVar4 + 8) & 0xf) == 0) {
        pcVar7 = (char *)0x0;
      }
      else {
        pcVar7 = *(char * PTR32 *)(pbVar4 + 0xc);
      }
      pcVar1 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if (pcVar7 == pcVar1) {
        uVar6 = 0;
      }
      else if ((*(uint *)(pbVar4 + 8) & 0xf) == 0) {
        F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),0);
        uVar6 = 1;
      }
      else {
        F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),*(undefined4 *)(pbVar4 + 0xc));
        uVar6 = 1;
      }
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))),uVar6);
      if ((pbVar4[0x10] & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pbVar4 + 0x14);
      }
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),(uint)(iVar5 != 0));
      if (iVar5 != 0) {
        F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),iVar5,0);
      }
      if ((pbVar4[0x18] & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pbVar4 + 0x1c);
      }
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),(uint)(iVar5 != 0));
      if (iVar5 != 0) {
        F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),iVar5,0);
      }
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) == 1) {
        if ((pbVar4[0x20] & 0xf) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(pbVar4 + 0x24);
        }
        F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),(uint)(iVar5 != 0));
        if (iVar5 == 0) {
          uVar3 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ba)));
        }
        else {
          F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),iVar5,0);
          uVar3 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8)));
        }
        (*(uint *)(gen_frame + 0x4)) = (uint)uVar3;
        F_00559f00(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),(float)(*(uint *)(gen_frame + 0x4)));
        if ((pbVar4[0x38] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(pbVar4 + 0x3c);
        }
        F_007b71f0((*(undefined * PTR32 *)&gen_args[0]),uVar6,(*(int *)&gen_args[1]),pbVar4,8);
        F_00577d20(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),((undefined1 *)(gen_frame + 0x8)),&(*(byte * PTR32 *)&gen_args[2]),0,0,REFG(undefined4, 0x108cc50),0);
        uVar8 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x1e);
        F_0055a080(uVar8,(uint)(ushort)((short)(*(byte * PTR32 *)&gen_args[2]) + uVar3));
        F_00574c80(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),0,1,1);
        uVar6 = 0;
        uVar9 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x22);
        F_0058e3c0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),uVar8,uVar9,uVar6);
        uVar6 = 0x65;
      }
      else {
        if ((pbVar4[0x20] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(pbVar4 + 0x24);
        }
        F_00592c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),uVar6);
        if ((pbVar4[0x150] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(pbVar4 + 0x154);
        }
        if ((pbVar4[0x30] & 0xf) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(pbVar4 + 0x34);
        }
        if ((pbVar4[0x100] & 0xf) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(pbVar4 + 0x104);
        }
        if ((pbVar4[0x108] & 0xf) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(pbVar4 + 0x10c);
        }
        F_005ae8f0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),uVar10,(*(int *)&gen_args[1]),pbVar4,0x22,uVar11,uVar12,uVar6);
        if ((pbVar4[0x38] & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(pbVar4 + 0x3c);
        }
        F_005a49e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),uVar6,(*(int *)&gen_args[1]),pbVar4,8);
        F_00574ec0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))));
        F_00574dc0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),0,1,1);
        if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) + 0x70)));
        }
        uVar12 = 0;
        uVar8 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x22);
        F_0058e3c0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),uVar6,uVar8,uVar12);
        uVar6 = 0x66;
      }
      this_00 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x1d);
      F_0059d670(this_00,uVar6);
      if ((pbVar4[0x158] & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pbVar4 + 0x15c);
      }
      F_00561c50(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))),0);
      F_00561c70(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))),iVar5 + -1);
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) + 0x28))))
                (*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))),(uint)(iVar5 + -1 != 0));
      if ((pbVar4[0x160] & 0xf) == 0) {
        F_007b7340((*(undefined * PTR32 *)&gen_args[0]),0);
        return 1;
      }
      F_007b7340((*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)(pbVar4 + 0x164));
      return 1;
    }
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))),0);
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),0);
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),0);
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),0);
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) == 0) {
      F_0055a300((undefined *)0x0,0);
      return 1;
    }
    F_0055a300(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + 0x70))),0);
  }
  return 1;
}

/* ref: FUN_00814ea0 */
uint F_00814ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x814ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_ecx;
  uint uVar1;
  
  in_ecx = 0;
  if (*(int *)((int)this + 0x1a0) != 0) {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x70)));
  }
  uVar1 = F_0055a350(in_ecx);
  if ((char)uVar1 != '\0') {
    uVar1 = F_0059f6f0(*(undefined * PTR32 *)((int)this + 0x1a0),
                         (int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x1a0) + 0xc2))) *
                         ((uint)((short)param_1 < 1) * 2 + -1),1);
  }
  return uVar1;
}

/* ref: FUN_00814ef0 */
uint F_00814ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x814ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ceeec));
  in_ecx = (int)this + 0x180;
  iVar1 = 0x95;
  do {
    F_0042b630(in_ecx);
    F_0042b630(in_ecx + 0x58);
    F_0042b630(in_ecx + 0xac);
    in_ecx = in_ecx + 0x100;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined2 *)((int)this + 0x9780) = 0;
  F_0042b630((int)this + 0x9784);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x300;
  *(undefined4 *)((int)this + 0x97dc) = 0;
  *(undefined1 *)((int)this + 0x98aa) = 0;
  *(undefined4 *)((int)this + 0x98c8) = 0;
  *(undefined4 *)((int)this + 0x98cc) = 0;
  *(undefined4 *)((int)this + 0x98d0) = 0;
  *(undefined4 *)((int)this + 0x97d8) = 0xffffffff;
  *(undefined2 *)((int)this + 0x97e0) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0x98ac) = 0;
  *(undefined4 *)((int)this + 0x98b0) = 0;
  *(undefined4 *)((int)this + 0x98b4) = 0;
  *(undefined4 *)((int)this + 0x98b8) = 0;
  *(undefined4 *)((int)this + 0x98bc) = 0;
  *(undefined4 *)((int)this + 0x98c0) = 0;
  *(undefined4 *)((int)this + 0x98c4) = 0;
  return (uint)this;
}

/* ref: FUN_00814fd0 */
uint F_00814fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x814fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  undefined4 in_ecx;
  
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x98ac));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x98c4);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar3 = F_0055a020(in_ecx);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar3;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar3,0x4002);
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  bVar2 = F_0056b630(this,0x18aaf,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_008150b0 */
uint F_008150b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8150b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if (param_1 != (int *)0x0) {
    uVar1 = F_00561390();
    ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,uVar1 + 0xc0);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 100;
    uVar1 = F_0055a260((undefined *)param_1[0x1c],0x17);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(uint *)(gen_frame + 0x1c)) = uVar1;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x8)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar2 = 2;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00815180 */
uint F_00815180(unsigned int gen_a0)
{
  GEN_ENTER(0x815180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cefec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  iVar2 = (int)this + 0x1b8;
  iVar1 = 3;
  do {
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = (int)this + 0x308;
  iVar2 = 0xc;
  do {
    F_0042b630(iVar1);
    iVar1 = iVar1 + 0x54;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar1 = (int)this + 0x74c;
  iVar2 = 1;
  do {
    F_0042b630(iVar1);
    iVar1 = iVar1 + 0x54;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar1 = (int)this + 0x7f4;
  iVar2 = 1;
  do {
    F_0042b630(iVar1);
    iVar1 = iVar1 + 0x54;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar1 = (int)this + 0x89c;
  iVar2 = 2;
  do {
    F_0042b630(iVar1);
    iVar1 = iVar1 + 0x54;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_00815280 */
uint F_00815280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x815280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar4 = 2;
  if (param_1 == 2) {
    F_007b80f0(this,*(undefined4 *)((int)this + 0x188));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x188) + 0x88)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = (uint)(cVar1 != '\0');
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  if (param_1 == 5) {
    F_007b80f0(this,*(undefined4 *)((int)this + 0x194));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 5;
    cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x194) + 0x88)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = (uint)(cVar1 != '\0');
    uVar2 = F_00562c60(*(undefined4 *)((int)this + 0x198));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    iVar4 = 2;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  uVar2 = param_1;
  if (param_1 == 8) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 8;
    cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x88)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(uint *)(gen_frame + 0xc)) = (uint)(cVar1 != '\0');
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar3 = &(*(uint *)(gen_frame + 0x18));
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: Client::UI2::AddonConfigLog::vf2 */
uint F_00815440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x815440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  if ((short)param_1 == 0x21) {
    uVar1 = F_007b7d70(this,param_2,param_3,param_4);
    return uVar1;
  }
  if ((short)param_1 == 0x17) {
    F_00815280(this,param_2,param_3,param_4);
    uVar1 = F_007b7fa0(this,param_2,param_3,param_4);
  }
  return uVar1;
}

/* ref: FUN_008154a0 */
uint F_008154a0(unsigned int gen_a0)
{
  GEN_ENTER(0x8154a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x180);
  *(undefined4 *)((int)this + 0x1a4) = *(undefined4 *)((int)this + 0x184);
  *(undefined4 *)((int)this + 0x1a8) = *(undefined4 *)((int)this + 0x188);
  *(int *)((int)this + 0x1a0) = iVar1;
  *(undefined4 *)((int)this + 0x1ac) = *(undefined4 *)((int)this + 0x18c);
  *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)((int)this + 400);
  pvVar2 = (undefined *)0x0;
  if (iVar1 != 0) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(pvVar2,0x17,0,this,0,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x1a4) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0x70)));
  }
  F_00568380(pvVar2,0x17,1,this,0,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x1a8) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1a8) + 0x70)));
  }
  F_00568380(pvVar2,0x17,2,this,0,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x1ac) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x70)));
  }
  F_00568380(pvVar2,0x17,3,this,0,0);
  uVar3 = F_0059dde0(*(undefined * PTR32 *)((int)this + 0x1a0),1);
  *(undefined4 *)((int)this + 0xda4) = 0;
  return uVar3;
}

/* ref: FUN_00815570 */
uint F_00815570(unsigned int gen_a0)
{
  GEN_ENTER(0x815570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (*(int *)((int)this + 0x1a0) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x70)));
  }
  F_005840a0(pvVar2,0x17,0,this,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x1a4) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0x70)));
  }
  F_005840a0(pvVar2,0x17,1,this,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x1a8) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1a8) + 0x70)));
  }
  F_005840a0(pvVar2,0x17,2,this,0);
  if (*(int *)((int)this + 0x1ac) == 0) {
    uVar1 = F_005840a0((undefined *)0x0,0x17,3,this,0);
    return uVar1;
  }
  uVar1 = F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x70))),0x17,3,this,0);
  return uVar1;
}

/* ref: FUN_00815600 */
uint F_00815600(unsigned int gen_a0)
{
  GEN_ENTER(0x815600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x1b4);
  do {
    if (*piVar3 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(*piVar3 + 0x70);
    }
    F_005840a0(pvVar2,0x17,iVar4 + 7,this,0);
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x10);
  if (*(int *)((int)this + 0x19c) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x19c) + 0x70)));
  }
  F_005840a0(pvVar2,0x17,4,this,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x198) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 0x70)));
  }
  F_005840a0(pvVar2,0x17,5,this,0);
  if (*(int *)((int)this + 0x194) == 0) {
    uVar1 = F_005840a0((undefined *)0x0,0x17,6,this,0);
    return uVar1;
  }
  uVar1 = F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x194) + 0x70))),0x17,6,this,0);
  return uVar1;
}

/* ref: FUN_008156a0 */
uint F_008156a0(unsigned int gen_a0)
{
  GEN_ENTER(0x8156a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  F_007b84a0(this,&(*(int *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0xc)));
  uVar5 = 0;
  piVar4 = (int *)((int)this + 0x1b4);
  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x14)) * 0x54 + 0x27c + (int)this;
  do {
    iVar1 = *piVar4;
    if (uVar5 < (*(uint *)(gen_frame + 0xc))) {
      if (iVar1 == 0) {
        pvVar3 = (undefined *)0x0;
      }
      else {
        pvVar3 = *(undefined * PTR32 *)(iVar1 + 0x70);
      }
      F_0055a300(pvVar3,1);
      F_007b83a0(this,uVar5,*((undefined4 *)GEN_TOP(((int)this + (uVar5 + (*(int *)(gen_frame + 0x14))) * 4 + 500))));
      pvVar3 = (undefined *)F_00561530((undefined *)*piVar4,2);
      uVar2 = 0;
      this = (*(undefined * PTR32 *)(gen_frame + 0x10));
      if (pvVar3 != (undefined *)0x0) {
        uVar2 = F_0042a990((*(int *)(gen_frame + 0x18)));
        uVar2 = F_00584110(pvVar3,uVar2);
        this = (*(undefined * PTR32 *)(gen_frame + 0x10));
      }
    }
    else if (iVar1 == 0) {
      uVar2 = F_0055a300((undefined *)0x0,0);
    }
    else {
      uVar2 = F_0055a300(*(undefined * PTR32 *)(iVar1 + 0x70),0);
    }
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x54;
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar5 < 0x10);
  return uVar2;
}

/* ref: FUN_00815760 */
uint F_00815760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x815760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0xda4) = param_1;
  uVar1 = F_008156a0(this);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigLogColor::vf2 */
uint F_00815780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x815780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined4 in_ecx;
  undefined1 * this_00;
  int iVar3;
  
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  if ((short)param_1 == 0x17) {
    if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) || (param_2 == 3)) {
      *(uint *)(this + 0xda4) = param_2;
      F_008156a0(this);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
    if (param_2 == 4) {
      F_007b8520(this,4,param_3,param_4);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
    if (param_2 == 5) {
      F_007b8570(this,5,param_3,param_4);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
    if (param_2 == 6) {
      F_007b85d0(this,6,param_3,param_4);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
    uVar2 = param_2;
    if (param_2 - 7 < 0x10) {
      F_007b8630(this,param_2,param_3,param_4);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
  }
  else if ((short)param_1 == 0xf) {
    bVar1 = F_00a34970(*(undefined * PTR32 *)(param_4 + 8),5);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      in_ecx = 0;
      if (*(int *)(this + 0x198) != 0) {
        in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
      }
      uVar2 = F_0055a350(in_ecx);
      if ((char)uVar2 != '\0') {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
        (*(undefined4 *)(gen_frame + 0x8)) = 1;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x14)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0x14)));
        this_00 = ((undefined1 *)(gen_frame + 0x14));
        iVar3 = 1;
        do {
          this_00 = this_00 + -8;
          F_005a2670(this_00);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      uVar2 = F_00557670(param_3,0);
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonConfigLogColor::vf60 */
byte F_00815920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x815920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_ecx;
  
  iVar1 = *(int *)(this + 0xda4);
  if (param_1 == 0xf) {
    *(uint *)(this + 0xda4) = iVar1 + 1U;
    if (3 < iVar1 + 1U) {
      *(uint *)(this + 0xda4) = -(uint)((char)param_2 != '\0') & 3;
    }
  }
  else if (param_1 == 0x10) {
    if (iVar1 == 0) {
      if ((char)param_2 == '\0') {
        *(undefined4 *)(this + 0xda4) = 3;
      }
    }
    else {
      *(int *)(this + 0xda4) = iVar1 + -1;
    }
  }
  if (*(int *)(this + 0xda4) != iVar1) {
    piVar2 = *((int * PTR32 *)GEN_TOP((this + *(int *)(this + 0xda4) * 4 + 0x1a0)));
    uVar4 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar4 + 0xc0);
    F_008156a0(this);
    uVar4 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    uVar4 = F_0055dcb0();
    uVar4 = F_0055b9e0(uVar4);
    bVar3 = F_0055de10(this,uVar4);
    if (bVar3 != 0) {
      uVar4 = F_00561680(uVar4);
      while( true ) {
        if (uVar4 == 0) {
          in_ecx = 0;
        }
        else {
          in_ecx = *(undefined4 *)(uVar4 + 0x70);
        }
        uVar5 = F_0055a2d0(in_ecx);
        if ((char)uVar5 != '\0') break;
        uVar4 = F_00573130(this + 0x24,(uint)*(byte *)(uVar4 + 0x79),1,0);
      }
      F_0059b390(this,uVar4,1,0);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00815a40 */
uint F_00815a40(unsigned int gen_a0)
{
  GEN_ENTER(0x815a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  undefined4 in_ecx;
  
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x1a0));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x1ac);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar3 = F_0055a020(in_ecx);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar3;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar3,0x4002);
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  bVar2 = F_0056b630(this,0x18ac0,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00815b20 */
uint F_00815b20(unsigned int gen_a0)
{
  GEN_ENTER(0x815b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf1ec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  iVar1 = 0x1f;
  iVar2 = (int)this + 0x224;
  do {
    F_0042b630(iVar2 + -0x5c);
    F_0042b630(iVar2);
    iVar2 = iVar2 + 0xb4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = (int)this + 0x1848;
  iVar2 = 5;
  do {
    F_0042b630(iVar1);
    iVar1 = iVar1 + 0x58;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogFilter::vf46 */
byte F_00815c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x815c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int * this_00;
  undefined * pAVar5;
  byte * pbVar6;
  uint local_8;
  
  if (param_2 != (byte *)0x0) {
    uVar1 = F_0055dcb0();
    F_0055b990(uVar1);
    if ((*param_2 & 0xf) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(uint *)(param_2 + 4);
    }
    if ((local_8 & 1) != 0) {
      if ((param_2[0x390] & 0xf) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_2 + 0x394);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b8) + 0x28))))(*(int * PTR32 *)(this + 0x1b8),(uint)(iVar2 != 0));
    }
    if ((local_8 & 2) != 0) {
      if ((param_2[0x120] & 0xf) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_2 + 0x124);
      }
      uVar1 = 0;
      *(int *)(this + 0x1c0) = iVar2;
      if (iVar2 != 0) {
        pbVar6 = param_2 + 0x22c;
        pAVar5 = this + 0x21c;
        do {
          *(uint *)(pAVar5 + -0x58) = uVar1;
          if ((pbVar6[-0x104] & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar6 + -0x100);
          }
          F_0042e430(pAVar5 + -0x54,uVar3);
          if ((param_2[0x18] & 0xf) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(param_2 + 0x1c);
          }
          uVar3 = 0;
          *(uint *)pAVar5 = (uint)((1 << ((byte)uVar1 & 0x1f) & uVar4) != 0);
          if ((pbVar6[-4] & 0xf) != 0) {
            uVar3 = *(undefined4 *)pbVar6;
          }
          F_0042e430(pAVar5 + 8,uVar3);
          if ((pbVar6[-0x20c] & 0xf) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(pbVar6 + -0x208);
          }
          *(uint *)(pAVar5 + 4) = uVar4 >> 0x10 & 0xff | (uVar4 & 0xff) << 0x10 | uVar4 & 0xff00ff00
          ;
          uVar1 = uVar1 + 1;
          pbVar6 = pbVar6 + 8;
          pAVar5 = pAVar5 + 0xb4;
        } while (uVar1 < *(uint *)(this + 0x1c0));
      }
      this_00 = (int *)0x0;
      if (*((char *)GEN_TOP((*(int *)(this + 0x188) + 0x88))) == '\0') {
        if (*((char *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))) == '\0') {
          if (*((char *)GEN_TOP((*(int *)(this + 400) + 0x88))) != '\0') {
            this_00 = *(int * PTR32 *)(this + 0x1a4);
          }
        }
        else {
          this_00 = *(int * PTR32 *)(this + 0x19c);
        }
      }
      else {
        this_00 = *(int * PTR32 *)(this + 0x198);
      }
      F_0059ead0(this_00,(uint)*(ushort *)(this + 0x1c0),0,1);
      ((code *)*(gen_code32 *)(*this_00 + 0x70))(this_00);
      if (-1 < this_00[0x30]) {
        iVar2 = this_00[0x30] * 0xb4;
        F_007b8980(this,*(undefined4 *)(this + iVar2 + 0x220),this + iVar2 + 0x224);
      }
    }
    if ((local_8 & 4) != 0) {
      if ((param_2[8] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0xc);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x180),uVar3);
      if ((param_2[0x10] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0x14);
      }
      F_00584110(*(undefined * PTR32 *)(this + 0x184),uVar3);
    }
  }
  return 1;
}

/* ref: FUN_00815e10 */
uint F_00815e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x815e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_007b8ab0(this);
  uVar1 = F_00557670(param_2,0);
  return uVar1;
}

/* ref: FUN_00815e30 */
uint F_00815e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x815e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 8) * 0xb4;
  uVar1 = F_007b8980(this,*(undefined4 *)((int)this + iVar2 + 0x220),(int)this + iVar2 + 0x224);
  return uVar1;
}

/* ref: FUN_00815e70 */
uint F_00815e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x815e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_0042a990((int)this + param_1 * 0xb4 + 0x1c8);
  pvVar2 = (undefined *)F_00559ba0(param_2[1]);
  F_00584110(pvVar2,uVar1);
  if (((*param_2 == 0) || (pvVar2 = (undefined *)F_00559c20(*param_2), pvVar2 == (undefined *)0x0)) ||
     (uVar1 = F_005613a0(pvVar2), uVar1 != 3)) {
    pvVar2 = (undefined *)0x0;
  }
  uVar1 = F_0059dde0(pvVar2,(uint)(*(int *)((int)this + param_1 * 0xb4 + 0x21c) != 0));
  return uVar1;
}

/* ref: FUN_00815ee0 */
uint F_00815ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x815ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  undefined4 in_ecx;
  
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x188));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 400);
  F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar3 = F_0055a020(in_ecx);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar3;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar3,0x4002);
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  bVar2 = F_0056b630(this,0x18abf,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: Client::UI2::AddonConfigSystem::vf2 */
uint F_00815fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x815fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar5;
  uint * puVar6;
  int iVar7;
  undefined * puVar8;
  float fVar9;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar2;
  uVar3 = param_1 & 0xffff;
  piVar4 = (int *)(uVar3 - 0xc);
  if (piVar4 < (int *)0x3d) {
    piVar4 = (int *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8165bc) + uVar3)));
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0xc: ;
      bVar1 = *(byte *)(param_4 + 1);
      piVar4 = (int *)(uint)bVar1;
      if (bVar1 == 0) {
        piVar4 = (int *)*param_4;
        if (piVar4 == (int *)&REFG(undefined, 0x5)) {
          if (this[0x3e9] != (undefined1)0x0) {
            uVar2 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x0)),1);
            F_005a2670(((undefined1 *)(gen_frame + 0x0)));
          }
          F_00557670(param_3,0);
          uVar2 = F_007b9150(this);
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
          return uVar2;
        }
        if (param_2 == 0) {
          if (piVar4 == (int *)0x2) {
            F_00557670(param_3,0);
            F_0059b390(this,*(undefined4 *)(this + 0x19c),1,0);
            uVar2 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x8)),3);
            uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x8)));
            F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
            return uVar2;
          }
          break;
        }
        if (param_2 != 1) {
          if (((param_2 == 2) && (piVar4 == (int *)0x2)) &&
             (piVar4 = (int *)F_00557670(param_3,0), this[0x3ea] == (undefined1)0x0)) {
            uVar2 = F_007b91b0(this);
            this[0x3ea] = (undefined1)0x0;
            F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
            return uVar2;
          }
          break;
        }
        if (piVar4 == (int *)&REFG(undefined, 0x4)) {
          F_00557670(param_3,0);
          uVar2 = F_007b91e0(this);
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
          return uVar2;
        }
        if (piVar4 == (int *)0x2) {
          F_00557670(param_3,0);
          F_0059b390(this,*((undefined4 *)GEN_TOP((this + *(int *)(this + 0x198) * 4 + 0x180))),1,0);
          uVar2 = F_0055dcb0();
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x10)),3);
          uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x10)));
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
          return uVar2;
        }
        if (piVar4 != (int *)0x9) {
          if (piVar4 == (int *)&REFG(undefined, 0xa)) {
            bVar1 = F_007ba4c0(this);
            piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
            if (bVar1 != 0) {
              uVar2 = F_007ba550(this);
              F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
              return uVar2;
            }
          }
          break;
        }
      }
      else if (((bVar1 != 2) || (param_2 != 1)) || (*param_4 != 9)) break;
      bVar1 = F_007ba500(this);
      piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar1)));
      if (bVar1 != 0) {
        uVar2 = F_007ba550(this);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      break;
    case 0x17: ;
      F_00557670(param_3,0);
      piVar4 = (int *)(param_2 - 1);
      switch((unsigned int)(uintptr_t)(piVar4)) {
      case (int *)0x0: ;
        uVar2 = F_007b91b0(this);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      case (int *)0x1: ;
        this[0x3ea] = (undefined1)0x1;
        uVar2 = F_007b9150(this);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      case (int *)0x2: ;
        uVar2 = F_007b9120(this);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      case (int *)0x3: ;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0x16;
        F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
        puVar6 = &(*(uint *)(gen_frame + 0x38));
        iVar7 = 3;
        do {
          puVar6 = puVar6 + -2;
          uVar2 = F_005a2670(puVar6);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      case (int *)0x4: ;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0x17;
        F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
        puVar6 = &(*(uint *)(gen_frame + 0x38));
        iVar7 = 3;
        do {
          puVar6 = puVar6 + -2;
          uVar2 = F_005a2670(puVar6);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      if (0x21 < param_2) {
        uVar2 = F_007b9470(this,param_2 - 0x22);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      if (5 < param_2) {
        uVar2 = F_007b9560(this,param_2 - 6);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      break;
    case 0x19: ;
      if (param_2 == 2) {
        if (this[0x408] == (undefined1)0x0) {
          *(short *)(this + 0x404) = (short)*param_4 - (short)param_4[1];
          *(undefined2 *)(this + 0x406) = 2;
          F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x3c));
          return (uint)param_4;
        }
      }
      else if (this[1000] == (undefined1)0x0) {
        F_00557670(param_3,0);
        uVar2 = F_007b9820(this,param_2);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      break;
    case 0x1b: ;
      if (this[1000] == (undefined1)0x0) {
        F_00557670(param_3,0);
        uVar2 = F_007b9730(this,param_2);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      break;
    case 0x1c: ;
      if (*(int *)(this + param_2 * 4 + 0x230) != 0) {
        if (param_2 == 4) {
          fVar9 = (float)(float10)1;
          uVar5 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
          puVar8 = REFG(undefined * PTR32, 0x1328428);
        }
        else if (param_2 == 5) {
          uVar5 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
          fVar9 = (float)(float10)1;
          puVar8 = REFG(undefined * PTR32, 0x132842c);
        }
        else {
          if (param_2 != 6) break;
          fVar9 = (float)(float10)1;
          uVar5 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
          puVar8 = REFG(undefined * PTR32, 0x1328430);
        }
        piVar4 = (int *)F_004e9a80(uVar5,puVar8,fVar9,0,0,1);
      }
      break;
    case 0x23: ;
      F_00557670(param_3,0);
      uVar2 = F_007b9640(this,param_2);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar2;
    case 0x2b: ;
      F_00557670(param_3,0);
      if (*((int *)GEN_TOP((*(int *)(this + param_2 * 4 + 0x2b0) + 0x88))) != 0) {
        uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + param_2 * 4 + 0x2b0) + 0x88))) + 0x70)));
        *(uint *)(this + 0x98) = uVar2;
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      *(undefined4 *)(this + 0x98) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return 0;
    case 0x34: ;
      F_00557670(param_3,0);
      if (((char)param_4[2] != '\x01') && ((char)param_4[2] != '\x03')) {
        uVar2 = F_007b92a0(this,param_2,1,(uint)(*(uint *)(this + 0x198) == param_2));
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      F_007b91e0(this);
      uVar2 = F_007b92a0(this,param_2,0,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar2;
    case 0x48: ;
      piVar4 = param_4;
      if ((*param_4 != 0) && (param_4[1] != 0)) {
        uVar2 = F_007ba580(this,param_4[3]);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)piVar4;
}

/* ref: FUN_00816620 */
uint F_00816620(unsigned int gen_a0)
{
  GEN_ENTER(0x816620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x2b0);
  do {
    if (*piVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(*piVar3 + 0x70),0x23,iVar4,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1,0x2b,iVar4,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1,0xc,1,this,0,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x13);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x1c0);
  do {
    if (*piVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(*piVar3 + 0x70),0x17,iVar4 + 6,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1,0xc,1,this,0,0);
      F_005893d0((undefined *)*piVar3,1);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x1c);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x230);
  do {
    if (*piVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(*piVar3 + 0x70),0x1b,iVar4,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1,0x1c,iVar4,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1,0xc,1,this,0,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 10);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 600);
  do {
    if (*piVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(*piVar3 + 0x70),0x17,iVar4 + 0x22,this,0,0);
      F_005893d0((undefined *)*piVar3,1);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1,0xc,1,this,0,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x16);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x2fc);
  do {
    uVar2 = 0;
    if (*piVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(*piVar3 + 0x70),0x19,iVar4,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      uVar2 = F_00568380(pvVar1,0xc,1,this,0,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 2);
  return uVar2;
}

/* ref: FUN_008167c0 */
uint F_008167c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8167c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x2b0);
  do {
    if (*piVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar3 + 0x70),0x23,iVar4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1,0x2b,iVar4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1,0xc,1,this,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x13);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x1c0);
  do {
    if (*piVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar3 + 0x70),0x17,iVar4 + 6,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1,0xc,1,this,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x1c);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x230);
  do {
    if (*piVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar3 + 0x70),0x1b,iVar4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1,0x1c,iVar4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1,0xc,1,this,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 10);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 600);
  do {
    if (*piVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar3 + 0x70),0x17,iVar4 + 0x22,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1,0xc,1,this,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x16);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x2fc);
  do {
    uVar2 = 0;
    if (*piVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar3 + 0x70),0x19,iVar4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      uVar2 = F_005840a0(pvVar1,0xc,1,this,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 2);
  return uVar2;
}

/* ref: FUN_00816930 */
uint F_00816930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x816930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_0055dcb0();
  this_00 = *(undefined * PTR32 *)(uVar1 + 0x30);
  if ((*(byte *)(param_1 + 0xa48) & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xa4c);
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x2b8) != 0) {
    if (iVar3 < 0) {
      iVar3 = 5;
      uVar1 = 6;
    }
    else {
      uVar1 = 5;
    }
    F_0058d980(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2b8) + 0x88))),uVar1);
    F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2b8),iVar3);
    uVar1 = F_0055e340(this,0x60);
    uVar2 = F_0043bd30(this_00,(&REFG(undefined4, 0x10c2d28))[iVar3]);
    uVar1 = F_007ba0e0(this,uVar1,uVar2);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigSystem::vf38 */
uint F_008169c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x8169c0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  *(undefined1 *)((int)param_1 + 0x3ea) = 0;
  F_005a2370(param_1,param_2);
  if (((*(byte *)((int)param_1 + 0xf9) & 1) != 0) &&
     ((((uVar2 = *(uint *)((int)param_1 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)) &&
       (*(short *)((int)param_1 + 0x404) != 0)) && (*(short *)((int)param_1 + 0x406) == 0)))) {
    uVar2 = F_0055de40(param_1,*(undefined4 *)((int)param_1 + 0xa4));
    if ((uVar2 != 0) &&
       ((bVar1 = F_0055a650(*(undefined4 *)(uVar2 + 0x70)), bVar1 != 0 ||
        (bVar1 = F_005c07d0(uVar2), bVar1 != 0)))) {
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      bVar1 = F_0055de10(param_1,uVar2);
      F_005a9af0(param_1,*(undefined4 *)((int)param_1 + 0xa4),
                   (0 < *(short *)((int)param_1 + 0x404)) + 9,0,(uint)(bVar1 != 0));
    }
    *(undefined2 *)((int)param_1 + 0x404) = 0;
  }
  uVar2 = (uint)*(ushort *)((int)param_1 + 0x406);
  if (0 < (short)*(ushort *)((int)param_1 + 0x406)) {
    uVar2 = uVar2 - 1;
    *(short *)((int)param_1 + 0x406) = (short)uVar2;
  }
  if (((REFG(int, 0x1379c70) == 4) && ((*(byte *)((int)param_1 + 0xf9) & 1) != 0)) &&
     ((uVar2 = *(uint *)((int)param_1 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)))) {
    if (*(char *)((int)param_1 + 0x409) == '\0') {
      uVar2 = F_0055dcb0();
      if (*(char *)(uVar2 + 0x21d) == '\0') {
        *(undefined1 *)((int)param_1 + 0x409) = 1;
        uVar2 = F_0055dcb0();
        *(undefined1 *)(uVar2 + 0x1fa) = 1;
        bVar1 = F_0056b630(param_1,0x18ac1,7,0,9,0,0);
        uVar2 = CONCAT31(extraout_var_00,bVar1);
      }
    }
    else {
      uVar2 = F_0055dcb0();
      if (*(char *)(uVar2 + 0x21d) != '\0') {
        *(undefined1 *)((int)param_1 + 0x409) = 0;
        uVar2 = F_0055dcb0();
        *(undefined1 *)(uVar2 + 0x1fa) = 0;
        bVar1 = F_0056b780(param_1,0);
        return CONCAT31(extraout_var,bVar1);
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf37 */
uint F_00816b50(unsigned int gen_a0)
{
  GEN_ENTER(0x816b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005a92d0(this,0,0x2e,0);
    F_005a92d0(this,1,0x32,0);
    if (*(int *)(this + 0x1f8) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1f8) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 500) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 500) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1fc) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1fc) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x23,0,this,0);
  }
  F_0090b680(this + 0x180);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf46 */
byte F_00816c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x816c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  byte * pbVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  int local_c;
  
  iVar7 = param_2;
  if (this[0x210] == (undefined1)0x0) {
    return 1;
  }
  if ((*(byte *)(param_2 + 0xa38) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xa3c);
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return 1;
    }
    if ((*(byte *)(param_2 + 0xa40) & 0xf) == 0) {
      F_007ba9b0(this,1);
      return 1;
    }
    F_007ba9b0(this,*(int *)(param_2 + 0xa44) + 1);
    return 1;
  }
  if (*(int *)(this + 0x18c) != 0) {
    if ((*(byte *)(param_2 + 0x9a0) & 0xf) == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(uint *)(param_2 + 0x9a4);
    }
    if ((*(byte *)(iVar7 + 0xa50) & 0xf) == 0) {
      local_c = 0;
    }
    else {
      local_c = *(int *)(iVar7 + 0xa54);
    }
    if ((param_2 == 0) || (local_c < 0)) {
      uVar6 = F_0055dcb0();
      uVar6 = F_0043bd00(*(undefined * PTR32 *)(uVar6 + 0x30),0x1016,0,0);
      F_0058e4c0(*(undefined * PTR32 *)(this + 0x18c),uVar6);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x28))))(*(int * PTR32 *)(this + 0x18c),0);
      piVar5 = *(int * PTR32 *)(this + 500);
      if (piVar5 == (int *)0x0) goto LAB_00816dbe;
      uVar3 = 0;
    }
    else {
      uVar6 = 0;
      if (param_2 != 0) {
        pbVar2 = (byte *)(iVar7 + 0x9a8);
        iVar7 = 0;
        do {
          if ((*pbVar2 & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar2 + 4);
          }
          F_0042e430(((undefined *)GEN_TOP((*(int *)(this + 0x188) + iVar7))),uVar3);
          uVar4 = F_0042a990(*(int *)(this + 0x188) + iVar7);
          pbVar2 = pbVar2 + 8;
          *((uint *)GEN_TOP((*(int *)(this + 0x184) + uVar6 * 4))) = uVar4;
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 0x54;
        } while (uVar6 < param_2);
      }
      F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))),param_2,*(undefined4 *)(this + 0x184),1
                  );
      F_0059caa0(*(undefined * PTR32 *)(this + 0x18c),local_c);
      F_00581b80(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x28))))(*(int * PTR32 *)(this + 0x18c),1);
      piVar5 = *(int * PTR32 *)(this + 500);
      *(int *)(this + 0x20c) = local_c;
      if (piVar5 == (int *)0x0) goto LAB_00816dbe;
      uVar3 = 1;
    }
    ((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5,uVar3);
  }
LAB_00816dbe: ;
  F_007ba9b0(this,0);
  return 1;
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf47 */
unsigned int F_00816dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x816dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 != 0) {
    F_007ba690(this,iVar1,0,0xe,0);
    F_007ba690(this,iVar1,0xe,0x13,1);
    F_007ba690(this,iVar1,0x13,0x18,1);
  }
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacter::vf37 */
uint F_00816e20(unsigned int gen_a0)
{
  GEN_ENTER(0x816e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  undefined4 uVar5;
  
  ((uint *)(gen_frame + 0x4))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (this[0x211] != (undefined1)0x0) {
    F_00588e00(this + 0x180,0);
    ((uint *)(gen_frame + 0x4))[0] = 4;
    ((uint *)(gen_frame + 0x4))[1] = 5;
    ((uint *)(gen_frame + 0x4))[2] = 6;
    ((uint *)(gen_frame + 0x4))[3] = 7;
    ((uint *)(gen_frame + 0x4))[4] = 8;
    pAVar4 = this + 0x1d0;
    iVar3 = 0;
    do {
      F_00597570(*(undefined * PTR32 *)pAVar4);
      pvVar1 = (undefined *)0x0;
      if (*(int *)pAVar4 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar1,0x34,((uint *)(gen_frame + 0x4))[(int)(iVar3)],this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)pAVar4 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar1,0xc,0,this,0);
      iVar3 = iVar3 + 1;
      pAVar4 = pAVar4 + 4;
    } while (iVar3 < 5);
    if (*(int *)(this + 0x1c0) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c0) + 0x70))),0x17,1,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x1c0) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c0) + 0x70)));
      }
      F_005840a0(pvVar1,0xc,1,this,0);
    }
    if (*(int *)(this + 0x1bc) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1bc) + 0x70))),0x17,0,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x1c0) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c0) + 0x70)));
      }
      F_005840a0(pvVar1,0xc,1,this,0);
    }
    if (*(int *)(this + 0x1c4) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c4) + 0x70))),0x17,2,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x1c0) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c0) + 0x70)));
      }
      F_005840a0(pvVar1,0xc,1,this,0);
    }
    if (*(int *)(this + 0x1c8) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70))),0x17,3,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x1c8) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70)));
      }
      F_005840a0(pvVar1,0xc,0,this,0);
      if (*(int *)(this + 0x1c8) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70)));
      }
      uVar2 = F_0055dcb0();
      F_00596b10((undefined *)(uVar2 + 0xe0),uVar5);
    }
  }
  *(undefined2 *)(this + 0x211) = 0;
  uVar2 = F_005b0510((undefined *)this);
  F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00816fe0 */
unsigned int F_00816fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x816fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((*(char *)((int)this + 0x211) != '\0') && (*(char *)((int)this + 0x1b5) != '\0')) {
    if (*(char *)((int)this + 0x212) != '\0') {
      F_0059bd30((undefined *)((int)this + 0x180),
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x20c) * 4 + 0x1e4))) + 0x18))),1,1);
    }
    *(undefined1 *)((int)this + 0x212) = 0;
    F_00560f40(*((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x20c) * 4 + 0x1e4))),param_1,
                 param_2);
    F_007bb190(this);
  }
  return 0;
}

/* ref: FUN_00817060 */
uint F_00817060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x817060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_007bad70(this);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar1;
  case 1: ;
    uVar1 = F_007badd0(this);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar1;
  case 2: ;
    uVar1 = F_007bad40(this);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar1;
  case 3: ;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    bVar3 = *((char *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0x88))) == '\0';
    if (bVar3) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(uint *)(gen_frame + 0x1c)) = 0;
    }
    else {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(uint *)(gen_frame + 0x1c)) = 1;
    }
    (*(uint *)(gen_frame + 0x1c)) = (uint)!bVar3;
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x1c8),(uint)bVar3);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 0x11;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar2 = 3;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar1;
  case 4: ;
    uVar4 = 0;
    break;
  case 5: ;
    uVar4 = 1;
    break;
  case 6: ;
    uVar4 = 2;
    break;
  case 7: ;
    uVar4 = 3;
    break;
  case 8: ;
    uVar4 = 4;
    break;
  default: ;
    goto switchD_0081707f_default;
  }
  uVar1 = F_007bb270(this,uVar4,param_2);
switchD_0081707f_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_008171d0 */
uint F_008171d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8171d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70),0x17,0,param_1,0);
    if (*(int *)this == 0) {
      uVar1 = F_005840a0((undefined *)0x0,0xc,0,param_1,0);
      return uVar1;
    }
    uVar1 = F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70),0xc,0,param_1,0);
  }
  return uVar1;
}

/* ref: FUN_00817220 */
uint F_00817220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x817220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70),0x17,0,param_1,0);
    if (*(int *)this == 0) {
      uVar1 = F_005840a0((undefined *)0x0,0xc,0,param_1,0);
      return uVar1;
    }
    uVar1 = F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70),0xc,0,param_1,0);
  }
  return uVar1;
}

/* ref: FUN_00817270 */
uint F_00817270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x817270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70),0x17,0,param_1,0);
    if (*(int *)this == 0) {
      uVar1 = F_005840a0((undefined *)0x0,0xc,0,param_1,0);
      return uVar1;
    }
    uVar1 = F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70),0xc,0,param_1,0);
  }
  return uVar1;
}

/* ref: FUN_008172c0 */
uint F_008172c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8172c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  if (*(int *)this == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *(undefined * PTR32 *)(*(int *)this + 0x70);
  }
  F_005840a0(this_00,0x1b,2,param_1,0);
  if (*(int *)this == 0) {
    uVar1 = F_005840a0((undefined *)0x0,0xc,0,param_1,0);
    return uVar1;
  }
  uVar1 = F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70),0xc,0,param_1,0);
  return uVar1;
}

/* ref: FUN_00817320 */
uint F_00817320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x817320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70),0x23,1,param_1,0);
    this_00 = (undefined *)0x0;
    if (*(int *)this != 0) {
      this_00 = *(undefined * PTR32 *)(*(int *)this + 0x70);
    }
    F_005840a0(this_00,0x2b,1,param_1,0);
    if (*(int *)this == 0) {
      uVar1 = F_005840a0((undefined *)0x0,0xc,0,param_1,0);
      return uVar1;
    }
    uVar1 = F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70),0xc,0,param_1,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterBase::vf38 */
uint F_00817390(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x817390u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  
  F_005a2370(param_1,param_2);
  if ((((*(byte *)((int)param_1 + 0xf9) & 1) != 0) &&
      (((uVar2 = *(uint *)((int)param_1 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)) &&
       (*(short *)((int)param_1 + 0x184) != 0)))) && (*(short *)((int)param_1 + 0x186) == 0)) {
    uVar2 = F_0055de40(param_1,*(undefined4 *)((int)param_1 + 0xa4));
    if ((uVar2 != 0) &&
       ((bVar1 = F_0055a650(*(undefined4 *)(uVar2 + 0x70)), bVar1 != 0 ||
        (bVar1 = F_005c07d0(uVar2), bVar1 != 0)))) {
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      bVar1 = F_0055de10(param_1,uVar2);
      F_005a9af0(param_1,*(undefined4 *)((int)param_1 + 0xa4),
                   (0 < *(short *)((int)param_1 + 0x184)) + 9,0,(uint)(bVar1 != 0));
    }
    *(undefined2 *)((int)param_1 + 0x184) = 0;
  }
  uVar2 = (uint)*(ushort *)((int)param_1 + 0x186);
  if (0 < (short)*(ushort *)((int)param_1 + 0x186)) {
    uVar2 = uVar2 - 1;
    *(short *)((int)param_1 + 0x186) = (short)uVar2;
  }
  return uVar2;
}

/* ref: FUN_00817480 */
byte F_00817480(unsigned int gen_a0)
{
  GEN_ENTER(0x817480u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x144);
  if ((*(int *)(uVar1 + 4) <= *param_1) && (*param_1 <= *(int *)(uVar1 + 8))) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::CChatLog::vf2 */
uint F_008174b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8174b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pCVar4;
  int iVar5;
  int local_8;
  
  pCVar4 = this + 0x44;
  local_8 = 4;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70),0x17,0,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      F_005840a0(pvVar3,0xc,0,uVar1,0);
    }
    pCVar4 = pCVar4 + 8;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  pCVar4 = this + 8;
  local_8 = 5;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70),0x23,1,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      F_005840a0(pvVar3,0x2b,1,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      F_005840a0(pvVar3,0xc,0,uVar1,0);
    }
    pCVar4 = pCVar4 + 0xc;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  pCVar4 = this + 100;
  local_8 = 2;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    uVar2 = 0;
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70),0x17,0,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      uVar2 = F_005840a0(pvVar3,0xc,0,uVar1,0);
    }
    pCVar4 = pCVar4 + 0xc;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  pCVar4 = this + 0x7c;
  do {
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70),0x17,0,*(undefined4 *)(this + 4),0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      uVar2 = F_005840a0(pvVar3,0xc,iVar5 + 1,*(undefined4 *)(this + 4),0);
    }
    iVar5 = iVar5 + 1;
    pCVar4 = pCVar4 + 0xc;
  } while (iVar5 < 6);
  return uVar2;
}

/* ref: FUN_008175f0 */
uint F_008175f0(unsigned int gen_a0)
{
  GEN_ENTER(0x8175f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x198) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5b64));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x19c) = (*(undefined * PTR32 (*)[5])REFP(0x10cf900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1fc) = (*(undefined * PTR32 (*)[5])REFP(0x10cf918));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x294) = (*(undefined * PTR32 (*)[5])REFP(0x10cf930));
  *(undefined1 *)((int)this + 0x380) = 0;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::vf37 */
uint F_00817670(unsigned int gen_a0)
{
  GEN_ENTER(0x817670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined * pAVar3;
  
  ((undefined * PTR32 *)(gen_frame + 0x0))[0] = this + 0x19c;
  ((undefined * PTR32 *)(gen_frame + 0x0))[1] = this + 0x1fc;
  ((undefined * PTR32 *)(gen_frame + 0x0))[2] = this + 0x294;
  if (this[0x199] != (undefined1)0x0) {
    iVar2 = 0;
    pAVar3 = this + 0x18c;
    do {
      if (*(int *)pAVar3 != 0) {
        ((code *)*(gen_code32 *)(*(int *)((undefined * PTR32 *)(gen_frame + 0x0))[(int)(iVar2)] + 8))(((undefined * PTR32 *)(gen_frame + 0x0))[(int)(iVar2)]);
        this_00 = (undefined *)0x0;
        if (*(int *)pAVar3 != 0) {
          this_00 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
        }
        F_005840a0(this_00,0x17,iVar2 + 3,this,0);
        *(int *)pAVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      pAVar3 = pAVar3 + 4;
    } while (iVar2 < 3);
  }
  this[0x199] = (undefined1)0x0;
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_00817700 */
uint F_00817700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x817700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 3) {
    uVar1 = F_007bc4e0(this,0);
  }
  else {
    if (param_1 == 4) {
      uVar1 = F_007bc4e0(this,1);
      return uVar1;
    }
    uVar1 = param_1 - 5;
    if (uVar1 == 0) {
      uVar1 = F_007bc4e0(this,2);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00817740 */
uint F_00817740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x817740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0xc))[3] = uVar1;
  if ((char)param_2 != '\0') {
    F_0059b3f0(this,1,1);
    uVar1 = *(uint *)((int)this + 900);
    *(undefined4 *)((int)this + uVar1 * 4 + 0x388) = 0;
    if (*(int *)((int)this + 0x180) != 0) {
      uVar1 = F_00574c80(*(int *)((int)this + 0x180),
                           *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 900) * 4 + 0x388))),1,1);
    }
  }
  if (*(int *)((int)this + 900) != param_1) {
    ((uint *)(gen_frame + 0xc))[0] = 0x65;
    ((uint *)(gen_frame + 0xc))[1] = 0x66;
    ((uint *)(gen_frame + 0xc))[2] = 0x67;
    if (*(int *)((int)this + 0x180) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0xb0)));
    }
    *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 900) * 4 + 0x388))) = uVar2;
    uVar1 = ((uint *)(gen_frame + 0xc))[(int)(param_1)];
    this_00 = (undefined *)F_0055e2f0(this,7);
    F_0059d670(this_00,uVar1);
    *(int *)((int)this + 900) = param_1;
    if (*(char *)((int)this + 0x380) != '\0') {
      *(undefined4 *)((int)this + param_1 * 4 + 0x388) = 0;
      uVar1 = *(uint *)((int)this + 0xa4);
      uVar3 = F_0055dcb0();
      uVar3 = F_0055b9e0(uVar3);
      if (uVar3 == uVar1) {
        F_0059b3f0(this,1,1);
      }
    }
    uVar1 = F_007bc580(this);
    iVar5 = 0;
    puVar4 = (undefined4 *)((int)this + 0x18c);
    do {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        uVar1 = F_0059dde0((undefined *)*puVar4,(uint)(iVar5 == *(int *)((int)this + 900)));
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 3);
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00817870 */
uint F_00817870(unsigned int gen_a0)
{
  GEN_ENTER(0x817870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  uint uVar2;
  undefined4 in_ecx;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x14;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),2);
  (*(undefined1 *)(gen_frame + 0x14)) = 1;
  F_0055e430(this,((short *)(gen_frame + 0x0)),((short *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x18c));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(int *)(gen_frame + 0x1c)) = (int)((short *)(gen_frame + 0x0))[0];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  iVar3 = *(int *)((int)this + 0x194);
  (*(int *)(gen_frame + 0x24)) = (int)((short *)(gen_frame + 0x4))[0];
  F_0055e430(this,((short *)(gen_frame + 0x4)),((short *)(gen_frame + 0x0)),iVar3);
  if (iVar3 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar3 + 0x70);
  }
  uVar1 = F_0055a020(in_ecx);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(int *)(gen_frame + 0x2c)) = (int)(short)(uVar1 + ((short *)(gen_frame + 0x4))[0]);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(int *)(gen_frame + 0x34)) = (int)((short *)(gen_frame + 0x0))[0];
  F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 5;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CDisplay::vf2 */
uint F_00817980(unsigned int gen_a0)
{
  GEN_ENTER(0x817980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pCVar3;
  int local_8;
  
  local_8 = 0xb;
  pCVar3 = this;
  do {
    pCVar3 = pCVar3 + 8;
    uVar1 = *(undefined4 *)(this + 4);
    uVar2 = 0;
    if (*(int *)pCVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar3 + 0x70),0x17,0,uVar1,0);
      this_00 = (undefined *)0x0;
      if (*(int *)pCVar3 != 0) {
        this_00 = *(undefined * PTR32 *)(*(int *)pCVar3 + 0x70);
      }
      uVar2 = F_005840a0(this_00,0xc,0,uVar1,0);
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return uVar2;
}

