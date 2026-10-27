#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ac9dd0 */
uint F_00ac9dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac9dd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00ac9e00 */
uint F_00ac9e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac9e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(param_1);
  F_0042e170(((undefined1 *)(gen_frame + 0x4)),this);
  F_004feba0(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return param_1;
}

/* ref: FUN_00ac9e50 */
uint F_00ac9e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac9e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(param_1);
  F_0042e170(((undefined1 *)(gen_frame + 0x4)),this);
  F_004ff130(param_1,((undefined1 *)(gen_frame + 0x4)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return param_1;
}

/* ref: FUN_00ac9eb0 */
unsigned int F_00ac9eb0(float gen_a0)
{
  GEN_ENTER(0xac9eb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00ac9ed0 */
uint F_00ac9ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xac9ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x194);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x194) = 0;
  }
  F_0042c880((undefined *)((int)this + 300));
  F_0042c880((undefined *)((int)this + 0xd8));
  F_0042c880((undefined *)((int)this + 0x84));
  uVar2 = F_0042c880((undefined *)((int)this + 0x30));
  return (uint)uVar2;
}

/* ref: FUN_00ac9f20 */
uint F_00ac9f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac9f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar1 = F_0042a990(in_ecx + 0x30);
    return uVar1;
  case 1: ;
    uVar1 = F_0042a990(in_ecx + 0x84);
    return uVar1;
  case 2: ;
    uVar1 = F_0042a990(in_ecx + 0xd8);
    return uVar1;
  case 3: ;
    uVar1 = F_0042a990(in_ecx + 300);
    return uVar1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ac9f90 */
uint F_00ac9f90(void)
{
  GEN_ENTER(0xac9f90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00accac0(0);
  return uVar1;
}

/* ref: FUN_00ac9fa0 */
byte F_00ac9fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xac9fa0u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  *in_ecx = 1;
  return in_ecx[1] == '\0';
}

/* ref: FUN_00ac9fb0 */
uint F_00ac9fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac9fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined4 *)((int)this + 4) = param_1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
    case 2: ;
    case 3: ;
      F_00accbd0(param_2,1);
      *(undefined1 *)((int)this + 1) = 1;
      return 0;
    case 4: ;
      F_00accbd0(param_2,10);
    }
    *(undefined1 *)((int)this + 1) = 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00aca030 */
uint F_00aca030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaca030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(int *)((int)this + 4) = param_1;
    if ((0 < param_1) && (param_1 < 5)) {
      F_00accb50(param_2);
    }
    *(undefined1 *)((int)this + 1) = 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00aca080 */
unsigned int F_00aca080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaca080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != 0) {
    F_00c472af(param_2,param_3,"FFXIV_CHR%016llX",*param_1,param_1[1]);
  }
  return 0;
}

/* ref: FUN_00aca0c0 */
uint F_00aca0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaca0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,param_1);
  uVar1 = F_00acca30(REFG(int, 0x14be750),param_2,param_3);
  REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
  return uVar1;
}

/* ref: FUN_00aca130 */
byte F_00aca130(unsigned int gen_a0)
{
  GEN_ENTER(0xaca130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LOCK();
  UNLOCK();
  if ((REFG(int, 0x14bee60) == 0) && (*(int *)((int)this + 0x194) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00aca150 */
uint F_00aca150(unsigned int gen_a0)
{
  GEN_ENTER(0xaca150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c);
}

/* ref: FUN_00aca160 */
uint F_00aca160(unsigned int gen_a0)
{
  GEN_ENTER(0xaca160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  UNLOCK();
  *(undefined1 *)((int)this + 1) = 0;
  return uVar1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf6 */
byte F_00aca170(unsigned int gen_a0)
{
  GEN_ENTER(0xaca170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  byte * pbVar6;
  byte * pbVar7;
  undefined4 * puVar8;
  uint local_1c;
  int local_14;
  int local_c;
  uint local_8;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  if ((char)uVar3 != '\0') {
    local_14 = 0;
    local_c = 0;
    local_1c = 0;
    do {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 8))(this,local_c)));
      local_8 = 0;
      pbVar6 = (byte *)((int)puVar4 + 0x13);
      do {
        cVar2 = (char)(pbVar6 + (-0x13 - (int)puVar4));
        pbVar7 = pbVar6 + 4;
        local_8 = local_8 ^ (uint)pbVar6[-2] <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x12 - (int)puVar4)) / 0x18) * -0x18 +
                             1U & 0x1f) ^
                            (uint)pbVar6[-1] <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x11 - (int)puVar4)) / 0x18) * -0x18 +
                             2U & 0x1f) ^
                            (uint)*pbVar6 <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x10 - (int)puVar4)) / 0x18) * -0x18 +
                             3U & 0x1f) ^
                            (uint)pbVar6[-3] <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x13 - (int)puVar4)) / 0x18) * -0x18 &
                            0x1fU);
        pbVar6 = pbVar7;
      } while (pbVar7 + (-0x13 - (int)puVar4) < (byte *)0xc4);
      local_14 = local_14 + local_8;
      local_c = local_c + 1;
      puVar4[2] = local_8;
      puVar4[0x4e] = 3;
      iVar1 = local_1c + 0x10;
      local_1c = local_1c + 0xd4;
      puVar8 = ((undefined4 *)GEN_TOP((iVar1 + *(int *)(this + 0x3208))));
      for (iVar5 = 0x35; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
    } while (local_1c < 0x2120);
    puVar4 = *(undefined4 * PTR32 *)(this + 0x3208);
    *puVar4 = 0x2013ff14;
    puVar4[1] = 1;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *((int *)GEN_TOP((*(int *)(this + 0x3208) + 8))) = local_14;
    return 1;
  }
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf7 */
byte F_00aca320(unsigned int gen_a0)
{
  GEN_ENTER(0xaca320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x3208) != 0) {
    F_00406ad0(*(int *)(this + 0x3208));
    *(undefined4 *)(this + 0x3208) = 0;
  }
  uVar1 = F_00406b90(0x2130,0,0);
  *(uint *)(this + 0x3208) = uVar1;
  return uVar1 != 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf8 */
byte F_00aca360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaca360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  byte * pbVar5;
  byte * pbVar6;
  undefined4 * puVar7;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(this + 0x3208) != 0) {
    local_14 = 0;
    local_8 = 0;
    local_10 = 0;
    do {
      this_00 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 8))(this,local_8)));
      puVar4 = ((undefined4 *)GEN_TOP((local_10 + 0x10 + *(int *)(this + 0x3208))));
      puVar7 = this_00;
      for (iVar3 = 0x35; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      this_00[0x4d] = 0;
      if (this_00[3] == 1) {
        this_00[0x4d] = 1;
        *(undefined1 *)(this_00 + 0x4f) = (undefined1)local_8;
        if (this_00[1] == 1) {
          uVar2 = F_00acc850(this_00);
          if (this_00[2] != uVar2) {
            this_00[0x4d] = 3;
          }
        }
        else {
          this_00[0x4d] = 2;
        }
        this_00[0x4e] = param_1;
      }
      local_c = 0;
      pbVar5 = (byte *)((int)this_00 + 0x13);
      do {
        cVar1 = (char)(pbVar5 + (-0x13 - (int)this_00));
        pbVar6 = pbVar5 + 4;
        local_c = local_c ^ (uint)pbVar5[-2] <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x12 - (int)this_00)) / 0x18) * -0x18
                             + 1U & 0x1f) ^
                            (uint)pbVar5[-1] <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x11 - (int)this_00)) / 0x18) * -0x18
                             + 2U & 0x1f) ^
                            (uint)*pbVar5 <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x10 - (int)this_00)) / 0x18) * -0x18
                             + 3U & 0x1f) ^
                            (uint)pbVar5[-3] <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x13 - (int)this_00)) / 0x18) * -0x18
                            & 0x1fU);
        pbVar5 = pbVar6;
      } while (pbVar6 + (-0x13 - (int)this_00) < (byte *)0xc4);
      local_14 = local_14 + local_c;
      local_8 = local_8 + 1;
      local_10 = local_10 + 0xd4;
    } while (local_10 < 0x2120);
    return *((int *)GEN_TOP((*(int *)(this + 0x3208) + 8))) == local_14;
  }
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf9 */
uint F_00aca530(unsigned int gen_a0)
{
  GEN_ENTER(0xaca530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3208);
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf10 */
uint F_00aca540(void)
{
  GEN_ENTER(0xaca540u, 0u, 0u, 0u, 0u);
  return 0x2130;
}

/* ref: FUN_00aca550 */
uint F_00aca550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaca550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_004a0020(in_esi);
  in_esi[10] = param_2;
  *in_esi = (*(undefined * PTR32 (*)[3])REFP(0x10ea2e8));
  return (uint)in_esi;
}

/* ref: FUN_00aca580 */
unsigned int F_00aca580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaca580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_eax = in_ecx;
  in_eax[1] = param_3;
  in_eax[2] = 0;
  return 0;
}

/* ref: FUN_00aca5a0 */
byte F_00aca5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaca5a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  char * in_edi = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((uint)in_ecx[2] < (uint)in_ecx[1]) {
    do {
      cVar1 = *(char *)(*in_ecx + in_ecx[2]);
      if (cVar1 == '_') {
        in_ecx[2] = in_ecx[2] + 1;
        break;
      }
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      if (((cVar1 < 'a') || ('z' < cVar1)) && (cVar1 != '-')) {
        return 0;
      }
      in_edi[iVar2] = cVar1;
      in_ecx[2] = in_ecx[2] + 1;
      iVar2 = iVar2 + 1;
    } while ((uint)in_ecx[2] < (uint)in_ecx[1]);
    if (iVar2 != 0) {
      *in_edi = *in_edi + -0x20;
      in_edi[iVar2] = '\0';
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aca620 */
uint F_00aca620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaca620u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  bool bVar8;
  
  uVar5 = 0;
  bVar1 = *param_2;
  pbVar4 = param_2;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    uVar5 = uVar5 * 2 ^ (uint)bVar1;
    bVar1 = *pbVar4;
  }
  uVar7 = 0;
  if (*param_1 != 0) {
    puVar6 = param_1 + 1;
    do {
      if (uVar5 == puVar6[1]) {
        pbVar4 = (byte *)*puVar6;
        pbVar2 = param_2;
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_00aca680: ;
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00aca685;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00aca680;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00aca685: ;
        if (iVar3 == 0) {
          return param_1[uVar7 * 3 + 3];
        }
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar7 < *param_1);
  }
  return 0;
}

/* ref: FUN_00aca6c0 */
unsigned int F_00aca6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaca6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_eax = in_ecx;
  in_eax[1] = param_3;
  in_eax[2] = 0;
  return 0;
}

/* ref: FUN_00aca740 */
uint F_00aca740(unsigned int gen_a0)
{
  GEN_ENTER(0xaca740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x9640) = 0;
  puVar3 = (undefined4 *)((int)this + 0x9644);
  iVar2 = 4;
  do {
    ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x10))((int *)*puVar3);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0xc))((int *)*puVar3);
    *(int *)((int)this + 0x9640) = *(int *)((int)this + 0x9640) + uVar1;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00aca790 */
uint F_00aca790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaca790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  puVar3 = (undefined4 *)((int)this + 0x9644);
  uVar4 = 0;
  do {
    piVar1 = (int *)*puVar3;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    if (param_1 < uVar2) {
      uVar2 = 0;
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
      if (uVar4 != 0) {
        do {
          uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,uVar2);
          if (*(int *)(uVar4 + 0x134) == 1) {
            if (param_1 == 0) {
              return uVar4;
            }
            param_1 = param_1 - 1;
          }
          uVar2 = uVar2 + 1;
          uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
        } while (uVar2 < uVar4);
      }
      return 0;
    }
    param_1 = param_1 - uVar2;
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar4 < 4);
  return 0;
}

/* ref: FUN_00aca810 */
uint F_00aca810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaca810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9654) + 8))))(*(int * PTR32 *)((int)this + 0x9654),param_1);
  return uVar1;
}

/* ref: FUN_00aca830 */
uint F_00aca830(unsigned int gen_a0)
{
  GEN_ENTER(0xaca830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1,param_1);
      return uVar2;
    case 1: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1,param_1);
      return uVar2;
    case 2: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1,param_1);
      return uVar2;
    case 3: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
      if (uVar2 != 0) {
        return uVar2 + 0x850;
      }
      break;
    case 4: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,param_1);
      return uVar2;
    case 5: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,param_1);
      return uVar2;
    case 6: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00aca8c0 */
uint F_00aca8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaca8c0u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  *(undefined1 *)(in_ecx + 1) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 10) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0xe) = 0;
  *(undefined1 *)(in_ecx + 0x12) = 0;
  F_0042b630(in_ecx + 0x18);
  F_0042b630(in_ecx + 0x42);
  F_0042b630(in_ecx + 0x6c);
  F_0042b630(in_ecx + 0x96);
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined4 *)(in_ecx + 0xc2) = 0;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 0xc6) = 0;
  *(undefined4 *)(in_ecx + 0xca) = 0;
  *(undefined4 *)(in_ecx + 10) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00aca930 */
uint F_00aca930(unsigned int gen_a0)
{
  GEN_ENTER(0xaca930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint in_EAX = 0;
  uint uVar6;
  int * piVar7;
  undefined * this_00;
  undefined4 uVar8;
  
  if (*(char *)((int)this + 2) == '\0') {
    in_EAX = REFG(undefined4, 0x137104c);
    if (*(char *)(REFG(undefined4, 0x137104c) + 8) == '\0') {
      F_00ab0230(0x17d7,(int)this + 0x30);
      F_00ab0230(0x17d8,(int)this + 0x84);
      F_00ab0230(0x17d9,(int)this + 0xd8);
      F_00ab0230(0x17da,(int)this + 300);
      F_0042a990((int)this + 0xd8);
      F_0042a990((int)this + 0x84);
      in_EAX = F_0042a990((int)this + 0x30);
    }
    *(undefined1 *)((int)this + 2) = 1;
  }
  uVar6 = REFG(undefined4, 0x14bee10);
  if (*(char *)((int)this + 1) == '\0') {
    LOCK();
    UNLOCK();
    in_EAX = REFG(undefined4, 0x14bee60);
    if ((REFG(undefined4, 0x14bee60) == 0) && (*(int *)((int)this + 0x194) == 0)) {
      bVar5 = false;
      uVar6 = 0;
      do {
        in_EAX = F_00aca830(uVar6);
        if ((in_EAX != 0) && (*(char *)(in_EAX + 0x2d) != '\0')) {
          *(undefined1 *)(in_EAX + 0x2c) = 1;
          bVar5 = true;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 7);
      if (bVar5) {
        piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar8 = 0xc;
        uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x48))(piVar7);
        this_00 = (undefined *)F_00763050(uVar6,uVar8);
        in_EAX = F_00822a70(this_00);
      }
    }
  }
  else if (*(int *)((int)this + 4) == 5) {
    if (*(undefined * PTR32 *)((int)this + 0x194) != (undefined *)0x0) {
      in_EAX = F_004cf020(*(undefined * PTR32 *)((int)this + 0x194));
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0x194);
      if (puVar1 != (undefined4 *)0x0) {
        in_EAX = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        *(undefined4 *)((int)this + 0x194) = 0;
      }
    }
    *(undefined4 *)((int)this + 0x2c) = 0;
    if (*(int *)((int)this + 0x14) != 0) {
      LOCK();
      UNLOCK();
      uVar8 = *(undefined4 *)((int)this + 0x14);
      pcVar2 = *(gen_code32 *)((int)this + 0x10);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = *(undefined4 *)((int)this + 0x18);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = *(undefined4 *)((int)this + 0x1c);
      uVar3 = *(undefined4 *)((int)this + 0x20);
      *(undefined1 *)((int)this + 1) = 0;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = pcVar2;
      ((byte *)(gen_frame + 0xc))[4] = (byte)uVar8;
      ((byte *)(gen_frame + 0xc))[5] = SUB41(uVar8,1);
      ((byte *)(gen_frame + 0xc))[6] = SUB41(uVar8,2);
      ((byte *)(gen_frame + 0xc))[7] = SUB41(uVar8,3);
      *(undefined4 *)((int)this + 0x14) = 0;
      uVar6 = (*pcVar2)(uVar8,((byte *)(gen_frame + 0xc)) + 8,this,uVar3);
      return uVar6;
    }
  }
  else {
    LOCK();
    UNLOCK();
    in_EAX = REFG(undefined4, 0x14bee60);
    if (REFG(undefined4, 0x14bee60) == 0) {
      if (*(int *)((int)this + 4) == 0) {
        *(undefined4 *)((int)this + 0x2c) = 0;
        *(undefined1 *)((int)this + 0x24) = 1;
        in_EAX = 0;
      }
      else {
        in_EAX = *(int *)((int)this + 4) - 1;
        if (in_EAX < 4) {
          *(uint *)((int)this + 0x2c) = REFG(undefined4, 0x14bee10);
          in_EAX = uVar6;
        }
      }
      if (*(int *)((int)this + 0x14) != 0) {
        LOCK();
        UNLOCK();
        uVar8 = *(undefined4 *)((int)this + 0x14);
        pcVar2 = *(gen_code32 *)((int)this + 0x10);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = *(undefined4 *)((int)this + 0x18);
        uVar3 = *(undefined4 *)((int)this + 0x1c);
        *(undefined1 *)((int)this + 1) = 0;
        *(undefined4 *)((int)this + 0x14) = 0;
        uVar4 = *(undefined4 *)((int)this + 0x20);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = pcVar2;
        ((byte *)(gen_frame + 0xc))[4] = (byte)uVar8;
        ((byte *)(gen_frame + 0xc))[5] = SUB41(uVar8,1);
        ((byte *)(gen_frame + 0xc))[6] = SUB41(uVar8,2);
        ((byte *)(gen_frame + 0xc))[7] = SUB41(uVar8,3);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = uVar3;
        uVar6 = (*pcVar2)(uVar8,((byte *)(gen_frame + 0xc)) + 8,this,uVar4);
        return uVar6;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00acab30 */
byte F_00acab30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacab30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined1 *)((int)this + 1) = 1;
    *(undefined4 *)((int)this + 0x10) = *param_4;
    *(undefined4 *)((int)this + 0x14) = param_4[1];
    *(undefined4 *)((int)this + 0x18) = param_4[2];
    *(undefined4 *)((int)this + 0x1c) = param_4[3];
    *(undefined4 *)((int)this + 0x20) = param_5;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acab80 */
byte F_00acab80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacab80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined4 *)((int)this + 0x10) = *param_3;
    *(undefined4 *)((int)this + 0x14) = param_3[1];
    *(undefined4 *)((int)this + 0x18) = param_3[2];
    *(undefined4 *)((int)this + 0x1c) = param_3[3];
    *(undefined4 *)((int)this + 0x20) = param_4;
    *(undefined4 *)((int)this + 4) = 5;
    *(undefined4 *)((int)this + 0x28) = 2;
    *(undefined1 *)((int)this + 1) = 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acac40 */
uint F_00acac40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacac40u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  
  uVar3 = 0;
  *param_2 = 0;
  if (in_eax != 0) {
    do {
      bVar1 = param_3[uVar3];
      if (((bVar1 == 9) || (bVar1 == 10)) || (bVar1 == 0x2c)) {
        param_3[uVar3] = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < in_eax);
  }
  uVar3 = 0;
  pbVar5 = param_3;
  if (param_3 != (byte *)0x0) {
    while( true ) {
      param_2[*param_2 * 3 + 1] = (int)pbVar5;
      uVar4 = 0;
      bVar1 = *pbVar5;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        uVar4 = uVar4 * 2 ^ (uint)bVar1;
        bVar1 = *pbVar5;
      }
      param_2[*param_2 * 3 + 2] = uVar4;
      if (in_eax <= uVar3) break;
      while (param_3[uVar3] != 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] == 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (param_3 + uVar3 == (byte *)0x0) {
        return (uint)param_2;
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] != 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] == 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (param_3 + uVar3 == (byte *)0x0) {
        return (uint)param_2;
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] != 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] == 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      pbVar5 = param_3 + uVar3;
      if (pbVar5 == (byte *)0x0) {
        return (uint)param_2;
      }
      iVar2 = 0;
      bVar1 = *pbVar5;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        iVar2 = (bVar1 - 0x30) + iVar2 * 10;
        bVar1 = *pbVar5;
      }
      param_2[*param_2 * 3 + 3] = iVar2;
      *param_2 = *param_2 + 1;
      for (; uVar3 < in_eax; uVar3 = uVar3 + 1) {
        if (param_3[uVar3] == 0) goto joined_r0x00acade3;
      }
LAB_00acadc3: ;
      pbVar5 = (byte *)0x0;
LAB_00acadc5: ;
      if (*param_2 == 0x80) {
        return (uint)param_2;
      }
      if (pbVar5 == (byte *)0x0) {
        return (uint)param_2;
      }
    }
  }
  return (uint)param_2;
joined_r0x00acade3: ;
  if (in_eax <= uVar3) goto LAB_00acadc3;
  if (param_3[uVar3] != 0) {
    pbVar5 = param_3 + uVar3;
    goto LAB_00acadc5;
  }
  uVar3 = uVar3 + 1;
  goto joined_r0x00acade3;
}

/* ref: FUN_00acae00 */
uint F_00acae00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacae00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(int *)((int)this + 0x966c) != 0) {
    in_EAX = ((code *)*(gen_code32 *)((int)this + 0x9668))
                       (*(undefined4 *)((int)this + 0x966c),(int)this + 0x9670,param_1,
                        *(undefined4 *)((int)this + 0x9678));
    *(undefined4 *)((int)this + 0x966c) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00acaeb0 */
byte F_00acaeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacaeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(char *)((int)this + 1) != '\0') {
    F_00ace4a0();
    *(undefined4 *)((int)this + 0x10) = *param_1;
    *(undefined4 *)((int)this + 0x14) = param_1[1];
    *(undefined4 *)((int)this + 0x18) = param_1[2];
    *(undefined4 *)((int)this + 0x1c) = param_1[3];
    *(undefined4 *)((int)this + 0x20) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acaef0 */
byte F_00acaef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacaef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * puVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  
  if (((*(char *)((int)this + 1) != '\0') || (*(char *)((int)this + 2) == '\0')) ||
     (*(char *)this != '\0')) {
    return 0;
  }
  *(char * PTR32 *)((int)this + 8) = param_3;
  *(int *)((int)this + 4) = param_1;
  if ((param_1 < 1) || (3 < param_1)) goto LAB_00acaff7;
  if (param_1 == 1) {
    pcVar4 = "FFXIV_CHARA_";
LAB_00acaf7c: ;
    puVar1 = &REFG(undefined, 0x10e9947);
    pcVar3 = "%s%s%02d";
  }
  else if (param_1 == 2) {
    pcVar4 = "FFXIV_CHARA_BETA";
    puVar1 = (undefined *)F_00430520(5);
    pcVar3 = "/../%s/%s%02d";
  }
  else if (param_1 == 3) {
    pcVar4 = "FFXIV_CHARA_BENCH";
    puVar1 = (undefined *)F_00430520(7);
    pcVar3 = "/../%s/%s%02d";
  }
  else {
    pcVar4 = param_3;
    if (param_1 == 1) goto LAB_00acaf7c;
    puVar1 = (undefined *)F_00430520(param_3);
    pcVar3 = "/../%s/%s%02d";
  }
  F_00c472af(&REFG(undefined, 0x14beec0),0x104,pcVar3,puVar1,pcVar4,param_2 + 1);
  uVar2 = F_00ac9fb0(this,param_1,&REFG(undefined, 0x14beec0));
  if (uVar2 != 0) {
    return 0;
  }
  F_00aca0c0("AVATAR.DAT",param_3,param_4);
  if (*(char *)((int)this + 1) != '\0') {
    F_00ace4a0();
  }
LAB_00acaff7: ;
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined1 *)((int)this + 1) = 1;
  return 1;
}

/* ref: FUN_00acb020 */
byte F_00acb020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xacb020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte bVar1;
  
  bVar1 = F_00acaef0(this,param_1,param_2,param_3,param_4);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x10) = *param_5;
    *(undefined4 *)((int)this + 0x14) = param_5[1];
    *(undefined4 *)((int)this + 0x18) = param_5[2];
    *(undefined4 *)((int)this + 0x1c) = param_5[3];
    *(undefined4 *)((int)this + 0x20) = param_6;
  }
  return bVar1;
}

/* ref: FUN_00acb070 */
uint F_00acb070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacb070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined4 *)((int)this + 4) = 0;
    uVar1 = 1;
    *(undefined4 *)((int)this + 8) = param_1;
    *(undefined4 *)((int)this + 0x28) = 1;
    *(undefined1 *)((int)this + 1) = 1;
  }
  return uVar1;
}

/* ref: FUN_00acb0a0 */
byte F_00acb0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacb0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = 0;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined4 *)((int)this + 8) = param_1;
    *(undefined4 *)((int)this + 4) = 0;
    bVar1 = 1;
    *(undefined4 *)((int)this + 0x28) = 1;
    *(undefined1 *)((int)this + 1) = 1;
    *(undefined4 *)((int)this + 0x10) = *param_2;
    *(undefined4 *)((int)this + 0x14) = param_2[1];
    *(undefined4 *)((int)this + 0x18) = param_2[2];
    *(undefined4 *)((int)this + 0x1c) = param_2[3];
    *(undefined4 *)((int)this + 0x20) = param_3;
  }
  return bVar1;
}

/* ref: FUN_00acb110 */
byte F_00acb110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacb110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(char *)((int)this + 1) != '\0') {
    F_00ace360();
    *(undefined4 *)((int)this + 0x10) = *param_1;
    *(undefined4 *)((int)this + 0x14) = param_1[1];
    *(undefined4 *)((int)this + 0x18) = param_1[2];
    *(undefined4 *)((int)this + 0x1c) = param_1[3];
    *(undefined4 *)((int)this + 0x20) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb150 */
byte F_00acb150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacb150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char * _Format;
  uint uVar1;
  
  if (((*(char *)((int)this + 1) != '\0') || (*(char *)((int)this + 2) == '\0')) ||
     (*(char *)this != '\0')) {
    return 0;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  if (param_1 == 0) {
    F_00acd970(param_3,"FFXIV.CFG",0x2000,1);
  }
  else if (param_1 == 1) {
    F_00c472af(&REFG(undefined, 0x14bf4e8),0x104,"FFXIV_CHARA_%02d",param_2 + 1);
    _Format = (char *)F_0042a990((int)this + 0x30);
    F_00c472af(&REFG(undefined, 0x14bf5ec),0x80,_Format);
    F_00c472af(&REFG(undefined, 0x14bf66c),0x80,"charamake");
    F_00c472af(&REFG(undefined, 0x14bf6ec),0x400,"");
    F_00c472af(&REFG(undefined, 0x14bfaec),8,"AVT%02d",param_2 + 1);
    *(undefined4 *)&REFG(undefined, 0x14bfaf4) = 1;
    *(undefined4 *)&REFG(undefined, 0x14bfaf8) = 0;
    *(undefined4 *)&REFG(undefined, 0x14bfafc) = 0;
    *(undefined4 *)&REFG(undefined, 0x14bfb00) = 0;
    *(undefined4 *)&REFG(undefined, 0x14bfb08) = 0;
    uVar1 = F_00aca030(this,1,&REFG(undefined, 0x14bf4e8));
    if (uVar1 != 0) {
      return 0;
    }
    F_00aca0c0("AVATAR.DAT",param_3,param_4);
    if (*(char *)((int)this + 1) != '\0') {
      F_00ace360();
      *(undefined4 *)((int)this + 0x28) = 0;
      *(undefined1 *)((int)this + 1) = 1;
      return 1;
    }
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 1) = 1;
  return 1;
}

/* ref: FUN_00acb290 */
byte F_00acb290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xacb290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte bVar1;
  
  bVar1 = F_00acb150(this,param_1,param_2,param_3,param_4);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x10) = *param_5;
    *(undefined4 *)((int)this + 0x14) = param_5[1];
    *(undefined4 *)((int)this + 0x18) = param_5[2];
    *(undefined4 *)((int)this + 0x1c) = param_5[3];
    *(undefined4 *)((int)this + 0x20) = param_6;
  }
  return bVar1;
}

/* ref: FUN_00acb2e0 */
byte F_00acb2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacb2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined4 *)((int)this + 8) = param_1;
    *(undefined4 *)((int)this + 4) = 0;
    F_00acd970(param_1,"FFXIV.CFG",0x2000,1);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined1 *)((int)this + 1) = 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb340 */
byte F_00acb340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacb340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined4 *)((int)this + 8) = param_1;
    *(undefined4 *)((int)this + 4) = 0;
    F_00acd970(param_1,"FFXIV.CFG",0x2000,1);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined1 *)((int)this + 1) = 1;
    *(undefined4 *)((int)this + 0x10) = *param_2;
    *(undefined4 *)((int)this + 0x14) = param_2[1];
    *(undefined4 *)((int)this + 0x18) = param_2[2];
    *(undefined4 *)((int)this + 0x1c) = param_2[3];
    *(undefined4 *)((int)this + 0x20) = param_3;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb3c0 */
byte F_00acb3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacb3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  char * pcVar1;
  
  this_00 = (undefined *)F_00406b90(0x14c,0,0);
  if (this_00 != (undefined *)0x0) {
    F_0042b630(this_00);
    F_0042b630((undefined *)((int)this_00 + 0x54));
    F_0042b630((int)this_00 + 0xa8);
    F_00c472af(&REFG(undefined, 0x14bfb10),0x104,"FFXIV_CHR%016llX",param_1,param_2);
    pcVar1 = (char *)F_0042a990((int)this + 300);
    F_00c472af(&REFG(undefined, 0x14bfc14),0x80,pcVar1);
    pcVar1 = (char *)F_0042a990(param_3);
    F_00c472af(&REFG(undefined, 0x14bfc94),0x80,pcVar1);
    pcVar1 = (char *)F_0042a990(param_4);
    F_00c472af(&REFG(undefined, 0x14bfd14),0x400,pcVar1);
    F_00c472af(&REFG(undefined, 0x14c0114),8,"UI");
    *(undefined4 *)&REFG(undefined, 0x14c011c) = 10;
    *(undefined4 *)&REFG(undefined, 0x14c0120) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0124) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0128) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0130) = 0;
    if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
       (*(char *)this == '\0')) {
      *(undefined4 *)((int)this + 4) = 4;
      F_00accb50(&REFG(undefined, 0x14bfb10));
      *(undefined1 *)((int)this + 1) = 1;
      F_00ace5e0(this_00,this);
      if ((char)param_5 == '\0') {
        F_00aca0c0("COMMON.DAT",*(undefined4 *)((int)this_00 + 0xfc),
                     *(undefined4 *)((int)this_00 + 0x124));
        F_00aca0c0("CONTROL0.DAT",*(undefined4 *)((int)this_00 + 0x100),
                     *(undefined4 *)((int)this_00 + 0x128));
        F_00aca0c0("CONTROL1.DAT",*(undefined4 *)((int)this_00 + 0x104),
                     *(undefined4 *)((int)this_00 + 300));
      }
      if (*(int *)((int)this_00 + 0x130) != 0) {
        F_00aca0c0("ADDON.DAT",*(undefined4 *)((int)this_00 + 0x108),
                     *(int *)((int)this_00 + 0x130));
      }
      if (*(int *)((int)this_00 + 0x134) != 0) {
        F_00aca0c0("MACRO.DAT",*(undefined4 *)((int)this_00 + 0x10c),
                     *(int *)((int)this_00 + 0x134));
      }
      if (*(int *)((int)this_00 + 0x138) != 0) {
        F_00aca0c0("HOTBAR.DAT",*(undefined4 *)((int)this_00 + 0x110),
                     *(int *)((int)this_00 + 0x138));
      }
      if (*(int *)((int)this_00 + 0x13c) != 0) {
        F_00aca0c0("KEYBIND.DAT",*(undefined4 *)((int)this_00 + 0x114),
                     *(int *)((int)this_00 + 0x13c));
      }
      if (*(int *)((int)this_00 + 0x140) != 0) {
        F_00aca0c0("LOGFLTR.DAT",*(undefined4 *)((int)this_00 + 0x118),
                     *(int *)((int)this_00 + 0x140));
      }
      if (*(int *)((int)this_00 + 0x144) != 0) {
        F_00aca0c0("GEARSET.DAT",*(undefined4 *)((int)this_00 + 0x11c),
                     *(int *)((int)this_00 + 0x144));
      }
      if (*(int *)((int)this_00 + 0x148) != 0) {
        F_00aca0c0("ACQ.DAT",*(undefined4 *)((int)this_00 + 0x120),*(int *)((int)this_00 + 0x148))
        ;
      }
      if (*(char *)((int)this + 1) != '\0') {
        F_00ace360();
      }
      *(undefined1 *)((int)this + 1) = 1;
      *(undefined4 *)((int)this + 4) = 4;
      *(undefined4 *)((int)this + 0x28) = 0;
      return 1;
    }
    F_0042c880((undefined *)((int)this_00 + 0xa8));
    F_0042c880((undefined *)((int)this_00 + 0x54));
    F_0042c880(this_00);
    F_00406ad0(this_00);
  }
  return 0;
}

/* ref: FUN_00acb660 */
byte F_00acb660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xacb660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  byte bVar1;
  
  bVar1 = F_00acb3c0(this,param_1,param_2,param_3,param_4,param_7);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x180) = *param_5;
    *(undefined4 *)((int)this + 0x184) = param_5[1];
    *(undefined4 *)((int)this + 0x188) = param_5[2];
    *(undefined4 *)((int)this + 0x18c) = param_5[3];
    *(undefined4 *)((int)this + 400) = param_6;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb6d0 */
byte F_00acb6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacb6d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  
  this_00 = (undefined *)F_00406b90(0x14c,0,0);
  if (this_00 != (undefined *)0x0) {
    F_0042b630(this_00);
    F_0042b630((int)this_00 + 0x54);
    F_0042b630((int)this_00 + 0xa8);
    F_00c472af(&REFG(undefined, 0x14c0138),0x104,"FFXIV_CHR%016llX",(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    *(undefined4 *)&REFG(undefined, 0x14c0744) = 10;
    if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1))) == '\0') && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 2))) != '\0')) &&
       (*(char *)(*(undefined * PTR32 *)&gen_args[0]) == '\0')) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 4;
      F_00accbd0(&REFG(undefined, 0x14c0138),10);
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1))) = 1;
      F_00ace7a0(this_00,(*(undefined * PTR32 *)&gen_args[0]));
      uVar1 = *(undefined4 *)((int)this_00 + 0xfc);
      uVar2 = *(undefined4 *)((int)this_00 + 0x124);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"COMMON.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x100);
      uVar2 = *(undefined4 *)((int)this_00 + 0x128);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"CONTROL0.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x104);
      uVar2 = *(undefined4 *)((int)this_00 + 300);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"CONTROL1.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x108);
      uVar2 = *(undefined4 *)((int)this_00 + 0x130);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"ADDON.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x10c);
      uVar2 = *(undefined4 *)((int)this_00 + 0x134);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"MACRO.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x110);
      uVar2 = *(undefined4 *)((int)this_00 + 0x138);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"HOTBAR.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x114);
      uVar2 = *(undefined4 *)((int)this_00 + 0x13c);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"KEYBIND.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x118);
      uVar2 = *(undefined4 *)((int)this_00 + 0x140);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"LOGFLTR.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x11c);
      uVar2 = *(undefined4 *)((int)this_00 + 0x144);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"GEARSET.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x120);
      uVar2 = *(undefined4 *)((int)this_00 + 0x148);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"ACQ.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      F_00acdae0(&(*(undefined4 *)&gen_args[1]));
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1))) != '\0') {
        F_00ace4a0();
      }
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 1;
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1))) = 1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 4;
      return 1;
    }
    F_0042c880((undefined *)((int)this_00 + 0xa8));
    F_0042c880((undefined *)((int)this_00 + 0x54));
    F_0042c880(this_00);
    F_00406ad0(this_00);
  }
  return 0;
}

/* ref: FUN_00acbaa0 */
byte F_00acbaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacbaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = F_00acb6d0(this,param_1,param_2);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x180) = *param_3;
    *(undefined4 *)((int)this + 0x184) = param_3[1];
    *(undefined4 *)((int)this + 0x188) = param_3[2];
    *(undefined4 *)((int)this + 0x18c) = param_3[3];
    *(undefined4 *)((int)this + 400) = param_4;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acbb00 */
byte F_00acbb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacbb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  byte bVar1;
  int * this_00;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0xd8)) = this;
  if (-1 < *(int *)((int)this + 0x9660)) {
    this_00 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_3 + 8))(param_3,*(int *)((int)this + 0x9660))));
    this_00[0x4d] = (uint)(param_2 == 0);
    if (param_2 == 0) {
      if (*this_00 == 0x2013ff14) {
        if (this_00[1] != 1) {
          this_00[0x4d] = 2;
          goto LAB_00acbbec;
        }
        uVar3 = F_00acc850(this_00);
        if (this_00[2] != uVar3) {
          this_00[0x4d] = 3;
          goto LAB_00acbbec;
        }
      }
      else {
        piVar4 = this_00;
        piVar5 = ((int *)(gen_frame + 0x4));
        for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        piVar4 = ((int *)(gen_frame + 0x4));
        piVar5 = this_00 + 4;
        for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        *this_00 = 0x2013ff14;
        this_00[1] = 1;
        this_00[2] = 0;
        this_00[3] = 0;
        this = (*(undefined * PTR32 *)(gen_frame + 0xd8));
      }
      ((code *)*(gen_code32 *)(*param_3 + 0x10))(param_3);
      *(int *)((int)this + 0x9640) = *(int *)((int)this + 0x9640) + 1;
      if (param_4 == 1) {
        iVar2 = 3;
      }
      else {
        iVar2 = (param_4 == 3) + 1;
      }
      this_00[0x4e] = iVar2;
    }
  }
LAB_00acbbec: ;
  *(int *)((int)this + 0x9660) = *(int *)((int)this + 0x9660) + 1;
  iVar2 = *(int *)((int)this + 0x9660);
  uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0x14))(param_3);
  if (iVar2 < (int)uVar3) {
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    uVar3 = ((code *)*(gen_code32 *)(*param_3 + 8))(param_3,iVar2);
    bVar1 = F_00acaef0(param_1,param_4,*(undefined4 *)((int)this + 0x9660),uVar3,0xd4);
    if (bVar1 != 0) {
      *(gen_code32 *)((int)param_1 + 0x18) = ((code *)REFP(0xacc2f0));
      *(gen_code32 *)((int)param_1 + 0x10) = ((code *)REFP(0xacd180));
      *(undefined * PTR32 *)((int)param_1 + 0x14) = this;
      *(undefined4 *)((int)param_1 + 0x1c) = 0;
      *(undefined4 *)((int)param_1 + 0x20) = 0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00acbc70 */
uint F_00acbc70(unsigned int gen_a0)
{
  GEN_ENTER(0xacbc70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * in_ecx;
  uint uVar1;
  
  in_ecx = (undefined4 *)F_00406b90(0x30,0,0);
  if (in_ecx == (undefined4 *)0x0) {
    in_ecx = (undefined4 *)0x0;
  }
  else {
    F_004a0020(in_ecx);
    *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10ea2e8));
    in_ecx[10] = param_1;
  }
  uVar1 = F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0),0,in_ecx);
  return uVar1;
}

/* ref: FUN_00acbcc0 */
uint F_00acbcc0(unsigned int gen_a0)
{
  GEN_ENTER(0xacbcc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  F_00acd3c0(this);
  F_00acd3c0((undefined *)((int)this + 0x320c));
  F_00acd3c0((undefined *)((int)this + 0x6418));
  *(undefined4 *)((int)this + 0x9624) =
       (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  puVar1 = (undefined4 *)((int)this + 0x9628);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x137);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x962c) = 0;
  *(undefined4 *)((int)this + 0x9630) = 0;
  *(undefined4 *)((int)this + 0x9634) = 0;
  *(undefined4 *)((int)this + 0x9638) = 0;
  *(undefined4 *)((int)this + 0x9668) = 0;
  *(undefined4 *)((int)this + 0x966c) = 0;
  *(undefined4 *)((int)this + 0x9670) = 0;
  *(undefined4 *)((int)this + 0x9674) = 0;
  *(int *)((int)this + 0x9648) = (int)this + 0x6418;
  *(int *)((int)this + 0x964c) = (int)this + 0x320c;
  *(undefined4 * PTR32 *)((int)this + 0x9650) = (undefined4 *)((int)this + 0x9624);
  *(undefined * PTR32 *)((int)this + 0x9644) = this;
  *(undefined * PTR32 *)((int)this + 0x9654) = this;
  return (uint)this;
}

/* ref: FUN_00acbd70 */
uint F_00acbd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacbd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11200];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  char * _Str1;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar_t * pwVar7;
  wchar_t * pwVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined * PTR32 * _Str2;
  
  (*(uint *)(gen_frame + 0x111f8)) = 0xacbd7d;
  (*(uint *)(gen_frame + 0x111f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(undefined * PTR32 *)(gen_frame + 0x1005c)) = this;
  uVar3 = F_004308f0(REFG(void * PTR32, 0x137104c));
  F_0042e170(((undefined1 *)(gen_frame + 0x10e18)),uVar3);
  F_0042a3a0(((wchar_t *)(gen_frame + 0x10a7c)),((undefined1 *)(gen_frame + 0x10e18)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x10e18)));
  F_0042b630(((undefined1 *)(gen_frame + 0x10e18)));
  F_0042e170(((undefined1 *)(gen_frame + 0x10dc4)),((wchar_t *)(gen_frame + 0x10a7c)));
  F_004fecf0(((undefined1 *)(gen_frame + 0x10e18)),((undefined1 *)(gen_frame + 0x10dc4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10dc4)));
  F_0042a3a0(((wchar_t *)(gen_frame + 0x10874)),((undefined1 *)(gen_frame + 0x10e18)),1);
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x10a7c)),0x104,((wchar_t *)(gen_frame + 0x10874)));
  F_00429fa0();
  F_0042c880(((undefined1 *)(gen_frame + 0x10e18)));
  F_0042a2a0(((wchar_t *)(gen_frame + 0x10a7c)),"FINAL FANTASY XIV\\user\\00000000");
  F_004f88e0(((undefined1 *)(gen_frame + 0x10004)));
  uVar3 = F_004f9fa0(((undefined1 *)(gen_frame + 0x10004)),((wchar_t *)(gen_frame + 0x10a7c)),&(*(undefined4 *)(gen_frame + 0x10060)),&(*(char *)(gen_frame + 0x10067)));
  do {
    if (uVar3 != 1) {
      F_004f8eb0(((undefined1 *)(gen_frame + 0x10004)));
      uVar3 = F_004f9ed0(((undefined1 *)(gen_frame + 0x10004)));
      F_00429fa0();
      F_00c47745((*(uint *)(gen_frame + 0x111f8)) ^ (uint)(uint)(gen_frame + 0x0));
      return uVar3;
    }
    if ((*(char *)(gen_frame + 0x10067)) == '\0') {
      F_0042e170(((undefined1 *)(gen_frame + 0x10e18)),(*(undefined4 *)(gen_frame + 0x10060)));
      F_0042a3a0(((undefined1 *)(gen_frame + 0x1066c)),((undefined1 *)(gen_frame + 0x10e18)),1);
      F_0042c880(((undefined1 *)(gen_frame + 0x10e18)));
      F_0042b630(((undefined1 *)(gen_frame + 0x10e18)));
      F_0042e170(((undefined1 *)(gen_frame + 0x10dc4)),((undefined1 *)(gen_frame + 0x1066c)));
      F_004feba0(((undefined1 *)(gen_frame + 0x10e18)),((undefined1 *)(gen_frame + 0x10dc4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x10dc4)));
      _Str2 = (*(undefined * PTR32 (*)[1])REFP(0x10ea1ec));
      _Str1 = (char *)F_0042a990(((undefined1 *)(gen_frame + 0x10e18)));
      iVar4 = F_00c4c468(_Str1,(char *)_Str2);
      F_0042c880(((undefined1 *)(gen_frame + 0x10e18)));
      if (iVar4 == 0) {
        (*(int *)(gen_frame + 0x10058)) = 0;
        F_0042b630(((undefined1 *)(gen_frame + 0x10e18)));
        F_0042e170(((undefined1 *)(gen_frame + 0x10dc4)),((undefined1 *)(gen_frame + 0x1066c)));
        F_004ff130(((undefined1 *)(gen_frame + 0x10e18)),((undefined1 *)(gen_frame + 0x10dc4)),0);
        F_0042c880(((undefined1 *)(gen_frame + 0x10dc4)));
        uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x10e18)));
        uVar5 = F_0042b790(((undefined1 *)(gen_frame + 0x10e18)));
        bVar9 = true;
        if (uVar5 == 8) {
          uVar6 = 0;
          do {
            if (!bVar9) goto LAB_00acbfd7;
            if (*(char *)(uVar6 + uVar3) != '0') {
              bVar9 = false;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < 7);
          if (bVar9) {
            if (7 < (byte)(*(char *)(uVar3 + 7) - 0x30U)) goto LAB_00acbfd5;
            (*(int *)(gen_frame + 0x10058)) = *(char *)(uVar3 + 7) + -0x30;
          }
        }
        else {
LAB_00acbfd5: ;
          bVar9 = false;
        }
LAB_00acbfd7: ;
        ((char *)(gen_frame + 0x11074))[0] = '\0';
        if (bVar9) {
LAB_00acc032: ;
          pwVar7 = ((wchar_t *)(gen_frame + 0x10a7c));
          pwVar8 = ((wchar_t *)(gen_frame + 0x10874));
          for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pwVar8 = *(undefined4 *)pwVar7;
            pwVar7 = pwVar7 + 2;
            pwVar8 = pwVar8 + 2;
          }
          F_0042a020(((wchar_t *)(gen_frame + 0x10874)),((undefined1 *)(gen_frame + 0x1066c)));
          F_004f88e0(((undefined1 *)(gen_frame + 0x10024)));
          uVar3 = F_004f8900(((undefined1 *)(gen_frame + 0x10024)),((wchar_t *)(gen_frame + 0x10874)),0);
          if (uVar3 == 1) {
            uVar10 = F_004f7900(((undefined1 *)(gen_frame + 0x10024)));
            iVar4 = (int)uVar10;
            uVar3 = F_00406bb0(iVar4,0,0);
            (*(uint *)(gen_frame + 0x10050)) = uVar3;
            uVar5 = F_004f77b0(((undefined1 *)(gen_frame + 0x10024)),uVar3,iVar4,0);
            if (uVar5 == 1) {
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10054)) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
              uVar5 = F_00406bb0(iVar4 + 1,0,0);
              uVar3 = F_00407d50((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10054)),uVar3,iVar4,uVar5,iVar4);
              *(undefined1 *)(uVar3 + uVar5) = 0;
              F_00acac40(iVar4,((undefined1 *)(gen_frame + 0x10068)),uVar5);
              uVar3 = 0;
              do {
                F_00c472af(((undefined1 *)(gen_frame + 0x11178)),0x80,"appearancetype_%s",
                           *((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10ea304) + uVar3))));
                uVar6 = F_00aca620(((undefined1 *)(gen_frame + 0x10068)),((undefined1 *)(gen_frame + 0x11178)));
                piVar1 = (int *)((int)&REFG(undefined4, 0x10ea300) + uVar3);
                uVar3 = uVar3 + 8;
                ((uint *)(gen_frame + 0x10dd0))[(int)(*piVar1)] = uVar6;
              } while (uVar3 < 0x90);
              uVar3 = F_00aca620(((undefined1 *)(gen_frame + 0x10068)),"rsc_tribe");
              (*(undefined4 *)(gen_frame + 0x10db8)) = 1;
              (*(undefined4 *)(gen_frame + 0x10dbc)) = 0;
              (*(undefined1 *)(gen_frame + 0x10dc0)) = (undefined1)(*(int *)(gen_frame + 0x10058));
              (*(undefined1 *)(gen_frame + 0x10cb4)) = 0;
              (*(undefined4 *)(gen_frame + 0x10cb0)) = 0;
              (*(undefined1 *)(gen_frame + 0x10cae)) = 0;
              bVar9 = ((char *)(gen_frame + 0x11074))[0] == '\0';
              if (bVar9) {
                ((undefined1 *)(gen_frame + 0x10d58))[0] = 0;
                ((undefined1 *)(gen_frame + 0x10d78))[0] = 0;
                ((undefined1 *)(gen_frame + 0x10d98))[0] = 0;
              }
              else {
                F_00c49908(((undefined1 *)(gen_frame + 0x10d58)),0x20,((char *)(gen_frame + 0x11074)));
                F_00c49908(((undefined1 *)(gen_frame + 0x10d78)),0x20,((undefined1 *)(gen_frame + 0x10e6c)));
                F_00c49908(((undefined1 *)(gen_frame + 0x10d98)),0x20,((undefined1 *)(gen_frame + 0x10f70)));
              }
              uVar3 = F_00b894b0(((undefined1 *)(gen_frame + 0x10c94)),uVar3,((uint *)(gen_frame + 0x10dd0)));
              if (uVar3 == 0) {
                if (bVar9) {
                  F_00acf400((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1005c)) + 0x9624),((undefined1 *)(gen_frame + 0x10c84)));
                }
                else {
                  F_00acf1f0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1005c)) + 0x9628),((undefined1 *)(gen_frame + 0x10c84)));
                }
              }
              F_00406b30(uVar5);
              uVar3 = (*(uint *)(gen_frame + 0x10050));
            }
            F_00406b30(uVar3);
            F_004f8b30(((undefined1 *)(gen_frame + 0x10024)));
          }
          F_004f9ed0(((undefined1 *)(gen_frame + 0x10024)));
          F_00429fa0();
        }
        else {
          (*(uint *)(gen_frame + 0x10048)) = uVar5;
          (*(uint *)(gen_frame + 0x10044)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x1004c)) = 0;
          bVar2 = F_00aca5a0(&(*(uint *)(gen_frame + 0x10044)),((char *)(gen_frame + 0x11074)));
          if (((bVar2 != 0) && (bVar2 = F_00aca5a0(((undefined4)(uint)(this)),((undefined1 *)(gen_frame + 0x10f70))), bVar2 != 0)) &&
             (bVar2 = F_00aca5a0(((undefined4)(uint)(this)),((undefined1 *)(gen_frame + 0x10e6c))), bVar2 != 0)) goto LAB_00acc032;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x10e18)));
      }
      F_00429fa0();
    }
    uVar3 = F_004f8db0(((undefined1 *)(gen_frame + 0x10004)),&(*(undefined4 *)(gen_frame + 0x10060)),&(*(char *)(gen_frame + 0x10067)));
  } while( true );
}

/* ref: FUN_00acc2f0 */
uint F_00acc2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacc2f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined4 uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  uVar3 = 0;
  if (param_1 == 0) {
    iVar4 = *(int *)(REFG(int, 0x137104c) + 0x18);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    LOCK();
    UNLOCK();
    *(undefined1 *)(param_1 + 1) = 0;
    iVar4 = param_1;
  }
  if (*(char *)((int)this + 0x9658) != '\0') {
    uVar2 = F_00aca740(this);
    *(undefined4 *)((int)this + 0x9664) = uVar3;
    if (*(int *)((int)this + 0x966c) != 0) {
      uVar2 = ((code *)*(gen_code32 *)((int)this + 0x9668))
                        (*(undefined4 *)((int)this + 0x966c),(int)this + 0x9670,iVar4,
                         *(undefined4 *)((int)this + 0x9678));
      *(undefined4 *)((int)this + 0x966c) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
      return uVar2;
    }
    goto switchD_00acc3fe_default;
  }
  if (*(char *)(REFG(int, 0x137104c) + 8) != '\0') {
    uVar2 = F_00aca740(this);
    *(undefined4 *)((int)this + 0x9664) = 0;
    if (*(int *)((int)this + 0x966c) != 0) {
      uVar2 = ((code *)*(gen_code32 *)((int)this + 0x9668))
                        (*(undefined4 *)((int)this + 0x966c),(int)this + 0x9670,iVar4,
                         *(undefined4 *)((int)this + 0x9678));
      *(undefined4 *)((int)this + 0x966c) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
      return uVar2;
    }
    goto switchD_00acc3fe_default;
  }
  uVar2 = *(uint *)((int)this + 0x965c);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 1: ;
    F_009546c0((undefined *)((int)this + 0x9628));
    F_004f9bb0(((undefined1 *)(gen_frame + 0x18)));
    (*(gen_code32 *)(gen_frame + 0x10)) = (code *)0x0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(gen_code32 *)(gen_frame + 0x4c)) = ((code *)REFP(0xacbc70));
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0xacd160));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0xacbd70));
    uVar2 = F_004fc7b0(REFG(void * PTR32, 0x1375ae8),((undefined1 *)(gen_frame + 0x18)),&(*(gen_code32 *)(gen_frame + 0x8)),5);
    *(undefined4 *)((int)this + 0x965c) = 3;
    *(undefined4 *)((int)this + 0x9660) = 0xffffffff;
    F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
    return uVar2;
  case 2: ;
    goto switchD_00acc3fe_caseD_2;
  case 3: ;
    bVar1 = F_00acbb00(this,iVar4,uVar3,(int)this + 0x320c,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) goto switchD_00acc3fe_default;
    *(undefined4 *)((int)this + 0x965c) = 2;
    *(undefined4 *)((int)this + 0x9660) = 0xffffffff;
switchD_00acc3fe_caseD_2: ;
    bVar1 = F_00acbb00(this,iVar4,uVar3,(int)this + 0x6418,3);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 == 0) {
      *(undefined4 *)((int)this + 0x965c) = 4;
      *(undefined4 *)((int)this + 0x9660) = 0xffffffff;
switchD_00acc3fe_caseD_4: ;
      bVar1 = F_00acbb00(this,iVar4,uVar3,this,1);
      uVar2 = CONCAT31(extraout_var_01,bVar1);
      if (bVar1 == 0) {
        F_00aca740(this);
        *(undefined4 *)((int)this + 0x9664) = 0;
        uVar2 = F_00acae00(this,iVar4);
      }
    }
switchD_00acc3fe_default: ;
    F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
    return uVar2;
  case 4: ;
    goto switchD_00acc3fe_caseD_4;
  default: ;
    goto switchD_00acc3fe_default;
  }
}

/* ref: FUN_00acc540 */
uint F_00acc540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacc540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00acc2f0(*(undefined * PTR32 *)((int)this + 0x28),0,0);
  uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  return uVar1;
}

/* ref: FUN_00acc5d0 */
byte F_00acc5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacc5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x966c) = 0;
  *(undefined1 *)((int)this + 0x9658) = 0;
  LOCK();
  UNLOCK();
  if ((REFG(int, 0x14bee60) == 0) && (*((int *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x18) + 0x194))) == 0)) {
    *(undefined4 *)((int)this + 0x9640) = 0;
    *(undefined4 *)((int)this + 0x965c) = 1;
    *(undefined4 *)((int)this + 0x9660) = 0xffffffff;
    *(undefined4 *)((int)this + 0x9664) = 1;
    F_00acc2f0(this,0,0);
    *(undefined4 *)((int)this + 0x9668) = *param_1;
    *(undefined4 *)((int)this + 0x966c) = param_1[1];
    *(undefined4 *)((int)this + 0x9670) = param_1[2];
    *(undefined4 *)((int)this + 0x9674) = param_1[3];
    *(undefined4 *)((int)this + 0x9678) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acc670 */
byte F_00acc670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacc670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  undefined4 * this_01;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x9658) = 1;
  this_01 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9654) + 8))))(*(int * PTR32 *)((int)this + 0x9654),param_1)))
  ;
  this_01[0x4d] = 1;
  this_01[1] = 1;
  this_01[0x4e] = 3;
  *this_01 = 0x2013ff14;
  this_01[2] = 0;
  this_01[3] = 0;
  uVar2 = F_00acc850(this_01);
  this_01[2] = uVar2;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9654) + 0x10))))(*(int * PTR32 *)((int)this + 0x9654));
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x18);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9654) + 8))))(*(int * PTR32 *)((int)this + 0x9654),param_1);
  bVar1 = F_00acb150(this_00,1,param_1,uVar2,0xd4);
  if (bVar1 != 0) {
    *(gen_code32 *)((int)this_00 + 0x18) = ((code *)REFP(0xacc2f0));
    *(gen_code32 *)((int)this_00 + 0x10) = ((code *)REFP(0xacd180));
    *(undefined * PTR32 *)((int)this_00 + 0x14) = this;
    *(undefined4 *)((int)this_00 + 0x1c) = 0;
    *(undefined4 *)((int)this_00 + 0x20) = 0;
  }
  return bVar1;
}

/* ref: FUN_00acc730 */
byte F_00acc730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacc730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_00acc670(this,param_1);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x9668) = *param_2;
    *(undefined4 *)((int)this + 0x966c) = param_2[1];
    *(undefined4 *)((int)this + 0x9670) = param_2[2];
    *(undefined4 *)((int)this + 0x9674) = param_2[3];
    *(undefined4 *)((int)this + 0x9678) = param_3;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acc7c0 */
uint F_00acc7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacc7c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = uVar4 / 0x18;
      cVar2 = (char)uVar4;
      pbVar1 = (byte *)(uVar4 + param_1);
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 ^ (uint)*pbVar1 << (cVar2 + (char)uVar3 * -0x18 & 0x1fU);
    } while (uVar4 < param_2);
  }
  return uVar5;
}

/* ref: FUN_00acc810 */
uint F_00acc810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacc810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00acc850 */
uint F_00acc850(unsigned int gen_a0)
{
  GEN_ENTER(0xacc850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte * pbVar2;
  byte * pbVar3;
  uint local_8;
  
  local_8 = 0;
  pbVar2 = (byte *)((int)this + 0x13);
  do {
    cVar1 = (char)(pbVar2 + (-0x13 - (int)this));
    pbVar3 = pbVar2 + 4;
    local_8 = local_8 ^ (uint)pbVar2[-2] <<
                        (cVar1 + (char)((uint)(pbVar2 + (-0x12 - (int)this)) / 0x18) * -0x18 + 1U &
                        0x1f) ^ (uint)pbVar2[-1] <<
                                (cVar1 + (char)((uint)(pbVar2 + (-0x11 - (int)this)) / 0x18) * -0x18
                                 + 2U & 0x1f) ^
                        (uint)*pbVar2 <<
                        (cVar1 + (char)((uint)(pbVar2 + (-0x10 - (int)this)) / 0x18) * -0x18 + 3U &
                        0x1f) ^ (uint)pbVar2[-3] <<
                                (cVar1 + (char)((uint)(pbVar2 + (-0x13 - (int)this)) / 0x18) * -0x18
                                & 0x1fU);
    pbVar2 = pbVar3;
  } while (pbVar3 + (-0x13 - (int)this) < (byte *)0xc4);
  return local_8;
}

/* ref: FUN_00acc960 */
uint F_00acc960(unsigned int gen_a0)
{
  GEN_ENTER(0xacc960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x10),0,0xc4);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0xd4) = 0;
  *(undefined1 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)this = 0x2013ff14;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined1 *)((int)this + 0x13c) = 0xff;
  return (uint)pvVar1;
}

/* ref: FUN_00acc9e0 */
byte F_00acc9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacc9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x34) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00acc9f0 */
unsigned int F_00acc9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xacc9f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((&REFG(undefined1, 0x14bee00))[(int)(param_1)] != '\0') {
    if ((&REFG(undefined4, 0x14bedc0))[(int)(param_1)] != 0) {
      F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(param_1)]);
      (&REFG(undefined4, 0x14bedc0))[(int)(param_1)] = 0;
    }
    (&REFG(undefined1, 0x14bee00))[(int)(param_1)] = 0;
  }
  (&REFG(undefined4, 0x14bed80))[(int)(param_1)] = 0;
  return 0;
}

/* ref: FUN_00acca30 */
uint F_00acca30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacca30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if ((&REFG(undefined1, 0x14bee00))[(int)(param_1)] != '\0') {
    if ((&REFG(undefined4, 0x14bedc0))[(int)(param_1)] != 0) {
      F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(param_1)]);
      (&REFG(undefined4, 0x14bedc0))[(int)(param_1)] = 0;
    }
    (&REFG(undefined1, 0x14bee00))[(int)(param_1)] = 0;
  }
  piVar1 = &REFG(undefined4, 0x14bed80) + param_1;
  *piVar1 = 0;
  (&REFG(undefined4, 0x14bedc0))[(int)(param_1)] = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = F_00406bb0(param_3 + 0xb,0,0);
      (&REFG(undefined4, 0x14bedc0))[(int)(param_1)] = uVar2;
      *(undefined1 *)(uVar2 + param_3) = 0;
      (&REFG(undefined1, 0x14bee00))[(int)(param_1)] = 1;
    }
    *piVar1 = param_3;
    return uVar2;
  }
  *piVar1 = param_3;
  return param_2;
}

/* ref: FUN_00accac0 */
uint F_00accac0(unsigned int gen_a0)
{
  GEN_ENTER(0xaccac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LOCK();
  REFG(undefined4, 0x14bee60) = 0;
  UNLOCK();
  *(undefined4 *)&REFG(undefined1, 0x14bee00) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bee04) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bee08) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bee0c) = 0;
  REFG(undefined4, 0x14bedc0) = 0;
  REFG(undefined4, 0x14bedc4) = 0;
  REFG(undefined4, 0x14bedc8) = 0;
  REFG(undefined4, 0x14bedcc) = 0;
  REFG(undefined4, 0x14bedd0) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedd4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedd8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14beddc) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bede0) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bede4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bede8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedec) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedf0) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedf4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedf8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedfc) = 0;
  return 0;
}

/* ref: FUN_00accb50 */
uint F_00accb50(unsigned int gen_a0)
{
  GEN_ENTER(0xaccb50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  LOCK();
  UNLOCK();
  if (REFG(int, 0x14bee60) != 0) {
    return 1;
  }
  uVar2 = 0;
  do {
    if ((&REFG(undefined1, 0x14bee00))[(int)(uVar2)] != '\0') {
      if ((&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] != 0) {
        F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(uVar2)]);
        (&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] = 0;
      }
      (&REFG(undefined1, 0x14bee00))[(int)(uVar2)] = 0;
    }
    (&REFG(undefined4, 0x14bed80))[(int)(uVar2)] = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  puVar3 = param_1;
  puVar4 = &REFG(undefined4, 0x14be758);
  for (iVar1 = 0x18a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  REFG(undefined4, 0x14be750) = 0;
  return 0;
}

/* ref: FUN_00accbd0 */
uint F_00accbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaccbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  LOCK();
  UNLOCK();
  if (REFG(int, 0x14bee60) != 0) {
    return 1;
  }
  uVar1 = 0;
  do {
    if ((&REFG(undefined1, 0x14bee00))[(int)(uVar1)] != '\0') {
      if ((&REFG(undefined4, 0x14bedc0))[(int)(uVar1)] != 0) {
        F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(uVar1)]);
        (&REFG(undefined4, 0x14bedc0))[(int)(uVar1)] = 0;
      }
      (&REFG(undefined1, 0x14bee00))[(int)(uVar1)] = 0;
    }
    (&REFG(undefined4, 0x14bed80))[(int)(uVar1)] = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  F_00c49908(&REFG(undefined4, 0x14be758),0x104,param_1);
  REFG(undefined4, 0x14bed64) = param_2;
  REFG(undefined4, 0x14be750) = 0;
  return 0;
}

/* ref: FUN_00accc50 */
uint F_00accc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaccc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,param_1);
  uVar1 = F_00acca30(REFG(int, 0x14be750),param_2,param_3);
  REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
  return uVar1;
}

/* ref: FUN_00accca0 */
uint F_00accca0(unsigned int gen_a0)
{
  GEN_ENTER(0xaccca0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14bedc0))[(int)(param_1)];
}

/* ref: FUN_00acccb0 */
uint F_00acccb0(unsigned int gen_a0)
{
  GEN_ENTER(0xacccb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14bed80))[(int)(param_1)];
}

/* ref: FUN_00acccc0 */
unsigned int F_00acccc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xacccc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  if ((char)param_7 == '\0') {
    REFG(int, 0x14bee10) = (-(uint)((char)param_8 != '\0') & 0xfffffffd) + 6;
  }
  else {
    REFG(int, 0x14bee10) = 0;
  }
  LOCK();
  REFG(undefined4, 0x14bee60) = 0;
  UNLOCK();
  return 0;
}

/* ref: FUN_00accd00 */
uint F_00accd00(void)
{
  GEN_ENTER(0xaccd00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = 0;
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00accd20 */
uint F_00accd20(unsigned int gen_a0)
{
  GEN_ENTER(0xaccd20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14bee18))[(int)(param_1)];
}

/* ref: FUN_00accd80 */
uint F_00accd80(unsigned int gen_a0)
{
  GEN_ENTER(0xaccd80u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  F_0042b630(in_ecx + 0xa8);
  return in_ecx;
}

/* ref: FUN_00accda0 */
uint F_00accda0(unsigned int gen_a0)
{
  GEN_ENTER(0xaccda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00accdc0 */
uint F_00accdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaccdc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *(int *)((int)this + param_1 * 4 + 0x108) = param_2[5];
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2);
  *(uint *)((int)this + param_1 * 4 + 0x130) = uVar1 + 0x20;
  return uVar1 + 0x20;
}

/* ref: FUN_00accdf0 */
uint F_00accdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaccdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  *(undefined4 *)((int)this + param_1 * 4 + 0x108) = 0;
  *(undefined4 *)((int)this + param_1 * 4 + 0x130) = 0;
  if (((char)param_2[0xb] != '\0') || ((char)param_3 != '\0')) {
    F_00447240(param_2,param_1);
    *(int *)((int)this + param_1 * 4 + 0x108) = param_2[5];
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2);
    uVar1 = uVar1 + 0x20;
    *(uint *)((int)this + param_1 * 4 + 0x130) = uVar1;
  }
  if (*(char *)((int)param_2 + 0x2d) != '\0') {
    *(undefined1 *)((int)param_2 + 0x2d) = 0;
  }
  return uVar1;
}

/* ref: FUN_00acce80 */
uint F_00acce80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacce80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x108 + param_2 * 4);
}

/* ref: FUN_00acced0 */
uint F_00acced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacced0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x130 + param_2 * 4);
}

/* ref: FUN_00accef0 */
uint F_00accef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaccef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00accf30 */
uint F_00accf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaccf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10ea2e8));
  F_004a05c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00accf70 */
uint F_00accf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaccf70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00accf90 */
uint F_00accf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaccf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00accfe0 */
uint F_00accfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaccfe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x140,param_2,0x137);
  return uVar1;
}

/* ref: FUN_00acd030 */
uint F_00acd030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd030u, gen_a0, gen_a1, gen_a2, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*param_1)(param_3);
  return uVar1;
}

/* ref: FUN_00acd060 */
uint F_00acd060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x137);
  return uVar1;
}

/* ref: FUN_00acd090 */
uint F_00acd090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd090u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00acd0b0 */
uint F_00acd0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd0b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x137);
  return uVar1;
}

/* ref: FUN_00acd100 */
unsigned int F_00acd100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00acd120 */
unsigned int F_00acd120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00acd140 */
uint F_00acd140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacd140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00acd160 */
uint F_00acd160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00acd180 */
uint F_00acd180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacd180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00acd1a0 */
uint F_00acd1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd1a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00acd1b0 */
uint F_00acd1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd1b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00acd1f0 */
uint F_00acd1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00acd230 */
uint F_00acd230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd230u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return param_1;
}

/* ref: FUN_00acd240 */
byte F_00acd240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00acd260 */
uint F_00acd260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) - *(int *)(param_1 + 4);
}

/* ref: FUN_00acd280 */
uint F_00acd280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd280u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) + param_2;
  return in_ecx;
}

/* ref: FUN_00acd290 */
uint F_00acd290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00acd2d0 */
uint F_00acd2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd2d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00acd2e0 */
uint F_00acd2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd2e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00acd2f0 */
uint F_00acd2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd2f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00acd320 */
uint F_00acd320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return uVar1;
}

/* ref: FUN_00acd350 */
uint F_00acd350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x180) = *param_1;
  *(undefined4 *)((int)this + 0x184) = param_1[1];
  *(undefined4 *)((int)this + 0x188) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x18c) = uVar1;
  *(undefined4 *)((int)this + 400) = param_2;
  return uVar1;
}

/* ref: FUN_00acd3c0 */
uint F_00acd3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  *(undefined4 *)((int)this + 0x3208) = 0;
  uVar1 = 0;
  puVar2 = (undefined4 *)((int)this + 8);
  do {
    F_00c48350(puVar2 + 3,0,0xc4);
    puVar2[-1] = 0x2013ff14;
    *puVar2 = 1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 0x34) = 0;
    *(undefined1 *)(puVar2 + 0x3c) = 0;
    *(undefined1 *)(puVar2 + 0x44) = 0;
    puVar2[0x4c] = 0;
    *(undefined1 *)(puVar2 + 0x4e) = 0xff;
    *(char *)(puVar2 + 0x4e) = (char)uVar1;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 0x50;
  } while (uVar1 < 0x28);
  *(undefined4 *)((int)this + 0x3204) = 0;
  return (uint)this;
}

/* ref: FUN_00acd450 */
uint F_00acd450(void)
{
  GEN_ENTER(0xacd450u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  LOCK();
  UNLOCK();
  if (REFG(int, 0x14bee60) == 0) {
    uVar1 = 0;
    do {
      if ((&REFG(undefined1, 0x14bee00))[(int)(uVar1)] != '\0') {
        if ((&REFG(undefined4, 0x14bedc0))[(int)(uVar1)] != 0) {
          F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(uVar1)]);
          (&REFG(undefined4, 0x14bedc0))[(int)(uVar1)] = 0;
        }
        (&REFG(undefined1, 0x14bee00))[(int)(uVar1)] = 0;
      }
      (&REFG(undefined4, 0x14bed80))[(int)(uVar1)] = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
    return 0;
  }
  return 1;
}

/* ref: FUN_00acd4b0 */
uint F_00acd4b0(void)
{
  GEN_ENTER(0xacd4b0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4a0];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x498)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x49c);
  uVar1 = F_004308f0(REFG(void * PTR32, 0x137104c));
  F_0042e170(((undefined1 *)(gen_frame + 0x444)),uVar1);
  F_0042a3a0(((undefined4 *)(gen_frame + 0x23c)),((undefined1 *)(gen_frame + 0x444)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x444)));
  F_0042a2a0(((undefined4 *)(gen_frame + 0x23c)),&REFG(undefined4, 0x14be758));
  F_004f88e0(((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_004f7d10(((undefined4 *)(gen_frame + 0x23c)),0);
  if (uVar1 != 1) {
    REFG(undefined4, 0x14bee10) = 6;
    if (REFG(undefined4, 0x14be750) != 0) {
      puVar4 = &REFG(undefined4, 0x14bee18);
      for (uVar1 = REFG(undefined4, 0x14be750); uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = 6;
        puVar4 = puVar4 + 1;
      }
    }
    uVar1 = F_004f9ed0(((undefined1 *)(gen_frame + 0xc)));
    F_00429fa0();
    F_00c47745((*(uint *)(gen_frame + 0x498)) ^ (uint)(uint)(gen_frame + 0x49c));
    return uVar1;
  }
  uVar1 = 0;
  (*(char *)(gen_frame + 0x33)) = '\0';
  if (REFG(undefined4, 0x14be750) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = &REFG(undefined, 0x14bd710);
    do {
      puVar4 = ((undefined4 *)(gen_frame + 0x23c));
      puVar5 = ((undefined4 *)(gen_frame + 0x34));
      for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      F_0042a2a0(((undefined4 *)(gen_frame + 0x34)),(*(undefined * PTR32 *)(gen_frame + 0x2c)));
      uVar2 = F_004f8900(((undefined1 *)(gen_frame + 0xc)),((undefined4 *)(gen_frame + 0x34)),1);
      if (uVar2 == 1) {
        (&REFG(undefined4, 0x14bee18))[(int)(uVar1)] = 0;
        uVar2 = F_004f7840(((undefined1 *)(gen_frame + 0xc)),(&REFG(undefined4, 0x14bedc0))[(int)(uVar1)],(&REFG(undefined4, 0x14bed80))[(int)(uVar1)],0);
        if (uVar2 != 1) {
          REFG(undefined4, 0x14bee10) = 6;
          (&REFG(undefined4, 0x14bee18))[(int)(uVar1)] = 6;
        }
        F_004f8b30(((undefined1 *)(gen_frame + 0xc)));
      }
      else {
        (*(char *)(gen_frame + 0x33)) = '\x01';
        REFG(undefined4, 0x14bee10) = 6;
        (&REFG(undefined4, 0x14bee18))[(int)(uVar1)] = 6;
      }
      F_00429fa0();
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x104;
      uVar1 = uVar1 + 1;
    } while (uVar1 < REFG(undefined4, 0x14be750));
    REFG(undefined4, 0x14bee10) = 6;
    if ((*(char *)(gen_frame + 0x33)) != '\0') goto LAB_00acd671;
  }
  REFG(undefined4, 0x14bee10) = 0;
LAB_00acd671: ;
  uVar1 = F_004f9ed0(((undefined1 *)(gen_frame + 0xc)));
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x498)) ^ (uint)(uint)(gen_frame + 0x49c));
  return uVar1;
}

/* ref: FUN_00acd6a0 */
uint F_00acd6a0(void)
{
  GEN_ENTER(0xacd6a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4a0];
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x498)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x49c);
  uVar2 = F_004308f0(REFG(void * PTR32, 0x137104c));
  F_0042e170(((undefined1 *)(gen_frame + 0x444)),uVar2);
  F_0042a3a0(((undefined4 *)(gen_frame + 0x23c)),((undefined1 *)(gen_frame + 0x444)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x444)));
  F_0042a2a0(((undefined4 *)(gen_frame + 0x23c)),&REFG(undefined4, 0x14be758));
  F_004f88e0(((undefined1 *)(gen_frame + 0xc)));
  uVar2 = 0;
  (*(char *)(gen_frame + 0x33)) = '\0';
  (*(char *)(gen_frame + 0x32)) = '\0';
  if (REFG(undefined4, 0x14be750) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = &REFG(undefined, 0x14bd710);
    do {
      puVar5 = ((undefined4 *)(gen_frame + 0x23c));
      puVar6 = ((undefined4 *)(gen_frame + 0x34));
      for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      F_0042a2a0(((undefined4 *)(gen_frame + 0x34)),(*(undefined * PTR32 *)(gen_frame + 0x2c)));
      uVar3 = F_004f8900(((undefined1 *)(gen_frame + 0xc)),((undefined4 *)(gen_frame + 0x34)),0);
      if (uVar3 == 1) {
        if ((&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] == 0) {
          iVar4 = (&REFG(undefined4, 0x14bed80))[(int)(uVar2)];
          if (iVar4 == 0) {
            uVar7 = F_004f7900(((undefined1 *)(gen_frame + 0xc)));
            iVar4 = (int)uVar7;
          }
          cVar1 = (&REFG(undefined1, 0x14bee00))[(int)(uVar2)];
          (&REFG(undefined4, 0x14bed80))[(int)(uVar2)] = iVar4;
          if (cVar1 != '\0') {
            if ((&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] != 0) {
              F_00406b30((&REFG(undefined4, 0x14bedc0))[(int)(uVar2)]);
              (&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] = 0;
            }
            (&REFG(undefined1, 0x14bee00))[(int)(uVar2)] = 0;
          }
          (&REFG(undefined4, 0x14bed80))[(int)(uVar2)] = 0;
          (&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] = 0;
          if (iVar4 != 0) {
            uVar3 = F_00406bb0(iVar4 + 0xb,0,0);
            (&REFG(undefined4, 0x14bedc0))[(int)(uVar2)] = uVar3;
            *(undefined1 *)(uVar3 + iVar4) = 0;
            (&REFG(undefined1, 0x14bee00))[(int)(uVar2)] = 1;
          }
          (&REFG(undefined4, 0x14bed80))[(int)(uVar2)] = iVar4;
        }
        if ((&REFG(undefined4, 0x14bed80))[(int)(uVar2)] == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = F_004f77b0(((undefined1 *)(gen_frame + 0xc)),(&REFG(undefined4, 0x14bedc0))[(int)(uVar2)],(&REFG(undefined4, 0x14bed80))[(int)(uVar2)],0);
        }
        F_004f8b30(((undefined1 *)(gen_frame + 0xc)));
        (&REFG(undefined4, 0x14bee18))[(int)(uVar2)] = 0;
        if (uVar3 != 1) {
          REFG(undefined4, 0x14bee10) = 4;
          (*(char *)(gen_frame + 0x33)) = '\x01';
          goto LAB_00acd851;
        }
      }
      else {
        REFG(undefined4, 0x14bee10) = 3;
        (*(char *)(gen_frame + 0x32)) = '\x01';
LAB_00acd851: ;
        (&REFG(undefined4, 0x14bee18))[(int)(uVar2)] = REFG(undefined4, 0x14bee10);
      }
      F_00429fa0();
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x104;
      uVar2 = uVar2 + 1;
    } while (uVar2 < REFG(undefined4, 0x14be750));
  }
  REFG(undefined4, 0x14bee10) = 0;
  if ((*(char *)(gen_frame + 0x33)) == '\0') {
    if ((*(char *)(gen_frame + 0x32)) != '\0') {
      REFG(undefined4, 0x14bee10) = 3;
    }
  }
  else {
    REFG(undefined4, 0x14bee10) = 4;
  }
  uVar2 = F_004f9ed0(((undefined1 *)(gen_frame + 0xc)));
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x498)) ^ (uint)(uint)(gen_frame + 0x49c));
  return uVar2;
}

/* ref: FUN_00acd8e0 */
uint F_00acd8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x8)));
  F_004f84e0(&(*(undefined4 *)(gen_frame + 0x8)),param_1);
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(gen_code32 *)(gen_frame + 0x3c)) = ((code *)REFP(0xacccc0));
  F_004fc510(REFG(void * PTR32, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x8)));
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  REFG(undefined4, 0x14bee60) = 1;
  UNLOCK();
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
  return uVar1;
}

/* ref: FUN_00acd970 */
uint F_00acd970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacd970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  UNLOCK();
  if (REFG(int, 0x14bee60) == 0) {
    if ((*(uint *)&REFG(undefined, 0x14beebc) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14beebc) = *(uint *)&REFG(undefined, 0x14beebc) | 1;
      F_0042b630(&REFG(undefined, 0x14bee68));
      F_00c47de6(((code *)REFP(0x107c720)));
    }
    F_0041f130(param_1,&REFG(undefined, 0x14bee68));
    iVar1 = REFG(int, 0x137104c);
    uVar2 = F_0042a970(&REFG(undefined, 0x14bee68));
    iVar3 = uVar2 + 1;
    uVar2 = F_0042a990(&REFG(undefined, 0x14bee68));
    F_00acd8e0(iVar1 + 0x24,uVar2,iVar3);
    return 0;
  }
  return 1;
}

/* ref: FUN_00acd9f0 */
uint F_00acd9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
    F_0043c630(pvVar2);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
    F_0043c630(pvVar2);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
    F_0043c630(pvVar2);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
    F_0043c630((undefined *)(uVar3 + 0x850));
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
    F_0043c630(pvVar2);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
    F_0043c630(pvVar2);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
    uVar3 = F_0043c630(pvVar2);
  }
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  return uVar3;
}

/* ref: FUN_00acdae0 */
uint F_00acdae0(unsigned int gen_a0)
{
  GEN_ENTER(0xacdae0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,*param_1,param_1[1]);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0x850) + 0x1c))))((int *)(uVar3 + 0x850),*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,*param_1,param_1[1]);
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,*param_1,param_1[1]);
  }
  return uVar3;
}

/* ref: FUN_00acdbc0 */
uint F_00acdbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xacdbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
    F_00447310(pvVar2,uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
    F_00447310(pvVar2,uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
    F_00447310(pvVar2,uVar4);
    uVar4 = param_1;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
    F_00447310((undefined *)(uVar3 + 0x850),uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
    F_00447310(pvVar2,uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
    F_00447310(pvVar2,uVar4);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
    uVar3 = F_00447310(pvVar2,param_1);
  }
  return uVar3;
}

/* ref: FUN_00acdc60 */
uint F_00acdc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacdc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00acd9f0(this);
  LOCK();
  UNLOCK();
  *(undefined1 *)(param_1 + 1) = 0;
  uVar1 = param_1;
  if (*(int *)(param_1 + 0x184) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x180))
                      (*(undefined4 *)(param_1 + 0x184),param_1 + 0x188,param_1,
                       *(undefined4 *)(param_1 + 400));
  }
  if (this != (undefined *)0x0) {
    F_0042c880((undefined *)((int)this + 0xa8));
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
    uVar1 = F_00406ad0(this);
  }
  return uVar1;
}

/* ref: FUN_00acdce0 */
uint F_00acdce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacdce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  ushort * puVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 * puVar8;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0xfc) = REFG(undefined4, 0x14bedc0);
    *(undefined4 *)((int)this + 0x100) = REFG(undefined4, 0x14bedc4);
    *(undefined4 *)((int)this + 0x104) = REFG(undefined4, 0x14bedc8);
    piVar4 = (int *)((int)this + 0x108);
    uVar7 = 0;
    do {
      if (*piVar4 != 0) {
        uVar5 = *(uint *)((int)&REFG(undefined4, 0x14bed8c) + uVar7);
        if ((uint)piVar4[10] < *(uint *)((int)&REFG(undefined4, 0x14bed8c) + uVar7)) {
          uVar5 = piVar4[10];
        }
        if ((*(int *)((int)&REFG(undefined4, 0x14bedcc) + uVar7) != 0) && (uVar5 != 0)) {
          F_00c46aa0(*piVar4,*(int *)((int)&REFG(undefined4, 0x14bedcc) + uVar7),uVar5);
        }
      }
      uVar7 = uVar7 + 4;
      piVar4 = piVar4 + 1;
    } while (uVar7 < 0x1c);
    iVar1 = *(int *)(REFG(int, 0x137104c) + 0x10);
    F_0042b630(((undefined1 *)(gen_frame + 0xc)));
    F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0xfc));
    F_00420340((undefined *)(iVar1 + 0xb0),((undefined1 *)(gen_frame + 0xc)));
    F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x100));
    puVar8 = ((undefined1 *)(gen_frame + 0xc));
    pvVar3 = (undefined *)F_00414010(iVar1,0);
    F_00420340(pvVar3,puVar8);
    F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x104));
    puVar8 = ((undefined1 *)(gen_frame + 0xc));
    pvVar3 = (undefined *)F_00414010(iVar1,1);
    F_00420340(pvVar3,puVar8);
    F_00acdbc0(1);
  }
  else {
    if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_00ace080;
    piVar4 = (int *)F_00424750(REFG(int, 0x137104c));
    uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4);
    *(undefined4 *)((int)this + 0xfc) = REFG(undefined4, 0x14bedc0);
    *(undefined4 *)((int)this + 0x100) = REFG(undefined4, 0x14bedc4);
    *(undefined4 *)((int)this + 0x104) = REFG(undefined4, 0x14bedc8);
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)((int)this + 0x108);
    ((char *)(gen_frame + 0x60))[0] = '\0';
    ((char *)(gen_frame + 0x60))[1] = '\0';
    ((char *)(gen_frame + 0x60))[2] = '\0';
    ((char *)(gen_frame + 0x60))[3] = '\0';
    ((char *)(gen_frame + 0x60))[4] = '\0';
    ((char *)(gen_frame + 0x60))[5] = '\0';
    ((char *)(gen_frame + 0x60))[6] = '\0';
    (*(uint *)(gen_frame + 0x4)) = 0;
    do {
      if (*(*(int * PTR32 *)(gen_frame + 0x8)) != 0) {
        puVar2 = ((ushort *)GEN_TOP((&REFG(undefined4, 0x14bedcc))[(int)((*(uint *)(gen_frame + 0x4)))]));
        iVar1 = (&REFG(undefined4, 0x14bed8c))[(int)((*(uint *)(gen_frame + 0x4)))];
        if (((((puVar2 != (ushort *)0x0) && (iVar1 != 0)) && ((&REFG(undefined4, 0x14bee24))[(int)((*(uint *)(gen_frame + 0x4)))] == 0)) &&
            ((uVar5 = (uint)*puVar2, uVar5 < 7 && ((*(uint *)(gen_frame + 0x4)) <= uVar5)))) &&
           (((char *)(gen_frame + 0x60))[(int)(uVar5)] == '\0')) {
          F_00c46aa0(*(undefined4 *)((int)this + uVar5 * 4 + 0x108),puVar2,iVar1)
          ;
          *(int *)((int)this + (uint)*puVar2 * 4 + 0x130) = iVar1;
          ((char *)(gen_frame + 0x60))[(int)(*puVar2)] = '\x01';
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    } while ((*(uint *)(gen_frame + 0x4)) < 7);
    if (((char *)(gen_frame + 0x60))[0] == '\0') {
      *(undefined4 *)((int)this + 0x130) = 0;
    }
    if (((char *)(gen_frame + 0x60))[1] == '\0') {
      *(undefined4 *)((int)this + 0x134) = 0;
    }
    if (((char *)(gen_frame + 0x60))[2] == '\0') {
      *(undefined4 *)((int)this + 0x138) = 0;
    }
    if (((char *)(gen_frame + 0x60))[3] == '\0') {
      *(undefined4 *)((int)this + 0x13c) = 0;
    }
    if (((char *)(gen_frame + 0x60))[4] == '\0') {
      *(undefined4 *)((int)this + 0x140) = 0;
    }
    if (((char *)(gen_frame + 0x60))[5] == '\0') {
      *(undefined4 *)((int)this + 0x144) = 0;
    }
    if (((char *)(gen_frame + 0x60))[6] == '\0') {
      *(undefined4 *)((int)this + 0x148) = 0;
    }
    iVar1 = *(int *)(REFG(int, 0x137104c) + 0x10);
    F_0042b630(((undefined1 *)(gen_frame + 0xc)));
    if (*(int *)((int)this + 0xfc) != 0) {
      F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0xfc));
      F_00420340((undefined *)(iVar1 + 0xb0),((undefined1 *)(gen_frame + 0xc)));
    }
    if (*(int *)((int)this + 0x100) != 0) {
      F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x100));
      puVar8 = ((undefined1 *)(gen_frame + 0xc));
      pvVar3 = (undefined *)F_00414010(iVar1,0);
      F_00420340(pvVar3,puVar8);
    }
    if (*(int *)((int)this + 0x104) != 0) {
      F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x104));
      puVar8 = ((undefined1 *)(gen_frame + 0xc));
      pvVar3 = (undefined *)F_00414010(iVar1,1);
      F_00420340(pvVar3,puVar8);
    }
    uVar5 = (uint)(*(int *)((int)this + 0x130) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4)));
    F_00447310(pvVar3,uVar5);
    uVar5 = (uint)(*(int *)((int)this + 0x134) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x2c))(piVar4)));
    F_00447310(pvVar3,uVar5);
    uVar5 = (uint)(*(int *)((int)this + 0x138) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x30))(piVar4)));
    F_00447310(pvVar3,uVar5);
    uVar6 = (uint)(*(int *)((int)this + 0x13c) != 0);
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4);
    F_00447310((undefined *)(uVar5 + 0x850),uVar6);
    uVar5 = (uint)(*(int *)((int)this + 0x140) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x58))(piVar4)));
    F_00447310(pvVar3,uVar5);
    uVar5 = (uint)(*(int *)((int)this + 0x144) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x34))(piVar4)));
    F_00447310(pvVar3,uVar5);
    uVar5 = (uint)(*(int *)((int)this + 0x148) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x38))(piVar4)));
    F_00447310(pvVar3,uVar5);
    *(undefined1 *)(uVar7 + 0x34) = 1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
LAB_00ace080: ;
  F_00acd9f0(this);
  LOCK();
  UNLOCK();
  *(undefined1 *)(param_1 + 1) = 0;
  uVar7 = param_1;
  if (*(int *)(param_1 + 0x184) != 0) {
    uVar7 = ((code *)*(gen_code32 *)(param_1 + 0x180))
                      (*(undefined4 *)(param_1 + 0x184),param_1 + 0x188,param_1,
                       *(undefined4 *)(param_1 + 400));
  }
  if (this != (undefined *)0x0) {
    F_0042c880((undefined *)((int)this + 0xa8));
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
    uVar7 = F_00406ad0(this);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar7;
}

/* ref: FUN_00ace100 */
uint F_00ace100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = ((code *)REFP(0xacd030));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ace140 */
uint F_00ace140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00ace160 */
byte F_00ace160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00ace190 */
uint F_00ace190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xacd140));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00ace1b0 */
uint F_00ace1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xacd160));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00ace1d0 */
uint F_00ace1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xacd180));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00ace1f0 */
unsigned int F_00ace1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00ace220 */
unsigned int F_00ace220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00ace240 */
uint F_00ace240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace240u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return param_1;
}

/* ref: FUN_00ace250 */
uint F_00ace250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00ace270 */
uint F_00ace270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00ace290 */
uint F_00ace290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) - *(int *)(param_1 + 4);
}

/* ref: FUN_00ace2b0 */
uint F_00ace2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace2b0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) + param_2;
  return in_ecx;
}

/* ref: FUN_00ace2c0 */
uint F_00ace2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00ace2e0 */
uint F_00ace2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00ace320 */
uint F_00ace320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0xc));
  puVar3 = param_2;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00ace360 */
uint F_00ace360(void)
{
  GEN_ENTER(0xace360u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4bc);
  if (REFG(int, 0x14bed64) == 1) {
    uVar1 = F_004308f0(REFG(void * PTR32, 0x137104c));
    F_0042e170(((undefined1 *)(gen_frame + 0x464)),uVar1);
    F_0042a3a0(((undefined1 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x464)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x464)));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined4, 0x14be758));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10ea2f4));
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    F_004f84e0(&(*(undefined4 *)(gen_frame + 0x224)),((undefined1 *)(gen_frame + 0x1c)));
    (*(undefined4 *)(gen_frame + 0x23c)) = REFG(undefined4, 0x14bedc0);
    (*(undefined4 *)(gen_frame + 0x224)) = REFG(undefined4, 0x14bed80);
    (*(undefined4 *)(gen_frame + 0x228)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xacccc0));
    uVar1 = F_004fc510(REFG(void * PTR32, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)));
    F_00429fa0();
  }
  else {
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xaccd00));
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xacd030));
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0xacd4b0));
    uVar1 = F_004fc7b0(REFG(void * PTR32, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)),&(*(gen_code32 *)(gen_frame + 0xc)),5);
  }
  LOCK();
  REFG(undefined4, 0x14bee60) = 1;
  UNLOCK();
  F_00c47745((*(uint *)(gen_frame + 0x4b8)) ^ (uint)(uint)(gen_frame + 0x4bc));
  return uVar1;
}

/* ref: FUN_00ace4a0 */
uint F_00ace4a0(void)
{
  GEN_ENTER(0xace4a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4bc);
  if (REFG(int, 0x14bed64) == 1) {
    uVar1 = F_004308f0(REFG(void * PTR32, 0x137104c));
    F_0042e170(((undefined1 *)(gen_frame + 0x464)),uVar1);
    F_0042a3a0(((undefined1 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x464)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x464)));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined4, 0x14be758));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10ea2f4));
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    F_004f84e0(&(*(undefined4 *)(gen_frame + 0x224)),((undefined1 *)(gen_frame + 0x1c)));
    (*(undefined4 *)(gen_frame + 0x23c)) = REFG(undefined4, 0x14bedc0);
    (*(undefined4 *)(gen_frame + 0x224)) = REFG(undefined4, 0x14bed80);
    (*(undefined4 *)(gen_frame + 0x228)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xacccc0));
    uVar1 = F_004fc400(REFG(void * PTR32, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)));
    F_00429fa0();
  }
  else {
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xaccd00));
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xacd030));
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0xacd6a0));
    uVar1 = F_004fc7b0(REFG(void * PTR32, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)),&(*(gen_code32 *)(gen_frame + 0xc)),5);
  }
  LOCK();
  REFG(undefined4, 0x14bee60) = 1;
  UNLOCK();
  F_00c47745((*(uint *)(gen_frame + 0x4b8)) ^ (uint)(uint)(gen_frame + 0x4bc));
  return uVar1;
}

/* ref: FUN_00ace5e0 */
uint F_00ace5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int in_ecx;
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  in_ecx = *(int *)(REFG(int, 0x137104c) + 0x10);
  F_0041f130((undefined *)(in_ecx + 0xb0),this);
  iVar5 = (int)this + 0x54;
  pvVar1 = (undefined *)F_00414010(in_ecx,0);
  F_0041f130(pvVar1,iVar5);
  iVar5 = (int)this + 0xa8;
  pvVar1 = (undefined *)F_00414010(in_ecx,1);
  F_0041f130(pvVar1,iVar5);
  uVar4 = 0;
  do {
    piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar2 == (int *)0x0) {
switchD_00ace646_default: ;
      piVar2 = (int *)0x0;
    }
    else {
      switch((unsigned int)(uintptr_t)(uVar4)) {
      case 0: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2)));
        break;
      case 1: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2)));
        break;
      case 2: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2)));
        break;
      case 3: ;
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2);
        if (uVar3 == 0) goto switchD_00ace646_default;
        piVar2 = (int *)(uVar3 + 0x850);
        break;
      case 4: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2)));
        break;
      case 5: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2)));
        break;
      case 6: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2)));
        break;
      default: ;
        goto switchD_00ace646_default;
      }
    }
    *(undefined4 *)((int)this + uVar4 * 4 + 0x108) = 0;
    *(undefined4 *)((int)this + uVar4 * 4 + 0x130) = 0;
    if ((char)piVar2[0xb] != '\0') {
      F_00447240(piVar2,uVar4);
      *(int *)((int)this + uVar4 * 4 + 0x108) = piVar2[5];
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      *(uint *)((int)this + uVar4 * 4 + 0x130) = uVar3 + 0x20;
    }
    if (*(char *)((int)piVar2 + 0x2d) != '\0') {
      *(undefined1 *)((int)piVar2 + 0x2d) = 0;
    }
    uVar4 = uVar4 + 1;
    if (6 < uVar4) {
      uVar4 = F_0042a990(this);
      *(uint *)((int)this + 0xfc) = uVar4;
      uVar4 = F_0042a990((int)this + 0x54);
      *(uint *)((int)this + 0x100) = uVar4;
      uVar4 = F_0042a990((int)this + 0xa8);
      *(uint *)((int)this + 0x104) = uVar4;
      uVar4 = F_0042a970(this);
      *(uint *)((int)this + 0x124) = uVar4 + 1;
      uVar4 = F_0042a970((int)this + 0x54);
      *(uint *)((int)this + 0x128) = uVar4 + 1;
      uVar4 = F_0042a970((int)this + 0xa8);
      *(uint *)((int)this + 300) = uVar4 + 1;
      *(undefined * PTR32 *)(param_1 + 0x14) = this;
      *(gen_code32 *)(param_1 + 0x10) = ((code *)REFP(0xacd140));
      *(gen_code32 *)(param_1 + 0x18) = ((code *)REFP(0xacdc60));
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      return param_1;
    }
  } while( true );
}

/* ref: FUN_00ace7a0 */
uint F_00ace7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
  *(int *)((int)this + 0x108) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x130) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
  *(int *)((int)this + 0x10c) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x134) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
  *(int *)((int)this + 0x110) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x138) = uVar4 + 0x20;
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
  F_0043c5e0((undefined *)(uVar4 + 0x850));
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
  if (uVar4 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(uVar4 + 0x850);
  }
  *(int *)((int)this + 0x114) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x13c) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
  *(int *)((int)this + 0x118) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x140) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
  *(int *)((int)this + 0x11c) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x144) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
  *(int *)((int)this + 0x120) = piVar1[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  *(uint *)((int)this + 0x148) = uVar4 + 0x20;
  *(undefined * PTR32 *)(param_1 + 0x14) = this;
  *(gen_code32 *)(param_1 + 0x10) = ((code *)REFP(0xacd140));
  *(gen_code32 *)(param_1 + 0x18) = ((code *)REFP(0xacdce0));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}

/* ref: FUN_00ace9c0 */
byte F_00ace9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00acea20 */
uint F_00acea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacea20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00acea50 */
uint F_00acea50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xacea50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  *param_7 = *param_7 + (param_6 - param_3);
  return param_6 - param_3;
}

/* ref: FUN_00acea70 */
unsigned int F_00acea70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacea70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00aceaa0 */
unsigned int F_00aceaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaceaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00acead0 */
uint F_00acead0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacead0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *param_1 = *(undefined4 *)this;
  param_1[1] = iVar1 + param_2;
  return (uint)param_1;
}

/* ref: FUN_00aceaf0 */
uint F_00aceaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaceaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  uVar2 = param_4;
  if (*(uint *)(param_3 + 8) <= param_4) {
    uVar2 = param_4 - *(uint *)(param_3 + 8);
  }
  uVar3 = param_2;
  if (*(uint *)(param_1 + 8) <= param_2) {
    uVar3 = param_2 - *(uint *)(param_1 + 8);
  }
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + uVar3 * 4)));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_3 + 4) + uVar2 * 4)));
  puVar5 = puVar6;
  puVar7 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar4 = 0x50; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar5 = puVar1;
  for (iVar4 = 0x50; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = ((undefined4 *)(gen_frame + 0xc));
  puVar5 = puVar1;
  for (iVar4 = 0x50; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00aceba0 */
uint F_00aceba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaceba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00acebc0 */
uint F_00acebc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacebc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00acec00 */
uint F_00acec00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacec00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00acec30 */
uint F_00acec30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacec30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  return param_6 - param_3;
}

/* ref: FUN_00acec40 */
unsigned int F_00acec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacec40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00acec70 */
unsigned int F_00acec70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacec70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00aceca0 */
unsigned int F_00aceca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaceca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  
  iVar2 = param_4 - param_2;
  (*(int *)(gen_frame + 0x184)) = iVar2;
  (*(int *)(gen_frame + 0x188)) = param_6 - param_2;
  iVar1 = (*(int *)(gen_frame + 0x188));
  while (iVar2 != 0) {
    (*(int *)(gen_frame + 0x188)) = iVar2;
    iVar2 = iVar1 % iVar2;
    iVar1 = (*(int *)(gen_frame + 0x188));
  }
  (*(int *)(gen_frame + 0x188)) = iVar1;
  if (iVar1 < (int)(param_6 - param_2)) {
    while (0 < (*(int *)(gen_frame + 0x188))) {
      uVar3 = (*(int *)(gen_frame + 0x188)) + param_2;
      uVar5 = (*(int *)(gen_frame + 0x184)) + uVar3;
      (*(uint *)(gen_frame + 0x168)) = param_2;
      (*(uint *)(gen_frame + 0x168)) = uVar3;
      (*(int *)(gen_frame + 0x17c)) = param_1;
      if (uVar5 == param_6) {
        (*(int *)(gen_frame + 0x174)) = param_1;
        uVar5 = param_2;
      }
      else {
        (*(uint *)(gen_frame + 0x158)) = uVar3;
        (*(int *)(gen_frame + 0x16c)) = param_1;
        (*(uint *)(gen_frame + 0x170)) = uVar5;
        (*(int *)(gen_frame + 0x174)) = param_1;
      }
      do {
        uVar6 = uVar5;
        uVar5 = uVar6;
        if (*(uint *)((*(int *)(gen_frame + 0x174)) + 8) <= uVar6) {
          uVar5 = uVar6 - *(uint *)((*(int *)(gen_frame + 0x174)) + 8);
        }
        if (*(uint *)((*(int *)(gen_frame + 0x17c)) + 8) <= uVar3) {
          uVar3 = uVar3 - *(uint *)((*(int *)(gen_frame + 0x17c)) + 8);
        }
        puVar10 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x174)) + 4) + uVar5 * 4)));
        puVar8 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x17c)) + 4) + uVar3 * 4)));
        puVar7 = puVar8;
        puVar9 = ((undefined4 *)(gen_frame + 0xc));
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar7 = puVar10;
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar8 = ((undefined4 *)(gen_frame + 0xc));
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        (*(int *)(gen_frame + 0x17c)) = (*(int *)(gen_frame + 0x174));
        (*(uint *)(gen_frame + 0x180)) = uVar6;
        if ((*(int *)(gen_frame + 0x184)) < (int)(param_6 - uVar6)) {
          (*(uint *)(gen_frame + 0x158)) = uVar6;
          (*(int *)(gen_frame + 0x15c)) = (*(int *)(gen_frame + 0x174));
          (*(int *)(gen_frame + 0x160)) = uVar6 + (*(int *)(gen_frame + 0x184));
          piVar4 = &(*(int *)(gen_frame + 0x15c));
        }
        else {
          (*(uint *)(gen_frame + 0x158)) = param_2;
          (*(int *)(gen_frame + 0x14c)) = param_1;
          (*(int *)(gen_frame + 0x150)) = (param_2 - (param_6 - uVar6)) + (*(int *)(gen_frame + 0x184));
          piVar4 = &(*(int *)(gen_frame + 0x14c));
        }
        (*(int *)(gen_frame + 0x174)) = *piVar4;
        uVar5 = piVar4[1];
        uVar3 = uVar6;
      } while (piVar4[1] != (*(uint *)(gen_frame + 0x168)));
      iVar2 = (*(int *)(gen_frame + 0x188)) + -1;
      (*(int *)(gen_frame + 0x188)) = iVar2;
    }
  }
  return 0;
}

/* ref: FUN_00acee10 */
unsigned int F_00acee10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacee10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00acee40 */
unsigned int F_00acee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacee40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00acee70 */
unsigned int F_00acee70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacee70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00aceca0(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  return 0;
}

/* ref: FUN_00aceef0 */
uint F_00aceef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaceef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x137);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x137);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00acf060 */
uint F_00acf060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xacf060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_4;
  if ((param_4 != param_7) && (param_7 != param_10)) {
    if ((param_8 == (int *)0x0) ||
       (((int *)*param_8 == (int *)0x0 ||
        (puVar1 = *(undefined4 * PTR32 *)*param_8, puVar1 == (undefined4 *)0x0)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
    }
    if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    F_00aceca0(uVar2,param_4,uVar3,param_7,uVar4,param_10,0,0);
    iVar5 = param_4 + (param_10 - param_7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar5;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00acf110 */
uint F_00acf110(unsigned int gen_a0)
{
  GEN_ENTER(0xacf110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x137);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00acf160 */
uint F_00acf160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = *(int *)((int)this + 0x10) + 1;
  if (*(uint *)((int)this + 8) <= uVar1) {
    uVar1 = F_00aceef0(this,1);
  }
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 8);
  }
  uVar3 = iVar2 - 1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar1 = F_004296a0(0x140,0,0x137);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar1;
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = param_1;
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *(uint *)((int)this + 0xc) = uVar3;
    return uVar3;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar3;
  return uVar1;
}

/* ref: FUN_00acf1f0 */
uint F_00acf1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00aceef0(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar1 = F_004296a0(0x140,0,0x137);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  puVar5 = *(undefined4 * PTR32 *)(uVar1 + uVar3 * 4);
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = param_1;
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar1;
}

/* ref: FUN_00acf260 */
uint F_00acf260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacf260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  if (*(uint *)((int)this + 0x10) >> 1 < uVar2) {
    F_00acf1f0(this,param_5);
    iVar5 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
    uVar10 = *(undefined4 *)this;
    piVar4 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar4 = (int *)*puVar1;
    }
    iVar3 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc) + -1;
    uVar9 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar9 = *(undefined4 *)*piVar4;
    }
    piVar4 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar4 = (int *)*puVar1;
    }
    iVar6 = (*(uint *)(gen_frame + 0x18)) + *(int *)((int)this + 0xc);
    uVar8 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar8 = *(undefined4 *)*piVar4;
    }
  }
  else {
    F_00acf160(this,param_5);
    piVar4 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar4 = (int *)*puVar1;
    }
    piVar7 = (int *)0x0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      piVar7 = *(int * PTR32 *)*piVar4;
    }
    piVar4 = (int *)0x0;
    if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
      piVar4 = *(int * PTR32 *)*piVar7;
    }
    iVar5 = *(int *)((int)this + 0xc) + 1 + (*(uint *)(gen_frame + 0x18));
    uVar10 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar10 = *(undefined4 *)*piVar4;
    }
    piVar4 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar4 = (int *)*puVar1;
    }
    iVar3 = *(int *)((int)this + 0xc) + 1;
    uVar9 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar9 = *(undefined4 *)*piVar4;
    }
    iVar6 = *(int *)((int)this + 0xc);
    uVar8 = *(undefined4 *)this;
  }
  F_00acf060(((undefined1 *)(gen_frame + 0xc)),uVar8,0,iVar6,uVar9,0,iVar3,uVar10,0,iVar5);
  iVar5 = *(int *)((int)this + 0xc);
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x18)) + iVar5;
  if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar4;
  }
  return (uint)param_1;
}

/* ref: FUN_00acf3f0 */
uint F_00acf3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00acf1f0((undefined *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00acf400 */
uint F_00acf400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  uVar2 = *(uint *)((int)this + 0x10);
  this_00 = (int *)((int)this + 4);
  piVar1 = (int *)*this_00;
  uVar5 = *(int *)((int)this + 0x14) + uVar2;
  (*(char *)(gen_frame + 0x1b)) = '\x01';
  ((int * PTR32 *)(gen_frame + 0xc))[0] = piVar1;
  while( true ) {
    if (uVar2 == uVar5) {
      if (*(uint *)((int)this + 0xc) <= *(int *)((int)this + 0x14) + 1U) {
        F_00aceef0(this_00,1);
      }
      uVar5 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0x14);
      uVar2 = *(uint *)((int)this + 0xc);
      if (uVar2 <= uVar5) {
        uVar5 = uVar5 - uVar2;
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar5 * 4))) == 0) {
        uVar2 = F_004296a0(0x140,0,0x137);
        *((uint *)GEN_TOP((*(int *)((int)this + 8) + uVar5 * 4))) = uVar2;
      }
      puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + uVar5 * 4)));
      if (puVar7 != (undefined4 *)0x0) {
        puVar6 = param_1;
        for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      return uVar2;
    }
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    uVar4 = uVar2;
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar4 = uVar2 - *(uint *)(iVar3 + 8);
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar4 * 4))) + 0xf4))) != '\0') break;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    uVar4 = uVar2;
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar4 = uVar2 - *(uint *)(iVar3 + 8);
    }
    if (*(char *)(param_1 + 0x4f) < *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar4 * 4))) + 0x13c))))
    goto LAB_00acf508;
    uVar2 = uVar2 + 1;
    (*(char *)(gen_frame + 0x1b)) = '\0';
  }
  if ((*(char *)(gen_frame + 0x1b)) != '\0') {
    uVar2 = F_00acf160(this_00,param_1);
    return uVar2;
  }
  uVar2 = uVar2 - 1;
LAB_00acf508: ;
  uVar8 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uVar8 = *(undefined4 *)*piVar1;
  }
  uVar2 = F_00acf260(this_00,((int * PTR32 *)(gen_frame + 0xc)),uVar8,0,uVar2,param_1);
  return uVar2;
}

/* ref: FUN_00acf570 */
byte F_00acf570(unsigned int gen_a0)
{
  GEN_ENTER(0xacf570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00acf5c0 */
uint F_00acf5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xacf5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042b790((undefined *)((int)this + 0xcc));
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00acf5e0 */
byte F_00acf5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (1 < param_1) {
    return 1;
  }
  if (*(int *)((int)this + param_1 * 4 + 8) == 0) {
    return 0;
  }
  return *(int *)((int)this + param_1 * 4 + 0x18) == 1;
}

/* ref: FUN_00acf630 */
uint F_00acf630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacf630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  char * pcVar1;
  uint uVar2;
  
  if (param_5 != 0) {
    pcVar1 = "https:";
    if ((char)param_6 == '\0') {
      pcVar1 = "http:";
    }
    uVar2 = F_00c472af(param_1,param_2,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s",
                       pcVar1,param_3,param_4,param_5);
    return uVar2;
  }
  pcVar1 = "https:";
  if ((char)param_6 == '\0') {
    pcVar1 = "http:";
  }
  uVar2 = F_00c472af(param_1,param_2,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s",pcVar1
                     ,param_3,param_4);
  return uVar2;
}

/* ref: FUN_00acf6a0 */
uint F_00acf6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xacf6a0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042d540(param_1,"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  return uVar1;
}

/* ref: FUN_00acf6c0 */
uint F_00acf6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,&REFG(undefined, 0x10ea85c),param_2);
  F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_0042d540(param_1,param_3);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,"</%s>",param_2);
  uVar1 = F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00acf740 */
uint F_00acf740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,&REFG(undefined, 0x10ea86c),param_2);
  F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,&REFG(undefined, 0x10ea874),param_3);
  F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,"</%s>",param_2);
  uVar1 = F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00acf7d0 */
uint F_00acf7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 1 << ((byte)param_1 & 0x1f);
  if ((char)param_2 == '\0') {
    *(uint *)((int)this + 200) = 1 << ((byte)param_1 + 8 & 0x1f) | *(uint *)((int)this + 200);
  }
  return (uint)this;
}

/* ref: FUN_00acf810 */
unsigned int F_00acf810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 < 2) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    }
    if ((char)param_2 != '\0') {
      *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 0;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 0;
      F_0042aca0(param_1 * 0x54 + 0x20 + (int)this);
    }
  }
  return 0;
}

/* ref: FUN_00acf860 */
uint F_00acf860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf860u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  uVar2 = F_00bc86e0(param_1,"return_code");
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  F_0042e430(param_2,*(undefined4 *)(uVar2 + 4));
  pbVar3 = *(byte * PTR32 *)(uVar2 + 4);
  pbVar5 = &REFG(undefined1, 0x10ea88c);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00acf8c0: ;
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00acf8c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00acf8c0;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00acf8c5: ;
  if (iVar4 == 0) {
    return 0;
  }
  uVar2 = F_00bc86e0(param_1,"return_status");
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  F_0042e430((undefined *)((int)param_2 + 0x54),*(undefined4 *)(uVar2 + 4));
  return 1;
}

/* ref: FUN_00acf910 */
byte F_00acf910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf910u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  bool bVar5;
  
  uVar2 = F_00bc86e0(param_1,"return_code");
  if (uVar2 == 0) {
    return 0;
  }
  pbVar3 = *(byte * PTR32 *)(uVar2 + 4);
  pbVar4 = &REFG(undefined1, 0x10ea930);
  while( true ) {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar5 == (uint)(bVar5 != 0);
}

/* ref: FUN_00acf980 */
byte F_00acf980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf980u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar3 = F_00bc86e0(param_1,"inquiry_template");
  if (uVar3 == 0) {
    return 0;
  }
  do {
    for (puVar2 = *(undefined4 * PTR32 *)(uVar3 + 8); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[3]) {
      pbVar4 = (byte *)*puVar2;
      pbVar6 = &REFG(undefined1, 0x10eab5c);
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00acf9d7: ;
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00acf9dc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00acf9d7;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00acf9dc: ;
      if (iVar5 == 0) {
        F_0042e430((undefined *)(param_2 + 0xa8),puVar2[1]);
      }
    }
    uVar3 = *(uint *)(uVar3 + 0xc);
    if (uVar3 == 0) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00acfa30 */
uint F_00acfa30(unsigned int gen_a0)
{
  GEN_ENTER(0xacfa30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  __time64_t _Var2;
  
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  uVar1 = F_0042d000(param_1,&REFG(undefined, 0x10eab80),(int)_Var2,(int)((ulonglong)_Var2 >> 0x20));
  return uVar1;
}

/* ref: FUN_00acfa60 */
uint F_00acfa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacfa60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00c4f4ca(((byte *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  *((byte *)GEN_TOP(((int)(*(short * PTR32 *)&gen_args[0]) + 3))) = ((byte *)(gen_frame + 0x4))[0xc];
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 1))) = ((byte *)(gen_frame + 0x4))[0x10] + 1;
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 3))) = ((byte *)(gen_frame + 0x4))[0];
  *(*(short * PTR32 *)&gen_args[0]) = (*(undefined2 *)((char *)((byte *)(gen_frame + 0x4)) + 20)) + 0x76c;
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 2))) = ((byte *)(gen_frame + 0x4))[8];
  *((byte *)GEN_TOP(((int)(*(short * PTR32 *)&gen_args[0]) + 5))) = ((byte *)(gen_frame + 0x4))[4];
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)((byte *)(gen_frame + 0x4))[4];
}

/* ref: FUN_00acfad0 */
uint F_00acfad0(unsigned int gen_a0)
{
  GEN_ENTER(0xacfad0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * in_ecx_00;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10eab8c));
  in_ecx_00 = in_ecx + 8;
  iVar1 = 1;
  do {
    F_0042b630(in_ecx_00);
    in_ecx_00 = in_ecx_00 + 0x15;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630(in_ecx + 0x33);
  F_0042b630(in_ecx + 0x48);
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  F_0042aca0(in_ecx + 0x33);
  F_0042aca0(in_ecx + 0x48);
  in_ecx[0x5d] = 0;
  in_ecx[0x5e] = 0;
  in_ecx[0x32] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00acfb50 */
byte F_00acfb50(unsigned int gen_a0)
{
  GEN_ENTER(0xacfb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = (int *)((int)this + 8);
  do {
    if (*piVar3 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0xc))((int *)*piVar3);
      if ((char)uVar2 != '\0') {
        piVar3 = *(int * PTR32 *)((int)this + uVar4 * 4 + 8);
        ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
        return 0;
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar4 < 2);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_0042aca0((int)this + 0x20);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  F_0042aca0((int)this + 0x74);
  piVar3 = *(int * PTR32 *)((int)this + 4);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 200) = 0;
  F_0042aca0((int)this + 0xcc);
  F_0042aca0((int)this + 0x120);
  return 1;
}

/* ref: FUN_00acfc20 */
byte F_00acfc20(unsigned int gen_a0)
{
  GEN_ENTER(0xacfc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_00;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  int * piVar9;
  bool bVar10;
  undefined * local_c;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xc))))(*(int * PTR32 *)((int)this + 4));
  uVar8 = 0;
  piVar9 = (int *)((int)this + 8);
  local_c = (undefined *)((int)this + 0x20);
  do {
    piVar2 = (int *)*piVar9;
    if ((piVar2 == (int *)0x0) || (uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), (char)uVar4 == '\0'))
    goto switchD_00acfc7f_default;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)*piVar9 + 0x10))((int *)*piVar9);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar4 = ((code *)*(gen_code32 *)(*(int *)*piVar9 + 0x18))((int *)*piVar9);
      if (uVar4 / 100 != 2) goto switchD_00acfc7f_caseD_1;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar9 + 0x14))((int *)*piVar9)));
      uVar4 = F_00bc86e0(this_00,"return_code");
      if (uVar4 == 0) {
        piVar9[4] = 4;
      }
      else {
        pbVar5 = *(byte * PTR32 *)(uVar4 + 4);
        pbVar7 = &REFG(undefined1, 0x10ea39c);
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00acfcf0: ;
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00acfcf5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00acfcf0;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00acfcf5: ;
        if (iVar6 == 0) {
          piVar9[4] = 2;
        }
        else {
          piVar9[4] = 3;
          uVar4 = F_00bc86e0(this_00,"return_status");
          F_0042e430(local_c,*(undefined4 *)(uVar4 + 4));
        }
      }
      if (piVar9[2] == 1) {
        uVar4 = F_00bc86e0(this_00,"sessionKey");
        if (uVar4 != 0) {
          F_0042e430((undefined *)((int)this + 0xcc),*(undefined4 *)(uVar4 + 4));
        }
        uVar4 = F_00bc86e0(this_00,"lastaccess");
        if (uVar4 != 0) {
          F_0042e430((undefined *)((int)this + 0x120),*(undefined4 *)(uVar4 + 4));
        }
      }
      if (piVar9[2] == 2) {
        F_00acf910(this_00,0);
        F_00acf810(this,uVar8,1);
      }
      goto switchD_00acfc7f_default;
    case 1: ;
    case 2: ;
switchD_00acfc7f_caseD_1: ;
      piVar9[4] = 4;
      break;
    case 3: ;
      piVar9[4] = 5;
      break;
    case 4: ;
      piVar9[4] = 6;
      break;
    default: ;
      goto switchD_00acfc7f_default;
    }
    if (((int)uVar8 < 2) && (puVar3 = (undefined4 *)*piVar9, puVar3 != (undefined4 *)0x0)) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *piVar9 = 0;
    }
switchD_00acfc7f_default: ;
    local_c = (undefined *)((int)local_c + 0x54);
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 1;
    if (1 < uVar8) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00acfdf0 */
uint F_00acfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xacfdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x137104c) == 0) {
    uVar2 = F_00c49908((int)this + 0x174,8,"en-us");
    return uVar2;
  }
  cVar1 = *(char *)(REFG(int, 0x137104c) + 0x1d);
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(uVar2 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))) {
  case (undefined *)0x0: ;
    pcVar3 = "ja";
    break;
  case (undefined *)0x1: ;
    if (cVar1 != '\x03') {
      uVar2 = F_00c49908((int)this + 0x174,8,"en-us");
      return uVar2;
    }
    uVar2 = F_00c49908((int)this + 0x174,8,"en-gb");
    return uVar2;
  case (undefined *)0x2: ;
    pcVar3 = "de";
    break;
  case (undefined *)0x3: ;
    pcVar3 = "fr";
    break;
  case (undefined *)0x4: ;
  case (undefined *)0x5: ;
    pcVar3 = "ch";
    break;
  default: ;
    pcVar3 = "en-us";
  }
  uVar2 = F_00c49908((int)this + 0x174,8,pcVar3);
  return uVar2;
}

/* ref: FUN_00acfed0 */
byte F_00acfed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacfed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined4 * puVar1;
  uint uVar2;
  undefined * PTR32 * ppuVar3;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  if (*(int *)((int)this + 4) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c) ^ (uint)(uint)(gen_frame + 0x11c));
    return 0;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea658);
    break;
  case 2: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea674);
    break;
  case 3: ;
    F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x10,"lang=%s",(int)this + 0x174);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ea694));
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s","http:",
               &REFG(undefined, 0x10ea6a4),"get_init",((undefined1 *)(gen_frame + 0x108)));
    goto LAB_00ad00b5;
  case 4: ;
    F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x10,"lang=%s",(int)this + 0x174);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ea6b4));
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s","http:",
               "information","get_headline_all",((undefined1 *)(gen_frame + 0x108)));
    goto LAB_00ad00b5;
  case 5: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea6d8);
    break;
  case 6: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea6f8);
    break;
  case 7: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea710);
    break;
  case 8: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea728);
    break;
  case 9: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea748);
    break;
  case 10: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea764);
    break;
  case 0xb: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea784);
    break;
  default: ;
    goto switchD_00acff24_default;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:");
LAB_00ad00b5: ;
  puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(uint *)((int)this + 200) =
         *(uint *)((int)this + 200) &
         ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                    (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x8)),ppuVar3,param_3,param_4);
  if (uVar2 != 0) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = param_2;
    *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
    F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
    return 1;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
  *(undefined4 *)((int)this + param_1 * 4 + 0x10) = param_2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
switchD_00acff24_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return 0;
}

/* ref: FUN_00ad0190 */
uint F_00ad0190(unsigned int gen_a0)
{
  GEN_ENTER(0xad0190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  int iVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10eab8c));
  bVar1 = F_00acfb50(this);
  while (bVar1 == 0) {
    F_00acfc20(this);
    bVar1 = F_00acfb50(this);
  }
  F_0042c880((undefined *)((int)this + 0x120));
  F_0042c880((undefined *)((int)this + 0xcc));
  this_00 = (undefined *)((int)this + 200);
  iVar2 = 1;
  do {
    this_00 = (undefined *)((int)this_00 + -0x54);
    uVar3 = F_0042c880(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return (uint)uVar3;
}

/* ref: FUN_00ad01f0 */
byte F_00ad01f0(unsigned int gen_a0)
{
  GEN_ENTER(0xad01f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    return 1;
  }
  F_00acfdf0(this);
  F_0042aca0((int)this + 0xcc);
  F_0042aca0((int)this + 0x120);
  piVar1 = (int *)F_00bc89d0();
  *(int * PTR32 *)((int)this + 4) = piVar1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  return (byte)uVar2;
}

/* ref: FUN_00ad0240 */
byte F_00ad0240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad0240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  if ((param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 || (*(int *)((int)this + param_1 * 4 + 0x18) != 1)
      ))) {
    F_0042e1e0(((undefined1 *)(gen_frame + 0xc4)),0x100);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    if ((REFG(int, 0x137104c) != 0) && (*(int *)(REFG(int, 0x137104c) + 0x25f4) != 0)) {
      bVar1 = F_0049bd60(&(*(undefined4 *)(gen_frame + 0x4)));
      if ((bVar1 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0xc)) != (undefined *)0x0)) {
        uVar2 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0xc)));
        if ((uVar2 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0x10)) != (undefined *)0x0)) {
          uVar2 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0x10)));
          if (uVar2 != 0) {
            F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
            F_0042b630(((undefined1 *)(gen_frame + 0x70)));
            F_0042d000(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10ea3c8),(*(undefined4 *)(gen_frame + 0x14)));
            F_0042d000(((undefined1 *)(gen_frame + 0x70)),&REFG(undefined, 0x10ea3cc),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
            F_0042d540(((undefined1 *)(gen_frame + 0xc4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
            F_0042d540(((undefined1 *)(gen_frame + 0xc4)),"<params>");
            uVar2 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0xc)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"gamesession",uVar2);
            uVar2 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x10)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"world",uVar2);
            uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x70)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"characterid",uVar2);
            uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x1c)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"sessionid",uVar2);
            F_0042d540(((undefined1 *)(gen_frame + 0xc4)),"</params>");
            F_0042c880(((undefined1 *)(gen_frame + 0x70)));
            F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
            uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0xc4)));
            uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xc4)));
            bVar1 = F_00acfed0(this,param_1,1,uVar3,uVar2);
            F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
            F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
            return bVar1;
          }
        }
      }
    }
    F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return 0;
}

/* ref: FUN_00ad0470 */
byte F_00ad0470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad0470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 || (*(int *)((int)this + param_1 * 4 + 0x18) != 1)
      ))) {
    uVar2 = F_0042b790((undefined *)((int)this + 0xcc));
    if (uVar2 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0;
    }
    F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
    uVar2 = F_0042a990((int)this + 0xcc);
    F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"sessionKey",uVar2);
    uVar2 = F_0042a990((int)this + 0x120);
    F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"lastaccess",uVar2);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
    F_0042aca0((int)this + 0xcc);
    F_0042aca0((int)this + 0x120);
    uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    bVar1 = F_00acfed0(this,param_1,2,uVar3,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_00ad05a0 */
uint F_00ad05a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad05a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (((int)param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 || (*(int *)((int)this + param_1 * 4 + 0x18) != 1)
      ))) {
    bVar1 = F_00acfed0(this,param_1,3,0,0);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_1 & 0xffffff00;
}

/* ref: FUN_00ad05e0 */
byte F_00ad05e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad05e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  if ((param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 || (*(int *)((int)this + param_1 * 4 + 0x18) != 1)
      ))) {
    F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea454));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x58)));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x40,"</%s>",&REFG(undefined, 0x10ea454));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x58)));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
    bVar1 = F_00acfed0(this,param_1,4,0,0);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c) ^ (uint)(uint)(gen_frame + 0x9c));
  return 0;
}

/* ref: FUN_00ad0700 */
byte F_00ad0700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad0700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  if ((1 < param_1) ||
     ((*(int *)((int)this + param_1 * 4 + 8) != 0 && (*(int *)((int)this + param_1 * 4 + 0x18) == 1)
      ))) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c) ^ (uint)(uint)(gen_frame + 0x19c));
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea474));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>",&REFG(undefined, 0x10ea474));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  uVar2 = F_0042a990(param_2);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),"queryString");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),uVar2);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>","queryString");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               (*(undefined * PTR32 (*)[1])REFP(0x10ea70c)),"get_list");
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea6f8),uVar3,uVar2);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 6;
    if (uVar2 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      bVar4 = 1;
      goto LAB_00ad0916;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  bVar4 = 0;
LAB_00ad0916: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return bVar4;
}

/* ref: FUN_00ad0940 */
byte F_00ad0940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad0940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  if ((1 < param_1) ||
     ((*(int *)((int)this + param_1 * 4 + 8) != 0 && (*(int *)((int)this + param_1 * 4 + 0x18) == 1)
      ))) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c) ^ (uint)(uint)(gen_frame + 0x19c));
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea4a0));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>",&REFG(undefined, 0x10ea4a0));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),(*(undefined * PTR32 (*)[1])REFP(0x10ea4a8)),param_2);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               (*(undefined * PTR32 (*)[1])REFP(0x10ea724)),"get_item");
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea710),uVar3,uVar2);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 7;
    if (uVar2 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      bVar4 = 1;
      goto LAB_00ad0b03;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  bVar4 = 0;
LAB_00ad0b03: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return bVar4;
}

/* ref: FUN_00ad0b30 */
byte F_00ad0b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad0b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  if ((1 < param_1) ||
     ((*(int *)((int)this + param_1 * 4 + 8) != 0 && (*(int *)((int)this + param_1 * 4 + 0x18) == 1)
      ))) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c) ^ (uint)(uint)(gen_frame + 0x15c));
    return 0;
  }
  uVar2 = F_0042b790((undefined *)((int)this + 0xcc));
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x100);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  uVar2 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"sessionKey",uVar2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10ea4d0),(int)this + 0x174);
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),"mainCategoryId",param_2);
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),"subCategoryId",param_3);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "inquiry","get_template");
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea728),uVar3,uVar2);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 8;
    if (uVar2 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      bVar4 = 1;
      goto LAB_00ad0d0a;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  bVar4 = 0;
LAB_00ad0d0a: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return bVar4;
}

/* ref: FUN_00ad0d30 */
byte F_00ad0d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad0d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  __time64_t _Var5;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  if ((1 < param_1) ||
     ((*(int *)((int)this + param_1 * 4 + 8) != 0 && (*(int *)((int)this + param_1 * 4 + 0x18) == 1)
      ))) {
LAB_00ad0d70: ;
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return 0;
  }
  uVar2 = F_0042b790((undefined *)((int)this + 0xcc));
  if (uVar2 == 0) goto LAB_00ad0d70;
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  _Var5 = F_00c4b7c2((__time64_t *)0x0);
  F_0042d000(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10eab80),(int)_Var5,(int)((ulonglong)_Var5 >> 0x20));
  F_0042e1e0(((undefined1 *)(gen_frame + 0x54)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<params>");
  uVar2 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"sessionKey",uVar2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea51c),(int)this + 0x174);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<head>");
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"ticketId",*param_2);
  uVar2 = F_0042a990(param_2 + 1);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"summary",uVar2);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"mainCategoryId",param_2[0x16]);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"subCategoryId",param_2[0x17]);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"status",param_2[0x18]);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"dateTime",uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</head>");
  uVar2 = F_0042a990(param_3);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea584),uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</params>");
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x54)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "inquiry","post_item");
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x10ea748),uVar3,uVar2);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 9;
    if (uVar2 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      bVar4 = 1;
      goto LAB_00ad0ff1;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  bVar4 = 0;
LAB_00ad0ff1: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return bVar4;
}

/* ref: FUN_00ad1020 */
byte F_00ad1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  __time64_t _Var5;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  if ((1 < param_1) ||
     ((*(int *)((int)this + param_1 * 4 + 8) != 0 && (*(int *)((int)this + param_1 * 4 + 0x18) == 1)
      ))) {
LAB_00ad1060: ;
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return 0;
  }
  uVar2 = F_0042b790((undefined *)((int)this + 0xcc));
  if (uVar2 == 0) goto LAB_00ad1060;
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  _Var5 = F_00c4b7c2((__time64_t *)0x0);
  F_0042d000(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10eab80),(int)_Var5,(int)((ulonglong)_Var5 >> 0x20));
  F_0042e1e0(((undefined1 *)(gen_frame + 0x54)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<params>");
  uVar2 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"sessionKey",uVar2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea5b8),(int)this + 0x174);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<head>");
  uVar2 = F_0042a990(param_2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"summary",uVar2);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"mainCategoryId",*(undefined4 *)(param_2 + 0x54));
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"subCategoryId",*(undefined4 *)(param_2 + 0x58));
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"dateTime",uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</head>");
  uVar2 = F_0042a990(param_3);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea60c),uVar2);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</params>");
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x54)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "report","post_item");
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x10ea784),uVar3,uVar2);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 0xb;
    if (uVar2 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      bVar4 = 1;
      goto LAB_00ad12b3;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  bVar4 = 0;
LAB_00ad12b3: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return bVar4;
}

/* ref: FUN_00ad12e0 */
byte F_00ad12e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad12e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  char * pcVar9;
  byte * pbVar10;
  bool bVar11;
  
  (*(uint *)(gen_frame + 0x1f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1fc);
  uVar4 = F_00bc86e0(param_1,"information");
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)(param_2 + 0xa8);
  if (*(int *)(param_2 + 0xa8) != iVar2) {
    uVar5 = F_00ad41d0(iVar2,iVar2,*(int *)(param_2 + 0xa8),(undefined *)(param_2 + 0xa8));
    F_00485c80(uVar5,*(undefined4 *)(param_2 + 0xac),param_2 + 0xb4,(*(undefined * PTR32 *)(gen_frame + 0x18)));
    *(uint *)(param_2 + 0xac) = uVar5;
  }
  iVar2 = *(int *)(uVar4 + 8);
  do {
    if (iVar2 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
      return 1;
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
    F_0042b630(((undefined1 *)(gen_frame + 0x70)));
    F_0042b630(((undefined1 *)(gen_frame + 0xd4)));
    F_0042b630(((undefined1 *)(gen_frame + 0x128)));
    F_0042b630(((undefined1 *)(gen_frame + 0x17c)));
    for (puVar3 = *(undefined4 * PTR32 *)(iVar2 + 8); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[3]) {
      pbVar8 = (byte *)*puVar3;
      pcVar9 = "title";
      pbVar6 = pbVar8;
      do {
        bVar1 = *pbVar6;
        bVar11 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_00ad13e0: ;
          iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00ad13e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar11 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_00ad13e0;
        pbVar6 = pbVar6 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00ad13e5: ;
      if (iVar7 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x1c)),puVar3[1]);
      }
      else {
        pcVar9 = "content";
        pbVar6 = pbVar8;
        do {
          bVar1 = *pbVar6;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1424: ;
            iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1429;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1424;
          pbVar6 = pbVar6 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00ad1429: ;
        if (iVar7 == 0) {
          F_0042e430(((undefined1 *)(gen_frame + 0x70)),puVar3[1]);
        }
        else {
          pcVar9 = "published";
          pbVar6 = pbVar8;
          do {
            bVar1 = *pbVar6;
            bVar11 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad1468: ;
              iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad146d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar11 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad1468;
            pbVar6 = pbVar6 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00ad146d: ;
          if (iVar7 == 0) {
            uVar4 = F_00c4c74c(puVar3[1]);
            (*(uint *)(gen_frame + 0x8)) = uVar4;
            (*(int *)(gen_frame + 0xc)) = (int)uVar4 >> 0x1f;
            F_00c4f4ca(((undefined1 *)(gen_frame + 0x1d4)),&(*(uint *)(gen_frame + 0x8)));
            (*(char *)(gen_frame + 0xc6)) = (*(char *)(gen_frame + 0x1e4)) + '\x01';
            (*(undefined1 *)(gen_frame + 0xc7)) = (*(undefined1 *)(gen_frame + 0x1e0));
            (*(short *)(gen_frame + 0xc4)) = (short)(*(undefined4 *)(gen_frame + 0x1e8)) + 0x76c;
            (*(undefined1 *)(gen_frame + 0xc8)) = (*(undefined1 *)(gen_frame + 0x1dc));
            (*(undefined1 *)(gen_frame + 0xc9)) = (*(undefined1 *)(gen_frame + 0x1d8));
            (*(undefined1 *)(gen_frame + 0xca)) = ((undefined1 *)(gen_frame + 0x1d4))[0];
          }
          else {
            pcVar9 = "updated";
            pbVar6 = pbVar8;
            do {
              bVar1 = *pbVar6;
              bVar11 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00ad1510: ;
                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1515;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar11 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_00ad1510;
              pbVar6 = pbVar6 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_00ad1515: ;
            if (iVar7 == 0) {
              uVar4 = F_00c4c74c(puVar3[1]);
              (*(uint *)(gen_frame + 0x10)) = uVar4;
              (*(int *)(gen_frame + 0x14)) = (int)uVar4 >> 0x1f;
              F_00c4f4ca(((undefined1 *)(gen_frame + 0x1d4)),&(*(uint *)(gen_frame + 0x10)));
              (*(char *)(gen_frame + 0xce)) = (*(char *)(gen_frame + 0x1e4)) + '\x01';
              (*(undefined1 *)(gen_frame + 0xcf)) = (*(undefined1 *)(gen_frame + 0x1e0));
              (*(short *)(gen_frame + 0xcc)) = (short)(*(undefined4 *)(gen_frame + 0x1e8)) + 0x76c;
              (*(undefined1 *)(gen_frame + 0xd0)) = (*(undefined1 *)(gen_frame + 0x1dc));
              (*(undefined1 *)(gen_frame + 0xd1)) = (*(undefined1 *)(gen_frame + 0x1d8));
              (*(undefined1 *)(gen_frame + 0xd2)) = ((undefined1 *)(gen_frame + 0x1d4))[0];
            }
            else {
              pbVar10 = &REFG(undefined1, 0x10eaa9c);
              pbVar6 = pbVar8;
              do {
                bVar1 = *pbVar6;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_00ad15b1: ;
                  iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad15b6;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_00ad15b1;
                pbVar6 = pbVar6 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar7 = 0;
LAB_00ad15b6: ;
              if (iVar7 == 0) {
                F_0042e430(((undefined1 *)(gen_frame + 0xd4)),puVar3[1]);
              }
              else {
                pbVar10 = &REFG(undefined1, 0x10eaaa4);
                pbVar6 = pbVar8;
                do {
                  bVar1 = *pbVar6;
                  bVar11 = bVar1 < *pbVar10;
                  if (bVar1 != *pbVar10) {
LAB_00ad15f5: ;
                    iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad15fa;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar11 = bVar1 < pbVar10[1];
                  if (bVar1 != pbVar10[1]) goto LAB_00ad15f5;
                  pbVar6 = pbVar6 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar1 != 0);
                iVar7 = 0;
LAB_00ad15fa: ;
                if (iVar7 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x17c)),puVar3[1]);
                }
                else {
                  pcVar9 = "lsb_parendid";
                  pbVar6 = pbVar8;
                  do {
                    bVar1 = *pbVar6;
                    bVar11 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_00ad1636: ;
                      iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_00ad163b;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar11 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_00ad1636;
                    pbVar6 = pbVar6 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_00ad163b: ;
                  if (iVar7 == 0) {
                    F_0042e430(((undefined1 *)(gen_frame + 0x128)),puVar3[1]);
                  }
                  else {
                    pcVar9 = "catId";
                    do {
                      bVar1 = *pbVar8;
                      bVar11 = bVar1 < (byte)*pcVar9;
                      if (bVar1 != *pcVar9) {
LAB_00ad1677: ;
                        iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                        goto LAB_00ad167c;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar8[1];
                      bVar11 = bVar1 < (byte)pcVar9[1];
                      if (bVar1 != pcVar9[1]) goto LAB_00ad1677;
                      pbVar8 = pbVar8 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar1 != 0);
                    iVar7 = 0;
LAB_00ad167c: ;
                    if (iVar7 == 0) {
                      uVar4 = F_00c4c74c(puVar3[1]);
                      (*(uint *)(gen_frame + 0x1d0)) = uVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    F_00ad6270((*(undefined * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x1c)));
    iVar2 = *(int *)(iVar2 + 0xc);
    F_0042c880(((undefined1 *)(gen_frame + 0x17c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x128)));
    F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x70)));
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
  } while( true );
}

/* ref: FUN_00ad1700 */
byte F_00ad1700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1700u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  char * pcVar8;
  undefined * PTR32 * ppuVar9;
  undefined * this;
  bool bVar10;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar4 = F_00bc86e0(param_1,"faq_itemList");
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  iVar2 = *(int *)(uVar4 + 8);
  this = (undefined *)(param_2 + 0xa8);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  F_00ad5370(this,((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac));
  do {
    if (iVar2 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 1;
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x10)));
    for (puVar3 = *(undefined4 * PTR32 *)(iVar2 + 8); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[3]) {
      pbVar7 = (byte *)*puVar3;
      pcVar8 = "title";
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_00ad17b0: ;
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00ad17b5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_00ad17b0;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00ad17b5: ;
      if (iVar6 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x10)),puVar3[1]);
      }
      else {
        ppuVar9 = (*(undefined * PTR32 (*)[1])REFP(0x10eaadc));
        do {
          bVar1 = *pbVar7;
          bVar10 = bVar1 < *(byte *)ppuVar9;
          if (bVar1 != *(byte *)ppuVar9) {
LAB_00ad17f0: ;
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00ad17f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar10 = bVar1 < *(byte *)((int)ppuVar9 + 1);
          if (bVar1 != *(byte *)((int)ppuVar9 + 1)) goto LAB_00ad17f0;
          pbVar7 = pbVar7 + 2;
          ppuVar9 = (undefined * PTR32 *)((int)ppuVar9 + 2);
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00ad17f5: ;
        if (iVar6 == 0) {
          uVar4 = F_00c4c74c(puVar3[1]);
          (*(uint *)(gen_frame + 0x64)) = uVar4;
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
    }
    F_00ad6340(this,((undefined1 *)(gen_frame + 0x10)));
    iVar2 = *(int *)(iVar2 + 0xc);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  } while( true );
}

/* ref: FUN_00ad1850 */
byte F_00ad1850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1850u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  undefined4 * puVar2;
  undefined * this;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  char * pcVar9;
  undefined * PTR32 * ppuVar10;
  bool bVar11;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  uVar3 = F_00bc86e0(param_1,"faq_item");
  if (uVar3 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return 0;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = *(undefined4 * PTR32 *)(uVar3 + 8);
  this = param_1;
  do {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) == (undefined4 *)0x0) {
      uVar3 = F_00bc86e0(this,"faq_rel");
      if (uVar3 == 0) {
        F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
        return 0;
      }
      iVar5 = *(int *)(uVar3 + 8);
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(param_2 + 0x164);
      F_00ad5370((undefined *)(param_2 + 0x164),&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),*(undefined4 *)(param_2 + 0x164),
                   *(undefined4 *)(param_2 + 0x168));
      do {
        if (iVar5 == 0) {
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
          return 1;
        }
        F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
        for (puVar2 = *(undefined4 * PTR32 *)(iVar5 + 8); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)puVar2[3]) {
          pbVar7 = (byte *)*puVar2;
          pcVar9 = "title";
          pbVar4 = pbVar7;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad1bc0: ;
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad1bc5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad1bc0;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00ad1bc5: ;
          if (iVar6 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x1c)),puVar2[1]);
          }
          else {
            ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x10eab44));
            do {
              bVar1 = *pbVar7;
              bVar11 = bVar1 < *(byte *)ppuVar10;
              if (bVar1 != *(byte *)ppuVar10) {
LAB_00ad1c00: ;
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1c05;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar11 = bVar1 < *(byte *)((int)ppuVar10 + 1);
              if (bVar1 != *(byte *)((int)ppuVar10 + 1)) goto LAB_00ad1c00;
              pbVar7 = pbVar7 + 2;
              ppuVar10 = (undefined * PTR32 *)((int)ppuVar10 + 2);
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00ad1c05: ;
            if (iVar6 == 0) {
              uVar3 = F_00c4c74c(puVar2[1]);
              (*(uint *)(gen_frame + 0x70)) = uVar3;
            }
          }
        }
        F_00ad6340((*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x1c)));
        iVar5 = *(int *)(iVar5 + 0xc);
        F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
      } while( true );
    }
    pbVar7 = (byte *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18));
    pbVar8 = &REFG(undefined1, 0x10eaaec);
    pbVar4 = pbVar7;
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00ad18d0: ;
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00ad18d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00ad18d0;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00ad18d5: ;
    if (iVar5 == 0) {
      for (puVar2 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[2]; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)puVar2[3]) {
        pbVar7 = (byte *)*puVar2;
        pcVar9 = "title";
        pbVar4 = pbVar7;
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1920: ;
            iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1925;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1920;
          pbVar4 = pbVar4 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00ad1925: ;
        if (iVar5 == 0) {
          F_0042e430((undefined *)(param_2 + 0xa8),puVar2[1]);
        }
        else {
          ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x10eaafc));
          pbVar4 = pbVar7;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < *(byte *)ppuVar10;
            if (bVar1 != *(byte *)ppuVar10) {
LAB_00ad1964: ;
              iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad1969;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < *(byte *)((int)ppuVar10 + 1);
            if (bVar1 != *(byte *)((int)ppuVar10 + 1)) goto LAB_00ad1964;
            pbVar4 = pbVar4 + 2;
            ppuVar10 = (undefined * PTR32 *)((int)ppuVar10 + 2);
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad1969: ;
          if (iVar5 == 0) {
            uVar3 = F_00c4c74c(puVar2[1]);
            *(uint *)(param_2 + 0xfc) = uVar3;
          }
          else {
            pcVar9 = "mainCategoryId";
            pbVar4 = pbVar7;
            do {
              bVar1 = *pbVar4;
              bVar11 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00ad19b0: ;
                iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad19b5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar11 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_00ad19b0;
              pbVar4 = pbVar4 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_00ad19b5: ;
            if (iVar5 == 0) {
              uVar3 = F_00c4c74c(puVar2[1]);
              *(uint *)(param_2 + 0x100) = uVar3;
            }
            else {
              pcVar9 = "subCategoryId";
              pbVar4 = pbVar7;
              do {
                bVar1 = *pbVar4;
                bVar11 = bVar1 < (byte)*pcVar9;
                if (bVar1 != *pcVar9) {
LAB_00ad19f7: ;
                  iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad19fc;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar11 = bVar1 < (byte)pcVar9[1];
                if (bVar1 != pcVar9[1]) goto LAB_00ad19f7;
                pbVar4 = pbVar4 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_00ad19fc: ;
              if (iVar5 == 0) {
                uVar3 = F_00c4c74c(puVar2[1]);
                *(uint *)(param_2 + 0x104) = uVar3;
              }
              else {
                pcVar9 = "dateTime";
                do {
                  bVar1 = *pbVar7;
                  bVar11 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_00ad1a40: ;
                    iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad1a45;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar11 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_00ad1a40;
                  pbVar7 = pbVar7 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_00ad1a45: ;
                if (iVar5 == 0) {
                  uVar3 = F_00c4c74c(puVar2[1]);
                  (*(uint *)(gen_frame + 0xc)) = uVar3;
                  (*(int *)(gen_frame + 0x10)) = (int)uVar3 >> 0x1f;
                  F_00c4f4ca(((undefined1 *)(gen_frame + 0x74)),&(*(uint *)(gen_frame + 0xc)));
                  *(char *)(param_2 + 0x10a) = (*(char *)(gen_frame + 0x84)) + '\x01';
                  *(undefined1 *)(param_2 + 0x10b) = (*(undefined1 *)(gen_frame + 0x80));
                  *(short *)(param_2 + 0x108) = (short)(*(undefined4 *)(gen_frame + 0x88)) + 0x76c;
                  *(undefined1 *)(param_2 + 0x10c) = (*(undefined1 *)(gen_frame + 0x7c));
                  *(undefined1 *)(param_2 + 0x10d) = (*(undefined1 *)(gen_frame + 0x78));
                  *(undefined1 *)(param_2 + 0x10e) = ((undefined1 *)(gen_frame + 0x74))[0];
                }
              }
            }
          }
        }
      }
    }
    else {
      pbVar4 = &REFG(undefined1, 0x10eab2c);
      do {
        bVar1 = *pbVar7;
        bVar11 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00ad1af0: ;
          iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00ad1af5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar11 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00ad1af0;
        pbVar7 = pbVar7 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00ad1af5: ;
      if (iVar5 == 0) {
        F_0042e430((undefined *)(param_2 + 0x110),(*(undefined4 * PTR32 *)(gen_frame + 0x18))[1]);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[3];
    this = (*(undefined * PTR32 *)(gen_frame + 0x14));
  } while( true );
}

/* ref: FUN_00ad1c60 */
byte F_00ad1c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  uint * this;
  int iVar9;
  bool bVar10;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar5 = F_00bc86e0(param_1,"report_templateList");
  if (uVar5 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  iVar9 = *(int *)(uVar5 + 8);
  this = (uint *)(param_2 + 0xa8);
  (*(int *)(gen_frame + 0x10)) = iVar9;
  F_00ad54e0(this,((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac));
  iVar7 = iVar9;
  do {
    if (iVar7 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return 1;
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    for (puVar2 = *(undefined4 * PTR32 *)(iVar9 + 8); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[3]) {
      pbVar6 = (byte *)*puVar2;
      pbVar8 = &REFG(undefined1, 0x10eab78);
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00ad1d10: ;
          iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00ad1d15;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00ad1d10;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00ad1d15: ;
      if (iVar7 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x14)),puVar2[1]);
      }
    }
    puVar3 = *(undefined1 * PTR32 *)(param_2 + 0xac);
    if ((((undefined1 *)(gen_frame + 0x14)) < puVar3) && (puVar4 = (undefined1 *)*this, puVar4 <= ((undefined1 *)(gen_frame + 0x14)))) {
      if (puVar3 == *(undefined1 * PTR32 *)(param_2 + 0xb0)) {
        F_00ad5ee0(this,1);
      }
      iVar9 = (*(int *)(gen_frame + 0x10));
      if (*(undefined * PTR32 *)(param_2 + 0xac) != (undefined *)0x0) {
        F_0042cbc0(*(undefined * PTR32 *)(param_2 + 0xac),
                     (((int)((undefined1 *)(gen_frame + 0x14)) - (int)puVar4) / 0x54) * 0x54 + *this);
        iVar9 = (*(int *)(gen_frame + 0x10));
      }
    }
    else {
      if (puVar3 == *(undefined1 * PTR32 *)(param_2 + 0xb0)) {
        F_00ad5ee0(this,1);
      }
      if (*(undefined * PTR32 *)(param_2 + 0xac) != (undefined *)0x0) {
        F_0042cbc0(*(undefined * PTR32 *)(param_2 + 0xac),((undefined1 *)(gen_frame + 0x14)));
      }
    }
    *(int *)(param_2 + 0xac) = *(int *)(param_2 + 0xac) + 0x54;
    iVar7 = *(int *)(iVar9 + 0xc);
    (*(int *)(gen_frame + 0x10)) = iVar7;
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    iVar9 = (*(int *)(gen_frame + 0x10));
  } while( true );
}

/* ref: FUN_00ad1dd0 */
byte F_00ad1dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  char * pcVar9;
  byte * pbVar10;
  undefined * this;
  bool bVar11;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  uVar5 = F_00bc86e0(param_1,"history");
  if (uVar5 != 0) {
    iVar2 = *(int *)(uVar5 + 8);
    iVar7 = *(int *)(param_2 + 0xac);
    this = (undefined *)(param_2 + 0xa8);
    (*(int *)(gen_frame + 0xc)) = iVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    if (*(int *)(param_2 + 0xa8) != iVar7) {
      uVar5 = F_00ad4990(iVar7,iVar7,*(int *)(param_2 + 0xa8),this);
      F_00485ce0(uVar5,*(undefined4 *)(param_2 + 0xac),param_2 + 0xb4,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      *(uint *)(param_2 + 0xac) = uVar5;
    }
    while (iVar2 != 0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x12c)));
      F_0042b630(((undefined1 *)(gen_frame + 0x184)));
      F_0042b630(((undefined1 *)(gen_frame + 0x1e0)));
      F_0042b630(((undefined1 *)(gen_frame + 0x240)));
      for (puVar3 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[3]) {
        pbVar8 = (byte *)*puVar3;
        pcVar9 = "status";
        pbVar6 = pbVar8;
        do {
          bVar1 = *pbVar6;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1ed0: ;
            iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1ed5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1ed0;
          pbVar6 = pbVar6 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00ad1ed5: ;
        if (iVar7 == 0) {
          uVar5 = F_00c4c74c(puVar3[1]);
          (*(uint *)(gen_frame + 0x124)) = uVar5;
        }
        else {
          pbVar10 = &REFG(undefined1, 0x10ea8b0);
          pbVar6 = pbVar8;
          do {
            bVar1 = *pbVar6;
            bVar11 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00ad1f17: ;
              iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad1f1c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar11 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00ad1f17;
            pbVar6 = pbVar6 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00ad1f1c: ;
          if (iVar7 == 0) {
            uVar5 = F_00c4c74c(puVar3[1]);
            (*(uint *)(gen_frame + 0x128)) = uVar5;
          }
          else {
            pbVar10 = &REFG(undefined1, 0x10ea8b8);
            pbVar6 = pbVar8;
            do {
              bVar1 = *pbVar6;
              bVar11 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_00ad1f60: ;
                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1f65;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar11 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_00ad1f60;
              pbVar6 = pbVar6 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_00ad1f65: ;
            if (iVar7 == 0) {
              F_0042b630(((undefined1 *)(gen_frame + 0x10)));
              F_0042b630(((undefined1 *)(gen_frame + 0x68)));
              F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
              for (puVar4 = (undefined4 *)puVar3[2]; puVar4 != (undefined4 *)0x0;
                  puVar4 = (undefined4 *)puVar4[3]) {
                pbVar8 = (byte *)*puVar4;
                pcVar9 = "messageId";
                pbVar6 = pbVar8;
                do {
                  bVar1 = *pbVar6;
                  bVar11 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_00ad1fd0: ;
                    iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad1fd5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar11 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_00ad1fd0;
                  pbVar6 = pbVar6 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar7 = 0;
LAB_00ad1fd5: ;
                if (iVar7 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x12c)),puVar4[1]);
                }
                else {
                  pcVar9 = "ticketId";
                  pbVar6 = pbVar8;
                  do {
                    bVar1 = *pbVar6;
                    bVar11 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_00ad2014: ;
                      iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_00ad2019;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar11 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_00ad2014;
                    pbVar6 = pbVar6 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_00ad2019: ;
                  if (iVar7 == 0) {
                    uVar5 = F_00c4c74c(puVar4[1]);
                    (*(uint *)(gen_frame + 0x180)) = uVar5;
                  }
                  else {
                    pcVar9 = "summary";
                    pbVar6 = pbVar8;
                    do {
                      bVar1 = *pbVar6;
                      bVar11 = bVar1 < (byte)*pcVar9;
                      if (bVar1 != *pcVar9) {
LAB_00ad2060: ;
                        iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                        goto LAB_00ad2065;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar6[1];
                      bVar11 = bVar1 < (byte)pcVar9[1];
                      if (bVar1 != pcVar9[1]) goto LAB_00ad2060;
                      pbVar6 = pbVar6 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar1 != 0);
                    iVar7 = 0;
LAB_00ad2065: ;
                    if (iVar7 == 0) {
                      F_0042e430(((undefined1 *)(gen_frame + 0x184)),puVar4[1]);
                    }
                    else {
                      pcVar9 = "mainCategoryId";
                      pbVar6 = pbVar8;
                      do {
                        bVar1 = *pbVar6;
                        bVar11 = bVar1 < (byte)*pcVar9;
                        if (bVar1 != *pcVar9) {
LAB_00ad20a4: ;
                          iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                          goto LAB_00ad20a9;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar6[1];
                        bVar11 = bVar1 < (byte)pcVar9[1];
                        if (bVar1 != pcVar9[1]) goto LAB_00ad20a4;
                        pbVar6 = pbVar6 + 2;
                        pcVar9 = pcVar9 + 2;
                      } while (bVar1 != 0);
                      iVar7 = 0;
LAB_00ad20a9: ;
                      if (iVar7 == 0) {
                        uVar5 = F_00c4c74c(puVar4[1]);
                        (*(uint *)(gen_frame + 0x1d8)) = uVar5;
                      }
                      else {
                        pcVar9 = "subCategoryId";
                        pbVar6 = pbVar8;
                        do {
                          bVar1 = *pbVar6;
                          bVar11 = bVar1 < (byte)*pcVar9;
                          if (bVar1 != *pcVar9) {
LAB_00ad20f0: ;
                            iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                            goto LAB_00ad20f5;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar6[1];
                          bVar11 = bVar1 < (byte)pcVar9[1];
                          if (bVar1 != pcVar9[1]) goto LAB_00ad20f0;
                          pbVar6 = pbVar6 + 2;
                          pcVar9 = pcVar9 + 2;
                        } while (bVar1 != 0);
                        iVar7 = 0;
LAB_00ad20f5: ;
                        if (iVar7 == 0) {
                          uVar5 = F_00c4c74c(puVar4[1]);
                          (*(uint *)(gen_frame + 0x1dc)) = uVar5;
                        }
                        else {
                          pbVar10 = &REFG(undefined1, 0x10ea900);
                          pbVar6 = pbVar8;
                          do {
                            bVar1 = *pbVar6;
                            bVar11 = bVar1 < *pbVar10;
                            if (bVar1 != *pbVar10) {
LAB_00ad2137: ;
                              iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                              goto LAB_00ad213c;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar6[1];
                            bVar11 = bVar1 < pbVar10[1];
                            if (bVar1 != pbVar10[1]) goto LAB_00ad2137;
                            pbVar6 = pbVar6 + 2;
                            pbVar10 = pbVar10 + 2;
                          } while (bVar1 != 0);
                          iVar7 = 0;
LAB_00ad213c: ;
                          if (iVar7 == 0) {
                            F_0042e430(((undefined1 *)(gen_frame + 0x1e0)),puVar4[1]);
                          }
                          else {
                            pcVar9 = "status";
                            pbVar6 = pbVar8;
                            do {
                              bVar1 = *pbVar6;
                              bVar11 = bVar1 < (byte)*pcVar9;
                              if (bVar1 != *pcVar9) {
LAB_00ad2180: ;
                                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                                goto LAB_00ad2185;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pbVar6[1];
                              bVar11 = bVar1 < (byte)pcVar9[1];
                              if (bVar1 != pcVar9[1]) goto LAB_00ad2180;
                              pbVar6 = pbVar6 + 2;
                              pcVar9 = pcVar9 + 2;
                            } while (bVar1 != 0);
                            iVar7 = 0;
LAB_00ad2185: ;
                            if (iVar7 == 0) {
                              uVar5 = F_00c4c74c(puVar4[1]);
                              (*(uint *)(gen_frame + 0x234)) = uVar5;
                            }
                            else {
                              pcVar9 = "dateTime";
                              do {
                                bVar1 = *pbVar8;
                                bVar11 = bVar1 < (byte)*pcVar9;
                                if (bVar1 != *pcVar9) {
LAB_00ad21c7: ;
                                  iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                                  goto LAB_00ad21cc;
                                }
                                if (bVar1 == 0) break;
                                bVar1 = pbVar8[1];
                                bVar11 = bVar1 < (byte)pcVar9[1];
                                if (bVar1 != pcVar9[1]) goto LAB_00ad21c7;
                                pbVar8 = pbVar8 + 2;
                                pcVar9 = pcVar9 + 2;
                              } while (bVar1 != 0);
                              iVar7 = 0;
LAB_00ad21cc: ;
                              if (iVar7 == 0) {
                                uVar5 = F_00c4c74c(puVar4[1]);
                                (*(int *)(gen_frame + 0x4)) = (int)uVar5 >> 0x1f;
                                (*(uint *)(gen_frame + 0x0)) = uVar5;
                                F_00c4f4ca(((undefined1 *)(gen_frame + 0x294)),&(*(uint *)(gen_frame + 0x0)));
                                (*(char *)(gen_frame + 0x23a)) = (*(char *)(gen_frame + 0x2a4)) + '\x01';
                                (*(undefined1 *)(gen_frame + 0x23b)) = (*(undefined1 *)(gen_frame + 0x2a0));
                                (*(short *)(gen_frame + 0x238)) = (short)(*(undefined4 *)(gen_frame + 0x2a8)) + 0x76c;
                                (*(undefined1 *)(gen_frame + 0x23c)) = (*(undefined1 *)(gen_frame + 0x29c));
                                (*(undefined1 *)(gen_frame + 0x23d)) = (*(undefined1 *)(gen_frame + 0x298));
                                (*(undefined1 *)(gen_frame + 0x23e)) = ((undefined1 *)(gen_frame + 0x294))[0];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
              F_0042c880(((undefined1 *)(gen_frame + 0x68)));
              F_0042c880(((undefined1 *)(gen_frame + 0x10)));
              this = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            else {
              pbVar6 = &REFG(undefined1, 0x10ea91c);
              do {
                bVar1 = *pbVar8;
                bVar11 = bVar1 < *pbVar6;
                if (bVar1 != *pbVar6) {
LAB_00ad2290: ;
                  iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad2295;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar11 = bVar1 < pbVar6[1];
                if (bVar1 != pbVar6[1]) goto LAB_00ad2290;
                pbVar8 = pbVar8 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar1 != 0);
              iVar7 = 0;
LAB_00ad2295: ;
              if (iVar7 == 0) {
                F_0042e430(((undefined1 *)(gen_frame + 0x240)),puVar3[1]);
              }
            }
          }
        }
      }
      F_00ad6660(this,&(*(uint *)(gen_frame + 0x124)));
      iVar2 = *(int *)((*(int *)(gen_frame + 0xc)) + 0xc);
      (*(int *)(gen_frame + 0xc)) = iVar2;
      F_0042c880(((undefined1 *)(gen_frame + 0x240)));
      F_0042c880(((undefined1 *)(gen_frame + 0x1e0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x184)));
      F_0042c880(((undefined1 *)(gen_frame + 0x12c)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return 1;
}

/* ref: FUN_00ad2320 */
byte F_00ad2320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad2320u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  int iVar5;
  byte * pbVar6;
  char * pcVar7;
  uint * puVar8;
  undefined * PTR32 * ppuVar9;
  byte * pbVar10;
  undefined4 * puVar11;
  uint uVar12;
  uint * puVar13;
  undefined4 * puVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0x2c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2cc);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(int *)(gen_frame + 0x20)) = param_2;
  uVar2 = F_00bc86e0(param_1,"information");
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
    return 0;
  }
  puVar11 = *(undefined4 * PTR32 *)(uVar2 + 8);
  if (puVar11 != (undefined4 *)0x0) {
    pbVar3 = (byte *)*puVar11;
    pbVar6 = &REFG(undefined1, 0x10ea940);
    do {
      bVar1 = *pbVar3;
      bVar15 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00ad23a0: ;
        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ad23a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar15 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00ad23a0;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00ad23a5: ;
    if (iVar4 != 0) goto LAB_00ad2d30;
    F_00ad5b00((undefined *)((*(int *)(gen_frame + 0x20)) + 0xa8));
    do {
      F_0042b630(((undefined1 *)(gen_frame + 0x28)));
      F_0042b630(((undefined1 *)(gen_frame + 0x7c)));
      F_0042b630(((undefined1 *)(gen_frame + 0xe0)));
      F_0042b630(((undefined1 *)(gen_frame + 0x134)));
      F_0042b630(((undefined1 *)(gen_frame + 0x188)));
      for (puVar14 = (undefined4 *)puVar11[2]; puVar14 != (undefined4 *)0x0;
          puVar14 = (undefined4 *)puVar14[3]) {
        pbVar3 = (byte *)*puVar14;
        pcVar7 = "title";
        pbVar6 = pbVar3;
        do {
          bVar1 = *pbVar6;
          bVar15 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_00ad2430: ;
            iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00ad2435;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar15 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_00ad2430;
          pbVar6 = pbVar6 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00ad2435: ;
        if (iVar4 == 0) {
          F_0042e430(((undefined1 *)(gen_frame + 0x28)),puVar14[1]);
        }
        else {
          pcVar7 = "content";
          pbVar6 = pbVar3;
          do {
            bVar1 = *pbVar6;
            bVar15 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00ad2474: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad2479;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar15 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00ad2474;
            pbVar6 = pbVar6 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad2479: ;
          if (iVar4 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x7c)),puVar14[1]);
          }
          else {
            pcVar7 = "published";
            pbVar6 = pbVar3;
            do {
              bVar1 = *pbVar6;
              bVar15 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_00ad24b8: ;
                iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_00ad24bd;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar15 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_00ad24b8;
              pbVar6 = pbVar6 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_00ad24bd: ;
            if (iVar4 == 0) {
              uVar2 = F_00c4c74c(puVar14[1]);
              (*(int *)(gen_frame + 0xc)) = (int)uVar2 >> 0x1f;
              (*(uint *)(gen_frame + 0x8)) = uVar2;
              F_00c4f4ca(((undefined1 *)(gen_frame + 0x2a4)),&(*(uint *)(gen_frame + 0x8)));
              (*(char *)(gen_frame + 0xd2)) = (*(char *)(gen_frame + 0x2b4)) + '\x01';
              (*(undefined1 *)(gen_frame + 0xd3)) = (*(undefined1 *)(gen_frame + 0x2b0));
              (*(short *)(gen_frame + 0xd0)) = (short)(*(undefined4 *)(gen_frame + 0x2b8)) + 0x76c;
              (*(undefined1 *)(gen_frame + 0xd4)) = (*(undefined1 *)(gen_frame + 0x2ac));
              (*(undefined1 *)(gen_frame + 0xd5)) = (*(undefined1 *)(gen_frame + 0x2a8));
              (*(undefined1 *)(gen_frame + 0xd6)) = ((undefined1 *)(gen_frame + 0x2a4))[0];
            }
            else {
              pcVar7 = "updated";
              pbVar6 = pbVar3;
              do {
                bVar1 = *pbVar6;
                bVar15 = bVar1 < (byte)*pcVar7;
                if (bVar1 != *pcVar7) {
LAB_00ad2558: ;
                  iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_00ad255d;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar15 = bVar1 < (byte)pcVar7[1];
                if (bVar1 != pcVar7[1]) goto LAB_00ad2558;
                pbVar6 = pbVar6 + 2;
                pcVar7 = pcVar7 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_00ad255d: ;
              if (iVar4 == 0) {
                uVar2 = F_00c4c74c(puVar14[1]);
                (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((int)uVar2 >> 0x1f);
                (*(uint *)(gen_frame + 0x18)) = uVar2;
                F_00c4f4ca(((undefined1 *)(gen_frame + 0x2a4)),&(*(uint *)(gen_frame + 0x18)));
                (*(char *)(gen_frame + 0xda)) = (*(char *)(gen_frame + 0x2b4)) + '\x01';
                (*(undefined1 *)(gen_frame + 0xdb)) = (*(undefined1 *)(gen_frame + 0x2b0));
                (*(short *)(gen_frame + 0xd8)) = (short)(*(undefined4 *)(gen_frame + 0x2b8)) + 0x76c;
                (*(undefined1 *)(gen_frame + 0xdc)) = (*(undefined1 *)(gen_frame + 0x2ac));
                (*(undefined1 *)(gen_frame + 0xdd)) = (*(undefined1 *)(gen_frame + 0x2a8));
                (*(undefined1 *)(gen_frame + 0xde)) = ((undefined1 *)(gen_frame + 0x2a4))[0];
              }
              else {
                pbVar10 = &REFG(undefined1, 0x10ea96c);
                pbVar6 = pbVar3;
                do {
                  bVar1 = *pbVar6;
                  bVar15 = bVar1 < *pbVar10;
                  if (bVar1 != *pbVar10) {
LAB_00ad25f8: ;
                    iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                    goto LAB_00ad25fd;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar15 = bVar1 < pbVar10[1];
                  if (bVar1 != pbVar10[1]) goto LAB_00ad25f8;
                  pbVar6 = pbVar6 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00ad25fd: ;
                if (iVar4 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0xe0)),puVar14[1]);
                }
                else {
                  pbVar10 = &REFG(undefined1, 0x10ea974);
                  pbVar6 = pbVar3;
                  do {
                    bVar1 = *pbVar6;
                    bVar15 = bVar1 < *pbVar10;
                    if (bVar1 != *pbVar10) {
LAB_00ad2640: ;
                      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                      goto LAB_00ad2645;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar15 = bVar1 < pbVar10[1];
                    if (bVar1 != pbVar10[1]) goto LAB_00ad2640;
                    pbVar6 = pbVar6 + 2;
                    pbVar10 = pbVar10 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00ad2645: ;
                  if (iVar4 == 0) {
                    F_0042e430(((undefined1 *)(gen_frame + 0x188)),puVar14[1]);
                  }
                  else {
                    pcVar7 = "lsb_parendid";
                    pbVar6 = pbVar3;
                    do {
                      bVar1 = *pbVar6;
                      bVar15 = bVar1 < (byte)*pcVar7;
                      if (bVar1 != *pcVar7) {
LAB_00ad2684: ;
                        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                        goto LAB_00ad2689;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar6[1];
                      bVar15 = bVar1 < (byte)pcVar7[1];
                      if (bVar1 != pcVar7[1]) goto LAB_00ad2684;
                      pbVar6 = pbVar6 + 2;
                      pcVar7 = pcVar7 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_00ad2689: ;
                    if (iVar4 == 0) {
                      F_0042e430(((undefined1 *)(gen_frame + 0x134)),puVar14[1]);
                    }
                    else {
                      pcVar7 = "catId";
                      do {
                        bVar1 = *pbVar3;
                        bVar15 = bVar1 < (byte)*pcVar7;
                        if (bVar1 != *pcVar7) {
LAB_00ad26c5: ;
                          iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                          goto LAB_00ad26ca;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar3[1];
                        bVar15 = bVar1 < (byte)pcVar7[1];
                        if (bVar1 != pcVar7[1]) goto LAB_00ad26c5;
                        pbVar3 = pbVar3 + 2;
                        pcVar7 = pcVar7 + 2;
                      } while (bVar1 != 0);
                      iVar4 = 0;
LAB_00ad26ca: ;
                      if (iVar4 == 0) {
                        uVar2 = F_00c4c74c(puVar14[1]);
                        (*(uint *)(gen_frame + 0x1dc)) = uVar2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      F_00ad6270((undefined *)((*(int *)(gen_frame + 0x20)) + 0xa8),((undefined1 *)(gen_frame + 0x28)));
      puVar11 = (undefined4 *)puVar11[3];
      F_0042c880(((undefined1 *)(gen_frame + 0x188)));
      F_0042c880(((undefined1 *)(gen_frame + 0x134)));
      F_0042c880(((undefined1 *)(gen_frame + 0xe0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x7c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x28)));
    } while (puVar11 != (undefined4 *)0x0);
  }
  uVar2 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"inquiry_categoryList");
  if (uVar2 != 0) {
    puVar11 = *(undefined4 * PTR32 *)(uVar2 + 8);
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
    if (puVar11 != (undefined4 *)0x0) {
      pbVar3 = (byte *)*puVar11;
      pcVar7 = "mainCategory";
      do {
        bVar1 = *pbVar3;
        bVar15 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_00ad2795: ;
          iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_00ad279a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar15 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_00ad2795;
        pbVar3 = pbVar3 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00ad279a: ;
      if (iVar4 != 0) goto LAB_00ad2d30;
      F_00ad6a20((undefined *)((*(int *)(gen_frame + 0x20)) + 0xb8));
      do {
        F_0042b630(((undefined1 *)(gen_frame + 0x23c)));
        (*(uint * PTR32 *)(gen_frame + 0x294)) = (uint *)0x0;
        (*(uint * PTR32 *)(gen_frame + 0x298)) = (uint *)0x0;
        (*(uint * PTR32 *)(gen_frame + 0x29c)) = (uint *)0x0;
        puVar14 = (undefined4 *)puVar11[2];
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar14;
        while ((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar14, puVar14 != (undefined4 *)0x0) {
          pbVar3 = (byte *)*puVar14;
          pcVar7 = "label";
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00ad2807: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad280c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00ad2807;
            pbVar3 = pbVar3 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad280c: ;
          if (iVar4 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x23c)),puVar14[1]);
          }
          pbVar3 = (byte *)*puVar14;
          pcVar7 = "mainCategoryId";
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00ad2846: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad284b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00ad2846;
            pbVar3 = pbVar3 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad284b: ;
          if (iVar4 == 0) {
            uVar2 = F_00c4c74c(puVar14[1]);
            (*(uint *)(gen_frame + 0x290)) = uVar2;
          }
          pbVar3 = (byte *)*puVar14;
          pcVar7 = "subCategoryList";
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00ad2885: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad288a;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00ad2885;
            pbVar3 = pbVar3 + 2;
            pcVar7 = pcVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad288a: ;
          if (iVar4 == 0) {
            F_0042b630(&(*(uint *)(gen_frame + 0x1e4)));
            iVar4 = puVar14[2];
            (*(int *)(gen_frame + 0x10)) = iVar4;
            F_00ad52a0(&(*(uint * PTR32 *)(gen_frame + 0x294)),&(*(int *)(gen_frame + 0xc)),(*(uint * PTR32 *)(gen_frame + 0x294)),(*(uint * PTR32 *)(gen_frame + 0x298)));
            puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
            while (iVar4 != 0) {
              for (puVar11 = *(undefined4 * PTR32 *)(iVar4 + 8); puVar11 != (undefined4 *)0x0;
                  puVar11 = (undefined4 *)puVar11[3]) {
                pbVar3 = (byte *)*puVar11;
                pcVar7 = "label";
                pbVar6 = pbVar3;
                do {
                  bVar1 = *pbVar6;
                  bVar15 = bVar1 < (byte)*pcVar7;
                  if (bVar1 != *pcVar7) {
LAB_00ad2910: ;
                    iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                    goto LAB_00ad2915;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar15 = bVar1 < (byte)pcVar7[1];
                  if (bVar1 != pcVar7[1]) goto LAB_00ad2910;
                  pbVar6 = pbVar6 + 2;
                  pcVar7 = pcVar7 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00ad2915: ;
                if (iVar4 == 0) {
                  F_0042e430(&(*(uint *)(gen_frame + 0x1e4)),puVar11[1]);
                }
                else {
                  pcVar7 = "subCategoryId";
                  do {
                    bVar1 = *pbVar3;
                    bVar15 = bVar1 < (byte)*pcVar7;
                    if (bVar1 != *pcVar7) {
LAB_00ad2951: ;
                      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                      goto LAB_00ad2956;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar3[1];
                    bVar15 = bVar1 < (byte)pcVar7[1];
                    if (bVar1 != pcVar7[1]) goto LAB_00ad2951;
                    pbVar3 = pbVar3 + 2;
                    pcVar7 = pcVar7 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00ad2956: ;
                  if (iVar4 == 0) {
                    uVar2 = F_00c4c74c(puVar11[1]);
                    (*(uint *)(gen_frame + 0x238)) = uVar2;
                  }
                }
                puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
              }
              if ((&(*(uint *)(gen_frame + 0x1e4)) < (*(uint * PTR32 *)(gen_frame + 0x298))) && (puVar13 <= &(*(uint *)(gen_frame + 0x1e4)))) {
                iVar4 = (int)&(*(uint *)(gen_frame + 0x1e4)) - (int)puVar13;
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) == (*(uint * PTR32 *)(gen_frame + 0x29c))) {
                  iVar5 = ((int)(*(uint * PTR32 *)(gen_frame + 0x298)) - (int)puVar13) / 0x58;
                  if (iVar5 == -1) {
LAB_00ad2b86: ;
                    
                    F_00c4579a("vector<T> too long");
                  }
                  uVar2 = ((int)(*(uint * PTR32 *)(gen_frame + 0x29c)) - (int)puVar13) / 0x58;
                  uVar12 = iVar5 + 1;
                  if (uVar2 < uVar12) {
                    if (-(uVar2 >> 1) - 1 < uVar2) {
                      uVar2 = 0;
                    }
                    else {
                      uVar2 = uVar2 + (uVar2 >> 1);
                    }
                    if (uVar2 < uVar12) {
                      uVar2 = uVar12;
                    }
                    F_00ad5560(&(*(uint * PTR32 *)(gen_frame + 0x294)),uVar2);
                    puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                  }
                }
                puVar8 = (*(uint * PTR32 *)(gen_frame + 0x298));
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) != (uint *)0x0) {
                  F_0042cbc0((*(uint * PTR32 *)(gen_frame + 0x298)),puVar13 + (iVar4 / 0x58) * 0x16);
                  puVar8[0x15] = (puVar13 + (iVar4 / 0x58) * 0x16)[0x15];
                  puVar8 = (*(uint * PTR32 *)(gen_frame + 0x298));
                  puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                }
              }
              else {
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) == (*(uint * PTR32 *)(gen_frame + 0x29c))) {
                  iVar4 = ((int)(*(uint * PTR32 *)(gen_frame + 0x298)) - (int)puVar13) / 0x58;
                  if (iVar4 == -1) goto LAB_00ad2b86;
                  uVar2 = ((int)(*(uint * PTR32 *)(gen_frame + 0x29c)) - (int)puVar13) / 0x58;
                  uVar12 = iVar4 + 1;
                  if (uVar2 < uVar12) {
                    if (-(uVar2 >> 1) - 1 < uVar2) {
                      uVar2 = 0;
                    }
                    else {
                      uVar2 = uVar2 + (uVar2 >> 1);
                    }
                    if (uVar2 < uVar12) {
                      uVar2 = uVar12;
                    }
                    F_00ad5560(&(*(uint * PTR32 *)(gen_frame + 0x294)),uVar2);
                    puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                  }
                }
                puVar8 = (*(uint * PTR32 *)(gen_frame + 0x298));
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) != (uint *)0x0) {
                  F_0042cbc0((*(uint * PTR32 *)(gen_frame + 0x298)),&(*(uint *)(gen_frame + 0x1e4)));
                  puVar8[0x15] = (*(uint *)(gen_frame + 0x238));
                  puVar8 = (*(uint * PTR32 *)(gen_frame + 0x298));
                  puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                }
              }
              (*(uint * PTR32 *)(gen_frame + 0x298)) = puVar8 + 0x16;
              iVar4 = *(int *)((*(int *)(gen_frame + 0x10)) + 0xc);
              (*(int *)(gen_frame + 0x10)) = iVar4;
              puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
              puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
            }
            F_0042c880(&(*(uint *)(gen_frame + 0x1e4)));
          }
          puVar14 = (undefined4 *)puVar14[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar14;
        }
        F_00ad6af0((undefined *)((*(int *)(gen_frame + 0x20)) + 0xb8),((undefined1 *)(gen_frame + 0x23c)));
        puVar11 = (undefined4 *)puVar11[3];
        (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
        F_0048a290(&(*(uint * PTR32 *)(gen_frame + 0x294)));
        F_0042c880(((undefined1 *)(gen_frame + 0x23c)));
      } while (puVar11 != (undefined4 *)0x0);
    }
    uVar2 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"inquiry_itemList");
    iVar4 = (*(int *)(gen_frame + 0x20));
    if (uVar2 != 0) {
      puVar11 = *(undefined4 * PTR32 *)(uVar2 + 8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
      if (puVar11 != (undefined4 *)0x0) {
        pbVar3 = (byte *)*puVar11;
        pbVar6 = &REFG(undefined1, 0x10eaa10);
        do {
          bVar1 = *pbVar3;
          bVar15 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00ad2b90: ;
            iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00ad2b95;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar15 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00ad2b90;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00ad2b95: ;
        if (iVar5 != 0) goto LAB_00ad2d30;
        F_00ad53f0((undefined *)((*(int *)(gen_frame + 0x20)) + 200),&(*(int *)(gen_frame + 0xc)),*(undefined4 *)((*(int *)(gen_frame + 0x20)) + 200),
                     *(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xcc));
        do {
          F_0042b630(&(*(uint *)(gen_frame + 0x1e4)));
          for (puVar11 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[2]; puVar11 != (undefined4 *)0x0;
              puVar11 = (undefined4 *)puVar11[3]) {
            pbVar3 = (byte *)*puVar11;
            pcVar7 = "title";
            pbVar6 = pbVar3;
            do {
              bVar1 = *pbVar6;
              bVar15 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_00ad2c10: ;
                iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_00ad2c15;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar15 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_00ad2c10;
              pbVar6 = pbVar6 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_00ad2c15: ;
            if (iVar5 == 0) {
              F_0042e430(&(*(uint *)(gen_frame + 0x1e4)),puVar11[1]);
            }
            else {
              ppuVar9 = (*(undefined * PTR32 (*)[1])REFP(0x10eaa20));
              do {
                bVar1 = *pbVar3;
                bVar15 = bVar1 < *(byte *)ppuVar9;
                if (bVar1 != *(byte *)ppuVar9) {
LAB_00ad2c51: ;
                  iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_00ad2c56;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar15 = bVar1 < *(byte *)((int)ppuVar9 + 1);
                if (bVar1 != *(byte *)((int)ppuVar9 + 1)) goto LAB_00ad2c51;
                pbVar3 = pbVar3 + 2;
                ppuVar9 = (undefined * PTR32 *)((int)ppuVar9 + 2);
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_00ad2c56: ;
              if (iVar5 == 0) {
                uVar2 = F_00c4c74c(puVar11[1]);
                (*(uint *)(gen_frame + 0x238)) = uVar2;
              }
            }
          }
          F_00ad63d0((undefined *)(iVar4 + 200),&(*(uint *)(gen_frame + 0x1e4)));
          puVar11 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
          F_0042c880(&(*(uint *)(gen_frame + 0x1e4)));
        } while (puVar11 != (undefined4 *)0x0);
      }
      uVar2 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"report_itemList");
      if (uVar2 != 0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8);
        F_00ad5470((undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8),&(*(int *)(gen_frame + 0xc)),*(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8),
                     *(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xdc));
        puVar11 = *(undefined4 * PTR32 *)(uVar2 + 8);
        (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
        if (puVar11 != (undefined4 *)0x0) {
          pbVar3 = (byte *)*puVar11;
          pbVar6 = &REFG(undefined1, 0x10eaa34);
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_00ad2d27: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad2d2c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00ad2d27;
            pbVar3 = pbVar3 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad2d2c: ;
          if (iVar4 != 0) goto LAB_00ad2d30;
          do {
            puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
            F_0042b630(((undefined1 *)(gen_frame + 0x1e8)));
            for (puVar11 = (undefined4 *)puVar11[2]; puVar11 != (undefined4 *)0x0;
                puVar11 = (undefined4 *)puVar11[3]) {
              pbVar3 = (byte *)*puVar11;
              pbVar10 = &REFG(undefined1, 0x10eaa3c);
              pbVar6 = pbVar3;
              do {
                bVar1 = *pbVar6;
                bVar15 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_00ad2da0: ;
                  iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_00ad2da5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar15 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_00ad2da0;
                pbVar6 = pbVar6 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_00ad2da5: ;
              if (iVar4 == 0) {
                for (puVar14 = (undefined4 *)puVar11[2]; puVar14 != (undefined4 *)0x0;
                    puVar14 = (undefined4 *)puVar14[3]) {
                  pbVar3 = (byte *)*puVar14;
                  pcVar7 = "mainCategoryId";
                  pbVar6 = pbVar3;
                  do {
                    bVar1 = *pbVar6;
                    bVar15 = bVar1 < (byte)*pcVar7;
                    if (bVar1 != *pcVar7) {
LAB_00ad2df0: ;
                      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                      goto LAB_00ad2df5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar6[1];
                    bVar15 = bVar1 < (byte)pcVar7[1];
                    if (bVar1 != pcVar7[1]) goto LAB_00ad2df0;
                    pbVar6 = pbVar6 + 2;
                    pcVar7 = pcVar7 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00ad2df5: ;
                  if (iVar4 == 0) {
                    uVar2 = F_00c4c74c(puVar14[1]);
                    (*(uint *)(gen_frame + 0x1e0)) = uVar2;
                  }
                  else {
                    pcVar7 = "subCategoryId";
                    do {
                      bVar1 = *pbVar3;
                      bVar15 = bVar1 < (byte)*pcVar7;
                      if (bVar1 != *pcVar7) {
LAB_00ad2e31: ;
                        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                        goto LAB_00ad2e36;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar3[1];
                      bVar15 = bVar1 < (byte)pcVar7[1];
                      if (bVar1 != pcVar7[1]) goto LAB_00ad2e31;
                      pbVar3 = pbVar3 + 2;
                      pcVar7 = pcVar7 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_00ad2e36: ;
                    if (iVar4 == 0) {
                      uVar2 = F_00c4c74c(puVar14[1]);
                      (*(uint *)(gen_frame + 0x1e4)) = uVar2;
                    }
                  }
                }
              }
              else {
                pbVar6 = &REFG(undefined1, 0x10eaa64);
                do {
                  bVar1 = *pbVar3;
                  bVar15 = bVar1 < *pbVar6;
                  if (bVar1 != *pbVar6) {
LAB_00ad2e80: ;
                    iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                    goto LAB_00ad2e85;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar3[1];
                  bVar15 = bVar1 < pbVar6[1];
                  if (bVar1 != pbVar6[1]) goto LAB_00ad2e80;
                  pbVar3 = pbVar3 + 2;
                  pbVar6 = pbVar6 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00ad2e85: ;
                if (iVar4 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x1e8)),puVar11[1]);
                }
              }
            }
            F_00ad6460((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x1e0)));
            puVar11 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[3];
            (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar11;
            F_0042c880(((undefined1 *)(gen_frame + 0x1e8)));
          } while (puVar11 != (undefined4 *)0x0);
        }
        F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
        return 1;
      }
    }
  }
LAB_00ad2d30: ;
  F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
  return 0;
}

/* ref: FUN_00ad2ef0 */
byte F_00ad2ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad2ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  byte local_5;
  
  local_5 = 0;
  if ((1 < param_1) ||
     ((piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 8), piVar1 != (int *)0x0 &&
      (*(int *)((int)this + param_1 * 4 + 0x18) == 1)))) {
    return 0;
  }
  if ((*(int *)((int)this + param_1 * 4 + 0x10) == 0) || (piVar1 == (int *)0x0)) {
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  if (*(char *)(uVar2 + 0x220) != '\0') {
    return 0;
  }
  uVar3 = F_00acf860(uVar2,param_2);
  if (0 < (int)uVar3) {
    F_00acf810(this,param_1,1);
    return 1;
  }
  if ((int)uVar3 < 0) {
    F_00acf810(this,param_1,1);
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + param_1 * 4 + 0x10))) {
  case 1: ;
    if (param_3 != 0x10c) {
      return 0;
    }
    local_5 = F_00ad1dd0(uVar2,param_2);
    break;
  default: ;
    goto switchD_00ad2fa2_caseD_2;
  case 3: ;
    if (param_3 != 0xe8) {
      return 0;
    }
    local_5 = F_00ad2320(uVar2,param_2);
    break;
  case 4: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    local_5 = F_00ad12e0(uVar2,param_2);
    break;
  case 5: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    return 0;
  case 6: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    local_5 = F_00ad1700(uVar2,param_2);
    break;
  case 7: ;
    if (param_3 != 0x174) {
      return 0;
    }
    local_5 = F_00ad1850(uVar2,param_2);
    break;
  case 8: ;
    if (param_3 != 0xfc) {
      return 0;
    }
    local_5 = F_00acf980(uVar2,param_2);
    break;
  case 9: ;
  case 0xb: ;
    if (param_3 == 0xa8) {
      return 0;
    }
    return 0;
  case 10: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    local_5 = F_00ad1c60(uVar2,param_2);
  }
  if (local_5 != 0) {
    F_00acf810(this,param_1,1);
  }
switchD_00ad2fa2_caseD_2: ;
  return local_5;
}

/* ref: FUN_00ad30e0 */
uint F_00ad30e0(unsigned int gen_a0)
{
  GEN_ENTER(0xad30e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  F_0042b630(in_ecx + 0xb8);
  F_0042b630(in_ecx + 0x10c);
  F_0042b630(in_ecx + 0x160);
  return in_ecx;
}

/* ref: FUN_00ad3120 */
uint F_00ad3120(unsigned int gen_a0)
{
  GEN_ENTER(0xad3120u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3130 */
uint F_00ad3130(unsigned int gen_a0)
{
  GEN_ENTER(0xad3130u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3140 */
uint F_00ad3140(unsigned int gen_a0)
{
  GEN_ENTER(0xad3140u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3150 */
uint F_00ad3150(unsigned int gen_a0)
{
  GEN_ENTER(0xad3150u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3160 */
uint F_00ad3160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3160u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad31a0 */
uint F_00ad31a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad31a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad31d0 */
uint F_00ad31d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad31d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3200 */
uint F_00ad3200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3200u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3230 */
uint F_00ad3230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3230u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3260 */
uint F_00ad3260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3260u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3290 */
uint F_00ad3290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3290u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad32c0 */
uint F_00ad32c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad32c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad34a0 */
uint F_00ad34a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad34a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1b8,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad34d0 */
uint F_00ad34d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad34d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3500 */
uint F_00ad3500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3500u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x170,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3530 */
uint F_00ad3530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x58,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3560 */
uint F_00ad3560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3560u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x58,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3590 */
uint F_00ad3590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x5c,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad35c0 */
uint F_00ad35c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad35c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x54,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3660 */
uint F_00ad3660(unsigned int gen_a0)
{
  GEN_ENTER(0xad3660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3670 */
uint F_00ad3670(unsigned int gen_a0)
{
  GEN_ENTER(0xad3670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3680 */
uint F_00ad3680(unsigned int gen_a0)
{
  GEN_ENTER(0xad3680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3690 */
uint F_00ad3690(unsigned int gen_a0)
{
  GEN_ENTER(0xad3690u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36a0 */
uint F_00ad36a0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36b0 */
uint F_00ad36b0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36c0 */
uint F_00ad36c0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36d0 */
uint F_00ad36d0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36e0 */
uint F_00ad36e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad36e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  F_0042cbc0((undefined *)((int)this + 0xb8),param_1 + 0xb8);
  F_0042cbc0((undefined *)((int)this + 0x10c),param_1 + 0x10c);
  F_0042cbc0((undefined *)((int)this + 0x160),param_1 + 0x160);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  return (uint)this;
}

/* ref: FUN_00ad3780 */
uint F_00ad3780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad37a0 */
uint F_00ad37a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad37a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad37c0 */
uint F_00ad37c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad37c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042cbc0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00ad37e0 */
uint F_00ad37e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad37e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  F_0042cbc0((undefined *)((int)this + 0x58),param_1 + 0x58);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  F_0042cbc0((undefined *)((int)this + 0xb4),param_1 + 0xb4);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  return (uint)this;
}

/* ref: FUN_00ad3860 */
uint F_00ad3860(unsigned int gen_a0)
{
  GEN_ENTER(0xad3860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3870 */
uint F_00ad3870(unsigned int gen_a0)
{
  GEN_ENTER(0xad3870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3880 */
uint F_00ad3880(unsigned int gen_a0)
{
  GEN_ENTER(0xad3880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3890 */
uint F_00ad3890(unsigned int gen_a0)
{
  GEN_ENTER(0xad3890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38a0 */
uint F_00ad38a0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38b0 */
uint F_00ad38b0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38c0 */
uint F_00ad38c0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38d0 */
uint F_00ad38d0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38e0 */
uint F_00ad38e0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38f0 */
uint F_00ad38f0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3900 */
uint F_00ad3900(unsigned int gen_a0)
{
  GEN_ENTER(0xad3900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3910 */
uint F_00ad3910(unsigned int gen_a0)
{
  GEN_ENTER(0xad3910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3920 */
uint F_00ad3920(unsigned int gen_a0)
{
  GEN_ENTER(0xad3920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3930 */
uint F_00ad3930(unsigned int gen_a0)
{
  GEN_ENTER(0xad3930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3940 */
uint F_00ad3940(unsigned int gen_a0)
{
  GEN_ENTER(0xad3940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3950 */
uint F_00ad3950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad3970 */
uint F_00ad3970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  F_0042ccf0((undefined *)((int)this + 0xb8),param_1 + 0xb8);
  F_0042ccf0((undefined *)((int)this + 0x10c),param_1 + 0x10c);
  F_0042ccf0((undefined *)((int)this + 0x160),param_1 + 0x160);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  return (uint)this;
}

/* ref: FUN_00ad3a10 */
uint F_00ad3a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad3a30 */
uint F_00ad3a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad3a50 */
uint F_00ad3a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_0042ccf0((undefined *)((int)this + 8),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00ad3a80 */
uint F_00ad3a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042ccf0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00ad3aa0 */
uint F_00ad3aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3aa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ab0 */
uint F_00ad3ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ab0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ac0 */
uint F_00ad3ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ac0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ad0 */
uint F_00ad3ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ad0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ae0 */
uint F_00ad3ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3af0 */
uint F_00ad3af0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3b00 */
uint F_00ad3b00(unsigned int gen_a0)
{
  GEN_ENTER(0xad3b00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3b10 */
uint F_00ad3b10(unsigned int gen_a0)
{
  GEN_ENTER(0xad3b10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ba0 */
uint F_00ad3ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3ba0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad3be0 */
uint F_00ad3be0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3be0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3bf0 */
uint F_00ad3bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3bf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c00 */
uint F_00ad3c00(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c10 */
uint F_00ad3c10(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c20 */
uint F_00ad3c20(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c30 */
uint F_00ad3c30(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c40 */
uint F_00ad3c40(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c50 */
uint F_00ad3c50(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3cc0 */
uint F_00ad3cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
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

/* ref: FUN_00ad3d10 */
uint F_00ad3d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1b8;
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

/* ref: FUN_00ad3d60 */
uint F_00ad3d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x68;
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

/* ref: FUN_00ad3db0 */
uint F_00ad3db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x170;
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

/* ref: FUN_00ad3e00 */
uint F_00ad3e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
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

/* ref: FUN_00ad3e50 */
uint F_00ad3e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
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

/* ref: FUN_00ad3ea0 */
uint F_00ad3ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x5c;
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

/* ref: FUN_00ad3ef0 */
uint F_00ad3ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
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

/* ref: FUN_00ad3f30 */
uint F_00ad3f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3f40 */
byte F_00ad3f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3f60 */
uint F_00ad3f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3f70 */
byte F_00ad3f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3f90 */
uint F_00ad3f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3fa0 */
byte F_00ad3fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3fc0 */
uint F_00ad3fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3fd0 */
byte F_00ad3fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3ff0 */
uint F_00ad3ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4000 */
byte F_00ad4000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4020 */
uint F_00ad4020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4030 */
byte F_00ad4030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4050 */
uint F_00ad4050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4060 */
byte F_00ad4060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4080 */
unsigned int F_00ad4080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4080u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00ad36e0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ad40a0 */
unsigned int F_00ad40a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad40a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad40d0 */
unsigned int F_00ad40d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad40d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4100 */
uint F_00ad4100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar1 = F_0042cbc0(param_1 + 2,param_2 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad4130 */
unsigned int F_00ad4130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4130u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ad4150 */
uint F_00ad4150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_00ad37e0((undefined *)((int)this + 8),param_1 + 2);
  F_0042cbc0((undefined *)((int)this + 0x11c),param_1 + 0x47);
  return (uint)this;
}

/* ref: FUN_00ad4190 */
uint F_00ad4190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4190u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad41d0 */
uint F_00ad41d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad41d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * this;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined4 *)((int)param_3 + 0xa8);
    this = param_3;
    puVar2 = param_1 + 0x2a;
    do {
      F_0042ccf0(this,puVar2 + -0x2a);
      F_0042ccf0(puVar3 + -0x15,puVar2 + -0x15);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      F_0042ccf0(puVar3 + 4,puVar2 + 4);
      F_0042ccf0(puVar3 + 0x19,puVar2 + 0x19);
      F_0042ccf0(puVar3 + 0x2e,puVar2 + 0x2e);
      puVar3[0x43] = puVar2[0x43];
      puVar1 = puVar2 + 0x44;
      this = (undefined *)((int)this + 0x1b8);
      puVar3 = puVar3 + 0x6e;
      puVar2 = puVar2 + 0x6e;
    } while (puVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4290 */
uint F_00ad4290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4290u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad42d0 */
uint F_00ad42d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad42d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4310 */
uint F_00ad4310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad4310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_1;
  puVar2 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    F_0042ccf0(puVar2 + 2,puVar1 + 2);
    puVar1 = puVar1 + 0x17;
    puVar2 = puVar2 + 0x17;
  } while (puVar1 != param_2);
  return (uint)puVar2;
}

/* ref: FUN_00ad4360 */
uint F_00ad4360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4360u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    iVar1 = iVar1 + 0x54;
    this = (undefined *)((int)this + 0x54);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad43a0 */
uint F_00ad43a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad43a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad43e0 */
unsigned int F_00ad43e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad43e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4410 */
unsigned int F_00ad4410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00ad36e0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad4430 */
unsigned int F_00ad4430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4460 */
unsigned int F_00ad4460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4490 */
uint F_00ad4490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad44c0 */
unsigned int F_00ad44c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad44c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad44f0 */
uint F_00ad44f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad44f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4500 */
uint F_00ad4500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4510 */
byte F_00ad4510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4530 */
uint F_00ad4530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4540 */
byte F_00ad4540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4560 */
uint F_00ad4560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4570 */
byte F_00ad4570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4590 */
uint F_00ad4590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad45a0 */
byte F_00ad45a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad45a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad45c0 */
uint F_00ad45c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad45c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad45d0 */
byte F_00ad45d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad45d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad45f0 */
uint F_00ad45f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad45f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4600 */
byte F_00ad4600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4620 */
uint F_00ad4620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4630 */
byte F_00ad4630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4650 */
unsigned int F_00ad4650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4680 */
unsigned int F_00ad4680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00ad36e0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad46a0 */
unsigned int F_00ad46a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad46a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00ad36e0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad46c0 */
unsigned int F_00ad46c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad46c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad46f0 */
unsigned int F_00ad46f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad46f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4720 */
unsigned int F_00ad4720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4750 */
unsigned int F_00ad4750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4780 */
uint F_00ad4780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad47b0 */
uint F_00ad47b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad47b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad47e0 */
unsigned int F_00ad47e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad47e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad4800 */
unsigned int F_00ad4800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad4820 */
uint F_00ad4820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4820u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4860 */
uint F_00ad4860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad41d0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4880 */
uint F_00ad4880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4880u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad48c0 */
uint F_00ad48c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad48c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4900 */
uint F_00ad4900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad4310(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4920 */
uint F_00ad4920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4920u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x54) {
    F_0042ccf0(this,iVar1);
    this = (undefined *)((int)this + 0x54);
  }
  return (uint)this;
}

/* ref: FUN_00ad4950 */
unsigned int F_00ad4950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    F_00ad37e0(param_1 + 2,param_2 + 2);
    F_0042cbc0(param_1 + 0x47,param_2 + 0x47);
  }
  return 0;
}

/* ref: FUN_00ad4990 */
uint F_00ad4990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad4990u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * this;
  
  if (param_1 != param_2) {
    this = param_3 + 0x18;
    puVar2 = param_3;
    iVar3 = param_1 + 0x60;
    do {
      *puVar2 = *(undefined4 *)(iVar3 + -0x60);
      this[-0x17] = *(undefined4 *)(iVar3 + -0x5c);
      F_0042ccf0(this + -0x16,iVar3 + -0x58);
      this[-1] = *(undefined4 *)(iVar3 + -4);
      F_0042ccf0(this,iVar3);
      this[0x15] = *(undefined4 *)(iVar3 + 0x54);
      this[0x16] = *(undefined4 *)(iVar3 + 0x58);
      F_0042ccf0(this + 0x17,iVar3 + 0x5c);
      this[0x2c] = *(undefined4 *)(iVar3 + 0xb0);
      this[0x2d] = *(undefined4 *)(iVar3 + 0xb4);
      this[0x2e] = *(undefined4 *)(iVar3 + 0xb8);
      F_0042ccf0(this + 0x2f,iVar3 + 0xbc);
      iVar1 = iVar3 + 0x110;
      puVar2 = puVar2 + 0x5c;
      this = this + 0x5c;
      iVar3 = iVar3 + 0x170;
    } while (iVar1 != param_2);
    return (uint)puVar2;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4a50 */
unsigned int F_00ad4a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00ad37e0(param_2 + 2,param_3 + 2);
    F_0042cbc0(param_2 + 0x47,param_3 + 0x47);
  }
  return 0;
}

/* ref: FUN_00ad4a90 */
uint F_00ad4a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4a90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4ad0 */
uint F_00ad4ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ad0190(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ad4b00 */
uint F_00ad4b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b10 */
uint F_00ad4b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4b20 */
uint F_00ad4b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b30 */
uint F_00ad4b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4b40 */
uint F_00ad4b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b50 */
uint F_00ad4b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4b60 */
uint F_00ad4b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b70 */
uint F_00ad4b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4b80 */
uint F_00ad4b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b90 */
uint F_00ad4b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4ba0 */
uint F_00ad4ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bb0 */
uint F_00ad4bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4bc0 */
uint F_00ad4bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bd0 */
uint F_00ad4bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4bd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4be0 */
uint F_00ad4be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bf0 */
uint F_00ad4bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4bf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ad4c00 */
uint F_00ad4c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c10 */
uint F_00ad4c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c20 */
uint F_00ad4c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c30 */
uint F_00ad4c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c40 */
uint F_00ad4c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c50 */
uint F_00ad4c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c60 */
uint F_00ad4c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c70 */
uint F_00ad4c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4c70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c80 */
unsigned int F_00ad4c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00ad37e0(param_2 + 2,param_3 + 2);
    F_0042cbc0(param_2 + 0x47,param_3 + 0x47);
  }
  return 0;
}

/* ref: FUN_00ad4cc0 */
unsigned int F_00ad4cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00ad37e0(param_2 + 2,param_3 + 2);
    F_0042cbc0(param_2 + 0x47,param_3 + 0x47);
  }
  return 0;
}

/* ref: FUN_00ad4d00 */
uint F_00ad4d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad4990(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4d20 */
uint F_00ad4d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4d20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4d60 */
uint F_00ad4d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4d60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_00ad36e0(this,iVar1);
    }
    iVar1 = iVar1 + 0x1b8;
    this = (undefined *)((int)this + 0x1b8);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4da0 */
uint F_00ad4da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4da0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4de0 */
uint F_00ad4de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4de0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    }
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4e20 */
uint F_00ad4e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xad4e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_1;
  puVar2 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      F_0042cbc0(puVar2 + 2,puVar1 + 2);
    }
    puVar1 = puVar1 + 0x17;
    puVar2 = puVar2 + 0x17;
  } while (puVar1 != param_2);
  return (uint)puVar2;
}

/* ref: FUN_00ad4e70 */
uint F_00ad4e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4e70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
    }
    iVar1 = iVar1 + 0x54;
    this = (undefined *)((int)this + 0x54);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4eb0 */
uint F_00ad4eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4ef0 */
uint F_00ad4ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4ef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4f30 */
uint F_00ad4f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4f30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00ad36e0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x1b8);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4f70 */
uint F_00ad4f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4f70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4fb0 */
uint F_00ad4fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4fb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4ff0 */
uint F_00ad4ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad4ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad4e20(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad5020 */
uint F_00ad5020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x54);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5060 */
uint F_00ad5060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xad5060u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 8;
    puVar3 = param_3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar2 + -8);
        puVar3[1] = *(undefined4 *)(iVar2 + -4);
        F_00ad37e0(puVar3 + 2,iVar2);
        F_0042cbc0(puVar3 + 0x47,iVar2 + 0x114);
      }
      iVar1 = iVar2 + 0x168;
      puVar3 = puVar3 + 0x5c;
      iVar2 = iVar2 + 0x170;
    } while (iVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad50c0 */
uint F_00ad50c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad50c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5100 */
uint F_00ad5100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5100u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5140 */
uint F_00ad5140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5140u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00ad36e0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x1b8);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5180 */
uint F_00ad5180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5180u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad51c0 */
uint F_00ad51c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad51c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5200 */
uint F_00ad5200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad5200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ad4e20(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00ad5230 */
uint F_00ad5230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad5230u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x54);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5270 */
uint F_00ad5270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad5270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad5060(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad52a0 */
uint F_00ad52a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad52a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x58)) {
      F_0042ccf0(this_00,pvVar2);
      *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)((int)pvVar2 + 0x54);
      this_00 = (undefined *)((int)this_00 + 0x58);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x58)) {
      F_0042c880(pvVar2);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad5320 */
uint F_00ad5320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad5320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00ad41d0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00485c80(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

