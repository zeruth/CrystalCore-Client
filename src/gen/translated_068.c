#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::UI2::Agent::AgentContentsTimer::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00778fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x778fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (this[0x454] != (undefined1)0x0) {
    this[0x454] = (undefined1)0x0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyRank::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00779010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x779010u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL(0x18, 8);
  byte bVar1;
  int * piVar2;
  int iVar3;
  undefined1 * this_00;
  
  (*(char *)(gen_frame + 0x13)) = '\0';
  if ((param_4 == 0) && (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    ((undefined4 *)(gen_frame + 0x0))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    bVar1 = F_00a68940(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),2,((undefined4 *)(gen_frame + 0x0)));
    this_00 = ((undefined1 *)(gen_frame + 0x10));
    iVar3 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  piVar2 = *(int * PTR32 *)(this + 0xc);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),param_2,param_3,0);
    if (((byte)(*(undefined4 *)(gen_frame + 0x8)) & 0xf) == 2) {
      (*(char *)(gen_frame + 0x13)) = (char)(*(uint *)(gen_frame + 0xc));
    }
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    if ((*(char *)(gen_frame + 0x13)) != '\0') goto LAB_007790e9;
  }
  if (((*param_2 & 0xf) == 0) || (-1 < *(int *)(param_2 + 4))) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
LAB_007790e9: ;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_00779150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00779150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x779150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined * pvVar5;
  int in_ecx;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_10;
  uint local_c;
  int local_8;
  
  F_005a2710(param_1 GEN_EDX_FWD,4);
  *((undefined4 *)GEN_TOP(((int)param_1 + 4))) = 1;
  sVar2 = *((short *)GEN_TOP(((int)this + 0x24)));
  F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_ARG,4);
  *((int *)GEN_TOP(((int)param_1 + 0x14))) = (int)sVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  local_8 = 0;
  uVar4 = F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x18))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1c))) = 0;
  if ((*((short *)GEN_TOP(((int)this + 0x24))) == 2) && (*((char *)GEN_TOP(((int)this + 0x26))) == '\0')) {
    return uVar4;
  }
  local_c = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    local_10 = 0;
    do {
      if (0x121f < local_10) break;
      in_ecx = *((int *)GEN_TOP(((int)this + 0x10))) + local_10;
      if ((((ushort)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x6e + local_10))) ==
            *((ushort *)GEN_TOP(((int)this + 0x24)))) &&
          (local_8 = local_8 + 1, *((char *)GEN_TOP((in_ecx + 0x6f))) == '\0')) &&
         ((*((ushort *)GEN_TOP(((int)this + 0x24))) != 2 || (*((int *)GEN_TOP((in_ecx + 0x60))) != 0)))) {
        uVar1 = *((undefined1 *)GEN_TOP((in_ecx + 0x70)));
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 0x18))) * 8 + 0x38)));
        F_005a2710(pvVar5 GEN_EDX_ARG,2);
        *((undefined1 *)GEN_TOP(((int)pvVar5 + 4))) = uVar1;
        uVar6 = *((undefined4 *)GEN_TOP((in_ecx + 0x54)));
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 0x18))) * 8 + 0x178)));
        F_005a2710(pvVar5 GEN_EDX_ARG,3);
        *((undefined4 *)GEN_TOP(((int)pvVar5 + 4))) = uVar6;
        uVar4 = F_0042a990(in_ecx GEN_EDX_ARG);
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 0x18))) * 8 + 0x2b8)));
        F_005a2710(pvVar5 GEN_EDX_ARG,6);
        *((uint *)GEN_TOP(((int)pvVar5 + 4))) = uVar4;
        uVar6 = *((undefined4 *)GEN_TOP((in_ecx + 0x58)));
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 0x18))) * 8 + 0x3f8)));
        F_005a2710(pvVar5 GEN_EDX_ARG,4);
        *((undefined4 *)GEN_TOP(((int)pvVar5 + 4))) = uVar6;
        uVar6 = *((undefined4 *)GEN_TOP((in_ecx + 0x5c)));
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 0x18))) * 8 + 0x538)));
        F_005a2710(pvVar5 GEN_EDX_ARG,4);
        *((undefined4 *)GEN_TOP(((int)pvVar5 + 4))) = uVar6;
        uVar6 = *((undefined4 *)GEN_TOP((in_ecx + 0x60)));
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 0x18))) * 8 + 0x678)));
        F_005a2710(pvVar5 GEN_EDX_ARG,4);
        *((undefined4 *)GEN_TOP(((int)pvVar5 + 4))) = uVar6;
        uVar3 = *((ushort *)GEN_TOP((in_ecx + 0x6c)));
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 0x18))) * 8 + 0x7b8)));
        F_005a2710(pvVar5 GEN_EDX_ARG,4);
        *((uint *)GEN_TOP(((int)pvVar5 + 4))) = (uint)uVar3;
        uVar6 = *((undefined4 *)GEN_TOP((in_ecx + 100)));
        pvVar5 = ((undefined *)GEN_TOP(((int)param_1 + *((int *)GEN_TOP(((int)this + 0x18))) * 8 + 0x8f8)));
        F_005a2710(pvVar5 GEN_EDX_ARG,4);
        *((undefined4 *)GEN_TOP(((int)pvVar5 + 4))) = uVar6;
        *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x74;
    } while (local_c < *((uint *)GEN_TOP(((int)this + 0x14))));
    if (local_8 != 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0x11ec;
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar4 = F_0043bd00(pvVar5 GEN_EDX_ARG,uVar6,uVar7,uVar8);
      F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x28))) GEN_EDX_ARG,6);
      *((uint *)GEN_TOP(((int)param_1 + 0x2c))) = uVar4;
      goto LAB_007793a7;
    }
  }
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0x11fc;
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar4 = F_0043bd00(pvVar5 GEN_EDX_ARG,uVar6,uVar7,uVar8);
  F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x28))) GEN_EDX_ARG,6);
  *((uint *)GEN_TOP(((int)param_1 + 0x2c))) = uVar4;
LAB_007793a7: ;
  uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  uVar4 = F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x18))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1c))) = uVar6;
  return uVar4;
}

/* ref: FUN_007793c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007793c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10), GEN_P(int param_12, unsigned int gen_a11))
{
  GEN_ENTER(0x7793c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  GEN_PIN(int param_12 = (int)gen_a11;)
  int iVar1;
  uint uVar2;
  undefined * this;
  
  if (param_2 < *((uint *)GEN_TOP((param_1 + 0x14)))) {
    this = ((undefined *)GEN_TOP((param_2 * 0x74 + *((int *)GEN_TOP((param_1 + 0x10))))));
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_5;
    *((undefined2 *)GEN_TOP(((int)this + 0x6c))) = (undefined2)param_9;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_4;
    *((undefined1 *)GEN_TOP(((int)this + 0x70))) = param_6;
    *((undefined4 *)GEN_TOP(((int)this + 100))) = param_3;
    *((undefined1 *)GEN_TOP(((int)this + 0x6f))) = param_8;
    *((char *)GEN_TOP(((int)this + 0x6e))) = param_7;
    F_0042e430(this GEN_EDX_FWD,param_11);
    iVar1 = param_12;
    if (param_7 != '\x02') {
      if (param_10 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_10 + 62000;
      }
    }
    *((uint *)GEN_TOP(((int)this + 0x68))) = param_2;
    *((int *)GEN_TOP(((int)this + 0x54))) = iVar1;
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,1,1,1);
    *((uint *)GEN_TOP(((int)this + 0x60))) = uVar2;
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,0,1,1);
    *((int *)GEN_TOP(((int)this + 0x60))) = *((int *)GEN_TOP(((int)this + 0x60))) + uVar2;
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyExchange::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007794b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7794b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x68, 8, 4);
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined1 AVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(char *)(gen_frame + 0xf)) = '\0';
  if ((*param_2 & 0xf) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 4);
  }
  if (iVar5 == 1) {
    if ((param_2[8] & 0xf) == 0) {
      AVar4 = (undefined1)0x0;
    }
    else {
      AVar4 = SUB41(*(undefined4 *)(param_2 + 0xc),0);
    }
    this[0x11] = AVar4;
  }
  else if (iVar5 == 2) {
    if ((param_2[8] & 0xf) == 0) {
      this[0x12] = (undefined1)0xff;
    }
    else {
      this[0x12] = (undefined1)((char)*(undefined4 *)(param_2 + 0xc) - 1);
    }
  }
  else if (iVar5 == 4) {
    AVar4 = this[0x10];
    ((undefined4 *)(gen_frame + 0x10))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    uVar1 = F_00a3ad50(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,AVar4);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x5c)) = uVar1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 8),10,((undefined4 *)(gen_frame + 0x10)));
    puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
    *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 1) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = 2;
    this_00 = &(*(uint *)(gen_frame + 0x60));
    iVar5 = 9;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    return (uint)puVar3;
  }
  piVar2 = *(int * PTR32 *)(this + 0xc);
  puVar3 = param_1;
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
LAB_007795e7: ;
    if (((*param_2 & 0xf) == 0) || (-1 < *(int *)(param_2 + 4))) {
      *(undefined1 *)(puVar3 + 1) = 0;
      goto LAB_00779600;
    }
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),param_2,param_3,0);
    if ((((byte *)(gen_frame + 0x0))[0] & 0xf) == 2) {
      (*(char *)(gen_frame + 0xf)) = (*(char *)(gen_frame + 0x4));
    }
    F_005a2670(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
    if ((*(char *)(gen_frame + 0xf)) == '\0') goto LAB_007795e7;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined1 *)(puVar3 + 1) = 1;
LAB_00779600: ;
  *puVar3 = 2;
  return (uint)puVar3;
}

/* ref: FUN_00779620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00779620(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x779620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  code * pcVar1;
  
  if ((param_2 != 0) && (param_3 != '\0')) {
    *(char *)(param_1 + 4) = param_3;
    pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 8)));
    param_1[3] = param_2;
    (*pcVar1)(param_1);
    return param_1[2];
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyExchange::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00779660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x779660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_00779690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00779690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x779690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),param_2,param_1);
  return uVar2;
}

/* ref: FUN_007796c0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_007796c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7796c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00434dd0((undefined1)param_1);
  return bVar1;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007796e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x7796e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  if (1 < param_4) {
    if ((*((byte *)GEN_TOP((param_3 + 8))) & 0xf) == 0) {
      *((undefined1 *)GEN_TOP((in_ecx + 0x1d))) = 0;
      *param_2 = 2;
      *(undefined1 *)(param_2 + 1) = 0;
      return (uint)param_2;
    }
    *((undefined1 *)GEN_TOP((in_ecx + 0x1d))) = *((undefined1 *)GEN_TOP((param_3 + 0xc)));
  }
  *param_2 = 2;
  *(undefined1 *)(param_2 + 1) = 0;
  return (uint)param_2;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_00779720(void)
{
  GEN_ENTER(0x779720u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00779730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x779730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0xc) = 0;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
  *(undefined4 *)(this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00779760 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00779760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x779760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0x1d))) == '\0';
}

/* ref: FUN_00779770 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00779770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x779770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 2;
  return;
}

/* ref: FUN_00779780 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00779780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x779780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 3;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x1c))) = 0;
  return 0;
}

/* ref: FUN_007797b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007797b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7797b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 1) {
    uVar1 = F_00ab3720(param_1);
  }
  else if (*((int *)GEN_TOP(((int)this + 0x10))) == 2) {
    uVar1 = F_00ab3750(param_1);
    return uVar1;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentPadMouseMode::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007797e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x7797e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_007797f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007797f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x7797f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  undefined * this;
  
  if ((*((int *)GEN_TOP((param_1 + 0xc))) != 0) && (param_2 < 0x10)) {
    this = ((undefined *)GEN_TOP((param_2 * 0xc4 + 8 + *((int *)GEN_TOP((param_1 + 0xc))))));
    F_0042e430(this GEN_EDX_FWD,param_3);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_4);
    *((undefined1 *)GEN_TOP(((int)this + 0xc0))) = param_5;
    *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = param_6;
    *((undefined4 *)GEN_TOP(((int)this + 0xac))) = param_7;
    *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = param_8;
    *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = param_9;
    *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = param_10;
    *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = param_11;
  }
  return;
}

/* ref: FUN_00779870 */
GEN_OWN GEN_FRAME uint F_00779870(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x779870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  bool bVar5;
  
  if (*((byte *)GEN_TOP((param_1 + 0xc1))) != *((byte *)GEN_TOP((param_2 + 0xc1)))) {
    return (uint)(*((byte *)GEN_TOP((param_1 + 0xc1))) < *((byte *)GEN_TOP((param_2 + 0xc1))));
  }
  pbVar2 = ((byte *)GEN_TOP(F_0042a990(param_2 GEN_EDX_ARG)));
  pbVar3 = ((byte *)GEN_TOP(F_0042a990(param_1 GEN_EDX_ARG)));
  while( true ) {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  iVar4 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 < 0);
}

/* ref: FUN_007798e0 */
GEN_OWN_GS GEN_FRAME uint F_007798e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7798e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this;
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10be32b),REFG(undefined4, 0x108cc50));
  uVar4 = 0;
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  uVar2 = 1;
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_ARG)));
  F_00459b00(this GEN_EDX_ARG,uVar2,puVar3,param_2,uVar4);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00779950 */
GEN_OWN GEN_FRAME uint F_00779950(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x779950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(int *)(&REFG(undefined, 0x10c046c) + param_1 * 0xc) - *(int *)(&REFG(undefined, 0x10c0468) + param_1 * 0xc);
}

/* ref: FUN_00779970 */
GEN_OWN GEN_FRAME uint F_00779970(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x779970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 < *(int *)(&REFG(undefined, 0x10c046c) + param_1 * 0xc) - *(int *)(&REFG(undefined, 0x10c0468) + param_1 * 0xc)) {
    return *(int *)(&REFG(undefined, 0x10c0468) + param_1 * 0xc) + param_2;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007799a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7799a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_007799d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007799d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7799d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0xc))) = 1;
  return;
}

/* ref: FUN_007799e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007799e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x7799e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  int * piVar1;
  uint uVar2;
  
  *((int *)GEN_TOP((param_1 + 8))) = param_5;
  F_0042e430(((undefined *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG,param_6);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4 + param_4 * 4))) != param_5) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4 + param_4 * 4))) = param_5;
    *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
  }
  uVar2 = F_0042a990(((undefined *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  if (uVar2 != *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + param_4 * 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + param_4 * 4))) = uVar2;
    *((undefined1 *)GEN_TOP((param_3 + 0x1d))) = 1;
  }
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0x28 + param_4 * 4)));
  if (param_7 != *piVar1) {
    *piVar1 = param_7;
    *((undefined1 *)GEN_TOP((param_3 + 0x1d))) = 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00779a50 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00779a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(uint * param_5, unsigned int gen_a4), GEN_P(byte * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x779a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a4;)
  GEN_PIN(byte * param_6 = (byte *)(uintptr_t)gen_a5;)
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  bVar1 = F_00a629f0((char)param_2);
  *param_4 = (uint)bVar1;
  F_00a68280(param_1 GEN_EDX_ARG,param_2,0);
  this = ((undefined *)GEN_TOP(F_00a629e0(&REFG(undefined, 0x14a9728) GEN_EDX_ARG,(char)*param_4)));
  bVar1 = F_00a63450(this GEN_EDX_ARG);
  uVar2 = F_00a629e0(&REFG(undefined, 0x14a9728) GEN_EDX_ARG,(char)*param_4);
  uVar2 = (uint)*((byte *)GEN_TOP((uVar2 + 0x30)));
  *param_5 = uVar2;
  if ((uVar2 < 5) && (uVar2 <= bVar1)) {
    bVar1 = *((byte *)GEN_TOP((param_3 + 0x40)));
    *param_6 = bVar1;
    if ((bVar1 == 0) || (3 < bVar1)) {
      *param_6 = 1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00779ae0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00779ae0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(byte * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x779ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(byte * param_5 = (byte *)(uintptr_t)gen_a4;)
  byte bVar1;
  uint uVar2;
  undefined * this;
  
  bVar1 = *((byte *)GEN_TOP((param_1 + 0x22a)));
  *param_2 = bVar1;
  if (bVar1 != 0) {
    uVar2 = F_00ab3960((uint)bVar1);
    if (uVar2 != 0) {
      *param_3 = (int)*((char *)GEN_TOP((uVar2 + 0x14)));
      F_00a68920(param_1 GEN_EDX_ARG,*param_2);
      this = ((undefined *)GEN_TOP(F_00a629e0(&REFG(undefined, 0x14a9728) GEN_EDX_ARG,(char)*param_3)));
      bVar1 = F_00a63450(this GEN_EDX_ARG);
      uVar2 = F_00a629e0(&REFG(undefined, 0x14a9728) GEN_EDX_ARG,(char)*param_3);
      uVar2 = (uint)*((byte *)GEN_TOP((uVar2 + 0x30)));
      *param_4 = uVar2;
      if ((uVar2 < 5) && (uVar2 <= bVar1)) {
        bVar1 = F_00434da0((uint)*param_2);
        *param_5 = bVar1;
        if ((bVar1 == 0) || (3 < bVar1)) {
          *param_5 = 1;
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00779b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00779b90(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(uint param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(byte param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x779b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(uint param_8 = (uint)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(byte param_10 = (byte)gen_a9;)
  uint * puVar1;
  byte bVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort * puVar10;
  undefined4 * puVar11;
  undefined * this;
  ushort * puVar12;
  int iVar13;
  undefined4 uVar14;
  int local_10;
  
  sVar3 = *((short *)GEN_TOP((param_4 + 0x1a)));
  uVar7 = F_00a629e0(&REFG(undefined, 0x14a9728) GEN_EDX_FWD,(byte)param_8);
  local_10 = 0;
  do {
    uVar8 = F_00ab3d80(param_6 * param_7 + 1 + param_9 * 10 + local_10);
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar6 = (ulonglong)(byte)((char)local_10 * '\x05');
      lVar4 = ((ulonglong)((uVar6 < 0x40) ? ((1L << uVar6)) : 0));
      lVar5 = lVar4 * 0x10;
      uVar9 = (uint)lVar5 & *((uint *)GEN_TOP((uVar7 + 0x28))) |
              (uint)((ulonglong)lVar5 >> 0x20) & *((uint *)GEN_TOP((uVar7 + 0x2c)));
      if (uVar9 == 0) {
        puVar12 = ((ushort *)GEN_TOP((uVar8 + 8)));
        param_8 = 0;
        do {
          puVar10 = ((ushort *)GEN_TOP(F_00ab3db0((uint)*puVar12)));
          if (((puVar10 != ((ushort *)GEN_TOP(0x0))) && (*puVar10 != 0)) &&
             (lVar5 = ((ulonglong)(((ulonglong)(byte)param_8 < 0x40) ? ((lVar4 << (ulonglong)(byte)param_8)) : 0)),
             ((uint)lVar5 & *((uint *)GEN_TOP((uVar7 + 0x28)))) == 0 &&
             ((uint)((ulonglong)lVar5 >> 0x20) & *((uint *)GEN_TOP((uVar7 + 0x2c)))) == 0)) {
            iVar13 = param_10 - 1;
            if (((puVar10[param_10 + 1] == 0) && (bVar2 = (byte)puVar10[8], bVar2 != 0)) &&
               (bVar2 < 4)) {
              iVar13 = bVar2 - 1;
            }
            if (((*((uint *)GEN_TOP((param_4 + 0x10))) == (uint)puVar10[iVar13 + 2]) ||
                (*((uint *)GEN_TOP((param_4 + 0x10))) == (uint)puVar10[iVar13 + 5])) &&
               (puVar10[iVar13 + 5] != 0)) {
              uVar8 = 0;
              uVar9 = F_00aafa90();
              if (uVar9 != 0) {
                do {
                  uVar9 = F_00ab1e70(uVar8);
                  if ((uVar9 != 0) && (*((uint *)GEN_TOP((uVar9 + 0x10))) == (uint)puVar10[iVar13 + 5])) {
                    if (*((short *)GEN_TOP((uVar9 + 0x1a))) != sVar3) goto LAB_00779e36;
                    break;
                  }
                  uVar8 = uVar8 + 1;
                  uVar9 = F_00aafa90();
                } while (uVar8 < uVar9);
              }
              if (-1 < iVar13) {
                uVar14 = 0;
                uVar9 = F_00404270();
                puVar11 = ((undefined4 *)GEN_TOP(F_00406bd0(0xc0,0,uVar9,uVar14)));
                if (puVar11 == ((undefined4 *)GEN_TOP(0x0))) {
                  puVar11 = ((undefined4 *)GEN_TOP(0x0));
                }
                else {
                  *puVar11 = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
                  puVar11[1] = 4;
                  puVar11[2] = 0;
                  F_0042b630(puVar11 + 3 GEN_EDX_ARG);
                  *puVar11 = (*(undefined * PTR32 (*)[1])REFP(0x10c43fc));
                  *(undefined1 *)(puVar11 + 0x18) = 0;
                  puVar11[0x19] = 0;
                  *(undefined2 *)(puVar11 + 0x1a) = 0;
                  *((undefined1 *)GEN_TOP(((int)puVar11 + 0x6a))) = 0;
                  F_0042b630(puVar11 + 0x1b GEN_EDX_ARG);
                }
                *(char *)(puVar11 + 0x18) = param_5;
                if (param_5 == '\0') {
                  puVar11[0x19] = param_6;
                }
                else {
                  *(undefined1 *)(puVar11 + 0x19) = (undefined1)param_6;
                }
                *(undefined1 *)(puVar11 + 0x1a) = (undefined1)param_9;
                *((char *)GEN_TOP(((int)puVar11 + 0x69))) = (char)local_10;
                *((byte *)GEN_TOP(((int)puVar11 + 0x6a))) = (byte)param_8;
                uVar9 = (uint)puVar10[iVar13 + 5];
                uVar8 = (uint)puVar10[iVar13 + 2];
                uVar14 = 0x750;
                this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)))
                ;
                uVar9 = F_00460c80(this GEN_EDX_ARG,uVar14,uVar8,uVar9);
                F_0042e430(puVar11 + 0x1b GEN_EDX_ARG,uVar9);
                uVar9 = F_0042a990(puVar11 + 0x1b GEN_EDX_ARG);
                uVar8 = F_00463610(0,(uint)*puVar10,2);
                iVar13 = *((int *)GEN_TOP((param_1 + 0x10)));
                puVar11[2] = 0xea63;
                F_0042e430(puVar11 + 3 GEN_EDX_ARG,uVar8);
                if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4 + iVar13 * 4))) != 0xea63) {
                  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + 4 + iVar13 * 4))) = 0xea63;
                  *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
                }
                uVar8 = F_0042a990(puVar11 + 3 GEN_EDX_ARG);
                if (uVar8 != *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + iVar13 * 4)))) {
                  *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + iVar13 * 4))) = uVar8;
                  *((undefined1 *)GEN_TOP((param_3 + 0x1d))) = 1;
                }
                puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x20))) + 0x28 + iVar13 * 4)));
                if (uVar9 != *puVar1) {
                  *puVar1 = uVar9;
                  *((undefined1 *)GEN_TOP((param_3 + 0x1d))) = 1;
                }
                *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x1c + *((int *)GEN_TOP((param_1 + 0x10))) * 4))) = puVar11;
                *((int *)GEN_TOP((param_1 + 0x10))) = *((int *)GEN_TOP((param_1 + 0x10))) + 1;
                uVar9 = param_1;
                if (9 < *((int *)GEN_TOP((param_1 + 0x10)))) break;
              }
            }
          }
LAB_00779e36: ;
          uVar9 = param_8 + 1;
          puVar12 = puVar12 + 1;
          param_8 = uVar9;
        } while ((int)uVar9 < 4);
        if (9 < *((int *)GEN_TOP((param_1 + 0x10)))) {
          return uVar9;
        }
      }
    }
    local_10 = local_10 + 1;
    if (9 < local_10) {
      return uVar9;
    }
  } while( true );
}

/* ref: Client::UI2::Agent::AgentCatch::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00779e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x779e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  
  if ((*param_2 & 0xf) == 0) {
LAB_00779e97: ;
    if ((param_2[8] & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    if (iVar1 != *(int *)(this + 8)) goto LAB_00779eb0;
  }
  else {
    if (*(int *)(param_2 + 4) == -2) goto LAB_00779eb0;
    if (*(int *)(param_2 + 4) == 0) goto LAB_00779e97;
  }
  *(undefined4 *)(this + 8) = 0;
LAB_00779eb0: ;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00779ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00779ed0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7), GEN_P(undefined1 param_9, unsigned int gen_a8), GEN_P(undefined1 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x779ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  GEN_PIN(undefined1 param_9 = (undefined1)gen_a8;)
  GEN_PIN(undefined1 param_10 = (undefined1)gen_a9;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_FWD);
  param_1[3] = param_2;
  *(undefined2 *)(param_1 + 4) = (undefined2)param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x12))) = param_4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x13))) = param_5;
  *(undefined1 *)(param_1 + 5) = param_6;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x15))) = param_7;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x16))) = param_8;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x17))) = param_9;
  *(undefined1 *)(param_1 + 6) = param_10;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCatch::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00779f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x779f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x60, 0, 4);
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 10;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 1;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 8),0xb,((undefined4 *)(gen_frame + 0x0)));
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    this_00 = &(*(uint *)(gen_frame + 0x58));
    iVar4 = 10;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCatch::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00779fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x779fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}

/* ref: Client::UI2::Agent::AgentCatch::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077a000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77a000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x1c) - 1;
  if (uVar1 == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentShop::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_0077a070(void)
{
  GEN_ENTER(0x77a070u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0077a0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077a0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77a0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  uint local_8;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x4a)));
  F_005a2710(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD,4);
  *((uint *)GEN_TOP((param_1 + 0xc))) = (uint)bVar1;
  iVar6 = 0;
  local_10 = 0;
  local_8 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    local_c = 0;
    puVar5 = ((undefined4 *)GEN_TOP((param_1 + 0x18c)));
    do {
      iVar7 = *((int *)GEN_TOP(((int)this + 0x20))) + local_c;
      if (*((byte *)GEN_TOP(((int)this + 0x49))) < 2) {
LAB_0077a11b: ;
        uVar3 = F_0042a990(iVar7 GEN_EDX_ARG);
        F_005a2710(puVar5 - 0x51 GEN_EDX_ARG,6);
        puVar5[-0x50] = uVar3;
        uVar2 = *((undefined4 *)GEN_TOP((iVar7 + 0xa8)));
        F_005a2710(puVar5 - 1 GEN_EDX_ARG,3);
        *puVar5 = uVar2;
        uVar3 = F_0042a990(iVar7 + 0x54 GEN_EDX_ARG);
        F_005a2710(puVar5 + 0x4f GEN_EDX_ARG,6);
        puVar5[0x50] = uVar3;
        uVar2 = *((undefined4 *)GEN_TOP((iVar7 + 0xb4)));
        F_005a2710(puVar5 + 0x9f GEN_EDX_ARG,4);
        puVar5[0xa0] = uVar2;
        uVar2 = *((undefined4 *)GEN_TOP((iVar7 + 0xb0)));
        F_005a2710(puVar5 + 0xef GEN_EDX_ARG,4);
        puVar5[0xf0] = uVar2;
        uVar2 = *((undefined4 *)GEN_TOP((iVar7 + 0xb8)));
        F_005a2710(puVar5 + 0x13f GEN_EDX_ARG,4);
        puVar5[0x140] = uVar2;
        F_005a2710(puVar5 + 0x1df GEN_EDX_ARG,4);
        puVar5[0x1e0] = local_8;
        uVar2 = *((undefined4 *)GEN_TOP((iVar7 + 0xc4)));
        F_005a2710(puVar5 + 399 GEN_EDX_ARG,4);
        local_10 = local_10 + 1;
        puVar5[400] = uVar2;
        puVar5 = puVar5 + 2;
      }
      else {
        iVar6 = local_10;
        if (*((byte *)GEN_TOP(((int)this + 0x49))) <= *((byte *)GEN_TOP(((int)this + 0x4a)))) break;
        if (*((char *)GEN_TOP((*((byte *)GEN_TOP(((int)this + 0x4a))) + 0x4b + (int)this))) == *((char *)GEN_TOP((iVar7 + 0xbc))))
        goto LAB_0077a11b;
      }
      local_c = local_c + 0xcc;
      local_8 = local_8 + 1;
      iVar6 = local_10;
    } while (local_8 < *((uint *)GEN_TOP(((int)this + 0x28))));
  }
  uVar3 = F_005a2710(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,4);
  *((int *)GEN_TOP((param_1 + 0x14))) = iVar6;
  if ((*((char *)GEN_TOP(((int)this + 0x48))) == '\x03') && (iVar6 != 0)) {
    pbVar4 = ((byte *)GEN_TOP((param_1 + 0x908)));
    local_8 = iVar6;
    do {
      if ((*pbVar4 & 0xf) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(pbVar4 + 4);
      }
      iVar7 = iVar6 * 0x198;
      puVar5 = ((undefined4 *)GEN_TOP((param_1 + 0xcd4 + iVar6 * 0x10)));
      local_c = 2;
      do {
        iVar6 = *((int *)GEN_TOP(((int)this + 0x24))) + iVar7;
        uVar3 = F_0042a990(iVar6 GEN_EDX_ARG);
        F_005a2710(puVar5 - 0xa1 GEN_EDX_ARG,6);
        puVar5[-0xa0] = uVar3;
        uVar2 = *((undefined4 *)GEN_TOP((iVar6 + 0xa8)));
        F_005a2710(puVar5 - 1 GEN_EDX_ARG,3);
        *puVar5 = uVar2;
        uVar3 = F_0042a990(iVar6 + 0x54 GEN_EDX_ARG);
        F_005a2710(puVar5 + 0x9f GEN_EDX_ARG,6);
        puVar5[0xa0] = uVar3;
        uVar2 = *((undefined4 *)GEN_TOP((iVar6 + 0xb4)));
        F_005a2710(puVar5 + 0x13f GEN_EDX_ARG,4);
        puVar5[0x140] = uVar2;
        uVar2 = *((undefined4 *)GEN_TOP((iVar6 + 0xb0)));
        F_005a2710(puVar5 + 0x1df GEN_EDX_ARG,4);
        puVar5[0x1e0] = uVar2;
        uVar2 = *((undefined4 *)GEN_TOP((iVar6 + 0xb8)));
        uVar3 = F_005a2710(puVar5 + 0x27f GEN_EDX_ARG,4);
        puVar5[0x280] = uVar2;
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 0xcc;
        local_c = local_c - 1;
      } while (local_c != 0);
      pbVar4 = pbVar4 + 8;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return uVar3;
}

/* ref: FUN_0077a340 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077a340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77a340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint local_c;
  int local_8;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x54))) = 0;
  local_c = 0;
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    local_8 = 0;
    do {
      pvVar3 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + local_8)));
      if (*((int *)GEN_TOP(((int)pvVar3 + 0xa8))) == -1) {
        uVar1 = F_00ab24a0(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0xb8))));
        if (uVar1 == 0) {
          *((undefined1 *)GEN_TOP(((int)this + 0x54))) = 1;
        }
        else {
          uVar2 = F_00ab6240(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0xb8))),0,uVar1);
          F_0042e430(pvVar3 GEN_EDX_ARG,uVar2);
          uVar2 = F_00ab25d0((uint)*((byte *)GEN_TOP((uVar1 + 0xa1))));
          if (uVar2 == 0) {
            uVar2 = F_00ab65a0(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0xb8))),uVar1);
          }
          else {
            uVar2 = *((uint *)GEN_TOP((uVar2 + 4)));
          }
          *((uint *)GEN_TOP(((int)pvVar3 + 0xa8))) = uVar2;
          *((undefined1 *)GEN_TOP(((int)pvVar3 + 200))) = *((undefined1 *)GEN_TOP((uVar1 + 0xbe)));
          uVar1 = *((uint *)GEN_TOP((uVar1 + 0x28)));
          *((uint *)GEN_TOP(((int)pvVar3 + 0xc0))) = uVar1;
          if (99 < uVar1) {
            *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc0))) = 99;
          }
          *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc4))) = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc0)));
        }
      }
      local_8 = local_8 + 0xcc;
      local_c = local_c + 1;
    } while (local_c < *((uint *)GEN_TOP(((int)this + 0x28))));
  }
  local_c = 0;
  if (*((int *)GEN_TOP(((int)this + 0x2c))) != 0) {
    local_8 = 0;
    do {
      pvVar3 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + local_8)));
      if (*((int *)GEN_TOP(((int)pvVar3 + 0xa8))) == -1) {
        uVar1 = F_00ab24a0(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0xb8))));
        if (uVar1 == 0) {
          *((undefined1 *)GEN_TOP(((int)this + 0x54))) = 1;
        }
        else {
          uVar2 = F_00ab6240(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0xb8))),0,uVar1);
          F_0042e430(pvVar3 GEN_EDX_ARG,uVar2);
          uVar1 = F_00ab65a0(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0xb8))),uVar1);
          *((uint *)GEN_TOP(((int)pvVar3 + 0xa8))) = uVar1;
        }
      }
      local_8 = local_8 + 0xcc;
      local_c = local_c + 1;
    } while (local_c < *((uint *)GEN_TOP(((int)this + 0x2c))));
  }
  return 0;
}

/* ref: FUN_0077a4b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077a4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77a4b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0x12;
  uVar3 = param_2;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar1 = F_00461bb0(this_00 GEN_EDX_ARG,uVar2,uVar3);
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x20))) GEN_EDX_ARG,6);
  *((uint *)GEN_TOP((param_1 + 0x24))) = uVar1;
  uVar1 = F_005a2710(((undefined *)GEN_TOP((param_1 + 0x28))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = param_2;
  if (*((char *)GEN_TOP(((int)this + 0x48))) == '\x02') {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
    F_005a2710(((undefined *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,3);
    *((undefined4 *)GEN_TOP((param_1 + 0x34))) = uVar3;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
    uVar1 = F_005a2710(((undefined *)GEN_TOP((param_1 + 0x38))) GEN_EDX_ARG,6);
    *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = uVar3;
  }
  return uVar1;
}

/* ref: FUN_0077a530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077a530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77a530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  return param_1;
}

/* ref: FUN_0077a550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077a550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x77a550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = param_1;
  if (*((uint *)GEN_TOP(((int)this + 0x30))) != param_1) {
    *((uint *)GEN_TOP(((int)this + 0x30))) = param_1;
    *((uint *)GEN_TOP(((int)this + 0x38))) = param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_3;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_0077a570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077a570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x77a570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar1 = param_1 + param_2 * 2;
  uVar2 = param_2;
  if (uVar1 < *((uint *)GEN_TOP(((int)this + 0x2c)))) {
    this_00 = ((undefined *)GEN_TOP((uVar1 * 0xcc + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xb8))) = param_3;
    *((uint *)GEN_TOP(((int)this_00 + 0xb0))) = param_4 & 0xffff;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xa8))) = 0xffffffff;
    uVar1 = F_00ab24a0(param_3);
    if (uVar1 == 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x54))) = 1;
    }
    else {
      uVar2 = F_00ab6240(*((undefined4 *)GEN_TOP(((int)this_00 + 0xb8))),0,uVar1);
      F_0042e430(this_00 GEN_EDX_ARG,uVar2);
      uVar1 = F_00ab65a0(param_3,uVar1);
      *((uint *)GEN_TOP(((int)this_00 + 0xa8))) = uVar1;
    }
    uVar1 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,1,1,1);
    *((uint *)GEN_TOP(((int)this_00 + 0xb4))) = uVar1;
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_3,0,1,1);
    *((int *)GEN_TOP(((int)this_00 + 0xb4))) = *((int *)GEN_TOP(((int)this_00 + 0xb4))) + uVar2;
  }
  return uVar2;
}

/* ref: FUN_0077a630 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077a630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77a630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + 0x28)))) {
    iVar6 = param_1 * 0xcc;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0xb8 + iVar6)));
    F_00a3ace0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD);
    uVar2 = F_00a40f50(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar1,0);
    uVar3 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar1,1,1,1);
    uVar4 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,uVar1,0,1,1);
    uVar5 = *((int *)GEN_TOP((iVar6 + 0xac + *((int *)GEN_TOP(((int)this + 0x20)))))) * *((int *)GEN_TOP(((int)this + 0x44)));
    if (((*((char *)GEN_TOP((iVar6 + 200 + *((int *)GEN_TOP(((int)this + 0x20)))))) == '\0') || (uVar3 + uVar4 == 0)) &&
       (uVar5 < *((uint *)GEN_TOP(((int)this + 0x3c))) || uVar5 - *((uint *)GEN_TOP(((int)this + 0x3c))) == 0)) {
      return uVar2 != 0;
    }
  }
  return 0;
}

/* ref: FUN_0077a6e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077a6e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77a6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  if (param_1 - 0x17U < 4) {
    uVar1 = F_00a3c240(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  uVar1 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,1,1,1);
  uVar2 = F_00a41080(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,param_1,0,1,1);
  return uVar2 + uVar1;
}

/* ref: FUN_0077a730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077a730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77a730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    this_00 = ((undefined *)GEN_TOP((param_2 + 0x20)));
    do {
      uVar2 = F_0042a990(*((int *)GEN_TOP(((int)this + 0x30))) + 4 + iVar3 GEN_EDX_FWD);
      F_005a2710(this_00 GEN_EDX_ARG,8);
      *((uint *)GEN_TOP(((int)this_00 + 4))) = uVar2;
      local_8 = local_8 + 1;
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)));
      iVar3 = iVar3 + 0x58;
    } while (local_8 < *((uint *)GEN_TOP(((int)this + 0x14))));
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  F_005a2710(((undefined *)GEN_TOP((param_2 + 0x18))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP((param_2 + 0x1c))) = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  F_005a2710(((undefined *)GEN_TOP((param_2 + 0x10))) GEN_EDX_ARG,4);
  *((undefined4 *)GEN_TOP((param_2 + 0x14))) = uVar1;
  return 4;
}

/* ref: FUN_0077a7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077a7c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77a7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (*((int *)GEN_TOP((in_ecx + 0x30))) != 0) {
    return *((int *)GEN_TOP((param_2 * 0x58 + *((int *)GEN_TOP((in_ecx + 0x30)))))) - 1;
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentBait::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077a7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x77a7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0x18, 8);
  byte bVar1;
  int iVar2;
  int * piVar3;
  undefined4 uVar4;
  
  (*(undefined1 *)(gen_frame + 0x13)) = 0;
  if ((*param_2 & 0xf) != 0) {
    iVar2 = *(int *)(param_2 + 4);
    if (iVar2 < -2) goto LAB_0077a86d;
    if (iVar2 < 0) {
      (*(undefined1 *)(gen_frame + 0x13)) = 1;
      *(undefined4 *)(this + 8) = 0;
      goto LAB_0077a86d;
    }
    if (iVar2 != 0) goto LAB_0077a86d;
  }
  bVar1 = param_2[0x18];
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  if ((bVar1 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  piVar3 = *(int * PTR32 *)(this + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar4;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x8)),1,0);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
LAB_0077a86d: ;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = (*(undefined1 *)(gen_frame + 0x13));
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentBait::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_0077a890(void)
{
  GEN_ENTER(0x77a890u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0077a8a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077a8a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77a8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: Client::UI2::Agent::AgentBlacklist::vf11 */
GEN_OWN GEN_NOFRAME byte F_0077a8b0(void)
{
  GEN_ENTER(0x77a8b0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_004351d0();
  return bVar1 == 0;
}

/* ref: FUN_0077a8c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077a8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77a8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 100))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 100))),0);
    *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentDetail::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077a8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x77a8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if (((*(int *)(this + 100) == 0) && (param_2 != ((byte *)GEN_TOP(0x0)))) &&
     (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    this[0x68] = (undefined1)0x1;
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 100) = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentDetail::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077a930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77a930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 100) = 0;
  return;
}

/* ref: FUN_0077a970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077a970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77a970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 == *((uint *)GEN_TOP(((int)this + 100)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_0077a990 */
GEN_OWN GEN_FRAME uint F_0077a990(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77a990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if ((param_1 & 0x1000) != 0) {
    return 1;
  }
  if ((param_1 & 0x80000) != 0) {
    return 2;
  }
  if ((param_1 & 0x400000) != 0) {
    return 3;
  }
  if ((param_1 & 0x800000) != 0) {
    return 4;
  }
  return 0;
}

/* ref: FUN_0077a9f0 */
GEN_OWN GEN_FRAME ulonglong F_0077a9f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77a9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  undefined4 uVar1;
  
  if (param_1 < 5) {
    uVar1 = (&REFG(undefined4, 0x132824c))[(int)(param_1)];
    return ((ulonglong)(((ulonglong)(byte)uVar1 < 0x40) ? ((1L << (ulonglong)(byte)uVar1)) : 0));
  }
  return ((ulonglong)(((ulonglong)(byte)REFG(undefined4, 0x132824c) < 0x40) ? ((1L << (ulonglong)(byte)REFG(undefined4, 0x132824c))) : 0));
}

/* ref: Client::UI2::Agent::AgentFriendlist::vf11 */
GEN_OWN GEN_NOFRAME byte F_0077aa20(void)
{
  GEN_ENTER(0x77aa20u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_004351d0();
  return bVar1 == 0;
}

/* ref: FUN_0077aa30 */
GEN_OWN GEN_FRAME uint F_0077aa30(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x77aa30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*((char *)GEN_TOP((param_2 + 0xa0))) == '\r') {
    uVar2 = F_00a6add0(param_3);
    if ((uVar2 != 0) && (*((byte *)GEN_TOP((uVar2 + 0x28))) == param_1)) {
      uVar4 = 0;
      while (param_3 != *((int *)GEN_TOP((uVar2 + uVar4 * 4)))) {
        uVar4 = uVar4 + 1;
        if (9 < uVar4) {
          return 0;
        }
      }
      cVar1 = *((char *)GEN_TOP((uVar4 + 0x29 + uVar2)));
      if (cVar1 != '\0') {
        return (int)cVar1;
      }
    }
  }
  else {
    if (param_1 == 0xc) {
      uVar6 = (uint)*((ushort *)GEN_TOP((param_2 + 0x80)));
    }
    else if (param_1 == 0xd) {
      uVar6 = (uint)*((ushort *)GEN_TOP((param_2 + 0x82)));
    }
    else if (param_1 == 0x15) {
      uVar6 = (uint)*((ushort *)GEN_TOP((param_2 + 0x8a)));
    }
    else if (param_1 == 0xe) {
      uVar6 = (uint)*((ushort *)GEN_TOP((param_2 + 0x84)));
    }
    else if (param_1 == 0x11) {
      uVar6 = (uint)*((ushort *)GEN_TOP((param_2 + 0x86)));
    }
    else if (param_1 == 0x12) {
      uVar6 = (uint)*((ushort *)GEN_TOP((param_2 + 0x88)));
    }
    else if (param_1 == 0x18) {
      uVar6 = (uint)*((ushort *)GEN_TOP((param_2 + 0x8c)));
    }
    iVar3 = 0;
    puVar5 = ((uint *)GEN_TOP((param_2 + 0x44)));
    while (*puVar5 != param_1) {
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      if (5 < iVar3) {
        return uVar6;
      }
    }
    uVar6 = uVar6 + (int)*((short *)GEN_TOP((param_2 + 0x92 + iVar3 * 2)));
  }
  return uVar6;
}

/* ref: FUN_0077ab20 */
GEN_OWN GEN_FRAME uint F_0077ab20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77ab20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((ushort *)GEN_TOP((param_1 + 8))) < *((ushort *)GEN_TOP((param_2 + 8))));
}

/* ref: FUN_0077ab40 */
GEN_OWN GEN_FRAME uint F_0077ab40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77ab40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0077aa30(REFG(undefined4, 0x148a2ac),param_1[1],*param_1);
  uVar2 = F_0077aa30(REFG(undefined4, 0x148a2ac),param_2[1],*param_2);
  if (uVar1 == uVar2) {
    return (uint)(*(ushort *)(param_1 + 2) < *(ushort *)(param_2 + 2));
  }
  return CONCAT31((int3)(uVar2 >> 8),(int)uVar2 < (int)uVar1);
}

/* ref: FUN_0077aba0 */
GEN_OWN GEN_FRAME uint F_0077aba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77aba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  uint uVar9;
  bool bVar10;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 4)));
  uVar9 = 0;
  if (*((char *)GEN_TOP((iVar2 + 0xa0))) == '\r') {
    uVar3 = F_00a6add0(0);
    if ((uVar3 != 0) && (*((char *)GEN_TOP((uVar3 + 0x28))) == '\x0e')) {
      uVar6 = 0;
      do {
        if (*((int *)GEN_TOP((uVar3 + uVar6 * 4))) == 0) {
          cVar1 = *((char *)GEN_TOP((uVar6 + 0x29 + uVar3)));
          if (cVar1 != '\0') {
            uVar9 = (uint)cVar1;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 10);
    }
  }
  else {
    uVar9 = (uint)*((ushort *)GEN_TOP((iVar2 + 0x84)));
    iVar5 = 0;
    piVar8 = ((int *)GEN_TOP((iVar2 + 0x44)));
    do {
      if (*piVar8 == 0xe) {
        uVar9 = uVar9 + (int)*((short *)GEN_TOP((iVar2 + 0x92 + iVar5 * 2)));
        break;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar5 < 6);
  }
  uVar3 = F_0077aa30(0xc,*((undefined4 *)GEN_TOP((param_1 + 4))),0);
  iVar2 = *((int *)GEN_TOP((param_2 + 4)));
  uVar6 = 0;
  if (*((char *)GEN_TOP((iVar2 + 0xa0))) == '\r') {
    uVar4 = F_00a6add0(0);
    if ((uVar4 != 0) && (*((char *)GEN_TOP((uVar4 + 0x28))) == '\x0e')) {
      uVar7 = 0;
      do {
        if (*((int *)GEN_TOP((uVar4 + uVar7 * 4))) == 0) {
          cVar1 = *((char *)GEN_TOP((uVar7 + 0x29 + uVar4)));
          if (cVar1 != '\0') {
            uVar6 = (uint)cVar1;
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 10);
    }
  }
  else {
    uVar6 = (uint)*((ushort *)GEN_TOP((iVar2 + 0x84)));
    iVar5 = 0;
    piVar8 = ((int *)GEN_TOP((iVar2 + 0x44)));
    do {
      if (*piVar8 == 0xe) {
        uVar6 = uVar6 + (int)*((short *)GEN_TOP((iVar2 + 0x92 + iVar5 * 2)));
        break;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar5 < 6);
  }
  uVar4 = F_0077aa30(0xc,*((undefined4 *)GEN_TOP((param_2 + 4))),0);
  bVar10 = uVar4 * uVar6 < uVar3 * uVar9;
  if (uVar4 * uVar6 - uVar3 * uVar9 == 0) {
    bVar10 = *((ushort *)GEN_TOP((param_1 + 8))) < *((ushort *)GEN_TOP((param_2 + 8)));
  }
  return (uint)bVar10;
}

/* ref: FUN_0077acc0 */
GEN_OWN GEN_FRAME byte F_0077acc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77acc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  pbVar3 = ((byte *)GEN_TOP(((**((uint * PTR32 *)GEN_TOP((param_2 + 4))) & 0xffffff) + (int)*((uint * PTR32 *)GEN_TOP((param_2 + 4))))));
  pbVar2 = ((byte *)GEN_TOP(((**((uint * PTR32 *)GEN_TOP((param_1 + 4))) & 0xffffff) + (int)*((uint * PTR32 *)GEN_TOP((param_1 + 4))))));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (int)((1 - (uint)bVar4) - (uint)(bVar4 != 0)) < 0;
}

/* ref: FUN_0077ad20 */
GEN_OWN GEN_FRAME uint F_0077ad20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77ad20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  bool bVar1;
  
  bVar1 = *((ushort *)GEN_TOP((param_2 + 10))) < *((ushort *)GEN_TOP((param_1 + 10)));
  if (*((ushort *)GEN_TOP((param_2 + 10))) == *((ushort *)GEN_TOP((param_1 + 10)))) {
    bVar1 = *((ushort *)GEN_TOP((param_1 + 8))) < *((ushort *)GEN_TOP((param_2 + 8)));
  }
  return (uint)bVar1;
}

/* ref: FUN_0077ad50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077ad50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77ad50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP(((int)this + 0x18))) = param_1;
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_0077ad70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077ad70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x77ad70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined1 *)GEN_TOP(((int)this + 0x3d0))) = 1;
  if (((param_1 < 100) && (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x3d4))) == 0)) && (param_2 != 0)) {
    *((int *)GEN_TOP(((int)this + 0x564))) = *((int *)GEN_TOP(((int)this + 0x564))) + 1;
    *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x3d4))) = param_2;
  }
  return param_1;
}

/* ref: FUN_0077adb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077adb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77adb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  ushort uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x24);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x21);
  uVar4 = uVar3;
  if ((uVar2 != 0) && (uVar3 != 0)) {
    uVar2 = 0;
    local_8 = 2;
    if (*((int *)GEN_TOP(((int)this + 0x564))) != 0) {
      do {
        uVar5 = 0;
        if (((*((int *)GEN_TOP(((int)this + 0x20))) != 0) &&
            (uVar4 = F_004356f0(*((int *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,uVar2), uVar4 != 0)) &&
           (uVar5 = *((ushort *)GEN_TOP((uVar4 + 4))), 0x270e < uVar5)) {
          uVar5 = 9999;
        }
        uVar9 = 0;
        uVar8 = 1;
        uVar4 = (uint)uVar5;
        uVar7 = 0;
        uVar6 = 0x7ca;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
        uVar4 = F_00461bb0(this_00 GEN_EDX_ARG,uVar6,uVar4);
        uVar4 = F_00431250(uVar3 GEN_EDX_ARG,local_8,uVar4,uVar7,uVar8,uVar9);
        uVar2 = uVar2 + 1;
        local_8 = local_8 + 2;
      } while (uVar2 < *((uint *)GEN_TOP(((int)this + 0x564))));
    }
  }
  return uVar4;
}

/* ref: FUN_0077ae70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077ae70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77ae70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xdb4))) = 0;
  return;
}

/* ref: FUN_0077ae80 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_0077ae80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77ae80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    bVar1 = F_00438840(*((int *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD);
    if (param_1 < bVar1) {
      uVar2 = F_00438850(*((undefined4 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_1);
      if (uVar2 != 0) {
        return *((ulonglong *)GEN_TOP((uVar2 + 0x10)));
      }
    }
  }
  return 0;
}

/* ref: FUN_0077aec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077aec0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77aec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP((param_1 + 0x564))) = 0;
  *((undefined2 *)GEN_TOP((param_1 + 0x3d0))) = 0;
  F_00c48350(((undefined *)GEN_TOP((param_1 + 0x3d4))),0,400);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x24);
  if (uVar2 != 0) {
    if (**((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) != *((int *)GEN_TOP((param_1 + 0x564)))) {
      **((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) = *((int *)GEN_TOP((param_1 + 0x564)));
      *((bool *)GEN_TOP((uVar2 + 0x1d))) = param_2 == '\0';
    }
  }
  return uVar2;
}

/* ref: FUN_0077af30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077af30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77af30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc40, 0, 4);
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  undefined * puVar5;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc3c);
  (*(uint *)(gen_frame + 0xc38)) = uVar1;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x186;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    ((undefined4 *)(gen_frame + 0x0))[1] = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x638)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x63c)) = param_1;
    puVar5 = param_2;
    if (param_2 == ((undefined *)GEN_TOP(0x0))) {
      puVar5 = &REFG(undefined, 0x10be42e);
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x640)) GEN_EDX_ARG,6);
    (*(undefined * PTR32 *)(gen_frame + 0x644)) = puVar5;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x187,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xc38));
    iVar4 = 0x186;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return uVar1;
}

/* ref: FUN_0077b010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077b010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77b010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc94, 12, 4);
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  int iVar5;
  uint * this_01;
  undefined4 uVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc90);
  (*(uint *)(gen_frame + 0xc8c)) = uVar1;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x54));
    iVar4 = 0x186;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_FWD,3);
    ((undefined4 *)(gen_frame + 0x54))[1] = 4;
    iVar4 = *((int *)GEN_TOP(((int)this + ((uint)*((byte *)GEN_TOP(((int)this + 0xb40))) * 3 + 0x2d3) * 4)));
    F_005a2710(((undefined1 *)(gen_frame + 0x674)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x678)) = (uint)(iVar4 != 0);
    iVar5 = *((int *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0xb40))) * 0xc + 0xb44)));
    iVar4 = *((int *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0xb40))) * 0xc + 0xb48)));
    F_005a2710(((undefined1 *)(gen_frame + 0x67c)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x680)) = (uint)(iVar5 != iVar4);
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10be42f),REFG(undefined4, 0x108cc50));
    if (*((int *)GEN_TOP(((int)this + 0x564))) != 0) {
      if (*((int *)GEN_TOP(((int)this + 0x20))) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_00435750(*((int *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
      }
      iVar5 = *((byte *)GEN_TOP(((int)this + 0xb40))) * uVar1;
      iVar4 = *((int *)GEN_TOP(((int)this + 0x564))) + iVar5;
      iVar5 = iVar5 + 1;
      uVar6 = 0x7cb;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar1 = F_00461c60(this_00 GEN_EDX_ARG,uVar6,iVar5,iVar4);
      F_0042e430(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1);
    }
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x7bc)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x7c0)) = uVar1;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x187,((undefined4 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    this_01 = &(*(uint *)(gen_frame + 0xc8c));
    iVar4 = 0x186;
    do {
      this_01 = this_01 - 2;
      uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return uVar1;
}

/* ref: FUN_0077b1a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077b1a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77b1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc40, 0, 4);
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc3c);
  (*(uint *)(gen_frame + 0xc38)) = uVar1;
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x186;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    ((undefined4 *)(gen_frame + 0x0))[1] = 8;
    F_005a2710(((undefined1 *)(gen_frame + 0x770)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x774)) = (uint)(param_2 != '\0');
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 8))),0x187,((undefined4 *)(gen_frame + 0x0)));
    this = &(*(uint *)(gen_frame + 0xc38));
    iVar4 = 0x186;
    do {
      this = this - 2;
      uVar1 = F_005a2670(this GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return uVar1;
}

/* ref: FUN_0077b260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077b260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x77b260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 < 0x48) {
    iVar2 = param_1 + ((int)param_1 / 0x18) * 0x36;
    uVar1 = *((uint *)GEN_TOP(((int)this + iVar2 * 4 + 0x28)));
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_2 = *((undefined4 *)GEN_TOP(((int)this + iVar2 * 4 + 0x88)));
    }
    if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_3 = *((undefined4 *)GEN_TOP(((int)this + iVar2 * 4 + 0x100)));
    }
  }
  return uVar1;
}

/* ref: FUN_0077b2c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077b2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77b2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  byte bVar1;
  
  bVar1 = 0;
  if (param_1 < 0x48) {
    bVar1 = *((byte *)GEN_TOP((((int)param_1 / 0x18) * 0x120 + param_1 + 0xe8 + (int)this)));
  }
  return bVar1;
}

/* ref: FUN_0077b300 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0077b300(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77b300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  if (param_2 < 0x1d) {
    iVar4 = (int)(char)param_2;
    if (*((short *)GEN_TOP((param_1 + 0xa18 + iVar4 * 2))) == 0) {
      uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD,iVar4,1);
      sVar1 = (short)uVar3;
      if (sVar1 == 0) {
        sVar1 = 1;
      }
      *((short *)GEN_TOP((param_1 + 0xa18 + iVar4 * 2))) = sVar1;
    }
    uVar2 = *((ushort *)GEN_TOP((param_1 + 0xa18 + iVar4 * 2)));
  }
  return uVar2;
}

/* ref: FUN_0077b380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077b380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77b380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  uint * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  switch((unsigned int)(uintptr_t)(param_1 & 0xffff)) {
  case 1000: ;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x11e;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar4,uVar5,uVar6);
    return uVar2;
  case 0x3e9: ;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x76b;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar4,uVar5,uVar6);
    return uVar2;
  case 0x3ea: ;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x76a;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar4,uVar5,uVar6);
    return uVar2;
  case 0x3eb: ;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x769;
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,uVar4,uVar5,uVar6);
    return uVar2;
  }
  puVar3 = ((uint *)GEN_TOP(F_00ab2290(param_1 & 0xffff)));
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    return 0;
  }
  return (*puVar3 & 0xffffff) + (int)puVar3;
}

/* ref: FUN_0077b450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077b450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77b450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined2 uVar5;
  ushort uVar6;
  bool bVar7;
  
  *((undefined2 *)GEN_TOP(((int)this + 0x1088))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1024))) = 0x3eb;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x1088)));
  *((undefined2 *)GEN_TOP(((int)this + (uint)uVar1 * 2 + 0x1024))) = 0x3e9;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  uVar6 = *((ushort *)GEN_TOP(((int)this + 0x1088)));
  if (param_1 < 0) {
    return (uint)uVar1;
  }
  iVar2 = param_1 / 0x18;
  uVar4 = param_1 % 0x18;
  bVar3 = false;
  if (iVar2 == 0) {
    if (uVar4 < 5) {
      uVar5 = 0xc;
    }
    else {
      if (7 < uVar4) {
        if (uVar4 < 0x10) {
          *((undefined2 *)GEN_TOP(((int)this + (uint)uVar6 * 2 + 0x1024))) = 0x46;
          *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
          *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x47;
          *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
          *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0xb;
          uVar5 = 0xc;
        }
        else {
          if (0x12 < uVar4) {
            return uVar4;
          }
          *((undefined2 *)GEN_TOP(((int)this + (uint)uVar6 * 2 + 0x1024))) = 0x48;
          *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
          *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x49;
          *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
          *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 10;
          uVar5 = 0xc;
        }
        goto LAB_0077b792;
      }
      uVar5 = 0xd;
    }
    *((undefined2 *)GEN_TOP(((int)this + (uint)uVar6 * 2 + 0x1024))) = uVar5;
    uVar5 = 1000;
LAB_0077b7d1: ;
    bVar7 = false;
    *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
    *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = uVar5;
    *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
    uVar6 = *((ushort *)GEN_TOP(((int)this + 0x1088)));
  }
  else {
    bVar3 = false;
    if (iVar2 == 1) {
      if (uVar4 == 0) {
        *((undefined2 *)GEN_TOP(((int)this + (uint)uVar6 * 2 + 0x1024))) = 0x12;
        uVar5 = 0x11;
      }
      else {
        *((undefined2 *)GEN_TOP(((int)this + (uint)uVar6 * 2 + 0x1024))) = 0x15;
        bVar3 = true;
        uVar5 = 0x18;
      }
      goto LAB_0077b7d1;
    }
    bVar7 = uVar4 == 0xe;
    if ((iVar2 != 1) && (bVar3 = false, !bVar7)) {
      return CONCAT31((int3)(uVar4 >> 8),bVar7);
    }
  }
  *((undefined2 *)GEN_TOP(((int)this + (uint)uVar6 * 2 + 0x1024))) = 1;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 2;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 3;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 4;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 5;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 6;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x13;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x16;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x1b;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x2c;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x2d;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x1088)));
  *((undefined2 *)GEN_TOP(((int)this + (uint)uVar1 * 2 + 0x1024))) = 0x2e;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  uVar6 = *((ushort *)GEN_TOP(((int)this + 0x1088)));
  if (bVar7 == false) {
    *((undefined2 *)GEN_TOP(((int)this + (uint)uVar6 * 2 + 0x1024))) = 0x30;
    *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
    uVar6 = *((ushort *)GEN_TOP(((int)this + 0x1088)));
  }
  *((undefined2 *)GEN_TOP(((int)this + (uint)uVar6 * 2 + 0x1024))) = 0x25;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x26;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x27;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x28;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x29;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x2a;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  if ((!bVar3) && (bVar7 == false)) {
    return (uint)CONCAT11((char)(uVar1 >> 8),bVar7);
  }
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x46;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x47;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0xb;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x48;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  *((undefined2 *)GEN_TOP(((int)this + (uint)*((ushort *)GEN_TOP(((int)this + 0x1088))) * 2 + 0x1024))) = 0x49;
  uVar5 = 10;
LAB_0077b792: ;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x1088)));
  *((undefined2 *)GEN_TOP(((int)this + (uint)uVar1 * 2 + 0x1024))) = uVar5;
  *((short *)GEN_TOP(((int)this + 0x1088))) = *((short *)GEN_TOP(((int)this + 0x1088))) + 1;
  return (uint)uVar1;
}

/* ref: FUN_0077b8f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077b8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77b8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x24);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x21);
  if ((uVar2 != 0) && (uVar3 != 0)) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x324))) = 0;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x7a7;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = F_0043bd00(this_00 GEN_EDX_ARG,uVar4,uVar5,uVar6);
    if (uVar2 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x324)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x324))) = uVar2;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
    uVar3 = F_00431250(uVar3 GEN_EDX_ARG,0xca,&REFG(undefined, 0x10be43a),0,1,0);
  }
  return uVar3;
}

/* ref: FUN_0077b990 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077b990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77b990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    F_00443df0(*((int *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD);
    F_00438870(*((undefined4 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_0077b9c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077b9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77b9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) != ((undefined *)GEN_TOP(0x0))) {
    F_00438970(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xdac))));
    F_00443e00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_0077b9f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077b9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77b9f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    F_00443df0(*((int *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD);
    F_00438870(*((undefined4 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_1);
    F_00438880(*((undefined4 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,(*param_2 < '\x01') + '\x01');
    F_00438890(*((undefined4 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,
                 *((undefined1 *)GEN_TOP((param_2[1] * 0x58 + 0xe08 + (int)this))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_0077ba50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077ba50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77ba50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (0 < *((int *)GEN_TOP(((int)this + 0xe00)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xe00))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0xe00))) = 0;
  }
  return;
}

/* ref: FUN_0077ba90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077ba90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77ba90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (0 < *((int *)GEN_TOP(((int)this + 0x101c)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x101c))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x101c))) = 0;
  }
  return;
}

/* ref: FUN_0077bad0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077bad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77bad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (0 < *((int *)GEN_TOP(((int)this + 0x1020)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1020))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1020))) = 0;
  }
  return;
}

/* ref: FUN_0077bb10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077bb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77bb10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0077bb40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077bb40(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x77bb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1[2] == 0) {
    uVar2 = 6;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x44))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_FWD);
    uVar1 = F_00435440(uVar1 GEN_EDX_ARG,uVar2);
    param_1[4] = uVar1;
    F_0042ccf0(param_1 + 8 GEN_EDX_ARG,param_2);
    param_1[6] = param_4;
    param_1[7] = param_5;
    if (param_3 != '\0') {
      F_0042aca0(param_1 + 0x1d GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: FUN_0077bba0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077bba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77bba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x16c))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x16c))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  }
  return;
}

/* ref: FUN_0077bbe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077bbe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77bbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 200))) == 0) {
    return 0;
  }
  if (*((int *)GEN_TOP((in_ecx + 0xd4))) == 0) {
    return 1;
  }
  if (*((int *)GEN_TOP((in_ecx + 0xe0))) == 0) {
    return 2;
  }
  if (*((int *)GEN_TOP((in_ecx + 0xec))) == 0) {
    return 3;
  }
  return (-(uint)(*((int *)GEN_TOP((in_ecx + 0xf8))) != 0) & 0xfffffffb) + 4;
}

/* ref: FUN_0077bc30 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0077bc30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77bc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((((*((int *)GEN_TOP((in_ecx + 200))) == 0) && (*((int *)GEN_TOP((in_ecx + 0xd4))) == 0)) &&
      (*((int *)GEN_TOP((in_ecx + 0xe0))) == 0)) &&
     ((*((int *)GEN_TOP((in_ecx + 0xec))) == 0 && (*((int *)GEN_TOP((in_ecx + 0xf8))) == 0)))) {
    return *((int *)GEN_TOP((in_ecx + 0x108))) != 0;
  }
  return 1;
}

/* ref: FUN_0077bc70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077bc70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77bc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 200;
  case 1: ;
    return in_ecx + 0xd4;
  case 2: ;
    return in_ecx + 0xe0;
  case 3: ;
    return in_ecx + 0xec;
  case 4: ;
    return in_ecx + 0xf8;
  default: ;
    return 0;
  }
}

/* ref: FUN_0077bcd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077bcd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x77bcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 200)));
    break;
  case 1: ;
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0xd4)));
    break;
  case 2: ;
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0xe0)));
    break;
  case 3: ;
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0xec)));
    break;
  case 4: ;
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0xf8)));
    break;
  default: ;
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  if (param_3 != '\0') {
    F_00a3ced0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x7d2,param_2,1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return 0;
}

/* ref: FUN_0077bd50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077bd50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x77bd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  
  if (((*((int *)GEN_TOP((param_1 + 0xcc))) != 0) && (*((ushort *)GEN_TOP((param_1 + 0xd0))) == param_3)) &&
     (*((ushort *)GEN_TOP((param_1 + 0xd2))) == param_2)) {
    if (param_4 != '\0') {
      F_00a3ced0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x7d2,0,1);
    }
    *((undefined4 *)GEN_TOP((param_1 + 200))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xcc))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xd0))) = 0;
    return 0;
  }
  if (((*((int *)GEN_TOP((param_1 + 0xd8))) != 0) && (*((ushort *)GEN_TOP((param_1 + 0xdc))) == param_3)) &&
     (*((ushort *)GEN_TOP((param_1 + 0xde))) == param_2)) {
    if (param_4 != '\0') {
      F_00a3ced0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d2,1,1);
    }
    *((undefined4 *)GEN_TOP((param_1 + 0xd4))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xd8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xdc))) = 0;
    return 0;
  }
  if (((*((int *)GEN_TOP((param_1 + 0xe4))) != 0) && (*((ushort *)GEN_TOP((param_1 + 0xe8))) == param_3)) &&
     (*((ushort *)GEN_TOP((param_1 + 0xea))) == param_2)) {
    if (param_4 != '\0') {
      F_00a3ced0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d2,2,1);
    }
    *((undefined4 *)GEN_TOP((param_1 + 0xe0))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xe4))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xe8))) = 0;
    return 0;
  }
  if (((*((int *)GEN_TOP((param_1 + 0xf0))) != 0) && (*((ushort *)GEN_TOP((param_1 + 0xf4))) == param_3)) &&
     (*((ushort *)GEN_TOP((param_1 + 0xf6))) == param_2)) {
    if (param_4 != '\0') {
      F_00a3ced0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d2,3,1);
    }
    *((undefined4 *)GEN_TOP((param_1 + 0xec))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xf0))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xf4))) = 0;
    return 0;
  }
  uVar1 = param_3;
  if (((*((int *)GEN_TOP((param_1 + 0xfc))) != 0) && (*((ushort *)GEN_TOP((param_1 + 0x100))) == param_3)) &&
     (uVar1 = (uint)*((ushort *)GEN_TOP((param_1 + 0x102))), uVar1 == param_2)) {
    if (param_4 != '\0') {
      uVar1 = F_00a3ced0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x7d2,4,1);
    }
    *((undefined4 *)GEN_TOP((param_1 + 0xf8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xfc))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x100))) = 0;
  }
  return uVar1;
}

/* ref: FUN_0077bef0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077bef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77bef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x16c))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x16c))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentLetterView::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_0077bf40(void)
{
  GEN_ENTER(0x77bf40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0077bf50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077bf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77bf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  return;
}

/* ref: FUN_0077bf80 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077bf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77bf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x84))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x84))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  }
  return;
}

/* ref: FUN_0077bfc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077bfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77bfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (-1 < *((int *)GEN_TOP(((int)this + 100)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    return (uint)(param_1 < uVar2);
  }
  piVar1 = ((int *)GEN_TOP(F_00439130(*((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*piVar1 != 0 || piVar1[1] != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentPartyInvite::vf16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077c040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x77c040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) || (*(int *)(this + 0x68) != 0)) &&
     (piVar2 = *(int * PTR32 *)(this + 0xc), piVar2 != ((int *)GEN_TOP(0x0)))) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_FWD);
    if (in_EAX == 0) {
      iVar1 = *(int *)(this + 0x68);
      if (iVar1 != 0) {
        *(undefined4 *)(this + 0x68) = 0;
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,iVar1,0);
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))
                        (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar3;
    }
  }
  return in_EAX;
}

/* ref: FUN_0077c090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077c090(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77c090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint uVar1;
  
  *(undefined1 *)(param_1 + 4) = param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_0077c0b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077c0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77c0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (REFG(int, 0x1379694) != 0) {
    bVar1 = F_00ae09c0(&REFG(undefined, 0x1336e40) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((REFG(int, 0x1379694) + 0x74))));
    if (bVar1 != 0) {
      iVar2 = 1;
    }
  }
  return iVar2 == param_1;
}

/* ref: FUN_0077c0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077c0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77c0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  F_0042aca0(this GEN_EDX_FWD);
  bVar1 = REFG(undefined1, 0x132814a) & 0x1f;
  *((undefined1 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((int *)GEN_TOP(((int)this + 0x5c))) = (1 << bVar1) - 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0x32;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x6c))) = 0;
  if (-1 < param_1) {
    *((byte *)GEN_TOP(((int)this + 0x6e))) = (byte)param_1;
    *((char *)GEN_TOP(((int)this + 0x6c))) = '\x01' << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  }
  return 0;
}

/* ref: FUN_0077c140 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0077c140(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x77c140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042e430(param_1 GEN_EDX_FWD,param_2);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x54))) = param_3;
  uVar1 = F_0042b790(param_1 GEN_EDX_ARG);
  if (0xf < uVar1) {
    uVar1 = F_0042d2f0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0,0xf);
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
    uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_0077c1a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077c1a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x77c1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  
  if (param_2 < REFG(undefined1, 0x1328147)) {
    uVar1 = 1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
    if (param_3 != '\0') {
      if (param_4 != '\0') {
        *((int *)GEN_TOP((param_1 + 0x58))) = (1 << GEN_SHC(REFG(undefined1, 0x1328147), REFG(undefined1, 0x1328147))) - 1;
      }
      *((uint *)GEN_TOP((param_1 + 0x58))) = *((uint *)GEN_TOP((param_1 + 0x58))) | uVar1;
      return;
    }
    if (param_4 != '\0') {
      *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 0;
    }
    *((uint *)GEN_TOP((param_1 + 0x58))) = *((uint *)GEN_TOP((param_1 + 0x58))) & ~uVar1;
  }
  return;
}

/* ref: FUN_0077c200 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077c200(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x77c200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  
  if (param_2 < REFG(undefined1, 0x132814a)) {
    uVar1 = 1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
    if (param_3 != '\0') {
      if (param_4 != '\0') {
        *((int *)GEN_TOP((param_1 + 0x5c))) = (1 << GEN_SHC(REFG(undefined1, 0x132814a), REFG(undefined1, 0x132814a))) - 1;
      }
      *((uint *)GEN_TOP((param_1 + 0x5c))) = *((uint *)GEN_TOP((param_1 + 0x5c))) | uVar1;
      return;
    }
    if (param_4 != '\0') {
      *((undefined4 *)GEN_TOP((param_1 + 0x5c))) = 0;
    }
    *((uint *)GEN_TOP((param_1 + 0x5c))) = *((uint *)GEN_TOP((param_1 + 0x5c))) & ~uVar1;
  }
  return;
}

/* ref: FUN_0077c260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077c260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77c260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((int)param_1 < param_2) {
    *((uint *)GEN_TOP(((int)this + 0x60))) = param_1;
    *((int *)GEN_TOP(((int)this + 100))) = param_2;
    return param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x60))) = param_2;
  *((uint *)GEN_TOP(((int)this + 100))) = param_1;
  return param_1;
}

/* ref: FUN_0077c290 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077c290(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x77c290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 < REFG(undefined2, 0x1328260)) {
    uVar2 = 1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
    uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x68)));
    if (param_3 == '\0') {
      *((uint *)GEN_TOP((param_1 + 0x68))) = *((uint *)GEN_TOP((param_1 + 0x68))) & ~uVar2;
    }
    else {
      *((uint *)GEN_TOP((param_1 + 0x68))) = *((uint *)GEN_TOP((param_1 + 0x68))) | uVar2;
      if (param_2 == 0) {
        *((undefined4 *)GEN_TOP((param_1 + 0x68))) = 1;
      }
      else {
        *((uint *)GEN_TOP((param_1 + 0x68))) = *((uint *)GEN_TOP((param_1 + 0x68))) & 0xfffffffe;
      }
    }
    if (*((int *)GEN_TOP((param_1 + 0x68))) == 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x68))) = uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0077c2f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077c2f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x77c2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  byte bVar1;
  byte bVar2;
  
  if (param_2 < 5) {
    bVar1 = *((byte *)GEN_TOP((param_1 + 0x6c)));
    bVar2 = (byte)(1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2));
    if (param_3 == '\0') {
      *((byte *)GEN_TOP((param_1 + 0x6c))) = ~bVar2 & bVar1;
    }
    else {
      if (param_4 != '\0') {
        *((byte *)GEN_TOP((param_1 + 0x6c))) = ~('\x01' << GEN_SHC(*((byte *)GEN_TOP((param_1 + 0x6e))), *((byte *)GEN_TOP((param_1 + 0x6e))))) & bVar1;
      }
      *((byte *)GEN_TOP((param_1 + 0x6c))) = *((byte *)GEN_TOP((param_1 + 0x6c))) | bVar2;
    }
    if (*((char *)GEN_TOP((param_1 + 0x6c))) == '\0') {
      *((byte *)GEN_TOP((param_1 + 0x6c))) = bVar1;
    }
  }
  return;
}

/* ref: FUN_0077c340 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077c340(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x77c340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  byte bVar1;
  
  if (param_2 < 4) {
    bVar1 = (byte)(1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2));
    if (param_3 != '\0') {
      if (param_4 != '\0') {
        *((undefined1 *)GEN_TOP((param_1 + 0x6d))) = 7;
        return;
      }
      *((byte *)GEN_TOP((param_1 + 0x6d))) = *((byte *)GEN_TOP((param_1 + 0x6d))) | bVar1;
      return;
    }
    if (param_4 != '\0') {
      *((undefined1 *)GEN_TOP((param_1 + 0x6d))) = 0;
      return;
    }
    *((byte *)GEN_TOP((param_1 + 0x6d))) = *((byte *)GEN_TOP((param_1 + 0x6d))) & ~bVar1;
  }
  return;
}

/* ref: FUN_0077c390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077c390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77c390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  return (uint)(param_1 < uVar1);
}

/* ref: Client::UI2::Agent::AgentSearch::vf11 */
GEN_OWN GEN_NOFRAME byte F_0077c3b0(void)
{
  GEN_ENTER(0x77c3b0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_004351d0();
  return bVar1 == 0;
}

/* ref: Client::UI2::Agent::AgentSearch::vf13 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077c3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77c3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  undefined1 AVar4;
  
  if (param_1 == 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
    iVar1 = *piVar3;
    F_0042aca0(this + 0x18 GEN_EDX_ARG);
    bVar2 = REFG(undefined1, 0x132814a) & 0x1f;
    this[0x6c] = (undefined1)0x0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x78) = 1;
    *(int *)(this + 0x74) = (1 << bVar2) - 1;
    *(undefined4 *)(this + 0x7c) = 0x32;
    *(undefined4 *)(this + 0x80) = 1;
    *(undefined2 *)(this + 0x84) = 0;
    if (-1 < iVar1) {
      AVar4 = SUB41(iVar1,0);
      this[0x86] = AVar4;
      this[0x84] = (undefined1)('\x01' << GEN_SHC((byte)AVar4, (unsigned int)(uintptr_t)AVar4));
    }
  }
  return;
}

/* ref: FUN_0077c440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077c440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77c440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x380, 0, 4);
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint * puVar5;
  int * piVar6;
  int iVar7;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x37c);
  (*(uint *)(gen_frame + 0x378)) = uVar4;
  if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
    puVar5 = ((uint *)(gen_frame + 0x0));
    iVar7 = 0x6e;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
    F_005a2710(((uint *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
    ((uint *)(gen_frame + 0x0))[1] = param_1;
    if ((param_1 & 1) != 0) {
      uVar4 = F_0042a990((int)this + 0x18 GEN_EDX_ARG);
      F_005a2710(((undefined1 *)(gen_frame + 0x2f8)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x2fc)) = uVar4;
      cVar1 = *((char *)GEN_TOP(((int)this + 0x6c)));
      F_005a2710(((undefined1 *)(gen_frame + 0x300)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0x304)) = (int)cVar1;
    }
    if ((param_1 & 2) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
      F_005a2710(((undefined1 *)(gen_frame + 0x308)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x30c)) = uVar3;
    }
    if ((param_1 & 4) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x74)));
      F_005a2710(((undefined1 *)(gen_frame + 0x310)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x314)) = uVar3;
    }
    if ((param_1 & 8) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x78)));
      F_005a2710(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x31c)) = uVar3;
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x7c)));
      F_005a2710(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x324)) = uVar3;
    }
    if ((param_1 & 0x10) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x80)));
      F_005a2710(((undefined1 *)(gen_frame + 0x328)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x32c)) = uVar3;
    }
    if ((param_1 & 0x20) != 0) {
      bVar2 = *((byte *)GEN_TOP(((int)this + 0x84)));
      F_005a2710(((undefined1 *)(gen_frame + 0x330)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x334)) = (uint)bVar2;
    }
    if ((param_1 & 0x40) != 0) {
      bVar2 = *((byte *)GEN_TOP(((int)this + 0x85)));
      F_005a2710(((undefined1 *)(gen_frame + 0x338)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x33c)) = (uint)bVar2;
    }
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x5c))))(piVar6 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14))),0x6f,((uint *)(gen_frame + 0x0)));
    puVar5 = &(*(uint *)(gen_frame + 0x378));
    iVar7 = 0x6e;
    do {
      puVar5 = puVar5 - 2;
      uVar4 = F_005a2670(puVar5 GEN_EDX_ARG);
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
  }
  return uVar4;
}

/* ref: FUN_0077c5b0 */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_0077c5b0(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x77c5b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar1 = F_0042aca0(param_2 GEN_EDX_ARG);
  *param_3 = 0;
  if (param_1 != ((char *)GEN_TOP(0x0))) {
    F_0042e430(param_2 GEN_EDX_ARG,param_1);
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10c058c),REFG(undefined4, 0x108cc50));
    F_00ad9dd0(param_2,((undefined1 *)(gen_frame + 0x0)));
    uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar1 = (uint)uVar2;
    if (*param_1 == ' ') {
      *param_3 = 1;
    }
  }
  return uVar1;
}

/* ref: FUN_0077c630 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077c630(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x77c630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  char * pcVar2;
  
  F_0042aca0(param_3 GEN_EDX_ARG);
  pcVar2 = param_1;
  if ((param_1 != ((char *)GEN_TOP(0x0))) && (*param_1 != '\0')) {
    if (param_2 == '\0') {
      uVar1 = F_0042e430(param_3 GEN_EDX_ARG,param_1);
      return uVar1;
    }
    pcVar2 = ((char *)GEN_TOP(F_0042d000(param_3,(*(undefined * PTR32 (*)[1])REFP(0x10c0590)))));
  }
  return (uint)pcVar2;
}

/* ref: FUN_0077c670 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077c670(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77c670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  bVar2 = 0x17;
  do {
    lVar1 = ((ulonglong)(((ulonglong)bVar2 < 0x40) ? ((1L << (ulonglong)bVar2)) : 0));
    if (((uint)lVar1 & param_1) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & param_2) != 0) {
      local_8 = local_8 | 1 << GEN_SHC((byte)iVar3, (unsigned int)(uintptr_t)iVar3);
    }
    bVar2 = (&REFG(undefined1, 0x10c053d))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (bVar2 != 0xff);
  return local_8;
}

/* ref: FUN_0077c6c0 */
GEN_OWN GEN_FRAME ulonglong GEN_STDCALL F_0077c6c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77c6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  iVar4 = 0;
  bVar2 = 0x17;
  uVar5 = 0;
  do {
    if ((param_1 & 1 << GEN_SHC((byte)iVar4, (unsigned int)(uintptr_t)iVar4)) != 0) {
      lVar1 = ((ulonglong)(((ulonglong)bVar2 < 0x40) ? ((1L << (ulonglong)bVar2)) : 0));
      uVar5 = uVar5 | (uint)lVar1;
      uVar3 = uVar3 | (uint)((ulonglong)lVar1 >> 0x20);
    }
    bVar2 = (&REFG(undefined1, 0x10c053d))[(int)(iVar4)];
    iVar4 = iVar4 + 1;
  } while (bVar2 != 0xff);
  if (uVar5 == 0 && uVar3 == 0) {
    return 0x800000000;
  }
  return CONCAT44(uVar3,uVar5);
}

/* ref: FUN_0077c720 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077c720(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77c720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  cVar2 = '\x01';
  do {
    lVar1 = ((ulonglong)(((ulonglong)(byte)(cVar2 - 1) < 0x40) ? ((1L << (ulonglong)(byte)(cVar2 - 1))) : 0));
    if (((uint)lVar1 & param_1) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & param_2) != 0) {
      local_8 = local_8 | 1 << GEN_SHC((byte)iVar3, (unsigned int)(uintptr_t)iVar3);
    }
    cVar2 = (&REFG(undefined1, 0x10c0545))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (cVar2 != -1);
  return local_8;
}

/* ref: FUN_0077c770 */
GEN_OWN GEN_FRAME ulonglong GEN_STDCALL F_0077c770(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77c770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  iVar4 = 0;
  cVar2 = '\x01';
  uVar5 = 0;
  do {
    if ((param_1 & 1 << GEN_SHC((byte)iVar4, (unsigned int)(uintptr_t)iVar4)) != 0) {
      lVar1 = ((ulonglong)(((ulonglong)(byte)(cVar2 - 1) < 0x40) ? ((1L << (ulonglong)(byte)(cVar2 - 1))) : 0));
      uVar5 = uVar5 | (uint)lVar1;
      uVar3 = uVar3 | (uint)((ulonglong)lVar1 >> 0x20);
    }
    cVar2 = (&REFG(undefined1, 0x10c0545))[(int)(iVar4)];
    iVar4 = iVar4 + 1;
  } while (cVar2 != -1);
  return CONCAT44(uVar3,uVar5);
}

/* ref: FUN_0077c7c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077c7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77c7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x28))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  return;
}

/* ref: FUN_0077c7f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077c7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77c7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x5c))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  }
  return;
}

/* ref: FUN_0077c820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077c820(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77c820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 in_EAX = 0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),param_2);
  if (param_2 < 2) {
    *((byte *)GEN_TOP((param_1 + 0xc6))) = param_2;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x2c);
    if (uVar2 != 0) {
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xcc))) != (uint)*((byte *)GEN_TOP((param_1 + 0xc6)))) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0xcc))) = (uint)*((byte *)GEN_TOP((param_1 + 0xc6)));
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0077c870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077c870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77c870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  
  F_0090d130(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP(((int)this + 0xc4))) = 1;
  iVar6 = 0;
  do {
    puVar3 = ((uint *)GEN_TOP(F_00ab4100(iVar6)));
    if (((puVar3 != ((uint *)GEN_TOP(0x0))) && (uVar5 = puVar3[1], uVar5 != 0)) && ((int)uVar5 < 5)) {
      puVar4 = ((uint *)GEN_TOP(F_00ab4130(uVar5)));
      if (puVar4 != ((uint *)GEN_TOP(0x0))) {
        piVar1 = ((int *)GEN_TOP(((int)this + (puVar3[1] * 5 + 0x14) * 8)));
        bVar2 = *(byte *)(piVar1 + 1);
        if (bVar2 == 0) {
          *piVar1 = (*puVar4 & 0xffffff) + (int)puVar4;
        }
        *(byte *)(piVar1 + 1) = bVar2 + 1;
        piVar1[(uint)bVar2 * 2 + 2] = (*puVar3 & 0xffffff) + (int)puVar3;
        *(char *)(piVar1 + (uint)bVar2 * 2 + 2 + 1) = (char)iVar6;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x24);
  uVar5 = F_0043bd00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0xa7f,0,0);
  *((uint *)GEN_TOP(((int)this + 0x168))) = uVar5;
  uVar5 = F_0043bd00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0xa80,0,0);
  *((uint *)GEN_TOP(((int)this + 0x16c))) = uVar5;
  uVar5 = F_0043bd00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0xa81,0,0);
  *((uint *)GEN_TOP(((int)this + 0x170))) = uVar5;
  return uVar5;
}

/* ref: FUN_0077c950 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077c950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77c950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  bVar1 = 0;
  if ((((*param_1 & 0xf) != 0) && (-3 < *(int *)(param_1 + 4))) && (*(int *)(param_1 + 4) < 0)) {
    bVar1 = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  }
  return bVar1;
}

/* ref: FUN_0077c980 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0077c980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77c980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x34))) == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  }
  return 1;
}

/* ref: FUN_0077c9a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077c9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77c9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x27);
  if (uVar3 != 0) {
    if ((*((int *)GEN_TOP(((int)this + 0x14))) == 0) ||
       (bVar1 = F_00436890(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG), bVar1 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x1908))) != uVar4) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x1908))) = uVar4;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
    return uVar4;
  }
  return 0;
}

/* ref: FUN_0077ca00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077ca00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77ca00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if ((byte)param_1 < 6) {
    *((byte *)GEN_TOP(((int)this + 0x20))) = (byte)param_1;
    if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
      F_00441ed0(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,(byte)param_1);
    }
  }
  return;
}

/* ref: FUN_0077ca30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077ca30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77ca30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if ((byte)param_2 < 4) {
    *((byte *)GEN_TOP((in_ecx + 0x21))) = (byte)param_2;
    if (*((int *)GEN_TOP((in_ecx + 0x14))) != 0) {
      bVar1 = F_00436dc0(*((int *)GEN_TOP((in_ecx + 0x14))) GEN_EDX_FWD,(byte)param_2);
    }
  }
  return bVar1;
}

/* ref: FUN_0077ca60 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0077ca60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77ca60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  ushort uVar1;
  undefined4 in_EAX = 0;
  
  uVar1 = (ushort)CONCAT31((int3)((uint)in_EAX >> 8),param_2);
  if (param_2 < 3) {
    *((byte *)GEN_TOP((param_1 + 0x22))) = param_2;
    if (*((int *)GEN_TOP((param_1 + 0x14))) != 0) {
      uVar1 = F_00436de0(*((int *)GEN_TOP((param_1 + 0x14))) GEN_EDX_FWD,(uint)(ushort)((ushort)param_2 * 200));
    }
  }
  return uVar1;
}

/* ref: FUN_0077caa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077caa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77caa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = (byte)param_1;
  if ((byte)((byte)param_1 - 1) < 3) {
    *((byte *)GEN_TOP(((int)this + 0x23))) = (byte)param_1;
    if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
      bVar1 = F_00436dd0(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,(byte)param_1);
    }
  }
  return bVar1;
}

/* ref: FUN_0077cae0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077cae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77cae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if ((byte)param_2 < 3) {
    *((byte *)GEN_TOP((in_ecx + 0x24))) = (byte)param_2;
    if (*((int *)GEN_TOP((in_ecx + 0x14))) != 0) {
      bVar1 = F_00436df0(*((int *)GEN_TOP((in_ecx + 0x14))) GEN_EDX_FWD,(byte)param_2);
    }
  }
  return bVar1;
}

/* ref: FUN_0077cb00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077cb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77cb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x2c);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = F_00461190(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0xa03,param_1);
    uVar3 = F_00431250(uVar2 GEN_EDX_ARG,2,uVar3,uVar4,uVar5,uVar6);
  }
  return uVar3;
}

/* ref: FUN_0077cb50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077cb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77cb50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x30);
  if (uVar2 != 0) {
    if (**((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) != param_2) {
      **((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) = param_2;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) != param_1) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) = param_1;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_0077cba0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077cba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77cba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  
  if ((*param_1 & 0xf) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (-3 < iVar1) {
      if (iVar1 < 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
      }
      else if (iVar1 == 0) goto LAB_0077cbbf;
    }
    return 1;
  }
LAB_0077cbbf: ;
  if ((param_1[8] & 0xf) == 0) {
    F_0077c820(this GEN_EDX_FWD,0);
    return 0;
  }
  F_0077c820(this GEN_EDX_ARG,(char)*(undefined4 *)(param_1 + 0xc));
  return 0;
}

/* ref: FUN_0077cbf0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_0077cbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77cbf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  int iVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  if ((*param_1 & 0xf) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 < -2) {
      return 1;
    }
    if (iVar2 < 0) goto LAB_0077cccd;
    if (iVar2 != 0) {
      return 1;
    }
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    bVar3 = param_1[8];
    ((char *)(gen_frame + 0x10))[0] = '\0';
    ((char *)(gen_frame + 0x10))[1] = '\0';
    ((char *)(gen_frame + 0x10))[2] = '\0';
    ((char *)(gen_frame + 0x10))[3] = '\0';
    ((char *)(gen_frame + 0x10))[4] = '\0';
    ((char *)(gen_frame + 0x10))[5] = '\0';
    ((char *)(gen_frame + 0x10))[6] = '\0';
    ((char *)(gen_frame + 0x10))[7] = '\0';
    ((char *)(gen_frame + 0x10))[8] = '\0';
    ((char *)(gen_frame + 0x10))[9] = '\0';
    ((char *)(gen_frame + 0x10))[10] = '\0';
    ((char *)(gen_frame + 0x10))[0xb] = '\0';
    ((char *)(gen_frame + 0x10))[0xc] = '\0';
    ((char *)(gen_frame + 0x10))[0xd] = '\0';
    ((char *)(gen_frame + 0x10))[0xe] = '\0';
    ((char *)(gen_frame + 0x10))[0xf] = 0;
    if ((bVar3 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    uVar4 = 0;
    if (uVar5 != 0) {
      pbVar6 = param_1 + 0x10;
      do {
        if ((*pbVar6 & 0xf) == 0) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)*(undefined4 *)(pbVar6 + 4);
        }
        ((byte *)(gen_frame + 0x0))[(int)(uVar4)] = bVar3;
        uVar4 = uVar4 + 1;
        pbVar6 = pbVar6 + 8;
        ((char *)(gen_frame + 0x10))[(int)(bVar3)] = '\x01';
      } while (uVar4 < uVar5);
    }
    uVar4 = 0;
    (*(undefined1 *)(gen_frame + 0xf)) = 0xf;
    for (; uVar5 < 0xf; uVar5 = uVar5 + 1) {
      bVar3 = (byte)uVar4;
      cVar1 = ((char *)(gen_frame + 0x10))[(int)(uVar4)];
      while ((cVar1 != '\0' && (bVar3 = (byte)uVar4, bVar3 < 0x10))) {
        bVar3 = bVar3 + 1;
        uVar4 = (uint)bVar3;
        cVar1 = ((char *)(gen_frame + 0x10))[(int)(uVar4)];
      }
      ((byte *)(gen_frame + 0x0))[(int)(uVar5)] = bVar3;
      uVar4 = (uint)(byte)(bVar3 + 1);
      if (0xf < (byte)(bVar3 + 1)) break;
    }
    F_00441810(this_00 GEN_EDX_FWD,((byte *)(gen_frame + 0x0)));
  }
LAB_0077cccd: ;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  return 1;
}

/* ref: FUN_0077ccf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077ccf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77ccf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  bool bVar1;
  
  bVar1 = false;
  if (param_2 == '\x0f') {
    bVar1 = *((int *)GEN_TOP((param_1 + 100))) != 0;
  }
  else {
    if (param_2 == -0x68) {
      return *((int *)GEN_TOP((param_1 + 0x58))) != 0;
    }
    if (param_2 == -0x65) {
      return *((int *)GEN_TOP((param_1 + 0x60))) != 0;
    }
  }
  return bVar1;
}

/* ref: FUN_0077cd30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077cd30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77cd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = (uint)param_2;
  if (uVar1 == 0xf) {
    uVar1 = 0;
    if (*((int *)GEN_TOP((param_1 + 100))) != 0) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 100))),0);
      *((undefined4 *)GEN_TOP((param_1 + 100))) = 0;
    }
  }
  else if (uVar1 == 0x98) {
    uVar1 = 0;
    if (*((int *)GEN_TOP((param_1 + 0x58))) != 0) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x58))),0);
      *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 0;
      return uVar1;
    }
  }
  else {
    uVar1 = uVar1 - 0x9b;
    if ((uVar1 == 0) && (*((int *)GEN_TOP((param_1 + 0x60))) != 0)) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x60))),0);
      *((undefined4 *)GEN_TOP((param_1 + 0x60))) = 0;
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_0077cdd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077cdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77cdd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_004368a0((byte)param_1);
  if (bVar1 == 0) {
    if ((byte)param_1 < 3) {
      F_0042e430(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,&REFG(undefined, 0x10be467));
    }
    uVar2 = F_0042a990((int)this + 0x70 GEN_EDX_ARG);
    bVar1 = F_004414f0(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,(byte)param_1,uVar2);
  }
  return bVar1;
}

/* ref: FUN_0077ce20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077ce20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77ce20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x2c);
  if (uVar2 != 0) {
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 200))) != (uint)param_2) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 200))) = (uint)param_2;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_0077ce60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077ce60(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x77ce60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  if (param_1 < 5) {
    uVar2 = (uint)param_1;
    bVar1 = F_00436d30(param_2,param_3,(&REFG(undefined1, 0x10c0596))[(int)(uVar2 * 3)]);
    if (bVar1 != 0) {
      return 2;
    }
    bVar1 = F_00436d30(param_2,param_3,(&REFG(undefined1, 0x10c0595))[(int)(uVar2 * 3)]);
    if (bVar1 != 0) {
      return 1;
    }
    F_00436d30(param_2,param_3,(&REFG(undefined1, 0x10c0594))[(int)(uVar2 * 3)]);
  }
  return 0;
}

/* ref: FUN_0077cee0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077cee0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77cee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00436d30(param_1,param_2,0x20);
  if (bVar1 != 0) {
    return 2;
  }
  bVar1 = F_00436d30(param_1,param_2,0x1f);
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_00436d30(param_1,param_2,0x1e);
  if (bVar1 != 0) {
    return 0;
  }
  return 0;
}

/* ref: FUN_0077cf50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077cf50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77cf50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00436d30(param_1,param_2,0x23);
  if (bVar1 != 0) {
    return 2;
  }
  bVar1 = F_00436d30(param_1,param_2,0x22);
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_00436d30(param_1,param_2,0x21);
  if (bVar1 != 0) {
    return 0;
  }
  return 0;
}

/* ref: FUN_0077cfc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077cfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77cfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,0x2c);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,0x28);
  uVar8 = uVar6;
  if (((uVar5 != 0) && (uVar6 != 0)) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    bVar3 = F_00436990(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
    uVar7 = F_00436a90(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,bVar3);
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = (uint)bVar3;
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xc0))) != uVar8) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0xc0))) = uVar8;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      iVar1 = *((int *)GEN_TOP((uVar5 + 0x20)));
      iVar2 = *((int *)GEN_TOP((iVar1 + 4 + uVar8 * 0xc)));
      if (*((int *)GEN_TOP((iVar1 + 0xc4))) != iVar2) {
        *((int *)GEN_TOP((iVar1 + 0xc4))) = iVar2;
        *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
      }
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar8 = F_00460bd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0xa1e,iVar2 + 1);
      F_00431250(uVar6 GEN_EDX_ARG,0x11,uVar8,uVar9,uVar10,uVar11);
      uVar8 = F_00441270(uVar7);
      if (uVar8 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0x48)))) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0x48))) = uVar8;
        *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
      }
      bVar3 = F_00441290(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,2);
      iVar1 = *((int *)GEN_TOP((uVar5 + 0x20)));
      if (bVar3 == 0) {
        if (*((int *)GEN_TOP((iVar1 + 0x160))) != 0) {
          *((undefined4 *)GEN_TOP((iVar1 + 0x160))) = 0;
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        uVar8 = F_0043bd00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0xa29,0,0);
        if (uVar8 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0xe4)))) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0xe4))) = uVar8;
          *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
        }
      }
      else {
        if (*((int *)GEN_TOP((iVar1 + 0x160))) != 1) {
          *((undefined4 *)GEN_TOP((iVar1 + 0x160))) = 1;
          *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
        }
        uVar8 = F_0043bd00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0xa2a,0,0);
        if (uVar8 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0xe8)))) {
          *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 0x20))) + 0xe8))) = uVar8;
          *((undefined1 *)GEN_TOP((uVar6 + 0x1d))) = 1;
          return uVar8;
        }
      }
    }
  }
  return uVar8;
}

/* ref: FUN_0077d140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077d140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77d140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  ulonglong * puVar9;
  byte * pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  byte * pbVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined1 uVar18;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_10;
  
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x24))))(piVar6 GEN_EDX_ARG,0x2c);
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x28))))(piVar6 GEN_EDX_ARG,0x28);
  uVar12 = uVar8;
  if (((uVar7 != 0) && (uVar8 != 0)) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    puVar9 = ((ulonglong *)GEN_TOP(F_00436a90(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,*((undefined1 *)GEN_TOP(((int)this + 0xc5))))))
    ;
    uVar12 = 0;
    if (puVar9 != ((ulonglong *)GEN_TOP(0x0))) {
      if (*((char *)GEN_TOP(((int)this + 0xc4))) == '\0') {
        F_0077c870(this GEN_EDX_ARG);
      }
      if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0xcc))) != (uint)*((byte *)GEN_TOP(((int)this + 0xc6)))) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0xcc))) = (uint)*((byte *)GEN_TOP(((int)this + 0xc6)));
        *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
      }
      iVar13 = 0;
      pbVar10 = ((byte *)GEN_TOP(((int)this + 0xcc)));
      local_10 = 0;
      local_2c = 4;
      do {
        bVar4 = false;
        local_28 = 0;
        if (*pbVar10 != 0) {
          local_24 = iVar13 * 4 + 0xd0;
          iVar13 = iVar13 * 4 + 0x5c;
          pbVar15 = pbVar10 + 4;
          do {
            if (((uint)(((ulonglong)(((ulonglong)pbVar15[4] < 0x40) ? ((*puVar9 >> (ulonglong)pbVar15[4])) : 0))) & 1) == 1) {
              iVar14 = local_24;
              if (!bVar4) {
                if (*(int *)(pbVar10 - 4) != *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + iVar13)))) {
                  *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + iVar13))) = *(int *)(pbVar10 - 4);
                  *((undefined1 *)GEN_TOP((uVar8 + 0x1d))) = 1;
                }
                if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + local_24))) != 1) {
                  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + local_24))) = 1;
                  *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
                }
                local_10 = local_10 + 1;
                iVar13 = iVar13 + 4;
                iVar14 = local_24 + 4;
              }
              bVar4 = true;
              if (*(int *)pbVar15 != *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + iVar13)))) {
                *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + iVar13))) = *(int *)pbVar15;
                *((undefined1 *)GEN_TOP((uVar8 + 0x1d))) = 1;
              }
              if (*((int *)GEN_TOP((iVar14 + *((int *)GEN_TOP((uVar7 + 0x20)))))) != 0) {
                *((undefined4 *)GEN_TOP((iVar14 + *((int *)GEN_TOP((uVar7 + 0x20)))))) = 0;
                *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
              }
              local_10 = local_10 + 1;
              iVar13 = iVar13 + 4;
              local_24 = iVar14 + 4;
            }
            local_28 = local_28 + 1;
            pbVar15 = pbVar15 + 8;
          } while (local_28 < (int)(uint)*pbVar10);
          iVar13 = local_10;
          if ((bVar4) && (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0xcc + local_10 * 4))) != 2)) {
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0xcc + local_10 * 4))) = 2;
            *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
          }
        }
        pbVar10 = pbVar10 + 0x28;
        local_2c = local_2c - 1;
      } while (local_2c != 0);
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0x120))) != iVar13) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0x120))) = iVar13;
        *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
      }
      iVar13 = 0;
      bVar5 = F_00436c80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0);
      if (bVar5 != 0) {
        iVar14 = 0x124;
        local_10 = 0xac;
        uVar12 = 0;
        do {
          uVar18 = 0;
          uVar17 = 1;
          uVar16 = 0;
          uVar1 = uVar12 + 1;
          uVar11 = F_00461c60(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0xb4a,uVar1,0);
          F_00431250(uVar8 GEN_EDX_ARG,iVar13 + 0x2b,uVar11,uVar16,uVar17,uVar18);
          if (*((int *)GEN_TOP((iVar14 + *((int *)GEN_TOP((uVar7 + 0x20)))))) != 1) {
            *((undefined4 *)GEN_TOP((iVar14 + *((int *)GEN_TOP((uVar7 + 0x20)))))) = 1;
            *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
          }
          uVar12 = F_0077ce60((char)uVar12,(int)*puVar9,*((undefined4 *)GEN_TOP(((int)puVar9 + 4))));
          iVar2 = *((int *)GEN_TOP(((int)this + uVar12 * 4 + 0x168)));
          if (iVar2 != *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + local_10 + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + local_10 + 4))) = iVar2;
            *((undefined1 *)GEN_TOP((uVar8 + 0x1d))) = 1;
          }
          if (*((int *)GEN_TOP((iVar14 + 4 + *((int *)GEN_TOP((uVar7 + 0x20)))))) != 2) {
            *((undefined4 *)GEN_TOP((iVar14 + 4 + *((int *)GEN_TOP((uVar7 + 0x20)))))) = 2;
            *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
          }
          local_10 = local_10 + 8;
          iVar13 = iVar13 + 2;
          iVar14 = iVar14 + 8;
          uVar12 = uVar1;
        } while (uVar1 < bVar5);
      }
      uVar18 = 0;
      uVar17 = 1;
      uVar16 = 0;
      uVar12 = F_0043bd00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0xbae,0,0);
      F_00431250(uVar8 GEN_EDX_ARG,iVar13 + 0x2b,uVar12,uVar16,uVar17,uVar18);
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0x124 + iVar13 * 4))) != 1) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0x124 + iVar13 * 4))) = 1;
        *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
      }
      uVar17 = *((undefined4 *)GEN_TOP(((int)puVar9 + 4)));
      uVar3 = (undefined4)*puVar9;
      local_1c = 0;
      bVar5 = F_00436d30(uVar3,uVar17,0x20);
      if (bVar5 == 0) {
        bVar5 = F_00436d30(uVar3,uVar17,0x1f);
        if (bVar5 == 0) {
          bVar5 = F_00436d30(uVar3,uVar17,0x1e);
          if (bVar5 != 0) {
            local_1c = 0;
          }
        }
        else {
          local_1c = 1;
        }
      }
      else {
        local_1c = 2;
      }
      iVar14 = *((int *)GEN_TOP(((int)this + local_1c * 4 + 0x168)));
      if (iVar14 != *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + 0xb0 + iVar13 * 4)))) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + 0xb0 + iVar13 * 4))) = iVar14;
        *((undefined1 *)GEN_TOP((uVar8 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0x128 + iVar13 * 4))) != 2) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0x128 + iVar13 * 4))) = 2;
        *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
      }
      uVar18 = 0;
      uVar17 = 1;
      uVar16 = 0;
      uVar12 = F_0043bd00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0xbaf,0,0);
      F_00431250(uVar8 GEN_EDX_ARG,iVar13 + 0x2d,uVar12,uVar16,uVar17,uVar18);
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 300 + iVar13 * 4))) != 1) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 300 + iVar13 * 4))) = 1;
        *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
      }
      uVar17 = *((undefined4 *)GEN_TOP(((int)puVar9 + 4)));
      uVar3 = (undefined4)*puVar9;
      local_20 = 0;
      bVar5 = F_00436d30(uVar3,uVar17,0x23);
      if (bVar5 == 0) {
        bVar5 = F_00436d30(uVar3,uVar17,0x22);
        if (bVar5 == 0) {
          bVar5 = F_00436d30(uVar3,uVar17,0x21);
          if (bVar5 != 0) {
            local_20 = 0;
          }
        }
        else {
          local_20 = 1;
        }
      }
      else {
        local_20 = 2;
      }
      iVar14 = *((int *)GEN_TOP(((int)this + local_20 * 4 + 0x168)));
      if (iVar14 != *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + 0xb8 + iVar13 * 4)))) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0x20))) + 0xb8 + iVar13 * 4))) = iVar14;
        *((undefined1 *)GEN_TOP((uVar8 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0x130 + iVar13 * 4))) != 2) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0x130 + iVar13 * 4))) = 2;
        *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
      }
      uVar12 = uVar7;
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0x15c))) != iVar13 + 4) {
        *((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x20))) + 0x15c))) = iVar13 + 4;
        *((undefined1 *)GEN_TOP((uVar7 + 0x1d))) = 1;
      }
    }
  }
  return uVar12;
}

/* ref: FUN_0077d600 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077d600(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77d600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0x24;
  if (4 < param_1 - 0xcU) {
    if (param_1 != 0x11) {
      if (param_1 == 0x12) {
        if (param_2 != 0) {
          if (param_2 == 1) {
            return 0x22;
          }
          if (param_2 == 2) {
            return 0x23;
          }
        }
        uVar1 = 0x21;
      }
      return uVar1;
    }
    if (param_2 != 0) {
      if (param_2 == 1) {
        return 0x1f;
      }
      if (param_2 == 2) {
        return 0x20;
      }
    }
    return 0x1e;
  }
  uVar1 = param_1 - 0xcU & 0xff;
  if (param_2 != 0) {
    if (param_2 == 1) {
      return (uint)(byte)(&REFG(undefined1, 0x10c0595))[(int)(uVar1 * 3)];
    }
    if (param_2 == 2) {
      return (uint)(byte)(&REFG(undefined1, 0x10c0596))[(int)(uVar1 * 3)];
    }
  }
  return (uint)(byte)(&REFG(undefined1, 0x10c0594))[(int)(uVar1 * 3)];
}

/* ref: FUN_0077d6b0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0077d6b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77d6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  bool bVar1;
  byte bVar2;
  char * pcVar3;
  uint uVar4;
  char * pcVar5;
  
  if (*((char *)GEN_TOP(*param_1)) == '\0') {
    return 0;
  }
  pcVar3 = ((char *)GEN_TOP(F_0042a990(param_1 GEN_EDX_ARG)));
  bVar1 = false;
  pcVar5 = pcVar3;
  if (pcVar3 != ((char *)GEN_TOP(0x0))) {
    do {
      if (*pcVar5 == '\0') break;
      uVar4 = F_0042acc0(*pcVar5);
      if (uVar4 == 1) {
        if (*pcVar5 == ' ') goto LAB_0077d739;
LAB_0077d6ef: ;
        if (bVar1) {
          bVar1 = false;
        }
      }
      else {
        if ((((uVar4 != 3) || (*pcVar5 != -0x1d)) || (pcVar5[1] != -0x80)) || (pcVar5[2] != -0x80))
        goto LAB_0077d6ef;
LAB_0077d739: ;
        if (pcVar5 == pcVar3) {
          return 0;
        }
        if (bVar1) {
          return 0;
        }
        bVar1 = true;
      }
      pcVar5 = pcVar5 + uVar4;
    } while (pcVar5 != ((char *)GEN_TOP(0x0)));
    if (bVar1) {
      return 0;
    }
  }
  if ((*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25dc))) != ((undefined *)GEN_TOP(0x0))) &&
     (bVar2 = F_009f0240(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25dc))) GEN_EDX_ARG,param_1), bVar2 != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_0077d750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077d750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77d750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  F_00441df0(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,(*((char *)GEN_TOP(((int)this + 0x20))) == '\x03') + '\x01');
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x2f);
  if (uVar2 != 0) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (**((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) != 0) {
      **((int * PTR32 *)GEN_TOP((uVar2 + 0x20))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_0077d7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077d7c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x77d7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  uint uVar1;
  char * pcVar2;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    *param_4 = *param_5;
    return 2;
  case 2: ;
  case 3: ;
    F_0042e430(param_3 GEN_EDX_FWD,(int)param_5 + 0x33);
    return 1;
  case 4: ;
    pcVar2 = ((char *)GEN_TOP(((int)param_5 + 0x13)));
    if (*pcVar2 == '\0') {
      uVar1 = F_0043bd00(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,0x3c4,0,0);
      F_0042e430(param_3 GEN_EDX_ARG,uVar1);
      return 1;
    }
    break;
  case 5: ;
    if (*((int *)GEN_TOP((param_1 + 0x14))) != 0) {
      uVar1 = F_00436ad0((int)param_5 + 0x33);
      F_0042e430(param_3 GEN_EDX_ARG,uVar1);
      return 1;
    }
    pcVar2 = "";
    break;
  default: ;
    return 0;
  }
  F_0042e430(param_3 GEN_EDX_ARG,pcVar2);
  return 1;
}

/* ref: FUN_0077d890 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0077d890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77d890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if (((char)uVar2 != '\0') && (*((char *)GEN_TOP(((int)this + 0x174))) != '\x01')) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
    F_0043be20(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    bVar1 = F_0042b6f0(((undefined *)GEN_TOP(((int)this + 0x178))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x1cc))) GEN_EDX_ARG,param_1);
      uVar2 = F_0042a990((int)this + 0x1cc GEN_EDX_ARG);
      F_00441c40(uVar2);
      *((undefined1 *)GEN_TOP(((int)this + 0x174))) = 1;
    }
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
  }
  return uVar2;
}

/* ref: FUN_0077d930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077d930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77d930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x178))) GEN_EDX_FWD,param_1);
  *((undefined1 *)GEN_TOP(((int)this + 0x175))) = 1;
  return uVar1;
}

/* ref: FUN_0077d960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077d960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77d960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x31);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,0x2d);
  if (uVar3 == 0) {
    return uVar4;
  }
  if (uVar4 != 0) {
    if ((*((int *)GEN_TOP(((int)this + 0x14))) == 0) ||
       (bVar1 = F_00441290(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0), bVar1 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x3c))) != iVar5) {
      *((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x3c))) = iVar5;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
    uVar3 = F_0043bd00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0x12bd,0,0);
    if (uVar3 != *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x2c)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0x20))) + 0x2c))) = uVar3;
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
    }
    return uVar3;
  }
  return 0;
}

/* ref: FUN_0077d9f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0077d9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77d9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if (((char)uVar2 != '\0') && (*((char *)GEN_TOP(((int)this + 0x220))) != '\x01')) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
    F_0043be20(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    bVar1 = F_0042b6f0(((undefined *)GEN_TOP(((int)this + 0x224))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x278))) GEN_EDX_ARG,param_1);
      uVar2 = F_0042a990((int)this + 0x278 GEN_EDX_ARG);
      F_00440c80(uVar2);
      *((undefined1 *)GEN_TOP(((int)this + 0x220))) = 1;
    }
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
  }
  return uVar2;
}

/* ref: FUN_0077da90 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0077da90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77da90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x224)));
  F_0042ccf0(this_00 GEN_EDX_FWD,param_1);
  F_0043be20(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,this_00);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x31);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,0x2d);
  if ((uVar3 != 0) && (uVar4 != 0)) {
    F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    iVar1 = *piVar2;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0xc))))(*((undefined4 *)GEN_TOP(((int)this + 0x10))),this_00,uVar5);
    uVar5 = **((uint * PTR32 *)GEN_TOP((uVar3 + 0x20)));
    uVar6 = uVar5 | 2;
    if (uVar5 != uVar6) {
      **((uint * PTR32 *)GEN_TOP((uVar3 + 0x20))) = uVar6;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00431250(uVar4 GEN_EDX_ARG,7,uVar3,uVar8,uVar9,uVar10);
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar4 = (uint)uVar7;
  }
  return uVar4;
}

/* ref: FUN_0077db70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077db70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77db70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined4 uVar5;
  
  uVar5 = 0xb;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar2 = F_00435440(uVar2 GEN_EDX_ARG,uVar5);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,0x3a);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,0x36)));
  if (((uVar2 != 0) && (uVar4 != 0)) && (piVar3 != ((int *)GEN_TOP(0x0)))) {
    bVar1 = F_00436d60(uVar2 GEN_EDX_ARG,4);
    piVar3 = *((int * PTR32 *)GEN_TOP((uVar4 + 0x20)));
    if (bVar1 != 0) {
      if (*piVar3 != 1) {
        *piVar3 = 1;
        *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
      }
      bVar1 = F_00441190();
      return CONCAT31(extraout_var,bVar1);
    }
    if (*piVar3 != 0) {
      *piVar3 = 0;
      *((undefined1 *)GEN_TOP((uVar4 + 0x1d))) = 1;
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_0077dc00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077dc00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x77dc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 == '\0') {
    if (*((char *)GEN_TOP((param_1 + 0x4ae))) == '\0') {
      return 0;
    }
    while ((*((char *)GEN_TOP((param_1 + ((uint)bVar1 * 3 + 0x135) * 4))) != param_3 ||
           (*((short *)GEN_TOP((param_1 + 0x4d6 + (uint)bVar1 * 0xc))) != (short)param_4))) {
      bVar1 = bVar1 + 1;
      if (*((byte *)GEN_TOP((param_1 + 0x4ae))) <= bVar1) {
        return 0;
      }
    }
  }
  else {
    if (*((char *)GEN_TOP((param_1 + 0x4ad))) == '\0') {
      return 0;
    }
    while ((*((char *)GEN_TOP((param_1 + ((uint)bVar1 * 3 + 300) * 4))) != param_3 ||
           (*((short *)GEN_TOP((param_1 + 0x4b2 + (uint)bVar1 * 0xc))) != (short)param_4))) {
      bVar1 = bVar1 + 1;
      if (*((byte *)GEN_TOP((param_1 + 0x4ad))) <= bVar1) {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_0077dca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077dca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77dca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * this_00;
  __time64_t _Var8;
  ulonglong uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  int local_18;
  uint local_14;
  int local_10;
  int * local_8;
  
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,0x3a);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x28))))(piVar4 GEN_EDX_ARG,0x36);
  uVar12 = 0xb;
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00435440(uVar7 GEN_EDX_ARG,uVar12)));
  _Var8 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x598))) = (int)_Var8;
  uVar9 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x5a0))) = uVar9;
  uVar9 = F_00427e30();
  uVar7 = (uint)uVar9;
  *((ulonglong *)GEN_TOP(((int)this + 0x5a8))) = uVar9;
  *((undefined4 *)GEN_TOP(((int)this + 0x5b0))) = 0;
  if (((uVar5 != 0) && (uVar6 != 0)) && (this_00 != ((undefined *)GEN_TOP(0x0)))) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x870))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 0x870))) = 0;
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 0;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x4ad))) = 0;
    bVar3 = F_00436d60(this_00 GEN_EDX_ARG,4);
    if (bVar3 != 0) {
      local_8 = ((int *)GEN_TOP(((int)this + 0x5b4)));
      param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x14)));
      local_18 = 1;
      local_14 = 0;
      local_10 = 0x10;
      do {
        iVar2 = param_1[-3];
        if ((iVar2 != 0) && (uVar7 = F_00ab4220(iVar2), uVar7 != 0)) {
          *((undefined4 *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0x4ad))) * 4 + 0x5b4))) = *param_1;
          bVar3 = *((byte *)GEN_TOP(((int)this + 0x4ad)));
          *((byte *)GEN_TOP(((int)this + 0x4ad))) = bVar3 + 1;
          puVar1 = ((undefined1 *)GEN_TOP(((int)this + ((uint)bVar3 * 3 + 300) * 4)));
          *puVar1 = (undefined1)local_14;
          *(short *)(puVar1 + 2) = (short)iVar2;
          puVar1[4] = *((undefined1 *)GEN_TOP((uVar7 + 0x11)));
          *(undefined4 *)(puVar1 + 8) = *((undefined4 *)GEN_TOP((uVar7 + 0xc)));
          if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) - 8 + local_10))) != iVar2) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) - 8 + local_10))) = iVar2;
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
          if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) - 4 + local_10))) != *((int *)GEN_TOP((uVar7 + 0xc)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) - 4 + local_10))) = *((int *)GEN_TOP((uVar7 + 0xc)));
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
          if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + local_10))) != *local_8) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + local_10))) = *local_8;
            *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
          }
          uVar11 = 0;
          uVar12 = 1;
          uVar10 = 0;
          uVar7 = F_00463610(2,iVar2,0xc);
          F_00431250(uVar6 GEN_EDX_ARG,local_18,uVar7,uVar10,uVar12,uVar11);
          uVar11 = 0;
          uVar12 = 1;
          uVar10 = 0;
          uVar7 = F_00462880(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,*local_8);
          F_00431250(uVar6 GEN_EDX_ARG,local_18 + 1,uVar7,uVar10,uVar12,uVar11);
          local_10 = local_10 + 0xc;
          local_18 = local_18 + 2;
        }
        param_1 = param_1 + 1;
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < 3);
    }
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4))) != (uint)*((byte *)GEN_TOP(((int)this + 0x4ad)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x20))) + 4))) = (uint)*((byte *)GEN_TOP(((int)this + 0x4ad)));
      *((undefined1 *)GEN_TOP((uVar5 + 0x1d))) = 1;
    }
    uVar11 = 0;
    uVar12 = 1;
    uVar10 = 0;
    bVar3 = F_00436ba0(this_00 GEN_EDX_ARG,0);
    uVar5 = F_00461c60(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0x7fc,(uint)*((byte *)GEN_TOP(((int)this + 0x4ad))),
                         (uint)bVar3);
    uVar7 = F_00431250(uVar6 GEN_EDX_ARG,0,uVar5,uVar10,uVar12,uVar11);
  }
  return uVar7;
}

/* ref: FUN_0077df00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077df00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77df00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  __time64_t _Var8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  int local_10;
  int local_c;
  int * local_8;
  
  if (*((char *)GEN_TOP(((int)this + 0x4ad))) != '\0') {
    _Var8 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    in_EAX = (int)_Var8 - *((int *)GEN_TOP(((int)this + 0x598)));
    if (*((uint *)GEN_TOP(((int)this + 0x5b0))) != in_EAX) {
      *((uint *)GEN_TOP(((int)this + 0x5b0))) = in_EAX;
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x3a);
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x36);
      in_EAX = uVar3;
      if ((uVar2 != 0) && (uVar3 != 0)) {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x870))) != *((int *)GEN_TOP(((int)this + 0x5b0)))) {
          *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x870))) = *((int *)GEN_TOP(((int)this + 0x5b0)));
          *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 0;
        }
        iVar7 = 2;
        local_8 = ((int *)GEN_TOP(((int)this + 0x5b4)));
        local_c = 0;
        iVar6 = 0x10;
        local_10 = 3;
        do {
          iVar4 = *local_8 - *((int *)GEN_TOP(((int)this + 0x5b0)));
          if (iVar4 < 0) {
            iVar4 = 0;
            local_c = local_c + 1;
          }
          if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar6))) != iVar4) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar6))) = iVar4;
            *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 0;
          }
          uVar11 = 1;
          uVar10 = 1;
          uVar9 = 0;
          uVar5 = F_00462880(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,iVar4);
          in_EAX = F_00431250(uVar3 GEN_EDX_ARG,iVar7,uVar5,uVar9,uVar10,uVar11);
          local_8 = local_8 + 1;
          iVar6 = iVar6 + 0xc;
          iVar7 = iVar7 + 2;
          local_10 = local_10 - 1;
        } while (local_10 != 0);
        if (local_c == 3) {
          *((undefined1 *)GEN_TOP(((int)this + 0x4ad))) = 0;
        }
      }
    }
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentFreeCompany::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077e020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77e020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x7c, 4, 4);
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint * this_01;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78);
  uVar2 = F_0077df00(this GEN_EDX_FWD);
  if (((*(int *)(this + 8) != 0) && (this[0x20] == (undefined1)0x0)) &&
     (this[0x175] != (undefined1)0x0)) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x68))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x1c));
    if ((char)uVar2 != '\0') {
      this_00 = *(undefined * PTR32 *)(this + 0x10);
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      (*(undefined4 *)(gen_frame + 0x5c)) = 0;
      (*(undefined4 *)(gen_frame + 0x64)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      F_0043be20(this_00 GEN_EDX_ARG,this + 0x178);
      F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      piVar3 = *(int * PTR32 *)(this + 0x10);
      iVar4 = *piVar3;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar4 + 4))))(piVar3,((undefined1 *)(gen_frame + 0x0)));
      ((code *)*((gen_code32 *)GEN_TOP((iVar4 + 0xc))))(piVar3,this + 0x178,uVar2);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x58)) = 3;
      bVar1 = F_00441290(*(undefined4 *)(this + 0x14) GEN_EDX_ARG,9);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x64)) GEN_EDX_ARG,4);
      (*(uint *)(gen_frame + 0x68)) = (uint)bVar1;
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x6c)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x70)) = uVar2;
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x1c),4,&(*(undefined4 *)(gen_frame + 0x54)));
      this[0x175] = (undefined1)0x0;
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      this_01 = &(*(uint *)(gen_frame + 0x74));
      iVar4 = 3;
      do {
        this_01 = this_01 - 2;
        uVar2 = F_005a2670(this_01 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
    }
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentFreeCompany::vf13 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077e160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77e160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == 3) {
    this[0x20] = (undefined1)0x0;
    if (*(int *)(this + 0x14) != 0) {
      F_00441ed0(*(int *)(this + 0x14) GEN_EDX_FWD,0);
    }
    this[0x21] = (undefined1)0x0;
    if (*(int *)(this + 0x14) != 0) {
      F_00436dc0(*(int *)(this + 0x14) GEN_EDX_ARG,0);
    }
    this[0x22] = (undefined1)0x0;
    if (*(int *)(this + 0x14) != 0) {
      F_00436de0(*(int *)(this + 0x14) GEN_EDX_ARG,0);
    }
    this[0x23] = (undefined1)0x3;
    if (*(int *)(this + 0x14) != 0) {
      F_00436dd0(*(int *)(this + 0x14) GEN_EDX_ARG,3);
    }
    this[0x24] = (undefined1)0x0;
    if (*(int *)(this + 0x14) != 0) {
      F_00436df0(*(int *)(this + 0x14) GEN_EDX_ARG,0);
    }
    F_0090d130(this + 0xc4 GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_0077e1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077e1e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(byte param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x77e1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(byte param_6 = (byte)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,0x2a);
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,0x26);
    uVar4 = 0;
    if (uVar3 != 0) {
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
      uVar4 = F_00434d60((uint)param_6);
      if (**((uint * PTR32 *)GEN_TOP((uVar2 + 0x20))) != uVar4) {
        **((uint * PTR32 *)GEN_TOP((uVar2 + 0x20))) = uVar4;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar4 = F_00461bb0(this GEN_EDX_ARG,0xa50,(uint)param_6);
      F_00431250(uVar3 GEN_EDX_ARG,3,uVar4,uVar5,uVar6,uVar7);
      F_00431250(uVar3 GEN_EDX_ARG,0,param_4,0,1,0);
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar4 = F_00461190(this GEN_EDX_ARG,0xa07,param_5);
      F_00431250(uVar3 GEN_EDX_ARG,1,uVar4,uVar5,uVar6,uVar7);
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      uVar4 = F_00461bb0(this GEN_EDX_ARG,0x17,param_7);
      F_00431250(uVar3 GEN_EDX_ARG,2,uVar4,uVar5,uVar6,uVar7);
      uVar4 = F_0042e430(((undefined *)GEN_TOP((param_1 + 0x68))) GEN_EDX_ARG,param_5);
    }
  }
  return uVar4;
}

/* ref: FUN_0077e2e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077e2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77e2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x60))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyOrganizeSheet::vf13 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077e310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77e310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfile::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077e320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77e320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined4 *)(this + 0x10) = 0xe0000000;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfile::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077e360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77e360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x214, 12);
  undefined1 AVar1;
  undefined8 uVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined * pvVar6;
  int * piVar7;
  int iVar8;
  uint uVar9;
  char * pcVar10;
  uint * this_00;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined * pAVar14;
  undefined4 uVar15;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x210);
  if (*(int *)(this + 0xc) != 2) {
    return REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x210);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar3 == '\0') {
    *(undefined4 *)(this + 0xc) = 0;
    return uVar3;
  }
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x68))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 8));
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  puVar5 = ((undefined4 *)(gen_frame + 0x1a4));
  iVar8 = 0xc;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 2;
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  if (*(int *)(this + 0x28) == 0 && *(int *)(this + 0x2c) == 0) {
    F_005a2710(((undefined4 *)(gen_frame + 0x1a4)) GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x1a4))[1] = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b4)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x1b8)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1bc)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1c0)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1c4)) GEN_EDX_ARG,6);
    AVar1 = this[0x46];
    (*(char * PTR32 *)(gen_frame + 0x1c8)) = "";
    F_005a2710(((undefined1 *)(gen_frame + 0x1cc)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x1d0)) = (uint)(byte)AVar1;
    F_005a2710(((undefined1 *)(gen_frame + 0x1d4)) GEN_EDX_ARG,6);
    (*(char * PTR32 *)(gen_frame + 0x1d8)) = "";
    F_005a2710(((undefined1 *)(gen_frame + 0x1dc)) GEN_EDX_ARG,6);
    (*(char * PTR32 *)(gen_frame + 0x1e0)) = "";
    F_005a2710(((undefined1 *)(gen_frame + 0x1e4)) GEN_EDX_ARG,6);
    (*(char * PTR32 *)(gen_frame + 0x1e8)) = "";
    F_005a2710(((undefined1 *)(gen_frame + 0x1ec)) GEN_EDX_ARG,6);
    (*(char * PTR32 *)(gen_frame + 0x1f0)) = "";
    F_005a2710(((undefined1 *)(gen_frame + 0x1f4)) GEN_EDX_ARG,6);
    (*(char * PTR32 *)(gen_frame + 0x1f8)) = "";
    F_005a2710(((undefined1 *)(gen_frame + 0x1fc)) GEN_EDX_ARG,6);
    (*(char * PTR32 *)(gen_frame + 0x200)) = "";
    F_005a2710(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,6);
    (*(char * PTR32 *)(gen_frame + 0x208)) = "";
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x5c))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 8),0xd,((undefined4 *)(gen_frame + 0x1a4)));
    goto LAB_0077e809;
  }
  uVar11 = 0;
  uVar3 = F_00ab41c0((uint)(byte)this[0x47]);
  if (uVar3 != 0) {
    uVar11 = *((undefined4 *)GEN_TOP((uVar3 + 0xc)));
  }
  uVar3 = (uint)(byte)this[0x47];
  uVar9 = (uint)(byte)this[0x44];
  uVar12 = 0xa4c;
  uVar13 = REFG(undefined4, 0x108cc50);
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = F_00461d60(pvVar6 GEN_EDX_ARG,uVar12,uVar9,uVar3,uVar11);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar3,uVar13);
  piVar4 = *(int * PTR32 *)(this + 4);
  uVar11 = REFG(undefined4, 0x108cc50);
  uVar3 = F_0042a990(this + 0x9c GEN_EDX_ARG);
  uVar13 = 0xa4d;
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG)));
  uVar3 = F_00461190(pvVar6 GEN_EDX_ARG,uVar13,uVar3);
  F_0042cc20(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,uVar3,uVar11);
  uVar11 = *(undefined4 *)(this + 0x3c);
  uVar12 = 0x17;
  uVar13 = REFG(undefined4, 0x108cc50);
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = F_00461bb0(pvVar6 GEN_EDX_ARG,uVar12,uVar11);
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar3,uVar13);
  uVar3 = (uint)*(ushort *)(this + 0x40);
  uVar9 = (uint)*(ushort *)(this + 0x42);
  uVar13 = 0xa4f;
  uVar11 = REFG(undefined4, 0x108cc50);
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  uVar3 = F_00461c60(pvVar6 GEN_EDX_ARG,uVar13,uVar9,uVar3);
  F_0042cc20(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG,uVar3,uVar11);
  pAVar14 = this + 0x144;
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  F_0043be20(pvVar6 GEN_EDX_ARG,pAVar14);
  F_0042b630(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  iVar8 = *piVar7;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x150)));
  ((code *)*((gen_code32 *)GEN_TOP((iVar8 + 0xc))))(piVar7,this + 0x144,uVar3);
  uVar11 = 0;
  pcVar10 = "";
  switch((unsigned int)(uintptr_t)(this[0x45])) {
  case (undefined1)0x1: ;
  case (undefined1)0x2: ;
    uVar11 = 3;
    uVar13 = 0xa48;
    goto LAB_0077e553;
  case (undefined1)0x3: ;
    uVar11 = 1;
    break;
  case (undefined1)0x4: ;
    uVar11 = 2;
    uVar13 = 0xa53;
LAB_0077e553: ;
    uVar15 = 0;
    uVar12 = 0;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    pcVar10 = ((char *)GEN_TOP(F_0043bd00(pvVar6 GEN_EDX_ARG,uVar13,uVar12,uVar15)));
  }
  uVar2 = *(undefined8 *)(this + 0x30);
  F_005a2710(((undefined4 *)(gen_frame + 0x1a4)) GEN_EDX_ARG,4);
  uVar13 = *(undefined4 *)(this + 0x30);
  ((undefined4 *)(gen_frame + 0x1a4))[1] = (int)((ulonglong)uVar2 >> 0x20);
  F_005a2710(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1b0)) = uVar13;
  uVar3 = F_00434d60((uint)(byte)this[0x44]);
  F_005a2710(((undefined1 *)(gen_frame + 0x1b4)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x1b8)) = uVar3;
  F_005a2710(((undefined1 *)(gen_frame + 0x1bc)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c0)) = uVar11;
  F_005a2710(((undefined1 *)(gen_frame + 0x1c4)) GEN_EDX_ARG,6);
  AVar1 = this[0x46];
  (*(char * PTR32 *)(gen_frame + 0x1c8)) = pcVar10;
  F_005a2710(((undefined1 *)(gen_frame + 0x1cc)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x1d0)) = (uint)(byte)AVar1;
  pcVar10 = ((char *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
  F_005a2710(((undefined1 *)(gen_frame + 0x1d4)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x1d8)) = pcVar10;
  pcVar10 = ((char *)GEN_TOP(F_0042a990(this + 0x48 GEN_EDX_ARG)));
  F_005a2710(((undefined1 *)(gen_frame + 0x1dc)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x1e0)) = pcVar10;
  pcVar10 = ((char *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG)));
  F_005a2710(((undefined1 *)(gen_frame + 0x1e4)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x1e8)) = pcVar10;
  pcVar10 = ((char *)GEN_TOP(F_0042a990(this + 0xf0 GEN_EDX_ARG)));
  F_005a2710(((undefined1 *)(gen_frame + 0x1ec)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x1f0)) = pcVar10;
  pcVar10 = ((char *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG)));
  F_005a2710(((undefined1 *)(gen_frame + 0x1f4)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x1f8)) = pcVar10;
  pcVar10 = ((char *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG)));
  F_005a2710(((undefined1 *)(gen_frame + 0x1fc)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x200)) = pcVar10;
  pcVar10 = ((char *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG)));
  F_005a2710(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x208)) = pcVar10;
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x5c))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 8),0xd,((undefined4 *)(gen_frame + 0x1a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x150)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xfc)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
LAB_0077e809: ;
  *(undefined4 *)(this + 0xc) = 0;
  this_00 = &(*(uint *)(gen_frame + 0x20c));
  iVar8 = 0xc;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
  return uVar3;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfile::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077e850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x77e850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((((param_2 != ((byte *)GEN_TOP(0x0))) && (param_3 == 1)) && ((*param_2 & 0xf) != 0)) &&
     (0x7fffffff < *(uint *)(param_2 + 4))) {
    *(undefined4 *)(this + 8) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
    uVar1 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0077e890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077e890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77e890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if (((((char)uVar1 != '\0') && (*((int *)GEN_TOP(((int)this + 0xc))) == 1)) &&
      ((uVar1 = *((uint *)GEN_TOP(((int)this + 0x10))), uVar1 != 0xe0000000 ||
       (*((int *)GEN_TOP(((int)this + 0x18))) != 0 || *((int *)GEN_TOP(((int)this + 0x1c))) != 0)))) &&
     ((uVar1 == param_1[6] ||
      ((*((int *)GEN_TOP(((int)this + 0x18))) == *param_1 &&
       (uVar1 = *((uint *)GEN_TOP(((int)this + 0x1c))), uVar1 == param_1[1])))))) {
    *((int *)GEN_TOP(((int)this + 0x20))) = *param_1;
    *((int *)GEN_TOP(((int)this + 0x24))) = param_1[1];
    *((int *)GEN_TOP(((int)this + 0x28))) = param_1[2];
    *((int *)GEN_TOP(((int)this + 0x2c))) = param_1[3];
    *((int *)GEN_TOP(((int)this + 0x30))) = param_1[4];
    *((int *)GEN_TOP(((int)this + 0x34))) = param_1[5];
    *((int *)GEN_TOP(((int)this + 0x38))) = param_1[6];
    *((int *)GEN_TOP(((int)this + 0x3c))) = param_1[7];
    *((short *)GEN_TOP(((int)this + 0x40))) = (short)param_1[9];
    *((undefined2 *)GEN_TOP(((int)this + 0x42))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x26)));
    *((char *)GEN_TOP(((int)this + 0x44))) = (char)param_1[10];
    *((undefined1 *)GEN_TOP(((int)this + 0x45))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x29)));
    *((undefined1 *)GEN_TOP(((int)this + 0x46))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x2a)));
    *((undefined1 *)GEN_TOP(((int)this + 0x47))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x23)));
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,(int)param_1 + 0x2b);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,(int)param_1 + 0x41);
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,param_1 + 0x12);
    uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x144))) GEN_EDX_ARG,param_1 + 0x1a);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 2;
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf16 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077e9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x77e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) || (*(int *)(this + 0x68) != 0)) &&
     (piVar2 = *(int * PTR32 *)(this + 0xc), piVar2 != ((int *)GEN_TOP(0x0)))) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_FWD);
    if (in_EAX == 0) {
      iVar1 = *(int *)(this + 0x68);
      if (iVar1 != 0) {
        *(undefined4 *)(this + 0x68) = 0;
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,iVar1,0);
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))
                        (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar3;
    }
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_0077ea10(void)
{
  GEN_ENTER(0x77ea10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf13 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077ea20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77ea20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInputString::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077ea30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77ea30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInputString::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077ea60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77ea60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInputString::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0077ea70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x77ea70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar2 = 0;
  if (((param_4 == 0) && ((*param_2 & 0xf) != 0)) && (*(int *)(param_2 + 4) != 0)) {
    if (*(int *)(param_2 + 4) == 1) {
      if ((param_2[8] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0xc);
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
      this_00 = *((undefined * PTR32 *)GEN_TOP((uVar1 + 0x108)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar3,REFG(undefined4, 0x108cc50));
        F_0077d890(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    uVar2 = 1;
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0077eb20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077eb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77eb20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (((*param_1 & 0xf) == 0) || ((-2 < *(int *)(param_1 + 4) && (*(int *)(param_1 + 4) < 1)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1480))) = 0;
  return 1;
}

/* ref: FUN_0077eb60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077eb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77eb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    if (*((int *)GEN_TOP(((int)this + 0x1490))) != 9999) {
      F_00a3d7c0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x1490))),(uint)*((ushort *)GEN_TOP(((int)this + 0x1494))))
      ;
      uVar2 = F_00a3a150(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1490))),
                           (int)*((short *)GEN_TOP(((int)this + 0x1494))));
      if (uVar2 != 0) {
        uVar2 = F_00a3a150(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1490))),
                             (int)*((short *)GEN_TOP(((int)this + 0x1494))));
        if ((*((char *)GEN_TOP((uVar2 + 6))) != '\0') || (*((int *)GEN_TOP((uVar2 + 8))) != 0)) {
          iVar1 = *((int *)GEN_TOP(((int)this + 0x14a0)));
          if (iVar1 == 9999) {
            if (*((int *)GEN_TOP(((int)this + 0x149c))) == 0) {
              F_00a41970(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1490))),
                           (uint)*((ushort *)GEN_TOP(((int)this + 0x1494))),1);
            }
            else {
              F_00a41970(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1490))),
                           (uint)*((ushort *)GEN_TOP(((int)this + 0x1494))),*((int *)GEN_TOP(((int)this + 0x149c))));
            }
          }
          else if (*((int *)GEN_TOP(((int)this + 0x149c))) == 0) {
            F_00a47f70(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1490))),
                         (uint)*((ushort *)GEN_TOP(((int)this + 0x1494))),iVar1,
                         (uint)*((ushort *)GEN_TOP(((int)this + 0x14a4))),1);
          }
          else {
            F_00a493a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1490))),
                         (uint)*((ushort *)GEN_TOP(((int)this + 0x1494))),iVar1,
                         (uint)*((ushort *)GEN_TOP(((int)this + 0x14a4))),*((int *)GEN_TOP(((int)this + 0x149c))));
          }
          goto LAB_0077ecbf;
        }
      }
      uVar3 = 0x745;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
      F_0046a630(this_00 GEN_EDX_ARG,uVar3);
    }
  }
  else if (*((int *)GEN_TOP(((int)this + 0x1490))) != 9999) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x1490))),(uint)*((ushort *)GEN_TOP(((int)this + 0x1494))));
  }
LAB_0077ecbf: ;
  *((undefined4 *)GEN_TOP(((int)this + 0x1484))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1498))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x149c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1490))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x1494))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14a0))) = 9999;
  *((undefined2 *)GEN_TOP(((int)this + 0x14a4))) = 0;
  return 1;
}

/* ref: FUN_0077ed10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077ed10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77ed10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint * puVar1;
  bool bVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  undefined * this_01;
  undefined * this_02;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  bVar2 = false;
  if ((*((int *)GEN_TOP(((int)this + 0x18))) != 0) &&
     ((bVar3 = F_00441290(*((int *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0x20), bVar3 != 0 ||
      (bVar3 = F_00441290(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,0x1f), bVar3 != 0)))) {
    bVar2 = true;
  }
  this_00 = ((undefined *)GEN_TOP(F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x55f1)));
  if ((this_00 == ((undefined *)GEN_TOP(0x0))) || (!bVar2)) {
    iVar9 = 0xcc;
    iVar6 = 0x3ec;
    iVar8 = 0x12;
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) - 4 + iVar6))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) - 4 + iVar6))) = 0;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 4 + iVar6))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + 4 + iVar6))) = 0;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + iVar6))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + iVar6))) = 0;
        *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
      }
      if (*((char * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + iVar9))) != "") {
        *((char * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + iVar9))) = "";
        *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
      }
      iVar6 = iVar6 + 0xc;
      iVar9 = iVar9 + 4;
      iVar8 = iVar8 - 1;
    } while (iVar8 != 0);
    return 0;
  }
  local_c = 2;
  local_10 = 0xe0;
  local_20 = 0xcc;
  local_1c = 0x3ec;
  do {
    uVar10 = 0;
    local_18 = 0;
    local_14 = 0xffff;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    iVar6 = uVar4 + 0x29188 + local_10;
    uVar4 = F_0042a990(iVar6 + 4 GEN_EDX_ARG);
    iVar8 = *((int *)GEN_TOP((iVar6 + 0x5c)));
    bVar3 = *((byte *)GEN_TOP((iVar6 + 100)));
    uVar7 = 0;
    if (0 < *((int *)GEN_TOP(((int)this_00 + 0xc)))) {
      do {
        this_01 = ((undefined *)GEN_TOP(F_00a37da0(this_00 GEN_EDX_ARG,uVar7)));
        if (this_01 != ((undefined *)GEN_TOP(0x0))) {
          if (*((char *)GEN_TOP(((int)this_01 + 6))) == '\0') {
            uVar5 = *((uint *)GEN_TOP(((int)this_01 + 8)));
            if ((*((byte *)GEN_TOP(((int)this_01 + 0x14))) & 1) != 0) {
              uVar5 = uVar5 + 1000000;
            }
          }
          else {
            this_02 = ((undefined *)GEN_TOP(F_00a3a860(this_01 GEN_EDX_ARG)));
            uVar5 = F_0046e5e0(this_02 GEN_EDX_ARG);
          }
          if (uVar5 == local_c) {
            local_18 = F_00a3a8a0(this_01 GEN_EDX_ARG);
            uVar10 = F_00a37c50(this_01 GEN_EDX_ARG);
            uVar10 = (uint)(uVar10 != 0);
            local_14 = uVar7;
            break;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < *((int *)GEN_TOP(((int)this_00 + 0xc))));
    }
    if (*((int *)GEN_TOP((local_1c - 4 + *((int *)GEN_TOP((param_1 + 0x20)))))) != iVar8) {
      *((int *)GEN_TOP((local_1c - 4 + *((int *)GEN_TOP((param_1 + 0x20)))))) = iVar8;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    uVar10 = uVar10 << 0x10 | local_14;
    puVar1 = ((uint *)GEN_TOP((local_1c + 4 + *((int *)GEN_TOP((param_1 + 0x20))))));
    if (*puVar1 != uVar10) {
      *puVar1 = uVar10;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    uVar10 = local_18 << 0x10 | (uint)bVar3;
    if (*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + local_1c))) != uVar10) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x20))) + local_1c))) = uVar10;
      *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 1;
    }
    if (uVar4 != *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + local_20)))) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x20))) + local_20))) = uVar4;
      *((undefined1 *)GEN_TOP((param_2 + 0x1d))) = 1;
    }
    local_c = local_c + 1;
    local_10 = local_10 + 0x70;
    local_20 = local_20 + 4;
    local_1c = local_1c + 0xc;
    if (0x110 < local_20) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0077ef40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077ef40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77ef40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x80, 0, 4);
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) == ((undefined *)GEN_TOP(0x0))) {
      uVar2 = 0;
    }
    else {
      bVar1 = F_00436c80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,0);
      uVar2 = (uint)bVar1;
    }
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0xe;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_005a2710(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x5c))))(piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0xf,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x78));
    iVar5 = 0xe;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  return uVar2;
}

/* ref: FUN_0077eff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077eff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77eff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x80, 0, 4);
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    puVar4 = ((undefined4 *)(gen_frame + 0x0));
    iVar6 = 0xe;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,4);
    cVar1 = *((char *)GEN_TOP(((int)this + 0x14ec)));
    ((undefined4 *)(gen_frame + 0x0))[1] = 0x10;
    F_005a2710(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x44)) = (uint)(cVar1 == '\0');
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x14f0)));
    F_005a2710(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x4c)) = uVar2;
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0xf,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x78));
    iVar6 = 0xe;
    do {
      this_00 = this_00 - 2;
      uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  return uVar3;
}

/* ref: FUN_0077f0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077f0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined1 * puVar5;
  uint local_c;
  
  uVar2 = 0;
  local_c = 0;
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    bVar3 = 0;
    puVar5 = &REFG(undefined1, 0x10c0595);
    do {
      iVar4 = 0;
      bVar1 = F_00441290(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,puVar5[1]);
      if (bVar1 == 0) {
        bVar1 = F_00441290(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,*puVar5);
        if (bVar1 == 0) {
          bVar1 = F_00441290(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,puVar5[-1]);
          if (bVar1 != 0) {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = 1;
        }
      }
      else {
        iVar4 = 2;
      }
      bVar1 = bVar3 & 0x1f;
      puVar5 = puVar5 + 3;
      bVar3 = bVar3 + 2;
      uVar2 = local_c | iVar4 << bVar1;
      local_c = uVar2;
    } while ((int)puVar5 < 0x10c05a4);
  }
  return uVar2;
}

/* ref: FUN_0077f140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077f140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    bVar1 = F_00441290(*((int *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0x20);
    if (bVar1 != 0) {
      return 2;
    }
    bVar1 = F_00441290(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,0x1f);
    if (bVar1 != 0) {
      return 1;
    }
    bVar1 = F_00441290(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,0x1e);
    if (bVar1 != 0) {
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0077f190 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077f190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    bVar1 = F_00441290(*((int *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0x23);
    if (bVar1 != 0) {
      return 2;
    }
    bVar1 = F_00441290(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,0x22);
    if (bVar1 != 0) {
      return 1;
    }
    bVar1 = F_00441290(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,0x21);
    if (bVar1 != 0) {
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0077f1e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077f1e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77f1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (param_2 < 3) {
    *((byte *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  }
  return param_2;
}

/* ref: FUN_0077f210 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077f210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77f210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (param_2 < 5) {
    *((byte *)GEN_TOP((in_ecx + 0x1d))) = param_2;
  }
  return param_2;
}

/* ref: FUN_0077f240 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1480))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1480))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1480))) = 0;
  }
  return;
}

/* ref: FUN_0077f280 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1484))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1484))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1484))) = 0;
  }
  return;
}

/* ref: FUN_0077f2c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1488))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1488))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1488))) = 0;
  }
  return;
}

/* ref: FUN_0077f300 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x148c))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x148c))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x148c))) = 0;
  }
  return;
}

/* ref: FUN_0077f340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077f340(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77f340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar2;
  undefined3 extraout_var_02 = 0;
  
  if (param_2 == '\0') {
    if (*((char *)GEN_TOP((param_1 + 0x1c))) == '\0') {
      bVar1 = F_00a3a5d0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*((byte *)GEN_TOP((param_1 + 0x1d))) + 20000);
      if (bVar1 != 0) {
        *((uint *)GEN_TOP((param_1 + 0x14f0))) =
             *((uint *)GEN_TOP((param_1 + 0x14f0))) | 1 << GEN_SHC(*((byte *)GEN_TOP((param_1 + 0x1d))), *((byte *)GEN_TOP((param_1 + 0x1d))));
        return CONCAT31(extraout_var_01,bVar1);
      }
      uVar2 = 1 << GEN_SHC(*((byte *)GEN_TOP((param_1 + 0x1d))), *((byte *)GEN_TOP((param_1 + 0x1d))));
      if ((*((uint *)GEN_TOP((param_1 + 0x14f0))) & uVar2) != 0) goto LAB_0077f378;
    }
    else if (*((char *)GEN_TOP((param_1 + 0x1c))) == '\x01') {
      bVar1 = F_00a3a5d0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x55f1);
      if (bVar1 != 0) {
        *((uint *)GEN_TOP((param_1 + 0x14f0))) = *((uint *)GEN_TOP((param_1 + 0x14f0))) | 0x20;
        return CONCAT31(extraout_var_00,bVar1);
      }
      if ((*((byte *)GEN_TOP((param_1 + 0x14f0))) & 0x20) != 0) {
        return CONCAT31(extraout_var_00,1);
      }
    }
    bVar1 = F_00a37a90(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var_02,bVar1);
  }
  else {
    bVar1 = F_00a3a5d0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,22000);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      *((uint *)GEN_TOP((param_1 + 0x14f0))) = *((uint *)GEN_TOP((param_1 + 0x14f0))) | 0x40;
      return uVar2;
    }
    if ((*((byte *)GEN_TOP((param_1 + 0x14f0))) & 0x40) != 0) {
LAB_0077f378: ;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}

/* ref: FUN_0077f410 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077f410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77f410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  byte bVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  if (iVar1 != 0) {
    if (param_1 == 0x55f1) {
      bVar2 = F_00441290(iVar1 GEN_EDX_FWD,0x20);
      return bVar2 != 0;
    }
    bVar2 = (char)param_1 - 0x20;
    if (bVar2 < 5) {
      bVar2 = F_00441290(iVar1 GEN_EDX_ARG,(&REFG(undefined1, 0x10c0596))[(int)((uint)bVar2 * 3)]);
      return bVar2 != 0;
    }
  }
  return 0;
}

/* ref: FUN_0077f460 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0077f460(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77f460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (((param_1 < 20000) || (0x4e24 < param_1)) && (param_1 != 0x55f1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_0077f490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077f490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77f490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((char *)GEN_TOP(((int)this + 0x1c))) == '\0') {
    uVar1 = F_00a3a150(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*((byte *)GEN_TOP(((int)this + 0x1d))) + 20000,param_1);
  }
  else if (*((char *)GEN_TOP(((int)this + 0x1c))) == '\x01') {
    uVar1 = F_00a3a150(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,0x55f1,param_1);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_0077f4e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077f4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77f4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if ((((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)
     ) {
    F_00440ee0(*((undefined4 *)GEN_TOP(((int)this + 0x18))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  return 1;
}

/* ref: FUN_0077f520 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077f520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77f520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (((*param_1 & 0xf) == 0) || ((-2 < *(int *)(param_1 + 4) && (*(int *)(param_1 + 4) < 1)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  return 1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyExchange::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077f550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77f550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if (((char)uVar2 != '\0') && (uVar2 = *(int *)(this + 0x24) - 1, uVar2 == 0)) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x68))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 8));
    if ((char)uVar2 != '\0') {
      *(undefined4 *)(this + 0x24) = 0;
      if (*(int *)(this + 0x14) != 0) {
        bVar1 = F_00436880(*(int *)(this + 0x14) GEN_EDX_ARG);
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 != 3) {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0077f5e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0077f5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,0x39);
  uVar4 = uVar3;
  if ((uVar3 != 0) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    bVar1 = F_00441290(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0xc);
    uVar4 = (uint)(bVar1 != 0);
    if (**((uint * PTR32 *)GEN_TOP((uVar3 + 0x20))) != uVar4) {
      **((uint * PTR32 *)GEN_TOP((uVar3 + 0x20))) = uVar4;
      *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
    }
  }
  return uVar4;
}

/* ref: FUN_0077f630 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1c))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  }
  return;
}

/* ref: FUN_0077f660 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfileEdit::vf1 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0077f690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x77f690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  int iVar1;
  undefined * this_00;
  uint uVar2;
  undefined1 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  uVar3 = 0;
  if ((*param_2 & 0xf) == 0) {
LAB_0077f6c2: ;
    if ((param_2[8] & 0xf) == 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_2 + 0xc);
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD);
    this_00 = *((undefined * PTR32 *)GEN_TOP((uVar2 + 0x108)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
      F_0077d9f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 < -2) goto LAB_0077f723;
    if (-1 < iVar1) {
      if (iVar1 != 0) goto LAB_0077f723;
      goto LAB_0077f6c2;
    }
  }
  uVar3 = 1;
  *(undefined4 *)(this + 8) = 0;
LAB_0077f723: ;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfileEdit::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: FUN_0077f770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077f770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x77f770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_0077f780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077f780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77f780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    uVar2 = F_0044e020(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0x490))) GEN_EDX_FWD,(int)this + 0xc);
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar1 != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x54))))(piVar3 GEN_EDX_ARG,iVar1,0);
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1,param_2,0);
    uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  return uVar2;
}

/* ref: FUN_0077f800 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x48)));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  if (iVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,iVar1,0);
  }
  return;
}

/* ref: FUN_0077f830 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x4c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  if (iVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,iVar1,0);
  }
  return;
}

/* ref: FUN_0077f860 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  if (iVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,iVar1,0);
  }
  return;
}

/* ref: FUN_0077f890 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0077f890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x77f890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x54)));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  if (iVar1 != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,iVar1,0);
  }
  return;
}

/* ref: FUN_0077f8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077f8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x77f8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  if ((((0 < param_3) && (param_2 != 0)) && (param_4 != 0)) && (*((int *)GEN_TOP(((int)this + 0x54))) != 0)) {
    F_0077f890(this GEN_EDX_FWD);
    F_0077f780(this GEN_EDX_ARG,param_2,param_3);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_0077f910 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0077f910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77f910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
    this_00 = ((undefined *)GEN_TOP((param_1 + param_2 * 8)));
    F_005a2710(this_00 GEN_EDX_FWD,4);
    *((undefined4 *)GEN_TOP(((int)this_00 + 4))) = uVar2;
    F_005a2710(((undefined *)GEN_TOP(((int)this_00 + 8))) GEN_EDX_ARG,4);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xc))) = uVar1;
  }
  return;
}

/* ref: FUN_0077f960 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077f960(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77f960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = 0;
  local_8 = 0;
  puVar2 = ((uint *)GEN_TOP((param_1 + 0x1034)));
  do {
    if (0xff < local_8) break;
    F_005a2710(puVar2 - 1 GEN_EDX_ARG,4);
    *puVar2 = uVar3;
    uVar1 = F_004353d0(uVar3);
    F_005a2710(puVar2 + 1 GEN_EDX_ARG,4);
    local_8 = local_8 + 1;
    puVar2[2] = uVar1;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 0x40);
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x2030))) GEN_EDX_ARG,4);
  *((uint *)GEN_TOP((param_1 + 0x2034))) = local_8;
  return local_8;
}

/* ref: FUN_0077f9e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077f9e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77f9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = 0;
  local_8 = 0;
  puVar2 = ((uint *)GEN_TOP((param_1 + 0x203c)));
  do {
    if (0x3f < local_8) break;
    F_005a2710(puVar2 - 1 GEN_EDX_ARG,4);
    *puVar2 = uVar3;
    uVar1 = F_004353c0(uVar3);
    F_005a2710(puVar2 + 1 GEN_EDX_ARG,4);
    local_8 = local_8 + 1;
    puVar2[2] = uVar1;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 0x40);
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x2438))) GEN_EDX_ARG,4);
  *((uint *)GEN_TOP((param_1 + 0x243c))) = local_8;
  return local_8;
}

/* ref: FUN_0077fa60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077fa60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77fa60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte * pbVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  pbVar1 = ((byte *)GEN_TOP(F_00ab4250(param_2)));
  if ((pbVar1 != ((byte *)GEN_TOP(0x0))) && (uVar4 = 0, *pbVar1 != 0)) {
    puVar3 = ((undefined4 *)GEN_TOP((param_1 + 0x2444)));
    do {
      if (0xf < uVar2) break;
      F_005a2710(puVar3 - 1 GEN_EDX_ARG,4);
      *puVar3 = 0xffffff;
      F_005a2710(puVar3 + 1 GEN_EDX_ARG,4);
      puVar3[2] = uVar4;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar4 < *pbVar1);
  }
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x2540))) GEN_EDX_ARG,4);
  *((uint *)GEN_TOP((param_1 + 0x2544))) = uVar2;
  return uVar2;
}

/* ref: FUN_0077faf0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0077faf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77faf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar4 = 0;
  puVar3 = ((undefined4 *)GEN_TOP((param_1 + 0x254c)));
  do {
    if (0xf < uVar2) break;
    puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c05d0))[uVar4];
    F_005a2710(puVar3 - 1 GEN_EDX_ARG,4);
    *puVar3 = puVar1;
    F_005a2710(puVar3 + 1 GEN_EDX_ARG,4);
    puVar3[2] = uVar4;
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 4;
    uVar2 = uVar2 + 1;
  } while (uVar4 < 0x10);
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x2648))) GEN_EDX_ARG,4);
  *((uint *)GEN_TOP((param_1 + 0x264c))) = uVar2;
  return uVar2;
}

/* ref: FUN_0077fb70 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0077fb70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77fb70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined * puVar1;
  undefined * this;
  uint uVar2;
  uint local_8;
  
  uVar2 = 0;
  if (param_1 != 0) {
    local_8 = 0;
    this = ((undefined *)GEN_TOP((param_1 + 8)));
    do {
      if (0xf < local_8) break;
      puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10c05d0))[uVar2];
      F_005a2710(this GEN_EDX_ARG,4);
      *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = puVar1;
      F_005a2710(((undefined *)GEN_TOP(((int)this - 8))) GEN_EDX_ARG,4);
      local_8 = local_8 + 1;
      *((uint *)GEN_TOP(((int)this - 4))) = uVar2;
      uVar2 = uVar2 + 1;
      this = ((undefined *)GEN_TOP(((int)this + 0x10)));
    } while (uVar2 < 0x10);
    F_005a2710(((undefined *)GEN_TOP((param_1 + 0x100))) GEN_EDX_ARG,4);
    *((uint *)GEN_TOP((param_1 + 0x104))) = local_8;
  }
  return;
}

/* ref: FUN_0077fbe0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0077fbe0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x77fbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte * pbVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint local_8;
  
  if (param_1 != 0) {
    local_8 = 0;
    pbVar1 = ((byte *)GEN_TOP(F_00ab4250(param_2)));
    if ((pbVar1 != ((byte *)GEN_TOP(0x0))) && (uVar4 = 0, *pbVar1 != 0)) {
      puVar3 = ((uint *)GEN_TOP((param_1 + 4)));
      do {
        if (0xf < local_8) break;
        F_005a2710(puVar3 - 1 GEN_EDX_ARG,4);
        *puVar3 = uVar4;
        uVar2 = F_004353e0(param_2,uVar4);
        F_005a2710(puVar3 + 1 GEN_EDX_ARG,4);
        local_8 = local_8 + 1;
        puVar3[2] = uVar2;
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 4;
      } while (uVar4 < *pbVar1);
    }
    F_005a2710(((undefined *)GEN_TOP((param_1 + 0x100))) GEN_EDX_ARG,4);
    *((uint *)GEN_TOP((param_1 + 0x104))) = local_8;
  }
  return;
}

/* ref: FUN_0077fc80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077fc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77fc80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    bVar1 = F_00440e40(param_1,param_2);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0077fcb0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_0077fcb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x77fcb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1 < 3;
}

/* ref: FUN_0077fcf0 */
GEN_OWN GEN_FRAME uint F_0077fcf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x77fcf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *param_1 = param_2;
  param_1[1] = param_3;
  return (uint)param_1;
}

/* ref: FUN_0077fd10 */
GEN_OWN GEN_FRAME uint F_0077fd10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x77fd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  *param_1 = param_3;
  *param_2 = param_4;
  return (uint)param_2;
}

/* ref: FUN_0077fd30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0077fd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x77fd30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (((*param_1 & 0xf) == 0) || ((-2 < *(int *)(param_1 + 4) && (*(int *)(param_1 + 4) < 1)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 1;
}

/* ref: FUN_0077fd60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077fd60(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x77fd60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x250, 0, 4);
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined * this;
  int * piVar5;
  int iVar6;
  uint * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    puVar2 = ((undefined4 *)(gen_frame + 0x68));
    iVar6 = 0x3b;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
    F_005a2710(((undefined4 *)(gen_frame + 0x68)) GEN_EDX_ARG,4);
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x0)) = 0;
    uVar1 = (uint)param_2;
    ((undefined4 *)(gen_frame + 0x68))[1] = 4;
    puVar7 = ((uint *)(gen_frame + 0xb4));
    piVar5 = param_1 + uVar1 * 0x32 + 0x12;
    do {
      if ((uint)param_1[0xb] <= uVar1) break;
      if ((char)piVar5[2] != '\0') {
        F_00a3d750(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,piVar5[-5],(uint)*(ushort *)(piVar5 - 4));
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
        *(char *)piVar5 = (char)param_1[0xc];
        param_1[0xc] = param_1[0xc] + 1;
        uVar3 = piVar5[1];
        F_005a2710(puVar7 - 3 GEN_EDX_ARG,3);
        puVar7[-2] = uVar3;
        uVar3 = F_0042a990(piVar5 + 3 GEN_EDX_ARG);
        F_005a2710(puVar7 - 1 GEN_EDX_ARG,8);
        *puVar7 = uVar3;
        uVar4 = F_0042a990(piVar5 + 0x18 GEN_EDX_ARG);
        F_005a2710(puVar7 + 1 GEN_EDX_ARG,8);
        uVar3 = piVar5[-1];
        puVar7[2] = uVar4;
        F_005a2710(puVar7 + 3 GEN_EDX_ARG,3);
        iVar6 = piVar5[-4];
        puVar7[4] = uVar3;
        F_005a2710(puVar7 + 5 GEN_EDX_ARG,3);
        puVar7[6] = (int)(short)iVar6;
        puVar7 = puVar7 + 10;
      }
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
      uVar1 = uVar1 + 1;
      piVar5 = piVar5 + 0x32;
    } while ((*(uint *)(gen_frame + 0x0)) < 10);
    F_005a2710(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,4);
    (*(int *)(gen_frame + 0xa4)) = (*(int *)(gen_frame + 0x8));
    F_005a2710(((undefined1 *)(gen_frame + 0x238)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x23c)) = (uint)(param_3 != '\0');
    iVar6 = param_1[10];
    uVar8 = 0xd82;
    uVar9 = REFG(undefined4, 0x108cc50);
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x18))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG)));
    uVar1 = F_00461bb0(this GEN_EDX_ARG,uVar8,iVar6);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar1,uVar9);
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    F_005a2710(((undefined1 *)(gen_frame + 0x240)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x244)) = uVar1;
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x1c))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,param_1[2],0x3c,((undefined4 *)(gen_frame + 0x68)));
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    puVar7 = &(*(uint *)(gen_frame + 0x248));
    iVar6 = 0x3b;
    do {
      puVar7 = puVar7 - 2;
      uVar1 = F_005a2670(puVar7 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  return uVar1;
}

/* ref: FUN_0077ffc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0077ffc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x77ffc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  bool bVar2;
  
  bVar2 = *((char *)GEN_TOP((param_1 + 0x20))) == '\0';
  if (param_2 == '\0') {
    uVar1 = F_00a37920(param_3,param_4,bVar2);
  }
  else {
    uVar1 = (uint)*((byte *)GEN_TOP((param_1 + 0x21)));
    if (uVar1 == 0) {
      uVar1 = F_00a37950(bVar2);
      return uVar1;
    }
    if (uVar1 == 1) {
      uVar1 = F_00a37970(6,bVar2);
      return uVar1;
    }
    uVar1 = uVar1 - 2;
    if (uVar1 == 0) {
      uVar1 = F_00a37970(5,bVar2);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00780040 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00780040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x780040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ushort * puVar2;
  int iVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x4e54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  puVar2 = ((ushort *)GEN_TOP(((int)this + 0x38)));
  iVar3 = 100;
  do {
    uVar1 = *(uint *)(puVar2 - 2);
    if (uVar1 != 9999) {
      uVar1 = F_00a3d7c0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,uVar1,(uint)*puVar2);
    }
    puVar2[-0xffffffff00000002] = 9999;
    puVar2[-0xffffffff00000001] = 0;
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 8) = 0xff;
    puVar2[10] = 0xffff;
    puVar2[0xb] = 0xffff;
    *(undefined1 *)(puVar2 + 0xc) = 0;
    puVar2 = puVar2 + 100;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_007800b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007800b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7800b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * this_00;
  char * pcVar8;
  undefined4 uVar9;
  byte local_6;
  byte local_5;
  
  local_6 = *((byte *)GEN_TOP(((int)this + 0x4e54)));
  uVar5 = (uint)local_6;
  bVar3 = true;
  if (uVar5 < uVar5 + 10) {
    do {
      if (*((uint *)GEN_TOP(((int)this + 0x2c))) <= uVar5) break;
      piVar1 = ((int *)GEN_TOP((uVar5 * 200 + 0x34 + (int)this)));
      uVar5 = F_00a3a150(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,*piVar1,(int)*((short *)GEN_TOP((uVar5 * 200 + 0x38 + (int)this))));
      if (((*piVar1 != 9999) && ((char)piVar1[7] == '\0')) && (uVar5 != 0)) {
        uVar6 = F_00ab24a0(piVar1[2]);
        if (uVar6 == 0) {
          bVar3 = false;
        }
        else {
          bVar4 = *((byte *)GEN_TOP((uVar5 + 0x14))) >> 1 & 1;
          if (*((char *)GEN_TOP(((int)this + 0x20))) == '\0') {
            if ((bVar4 != 0) || (local_5 = 1, *((char *)GEN_TOP((uVar6 + 0xbb))) == '\0')) {
              local_5 = 0;
            }
            uVar5 = F_00a37840(piVar1[2]);
            bVar4 = local_5;
LAB_00780183: ;
            if (bVar4 != 0) {
              *(undefined1 *)(piVar1 + 7) = 1;
              uVar7 = F_00760600(piVar1[2],uVar6);
              piVar1[6] = uVar7;
              uVar6 = F_00ab6240(piVar1[2],1,uVar6);
              F_0042e430(piVar1 + 8 GEN_EDX_ARG,uVar6);
              if ((int)uVar5 < 0) {
                pcVar8 = "";
              }
              else {
                uVar9 = 0x12;
                uVar6 = uVar5;
                this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))
                                            (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
                pcVar8 = ((char *)GEN_TOP(F_00461bb0(this_00 GEN_EDX_ARG,uVar9,uVar6)));
              }
              F_0042e430(piVar1 + 0x1d GEN_EDX_ARG,pcVar8);
              *((int *)GEN_TOP(((int)this + 0x28))) =
                   *((int *)GEN_TOP(((int)this + 0x28))) + (((int)uVar5 < 0) - 1 & uVar5);
              goto LAB_00780215;
            }
          }
          else if (*((char *)GEN_TOP(((int)this + 0x20))) == '\x01') {
            uVar5 = 0xffffffff;
            goto LAB_00780183;
          }
          *piVar1 = 9999;
          *(undefined2 *)(piVar1 + 1) = 0;
          piVar1[2] = 0;
          piVar1[3] = 0;
          piVar1[4] = 0;
          *(undefined1 *)(piVar1 + 5) = 0xff;
          piVar1[6] = -1;
          *(undefined1 *)(piVar1 + 7) = 0;
        }
      }
LAB_00780215: ;
      local_6 = local_6 + 1;
      uVar5 = (uint)local_6;
    } while (uVar5 < *((byte *)GEN_TOP(((int)this + 0x4e54))) + 10);
    if (!bVar3) {
      return 0;
    }
  }
  cVar2 = *((char *)GEN_TOP(((int)this + 0x4e54)));
  bVar4 = cVar2 + 10;
  *((byte *)GEN_TOP(((int)this + 0x4e54))) = bVar4;
  bVar3 = *((uint *)GEN_TOP(((int)this + 0x2c))) < (uint)bVar4;
  F_0077fd60(this GEN_EDX_ARG,cVar2,bVar3);
  return bVar3;
}

/* ref: FUN_00780270 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00780270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x780270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x18))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return;
}

/* ref: FUN_007802a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007802a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7802a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1c))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  }
  return;
}

/* ref: FUN_007802d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007802d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7802d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 == '\0') {
    uVar2 = 0xd7f;
  }
  else {
    if (param_2 != '\x01') {
      return 0x10be51d;
    }
    uVar2 = 0xdc1;
  }
  uVar4 = 0;
  uVar3 = 0;
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  uVar1 = F_0043bd00(this GEN_EDX_ARG,uVar2,uVar3,uVar4);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00780340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x780340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  uVar3 = REFG(undefined4, 0x137104c);
  if (*((char *)GEN_TOP((REFG(undefined4, 0x137104c) + 8))) == '\0') {
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x6c))))(piVar1 GEN_EDX_FWD);
      if ((char)uVar3 == '\0') {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0xc))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG);
        this[0x60] = (undefined1)0x1;
      }
    }
  }
  else if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xc);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0xc) = 0;
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007803c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x7803c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))
                      (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                       ,param_8);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007803e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x7803e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x30))))
                      (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                       ,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00780410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x780410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 8))))
                      (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                       ,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x780430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  undefined4 * puVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  if (this[0x60] != (undefined1)0x0) {
    puVar1 = *(undefined4 * PTR32 *)(this + 0xc);
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
      *(undefined4 *)(this + 0xc) = 0;
    }
    this[0x60] = (undefined1)0x0;
  }
  piVar2 = *(int * PTR32 *)(this + 0xc);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))
                      (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar3;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x780470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if (*(int *)(this + 0xc) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 4))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1,param_2,param_3,param_4)
    ;
    return (uint)param_1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00780510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x780510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x5c))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00780530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x780530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x60))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00780550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x780550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 100))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00780570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x780570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x70))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
    return (uint)param_1;
  }
  F_0042cc20(param_1 GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  return (uint)param_1;
}

/* ref: FUN_007805d0 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_007805d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7805d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x78))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
    return (ushort)uVar1;
  }
  return 0;
}

/* ref: FUN_007805f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007805f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x7805f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x7c))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00780610 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00780610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x780610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0xc))) != 0) {
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x1fa8)));
  }
  return 0xff;
}

/* ref: FUN_00780630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x780630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x80))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00780650 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00780650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x780650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP((in_ecx + 0x10)));
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *((undefined1 *)GEN_TOP(((int)puVar3 + 2))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 2)));
  return;
}

/* ref: FUN_007806a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007806a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7806a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP((in_ecx + 0x2f)));
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *((undefined1 *)GEN_TOP(((int)puVar3 + 2))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 2)));
  return;
}

/* ref: FUN_007806c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007806c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7806c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x2f;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007806d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7806d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar1 = F_007601d0(this_00 GEN_EDX_ARG,uVar2);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf16 */
GEN_OWN GEN_NOFRAME unsigned int F_007806f0(void)
{
  GEN_ENTER(0x7806f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00780700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x780700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x137104c);
  if (*((char *)GEN_TOP((REFG(undefined4, 0x137104c) + 8))) == '\0') {
    this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x25d8)));
    F_00530190(this_00 GEN_EDX_FWD,((char *)REFP(0x10c0610)),0,1);
    F_00530190(this_00 GEN_EDX_ARG,((char *)REFP(0x10c05c4)),0,1);
    F_0069cb10(*(undefined * PTR32 *)(this + 0x1fa4) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7))));
    bVar1 = F_0069e910(*(undefined * PTR32 *)(this + 0x1fa4) GEN_EDX_ARG,1,0,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf18 */
GEN_OWN GEN_NOFRAME unsigned int F_00780760(void)
{
  GEN_ENTER(0x780760u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (*((char *)GEN_TOP((REFG(int, 0x137104c) + 8))) == '\0') {
    this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
    F_00530190(this GEN_EDX_ARG,((char *)REFP(0x10c0620)),0,0);
    F_00530190(this GEN_EDX_ARG,((char *)REFP(0x10c0630)),0,0);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf19 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007807a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7807a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    return 0;
  }
  uVar2 = F_00ab3630(0);
  return uVar2 != 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf21 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007807d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7807d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 0x1fb4) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x1fb4),0);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf28 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x780800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  F_0042cbc0(param_1 GEN_EDX_FWD,this + 0x1fdc);
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00780820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x780820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*(int *)(this + 0xf5c) != 0) &&
     (uVar1 = F_00ab3660((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7)))), uVar1 != 0)) {
    return *((uint *)GEN_TOP((uVar1 + 0x38)));
  }
  return 0;
}

/* ref: FUN_00780850 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00780850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x780850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))
              (this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1fac))),*((undefined4 *)GEN_TOP(((int)this + 0xf5c))),param_2);
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0xf7c))) GEN_EDX_ARG,3);
    *((undefined4 *)GEN_TOP(((int)this + 0xf80))) = param_1;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))
              (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x205,((undefined *)GEN_TOP(((int)this + 0xf7c))));
  }
  return;
}

/* ref: FUN_007808b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007808b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7808b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined3 uVar5;
  byte bVar6;
  bool bVar7;
  
  uVar4 = param_4;
  iVar1 = *param_3;
  *((uint *)GEN_TOP((param_2 + 0x54 + param_1 * 4))) = param_4;
  bVar2 = (byte)param_4;
  uVar5 = (undefined3)(param_4 >> 8);
  if (iVar1 < 0x6ce) {
    if (0x6cb < iVar1) {
      *((byte *)GEN_TOP((param_2 + 0x18))) = *((byte *)GEN_TOP((param_2 + 0x18))) & 0xe0 | bVar2;
      return uVar4;
    }
    switch((unsigned int)(uintptr_t)(iVar1)) {
    case 200: ;
      if (param_4 != 0) {
        *((undefined1 *)GEN_TOP((param_2 + 3))) = 0;
        return uVar4;
      }
      uVar4 = F_00b89230(param_2 + 0xc);
      return uVar4;
    case 0xc9: ;
      *((byte *)GEN_TOP((param_2 + 0xf))) = bVar2;
      return uVar4;
    case 0xca: ;
      *((byte *)GEN_TOP((param_2 + 0x14))) = bVar2;
      return uVar4;
    case 0xcb: ;
      *((byte *)GEN_TOP((param_2 + 10))) = bVar2;
      return uVar4;
    case 0xcc: ;
    case 0xcf: ;
    case 0xd2: ;
    case 0xd5: ;
    case 0xd8: ;
    case 0xdb: ;
    case 0xde: ;
    case 0xe1: ;
    case 0xe4: ;
    case 0xe7: ;
      *((byte *)GEN_TOP((param_2 + 0x21))) = bVar2;
      return uVar4;
    case 0xcd: ;
    case 0xd0: ;
    case 0xd3: ;
    case 0xd6: ;
    case 0xd9: ;
    case 0xdc: ;
    case 0xdf: ;
    case 0xe2: ;
    case 0xe5: ;
    case 0xe8: ;
      iVar1 = param_3[param_4 + 0x1f];
      *((char *)GEN_TOP((param_2 + 0x22))) = (char)iVar1;
      return CONCAT31(uVar5,(char)iVar1);
    default: ;
      goto switchD_007808f5_caseD_ce;
    case 0xd1: ;
    case 0xd7: ;
    case 0xdd: ;
    case 0xe0: ;
    case 0xe3: ;
    case 0xe6: ;
    case 0xe9: ;
      *((byte *)GEN_TOP((param_2 + 0x23))) = bVar2;
      return uVar4;
    case 0xea: ;
      *((char *)GEN_TOP((param_2 + 0x12))) = (char)param_3[param_4 + 0x1f];
      return uVar4;
    case 0xec: ;
      bVar7 = (param_4 & 0xff000000) != 0;
      *((byte *)GEN_TOP((param_2 + 0x16))) = bVar2;
      if (bVar7) {
        uVar4 = param_4 >> 0x10;
        *((char *)GEN_TOP((param_2 + 0x17))) = (char)(param_4 >> 0x10);
      }
      uVar4 = CONCAT31((int3)(uVar4 >> 8),*((undefined1 *)GEN_TOP((param_2 + 0x13)))) & 0xffffff7f;
      cVar3 = (char)uVar4 + bVar7 * -0x80;
      *((char *)GEN_TOP((param_2 + 0x13))) = cVar3;
      return CONCAT31((int3)(uVar4 >> 8),cVar3);
    case 0xee: ;
      *((char *)GEN_TOP((param_2 + 0x11))) = (char)param_3[param_4 + 0x1f];
      return uVar4;
    case 0xf0: ;
switchD_007808f5_caseD_f0: ;
      *((byte *)GEN_TOP((param_2 + 0x19))) = bVar2;
      return uVar4;
    case 0xf1: ;
      iVar1 = param_3[param_4 + 0x1f];
      *((char *)GEN_TOP((param_2 + 0x1e))) = (char)iVar1;
      return CONCAT31(uVar5,(char)iVar1);
    case 0xf2: ;
      *((char *)GEN_TOP((param_2 + 0x1a))) = (char)param_3[param_4 + 0x1f];
      return uVar4;
    case 0xf3: ;
      *((byte *)GEN_TOP((param_2 + 0x1c))) = (*((byte *)GEN_TOP((param_2 + 0x1c))) & 0x80) + (char)param_3[param_4 + 0x1f]
      ;
      return uVar4;
    case 0xf4: ;
      cVar3 = (char)param_3[param_4 + 0x1f] * -0x80 + (*((byte *)GEN_TOP((param_2 + 0x1c))) & 0x7f);
      *((char *)GEN_TOP((param_2 + 0x1c))) = cVar3;
      return CONCAT31(uVar5,cVar3);
    case 0xf5: ;
      *((byte *)GEN_TOP((param_2 + 0x15))) = bVar2;
      if ((param_4 & 0xff000000) != 0) {
        uVar4 = param_4 >> 0x10;
      }
      *((char *)GEN_TOP((param_2 + 0x1b))) = (char)uVar4;
      return uVar4;
    case 0xf6: ;
      iVar1 = param_3[param_4 + 0x1f];
      *((char *)GEN_TOP((param_2 + 0x1d))) = (char)iVar1;
      return CONCAT31(uVar5,(char)iVar1);
    case 0xf7: ;
      bVar6 = (*((byte *)GEN_TOP((param_2 + 0x1f))) & 0x80) + (char)param_3[param_4 + 0x1f];
      break;
    case 0xf8: ;
      bVar6 = *((byte *)GEN_TOP((param_2 + 0x1f))) & 0x7f;
      *((byte *)GEN_TOP((param_2 + 0x20))) = bVar2;
      if ((param_4 & 0xffffff00) != 0) {
        *((byte *)GEN_TOP((param_2 + 0x1f))) = bVar6 | 0x80;
        return uVar4;
      }
      break;
    case 0xf9: ;
      cVar3 = (char)(param_4 & 0xffffff80) + (char)param_3[(param_4 & 0x7f) + 0x1f];
      *((char *)GEN_TOP((param_2 + 0x24))) = cVar3;
      return CONCAT31((int3)((param_4 & 0xffffff80) >> 8),cVar3);
    case 0xfa: ;
      *((byte *)GEN_TOP((param_2 + 0x25))) = bVar2;
      return uVar4;
    }
    *((byte *)GEN_TOP((param_2 + 0x1f))) = bVar6;
    return uVar4;
  }
  switch((unsigned int)(uintptr_t)(iVar1)) {
  case 0x6ce: ;
  case 0x6cf: ;
    *((byte *)GEN_TOP((param_2 + 0x18))) = *((byte *)GEN_TOP((param_2 + 0x18))) & 0x9f | bVar2 << 5;
    return CONCAT31(uVar5,bVar2 << 5);
  case 0x6d0: ;
  case 0x6d1: ;
    goto switchD_007808f5_caseD_f0;
  }
switchD_007808f5_caseD_ce: ;
  return uVar4;
}

/* ref: FUN_00780b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780b30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x780b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  F_005a2710(((undefined *)GEN_TOP((param_1 + 0x1dc4))) GEN_EDX_FWD,3);
  if (param_2 == '\0') {
    *((undefined4 *)GEN_TOP((param_1 + 0x1dc8))) = 0x92;
  }
  else {
    *((undefined4 *)GEN_TOP((param_1 + 0x1dc8))) = 0x51;
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 8))),0x205,param_1 + 0xf7c);
  return uVar2;
}

/* ref: FUN_00780b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x780b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  return (param_3 + (param_2 + param_1 * 2) * 2) * 0xc4 + 0xc + (int)this;
}

/* ref: FUN_00780bb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00780bb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x780bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ab3630(param_3 + (param_2 + param_1 * 2) * 2);
  return uVar1;
}

/* ref: FUN_00780bd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00780bd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x780bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint * puVar1;
  
  if (-1 < param_1) {
    puVar1 = ((uint *)GEN_TOP(F_00ab36c0(param_1)));
    if (puVar1 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar1 & 0xffffff) + (int)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_00780c00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00780c00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x780c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if (-1 < param_1) {
    uVar1 = F_00ab36c0(param_1);
    if (uVar1 != 0) {
      return (*((uint *)GEN_TOP((uVar1 + 8))) & 0xffffff) + (int)(uVar1 + 8);
    }
  }
  return 0;
}

/* ref: FUN_00780c30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00780c30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x780c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if (-1 < param_1) {
    uVar1 = F_00ab36c0(param_1);
    if (uVar1 != 0) {
      return (*((uint *)GEN_TOP((uVar1 + 4))) & 0xffffff) + (int)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00780c60 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00780c60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x780c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  uint * puVar2;
  
  iVar1 = 0;
  puVar2 = ((uint *)GEN_TOP((param_1 + 8)));
  do {
    if (*puVar2 == (uint)param_2) goto LAB_00780c82;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x3c;
  } while (iVar1 < 0x1c);
  iVar1 = 0xff;
LAB_00780c82: ;
  return (byte)iVar1;
}

/* ref: FUN_00780c90 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00780c90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x780c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  puVar2 = ((uint *)GEN_TOP((param_1 + 8)));
  do {
    if ((*puVar2 == (uint)param_2) && (iVar3 = iVar3 + 1, iVar3 == 2)) goto LAB_00780cba;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x3c;
  } while (iVar1 < 0x1c);
  iVar1 = 0;
LAB_00780cba: ;
  return (byte)iVar1;
}

/* ref: FUN_00780cc0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00780cc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x780cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  int iVar1;
  uint * puVar2;
  
  iVar1 = 0;
  puVar2 = ((uint *)GEN_TOP(((uint)param_2 * 0xf0 + 0x7c + param_1)));
  do {
    if (*puVar2 == (uint)param_3) goto LAB_00780cef;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x1c);
  iVar1 = 0;
LAB_00780cef: ;
  return (byte)iVar1;
}

/* ref: FUN_00780d00 */
GEN_OWN GEN_FRAME byte F_00780d00(void)
{
  GEN_ENTER(0x780d00u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 in_ecx;
  uint uVar1;
  
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  uVar1 = F_00414500(in_ecx GEN_EDX_ARG,4);
  F_004142d0(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 0x14))));
  if ((*(uint *)(gen_frame + 0x0)) < 6) {
                    
    switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x0)))) {
    case 1: ;
      return 3;
    case 2: ;
      return 6;
    case 3: ;
      return 9;
    }
  }
  return 0;
}

/* ref: FUN_00780d90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00780d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x780d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar1 = F_00760260(this_00 GEN_EDX_ARG,uVar2);
  return uVar1;
}

/* ref: FUN_00780db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x780db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  byte bVar1;
  uint uVar2;
  
  ((uint *)(gen_frame + 0x0))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = param_1;
  if ((int)*((char *)GEN_TOP(((int)this + 0x1fb8))) != param_1) {
    bVar1 = *((byte *)GEN_TOP(((int)this + 0x1fb9)));
    *((char *)GEN_TOP(((int)this + 0x1fb8))) = (char)param_1;
    ((uint *)(gen_frame + 0x0))[0] = 0x1c3;
    ((uint *)(gen_frame + 0x0))[1] = 0x1c3;
    ((uint *)(gen_frame + 0x0))[2] = 0x1c4;
    ((uint *)(gen_frame + 0x0))[3] = 0x1c5;
    ((uint *)(gen_frame + 0x0))[4] = 0x1c6;
    ((uint *)(gen_frame + 0x0))[5] = 0x1c7;
    ((uint *)(gen_frame + 0x0))[6] = 0x1c8;
    ((uint *)(gen_frame + 0x0))[7] = 0x1c9;
    ((uint *)(gen_frame + 0x0))[8] = 0;
    ((uint *)(gen_frame + 0x0))[9] = 0;
    uVar2 = F_00ab36c0(((uint *)(gen_frame + 0x0))[(int)((uint)bVar1 + (char)param_1 * 2)]);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((uint *)GEN_TOP((uVar2 + 0x10)));
    }
    *((short *)GEN_TOP(((int)this + 0x1fba))) = (short)uVar2;
  }
  return uVar2;
}

/* ref: FUN_00780e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x780e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 == 0) {
    F_006a6400(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fa4))) GEN_EDX_FWD,(uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf5c))) + 0x10))),
                 (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf5c))) + 0xd))));
  }
  else {
    if (param_1 - 1U != 0) {
      return param_1 - 1U;
    }
    F_006a64c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fa4))) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf5c))) + 0x10))),
                 (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf5c))) + 0xd))));
  }
  F_006916f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fa4))) GEN_EDX_ARG);
  uVar1 = F_00691710(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fa4))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00780ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x780ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 == 0) {
    F_0069cb10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fa4))) GEN_EDX_FWD,(uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf5c))) + 7))));
    F_00691710(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fa4))) GEN_EDX_ARG);
    uVar1 = F_00691730(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fa4))) GEN_EDX_ARG);
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      F_0069d250(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fa4))) GEN_EDX_ARG,
                   (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf5c))) + 0x10))),
                   (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf5c))) + 0xd))));
      F_006916f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fa4))) GEN_EDX_ARG);
      uVar1 = F_00691730(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1fa4))) GEN_EDX_ARG);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00780f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780f50(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x780f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  undefined1 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_4 != 1) && (param_4 != 0xffffffff)) {
    puVar1 = ((undefined1 *)GEN_TOP(((int)param_1 + 0x11)));
    iVar4 = 0x14;
    do {
      puVar1[-1] = param_2;
      *puVar1 = param_3;
      puVar1 = puVar1 + 0xc4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    return (uint)puVar1;
  }
  uVar3 = param_4;
  if (param_1[2] != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x68))))(param_1 GEN_EDX_FWD,param_1[0x7eb],param_1[0x3d7],0xffffffff);
    F_005a2710(param_1 + 0x3df GEN_EDX_ARG,3);
    param_1[0x3e0] = -1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x1c))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,param_1[2],0x205,param_1 + 0x3df);
  }
  return uVar3;
}

/* ref: FUN_00780fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00780fe0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x780fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined1 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_3 != 1) && (param_3 != 0xffffffff)) {
    puVar1 = ((undefined1 *)GEN_TOP(((int)param_1 + 0x12)));
    iVar4 = 0x14;
    do {
      *puVar1 = param_2;
      puVar1 = puVar1 + 0xc4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    return (uint)puVar1;
  }
  uVar3 = param_3;
  if (param_1[2] != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x68))))(param_1 GEN_EDX_FWD,param_1[0x7eb],param_1[0x3d7],0xffffffff);
    F_005a2710(param_1 + 0x3df GEN_EDX_ARG,3);
    param_1[0x3e0] = -1;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x1c))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,param_1[2],0x205,param_1 + 0x3df);
  }
  return uVar3;
}

/* ref: FUN_00781070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00781070(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x781070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  byte bVar1;
  undefined1 * puVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_3 != 1) && (param_3 != 0xffffffff)) {
    puVar2 = ((undefined1 *)GEN_TOP(((int)param_1 + 0x13)));
    iVar5 = 0x14;
    do {
      *puVar2 = param_2;
      puVar2 = puVar2 + 0xc4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    iVar5 = param_1[0x3d7];
    bVar1 = F_0069e910(((undefined *)GEN_TOP(param_1[0x7e9])) GEN_EDX_FWD,(uint)*((byte *)GEN_TOP((iVar5 + 0x10))),
                         (uint)*((byte *)GEN_TOP((iVar5 + 0xd))),(uint)*((byte *)GEN_TOP((iVar5 + 7))));
    return CONCAT31(extraout_var,bVar1);
  }
  uVar4 = param_3;
  if (param_1[2] != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x68))))(param_1 GEN_EDX_ARG,param_1[0x7eb],param_1[0x3d7],0xffffffff);
    F_005a2710(param_1 + 0x3df GEN_EDX_ARG,3);
    param_1[0x3e0] = -1;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x1c))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,param_1[2],0x205,param_1 + 0x3df);
  }
  return uVar4;
}

/* ref: FUN_00781120 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00781120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x781120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 * puVar1;
  int * piVar2;
  int iVar3;
  
  if ((param_2 == 1) || (param_2 == 0)) {
    puVar1 = ((undefined1 *)GEN_TOP(((int)this + 0x15)));
    iVar3 = 0x14;
    do {
      puVar1[-1] = (char)param_1;
      *puVar1 = (char)((uint)param_1 >> 8);
      puVar1 = puVar1 + 0xc4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  if (((param_2 == 1) || (param_2 == -1)) && (*((int *)GEN_TOP(((int)this + 8))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))
              (this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1fac))),*((undefined4 *)GEN_TOP(((int)this + 0xf5c))),
               0xffffffff);
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0xf7c))) GEN_EDX_ARG,3);
    *((undefined4 *)GEN_TOP(((int)this + 0xf80))) = 0xffffffff;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))
              (piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x205,((undefined *)GEN_TOP(((int)this + 0xf7c))));
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf39 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007811c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7811c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 == 1) {
    F_0042e430(this + 0x1fdc GEN_EDX_FWD,param_1);
    F_00780850(this GEN_EDX_ARG,0xffffffff,0xffffffff);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf40 */
GEN_OWN GEN_NOFRAME unsigned int F_007811f0(void)
{
  GEN_ENTER(0x7811f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf42 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00781200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x781200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf43 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00781210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x781210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::UI2::Agent::AgentCreate::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00781220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP((REFG(undefined4, 0x137104c) + 8))) == '\0') {
    uVar1 = F_00780700((undefined *)this GEN_EDX_FWD);
    return uVar1;
  }
  return REFG(undefined4, 0x137104c);
}

/* ref: Client::UI2::Agent::AgentCreate::vf18 */
GEN_OWN GEN_NOFRAME unsigned int F_00781240(void)
{
  GEN_ENTER(0x781240u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (*((char *)GEN_TOP((REFG(int, 0x137104c) + 8))) == '\0') {
    this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
    F_00530190(this GEN_EDX_ARG,((char *)REFP(0x10c0620)),0,0);
    F_00530190(this GEN_EDX_ARG,((char *)REFP(0x10c0630)),0,0);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCreate::vf19 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00781280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    return 0;
  }
  uVar2 = F_00ab3630(0);
  return uVar2 != 0;
}

/* ref: Client::UI2::Agent::AgentCreate::vf23 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007812b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7812b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2180))) = param_2;
  return param_2;
}

/* ref: Client::UI2::Agent::AgentCreate::vf24 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_007812c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7812c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  
  if (param_2 == '\0') {
    if (*((int *)GEN_TOP(((int)param_1 + 8))) != 0) {
      F_005a2710(((undefined *)GEN_TOP(((int)param_1 + 0x1dc4))) GEN_EDX_FWD,3);
      *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc8))) = 0x21a;
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) + 0x1c))))
                                (*((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))
                (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 8))),0x205,(int)param_1 + 0xf7c);
    }
    iVar2 = param_3;
    if (param_3 < 0) {
      iVar2 = *((int *)GEN_TOP(((int)param_1 + 0x1fac)));
    }
    F_00780850(param_1 GEN_EDX_ARG,iVar2,0xffffffff);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCreate::vf30 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00781330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,2);
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x22 +
          ((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 8))) +
          (uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 9))) * 0x28) * 4)));
}

/* ref: Client::UI2::Agent::AgentLicenseViewer::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00781370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x781370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((((*param_2 & 0xf) != 0) && (-3 < *(int *)(param_2 + 4))) && (*(int *)(param_2 + 4) < 0)) {
    *(undefined4 *)(this + 8) = 0;
    uVar1 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentLicenseViewer::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007813a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7813a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentLobby::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_007813d0(void)
{
  GEN_ENTER(0x7813d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_007813e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007813e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7813e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  
  if (*((char *)GEN_TOP((REFG(int, 0x137104c) + 8))) == '\0') {
    this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
    F_00530190(this_00 GEN_EDX_FWD,((char *)REFP(0x10c0664)),0,1);
    F_00530190(this_00 GEN_EDX_ARG,((char *)REFP(0x10c066c)),0,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x2e8))) = 0;
  }
  return;
}

/* ref: FUN_00781480 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00781480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  if ((char)uVar2 == '\0') {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG,((char *)REFP(0x10c0694)))));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,1);
      if (uVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007814d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007814d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7814d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,1);
  iVar3 = 0;
  do {
    if (*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar3))) != &REFG(undefined, 0x10be549)) {
      *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar3))) = &REFG(undefined, 0x10be549);
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x1ec);
  return 0;
}

/* ref: FUN_00781520 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00781520(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x781520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  undefined * this;
  uint * puVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,param_3)));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG)));
  puVar2 = ((uint *)GEN_TOP(F_00cb0910(this GEN_EDX_ARG,param_2)));
  return *puVar2;
}

/* ref: FUN_00781550 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00781550(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x781550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,param_3)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0x10be54a;
  }
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG)));
  uVar2 = F_00cb0950(this GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: FUN_00781590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00781590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x781590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2e8))) + 0x24))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 0x2e8))) GEN_EDX_ARG,param_1)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0x10be54a;
  }
  uVar3 = 3;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG)));
  uVar2 = F_00cb0950(this_00 GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_007815d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007815d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7815d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  uint * puVar2;
  
  if (0 < param_1) {
    uVar1 = F_00ab1c90(param_1);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*((ushort *)GEN_TOP((uVar1 + 0x20)));
    }
    puVar2 = ((uint *)GEN_TOP(F_00ab2750(uVar1)));
    if (puVar2 != ((uint *)GEN_TOP(0x0))) {
      return (*puVar2 & 0xffffff) + (int)puVar2;
    }
  }
  return 0;
}

/* ref: FUN_00781620 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00781620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  undefined1 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  F_0045f5d0(uVar2 GEN_EDX_ARG,uVar4);
  iVar3 = (int)*((char *)GEN_TOP(((int)this + 0x5fc)));
  uVar5 = 0;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  bVar1 = F_00448810(this_00 GEN_EDX_ARG,iVar3,uVar5);
  return bVar1;
}

/* ref: FUN_00781660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00781660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x781660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x850))) + 0x1c))))(((int *)GEN_TOP((uVar1 + 0x850))) GEN_EDX_ARG,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x58))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x38))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,param_1,param_2);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG,param_1,param_2);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x7c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0,0,0);
  *((undefined1 *)GEN_TOP(((int)this + 0x6c8))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x6cb))) = 0;
  return uVar1;
}

/* ref: FUN_00781730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00781730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,2);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,1);
  local_c = 0;
  iVar5 = 0x20;
  local_8 = 0x10;
  do {
    piVar1 = ((int *)GEN_TOP((local_8 - 8 + *((int *)GEN_TOP((uVar2 + 0x20))))));
    iVar6 = 0;
    if (*piVar1 != 0) {
      *piVar1 = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((local_8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
      *((undefined4 *)GEN_TOP((local_8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((local_8 + 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
      *((undefined4 *)GEN_TOP((local_8 + 8 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x188))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x188))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    do {
      if (*((int *)GEN_TOP((iVar5 + *((int *)GEN_TOP((uVar2 + 0x20)))))) != 0) {
        *((undefined4 *)GEN_TOP((iVar5 + *((int *)GEN_TOP((uVar2 + 0x20)))))) = 0;
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      F_00431250(uVar3 GEN_EDX_ARG,local_c + iVar6,"",0,1,0);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < 0x28);
    local_c = local_c + 0x28;
    local_8 = local_8 + 4;
  } while (local_8 < 0x18);
  uVar3 = **((uint * PTR32 *)GEN_TOP((uVar2 + 0x20)));
  uVar4 = uVar3 | 0x41;
  if (uVar3 != uVar4) {
    **((uint * PTR32 *)GEN_TOP((uVar2 + 0x20))) = uVar4;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  return uVar4;
}

/* ref: FUN_00781840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00781840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,2);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,1);
  iVar5 = 0;
  iVar6 = 0x160;
  do {
    F_00431250(uVar3 GEN_EDX_ARG,iVar5 + 0x50,"",0,1,0);
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar6))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar6))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
    }
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar6 < 0x180);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 4))) = 0;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x188))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x188))) = 0;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x184))) != -1) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + 0x184))) = 0xffffffff;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  uVar3 = **((uint * PTR32 *)GEN_TOP((uVar2 + 0x20)));
  uVar4 = uVar3 & 0xfffffffb;
  if (uVar3 != uVar4) {
    **((uint * PTR32 *)GEN_TOP((uVar2 + 0x20))) = uVar4;
    *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
  }
  return uVar4;
}

/* ref: FUN_00781910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00781910(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x781910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,2);
  if (*((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 400))) != (uint)(param_2 != '\0')) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 400))) = (uint)(param_2 != '\0');
    *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
  }
  uVar1 = **((uint * PTR32 *)GEN_TOP((uVar3 + 0x20)));
  uVar4 = uVar1 | 8;
  if (uVar1 != uVar4) {
    **((uint * PTR32 *)GEN_TOP((uVar3 + 0x20))) = uVar4;
    *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
  }
  return uVar3;
}

/* ref: FUN_007819a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007819a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7819a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,1);
  if (uVar2 != 0) {
    iVar3 = 0x160;
    do {
      if (*((char * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar3))) != "") {
        *((undefined1 *)GEN_TOP((uVar2 + 0x1d))) = 1;
      }
      *((char * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x20))) + iVar3))) = "";
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x1d8);
  }
  return 0;
}

/* ref: FUN_007819f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007819f0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7819f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int in_ecx;
  byte bVar1;
  
  in_ecx = *param_1;
  if ((in_ecx != 0) && (*((int *)GEN_TOP((in_ecx + 8))) != 0 || *((int *)GEN_TOP((in_ecx + 0xc))) != 0)) {
    bVar1 = F_00e3be50(in_ecx GEN_EDX_ARG);
    if (bVar1 != 0) {
      if (*param_1 != 0) {
        bVar1 = F_00e3be70(*param_1 GEN_EDX_ARG);
        if (bVar1 != 0) {
          return 8;
        }
      }
      if ((*(byte *)(param_1 + 4) & 1) != 0) {
        return 0x80;
      }
      return (-(uint)(((uint)param_1[4] >> 2 & 1) != 0) & 0xff) + 1;
    }
  }
  return 2;
}

/* ref: FUN_00781a60 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00781a60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x781a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab2200(param_1);
  uVar2 = F_00ab24a0(*((undefined4 *)GEN_TOP((uVar1 + 8 + param_2 * 4))));
  if (uVar2 == 0) {
    return 0;
  }
  param_3[1] = *((undefined4 *)GEN_TOP((uVar2 + 0x18)));
  uVar2 = F_00ab24a0(*((undefined4 *)GEN_TOP((uVar1 + 0x10 + param_2 * 4))));
  if (uVar2 != 0) {
    param_3[2] = *((undefined4 *)GEN_TOP((uVar2 + 0x18)));
    uVar2 = F_00ab24a0(*((undefined4 *)GEN_TOP((uVar1 + 0x18 + param_2 * 4))));
    if (uVar2 != 0) {
      param_3[3] = *((undefined4 *)GEN_TOP((uVar2 + 0x18)));
      uVar1 = F_00ab24a0(*((undefined4 *)GEN_TOP((uVar1 + 0x20 + param_2 * 4))));
      if (uVar1 != 0) {
        param_3[4] = *((undefined4 *)GEN_TOP((uVar1 + 0x18)));
        *param_3 = 0;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00781b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00781b00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x781b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  int * piVar1;
  uint uVar2;
  uint * this;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
  (*(int *)(gen_frame + 0x4)) = (uint)(param_2 == '\0') * 2 + 2;
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 8))),5,&(*(undefined4 *)(gen_frame + 0x0)));
  this = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 4;
  do {
    this = this - 2;
    uVar2 = F_005a2670(this GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_00781b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00781b90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x781b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  uint uVar1;
  int * piVar2;
  uint * this;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if (*((char *)GEN_TOP((param_1 + 0x68f))) == '\x02') {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,4);
    (*(int *)(gen_frame + 0x4)) = (-(uint)(param_2 != '\0') & 0xffffffe0) + 0x40;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 8))),5,&(*(undefined4 *)(gen_frame + 0x0)));
    this = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 4;
    do {
      this = this - 2;
      uVar1 = F_005a2670(this GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  return uVar1;
}

/* ref: FUN_00781c20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00781c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x684)));
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x684))) = 0;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,iVar1,0);
  }
  return;
}

/* ref: FUN_00781c50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00781c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x688))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x688))),0);
    *((undefined4 *)GEN_TOP(((int)this + 0x688))) = 0;
  }
  return;
}

/* ref: FUN_00781c90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00781c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x781c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x6f4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x6f4))) = 0;
  }
  return;
}

/* ref: FUN_00781cc0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00781cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x6b5))) = 1;
  return;
}

/* ref: FUN_00781cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00781cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x781cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG,2);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = F_00e3bdc0(param_2 GEN_EDX_ARG);
    if (3 < (int)uVar4) {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x18 + param_1 * 4))) != -1) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x20))) + 0x18 + param_1 * 4))) = 0xffffffff;
        *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
      }
      uVar1 = **((uint * PTR32 *)GEN_TOP((uVar3 + 0x20)));
      uVar4 = uVar1 | 0x41;
      if (uVar1 != uVar4) {
        **((uint * PTR32 *)GEN_TOP((uVar3 + 0x20))) = uVar4;
        *((undefined1 *)GEN_TOP((uVar3 + 0x1d))) = 1;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00781d70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_00781d70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x781d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf17 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00781d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP((REFG(int, 0x137104c) + 8))) == '\0') {
    F_00780700((undefined *)this GEN_EDX_FWD);
    F_00530190(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,((char *)REFP(0x10c06b0)),0,1);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf18 */
GEN_OWN GEN_NOFRAME unsigned int F_00781db0(void)
{
  GEN_ENTER(0x781db0u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (*((char *)GEN_TOP((REFG(int, 0x137104c) + 8))) == '\0') {
    this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
    F_00530190(this GEN_EDX_ARG,((char *)REFP(0x10c0620)),0,0);
    F_00530190(this GEN_EDX_ARG,((char *)REFP(0x10c0630)),0,0);
    F_00530190(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,((char *)REFP(0x10c06b8)),0,0);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf19 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00781e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  if ((char)uVar2 == '\0') {
    uVar2 = F_00ab3630(0);
    if (uVar2 != 0) {
      uVar2 = F_00ab36c0(1);
      if (uVar2 != 0) {
        uVar2 = F_00ab36c0(2);
        if (uVar2 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf42 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00781e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x781e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x2180) = 5;
  *(undefined4 *)(this + 0x1fb4) = 0;
  return 1;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf27 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00781e80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x2180)));
  if (((iVar1 != 2) && (iVar1 != 9)) && (iVar1 != 8)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00781eb0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00781eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x20, 0);
  code * pcVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(F_00a5feb0(REFG(int * PTR32, 0x1379694) GEN_EDX_FWD)));
    *((undefined4 *)GEN_TOP(((int)this + 0x2190))) = *puVar3;
    *((undefined4 *)GEN_TOP(((int)this + 0x2194))) = puVar3[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x2198))) = puVar3[2];
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,1);
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x3c)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*pcVar1)(piVar2,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00781f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((this[0x1fa8] == (undefined1)0x2) && (*((char *)GEN_TOP((REFG(undefined4, 0x137104c) + 8))) != '\0')) {
    return REFG(undefined4, 0x137104c);
  }
  uVar1 = F_00780700((undefined *)this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf18 */
GEN_OWN GEN_NOFRAME unsigned int F_00781f80(void)
{
  GEN_ENTER(0x781f80u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (*((char *)GEN_TOP((REFG(int, 0x137104c) + 8))) == '\0') {
    this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
    F_00530190(this GEN_EDX_ARG,((char *)REFP(0x10c0620)),0,0);
    F_00530190(this GEN_EDX_ARG,((char *)REFP(0x10c0630)),0,0);
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf19 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00781fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x781fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  if (this[0x1fa8] == (undefined1)0x2) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      uVar2 = F_00ab3630(0);
      if (uVar2 != 0) {
        uVar2 = F_00ab3690(0);
        if (uVar2 != 0) {
          return 1;
        }
      }
    }
  }
  else {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      uVar2 = F_00ab3630(0);
      return uVar2 != 0;
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf39 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00782030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x782030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 == 1) {
    F_0042e430(this + 0x1fdc GEN_EDX_FWD,param_1);
    F_00780850(this GEN_EDX_ARG,0xffffffff,0xffffffff);
  }
  return;
}

/* ref: FUN_00782060 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00782060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x782060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_005a2710(((undefined *)GEN_TOP(((int)this + 0x1dc4))) GEN_EDX_FWD,3);
    *((undefined4 *)GEN_TOP(((int)this + 0x1dc8))) = 0x21a;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0x205,(int)this + 0xf7c);
  }
  return;
}

/* ref: FUN_007820b0 */
GEN_OWN GEN_FRAME uint F_007820b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7820b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + 1 + param_1 * 2;
}

/* ref: FUN_007820c0 */
GEN_OWN GEN_FRAME uint F_007820c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7820c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1 * -2 + 1;
}

/* ref: FUN_007820e0 */
GEN_OWN GEN_NOFRAME uint F_007820e0(void)
{
  GEN_ENTER(0x7820e0u, 0u, 0u, 0u, 0u);
  F_00b70d10(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG,2);
  if (REFG(int, 0x1375bbc) == -1) {
    REFG(undefined4, 0x148a444) = 0;
    return 0xffffffff;
  }
  REFG(undefined4, 0x148a444) = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  return (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
}

/* ref: FUN_00782110 */
GEN_OWN GEN_NOFRAME unsigned int F_00782110(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x782110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x50, 0);
  byte bVar1;
  ushort uVar2;
  float * pfVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  
  if (REFG(int, 0x148a444) == 0) {
    return;
  }
  F_004315c0(((undefined1 *)(gen_frame + 0x0)),0x19,REFG(undefined4, 0x148a44c));
  fVar7 = F_0053b3e0();
  (*(float *)(gen_frame + 0x3c)) = fVar7;
  bVar4 = GEN_ISNAN((float10)fVar7) || GEN_ISNAN((float10)0);
  if (((bVar4 != (bVar4 || (float10)fVar7 == (float10)0)) ||
      (bVar1 = F_00a34870(param_1 GEN_EDX_ARG,0x11f), bVar1 == 0)) &&
     (bVar1 = F_00a34150(param_1 GEN_EDX_ARG,2,0,0), bVar1 == 0)) {
    return;
  }
  F_004315c0(((undefined1 *)(gen_frame + 0x10)),0x19,REFG(undefined4, 0x148a44c));
  fVar7 = gen_bits2f((&REFG(float, 0x1328290))[(int)((uint)REFG(undefined1, 0x132814b) * 5)]);
  (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1094884);
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)fVar7);
  pfVar3 = &(*(float *)(gen_frame + 0x30));
  if (!((double)(float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)fVar7) < REFG(double, 0x1094800))) {
    pfVar3 = &(*(float *)(gen_frame + 0x38));
  }
  (*(float *)(gen_frame + 0x38)) = *pfVar3;
  fVar5 = F_00b6b6d0(REFG(int, 0x148a444) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar5;
  bVar1 = F_00a34150(param_1 GEN_EDX_ARG,2,0,0);
  if (bVar1 == 0) {
    fVar5 = GEN_X87((float10)(*(float *)(gen_frame + 0x3c)) * (float10)*(double *)&REFG(undefined, 0x10928e8));
  }
  else {
    uVar2 = F_00a341c0(param_1 GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x30)) = gen_bits2f((int)(short)uVar2);
    fVar5 = GEN_X87((float10)(int)(short)uVar2 * (float10)*(double *)&REFG(undefined, 0x109ce00));
  }
  (*(float *)(gen_frame + 0x3c)) = (float)fVar5;
  fVar6 = F_00b6ddd0(REFG(int, 0x148a444) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x30)) = (float)fVar6;
  pfVar3 = &(*(float *)(gen_frame + 0x3c));
  fVar5 = (float10)(*(float *)(gen_frame + 0x2c));
  (*(float *)(gen_frame + 0x2c)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + fVar5);
  fVar6 = (float10)(float)fVar6;
  fVar7 = ((float)GEN_TOF((fVar6 + (float10)(float)((float10)(*(float *)(gen_frame + 0x3c)) + fVar5))));
  (*(float *)(gen_frame + 0x3c)) = fVar7;
  if (!((float10)(*(float *)(gen_frame + 0x38)) < (float10)fVar7)) {
    pfVar3 = &(*(float *)(gen_frame + 0x38));
  }
  fVar7 = *pfVar3;
  pfVar3 = &(*(float *)(gen_frame + 0x3c));
  (*(float *)(gen_frame + 0x3c)) = fVar7;
  if (!((float10)fVar7 < (float10)(*(float *)(gen_frame + 0x34)))) {
    pfVar3 = &(*(float *)(gen_frame + 0x34));
  }
  fVar7 = *pfVar3;
  (*(float *)(gen_frame + 0x3c)) = fVar7;
  fVar7 = (float)((float10)fVar7 - fVar6);
  (*(float *)(gen_frame + 0x2c)) = fVar7;
  F_00b6b6b0(REFG(int, 0x148a444) GEN_EDX_ARG,fVar7);
  return;
}

/* ref: FUN_007822b0 */
GEN_OWN GEN_NOFRAME unsigned int F_007822b0(void)
{
  GEN_ENTER(0x7822b0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x30, 0);
  uint uVar1;
  
  if (((REFG(int, 0x148a444) != 0) && (REFG(undefined1, 0x132814b) < 4)) && (REFG(int * PTR32, 0x148a44c) != ((int *)GEN_TOP(0x0)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x68))))(REFG(int * PTR32, 0x148a44c) GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      F_004315c0(((undefined1 *)(gen_frame + 0x10)),*((undefined4 *)GEN_TOP(((uint)REFG(undefined1, 0x132814b) * 0x14 + 0x1328288))),REFG(int * PTR32, 0x148a44c));
      F_00b6b600(REFG(int, 0x148a444) GEN_EDX_ARG,(*(float *)(gen_frame + 0x14)));
      if (REFG(undefined1, 0x132814b) == 0) {
        F_004315c0(((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x13282c4),REFG(int * PTR32, 0x148a44c));
        F_00b6b620(REFG(int, 0x148a444) GEN_EDX_ARG,(*(float *)(gen_frame + 0x4)));
      }
    }
  }
  return;
}

/* ref: FUN_00782390 */
GEN_OWN GEN_NOFRAME unsigned int F_00782390(void)
{
  GEN_ENTER(0x782390u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x20, 0);
  
  if ((REFG(int, 0x148a444) != 0) && (REFG(int, 0x148a44c) != 0)) {
    F_004315c0(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((uint)REFG(undefined1, 0x132814b) * 0x14 + 0x1328288))),REFG(int, 0x148a44c));
    F_00b6b600(REFG(int, 0x148a444) GEN_EDX_ARG,(*(float *)(gen_frame + 0x4)));
    F_00b6b660(REFG(int, 0x148a444) GEN_EDX_ARG,REFG(undefined1, 0x132814b) == 0);
    F_00b6b670(REFG(int, 0x148a444) GEN_EDX_ARG,1);
    F_007822b0();
  }
  return;
}

/* ref: FUN_00782420 */
GEN_OWN GEN_FRAME uint F_00782420(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x782420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x4c, 4, 4);
  float fVar1;
  int * piVar2;
  undefined * this;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  ((uint *)(gen_frame + 0x4))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48);
  ((uint *)(gen_frame + 0x4))[0] = 0x76d;
  ((uint *)(gen_frame + 0x4))[1] = 0x76e;
  ((uint *)(gen_frame + 0x4))[2] = 0x76f;
  ((uint *)(gen_frame + 0x4))[3] = 0x770;
  ((uint *)(gen_frame + 0x4))[4] = 0x777;
  ((uint *)(gen_frame + 0x4))[5] = 0x778;
  ((uint *)(gen_frame + 0x4))[6] = 0x779;
  ((uint *)(gen_frame + 0x4))[7] = 0x77a;
  ((uint *)(gen_frame + 0x4))[8] = 0x781;
  ((uint *)(gen_frame + 0x4))[9] = 0x782;
  ((uint *)(gen_frame + 0x4))[10] = 0x783;
  ((uint *)(gen_frame + 0x4))[0xb] = 0x784;
  ((uint *)(gen_frame + 0x4))[0xc] = 0x78b;
  ((uint *)(gen_frame + 0x4))[0xd] = 0x78c;
  ((uint *)(gen_frame + 0x4))[0xe] = 0x78d;
  ((uint *)(gen_frame + 0x4))[0xf] = 0x78e;
  iVar3 = 0;
  (*(float * PTR32 *)(gen_frame + 0x0)) = (float *)&REFG(float, 0x1328290);
  do {
    iVar4 = 0;
    do {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,((uint *)(gen_frame + 0x4))[(int)(iVar3 + iVar4)])));
      uVar5 = 1;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG)));
      piVar2 = ((int *)GEN_TOP(F_00cb0910(this GEN_EDX_ARG,uVar5)));
      fVar1 = (float)((float10)*piVar2 / (float10)REFG(double, 0x10944b8));
      switch((unsigned int)(uintptr_t)(iVar4)) {
      case 0: ;
        (*(float * PTR32 *)(gen_frame + 0x0))[-1] = fVar1;
        break;
      case 1: ;
        *(*(float * PTR32 *)(gen_frame + 0x0)) = fVar1;
        break;
      case 2: ;
        (*(float * PTR32 *)(gen_frame + 0x0))[1] = fVar1;
        break;
      case 3: ;
        (*(float * PTR32 *)(gen_frame + 0x0))[2] = fVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    (*(float * PTR32 *)(gen_frame + 0x0)) = (*(float * PTR32 *)(gen_frame + 0x0)) + 5;
    iVar3 = iVar3 + 4;
  } while ((int)(*(float * PTR32 *)(gen_frame + 0x0)) < 0x13282e0);
  return (uint)(*(float * PTR32 *)(gen_frame + 0x0));
}

/* ref: FUN_00782600 */
GEN_OWN GEN_NOFRAME byte F_00782600(void)
{
  GEN_ENTER(0x782600u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  if (REFG(void * PTR32, 0x148a450) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_009bc4f0(REFG(void * PTR32, 0x148a450) GEN_EDX_ARG);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00782620 */
GEN_OWN GEN_FRAME uint F_00782620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x782620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  return param_3 - 2 + param_2 * 2;
}

/* ref: FUN_00782630 */
GEN_OWN GEN_FRAME uint F_00782630(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x782630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if (-1 < param_1) {
    uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x13282e0))[(int)(param_1)]);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00782660 */
GEN_OWN GEN_FRAME unsigned int F_00782660(void)
{
  GEN_ENTER(0x782660u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  int * piVar3;
  int local_8;
  
  iVar1 = 0;
  piVar3 = &REFG(undefined4, 0x13282e0);
  do {
    local_8 = 2;
    do {
      iVar2 = 2;
      do {
        if (iVar1 < 0) {
          REFG(int * PTR32, 0x148a44c) = ((int *)GEN_TOP(0x0));
        }
        else {
          REFG(int * PTR32, 0x148a44c) = ((int *)GEN_TOP(F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,*piVar3)));
        }
        if (REFG(int * PTR32, 0x148a44c) != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x30))))(REFG(int * PTR32, 0x148a44c) GEN_EDX_ARG);
        }
        if (-1 < *piVar3) {
          F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,*piVar3);
          *piVar3 = -1;
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  } while ((int)piVar3 < 0x1328330);
  return (uint)(REFG(int * PTR32, 0x148a44c) = ((int *)GEN_TOP(iVar2)));
}

/* ref: FUN_007826f0 */
GEN_OWN GEN_FRAME byte F_007826f0(void)
{
  GEN_ENTER(0x7826f0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int local_18;
  undefined4 * local_14;
  int local_10;
  undefined4 * local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = &REFG(undefined4, 0x13282e0);
  do {
    local_18 = 0;
    local_8 = local_10;
    local_c = local_14;
    do {
      iVar4 = 0;
      iVar3 = local_8;
      puVar5 = local_c;
      do {
        if (iVar3 < 0) {
          return 0;
        }
        piVar1 = ((int *)GEN_TOP(F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,*puVar5)));
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG);
        if ((char)uVar2 == '\0') {
          return 0;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar4 < 2);
      local_8 = local_8 + 2;
      local_c = local_c + 2;
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    local_10 = local_10 + 4;
    local_14 = local_14 + 4;
    if (0x132832f < (int)local_14) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_007827a0 */
GEN_OWN GEN_FRAME uint F_007827a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7827a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  undefined4 uVar2;
  
  if (REFG(int, 0x148a44c) == 0) {
    return in_EAX;
  }
  uVar2 = 3;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
  case 2: ;
    uVar1 = F_00a4b780(8);
    uVar2 = *(undefined4 *)(&REFG(undefined, 0x1328338) + (uVar1 + 1) * 4 + param_1 * 0x24);
  default: ;
    if ((param_1 == 1) || (param_1 == 10)) {
LAB_00782838: ;
      F_00aa0560(REFG(int, 0x148a44c) GEN_EDX_ARG,0x22);
      uVar1 = F_00aa0040(REFG(int, 0x148a44c) GEN_EDX_ARG,0,uVar2,0x22,0,REFG(float, 0x1090708),0,0);
      return uVar1;
    }
    break;
  case 3: ;
    uVar2 = 0x2ca;
    break;
  case 4: ;
    uVar2 = 0x2e3;
    break;
  case 5: ;
    uVar2 = 0x2cc;
    break;
  case 6: ;
    uVar2 = 0x2c4;
    break;
  case 7: ;
    uVar2 = 0x2e1;
    break;
  case 8: ;
    uVar2 = 0x2c5;
    break;
  case 10: ;
    uVar2 = 1;
    goto LAB_00782838;
  case 0xb: ;
    uVar2 = 2;
  }
  F_00aa0560(REFG(int, 0x148a44c) GEN_EDX_ARG,3);
  uVar1 = F_00aa4270(REFG(int, 0x148a44c) GEN_EDX_ARG,uVar2,0,0);
  return uVar1;
}

/* ref: FUN_007828a0 */
GEN_OWN GEN_FRAME unsigned int F_007828a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7828a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(int, 0x148a44c) != 0) {
    F_00aa0560(REFG(int, 0x148a44c) GEN_EDX_ARG,3);
    F_00aa4270(REFG(int, 0x148a44c) GEN_EDX_ARG,param_1,0,0);
  }
  return;
}

/* ref: FUN_00782910 */
GEN_OWN GEN_FRAME byte F_00782910(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x782910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_c;
  byte local_5;
  
  uVar2 = 0;
  local_5 = 0;
  if (param_1 < 1) {
    if (REFG(void * PTR32, 0x148a44c) != ((undefined *)GEN_TOP(0x0))) {
      F_00aa80c0(REFG(void * PTR32, 0x148a44c) GEN_EDX_ARG,0,0,0);
      F_00aa80c0(REFG(void * PTR32, 0x148a44c) GEN_EDX_ARG,1,0,0);
      return 0;
    }
  }
  else if (REFG(void * PTR32, 0x148a44c) != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = 0;
    iVar4 = 0;
    local_c = 0;
    uVar1 = F_00ab21a0(param_1);
    if ((uVar1 != 0) && (0 < *((int *)GEN_TOP((uVar1 + 0x14))))) {
      uVar1 = F_00ab24a0(*((int *)GEN_TOP((uVar1 + 0x14))));
      if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 0x18))) != 0 || *((int *)GEN_TOP((uVar1 + 0x1c))) != 0)) {
        uVar3 = *((undefined4 *)GEN_TOP((uVar1 + 0x18)));
        uVar2 = *((undefined4 *)GEN_TOP((uVar1 + 0x20)));
        local_c = *((undefined4 *)GEN_TOP((uVar1 + 0x24)));
        local_5 = 1;
        iVar4 = *((int *)GEN_TOP((uVar1 + 0x1c)));
      }
    }
    F_00aa80c0(REFG(void * PTR32, 0x148a44c) GEN_EDX_ARG,0,uVar3,iVar4);
    F_00aa80c0(REFG(void * PTR32, 0x148a44c) GEN_EDX_ARG,1,uVar2,local_c);
    if (REFG(void * PTR32, 0x148a44c) != ((undefined *)GEN_TOP(0xffffe940))) {
      *((undefined2 *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x1732))) = 0;
    }
    if (REFG(void * PTR32, 0x148a44c) != ((undefined *)GEN_TOP(0xffffe1a0))) {
      *((undefined2 *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x1ed2))) = 0;
    }
  }
  return local_5;
}

/* ref: FUN_00782a00 */
GEN_OWN GEN_FRAME byte F_00782a00(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x782a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  undefined * this;
  int iVar2;
  int iVar3;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = F_00ab3660((uint)param_1);
  if ((uVar1 == 0) || (*((int *)GEN_TOP((uVar1 + 0x38))) == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    uVar1 = F_00ab21a0(*((int *)GEN_TOP((uVar1 + 0x38))));
    if ((uVar1 != 0) && (0 < *((int *)GEN_TOP((uVar1 + 0x14))))) {
      uVar1 = F_00ab24a0(*((int *)GEN_TOP((uVar1 + 0x14))));
      if (uVar1 != 0) {
        iVar2 = *((int *)GEN_TOP((uVar1 + 0x18)));
        local_10 = *((int *)GEN_TOP((uVar1 + 0x1c)));
        if (iVar2 != 0 || local_10 != 0) {
          local_c = *((undefined4 *)GEN_TOP((uVar1 + 0x20)));
          local_8 = *((undefined4 *)GEN_TOP((uVar1 + 0x24)));
          goto LAB_00782a4e;
        }
      }
    }
  }
  else if (param_2 == 1) {
    local_10 = *((int *)GEN_TOP((uVar1 + 0x2c)));
    local_c = *((undefined4 *)GEN_TOP((uVar1 + 0x30)));
    iVar2 = *((int *)GEN_TOP((uVar1 + 0x28)));
    local_8 = *((undefined4 *)GEN_TOP((uVar1 + 0x34)));
LAB_00782a4e: ;
    iVar3 = 0;
    do {
      if (-1 < iVar3) {
        this = ((undefined *)GEN_TOP(F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x13282e0))[(int)(iVar3)])));
        if (this != ((undefined *)GEN_TOP(0x0))) {
          F_00aa80c0(this GEN_EDX_ARG,0,iVar2,local_10);
          F_00aa80c0(this GEN_EDX_ARG,1,local_c,local_8);
          if (this != ((undefined *)GEN_TOP(0xffffe940))) {
            *((undefined2 *)GEN_TOP(((int)this + 0x1732))) = 0;
          }
          if (this != ((undefined *)GEN_TOP(0xffffe1a0))) {
            *((undefined2 *)GEN_TOP(((int)this + 0x1ed2))) = 0;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
    return 1;
  }
  return 0;
}

/* ref: FUN_00782b10 */
GEN_OWN GEN_NOFRAME uint F_00782b10(void)
{
  GEN_ENTER(0x782b10u, 0u, 0u, 0u, 0u);
  undefined * in_EAX = 0;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (-1 < iVar1) {
      in_EAX = ((undefined *)GEN_TOP(F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x13282e0))[(int)(iVar1)])));
      if (in_EAX != ((undefined *)GEN_TOP(0x0))) {
        F_00aa80c0(in_EAX GEN_EDX_ARG,0,0,0);
        in_EAX = ((undefined *)GEN_TOP(F_00aa80c0(in_EAX GEN_EDX_ARG,1,0,0)));
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  return (uint)in_EAX;
}

/* ref: FUN_00782b60 */
GEN_OWN GEN_FRAME uint F_00782b60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x782b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = (param_3 - 2) + (uint)param_2 * 2;
  if (iVar1 < 0) {
    piVar2 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar2 = ((int *)GEN_TOP(F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x13282e0))[(int)(iVar1)])));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG);
    }
  }
  uVar3 = (&REFG(undefined4, 0x13282e0))[(int)(iVar1)];
  if (-1 < (int)uVar3) {
    uVar3 = F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,uVar3);
    (&REFG(undefined4, 0x13282e0))[(int)(iVar1)] = 0xffffffff;
  }
  if (REFG(int * PTR32, 0x148a44c) == piVar2) {
    REFG(int * PTR32, 0x148a44c) = ((int *)GEN_TOP(0x0));
  }
  return uVar3;
}

/* ref: FUN_00782be0 */
GEN_OWN GEN_NOFRAME unsigned int F_00782be0(void)
{
  GEN_ENTER(0x782be0u, 0u, 0u, 0u, 0u);
  if (REFG(int * PTR32, 0x148a44c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x24))))(REFG(int * PTR32, 0x148a44c) GEN_EDX_ARG,6,0);
  }
  return;
}

/* ref: FUN_00782c20 */
GEN_OWN GEN_FRAME unsigned int F_00782c20(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x782c20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  if (REFG(int * PTR32, 0x148a44c) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x48))))(REFG(int * PTR32, 0x148a44c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1));
  }
  return;
}

/* ref: FUN_00782c40 */
GEN_OWN GEN_NOFRAME float F_00782c40(void)
{
  GEN_ENTER(0x782c40u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x148a44c) != 0) {
    return *((float *)GEN_TOP((REFG(int, 0x148a44c) + 0xb0)));
  }
  return (float)(float10)0;
}

/* ref: FUN_00782c60 */
GEN_OWN GEN_NOFRAME uint F_00782c60(void)
{
  GEN_ENTER(0x782c60u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x148a44c);
}

/* ref: FUN_00782cc0 */
GEN_OWN GEN_FRAME uint F_00782cc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x782cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if (-1 < (int)(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]) {
    uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00782cf0 */
GEN_OWN GEN_FRAME uint F_00782cf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x782cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = &REFG(undefined4, 0x148a470);
  while ((*piVar2 != param_1 || (piVar2[1] != param_2))) {
    piVar2 = piVar2 + 4;
    uVar1 = uVar1 + 1;
    if (0x148a56f < (int)piVar2) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_00782d20 */
GEN_OWN GEN_FRAME unsigned int F_00782d20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x782d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  bool bVar2;
  
  if (-1 < param_1) {
    if ((int)(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)] < 0) {
      piVar1 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar1 = ((int *)GEN_TOP(F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)])));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG);
      }
    }
    if (-1 < (int)(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]) {
      F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]);
    }
    bVar2 = REFG(int * PTR32, 0x148a44c) == piVar1;
    (&REFG(undefined4, 0x148a470))[(int)(param_1 * 4)] = 0;
    (&REFG(undefined4, 0x148a474))[(int)(param_1 * 4)] = 0;
    (&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)] = 0xffffffff;
    if (bVar2) {
      REFG(int * PTR32, 0x148a44c) = ((int *)GEN_TOP(0x0));
    }
  }
  return;
}

/* ref: FUN_00782da0 */
GEN_OWN GEN_FRAME unsigned int F_00782da0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x782da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &REFG(undefined4, 0x148a470);
  do {
    if ((*piVar1 == param_1) && (piVar1[1] == param_2)) goto LAB_00782dc9;
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x148a570);
  iVar2 = -1;
LAB_00782dc9: ;
  F_00782d20(iVar2);
  return;
}

/* ref: FUN_00782de0 */
GEN_OWN GEN_FRAME unsigned int F_00782de0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x782de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int iVar1;
  int * piVar2;
  bool bVar3;
  
  if (param_1 < 3) {
    iVar1 = (&REFG(undefined4, 0x148a578))[(int)(param_1 * 4)];
    if (-1 < iVar1) {
      piVar2 = ((int *)GEN_TOP(F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,iVar1)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG);
      }
      F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,iVar1);
      bVar3 = REFG(int * PTR32, 0x148a44c) == piVar2;
      (&REFG(undefined4, 0x148a578))[(int)(param_1 * 4)] = 0xffffffff;
      (&REFG(undefined4, 0x148a570))[(int)(param_1 * 4)] = 0;
      (&REFG(undefined4, 0x148a574))[(int)(param_1 * 4)] = 0;
      if (bVar3) {
        REFG(int * PTR32, 0x148a44c) = ((int *)GEN_TOP(0x0));
      }
    }
  }
  return;
}

/* ref: FUN_00782e50 */
GEN_OWN GEN_FRAME uint F_00782e50(void)
{
  GEN_ENTER(0x782e50u, 0u, 0u, 0u, 0u);
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint local_8;
  
  local_8 = 0;
  piVar3 = &REFG(undefined4, 0x148a578);
  do {
    iVar1 = *piVar3;
    if (-1 < iVar1) {
      piVar2 = ((int *)GEN_TOP(F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,iVar1)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG);
      }
      F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,iVar1);
      *piVar3 = -1;
      piVar3[-2] = 0;
      piVar3[-1] = 0;
      if (REFG(int * PTR32, 0x148a44c) == piVar2) {
        REFG(int * PTR32, 0x148a44c) = ((int *)GEN_TOP(0x0));
      }
    }
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 4;
  } while (local_8 < 2);
  return local_8;
}

/* ref: FUN_00782ed0 */
GEN_OWN GEN_FRAME uint F_00782ed0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x782ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = param_4 + (param_3 + param_2 * 2) * 2;
  if (((-1 < (int)uVar2) && (uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x13282e0))[(int)(uVar2)]), uVar2 != 0)
      ) && (piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 0xec))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    iVar4 = 0;
    iVar3 = param_1;
    do {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xfc))))(piVar1 GEN_EDX_ARG,iVar4,iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 10);
  }
  return uVar2;
}

/* ref: FUN_00782f30 */
GEN_OWN GEN_FRAME uint F_00782f30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x782f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  undefined * this;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar3 = param_4 + (param_3 + param_2 * 2) * 2;
  if ((-1 < (int)uVar3) &&
     (uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,(&REFG(undefined4, 0x13282e0))[(int)(uVar3)]), uVar3 = uVar2, uVar2 != 0)) {
    this = *((undefined * PTR32 *)GEN_TOP((uVar2 + 0xec)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00b88e00(param_1,param_1);
      bVar1 = F_006a9a90(this GEN_EDX_ARG,param_1,1);
      uVar3 = CONCAT31(extraout_var,bVar1);
    }
    *((ushort *)GEN_TOP((uVar2 + 0x2ea4))) = (ushort)param_5;
  }
  return uVar3;
}

/* ref: FUN_00782fa0 */
GEN_OWN GEN_FRAME uint F_00782fa0(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x782fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x148a44c);
  if (REFG(undefined4, 0x148a44c) != 0) {
    *((ushort *)GEN_TOP((REFG(undefined4, 0x148a44c) + 0x2ea4))) = (ushort)param_1;
    if (REFG(undefined4, 0x148a44c) != 0) {
      F_00aa0560(REFG(undefined4, 0x148a44c) GEN_EDX_ARG,3);
      uVar1 = F_00aa4270(REFG(undefined4, 0x148a44c) GEN_EDX_ARG,param_2,0,0);
    }
  }
  return uVar1;
}

/* ref: FUN_00782fe0 */
GEN_OWN_GS GEN_FRAME uint F_00782fe0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0x782fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_FRAME_DECL_GS(0x30, 0, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  piVar3 = param_2;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    iVar1 = param_2[8];
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x24)) = 0;
    (*(int *)(gen_frame + 0x0)) = param_2[7];
    (*(int *)(gen_frame + 0x8)) = param_2[9];
    (*(int *)(gen_frame + 0x4)) = iVar1;
    (*(int *)(gen_frame + 0x10)) = param_2[0xb];
    (*(int *)(gen_frame + 0xc)) = param_2[10];
    (*(int *)(gen_frame + 0x18)) = param_2[0xd];
    (*(int *)(gen_frame + 0x14)) = param_2[0xc];
    (*(int *)(gen_frame + 0x20)) = param_2[0xf];
    (*(int *)(gen_frame + 0x1c)) = param_2[0xe];
    (*(int *)(gen_frame + 0x24)) = param_2[0x10];
    F_00aaa640(param_1 GEN_EDX_ARG,param_2,&(*(int *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x2c))))(param_1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,8,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,0xb,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_ARG,6,0);
    F_00aa80c0(param_1 GEN_EDX_ARG,0,param_3,param_4);
    F_00aa80c0(param_1 GEN_EDX_ARG,1,param_5,param_6);
    F_00aa39d0(param_1 GEN_EDX_ARG,param_7);
    F_00aa9000(param_1 GEN_EDX_ARG,(undefined1)param_8);
    F_00aa1720(param_1 GEN_EDX_ARG,param_9);
    uVar2 = F_00a5f500(param_1 GEN_EDX_ARG);
    if (uVar2 != 0) {
      *((undefined2 *)GEN_TOP((uVar2 + 0x72))) = 0;
    }
    if (param_1 != ((int *)GEN_TOP(0xffffe940))) {
      *((undefined2 *)GEN_TOP(((int)param_1 + 0x1732))) = 0;
    }
    piVar3 = param_1 + 0x798;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      *((undefined2 *)GEN_TOP(((int)param_1 + 0x1ed2))) = 0;
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00783120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00783120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x783120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(int *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (param_1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    uVar1 = F_00e3be40(param_1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((uVar1 + 0xb4)));
  }
  return (uint)this;
}

/* ref: FUN_00783160 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00783160(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x783160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  *in_ecx = param_2;
  if (param_2 != 0) {
    uVar1 = F_00e3be40(param_2 GEN_EDX_FWD);
    in_ecx[4] = *((int *)GEN_TOP((uVar1 + 0xb4)));
  }
  return;
}

/* ref: FUN_007831a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007831a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7831a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(int *)this = param_1;
  if (param_1 != 0) {
    uVar1 = *((uint *)GEN_TOP((param_1 + 0xc)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return 0;
}

/* ref: FUN_007831d0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_007831d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7831d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    return 0;
  }
  if ((*((int *)GEN_TOP((iVar1 + 8))) == *((int *)GEN_TOP(((int)this + 8)))) &&
     (*((int *)GEN_TOP((iVar1 + 0xc))) == *((int *)GEN_TOP(((int)this + 0xc))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00783200 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00783200(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x783200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    uVar2 = F_00e3be40(*param_1 GEN_EDX_FWD);
    if (uVar2 != 0) {
      uVar3 = F_00ab21a0((uint)param_2);
      if (((uVar3 == 0) || (*((char *)GEN_TOP((uVar3 + 0x43))) < '\0')) ||
         (uVar1 = *((ushort *)GEN_TOP((uVar2 + 0x24 + *((char *)GEN_TOP((uVar3 + 0x43))) * 2))), uVar1 == 0)) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00783250 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00783250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x783250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = F_00e3be40(*(int *)this GEN_EDX_FWD);
    if (uVar1 != 0) {
      uVar1 = F_00ab1c90((int)*((short *)GEN_TOP((uVar1 + 0x54))));
      if (uVar1 != 0) {
        return *((ushort *)GEN_TOP((uVar1 + 0x20)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00783310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00783310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x783310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = param_2;
  return param_1;
}

/* ref: FUN_00783330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00783330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x783330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00783350 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00783350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x783350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    uVar2 = F_00974770(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,0);
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  }
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    return 0;
  }
  bVar1 = F_009747b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_1,param_2,this,*((int *)GEN_TOP(((int)this + 0xc))));
  *((uint *)GEN_TOP(((int)this + 0xfc))) = (bVar1 == 0) + 2;
  return bVar1;
}

/* ref: FUN_007833a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_007833a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7833a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0xfc))) == 4) {
    bVar1 = F_009747f0(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,param_2,param_3,this,
                         *((int *)GEN_TOP(((int)this + 0xc))),0);
    *((uint *)GEN_TOP(((int)this + 0xfc))) = (bVar1 == 0) + 5;
    return bVar1;
  }
  return 4 < *((int *)GEN_TOP(((int)this + 0xfc)));
}

/* ref: FUN_00783400 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00783400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x783400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    return 0;
  }
  bVar1 = F_00974a60(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,param_2,param_3,this,
                       *((int *)GEN_TOP(((int)this + 0xc))));
  *((uint *)GEN_TOP(((int)this + 0xfc))) = (bVar1 == 0) + 0x12;
  return bVar1;
}

/* ref: FUN_00783440 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00783440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x783440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int iVar1;
  byte bVar2;
  undefined1 * puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    if (*param_1 == 0) {
      puVar3 = &REFG(undefined1, 0x107fc63);
    }
    else {
      puVar3 = ((undefined1 *)GEN_TOP((*param_1 + 0x1a)));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,puVar3,REFG(undefined4, 0x108cc50));
    iVar1 = *param_1;
    if (iVar1 == 0) {
      uVar5 = 0;
      uVar6 = 0;
      uVar4 = 0;
    }
    else {
      uVar5 = *((undefined4 *)GEN_TOP((iVar1 + 8)));
      uVar6 = *((undefined4 *)GEN_TOP((iVar1 + 0xc)));
      uVar4 = (uint)*((byte *)GEN_TOP((iVar1 + 0x10)));
    }
    bVar2 = F_00974bf0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar4,uVar5,uVar6,((undefined1 *)(gen_frame + 0x0)),this,
                         *((undefined4 *)GEN_TOP(((int)this + 0xc))));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0xfc))) = (bVar2 == 0) + 0x18;
    return bVar2;
  }
  return 0;
}

/* ref: FUN_00783500 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00783500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x783500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    return 0;
  }
  bVar1 = F_00974c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,param_2,param_3,param_4,this,
                       *((int *)GEN_TOP(((int)this + 0xc))));
  *((uint *)GEN_TOP(((int)this + 0xfc))) = (bVar1 == 0) + 0x1b;
  return bVar1;
}

/* ref: FUN_007835d0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_007835d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7835d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00414fd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_007835e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007835e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7835e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  *((uint *)GEN_TOP((in_ecx + 0x128))) = param_2;
  return param_2;
}

/* ref: FUN_00783600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00783600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x783600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  uint * puVar7;
  int local_c;
  
  puVar7 = ((uint *)GEN_TOP(((int)this + 0x14)));
  local_c = 2;
  do {
    if (puVar7[0x3c] == 1) {
      if (puVar7[1] == 0) {
        cVar1 = *((char *)GEN_TOP((*(int *)this + 0x5fc)));
        cVar2 = *((char *)GEN_TOP((*(int *)this + 0x5fd)));
        uVar4 = *puVar7;
        if (uVar4 == 0) {
          uVar4 = F_00974770(((undefined *)GEN_TOP(puVar7[-1])) GEN_EDX_FWD,0);
          *puVar7 = uVar4;
          if (uVar4 == 0) goto LAB_0078367c;
        }
        bVar3 = F_009747b0(((undefined *)GEN_TOP(puVar7[-1])) GEN_EDX_ARG,(int)cVar2,(int)cVar1,puVar7 - 3,uVar4);
        puVar7[0x3c] = 3 - (bVar3 != 0);
      }
      else {
        puVar7[0x3c] = 7;
      }
    }
LAB_0078367c: ;
    puVar7 = puVar7 + 0x46;
    local_c = local_c - 1;
  } while (local_c != 0);
  bVar3 = 0;
  iVar5 = 0;
  piVar6 = ((int *)GEN_TOP(((int)this + 0x18)));
  do {
    if (*piVar6 != 0) {
      bVar3 = 1;
      break;
    }
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 0x46;
  } while (iVar5 < 2);
  uVar4 = (uint)bVar3 * 2 + 5;
  *((uint *)GEN_TOP(((int)this + 0x238))) = uVar4;
  return uVar4;
}

/* ref: FUN_00783730 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00783730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x783730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 0x104)));
  do {
    if (*piVar1 != 1) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x46;
  } while (iVar2 < 2);
  return 1;
}

/* ref: FUN_00783760 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00783760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x783760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0x238))))) {
  case 2: ;
    iVar1 = 0;
    piVar2 = ((int *)GEN_TOP(((int)this + 0x104)));
    break;
  default: ;
    return 0;
  case 5: ;
    iVar1 = 0;
    piVar2 = ((int *)GEN_TOP(((int)this + 0x104)));
    do {
      if (4 < *piVar2) {
        *((undefined4 *)GEN_TOP(((int)this + 0x238))) = 6;
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x46;
    } while (iVar1 < 2);
    return 0;
  case 8: ;
    iVar1 = 0;
    piVar2 = ((int *)GEN_TOP(((int)this + 0x104)));
    do {
      if (7 < *piVar2) {
        *((undefined4 *)GEN_TOP(((int)this + 0x238))) = 9;
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x46;
    } while (iVar1 < 2);
    return 0;
  case 0xc: ;
    iVar1 = 0;
    piVar2 = ((int *)GEN_TOP(((int)this + 0x104)));
    do {
      if (*piVar2 == 0xb) {
        *((undefined4 *)GEN_TOP(((int)this + 0x238))) = 0xd;
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x46;
    } while (iVar1 < 2);
    return 0;
  }
  do {
    if (1 < *piVar2) {
      *((undefined4 *)GEN_TOP(((int)this + 0x238))) = 3;
      return 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x46;
  } while (iVar1 < 2);
  return 0;
}

/* ref: FUN_00783840 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00783840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x783840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x18)));
  while ((piVar2[-1] == 0 || (*piVar2 == 0))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x46;
    if (1 < iVar1) {
      return 0;
    }
  }
  return *((uint *)GEN_TOP((iVar1 * 0x118 + 0x18 + (int)this)));
}

/* ref: FUN_00783870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00783870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x783870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x118 + 0x20 + in_ecx;
}

/* ref: FUN_007838c0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_007838c0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7838c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*param_1 != 0) {
    uVar1 = F_00e3be40(*param_1 GEN_EDX_ARG);
    if (uVar1 != 0) {
      return *((int *)GEN_TOP((uVar1 + 0xa8))) != 0;
    }
  }
  return 0;
}

/* ref: FUN_00783900 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00783900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x783900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (1 < param_2) {
    return 0;
  }
  iVar1 = param_2 * 0x118 + 8 + in_ecx;
  uVar2 = *((uint *)GEN_TOP((iVar1 + 0x10c)));
  if (uVar2 < 99) {
    return 1;
  }
  if (uVar2 < 0x294) {
    return 2;
  }
  if (uVar2 < 1000) {
    return 3;
  }
  return (*((int *)GEN_TOP((iVar1 + 0xfc))) < 10) - 1U & 3;
}

/* ref: FUN_00783960 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00783960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x783960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (param_1 < 2) {
    return 9 < *((int *)GEN_TOP((param_1 * 0x118 + 0x104 + (int)this)));
  }
  return 0;
}

/* ref: FUN_00783a00 */
GEN_OWN GEN_FRAME uint F_00783a00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x783a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1 * 0x28;
}

/* ref: FUN_00783a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00783a20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x783a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 3;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  REFG(undefined4 * PTR32, 0x148a454) = in_ecx;
  return (uint)in_ecx;
}

/* ref: FUN_00783a70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00783a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x783a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
    F_00ba1d20(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    F_00ba1f90(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return;
}

/* ref: FUN_00783ab0 */
GEN_OWN GEN_NOFRAME unsigned int F_00783ab0(void)
{
  GEN_ENTER(0x783ab0u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x148a44a) = 0;
  return;
}

/* ref: FUN_00783ac0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00783ac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x783ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0xc)));
  if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) && (iVar1 != 4)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00783ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00783ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x783ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  int * piVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x25f8)));
  uVar5 = REFG(undefined4, 0x137104c);
  if ((iVar1 != 0) && (param_1 != *((int *)GEN_TOP(((int)this + 0x14))))) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    ((char * PTR32 *)(gen_frame + 0x0))[0] = "";
    ((char * PTR32 *)(gen_frame + 0x0))[1] = ((char *)REFP(0x10c07d8));
    ((char * PTR32 *)(gen_frame + 0x0))[2] = ((char *)REFP(0x10c07fc));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x78))))(piVar2 GEN_EDX_FWD,500);
    }
    if (param_1 < 3) {
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)) = gen_x87_cw | 0xc00;
      (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
      gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 4)));
      (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC(*(double *)&REFG(undefined, 0x10912a8) * 0.0);
      lVar4 = (*(longlong *)(gen_frame + 0xc));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (undefined4)(longlong)TRUNC(*(double *)&REFG(undefined, 0x10912a8) * 0.0);
      uVar3 = (undefined4)(*(longlong *)(gen_frame + 0xc));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      (*(longlong *)(gen_frame + 0xc)) = lVar4;
      uVar5 = F_004e99a0(iVar1 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x0))[(int)(param_1)],(float)(float10)1,uVar3);
      *((uint *)GEN_TOP(((int)this + 0x10))) = uVar5;
    }
    *((int *)GEN_TOP(((int)this + 0x14))) = param_1;
  }
  return uVar5;
}

/* ref: FUN_00783b80 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00783b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x783b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_FWD,500);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return;
}

/* ref: Client::UI2::Agent::AgentSupportSubView::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00783bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x783bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  this[0x1c] = (undefined1)0x0;
  return;
}

/* ref: FUN_00783be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00783be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x783be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  uint uVar1;
  int * piVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
  (*(char * PTR32 *)(gen_frame + 0x24)) = "";
  uVar1 = F_0042a990(param_1 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar1 = F_0042a990(param_1 + 0x54 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),7,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 6;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return uVar1;
}

/* ref: FUN_00783d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00783d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x783d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  int * piVar5;
  undefined4 * this_00;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  ((uint *)(gen_frame + 0x0))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  this_00 = ((undefined4 *)GEN_TOP(0x0));
  uVar7 = 0;
  ((uint *)(gen_frame + 0x0))[0] = 0x11a8;
  ((uint *)(gen_frame + 0x0))[1] = 0x11aa;
  ((uint *)(gen_frame + 0x0))[2] = 0x11ac;
  ((uint *)(gen_frame + 0x0))[3] = 0x11ae;
  uVar2 = F_00404270();
  puVar3 = ((undefined4 *)GEN_TOP(F_00406c00(0x4c,0,uVar2,uVar7)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = 9;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    puVar3[0xd] = 0;
    puVar3[0xf] = 0;
    puVar3[0x11] = 0;
    this_00 = puVar3 + 1;
  }
  uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  F_005a2710(this_00 GEN_EDX_ARG,3);
  this_00[1] = uVar7;
  uVar2 = ((uint *)(gen_frame + 0x0))[(int)(*((int *)GEN_TOP(((int)this + 0x14))))];
  uVar8 = 0;
  uVar7 = 0;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar2 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar2,uVar7,uVar8);
  F_005a2710(this_00 + 2 GEN_EDX_ARG,6);
  this_00[3] = uVar2;
  F_005a2710(this_00 + 4 GEN_EDX_ARG,6);
  this_00[5] = "";
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x11b6;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar2 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar7,uVar8,uVar9);
  F_005a2710(this_00 + 6 GEN_EDX_ARG,6);
  this_00[7] = uVar2;
  F_005a2710(this_00 + 8 GEN_EDX_ARG,6);
  this_00[9] = "";
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x11b7;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar2 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar7,uVar8,uVar9);
  F_005a2710(this_00 + 10 GEN_EDX_ARG,6);
  this_00[0xb] = uVar2;
  uVar2 = F_0042a990(param_1 + 8 GEN_EDX_ARG);
  F_005a2710(this_00 + 0xc GEN_EDX_ARG,6);
  this_00[0xd] = uVar2;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x11c8;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  uVar2 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar7,uVar8,uVar9);
  F_005a2710(this_00 + 0xe GEN_EDX_ARG,6);
  this_00[0xf] = uVar2;
  F_005a2710(this_00 + 0x10 GEN_EDX_ARG,6);
  this_00[0x11] = "";
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),9,this_00);
  iVar1 = this_00[-1];
  puVar3 = this_00 + iVar1 * 2;
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    puVar3 = puVar3 - 2;
    F_005a2670(puVar3 GEN_EDX_ARG);
  }
  uVar6 = F_00406b30(this_00 - 1);
  return (uint)uVar6;
}

/* ref: FUN_00783ef0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00783ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x783ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  char * pcVar1;
  char cVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  pvVar3 = (*(undefined * PTR32 *)&gen_args[0]);
  F_0042e430((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&REFG(undefined, 0x10c08b0));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00559470(uVar4 GEN_EDX_ARG)));
  iVar6 = (*(int *)&gen_args[1]);
  local_8 = 0;
  uVar4 = F_005796b0(this_00 GEN_EDX_ARG,(*(int *)&gen_args[1]),&(*(undefined * PTR32 *)&gen_args[0]));
  if (0 < (int)uVar4) {
    local_c = iVar6;
    do {
      F_0042d160(pvVar3 GEN_EDX_ARG,0x3e);
      iVar6 = 0;
      if (0 < (int)uVar4) {
        do {
          F_0042d160(pvVar3 GEN_EDX_ARG,*((undefined1 *)GEN_TOP((local_c + iVar6))));
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uVar4);
      }
      F_0042d160(pvVar3 GEN_EDX_ARG,0xd);
      local_8 = local_8 + ((uint)(*(undefined * PTR32 *)&gen_args[0]) & 0xffff) + uVar4;
      local_c = local_8 + (*(int *)&gen_args[1]);
      uVar4 = F_005796b0(this_00 GEN_EDX_ARG,local_c,&(*(undefined * PTR32 *)&gen_args[0]));
      iVar6 = (*(int *)&gen_args[1]);
    } while (0 < (int)uVar4);
  }
  F_0042d160(pvVar3 GEN_EDX_ARG,0x3e);
  iVar5 = local_8 + iVar6;
  cVar2 = *((char *)GEN_TOP((local_8 + iVar6)));
  while (cVar2 != '\0') {
    F_0042d160(pvVar3 GEN_EDX_ARG,cVar2);
    pcVar1 = ((char *)GEN_TOP((iVar5 + 1)));
    iVar5 = iVar5 + 1;
    cVar2 = *pcVar1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditPlayer::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00783fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x783fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCreditPlayer::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00784030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x784030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00784040 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00784040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x784040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0,0);
  return (uint)(uVar2 != 0);
}

/* ref: Client::UI2::Agent::AgentCreditScroll::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00784070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x784070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCreditScroll::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007840a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7840a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_007840b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007840b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7840b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0,0);
  return uVar2 & 1;
}

/* ref: FUN_007840e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007840e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7840e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0,0);
  return uVar2 >> 1 & 1;
}

/* ref: Client::UI2::Agent::AgentCreditCast::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00784110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x784110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCreditCast::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00784140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x784140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00784150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00784150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x784150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0,0);
  return (uint)(uVar2 != 0);
}

/* ref: Client::UI2::Agent::AgentCreditEnd::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00784180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x784180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

/* ref: Client::UI2::Agent::AgentCreditEnd::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_007841b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7841b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_007841c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007841c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7841c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0,0);
  return (uint)(uVar2 != 0);
}

/* ref: FUN_007841f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007841f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7841f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x10))));
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar2 = F_00406b30(*((int *)GEN_TOP(((int)this + 8))));
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00784270 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00784270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x784270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0x34))) != '\0') {
    F_0056a3d0(*((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,3,0,this,0,0);
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x34))) = 0;
  return;
}

/* ref: FUN_00784290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00784290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x784290u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  uint uVar2;
  undefined * _Dst;
  int iVar3;
  int iVar4;
  byte * pbVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  uVar1 = (*(uint *)&gen_args[2]);
  if (*((int *)GEN_TOP((param_1 + 0x18))) != 0) {
    *((undefined1 *)GEN_TOP((param_1 + 0x32))) = 0;
    F_0059ead0(*((int *)GEN_TOP((param_1 + 0x18))) GEN_EDX_FWD,(*(uint *)&gen_args[2]),0,1);
    if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
      F_00406b30(*((int *)GEN_TOP((param_1 + 8))));
      *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    }
    uVar8 = 0;
    uVar2 = F_00404270();
    uVar2 = F_00406c00(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar1 * 4),0,uVar2,uVar8);
    *((uint *)GEN_TOP((param_1 + 8))) = uVar2;
    if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
      F_00406b30(*((int *)GEN_TOP((param_1 + 0xc))));
      *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
    }
    if (*((int *)GEN_TOP((param_1 + 0x20))) == 1) {
      uVar8 = 0;
      uVar2 = F_00404270();
      uVar2 = F_00406c00(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar1 * 4),0,uVar2,uVar8);
      *((uint *)GEN_TOP((param_1 + 0xc))) = uVar2;
      *((undefined1 *)GEN_TOP((param_1 + 0x32))) = 1;
    }
    if (*((int *)GEN_TOP((param_1 + 0x10))) != 0) {
      F_00406b30(*((int *)GEN_TOP((param_1 + 0x10))));
      *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
    }
    uVar8 = 0;
    uVar2 = F_00404270();
    _Dst = ((undefined *)GEN_TOP(F_00406c00(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar1 * 4),0,uVar2,uVar8)));
    iVar6 = 0;
    *((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) = _Dst;
    F_00c48350(_Dst,0,uVar1 * 4);
    (*(uint *)(gen_frame + 0x8)) = 0;
    uVar2 = F_0056d250(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x18))) GEN_EDX_ARG,0,0);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = *((undefined * PTR32 *)GEN_TOP((uVar2 + 0x104)));
    F_00559d10(*((undefined * PTR32 *)GEN_TOP((uVar2 + 0x104))) GEN_EDX_ARG,&(*(uint *)&gen_args[2]),((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))))
                               );
    if (0 < (int)uVar1) {
      (*(int *)(gen_frame + 0xc)) = 0;
      do {
        iVar3 = iVar6;
        iVar4 = iVar6;
        if (*((int *)GEN_TOP((param_1 + 0x20))) != 0) {
          iVar3 = (*(int *)(gen_frame + 0xc));
          iVar4 = (*(int *)(gen_frame + 0xc)) + 1;
        }
        if ((*((byte *)GEN_TOP(((*(int *)&gen_args[1]) + iVar4 * 8))) & 0xf) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 4 + iVar4 * 8)));
        }
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + iVar6 * 4))) = uVar8;
        if (*((int *)GEN_TOP((param_1 + 0x20))) == 1) {
          if ((*((byte *)GEN_TOP(((*(int *)&gen_args[1]) + iVar3 * 8))) & 0xf) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 4 + iVar3 * 8)));
          }
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + iVar6 * 4))) = uVar8;
          if ((*((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10 + iVar3 * 8))) & 0xf) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14 + iVar3 * 8)));
          }
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + iVar6 * 4))) = uVar8;
        }
        F_00584110((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + iVar6 * 4))));
        uVar2 = F_00577bc0((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
        fVar7 = (float10)(int)uVar2;
        if ((int)uVar2 < 0) {
          fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        if ((float10)(int)(*(uint *)(gen_frame + 0x8)) < fVar7 + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))))) {
          (*(uint *)(gen_frame + 0x8)) = (int)(fVar7 + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))));
        }
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar1);
    }
    if (*((int *)GEN_TOP((param_1 + 0x20))) == 0) {
      if ((int)uVar1 < (*(int *)&gen_args[0])) {
        *((undefined1 *)GEN_TOP((param_1 + 0x32))) = 1;
      }
      iVar6 = 0;
      if (0 < (int)((*(int *)&gen_args[0]) - uVar1)) {
        pbVar5 = ((byte *)GEN_TOP(((*(int *)&gen_args[1]) + uVar1 * 8)));
        do {
          if ((*pbVar5 & 0xf) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)(pbVar5 + 4);
          }
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + iVar6 * 4))) = uVar8;
          iVar6 = iVar6 + 1;
          pbVar5 = pbVar5 + 8;
        } while (iVar6 < (int)((*(int *)&gen_args[0]) - uVar1));
      }
    }
    return (*(uint *)(gen_frame + 0x8));
  }
  return 0;
}

/* ref: FUN_007844e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007844e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7844e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = param_1 * 4;
    if (*((char *)GEN_TOP(((int)this + 0x35))) == '\0') {
      F_00584110(((undefined *)GEN_TOP(*param_2)) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((iVar2 + iVar1))));
    }
    else {
      F_00589b30(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + iVar1))));
    }
    uVar4 = *((uint *)GEN_TOP(((int)this + 0xc)));
    if (((uVar4 != 0) && (*((int *)GEN_TOP(((int)this + 0x20))) == 1)) && (*((int *)GEN_TOP(((int)this + 0x18))) != 0)) {
      bVar3 = F_0055a300(param_2[1] GEN_EDX_ARG,*((int *)GEN_TOP((uVar4 + iVar2))) != 0);
      uVar4 = CONCAT31(extraout_var,bVar3);
      iVar1 = *((int *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0xc))))));
      if (iVar1 != 0) {
        uVar4 = F_005951c0(param_3 GEN_EDX_ARG,iVar1,0,param_2[1]);
      }
    }
  }
  return uVar4;
}

/* ref: Client::UI2::PopupMenu::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00784560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(ushort * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x784560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(ushort * param_4 = (ushort *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 3) {
    if (*(undefined * PTR32 *)(this + 0x1c) == ((undefined *)GEN_TOP(0x0))) {
      return 3;
    }
    uVar1 = F_005791d0(*(undefined * PTR32 *)(this + 0x1c) GEN_EDX_FWD,(uint)*param_4,(uint)param_4[1]);
    if (uVar1 != 0) {
      return uVar1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,0xffffffff);
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
    if (*(undefined * PTR32 *)(this + 0x18) != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00562110(*(undefined * PTR32 *)(this + 0x18) GEN_EDX_ARG,0);
    }
    *(undefined4 *)(this + 0x1c) = 0;
    if (this[0x33] != (undefined1)0x0) {
      return uVar1;
    }
  }
  else {
    if (uVar1 != 0x21) {
      return uVar1;
    }
    if (*(int *)(this + 0x1c) == 0) {
      return 0x21;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,*(undefined4 *)(param_4 + 4));
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
    if (*(undefined * PTR32 *)(this + 0x18) != ((undefined *)GEN_TOP(0x0))) {
      F_00562110(*(undefined * PTR32 *)(this + 0x18) GEN_EDX_ARG,0);
    }
    if (this[0x33] != (undefined1)0x0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
      return uVar1;
    }
  }
  uVar1 = F_00586850(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,3,0,this);
  return uVar1;
}

/* ref: FUN_00784610 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00784610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x784610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (((iVar1 != 0) && (-1 < param_1)) && (param_1 < *((int *)GEN_TOP(((int)this + 0x24))))) {
    if (*((int *)GEN_TOP(((int)this + 0x20))) == 0) {
      return *((int *)GEN_TOP((iVar1 + param_1 * 4))) != 1;
    }
    return (*((byte *)GEN_TOP((iVar1 + param_1 * 4))) & 3) == 0;
  }
  return 0;
}

/* ref: FUN_00784650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00784650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x784650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c4668));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x22))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0x7fffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x6a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
  F_0056c400(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,0,0);
  *((undefined2 *)GEN_TOP(((int)this + 200))) = 0xffff;
  *((undefined2 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00784740 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00784740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x784740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c4668));
  uVar1 = F_00580e00(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

