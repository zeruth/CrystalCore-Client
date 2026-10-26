#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_007e6500 */
uint F_007e6500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar4 = 1;
  uVar3 = 0x18;
  uVar2 = 0;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this)));
  F_0075ec30(this_00,uVar2,uVar3,uVar4,uVar5,uVar6);
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 1;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_007e6560 */
uint F_007e6560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d5174));
  *(undefined4 *)((int)this + 0xc) = 0;
  F_00a1af40((undefined *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x34) = 1;
  return (uint)this;
}

/* ref: FUN_007e65a0 */
uint F_007e65a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e65a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x24);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if (((char)uVar2 != '\0') && (piVar1[0x82] == *(int *)((int)this + 8))) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x15c) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x15c));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x158) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x158));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x154) + 0xc))))(*(int * PTR32 *)(uVar2 + 0x154));
  return uVar2;
}

/* ref: FUN_007e6620 */
uint F_007e6620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d51bc));
  *(undefined4 *)((int)this + 0xc) = 0;
  F_0042b630((int)this + 0x10);
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  F_0042e430((undefined *)((int)this + 0x10),&REFG(undefined, 0x10be5b6));
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSupportSubList::vf1 */
uint F_007e6670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e6670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  if (((byte)*param_2 & 0xf) != 3) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  uVar2 = 0;
  switch((unsigned int)(uintptr_t)(param_2[1])) {
  case 0: ;
    if ((*(byte *)(param_2 + 2) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_2[3];
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x158) + 0x40))))(*(int * PTR32 *)(uVar1 + 0x158),5,uVar3);
    ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
    *(undefined1 *)(param_1 + 1) = 0;
    this[0x6c] = (undefined1)0x1;
    *param_1 = 2;
    return (uint)param_1;
  case 1: ;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x15c) + 0x4c))))(*(int * PTR32 *)(uVar1 + 0x15c),4,1);
  case 0xfffffffe: ;
  case 0xffffffff: ;
    uVar2 = 1;
    *(undefined4 *)(this + 8) = 0;
  default: ;
    *(undefined1 *)(param_1 + 1) = uVar2;
    *param_1 = 2;
    return (uint)param_1;
  }
}

/* ref: FUN_007e6740 */
unsigned int F_007e6740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x10d5204));
  in_ecx[3] = 0;
  in_ecx[6] = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  in_ecx[8] = 0xffffffff;
  return 0;
}

/* ref: FUN_007e6800 */
uint F_007e6800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6800u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[20])REFP(0x10d524c));
  in_ecx[3] = 0;
  in_ecx[6] = 0xffffffff;
  in_ecx[0xb] = 0;
  F_0042b630(in_ecx + 0xd);
  F_0042b630(in_ecx + 0x27);
  F_0042b630(in_ecx + 0x3c);
  F_0042b630(in_ecx + 0x51);
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf3 */
unsigned int F_007e6860(unsigned int gen_a0)
{
  GEN_ENTER(0x7e6860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  int * piVar3;
  
  if (((*(uint *)(this + 0x18) < 4) && (*(int *)(this + 0xc) != 0)) &&
     (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))), iVar2 != 0)) {
    puVar1 = (uint *)(iVar2 + 0x184);
    *puVar1 = *puVar1 & 0xffffffcf;
  }
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_007e68b0 */
uint F_007e68b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e68b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  if (((*(uint *)((int)this + 0x18) < 4) && (*(int *)((int)this + 0xc) != 0)) &&
     (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), iVar2 != 0)) {
    puVar1 = (uint *)(iVar2 + 0x184);
    *puVar1 = *puVar1 & 0xffffffcf;
  }
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x158) + 0xc))))(*(int * PTR32 *)(uVar3 + 0x158));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x154) + 0xc))))(*(int * PTR32 *)(uVar3 + 0x154));
  if (*(int *)((int)this + 8) != 0) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar3;
}

/* ref: FUN_007e6930 */
uint F_007e6930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  undefined4 * this_00;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_0042b630(((undefined1 *)(gen_frame + 0x54)));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  if ((*(int *)((int)this + 0xc) != 0) &&
     (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), iVar5 != 0)) {
    piVar1 = (int *)F_0043c6b0(iVar5);
    if (*(uint *)((int)this + 0x24) < (uint)((piVar1[1] - *piVar1) / 0x68)) {
      iVar6 = *(uint *)((int)this + 0x24) * 0x68;
      uVar2 = F_0042a990(iVar6 + *piVar1);
      F_0042e430(((undefined1 *)(gen_frame + 0x54)),uVar2);
      iVar5 = *piVar1;
      if (*(uint *)((int)this + 0x28) <
          (uint)((*(int *)(iVar5 + 0x5c + iVar6) - *(int *)(iVar5 + 0x58 + iVar6)) / 0x58)) {
        uVar2 = F_0042a990(*(uint *)((int)this + 0x28) * 0x58 + *(int *)(iVar5 + 0x58 + iVar6));
        F_0042e430(((undefined1 *)(gen_frame + 0x0)),uVar2);
      }
    }
  }
  uVar9 = 0;
  uVar2 = F_00404270();
  puVar3 = (undefined4 *)F_00406c00(0x7c,0,uVar2,uVar9);
  if (puVar3 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = puVar3 + 1;
    *puVar3 = 0xf;
    iVar5 = 0xe;
    puVar3 = this_00;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  uVar9 = *(undefined4 *)((int)this + 0x10);
  F_005a2710(this_00,3);
  this_00[1] = uVar9;
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0x11b4;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 2,6);
  this_00[3] = uVar2;
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0x11b5;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 4,6);
  this_00[5] = uVar2;
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0x11b6;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 6,6);
  this_00[7] = uVar2;
  F_005a2710(this_00 + 8,6);
  this_00[9] = "";
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0x11b7;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 10,6);
  this_00[0xb] = uVar2;
  uVar2 = F_0042a990(param_1 + 8);
  F_005a2710(this_00 + 0xc,6);
  uVar10 = 0;
  this_00[0xd] = uVar2;
  uVar8 = 0;
  uVar9 = 0x11b8;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 0xe,6);
  this_00[0xf] = uVar2;
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0x11d3;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar9,uVar8,uVar10);
  F_005a2710(this_00 + 0x10,6);
  this_00[0x11] = uVar2;
  F_005a2710(this_00 + 0x12,3);
  this_00[0x13] = 1;
  F_005a2710(this_00 + 0x14,3);
  this_00[0x15] = 0;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  F_005a2710(this_00 + 0x16,6);
  this_00[0x17] = uVar2;
  F_005a2710(this_00 + 0x18,3);
  this_00[0x19] = 1;
  F_005a2710(this_00 + 0x1a,3);
  this_00[0x1b] = 0;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_005a2710(this_00 + 0x1c,6);
  this_00[0x1d] = uVar2;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 8),0xf,this_00);
  iVar5 = this_00[-1];
  puVar3 = this_00 + iVar5 * 2;
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    puVar3 = puVar3 + -2;
    F_005a2670(puVar3);
  }
  F_00406b30(this_00 + -1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)uVar7;
}

/* ref: FUN_007e6ca0 */
uint F_007e6ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e6ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  int * piVar7;
  int * this_00;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_14;
  uint local_10;
  int local_c;
  
  uVar6 = 0;
  local_10 = 0;
  if ((*(int *)((int)this + 0xc) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), iVar1 != 0)) {
    piVar2 = (int *)F_0043c6b0(iVar1);
    iVar1 = *piVar2;
    uVar6 = (piVar2[1] - iVar1) / 0x68 & 0xffff;
    if (*(uint *)((int)this + 0x24) < uVar6) {
      iVar3 = *(uint *)((int)this + 0x24) * 0x68;
      local_10 = (*(int *)(iVar3 + 0x5c + iVar1) - *(int *)(iVar3 + 0x58 + iVar1)) / 0x58 & 0xffff;
    }
  }
  iVar1 = local_10 + 0xd + uVar6;
  uVar10 = 0;
  uVar4 = F_00404270();
  piVar2 = (int *)F_00406c00(-(uint)(0xfffffffb < (uint)(iVar1 * 8)) | iVar1 * 8 + 4U,0,uVar4,
                               uVar10);
  if (piVar2 == (int *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = piVar2 + 1;
    *piVar2 = iVar1;
    piVar2 = this_00;
    iVar3 = iVar1;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      *piVar2 = 0;
      piVar2 = piVar2 + 2;
    }
  }
  if (((*(int *)((int)this + 0xc) != 0) &&
      (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), iVar3 != 0)) &&
     (piVar2 = (int *)F_0043c6b0(iVar3), (short)uVar6 != 0)) {
    if (uVar6 != 0) {
      local_c = 0;
      piVar7 = this_00 + 0x16;
      local_14 = uVar6;
      do {
        uVar4 = F_0042a990(*piVar2 + local_c);
        F_005a2710(piVar7,6);
        local_c = local_c + 0x68;
        piVar7[1] = uVar4;
        piVar7 = piVar7 + 2;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
    if (local_10 != 0) {
      local_c = 0;
      piVar7 = this_00 + uVar6 * 2 + 0x1a;
      local_14 = local_10;
      do {
        uVar4 = F_0042a990(*((int *)GEN_TOP((*(int *)((int)this + 0x24) * 0x68 + 0x58 + *piVar2))) + local_c)
        ;
        F_005a2710(piVar7,6);
        local_c = local_c + 0x58;
        piVar7[1] = uVar4;
        piVar7 = piVar7 + 2;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
  }
  iVar3 = *(int *)((int)this + 0x10);
  F_005a2710(this_00,3);
  this_00[1] = iVar3;
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0x11b4;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 2,6);
  this_00[3] = uVar4;
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0x11b5;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 4,6);
  this_00[5] = uVar4;
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0x11b6;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 6,6);
  this_00[7] = uVar4;
  F_005a2710(this_00 + 8,6);
  this_00[9] = (int)"";
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0x11b7;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 10,6);
  this_00[0xb] = uVar4;
  uVar4 = F_0042a990(param_1 + 8);
  F_005a2710(this_00 + 0xc,6);
  uVar11 = 0;
  this_00[0xd] = uVar4;
  uVar9 = 0;
  uVar10 = 0x11b8;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 0xe,6);
  this_00[0xf] = uVar4;
  uVar11 = 0;
  uVar9 = 0;
  uVar10 = 0x11d3;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar10,uVar9,uVar11);
  F_005a2710(this_00 + 0x10,6);
  this_00[0x11] = uVar4;
  F_005a2710(this_00 + 0x12,3);
  this_00[0x13] = uVar6;
  iVar3 = *(int *)((int)this + 0x24);
  F_005a2710(this_00 + 0x14,3);
  this_00[0x15] = iVar3;
  F_005a2710(this_00 + uVar6 * 2 + 0x16,3);
  (this_00 + uVar6 * 2 + 0x16)[1] = local_10;
  iVar3 = *(int *)((int)this + 0x28);
  F_005a2710(this_00 + uVar6 * 2 + 0x18,3);
  (this_00 + uVar6 * 2 + 0x18)[1] = iVar3;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),iVar1,this_00);
  iVar1 = this_00[-1];
  piVar2 = this_00 + iVar1 * 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = piVar2 + -2;
    F_005a2670(piVar2);
  }
  uVar8 = F_00406b30(this_00 + -1);
  return (uint)uVar8;
}

/* ref: FUN_007e7020 */
uint F_007e7020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_007e6ca0(this,param_1);
  return uVar1;
}

/* ref: FUN_007e7030 */
byte F_007e7030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e7030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int in_ecx;
  uint uVar1;
  int * piVar2;
  
  if ((*(int *)((int)this + 0xc) != 0) &&
     (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), in_ecx != 0)) {
    piVar2 = (int *)F_0043c6b0(in_ecx);
    if (param_1 < (uint)((piVar2[1] - *piVar2) / 0x68)) {
      uVar1 = *(uint *)(param_1 * 0x68 + 0x54 + *piVar2);
      *param_3 = uVar1;
      if (0xffff < uVar1) {
        *param_3 = param_1;
      }
      piVar2 = (int *)(*piVar2 + 0x58 + param_1 * 0x68);
      if (param_2 < (uint)((piVar2[1] - *piVar2) / 0x58)) {
        *param_4 = *(undefined4 *)(param_2 * 0x58 + 0x54 + *piVar2);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007e70d0 */
byte F_007e70d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e70d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  uint local_8;
  
  if ((*(int *)((int)this + 0xc) != 0) &&
     (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), iVar3 != 0)) {
    piVar2 = (int *)F_0043c6b0(iVar3);
    iVar3 = *piVar2;
    iVar6 = piVar2[1] - iVar3 >> 0x1f;
    local_8 = 0;
    if ((piVar2[1] - iVar3) / 0x68 + iVar6 != iVar6) {
      iVar6 = 0;
      do {
        if (*(int *)(iVar6 + 0x54 + iVar3) == param_1) {
          *param_3 = local_8;
          iVar3 = *piVar2;
          iVar4 = *(int *)(iVar6 + 0x5c + iVar3) - *(int *)(iVar6 + 0x58 + iVar3);
          iVar1 = iVar4 >> 0x1f;
          uVar7 = 0;
          if (iVar4 / 0x58 + iVar1 != iVar1) {
            piVar5 = ((int *)GEN_TOP((*(int *)(iVar6 + 0x58 + iVar3) + 0x54)));
            do {
              if (*piVar5 == param_2) {
                *param_4 = uVar7;
                return 1;
              }
              uVar7 = uVar7 + 1;
              piVar5 = piVar5 + 0x16;
            } while (uVar7 < (uint)((*(int *)(iVar6 + 0x5c + iVar3) - *(int *)(iVar6 + 0x58 + iVar3)
                                    ) / 0x58));
          }
        }
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 0x68;
      } while (local_8 < (uint)((piVar2[1] - iVar3) / 0x68));
    }
  }
  return 0;
}

/* ref: FUN_007e71d0 */
byte F_007e71d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e71d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  if ((((byte)*param_1 & 0xf) == 3) && (param_1[1] == 0)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x2c),0);
    *(undefined4 *)((int)this + 0x2c) = 0;
    F_007e68b0(this);
    return 1;
  }
  return 0;
}

/* ref: FUN_007e7220 */
uint F_007e7220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d52a4));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_007e7240 */
unsigned int F_007e7240(unsigned int gen_a0)
{
  GEN_ENTER(0x7e7240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007e7280 */
uint F_007e7280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d52ec));
  return (uint)in_ecx;
}

/* ref: FUN_007e72a0 */
unsigned int F_007e72a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e72a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditCast::vf1 */
uint F_007e72e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e72e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined * this_00;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  if ((-3 < iVar1) && (iVar1 < 0)) {
    *(undefined4 *)(this + 8) = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    F_007cbc20(this_00);
    uVar2 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: FUN_007e7330 */
uint F_007e7330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d5334));
  return (uint)in_ecx;
}

/* ref: FUN_007e7350 */
unsigned int F_007e7350(unsigned int gen_a0)
{
  GEN_ENTER(0x7e7350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditEnd::vf1 */
uint F_007e7390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e7390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined * this_00;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  if ((-3 < iVar1) && (iVar1 < 0)) {
    *(undefined4 *)(this + 8) = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    F_007cbc20(this_00);
    uVar2 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: FUN_007e73e0 */
uint F_007e73e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e73e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d537c));
  return (uint)in_ecx;
}

/* ref: FUN_007e7400 */
unsigned int F_007e7400(unsigned int gen_a0)
{
  GEN_ENTER(0x7e7400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_007e7440 */
unsigned int F_007e7440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  return 0;
}

/* ref: FUN_007e7490 */
uint F_007e7490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7490u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint in_ecx;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((((*(uint *)&gen_args[1]) == 0) || (in_ecx = F_00559c20((*(uint *)&gen_args[1])), in_ecx == 0)) ||
     (uVar1 = F_005613a0(in_ecx), uVar1 != 2)) {
    in_ecx = 0;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = in_ecx;
  uVar1 = 0;
  if (in_ecx != 0) {
    F_0055a000(*(undefined * PTR32 *)(in_ecx + 0x70),&(*(uint *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    uVar1 = (*(uint *)&gen_args[1]) & 0xffff;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007e74f0 */
uint F_007e74f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e74f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint in_EAX = 0;
  undefined * pvVar1;
  uint uVar2;
  undefined4 in_ecx;
  float10 fVar3;
  
  if (param_1 != 0) {
    pvVar1 = (undefined *)F_00559c20(param_1);
    in_EAX = 0;
    if ((pvVar1 != (undefined *)0x0) && (in_EAX = F_005613a0(pvVar1), in_EAX == 9)) goto LAB_007e7521;
  }
  pvVar1 = (undefined *)0x0;
LAB_007e7521: ;
  *(undefined * PTR32 *)((int)this + 0x18) = pvVar1;
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_0056d250(pvVar1,0,0);
    in_EAX = 0;
    if (uVar2 != 0) {
      if (*(int *)((int)this + 0x18) == 0) {
        in_ecx = 0;
      }
      else {
        in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70)));
      }
      fVar3 = F_00559d80(in_ecx);
      *(short *)((int)this + 0x2c) = (short)(int)fVar3;
      if (*(int *)((int)this + 0x18) == 0) {
        pvVar1 = (undefined *)0x0;
      }
      else {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70)));
      }
      F_00568380(pvVar1,0x21,0,this,0,0);
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
      (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x7844e0));
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (param_3 != 0) {
        ((int *)(gen_frame + 0x14))[3] = param_3;
        ((int *)(gen_frame + 0x14))[0] = param_2;
        *(undefined4 *)((int)this + 0x20) = 1;
        ((int *)(gen_frame + 0x14))[1] = 0;
        ((int *)(gen_frame + 0x14))[2] = 0;
        uVar2 = F_00574320(*(undefined * PTR32 *)((int)this + 0x18),&(*(undefined * PTR32 *)(gen_frame + 0x4)),((int *)(gen_frame + 0x14)),2,0);
        return uVar2;
      }
      *(undefined4 *)((int)this + 0x20) = 0;
      ((int *)(gen_frame + 0x14))[3] = param_2;
      uVar2 = F_00574320(*(undefined * PTR32 *)((int)this + 0x18),&(*(undefined * PTR32 *)(gen_frame + 0x4)),((int *)(gen_frame + 0x14)) + 3,1,0);
      return uVar2;
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  return in_EAX;
}

/* ref: FUN_007e7600 */
uint F_007e7600(unsigned int gen_a0)
{
  GEN_ENTER(0x7e7600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00586850(*(undefined * PTR32 *)((int)this + 4),3,0,this);
  uVar1 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar1 = F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70))),0x21,0,this,0);
  }
  return uVar1;
}

/* ref: FUN_007e7630 */
unsigned int F_007e7630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0x7e7630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint param_9 = (uint)gen_a9;
  uint param_10 = (uint)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int * piVar6;
  undefined * this_00;
  code * pcVar7;
  ushort uVar8;
  int iVar9;
  float in_XMM7_Da = 0;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x18) == (undefined *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0x14) == 0) {
    return 0;
  }
  if (param_2 < 1) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 < 1) {
    return 0;
  }
  *(int *)((int)this + 0x1c) = param_1;
  *(int *)((int)this + 0x24) = param_4;
  *(undefined1 *)((int)this + 0x33) = (undefined1)param_9;
  *(undefined2 *)((int)this + 0x2e) = (undefined2)param_6;
  *(undefined1 *)((int)this + 0x34) = (undefined1)param_10;
  *(undefined2 *)((int)this + 0x30) = (undefined2)param_7;
  F_005b2060(*(undefined * PTR32 *)((int)this + 0x18),(uint)*(ushort *)((int)this + 0x24));
  F_00562110(*(undefined * PTR32 *)((int)this + 0x18),1);
  *(undefined1 *)((int)this + 0x35) = (undefined1)param_11;
  uVar4 = F_00784290(this,param_2,param_3,*(uint *)((int)this + 0x24));
  param_10 = uVar4;
  if ((int)uVar4 < (int)*(uint *)((int)this + 0x28)) {
    param_10 = *(uint *)((int)this + 0x28);
  }
  if (*(char *)((int)this + 0x35) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x70))))(*(int * PTR32 *)((int)this + 0x18));
  }
  iVar9 = 0;
  if (0 < *(int *)((int)this + 0x24)) {
    do {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x54))))(*(int * PTR32 *)((int)this + 0x18),iVar9,0);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)((int)this + 0x24));
  }
  if ((*(char *)((int)this + 0x32) != '\0') && (iVar9 = 0, 0 < *(int *)((int)this + 0x24))) {
    do {
      iVar1 = **(int * PTR32 *)((int)this + 0x18);
      bVar2 = F_00784610(this,iVar9);
      ((code *)*(gen_code32 *)(iVar1 + 0x54))(*(undefined4 *)((int)this + 0x18),iVar9,(uint)(bVar2 == 0));
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)((int)this + 0x24));
  }
  iVar9 = 0;
  if (*(char *)((int)this + 0x35) == '\0') {
    uVar4 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x18),0,0);
    uVar8 = *(short *)(uVar4 + 0x206) * *(short *)((int)this + 0x24);
LAB_007e7787: ;
    if (uVar8 != 0) goto LAB_007e77a6;
  }
  else if (0 < *(int *)((int)this + 0x24)) {
    uVar8 = 0;
    do {
      uVar4 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x18),0,iVar9);
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = *(undefined4 *)(uVar4 + 0x70);
      }
      uVar3 = F_0055a030(uVar5);
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 + uVar3;
    } while (iVar9 < *(int *)((int)this + 0x24));
    goto LAB_007e7787;
  }
  uVar5 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70)));
  }
  uVar8 = F_0055a030(uVar5);
LAB_007e77a6: ;
  param_9 = (uint)uVar8;
  piVar6 = *(int * PTR32 *)((int)this + 0x1c);
  if ((char)param_8 == '\0') {
    iVar9 = *piVar6;
    ((code *)*(gen_code32 *)(iVar9 + 0x50))
              (piVar6,0,(uint)(ushort)(*(short *)((int)this + 0x2c) + *(short *)((int)this + 0x30) +
                                      uVar8));
    pcVar7 = *(gen_code32 *)(iVar9 + 0x4c);
    piVar6 = *(int * PTR32 *)((int)this + 0x1c);
  }
  else {
    pcVar7 = *(gen_code32 *)(*piVar6 + 0x4c);
  }
  (*pcVar7)(piVar6);
  if (*(int *)((int)this + 0x18) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70)));
  }
  F_0055a040(this_00,param_10,param_9);
  uVar5 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70)));
  }
  F_00559f00(uVar5,(float)(int)*(short *)((int)this + 0x2c));
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x11e))) = 1;
  if (*(char *)((int)this + 0x35) != '\0') {
    F_0058dd00(*(undefined4 *)((int)this + 0x18),in_XMM7_Da);
  }
  F_00586850(*(undefined * PTR32 *)((int)this + 4),3,0,this);
  return 0;
}

/* ref: FUN_007e7860 */
uint F_007e7860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e7860u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  float in_XMM7_Da = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  if (((uVar3 != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0)) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) != 0)) {
    sVar5 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) + (short)(*(undefined4 *)&gen_args[1]);
    F_0055a000(*(undefined * PTR32 *)(uVar3 + 0x70),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
    uVar3 = (uint)(ushort)(*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) + sVar5 + (short)(*(undefined4 *)&gen_args[1]));
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
    if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
      iVar2 = *piVar1;
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0,uVar3);
      ((code *)*(gen_code32 *)(iVar2 + 0x4c))(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),uVar3 & 0xffff);
      uVar4 = 0;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0) {
        uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0x70)));
      }
      F_0055a080(uVar4,(*(undefined4 *)&gen_args[1]));
    }
    else {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))
                (piVar1,(uint)(ushort)(*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e))) * 2 + (short)(*(undefined * PTR32 *)(gen_frame + 0x8))),uVar3);
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == 0) {
        F_0055a040((undefined *)0x0,(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
      }
      else {
        F_0055a040(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0x70))),(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
      }
    }
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x35))) != '\0') {
      F_0058dd00(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),in_XMM7_Da);
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0x70)));
    }
    uVar3 = F_00559f00(uVar4,(float)(int)sVar5);
  }
  return uVar3;
}

/* ref: FUN_007e7970 */
uint F_007e7970(unsigned int gen_a0)
{
  GEN_ENTER(0x7e7970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70))));
    if ((char)uVar1 == '\0') {
      uVar1 = F_00562110(*(undefined * PTR32 *)((int)this + 0x18),1);
    }
  }
  return uVar1;
}

/* ref: FUN_007e79a0 */
unsigned int F_007e79a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e79a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_ecx_00;
  uint uVar1;
  
  *(int *)(in_ecx + 0xc) = param_2;
  if (((param_2 == 0) || (in_ecx_00 = F_00559c20(param_2), in_ecx_00 == 0)) ||
     (uVar1 = F_005613a0(in_ecx_00), uVar1 != 0xd)) {
    in_ecx_00 = 0;
  }
  *(uint *)(in_ecx + 0x10) = in_ecx_00;
  if (in_ecx_00 != 0) {
    *(undefined2 *)(in_ecx_00 + 0xc2) = 4;
  }
  return 0;
}

/* ref: FUN_007e79f0 */
uint F_007e79f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e79f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  F_00568380(*(undefined * PTR32 *)((int)this + 8),0xc,0,param_1,0,0);
  if (*(int *)((int)this + 0x10) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_00568380(pvVar2,0x19,1,param_1,0,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_00568380(pvVar2,3,2,param_1,0,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_00568380(pvVar2,4,3,param_1,0,0);
  F_00568380(*(undefined * PTR32 *)((int)this + 8),8,0x100,param_1,0,0);
  F_00568380(*(undefined * PTR32 *)((int)this + 8),3,0x101,param_1,0,0);
  F_00568380(*(undefined * PTR32 *)((int)this + 8),4,0x102,param_1,0,0);
  *(undefined4 *)((int)this + 0x54) = 1;
  F_00784800(this);
  *(undefined4 *)((int)this + 0x50) = 0;
  F_00589f20(*(undefined * PTR32 *)((int)this + 0x10),0);
  F_00574c80(*(undefined4 *)((int)this + 0x10),0,0,1);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x28))))(*(int * PTR32 *)((int)this + 0x10),0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_0055a300(pvVar2,0);
  uVar1 = F_0056c440((undefined *)((int)this + 0x78),0x3a,0x200,param_1,0);
  return uVar1;
}

/* ref: FUN_007e7b00 */
uint F_007e7b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_1;
  F_00784800(this);
  uVar1 = F_00784950(this,*(undefined4 *)((int)this + 0x2c),0,1,0);
  return uVar1;
}

/* ref: FUN_007e7b30 */
uint F_007e7b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  short sVar2;
  int * piVar3;
  longlong lVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined * pvVar10;
  undefined4 uVar11;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x10);
  if ((uint)*(ushort *)((int)this + 0x3e) < *(uint *)((int)this + 0x48)) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1);
    pvVar10 = *(undefined * PTR32 *)((int)this + 0x10);
    if (*(char *)((int)this + 0xbf) == '\0') {
      if (pvVar10 != (undefined *)0x0) {
        pvVar10 = *(undefined * PTR32 *)((int)pvVar10 + 0x70);
      }
      uVar11 = 1;
    }
    else if (pvVar10 == (undefined *)0x0) {
      uVar11 = 0;
    }
    else {
      pvVar10 = *(undefined * PTR32 *)((int)pvVar10 + 0x70);
      uVar11 = 0;
    }
    F_0055a300(pvVar10,uVar11);
    iVar9 = *(int *)((int)this + 0x48);
    iVar5 = (iVar9 - (uint)*(ushort *)((int)this + 0x3e)) * 4;
    *(int *)((int)this + 0x6c) = iVar5;
    uVar8 = F_00589f20(*(undefined * PTR32 *)((int)this + 0x10),iVar5);
    if (*(char *)((int)this + 0xbe) != '\0') {
      return uVar8;
    }
    if (*(char *)((int)this + 0xa1) != '\0') {
LAB_007e7c89: ;
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x6c);
      goto LAB_007e7cfb;
    }
    if (*(char *)((int)this + 0xa0) != '\0') {
LAB_007e7c9a: ;
      *(undefined4 *)((int)this + 0x50) = 0;
      goto LAB_007e7cfb;
    }
    if ((char)param_1 != '\0') goto LAB_007e7cfb;
    sVar2 = *((short *)GEN_TOP((*(int *)((int)this + 8) + 0x10e)));
    bVar1 = *(byte *)((int)this + 0x58);
    uVar6 = F_0055a030(*(int *)((int)this + 8));
    iVar9 = (uint)bVar1 * iVar9 - (uint)uVar6;
    lVar4 = (ulonglong)(*(int *)((int)this + 0x30) * (uint)bVar1 - (int)sVar2) *
            (longlong)*(int *)((int)this + 0x6c);
  }
  else {
    if (*(ushort *)((int)this + 0x4c) <= *(ushort *)((int)this + 0x3e)) {
      *(undefined4 *)((int)this + 0x50) = 0;
      *(undefined4 *)((int)this + 0x6c) = 1;
      F_00574c80(piVar3,0,1,1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x28))))(*(int * PTR32 *)((int)this + 0x10),0);
      if (*(int *)((int)this + 0x10) != 0) {
        uVar8 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70))),0);
        return uVar8;
      }
      uVar8 = F_0055a300((undefined *)0x0,0);
      return uVar8;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1);
    pvVar10 = *(undefined * PTR32 *)((int)this + 0x10);
    if (*(char *)((int)this + 0xbf) == '\0') {
      if (pvVar10 != (undefined *)0x0) {
        pvVar10 = *(undefined * PTR32 *)((int)pvVar10 + 0x70);
      }
      uVar11 = 1;
    }
    else if (pvVar10 == (undefined *)0x0) {
      uVar11 = 0;
    }
    else {
      pvVar10 = *(undefined * PTR32 *)((int)pvVar10 + 0x70);
      uVar11 = 0;
    }
    F_0055a300(pvVar10,uVar11);
    uVar6 = *(ushort *)((int)this + 0x4c);
    iVar9 = ((uint)uVar6 - (uint)*(ushort *)((int)this + 0x3e)) * 4;
    *(int *)((int)this + 0x6c) = iVar9;
    uVar8 = F_00589f20(*(undefined * PTR32 *)((int)this + 0x10),iVar9);
    if (*(char *)((int)this + 0xbe) != '\0') {
      return uVar8;
    }
    if (*(char *)((int)this + 0xa1) != '\0') goto LAB_007e7c89;
    if (*(char *)((int)this + 0xa0) != '\0') goto LAB_007e7c9a;
    sVar2 = *((short *)GEN_TOP((*(int *)((int)this + 8) + 0x10e)));
    bVar1 = *(byte *)((int)this + 0x58);
    uVar7 = F_0055a030(*(int *)((int)this + 8));
    iVar9 = (uint)bVar1 * (uint)uVar6 - (uint)uVar7;
    lVar4 = (ulonglong)(*(int *)((int)this + 0x30) * (uint)bVar1 - (int)sVar2) *
            (longlong)*(int *)((int)this + 0x6c);
  }
  *(int *)((int)this + 0x50) = (int)(lVar4 / (longlong)iVar9);
LAB_007e7cfb: ;
  uVar8 = F_00574c80(*(undefined4 *)((int)this + 0x10),*(uint *)((int)this + 0x50),1,1);
  return uVar8;
}

/* ref: FUN_007e7d70 */
uint F_007e7d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e7d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  undefined * this_00;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  float10 fVar13;
  undefined4 uVar14;
  
  uVar14 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 8)));
  uVar7 = F_0055ab00(*(undefined4 *)((int)this + 8));
  uVar8 = F_00557890(uVar14,uVar7);
  uVar7 = 0;
  if (uVar8 != 0) {
    F_00577d20(*(undefined * PTR32 *)((int)this + 8),((undefined1 *)(gen_frame + 0x10)),((ushort *)(gen_frame + 0x14)),0,0,REFG(undefined4, 0x108cc50),0);
    ((ushort *)(gen_frame + 0x14))[0] = ((ushort *)(gen_frame + 0x14))[0] - *(byte *)((int)this + 0x58);
    uVar5 = F_0055a030(*(undefined4 *)((int)this + 8));
    sVar6 = uVar5 - ((ushort *)(gen_frame + 0x14))[0];
    uVar14 = 0;
    if (*(int *)((int)this + 0x10) != 0) {
      uVar14 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
    }
    uVar7 = F_0055a350(uVar14);
    if ((char)uVar7 != '\0') {
      iVar10 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0)));
      uVar7 = *(uint *)((int)this + 0x48);
      iVar11 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa8)));
      (*(byte *)(gen_frame + 0x1b)) = *(byte *)((int)this + 0x58);
      uVar8 = (uint)*(byte *)((int)this + 0x58);
      uVar5 = F_0055a030(*(undefined4 *)((int)this + 8));
      (*(float *)(gen_frame + 0x0)) = 0.0;
      if (*(uint *)((int)this + 0x2c) < 0x7fffffff) {
        iVar9 = ((uVar7 - *(ushort *)((int)this + 0x4c)) - *(int *)((int)this + 0x30)) * uVar8;
        fVar13 = (float10)iVar9;
        if (iVar9 < 0) {
          fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)(gen_frame + 0x0)) = (float)fVar13;
      }
      iVar9 = *(int *)((int)this + 100);
      fVar13 = (float10)((float)GEN_TOF((((float10)1 - (float10)(float)((float10)iVar10 / (float10)iVar11)) *
                               (float10)(int)(uVar8 * uVar7 - (uint)uVar5)))) - (float10)(*(float *)(gen_frame + 0x0));
      if (iVar9 < 0) {
        fVar13 = (float10)((ushort *)(gen_frame + 0x14))[0] + (float10)(int)(iVar9 * uVar8);
      }
      (*(float *)(gen_frame + 0x8)) = (float)fVar13;
      if ((0.0 < (*(float *)(gen_frame + 0x8))) && (sVar6 < 0)) {
        if (((float10)GEN_TOD(-(int)sVar6)) < (float10)(*(float *)(gen_frame + 0x8))) {
          sVar6 = 0;
        }
        else {
          sVar6 = sVar6 + (short)(int)fVar13;
        }
      }
      if (0 < iVar9) {
        iVar10 = 0;
        uVar5 = 0;
        if (*(short *)((int)this + 0x44) != 0) {
          uVar12 = *(ushort *)((int)this + 0x1e);
          do {
            piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20))) + (uint)uVar12 * 4)));
            if (*piVar1 == *(int *)((int)this + 0xc4)) {
              sVar6 = -((ushort)(*(byte *)(gen_frame + 0x1b)) * (short)iVar10);
              break;
            }
            iVar10 = iVar10 + piVar1[1];
            uVar5 = uVar5 + 1;
            uVar12 = uVar12 + 2;
          } while (uVar5 < *(ushort *)((int)this + 0x44));
        }
      }
      if (*(int *)((int)this + 100) < 0) {
        if (uVar7 == *(ushort *)((int)this + 0x3e)) {
          uVar7 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa8)));
        }
        else {
          iVar10 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa8)));
          bVar4 = *(byte *)((int)this + 0x58);
          uVar5 = F_0055a030(*(undefined4 *)((int)this + 8));
          uVar7 = (uint)((longlong)
                         ((ulonglong)(*(int *)((int)this + 0x30) * (uint)bVar4 - (int)sVar6) *
                         (longlong)iVar10) / (longlong)(int)(bVar4 * uVar7 - (uint)uVar5));
        }
        *(uint *)((int)this + 0x50) = uVar7;
        F_00574c80(*(undefined4 *)((int)this + 0x10),uVar7,1,1);
      }
    }
    uVar5 = F_0055a030(*(undefined4 *)((int)this + 8));
    iVar11 = (uint)uVar5 - (int)sVar6;
    iVar10 = iVar11 / (int)(uint)*(byte *)((int)this + 0x58);
    iVar9 = iVar10 * (uint)*(byte *)((int)this + 0x58);
    if (iVar11 != iVar9 && -1 < iVar11 - iVar9) {
      iVar10 = iVar10 + 1;
    }
    F_0055a020(*(undefined4 *)((int)this + 8));
    iVar11 = iVar10 * 0x80;
    if ((iVar11 < 0x2711) ||
       ((sVar6 < 0 &&
        (iVar11 = ((int)sVar6 / (int)(uint)*(byte *)((int)this + 0x58) + iVar10) * 0x80,
        iVar11 < 0x2711)))) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x110))) = 0;
    }
    else {
      this_00 = *(undefined * PTR32 *)((int)this + 8);
      fVar2 = *(float *)((int)this_00 + 0x34);
      fVar3 = *(float *)((int)this_00 + 0x30);
      uVar7 = F_00577ea0(this_00,(int)fVar3 & 0xffff,(int)fVar2 & 0xffff,0);
      uVar14 = 0;
      uVar5 = F_0055a030(*(undefined4 *)((int)this + 8));
      uVar8 = (uint)(ushort)(uVar5 + (short)(int)fVar2);
      uVar5 = F_0055a020(*(undefined4 *)((int)this + 8));
      uVar8 = F_00577ea0(*(undefined * PTR32 *)((int)this + 8),(uint)(ushort)(uVar5 + (short)(int)fVar3),uVar8
                           ,uVar14);
      if (uVar8 - uVar7 < 0x2711) {
        iVar11 = *(int *)((int)this + 8);
        *(undefined4 *)(iVar11 + 0x110) = 0;
      }
      else {
        iVar11 = uVar8 - 10000;
        *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x110))) = iVar11;
      }
    }
    iVar10 = *(int *)((int)this + 8);
    uVar7 = CONCAT22((short)((uint)iVar11 >> 0x10),sVar6);
    *(undefined2 *)(iVar10 + 0x10c) = 0;
    *(short *)(iVar10 + 0x10e) = sVar6;
  }
  return uVar7;
}

/* ref: FUN_007e80a0 */
uint F_007e80a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e80a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  F_005840a0(*(undefined * PTR32 *)((int)this + 8),0xc,0,*(undefined4 *)((int)this + 4),0);
  if (*(int *)((int)this + 0x10) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_005840a0(pvVar2,0x19,1,*(undefined4 *)((int)this + 4),0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_005840a0(pvVar2,3,2,*(undefined4 *)((int)this + 4),0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)));
  }
  F_005840a0(pvVar2,4,3,*(undefined4 *)((int)this + 4),0);
  F_005840a0(*(undefined * PTR32 *)((int)this + 8),8,0x100,*(undefined4 *)((int)this + 4),0);
  F_005840a0(*(undefined * PTR32 *)((int)this + 8),3,0x101,*(undefined4 *)((int)this + 4),0);
  F_005840a0(*(undefined * PTR32 *)((int)this + 8),4,0x102,*(undefined4 *)((int)this + 4),0);
  uVar1 = F_00586850(*(undefined * PTR32 *)((int)this + 0x18),0x3a,0x200,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_007e8160 */
unsigned int F_007e8160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e8160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short * psVar1;
  ushort uVar2;
  int * piVar3;
  
  if (-1 < *(int *)((int)this + 0xc4)) {
    uVar2 = *(ushort *)((int)this + 0xca);
    if (1 < uVar2) {
      psVar1 = (short *)((int)this + 200);
      *psVar1 = *psVar1 + (short)param_1;
      if (*psVar1 < 0) {
        *(ushort *)((int)this + 200) = uVar2 - 1;
      }
      else if ((int)(uint)uVar2 <= (int)*(short *)((int)this + 200)) {
        *(undefined2 *)((int)this + 200) = 0;
      }
      F_00785090(this,*(int *)((int)this + 0xc4),(uint)*(ushort *)((int)this + 200));
      piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
      ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,((undefined1 *)(gen_frame + 0x4)),0);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 0;
}

/* ref: FUN_007e81e0 */
uint F_007e81e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e81e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  short sVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  byte * pbVar5;
  uint * puVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(uint *)(gen_frame + 0xd8)) = uVar4;
  if (param_1 == 0) goto LAB_007e8439;
  F_0042b630(((undefined1 *)(gen_frame + 0x6c)));
  F_005684c0(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)(param_1 + 0x10),((undefined1 *)(gen_frame + 0x6c)));
  if (*(short *)(param_1 + 0x1e) == 3) {
    F_0042b630(((undefined1 *)(gen_frame + 0x18)));
    F_0042d000(((undefined1 *)(gen_frame + 0x18)),"m:%d,%d,%d,%d",(int)*(uint *)(param_1 + 0x20) >> 0x10,
                 *(uint *)(param_1 + 0x20) & 0xffff,*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x28));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x18)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),6);
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
    pbVar5 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x4)),0xe,1,&(*(undefined4 *)(gen_frame + 0xc)))));
    if ((*pbVar5 & 0xf) == 0) {
      (*(byte *)(gen_frame + 0x17)) = 0;
    }
    else {
      (*(byte *)(gen_frame + 0x17)) = pbVar5[4];
    }
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    if ((*(byte *)(gen_frame + 0x17)) == 0) {
      F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
      F_0042c880(((undefined1 *)(gen_frame + 0x18)));
    }
    else {
      F_005602f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x18) + 0x20c))),0,0,0);
      if (-1 < *(int *)((int)this + 0xc4)) {
        F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
        *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
        *(undefined2 *)((int)this + 200) = 0xffff;
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0xfb))) & 2) != 0) {
          puVar6 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x120)));
          *puVar6 = *puVar6 & 0xffffffbf;
        }
      }
      F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
      F_0042c880(((undefined1 *)(gen_frame + 0x18)));
LAB_007e8410: ;
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
      ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,((undefined1 *)(gen_frame + 0x4)),1);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  else {
    if (*(char *)((int)this + 0xd8) != '\0') {
      F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
      *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
      *(undefined2 *)((int)this + 200) = 0xffff;
    }
    (*(undefined4 *)(gen_frame + 0xc0)) = 0;
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    sVar1 = *(short *)(param_1 + 0x1e);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc0)),3);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    (*(int *)(gen_frame + 0xc4)) = sVar1 + 6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc8)),4);
    (*(undefined4 *)(gen_frame + 0xcc)) = uVar3;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x6c)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xd0)),6);
    (*(uint *)(gen_frame + 0xd4)) = uVar4;
    uVar4 = F_005a9170(*(undefined * PTR32 *)((int)this + 4),3,&(*(undefined4 *)(gen_frame + 0xc0)));
    if ((char)uVar4 == '\0') {
      F_005602f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x18) + 0x20c))),0,0,0);
      *(undefined1 *)((int)this + 0xc1) = 1;
      puVar6 = &(*(uint *)(gen_frame + 0xd8));
      iVar7 = 2;
      do {
        puVar6 = puVar6 + -2;
        F_005a2670(puVar6);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      goto LAB_007e8410;
    }
    puVar6 = &(*(uint *)(gen_frame + 0xd8));
    iVar7 = 2;
    do {
      puVar6 = puVar6 + -2;
      F_005a2670(puVar6);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
  uVar4 = (uint)uVar8;
LAB_007e8439: ;
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return uVar4;
}

/* ref: FUN_007e8450 */
uint F_007e8450(unsigned int gen_a0)
{
  GEN_ENTER(0x7e8450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0057ee00(*(undefined * PTR32 *)((int)this + 8),(uint)*(ushort *)((int)this + 0xc4),
                       (uint)*(ushort *)((int)this + 200));
  uVar1 = F_007e81e0(this,uVar1,0);
  return uVar1;
}

/* ref: FUN_007e8480 */
uint F_007e8480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e8480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  undefined2 extraout_var = 0;
  ushort uVar7;
  int iVar8;
  
  iVar8 = 0;
  uVar5 = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (*(short *)((int)this + 0x44) != 0) {
    uVar7 = *(ushort *)((int)this + 0x1e);
    do {
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20))) + (uint)uVar7 * 4)));
      (*(int *)(gen_frame + 0x10)) = piVar1[1];
      (*(int *)(gen_frame + 0x8)) = iVar8;
      if (*piVar1 == *(int *)((int)this + 0xc4)) break;
      iVar8 = iVar8 + (*(int *)(gen_frame + 0x10));
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + 2;
      (*(int *)(gen_frame + 0x8)) = iVar8;
    } while (uVar5 < *(ushort *)((int)this + 0x44));
  }
  iVar8 = *(int *)((int)this + 8);
  sVar2 = *(short *)(iVar8 + 0x10e);
  uVar3 = *(undefined2 *)(iVar8 + 0x10c);
  sVar4 = (ushort)*(byte *)((int)this + 0x58) * (short)(*(int *)(gen_frame + 0x8)) + sVar2;
  uVar5 = F_0055a030(iVar8);
  sVar6 = uVar5 - (ushort)*(byte *)((int)this + 0x58) * (short)(*(int *)(gen_frame + 0x10));
  *(undefined4 *)((int)this + 100) = 0;
  if (sVar4 < 0) {
    iVar8 = *(int *)((int)this + 8);
    *(undefined2 *)(iVar8 + 0x10c) = uVar3;
    *(short *)(iVar8 + 0x10e) = sVar2 - sVar4;
    *(undefined1 *)((int)this + 0xa1) = 0;
  }
  else {
    if (sVar4 <= sVar6) goto LAB_007e85a1;
    iVar8 = *(int *)((int)this + 8);
    if (-1 < sVar6) {
      *(short *)(iVar8 + 0x10e) = (sVar6 - sVar4) + sVar2;
      *(undefined2 *)(iVar8 + 0x10c) = uVar3;
      F_007e7b30(this,0);
      *(int *)((int)this + 100) = -((*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x8)));
      sVar4 = sVar6;
      goto LAB_007e85a1;
    }
    *(undefined2 *)(iVar8 + 0x10c) = uVar3;
    *(short *)(iVar8 + 0x10e) = sVar2 - sVar4;
  }
  F_007e7b30(this,0);
  *(undefined4 *)((int)this + 100) = 1;
  sVar4 = 0;
LAB_007e85a1: ;
  iVar8 = *(int *)((int)this + 0x18);
  F_00559fb0(*(undefined * PTR32 *)((int)this + 8),((short *)(gen_frame + 0x14)),((short *)(gen_frame + 0x18)));
  uVar5 = F_005602f0((undefined *)(iVar8 + 0x20c),(uint)((char)param_1 == '\0') * 2 + 1,(int)((short *)(gen_frame + 0x14))[0]
                       ,(uint)(*(byte *)((int)this + 0x58) >> 1) + (int)((short *)(gen_frame + 0x18))[0] + (int)sVar4);
  return CONCAT22(extraout_var,uVar5);
}

/* ref: FUN_007e85f0 */
uint F_007e85f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e85f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + param_2 * 0x10)));
}

/* ref: FUN_007e8620 */
uint F_007e8620(unsigned int gen_a0)
{
  GEN_ENTER(0x7e8620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 * puVar5;
  float10 fVar6;
  uint local_14;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_14 = 0;
  iVar1 = (uint)(*(int *)((int)this + 0x1c) == 0) * 2 + -1;
  if (*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 4 != 0) {
    local_c = 0;
    do {
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + local_c)));
      uVar4 = F_0055a2d0(*puVar5);
      if ((char)uVar4 != '\0') {
        uVar2 = F_0055a020(*puVar5);
        uVar3 = F_0055a030(*puVar5);
        if (puVar5[2] == 1) {
          fVar6 = (float10)(int)(*(int *)((int)this + 0x14) - (uint)uVar2) * (float10)REFG(double, 0x1088108) +
                  (float10)*(double *)&REFG(undefined, 0x108bec8);
LAB_007e86c5: ;
          F_00559e70(*puVar5,(float)fVar6);
        }
        else if (puVar5[2] == 2) {
          fVar6 = (float10)(int)(*(int *)((int)this + 0x14) - (uint)uVar2) +
                  (float10)*(double *)&REFG(undefined, 0x108bec8);
          goto LAB_007e86c5;
        }
        if (local_8 != 0) {
          local_8 = local_8 + puVar5[1] * iVar1;
        }
        F_00559f00(*puVar5,(float)((float10)(int)local_8 + (float10)*(double *)&REFG(undefined, 0x108bec8)));
        uVar4 = (uint)uVar3;
        if (puVar5[3] != 0) {
          uVar4 = puVar5[3];
        }
        local_8 = local_8 + uVar4 * iVar1;
      }
      local_c = local_c + 0x10;
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 4));
  }
  uVar4 = (local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f);
  *(uint *)((int)this + 0x18) = uVar4;
  return uVar4;
}

/* ref: FUN_007e8740 */
uint F_007e8740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e8740u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  undefined4 in_ecx;
  
  iVar1 = (*(int *)&gen_args[2]);
  F_0055e430((*(undefined * PTR32 *)&gen_args[1]),&(*(int *)&gen_args[2]),((undefined2 *)(gen_frame + 0x8)),(*(int *)&gen_args[2]));
  if (iVar1 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar2 = F_0055a020(in_ecx);
  *((undefined4 *)GEN_TOP(((*(undefined2 * PTR32 *)&gen_args[0]) + 4))) = 0xc8d;
  *(*(undefined2 * PTR32 *)&gen_args[0]) = 0x4002;
  (*(undefined2 * PTR32 *)&gen_args[0])[1] = (short)(*(int *)&gen_args[2]) + uVar2;
  (*(undefined2 * PTR32 *)&gen_args[0])[2] = ((undefined2 *)(gen_frame + 0x8))[0];
  return (uint)(*(undefined2 * PTR32 *)&gen_args[0]);
}

/* ref: Client::UI2::AddonFade::vf38 */
uint F_007e87a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e87a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined1 AVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  ulonglong uVar9;
  float local_8;
  
  uVar2 = F_0055dcb0();
  fVar7 = (float10)*(int *)(uVar2 + 0x234);
  if (*(int *)(uVar2 + 0x234) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0x2a0) = (float)fVar7;
  uVar2 = F_0055dcb0();
  fVar7 = (float10)*(int *)(uVar2 + 0x238);
  if (*(int *)(uVar2 + 0x238) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0x2a4) = (float)fVar7;
  if (this[0x2d1] == (undefined1)0x0) {
    return uVar2;
  }
  if (this[0x2d0] == (undefined1)0x0) {
    uVar9 = F_00427d90();
    uVar2 = ((int)(uVar9 >> 0x20) - *(int *)(this + 700)) -
            (uint)((uint)uVar9 < *(uint *)(this + 0x2b8));
    fVar7 = (float10)*(int *)(this + 0x2c0);
    if (*(int *)(this + 0x2c0) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar1 = (float)fVar7;
    fVar7 = (float10)((float)GEN_TOF((-(float10)(longlong)(((ulonglong)uVar2 & 0x80000000) << 0x20) +
                            ((float10)GEN_TOD((CONCAT44(uVar2,(uint)uVar9 - *(uint *)(this + 0x2b8)) &
                                     0x7fffffffffffffff))))));
    if ((GEN_ISNAN(fVar1) || 0.0 < fVar1) && (fVar7 < (float10)fVar1)) {
      local_8 = (float)(fVar7 / (float10)fVar1);
    }
    else {
      local_8 = REFG(float, 0x1087f04);
    }
    fVar8 = REFG(float, 0x1087f04);
    if (!((float10)fVar1 <= fVar7)) goto LAB_007e88d8;
  }
  else {
    fVar1 = *(float *)(this + 0x2cc);
    *(float *)(this + 0x2cc) = ((float)GEN_TOF(((float10)*(float *)(this + 0x2c8) + (float10)fVar1)));
    if ((float10)1 <= (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x2c8) + (float10)fVar1)))) {
      *(float *)(this + 0x2cc) = REFG(float, 0x1087f04);
    }
    fVar8 = *(float *)(this + 0x2cc);
  }
  local_8 = fVar8;
LAB_007e88d8: ;
  uVar2 = *(uint *)(this + 0x2ac);
  uVar5 = 0;
  if ((uVar2 & 4) == 0) {
    uVar6 = (uint)(byte)this[0x13f];
    uVar3 = (uint)((float10)uVar6 * (float10)local_8);
    if ((uVar2 & 1) == 0) {
      if (((uVar2 & 2) != 0) &&
         (uVar5 = *(int *)(this + 0x2c4) + uVar3, (int)uVar6 < (int)(*(int *)(this + 0x2c4) + uVar3)
         )) {
        uVar5 = uVar6;
      }
    }
    else {
      uVar5 = *(int *)(this + 0x2c4) - uVar3;
      if ((int)(*(int *)(this + 0x2c4) - uVar3) < 0) {
        uVar5 = 0;
      }
    }
    this[0x2ab] = SUB41(uVar5,0);
  }
  else {
    uVar3 = (uint)((double)local_8 * *(double *)&REFG(undefined, 0x1088100));
    if (*(int *)(this + 0x2b0) == 1) {
      uVar5 = *(int *)(this + 0x2c4) - uVar3;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
    }
    else if ((*(int *)(this + 0x2b0) == 2) &&
            (uVar5 = *(int *)(this + 0x2c4) + uVar3, 0xff < (int)uVar5)) {
      uVar5 = 0xff;
    }
    AVar4 = SUB41(uVar5,0);
    this[0x2a8] = AVar4;
    this[0x2a9] = AVar4;
    this[0x2aa] = AVar4;
  }
  if ((!GEN_ISNAN(local_8) && !GEN_ISNAN(REFG(float, 0x1087f04))) && !(local_8 < REFG(float, 0x1087f04))) {
    *(uint *)(this + 0x2ac) = uVar2 & 0xfffffff7;
    uVar3 = F_00785f00(this,1);
    this[0x2d1] = (undefined1)0x0;
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFade::vf46 */
byte F_007e8c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e8c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == 4) {
    if (((byte)this[0xf9] & 1) == 0) {
      this[0xf9] = (undefined1)((byte)this[0xf9] & 0xfd);
    }
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
    }
    this[0x2d0] = SUB41(uVar1 >> 0x1f,0);
    if ((param_2[0x18] & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x1c);
    }
    this[0x2d2] = (undefined1)(iVar3 == 0);
    if (iVar3 != 0) {
      this[0x2ab] = (undefined1)0x0;
    }
    if ((param_2[0x10] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x14);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    F_007e89c0(this,uVar2,uVar4,uVar1 & 0x7fffffff);
    F_00785f00(this,0);
  }
  return 1;
}

/* ref: Client::UI2::AddonDialogue::vf2 */
unsigned int F_007e8cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e8cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  if ((short)param_1 == 0x17) {
    F_00557640(((undefined1 *)(gen_frame + 0xc)),0x39);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005997b0(*(undefined4 *)(this + 0x90),((undefined1 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: Client::UI2::AddonDragDrop::vf44 */
uint F_007e8d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e8d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,1);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,1);
  uVar1 = F_0055e2f0(this,2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar1 = F_00559c20(uVar1);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = F_005613a0(uVar1);
      if (uVar2 == 0x11) {
        uVar2 = F_0056e530(uVar1,2);
        *(byte *)(uVar1 + 0xaa) = *(byte *)(uVar1 + 0xaa) | 0x20;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_007e8d80 */
uint F_007e8d80(unsigned int gen_a0)
{
  GEN_ENTER(0x7e8d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,2);
  if (uVar1 != 0) {
    uVar1 = F_00559c20(uVar1);
    if (uVar1 != 0) {
      uVar2 = F_005613a0(uVar1);
      if (uVar2 == 0x11) {
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007e8db0 */
unsigned int F_007e8db0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e8db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)((int)this + 0x184);
  iVar2 = 5;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
      F_0055a300((undefined *)piVar1[0x1c],0);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_007e8df0 */
uint F_007e8df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e8df0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  short sVar7;
  short sVar8;
  byte * pbVar9;
  float in_XMM7_Da = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_0055dcb0();
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = *(undefined * PTR32 *)(uVar2 + 0x30);
  F_00568010((*(undefined * PTR32 *)&gen_args[2]),&(*(int *)(gen_frame + 0x10)));
  F_00559fe0((*(undefined * PTR32 *)&gen_args[2]),&(*(float *)(gen_frame + 0x34)),&(*(float *)(gen_frame + 0x28)));
  (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x5;
  pbVar9 = (*(byte * PTR32 *)&gen_args[1]);
  do {
    if (*pbVar9 != 0xff) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)*pbVar9 * 4 + 0x184)));
      if (pvVar6 == (undefined *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)((int)pvVar6 + 0x70);
      }
      F_00568210(uVar5,(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x34)));
      uVar2 = F_00460bd0((*(undefined * PTR32 *)(gen_frame + 0x30)),*(undefined4 *)(pbVar9 + 8),1);
      F_0058bba0(pvVar6,uVar2);
    }
    pbVar9 = pbVar9 + 0xc;
    (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + -1)));
  } while ((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0);
  F_005876a0((*(undefined * PTR32 *)&gen_args[0]),in_XMM7_Da);
  pbVar9 = (*(byte * PTR32 *)&gen_args[1]) + 1;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x5;
  (*(byte * PTR32 *)&gen_args[1]) = pbVar9;
  do {
    bVar4 = (*(byte * PTR32 *)&gen_args[1])[-1];
    pbVar9 = ((byte *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)pbVar9) >> 8),bVar4)));
    if (bVar4 != 0xff) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)bVar4 * 4 + 0x184)));
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar1;
      if (piVar1 == (int *)0x0) {
        pvVar6 = (undefined *)0x0;
      }
      else {
        pvVar6 = (undefined *)piVar1[0x1c];
      }
      F_00568010(pvVar6,&(*(int *)(gen_frame + 0x0)));
      piVar1 = (*(int * PTR32 *)(gen_frame + 0x24));
      iVar3 = (*(int *)(gen_frame + 0x8)) - (*(int *)(gen_frame + 0x0));
      sVar8 = (short)(*(int *)(gen_frame + 0x10));
      sVar7 = (short)(*(int *)(gen_frame + 0x14));
      bVar4 = *(*(byte * PTR32 *)&gen_args[1]) >> 4;
      (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[2]) + 0)))) = 0;
      (*(int *)(gen_frame + 0x38)) = 0;
      if (bVar4 == 9) {
        bVar4 = 4;
      }
      switch((unsigned int)(uintptr_t)(bVar4)) {
      case 1: ;
      case 4: ;
      case 7: ;
        iVar3 = iVar3 / 2;
      case 2: ;
      case 5: ;
      case 8: ;
        (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[2]) + 0)))) = -(short)iVar3;
      default: ;
        switch((unsigned int)(uintptr_t)(bVar4)) {
        case 3: ;
        case 4: ;
        case 5: ;
          (*(int *)(gen_frame + 0x38)) = -(((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x4))) / 2);
          break;
        case 6: ;
        case 7: ;
        case 8: ;
          (*(int *)(gen_frame + 0x38)) = -((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x4)));
        }
        switch((unsigned int)(uintptr_t)(*(*(byte * PTR32 *)&gen_args[1]) & 0xf)) {
        case 1: ;
        case 4: ;
        case 7: ;
          sVar8 = (short)(((*(int *)(gen_frame + 0x18)) - (*(int *)(gen_frame + 0x10))) / 2) + sVar8;
          break;
        case 2: ;
        case 5: ;
        case 8: ;
          sVar8 = (short)(*(int *)(gen_frame + 0x18));
        }
        switch((unsigned int)(uintptr_t)(*(*(byte * PTR32 *)&gen_args[1]) & 0xf)) {
        case 3: ;
        case 4: ;
        case 5: ;
          sVar7 = (short)(((*(int *)(gen_frame + 0x1c)) - (*(int *)(gen_frame + 0x14))) / 2) + sVar7;
          break;
        case 6: ;
        case 7: ;
        case 8: ;
          sVar7 = (short)(*(int *)(gen_frame + 0x1c));
        }
        (*(int *)(gen_frame + 0x2c)) = (int)*((short *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 1)));
        if ((*(int * PTR32 *)(gen_frame + 0x24)) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int * PTR32 *)(gen_frame + 0x24))[0x1c];
        }
        F_00559da0(iVar3,(float)(int)(short)(sVar8 + (short)(int)((float10)(int)*((short *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1])
                                                                                            + 1))) *
                                                                   (float10)(*(float *)(gen_frame + 0x34))) +
                                                       (short)(*(undefined * PTR32 *)&gen_args[2])),
                     (float)(int)(short)(sVar7 + (short)(int)((float10)(int)*((short *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 3)))
                                                             * (float10)(*(float *)(gen_frame + 0x28))) + (short)(*(int *)(gen_frame + 0x38))))
        ;
        ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
        pbVar9 = (byte *)F_0055a300((undefined *)piVar1[0x1c],1);
        (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x20));
      }
    }
    (*(byte * PTR32 *)&gen_args[1]) = (*(byte * PTR32 *)&gen_args[1]) + 0xc;
    iVar3 = (int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + -1;
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)iVar3;
  } while (iVar3 != 0);
  return (uint)pbVar9;
}

/* ref: Client::UI2::AddonYesNo::vf37 */
uint F_007e9080(unsigned int gen_a0)
{
  GEN_ENTER(0x7e9080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,1,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectOk::vf37 */
uint F_007e90c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e90c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectOk::vf44 */
uint F_007e90f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e90f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  uVar1 = 0;
  if (*(int *)(this + 0x184) != 0) {
    uVar1 = F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf37 */
uint F_007e9170(unsigned int gen_a0)
{
  GEN_ENTER(0x7e9170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 400) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x17,3,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf44 */
uint F_007e91d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e91d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  float10 fVar2;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  if (*(int *)(this + 0x184) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0,0);
  }
  if (*(int *)(this + 0x188) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,1,this,0,0);
  }
  uVar1 = 0;
  if (*(int *)(this + 400) != 0) {
    uVar1 = F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x17,3,this,0,0);
  }
  if ((this[0x19f] == (undefined1)0x1) && (*(int *)(this + 0x198) != 0)) {
    uVar1 = F_0055a300(*(undefined * PTR32 *)(this + 0x194),1);
    fVar2 = ((float10)GEN_TOD((*(int *)(this + 0x198) + 1)));
    if (*(int *)(this + 0x198) + 1 < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)(this + 0x1a0) = (float)fVar2;
    this[0x19c] = (undefined1)0x1;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf2 */
unsigned int F_007e92c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e92c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  
  if ((short)param_1 != 0x17) {
    return 0;
  }
  if (param_2 == 0) {
    F_00557670(param_3,0);
    bVar1 = F_00920fd0(this);
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 3) {
        F_00908b50(this);
        F_00557670(param_3,0);
        return 0;
      }
      goto LAB_007e9328;
    }
    F_00557670(param_3,0);
    bVar1 = F_009210f0(this);
  }
  if (bVar1 == 0) {
    return 0;
  }
LAB_007e9328: ;
  F_00557670(param_3,0);
  if (this[0x19e] == (undefined1)0x0) {
    (*(int *)(gen_frame + 0x8)) = param_2;
  }
  else {
    iVar2 = param_2;
    if ((param_2 == 0) && (iVar2 = 7, *((char *)GEN_TOP((*(int *)(this + 400) + 0x88))) == '\x01')) {
      iVar2 = 6;
    }
    (*(int *)(gen_frame + 0x8)) = iVar2;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return 0;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf52 */
byte F_007e9390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e9390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((this[0x19c] != (undefined1)0x0) && (*param_1 == 2)) {
    F_009210f0(this);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonContextMenu::PopupMenuDerive::vf3 */
byte F_007e93c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e93c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  if ((param_1 != -1) && (this[0x32] != (undefined1)0x0)) {
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1 < 0) {
      return 0;
    }
    if (*(int *)(this + 0x24) <= param_1) {
      return 0;
    }
    if (*(int *)(this + 0x20) == 0) {
      bVar3 = *(int *)(iVar1 + param_1 * 4) != 1;
    }
    else {
      bVar3 = (*(byte *)(iVar1 + param_1 * 4) & 3) == 0;
    }
    if (!bVar3) {
      return 0;
    }
  }
  if (*(undefined * PTR32 *)(this + 0x1c) == (undefined *)0x0) {
    return 0;
  }
  bVar2 = F_00786d80(*(undefined * PTR32 *)(this + 0x1c),param_1);
  return bVar2;
}

/* ref: FUN_007e9420 */
uint F_007e9420(unsigned int gen_a0)
{
  GEN_ENTER(0x7e9420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d53c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 400) != 0) {
    F_00406b30(*(int *)((int)this + 400));
    *(undefined4 *)((int)this + 400) = 0;
  }
  if (*(int *)((int)this + 0x18c) != 0) {
    F_00406b30(*(int *)((int)this + 0x18c));
    *(undefined4 *)((int)this + 0x18c) = 0;
  }
  if (*(int *)((int)this + 0x188) != 0) {
    F_00406b30(*(int *)((int)this + 0x188));
    *(undefined4 *)((int)this + 0x188) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf37 */
uint F_007e94a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e94a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00586850(*(undefined * PTR32 *)(this + 0x184),3,0,this + 0x180);
  if (*(int *)(this + 0x198) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70))),0x21,0,this + 0x180,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf44 */
uint F_007e94e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e94e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  
  *(undefined2 *)(this + 0x136) = 1;
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,0);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar1 = F_0055e320(this);
  if (uVar1 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *(undefined * PTR32 *)(uVar1 + 0x70);
  }
  pvVar2 = (undefined *)F_0055e2f0(this,2);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar2;
  piVar3 = (int *)F_0055e320(this);
  ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00559c20(this_00);
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    if ((uVar1 != 0) && (uVar4 = F_005613a0(uVar1), uVar1 = (*(uint *)(gen_frame + 0x14)), uVar4 == 2))
    goto LAB_007e957c;
  }
  uVar1 = 0;
LAB_007e957c: ;
  *(uint *)(this + 0x194) = uVar1;
  if (uVar1 != 0) {
    F_0055a000(*(undefined * PTR32 *)(uVar1 + 0x70),((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0xc)));
    *(uint *)(this + 0x1a8) = (uint)((ushort *)(gen_frame + 0x18))[0];
  }
  uVar1 = F_007e74f0(this + 0x180,(*(undefined * PTR32 *)(gen_frame + 0x10)),2,0);
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  *(undefined4 *)(this + 0xa0) = 0;
  if ((this_00 != (undefined *)0x0) && ((*(undefined * PTR32 *)(gen_frame + 0x10)) != (undefined *)0x0)) {
    F_0055a000(this_00,&(*(uint *)(gen_frame + 0x14)),((ushort *)(gen_frame + 0xc)));
    F_0055a000(pvVar2,((ushort *)(gen_frame + 0x18)),&(*(undefined * PTR32 *)(gen_frame + 0x10)));
    uVar1 = (uint)((ushort *)(gen_frame + 0xc))[0] - ((uint)(*(undefined * PTR32 *)(gen_frame + 0x10)) & 0xffff);
    *(uint *)(this + 0x1b8) = ((*(uint *)(gen_frame + 0x14)) & 0xffff) - (uint)((ushort *)(gen_frame + 0x18))[0];
    *(uint *)(this + 0x1bc) = uVar1;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf46 */
byte F_007e9620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e9620u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  undefined4 uVar2;
  float10 fVar3;
  float in_XMM7_Da = 0;
  short * psVar4;
  undefined4 * puVar5;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (1 < (*(int *)&gen_args[1])) {
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) = 0;
    F_00586850(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),3,0,(*(undefined * PTR32 *)&gen_args[0]) + 0x180);
    *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) = 0;
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
    }
    F_007e7630((*(undefined * PTR32 *)&gen_args[0]) + 0x180,(*(undefined * PTR32 *)&gen_args[0]),iVar1 + -1,(*(byte * PTR32 *)&gen_args[2]) + 8,uVar2,1,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))) >> 1,
                 *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) >> 1,1,0,1,0);
    puVar5 = &(*(int *)&gen_args[1]);
    psVar4 = ((short *)(gen_frame + 0x8));
    this_00 = (undefined *)F_0055dcb0();
    F_0055ba20(this_00,psVar4,puVar5);
    fVar3 = F_0055df60((*(undefined * PTR32 *)&gen_args[0]));
    (*(byte * PTR32 *)&gen_args[2]) = (byte *)(int)((short *)(gen_frame + 0x8))[0];
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))))
              ((*(undefined * PTR32 *)&gen_args[0]),(int)((float10)(int)(*(byte * PTR32 *)&gen_args[2]) -
                         (float10)(float)fVar3 * (float10)*(double *)&REFG(undefined, 0x1088120)) & 0xffff,
               (int)((float10)(int)(short)(*(int *)&gen_args[1]) -
                    (float10)*(double *)&REFG(undefined, 0x10cdac8) * (float10)(float)fVar3) & 0xffff);
    F_0056b300((*(undefined * PTR32 *)&gen_args[0]),0);
    F_005874c0((*(undefined * PTR32 *)&gen_args[0]) + 0x24,in_XMM7_Da,*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),0);
    F_0056ae10((*(undefined * PTR32 *)&gen_args[0]));
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonSelectString::PopupMenuDerive::vf3 */
byte F_007e9740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e9740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  bool bVar2;
  
  if ((param_1 != -1) && (this[0x32] != (undefined1)0x0)) {
    iVar1 = *(int *)(this + 0x10);
    if ((iVar1 != 0) && ((-1 < param_1 && (param_1 < *(int *)(this + 0x24))))) {
      if (*(int *)(this + 0x20) == 0) {
        bVar2 = *(int *)(iVar1 + param_1 * 4) != 1;
      }
      else {
        bVar2 = (*(byte *)(iVar1 + param_1 * 4) & 3) == 0;
      }
      if (bVar2) goto LAB_007e9788;
    }
    return 0;
  }
LAB_007e9788: ;
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(int *)(gen_frame + 0x8)) = param_1;
    F_005a9110(this_00,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    return 1;
  }
  return 0;
}

/* ref: FUN_007e97d0 */
uint F_007e97d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e97d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d54c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x1a8) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a8));
    *(undefined4 *)((int)this + 0x1a8) = 0;
  }
  if (*(int *)((int)this + 0x1a4) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a4));
    *(undefined4 *)((int)this + 0x1a4) = 0;
  }
  if (*(int *)((int)this + 0x1a0) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a0));
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectString::vf5 */
uint F_007e9850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e9850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1b0) != 0) {
      uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70))));
      if ((char)uVar1 == '\0') {
        F_00562110(*(undefined * PTR32 *)(this + 0x1b0),1);
      }
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b0) + 0x78))))(*(int * PTR32 *)(this + 0x1b0));
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectString::vf37 */
uint F_007e98b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e98b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00586850(*(undefined * PTR32 *)(this + 0x19c),3,0,this + 0x198);
  if (*(int *)(this + 0x1b0) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70))),0x21,0,this + 0x198,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectString::vf44 */
uint F_007e98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e98f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined * this_00;
  int iVar6;
  
  uVar3 = F_0055e320(this);
  if ((uVar3 != 0) && (*(int *)(uVar3 + 0x70) != 0)) {
    uVar3 = F_00559c20(*(int *)(uVar3 + 0x70));
    if ((uVar3 == 0) || (uVar4 = F_005613a0(uVar3), uVar4 != 2)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0x1ac) = uVar3;
    if (uVar3 != 0) {
      F_0055a000(*(undefined * PTR32 *)(uVar3 + 0x70),((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0x8)));
      *(uint *)(this + 0x1c0) = (uint)((ushort *)(gen_frame + 0x18))[0];
    }
  }
  pvVar5 = (undefined *)F_0055e2f0(this,3);
  this_00 = (undefined *)F_0055e340(this,2);
  if (this_00 != (undefined *)0x0) {
    F_00559d30(this_00,((undefined1 *)(gen_frame + 0x14)),this + 0x18c);
    F_0055a000(this_00,this + 0x188,this + 0x18a);
  }
  if (pvVar5 != (undefined *)0x0) {
    F_007e74f0(this + 0x198,pvVar5,2,0);
    F_00559d30(pvVar5,((undefined1 *)(gen_frame + 0x14)),this + 0x18e);
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x48);
    *(short *)(this + 400) =
         (*(short *)(this + 0x18e) - *(short *)(this + 0x18c)) - *(short *)(this + 0x18a);
    iVar6 = 0;
    (*pcVar1)(this,((ushort *)(gen_frame + 0x10)),((ushort *)(gen_frame + 0x8)),0);
    F_0055a000(pvVar5,((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0xc)));
    *(uint *)(this + 0x180) = (uint)((ushort *)(gen_frame + 0x10))[0] - (uint)((ushort *)(gen_frame + 0x18))[0];
    *(uint *)(this + 0x184) = (uint)((ushort *)(gen_frame + 0x8))[0] - (uint)((ushort *)(gen_frame + 0xc))[0];
    uVar3 = F_0055e2f0(this,3);
    if (uVar3 == 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)F_00559c20(uVar3);
      if (((*(undefined * PTR32 *)(gen_frame + 0x4)) == (undefined *)0x0) || (uVar3 = F_005613a0((*(undefined * PTR32 *)(gen_frame + 0x4))), uVar3 != 9)) {
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
      }
    }
    if ((this[0x1d0] != (undefined1)0x0) && ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0)) {
      F_0055a000(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x70),this + 0x192,this + 0x194);
      uVar2 = F_0056d300((*(undefined * PTR32 *)(gen_frame + 0x4)),0);
      if (uVar2 != 0) {
        do {
          pvVar5 = (undefined *)F_0056d250((*(undefined * PTR32 *)(gen_frame + 0x4)),0,iVar6);
          if (pvVar5 != (undefined *)0x0) {
            F_00561f00(pvVar5,1);
            pvVar5 = *(undefined * PTR32 *)((int)pvVar5 + 0x104);
            if (pvVar5 != (undefined *)0x0) {
              *(uint *)((int)pvVar5 + 0x84) = *(uint *)((int)pvVar5 + 0x84) | 0x50000;
              F_0055ac70(pvVar5,1);
            }
          }
          iVar6 = iVar6 + 1;
        } while ((ushort)iVar6 < uVar2);
      }
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonSelectString::vf46 */
byte F_007e9ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e9ae0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  char cVar2;
  int * this_00;
  char * pcVar3;
  byte * pbVar4;
  ushort uVar5;
  uint uVar6;
  undefined * this_01;
  char * pcVar7;
  uint uVar8;
  bool bVar9;
  
  uVar8 = (*(uint *)(gen_frame + 0x20));
  pbVar4 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0) {
    this_00 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac)));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x20)) = uVar8 & 0xffffff00;
    if (this_00 != (int *)0x0) {
      bVar9 = ((byte)*(undefined4 *)(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 6;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = bVar9;
      (*(uint *)(gen_frame + 0x20)) = CONCAT31((int3)(uVar8 >> 8),bVar9);
      ((code *)*(gen_code32 *)(*this_00 + 0x5c))(this_00,(*(uint *)(gen_frame + 0x20)));
      if ((char)(*(uint *)(gen_frame + 0x20)) != '\0') {
        if ((pbVar4[8] & 0xf) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(pbVar4 + 0xc);
        }
        if ((*pbVar4 & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(uint *)(pbVar4 + 4);
        }
        F_0058a320(this_00,uVar6,uVar8);
        uVar5 = F_00562da0(this_00);
        (*(uint *)(gen_frame + 0x1c)) = (uint)uVar5;
      }
    }
    this_01 = (undefined *)F_0055e340((*(undefined * PTR32 *)&gen_args[0]),2);
    if ((pbVar4[0x18] & 0xf) == 0) {
      uVar8 = (*(int *)&gen_args[1]) - 4;
    }
    else {
      uVar8 = *(uint *)(pbVar4 + 0x1c);
      if ((int)uVar8 < 0) {
        (*(undefined * PTR32 *)&gen_args[0])[0xf8] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0xf8] | 1);
      }
      uVar8 = uVar8 & 0x7fffffff;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]) + 0x198;
    F_007e7630((*(undefined * PTR32 *)&gen_args[0]) + 0x198,(*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]) + -4,pbVar4 + 0x20,uVar8,1,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) >> 1,
                 (int)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) - (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18a)))) >> 1,0,1,0,
                 (uint)(byte)(*(undefined * PTR32 *)&gen_args[0])[0x1d0]);
    if ((*(undefined * PTR32 *)&gen_args[0])[0x1d0] == (undefined1)0x0) {
      F_007e7860((*(undefined * PTR32 *)(gen_frame + 0x18)),(uint)(ushort)((*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) - *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18e)))) +
                                          (short)(*(uint *)(gen_frame + 0x1c))),0);
    }
    else {
      uVar8 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),3);
      if (uVar8 == 0) {
        ((uint *)(gen_frame + 0x8))[3] = 0;
      }
      else {
        uVar8 = F_00559c20(uVar8);
        if ((uVar8 == 0) || (uVar6 = F_005613a0(uVar8), uVar6 != 9)) {
          ((uint *)(gen_frame + 0x8))[3] = 0;
        }
        else {
          ((uint *)(gen_frame + 0x8))[3] = uVar8;
        }
      }
      ((uint *)(gen_frame + 0x8))[1] = 0;
      ((uint *)(gen_frame + 0x8))[2] = 0;
      if ((((uint *)(gen_frame + 0x8))[3] != 0) && (this_01 != (undefined *)0x0)) {
        F_0055a000(*(undefined * PTR32 *)(((uint *)(gen_frame + 0x8))[3] + 0x70),((uint *)(gen_frame + 0x8)) + 1,((uint *)(gen_frame + 0x8)) + 2);
        F_007e7860((*(undefined * PTR32 *)(gen_frame + 0x18)),0,1);
        if (((byte)*(undefined4 *)(pbVar4 + 0x10) & 0xf) == 6) {
          pcVar3 = *(char * PTR32 *)(pbVar4 + 0x14);
          pcVar7 = pcVar3;
          do {
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          bVar9 = (uint)((int)pcVar7 - (int)(pcVar3 + 1)) < 2;
          if (bVar9) {
            F_00584580(this_01,1);
            F_0055a300(this_01,0);
          }
          else {
            F_0055a300(this_01,1);
            F_00584580(this_01,1);
            F_00584110(this_01,pcVar3);
          }
          F_00559d30(this_01,((uint *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x24)));
          uVar8 = (*(uint *)(gen_frame + 0x1c));
          if ((char)(*(uint *)(gen_frame + 0x20)) == '\0') {
            uVar8 = -(*(uint *)(gen_frame + 0x1c));
          }
          (*(uint *)(gen_frame + 0x24)) = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) + uVar8;
          F_00559e00(this_01,((uint *)(gen_frame + 0x8))[0],*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) + uVar8);
          F_00577d20(this_01,((undefined1 *)(gen_frame + 0x28)),&(*(byte * PTR32 *)&gen_args[2]),0,0,REFG(undefined4, 0x108cc50),0);
          if (!bVar9) {
            sVar1 = (short)(*(uint *)(gen_frame + 0x24)) + *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) + (short)(*(byte * PTR32 *)&gen_args[2]);
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = sVar1;
            (*(uint *)(gen_frame + 0x24)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)),sVar1);
          }
          uVar5 = F_005c04e0(((uint *)(gen_frame + 0x8))[3]);
          F_007e7860((*(undefined * PTR32 *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x24)) - uVar5,0);
          return 1;
        }
      }
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonListGrid::vf37 */
uint F_007e9d60(unsigned int gen_a0)
{
  GEN_ENTER(0x7e9d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x21,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar1,0x20,2,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar1,0x1f,3,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar1,0x2d,4,this,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),3,0,this,0);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonListGrid::vf44 */
uint F_007e9df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e9df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  undefined3 extraout_var = 0;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  if (*(int *)(this + 0x188) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x21,0,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_00568380(pvVar2,0x20,2,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_00568380(pvVar2,0x1f,3,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_00568380(pvVar2,0x2d,4,this,0,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),3,0,this,0,0);
  }
  bVar1 = F_0056b630(this,0xd07,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonListGrid::vf46 */
byte F_007e9ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e9ec0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte * pbVar5;
  uint uVar6;
  
  pbVar5 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0) {
    pvVar1 = (undefined *)F_0055e320((*(undefined * PTR32 *)&gen_args[0]));
    if (pvVar1 != (undefined *)0x0) {
      if (((*(byte * PTR32 *)&gen_args[2])[8] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *((uint *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0xc)));
      }
      if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *((uint *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
      }
      F_0058a320(pvVar1,uVar2,uVar6);
      F_0056e010(pvVar1,1);
    }
    if (((*(byte * PTR32 *)&gen_args[2])[0x18] & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x1c)));
    }
    (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 1, 3),iVar3 != 0)));
    uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    if (((uVar6 == 0) || (pvVar1 = (undefined *)F_00559c20(uVar6), pvVar1 == (undefined *)0x0)) ||
       (uVar6 = F_005613a0(pvVar1), uVar6 != 9)) {
      pvVar1 = (undefined *)0x0;
    }
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) = pvVar1;
    if (pvVar1 != (undefined *)0x0) {
      if ((((byte)*(undefined4 *)(pbVar5 + 0x10) & 0xf) == 4) &&
         ((short)*(undefined4 *)(pbVar5 + 0x14) != 0)) {
        F_005b1d70(pvVar1,*(undefined4 *)(pbVar5 + 0x14));
      }
      if ((pbVar5[0x28] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(pbVar5 + 0x2c);
      }
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = uVar6;
      F_0059ead0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),uVar6 & 0xffff,0,1);
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) = 2;
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
      (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x7872a0));
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      F_00574320(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),&(*(undefined * PTR32 *)(gen_frame + 0xc)),(*(undefined * PTR32 *)&gen_args[0]) + 400,1,0);
      F_0056d690(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),(*(byte * PTR32 *)&gen_args[2]),0);
      if ((pbVar5[0x18] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar5 + 0x1c);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) + 0xe4))) = uVar4;
      uVar6 = F_00561490(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),2);
      if (((uVar6 == 0) || (uVar6 = F_00559c20(uVar6), uVar6 == 0)) ||
         (uVar2 = F_005613a0(uVar6), uVar2 != 0xd)) {
        uVar6 = 0;
      }
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) = uVar6;
    }
    uVar4 = 0;
    uVar6 = F_00404270();
    uVar6 = F_00406c00(-(uint)((int)((ulonglong)*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) * 0x10 >> 0x20) != 0) |
                         (uint)((ulonglong)*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) * 0x10),0,uVar6,uVar4);
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) = uVar6;
    if ((uVar6 != 0) && (uVar6 = 0, *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != 0)) {
      iVar3 = 0;
      pbVar5 = pbVar5 + 0x44;
      do {
        if ((pbVar5[-0x14] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(pbVar5 + -0x10);
        }
        *((undefined4 *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c)))))) = uVar4;
        if ((pbVar5[-0xc] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(pbVar5 + -8);
        }
        *((undefined4 *)GEN_TOP((iVar3 + 4 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c)))))) = uVar4;
        if ((pbVar5[-4] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)pbVar5;
        }
        *((undefined4 *)GEN_TOP((iVar3 + 8 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c)))))) = uVar4;
        if ((pbVar5[4] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(pbVar5 + 8);
        }
        *((undefined4 *)GEN_TOP((iVar3 + 0xc + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c)))))) = uVar4;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x20;
        iVar3 = iVar3 + 0x10;
      } while (uVar6 < *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))));
    }
    pvVar1 = (undefined *)F_0055e340((*(undefined * PTR32 *)&gen_args[0]),3);
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = pvVar1;
    if (pvVar1 != (undefined *)0x0) {
      F_00584110(pvVar1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) + 8))));
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonListIcon::vf37 */
uint F_007ea110(unsigned int gen_a0)
{
  GEN_ENTER(0x7ea110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pAVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x19c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70))),0x21,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar1,0x20,2,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar1,0x1f,3,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar1,0x2d,4,this,0);
  }
  uVar3 = 0;
  pAVar2 = this + 0x1a4;
  do {
    if (*(int *)pAVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,uVar3 + 100,this,0);
    }
    uVar3 = uVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (uVar3 < 10);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: FUN_007ea1c0 */
uint F_007ea1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ea1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 in_ecx;
  
  if (*(int *)((int)this + 0x188) != 0) {
    (*(short *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
    F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x1a4));
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
    (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
    iVar1 = *(int *)((int)this + 0x1c8);
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
  }
  if (param_1 == 1) {
    bVar2 = F_0056b630(this,0x18ad5,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar2);
  }
  bVar2 = F_0056b780(this,0);
  return CONCAT31(extraout_var_00,bVar2);
}

/* ref: Client::UI2::AddonSelectIconString::PopupMenuDerive::vf3 */
byte F_007ea2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ea2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  bool bVar2;
  
  if ((param_1 != -1) && (this[0x32] != (undefined1)0x0)) {
    iVar1 = *(int *)(this + 0x10);
    if ((iVar1 != 0) && ((-1 < param_1 && (param_1 < *(int *)(this + 0x24))))) {
      if (*(int *)(this + 0x20) == 0) {
        bVar2 = *(int *)(iVar1 + param_1 * 4) != 1;
      }
      else {
        bVar2 = (*(byte *)(iVar1 + param_1 * 4) & 3) == 0;
      }
      if (bVar2) goto LAB_007ea308;
    }
    return 0;
  }
LAB_007ea308: ;
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(int *)(gen_frame + 0x8)) = param_1;
    F_005a9110(this_00,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    return 1;
  }
  return 0;
}

/* ref: FUN_007ea350 */
uint F_007ea350(unsigned int gen_a0)
{
  GEN_ENTER(0x7ea350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d55c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x1a8) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a8));
    *(undefined4 *)((int)this + 0x1a8) = 0;
  }
  if (*(int *)((int)this + 0x1a4) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a4));
    *(undefined4 *)((int)this + 0x1a4) = 0;
  }
  if (*(int *)((int)this + 0x1a0) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a0));
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectIconString::vf37 */
uint F_007ea3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ea3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00586850(*(undefined * PTR32 *)(this + 0x19c),3,0,this + 0x198);
  if (*(int *)(this + 0x1b0) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70))),0x21,0,this + 0x198,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectIconString::vf44 */
uint F_007ea410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ea410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined * this_00;
  int iVar6;
  
  uVar3 = F_0055e320(this);
  if ((uVar3 != 0) && (*(int *)(uVar3 + 0x70) != 0)) {
    uVar3 = F_00559c20(*(int *)(uVar3 + 0x70));
    if ((uVar3 == 0) || (uVar4 = F_005613a0(uVar3), uVar4 != 2)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0x1ac) = uVar3;
    if (uVar3 != 0) {
      F_0055a000(*(undefined * PTR32 *)(uVar3 + 0x70),((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0x8)));
      *(uint *)(this + 0x1c0) = (uint)((ushort *)(gen_frame + 0x18))[0];
    }
  }
  pvVar5 = (undefined *)F_0055e2f0(this,2);
  this_00 = (undefined *)F_0055e340(this,3);
  if (this_00 != (undefined *)0x0) {
    F_00559d30(this_00,((undefined1 *)(gen_frame + 0x14)),this + 0x18c);
    F_0055a000(this_00,this + 0x188,this + 0x18a);
  }
  if (pvVar5 != (undefined *)0x0) {
    F_007e74f0(this + 0x198,pvVar5,2,3);
    F_00559d30(pvVar5,((undefined1 *)(gen_frame + 0x14)),this + 0x18e);
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x48);
    *(short *)(this + 400) =
         (*(short *)(this + 0x18e) - *(short *)(this + 0x18c)) - *(short *)(this + 0x18a);
    iVar6 = 0;
    (*pcVar1)(this,((ushort *)(gen_frame + 0x10)),((ushort *)(gen_frame + 0x8)),0);
    F_0055a000(pvVar5,((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0xc)));
    *(uint *)(this + 0x180) = (uint)((ushort *)(gen_frame + 0x10))[0] - (uint)((ushort *)(gen_frame + 0x18))[0];
    *(uint *)(this + 0x184) = (uint)((ushort *)(gen_frame + 0x8))[0] - (uint)((ushort *)(gen_frame + 0xc))[0];
    uVar3 = F_0055e2f0(this,2);
    if (uVar3 == 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)F_00559c20(uVar3);
      if (((*(undefined * PTR32 *)(gen_frame + 0x4)) == (undefined *)0x0) || (uVar3 = F_005613a0((*(undefined * PTR32 *)(gen_frame + 0x4))), uVar3 != 9)) {
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
      }
    }
    if ((this[0x1d0] != (undefined1)0x0) && ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0)) {
      F_0055a000(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x70),this + 0x192,this + 0x194);
      uVar2 = F_0056d300((*(undefined * PTR32 *)(gen_frame + 0x4)),0);
      if (uVar2 != 0) {
        do {
          pvVar5 = (undefined *)F_0056d250((*(undefined * PTR32 *)(gen_frame + 0x4)),0,iVar6);
          if (pvVar5 != (undefined *)0x0) {
            F_00561f00(pvVar5,1);
            pvVar5 = *(undefined * PTR32 *)((int)pvVar5 + 0x104);
            if (pvVar5 != (undefined *)0x0) {
              *(uint *)((int)pvVar5 + 0x84) = *(uint *)((int)pvVar5 + 0x84) | 0x50000;
              F_0055ac70(pvVar5,1);
            }
          }
          iVar6 = iVar6 + 1;
        } while ((ushort)iVar6 < uVar2);
      }
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonSelectIconString::vf46 */
byte F_007ea600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ea600u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  short sVar1;
  int * this_01;
  char * pcVar2;
  byte * pbVar3;
  undefined * this_02;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  
  uVar8 = (*(uint *)(gen_frame + 0x20));
  pbVar3 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0) {
    this_01 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac)));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x20)) = uVar8 & 0xffffff00;
    if (this_01 != (int *)0x0) {
      bVar10 = ((byte)*(undefined4 *)(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 6;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = bVar10;
      (*(uint *)(gen_frame + 0x20)) = CONCAT31((int3)(uVar8 >> 8),bVar10);
      ((code *)*(gen_code32 *)(*this_01 + 0x5c))(this_01,(*(uint *)(gen_frame + 0x20)));
      if ((char)(*(uint *)(gen_frame + 0x20)) != '\0') {
        if ((pbVar3[8] & 0xf) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(pbVar3 + 0xc);
        }
        if ((*pbVar3 & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(pbVar3 + 4);
        }
        F_0058a320(this_01,uVar5,uVar8);
        uVar4 = F_00562da0(this_01);
        (*(uint *)(gen_frame + 0x1c)) = (uint)uVar4;
      }
    }
    (*(byte * PTR32 *)&gen_args[2]) = (byte *)F_0055e340((*(undefined * PTR32 *)&gen_args[0]),3);
    iVar6 = ((*(int *)&gen_args[1]) + -6) / 3;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    this_00 = (*(undefined * PTR32 *)&gen_args[0]) + 0x198;
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = this_00;
    F_007e7630(this_00,(*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]) + -6,pbVar3 + 0x30,iVar6,1,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) >> 1,
                 (int)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) - (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18a)))) >> 1,0,1,0,
                 (uint)(byte)(*(undefined * PTR32 *)&gen_args[0])[0x1d0]);
    if ((*(undefined * PTR32 *)&gen_args[0])[0x1d0] == (undefined1)0x0) {
      F_007e7860(this_00,(uint)(ushort)((*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) - *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18e)))) +
                                         (short)(*(uint *)(gen_frame + 0x1c))),0);
    }
    else {
      uVar8 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
      if (uVar8 == 0) {
        (*(uint *)(gen_frame + 0x18)) = 0;
      }
      else {
        uVar8 = F_00559c20(uVar8);
        if ((uVar8 == 0) || (uVar5 = F_005613a0(uVar8), uVar5 != 9)) {
          (*(uint *)(gen_frame + 0x18)) = 0;
        }
        else {
          (*(uint *)(gen_frame + 0x18)) = uVar8;
        }
      }
      this_02 = (*(byte * PTR32 *)&gen_args[2]);
      ((uint *)(gen_frame + 0x8))[1] = 0;
      ((uint *)(gen_frame + 0x8))[2] = 0;
      if (((*(uint *)(gen_frame + 0x18)) != 0) && ((*(byte * PTR32 *)&gen_args[2]) != (undefined *)0x0)) {
        F_0055a000(*(undefined * PTR32 *)((*(uint *)(gen_frame + 0x18)) + 0x70),((uint *)(gen_frame + 0x8)) + 1,((uint *)(gen_frame + 0x8)) + 2);
        F_007e7860((*(undefined * PTR32 *)(gen_frame + 0x14)),0,1);
        if (((byte)*(undefined4 *)(pbVar3 + 0x18) & 0xf) == 6) {
          pcVar2 = *(char * PTR32 *)(pbVar3 + 0x1c);
          (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(((uint)(*(byte * PTR32 *)&gen_args[2]) & 0xffffff)));
          pcVar7 = pcVar2;
          do {
            cVar9 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar9 != '\0');
          if ((uint)((int)pcVar7 - (int)(pcVar2 + 1)) < 2) {
            F_00584580(this_02,1);
            F_0055a300(this_02,0);
            cVar9 = (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3))));
          }
          else {
            F_0055a300(this_02,1);
            F_00584580(this_02,1);
            F_00584110(this_02,pcVar2);
            cVar9 = '\x01';
          }
          F_00559d30(this_02,((uint *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x24)));
          if ((char)(*(uint *)(gen_frame + 0x20)) == '\0') {
            sVar1 = (short)(*(uint *)(gen_frame + 0x24)) - (short)(*(uint *)(gen_frame + 0x1c));
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = sVar1;
          }
          else {
            sVar1 = (short)(*(uint *)(gen_frame + 0x24)) + (short)(*(uint *)(gen_frame + 0x1c));
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = sVar1;
          }
          (*(uint *)(gen_frame + 0x24)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)),sVar1);
          F_00559e00(this_02,((uint *)(gen_frame + 0x8))[0],(*(uint *)(gen_frame + 0x24)));
          F_00577d20(this_02,((undefined1 *)(gen_frame + 0x28)),&(*(int *)&gen_args[1]),0,0,REFG(undefined4, 0x108cc50),0);
          if (cVar9 != '\0') {
            sVar1 = (short)(*(uint *)(gen_frame + 0x24)) + *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) + (short)(*(int *)&gen_args[1]);
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = sVar1;
            (*(uint *)(gen_frame + 0x24)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)),sVar1);
          }
          uVar4 = F_005c04e0((*(uint *)(gen_frame + 0x18)));
          F_007e7860((*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)(ushort)((short)(*(uint *)(gen_frame + 0x24)) - uVar4),0);
          return 1;
        }
      }
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonInputNumeric::vf37 */
uint F_007ea880(unsigned int gen_a0)
{
  GEN_ENTER(0x7ea880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,1,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonInputNumeric::vf44 */
uint F_007ea8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ea8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  if (*(int *)(this + 0x180) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0,this,0,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,1,this,0,0);
  }
  if (*(int *)(this + 0x198) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70))),0xc,1,this,0,0);
  }
  piVar1 = *(int * PTR32 *)(this + 0x184);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    *(uint *)(this + 0xa8) = uVar2;
    return uVar2;
  }
  *(undefined4 *)(this + 0xa8) = 0;
  return 0;
}

/* ref: Client::UI2::AddonInputString::vf37 */
uint F_007ea990(unsigned int gen_a0)
{
  GEN_ENTER(0x7ea990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x194) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70))),0x17,0x65,this,0);
  }
  if (*(int *)(this + 0x198) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x19c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70))),0x17,1,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonInputString::vf2 */
uint F_007ea9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ea9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  char * pcVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = param_1 & 0xffff;
  if (uVar2 != 0x17) {
    if (uVar2 == 0x45) {
      uVar2 = F_007881b0(this);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar2;
    }
    goto LAB_007eab7d;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (param_2 == 0) {
    F_00557670(param_3,0);
    bVar1 = F_00908e50(this);
    if ((bVar1 == 1) || (this[0x188] != (undefined1)0x0)) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (*(int *)(this + 0x18c) == 0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)F_0042a990(*(int *)(this + 0x18c) + 0x9c);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
      (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar3;
      if (*(int *)(this + 400) == 0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)F_0042a990(*(int *)(this + 400) + 0x9c);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar3;
      goto LAB_007eab5d;
    }
  }
  else {
    if (param_2 == 1) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
      (*(char * PTR32 *)(gen_frame + 0xc)) = "";
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
      (*(char * PTR32 *)(gen_frame + 0x14)) = "";
      F_00557670(param_3,0);
    }
    else {
      if (param_2 != 0x65) goto LAB_007eab66;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 0x65;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
      (*(char * PTR32 *)(gen_frame + 0xc)) = "";
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
      (*(char * PTR32 *)(gen_frame + 0x14)) = "";
      F_00557670(param_3,0);
    }
LAB_007eab5d: ;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  }
LAB_007eab66: ;
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
LAB_007eab7d: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007eab90 */
unsigned int F_007eab90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7eab90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 != (undefined *)0x0) {
    if ((*(byte *)(param_1 + 0x50) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x54);
    }
    F_00584110(param_2,uVar1);
  }
  if (param_3 != (undefined *)0x0) {
    if ((*(byte *)(param_1 + 0x58) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x5c);
    }
    F_005b2fe0(param_3,uVar1);
    if ((*(byte *)(param_1 + 0x60) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 100);
    }
    F_0058eb50(param_3,uVar1);
    if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x6c);
    }
    F_0058ebd0(param_3,uVar1);
    F_005636a0(param_3,1);
    if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x9c);
    }
    if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
    }
    F_00563480(param_3,uVar2,uVar1);
    *(undefined * PTR32 *)((int)param_3 + 0x144) = this;
    *(gen_code32 *)((int)param_3 + 0x148) = ((code *)REFP(0x7881a0));
    *(undefined4 *)((int)param_3 + 0x14c) = 0;
  }
  if (param_4 != (undefined *)0x0) {
    if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x74);
    }
    F_00584110(param_4,uVar1);
  }
  if (param_5 != (undefined *)0x0) {
    if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x7c);
    }
    F_005b2fe0(param_5,uVar1);
    if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x84);
    }
    F_0058eb50(param_5,uVar1);
    if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x8c);
    }
    F_0058ebd0(param_5,uVar1);
    F_005636a0(param_5,1);
    if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x9c);
    }
    if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
    }
    F_00563480(param_5,uVar2,uVar1);
    *(undefined * PTR32 *)((int)param_5 + 0x144) = this;
    *(gen_code32 *)((int)param_5 + 0x148) = ((code *)REFP(0x7881a0));
    *(undefined4 *)((int)param_5 + 0x14c) = 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonListColorChooser::vf37 */
uint F_007ead20(unsigned int gen_a0)
{
  GEN_ENTER(0x7ead20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pAVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x1a4) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70))),0x21,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar1,0x20,2,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar1,0x1f,3,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar1,0x2d,4,this,0);
  }
  uVar3 = 0;
  pAVar2 = this + 0x1ac;
  do {
    if (*(int *)pAVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,uVar3 + 100,this,0);
    }
    uVar3 = uVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (uVar3 < 10);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonListColorChooser::vf44 */
uint F_007eadd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eadd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  uint uVar4;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  if (*(int *)(this + 0x1a4) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70))),0x21,0,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar2,0x20,2,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar2,0x1f,3,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar2,0x2d,4,this,0,0);
  }
  uVar4 = 0;
  pAVar3 = this + 0x1ac;
  do {
    if (*(int *)pAVar3 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
    }
    uVar1 = F_00568380(pvVar2,0x17,uVar4 + 100,this,0,0);
    uVar4 = uVar4 + 1;
    pAVar3 = pAVar3 + 4;
  } while (uVar4 < 10);
  return uVar1;
}

/* ref: FUN_007eaed0 */
unsigned int F_007eaed0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eaed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  undefined4 in_ecx;
  
  if (*(int *)((int)this + 0x188) != 0) {
    (*(short *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
    F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x1ac));
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
    (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
    iVar1 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x188) * 4 + 0x1ac)));
    F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
    if (iVar1 == 0) {
      in_ecx = 0;
    }
    else {
      in_ecx = *(undefined4 *)(iVar1 + 0x70);
    }
    uVar2 = F_0055a020(in_ecx);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar2;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar2,0x4000);
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),2);
    (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: Client::UI2::AddonContextIconMenu::vf37 */
uint F_007eafb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eafb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pAVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x1a0) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70))),0x21,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_005840a0(pvVar1,0x20,2,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_005840a0(pvVar1,0x1f,3,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_005840a0(pvVar1,0x2d,4,this,0);
  }
  uVar3 = 0;
  pAVar2 = this + 0x1a8;
  do {
    if (*(int *)pAVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,uVar3 + 100,this,0);
    }
    uVar3 = uVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (uVar3 < 10);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonContextIconMenu::vf60 */
byte F_007eb060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eb060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  int iVar2;
  int iVar3;
  undefined4 in_ecx;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined * pAVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * puVar10;
  
  iVar2 = *(int *)(this + 0x188);
  if (iVar2 != 0) {
    iVar5 = *(int *)(this + 0x184);
    if (param_1 == 0xf) {
      iVar3 = iVar5 + 1;
      if (iVar2 < iVar5 + 1) {
        if ((char)param_2 != '\0') {
          return 1;
        }
        iVar3 = 0;
      }
    }
    else {
      iVar3 = iVar5;
      if (((param_1 == 0x10) && (iVar3 = iVar5 + -1, iVar5 + -1 < 0)) &&
         (iVar3 = iVar2, (char)param_2 != '\0')) {
        return 1;
      }
    }
    if (iVar3 != iVar5) {
      F_00909050(this,iVar3);
      uVar8 = 0;
      pAVar7 = this + 0x1a8;
      do {
        in_ecx = 0;
        if (*(int *)pAVar7 != 0) {
          in_ecx = *(undefined4 *)(*(int *)pAVar7 + 0x70);
        }
        uVar4 = F_0055a2d0(in_ecx);
        if ((char)uVar4 != '\0') {
          F_0059dde0(*(undefined * PTR32 *)pAVar7,(uint)(uVar8 == *(uint *)(this + 0x184)));
        }
        uVar8 = uVar8 + 1;
        pAVar7 = pAVar7 + 4;
      } while (uVar8 <= *(uint *)(this + 0x188));
      F_00560760(&(*(undefined4 *)(gen_frame + 0x28)));
      iVar5 = *(int *)(this + 0x184) * 0x19 + *((int *)GEN_TOP((*(int *)(this + 0x1a0) + 0xcc)));
      AVar1 = this[0x13a];
      iVar2 = *(int *)(this + 0x1a4) + iVar5 * 0x14;
      (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + 8 + iVar5 * 0x14)));
      if (((byte)this[0x18c] & 0x80) == 0) {
        uVar4 = F_0055dcb0();
        uVar6 = 0;
        uVar8 = 0;
        puVar10 = &(*(undefined4 *)(gen_frame + 0x28));
        uVar9 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a0) + 0x3c))))(*(int * PTR32 *)(this + 0x1a0));
        (*((undefined4 *)GEN_TOP((gen_frame + 0x4)))) = 2;
        (*((uint *)GEN_TOP((gen_frame + 0x8)))) = (uint)(byte)AVar1;
      }
      else {
        (*(undefined1 *)(gen_frame + 0x32)) = 2;
        (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)(iVar2 + 6);
        (*(undefined1 *)(gen_frame + 0x33)) = *(undefined1 *)(iVar2 + 4);
        uVar4 = F_0055dcb0();
        uVar9 = 0x7eb16b;
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a0) + 0x3c))))
                          (*(int * PTR32 *)(this + 0x1a0),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        puVar10 = (undefined4 *)&REFG(undefined, 0x6);
        uVar8 = (uint)(byte)AVar1;
      }
      F_00588780((undefined *)(uVar4 + 0xe0),(*((undefined4 *)GEN_TOP((gen_frame + 0x4)))),(*((uint *)GEN_TOP((gen_frame + 0x8)))),uVar9,puVar10,uVar8,
                   uVar6);
      uVar8 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar8 + 0x38) + 8))))(*(int * PTR32 *)(uVar8 + 0x38),((undefined1 *)(gen_frame + 0x34)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x34)));
    }
  }
  return 1;
}

/* ref: FUN_007eb1d0 */
unsigned int F_007eb1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  undefined4 in_ecx;
  
  if (*(int *)((int)this + 0x188) != 0) {
    (*(short *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
    F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x1a8));
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
    (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
    iVar1 = *(int *)((int)this + 0x1cc);
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
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditPlayer::vf41 */
byte F_007eb2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x34)),6,0);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x756764;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x24)) = 5000;
  (*(undefined4 *)(gen_frame + 0x28)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 2;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),REFG(undefined * PTR32, 0x13283c0),&(*(undefined4 *)(gen_frame + 0xc)),0,0);
  *(uint *)(this + 0x184) = uVar2;
  *(undefined4 *)(this + 0x180) = 1;
  bVar1 = F_00572e60(this,"CreditPlayer",0,6);
  return bVar1;
}

/* ref: FUN_007eb340 */
uint F_007eb340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7eb340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint * puVar4;
  int iVar5;
  int local_8;
  
  if (param_1 != *(int *)((int)this + 0x200)) {
    *(int *)((int)this + 0x200) = param_1;
    F_0059d640(*(undefined * PTR32 *)((int)this + 0x1fc),*(undefined4 *)(&REFG(undefined, 0x10c0b18) + param_1 * 4));
  }
  iVar5 = *(int *)((int)this + 0x200);
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined2 *)((int)this + 0x234) = 0;
  *(undefined1 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  if (iVar5 == 0) {
    puVar2 = (undefined4 *)((int)this + 0x23c);
    iVar5 = 0xb;
    do {
      puVar2[-1] = "";
      *puVar2 = "";
      puVar2[1] = "";
      puVar2[2] = "";
      puVar2 = puVar2 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    iVar5 = (((*(int *)((int)this + iVar5 * 0x10 + 0x398) -
              *(int *)((int)this + iVar5 * 0x10 + 0x394)) / 0x54 - 1U & 0xfffffffc) - 0x28) * 0x54;
    puVar4 = (uint *)((int)this + 0x238);
    local_8 = 0xb;
    do {
      param_1 = 4;
      do {
        uVar1 = F_0042a990(*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x200) * 0x10 + 0x394))) +
                             iVar5);
        *puVar4 = uVar1;
        iVar5 = iVar5 + 0x54;
        puVar4 = puVar4 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  puVar4 = (uint *)((int)this + 0x2e8);
  local_8 = 0xb;
  iVar5 = 0;
  do {
    param_1 = 4;
    do {
      uVar1 = F_0042a990(*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x200) * 0x10 + 0x3a4))) + iVar5)
      ;
      *puVar4 = uVar1;
      *(int *)((int)this + 0x204) = *(int *)((int)this + 0x204) + 1;
      iVar5 = iVar5 + 0x54;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar3 = 0;
  if (*(int *)((int)this + 0x210) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x210) + 0x70)));
  }
  F_00559f00(uVar3,(float)(int)(short)(int)*(float *)((int)this + 0x228));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x210) + 0x70))))(*(int * PTR32 *)((int)this + 0x210));
  return uVar1;
}

/* ref: FUN_007eb4f0 */
byte F_007eb4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * local_8;
  
  uVar5 = *(int *)((int)this + 0x22c) + 0x15;
  if (0x15 < uVar5) {
    uVar5 = *(int *)((int)this + 0x22c) - 1;
  }
  if ((*(char *)((int)this + 0x234) != '\0') && (uVar5 == *(uint *)((int)this + 0x230))) {
    return 0;
  }
  if (*(uint *)((int)this + 0x200) < 0x1a) {
    uVar4 = 0;
    local_8 = (uint *)((int)this + uVar5 * 0x10 + 0x238);
    do {
      iVar2 = *(int *)((int)this + 0x200);
      uVar3 = *(int *)((int)this + 0x204) + uVar4;
      if (uVar3 < (uint)((*(int *)((int)this + iVar2 * 0x10 + 0x3a8) -
                         *(int *)((int)this + iVar2 * 0x10 + 0x3a4)) / 0x54)) {
        uVar3 = F_0042a990(uVar3 * 0x54 + *(int *)((int)this + iVar2 * 0x10 + 0x3a4));
        *local_8 = uVar3;
      }
      else {
        *local_8 = (uint)"";
      }
      local_8 = local_8 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
  }
  else {
    *(char * PTR32 *)((int)this + uVar5 * 0x10 + 0x238) = "";
    *(char * PTR32 *)((int)this + uVar5 * 0x10 + 0x23c) = "";
    *((char * PTR32 *)GEN_TOP(((int)this + (uVar5 + 0x24) * 0x10))) = "";
    *(char * PTR32 *)((int)this + uVar5 * 0x10 + 0x244) = "";
  }
  if (*(char *)((int)this + 0x234) == '\0') {
    iVar2 = *(int *)((int)this + 0x200);
    *(int *)((int)this + 0x204) = *(int *)((int)this + 0x204) + 4;
    if ((uint)((*(int *)((int)this + iVar2 * 0x10 + 0x3a8) -
               *(int *)((int)this + iVar2 * 0x10 + 0x3a4)) / 0x54) <= *(uint *)((int)this + 0x204))
    {
      iVar1 = iVar2 + 1;
      *(undefined4 *)((int)this + 0x204) = 0;
      if (iVar1 != iVar2) {
        *(int *)((int)this + 0x200) = iVar1;
        F_0059d640(*(undefined * PTR32 *)((int)this + 0x1fc),*(undefined4 *)(&REFG(undefined, 0x10c0b18) + iVar1 * 4));
      }
      if (0x19 < *(uint *)((int)this + 0x200)) {
        *(undefined1 *)((int)this + 0x234) = 1;
        *(uint *)((int)this + 0x230) = uVar5;
      }
    }
  }
  return 1;
}

/* ref: FUN_007eb670 */
unsigned int F_007eb670(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7eb670u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float local_8;
  
  if ((*(char *)((int)param_1 + 0x399) != '\0') && (*(char *)((int)param_1 + 0x235) == '\0')) {
    if (*(char *)((int)param_1 + 0x398) != '\0') {
      *(int *)((int)param_1 + 0x22c) = *(int *)((int)param_1 + 0x22c) + 1;
      if (0x15 < *(uint *)((int)param_1 + 0x22c)) {
        *(undefined4 *)((int)param_1 + 0x22c) = 0;
      }
      bVar1 = F_007eb4f0(param_1);
      if (bVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x235) = 1;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x210) + 0x70))))(*(int * PTR32 *)((int)param_1 + 0x210));
      *(undefined1 *)((int)param_1 + 0x398) = 0;
    }
    fVar3 = (float10)*(ushort *)((int)param_1 + 0x226);
    local_8 = *(float *)&REFG(undefined, 0x10c12ac);
    if (*(char *)((int)param_1 + 0x39a) == '\0') {
      fVar5 = REFG(float, 0x1087ef8);
      if ((*(int *)((int)param_1 + 0x39c) == 1) ||
         (fVar5 = REFG(float, 0x109482c), *(int *)((int)param_1 + 0x39c) == 2)) {
        local_8 = fVar5;
      }
      param_2 = ((float)GEN_TOF(((((float10)*(double *)&REFG(undefined, 0x10d56c0) * fVar3) / (float10)local_8) *
                       (float10)param_2)));
    }
    else {
      param_2 = 0.0;
    }
    fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x228) - (float10)param_2)));
    fVar4 = (float10)fVar5;
    *(float *)((int)param_1 + 0x228) = fVar5;
    if (fVar4 <= -fVar3) {
      *(undefined1 *)((int)param_1 + 0x398) = 1;
      *(float *)((int)param_1 + 0x228) = (float)(fVar4 + fVar3);
    }
    uVar2 = 0;
    if (*(int *)((int)param_1 + 0x210) != 0) {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x210) + 0x70)));
    }
    F_00559f00(uVar2,(float)(int)(short)(int)*(float *)((int)param_1 + 0x228));
    if (*(char *)((int)param_1 + 0x235) != '\0') {
      *(char *)((int)param_1 + 0x10d) = *(char *)((int)param_1 + 0x10d) + '\x01';
      *(undefined4 *)((int)param_1 + 0x3a0) = 2;
      F_0059d640(*(undefined * PTR32 *)((int)param_1 + 0x188),0x66);
    }
  }
  return 0;
}

/* ref: FUN_007eb7e0 */
unsigned int F_007eb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  if (*(int *)((int)this + 0x180) == 0) {
    F_004ff310(((undefined1 *)(gen_frame + 0x34)),6,0);
    (*(undefined4 *)(gen_frame + 0x38)) = 0x756764;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x24)) = 5000;
    (*(undefined4 *)(gen_frame + 0x28)) = 0x10100;
    (*(undefined1 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 2;
    (*(undefined2 *)(gen_frame + 0x2d)) = 0;
    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),REFG(undefined * PTR32, 0x13283c4),&(*(undefined4 *)(gen_frame + 0xc)),0,0
                        );
    *(uint *)((int)this + 0x184) = uVar1;
    *(undefined4 *)((int)this + 0x180) = 1;
  }
  return 0;
}

/* ref: FUN_007eb870 */
uint F_007eb870(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint in_EAX = 0;
  
  if (*(int *)((int)this + 0x180) == 1) {
    F_004ff310(((undefined1 *)(gen_frame + 0x34)),6,0);
    (*(undefined4 *)(gen_frame + 0x38)) = 0x756764;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x24)) = 5000;
    (*(undefined4 *)(gen_frame + 0x28)) = 0x10100;
    (*(undefined1 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 2;
    (*(undefined2 *)(gen_frame + 0x2d)) = 0;
    in_EAX = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),REFG(undefined * PTR32, 0x13283c8),&(*(undefined4 *)(gen_frame + 0xc)),0,
                          0);
    *(uint *)((int)this + 0x188) = in_EAX;
    *(undefined4 *)((int)this + 0x180) = 2;
  }
  return in_EAX;
}

/* ref: FUN_007eb900 */
uint F_007eb900(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  uVar1 = *(uint *)((int)this + 0x180);
  if ((uVar1 == 1) || (uVar1 == 2)) {
    F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x80,REFG(undefined * PTR32, 0x13283cc),
               *(int *)((int)this + 400) + 1);
    F_004ff310(((undefined1 *)(gen_frame + 0x34)),6,0);
    (*(undefined4 *)(gen_frame + 0x30)) = 0x756764;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x20)) = 5000;
    (*(undefined4 *)(gen_frame + 0x24)) = 0x10100;
    (*(undefined1 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    (*(undefined2 *)(gen_frame + 0x29)) = 0;
    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    *(uint *)((int)this + 0x18c) = uVar1;
    *(undefined4 *)((int)this + 0x180) = 3;
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar1;
}

/* ref: FUN_007eba00 */
uint F_007eba00(unsigned int gen_a0)
{
  GEN_ENTER(0x7eba00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar6 = *(int *)((int)this + 0x3c0) - *(int *)((int)this + 0x3bc) >> 3;
  bVar1 = true;
  if (uVar6 != 0) {
    do {
      bVar3 = F_00577b50(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x3bc) + 4 + uVar5 * 8))));
      if (bVar3 == 0) {
        bVar1 = false;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  iVar4 = *(int *)((int)this + 0x40c) - *(int *)((int)this + 0x408);
  uVar5 = iVar4 * 0x2aaaaaab;
  if (*(uint *)((int)this + 0x41c) < (uint)(iVar4 / 0xc)) {
    bVar3 = F_00577b50(*((undefined * PTR32 *)GEN_TOP(((int)this + (*(int *)((int)this + 0x428) - 1U & 1) * 4 + 0x3fc))))
    ;
    uVar5 = CONCAT31(extraout_var,bVar3);
    if (bVar3 == 0) {
      return uVar5;
    }
  }
  uVar2 = REFG(float, 0x1087f04);
  if (bVar1) {
    uVar5 = 0;
    *(undefined4 *)((int)this + 0x430) = 0;
    *(undefined4 *)((int)this + 0x434) = 0;
    *(undefined4 *)((int)this + 0x438) = 0;
    *(undefined1 *)((int)this + 0x444) = 0;
    *(undefined4 *)((int)this + 0x448) = uVar2;
    *(undefined1 *)((int)this + 0x44c) = 0;
    *(undefined4 *)((int)this + 0x180) = 5;
  }
  return uVar5;
}

/* ref: FUN_007ebad0 */
uint F_007ebad0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7ebad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  ushort uVar2;
  uint in_EAX = 0;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x424) != '\0') {
    return in_EAX;
  }
  if (*(int *)(param_1 + 400) != 0) {
    return in_EAX;
  }
  uVar3 = *(uint *)(param_1 + 0x41c);
  if (((float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x408) + 2 + uVar3 * 0xc))) <=
       (float10)*(float *)(param_1 + 0x418)) && (*(uint *)(param_1 + 0x420) <= uVar3)) {
    *(uint *)(param_1 + 0x420) = *(uint *)(param_1 + 0x420) + 1;
    if (uVar3 != 0) {
      F_0059d640(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3f4 + *(int *)(param_1 + 0x428) * 4))),0x66);
    }
    F_0055a300(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3fc + (*(int *)(param_1 + 0x428) - 1U & 1) * 4))),1);
    F_0059d640(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3f4 + (*(int *)(param_1 + 0x428) - 1U & 1) * 4))),0x65);
    uVar3 = *(int *)(param_1 + 0x428) - 1U & 1;
    bVar4 = *(char *)(param_1 + 0x44c) == '\0';
    *(uint *)(param_1 + 0x428) = uVar3;
    *(bool *)(param_1 + 0x44c) = bVar4;
    fVar6 = *(float *)&REFG(undefined, 0x10c0c0c);
    if (bVar4) {
      fVar6 = REFG(float, 0x1087f04);
    }
    *(float *)(param_1 + 0x448) = fVar6;
    uVar2 = F_0055a030(*(undefined4 *)(param_1 + 0x3fc + uVar3 * 4));
    fVar6 = (float)((float10)uVar2 * (float10)REFG(double, 0x1088108));
    uVar2 = F_0055a020(*((undefined4 *)GEN_TOP((param_1 + 0x3fc + *(int *)(param_1 + 0x428) * 4))));
    F_0055a770(*((undefined4 *)GEN_TOP((param_1 + 0x3fc + *(int *)(param_1 + 0x428) * 4))),
                 (float)((float10)uVar2 * (float10)REFG(double, 0x1088108)),fVar6);
    F_00568210(*((undefined4 *)GEN_TOP((param_1 + 0x3fc + *(int *)(param_1 + 0x428) * 4))),
                 *(float *)(param_1 + 0x448),*(float *)(param_1 + 0x448));
  }
  if (*(char *)(param_1 + 0x43c) == '\0') {
    if (*(int *)(param_1 + 0x440) == 2) {
      fVar5 = (float10)param_2 + (float10)param_2;
    }
    else {
      if (*(int *)(param_1 + 0x440) != 3) goto LAB_007ebc76;
      fVar5 = (float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1094788);
    }
    param_2 = (float)fVar5;
  }
  else {
    param_2 = 0.0;
  }
LAB_007ebc76: ;
  fVar6 = ((float)GEN_TOF((((float10)param_2 /
                  (float10)((float)GEN_TOF(((float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x408) + 4 +
                                                           *(int *)(param_1 + 0x41c) * 0xc))) -
                                  (float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x408) +
                                                           *(int *)(param_1 + 0x41c) * 0xc + 2))))))) *
                 (float10)*(double *)&REFG(undefined, 0x10d56c8))));
  if (*(char *)(param_1 + 0x44c) == '\0') {
    fVar6 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x448) - (float10)fVar6)));
    *(float *)(param_1 + 0x448) = fVar6;
    bVar4 = (float10)fVar6 < (float10)1;
    fVar6 = REFG(float, 0x1087f04);
  }
  else {
    fVar6 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x448) + (float10)fVar6)));
    *(float *)(param_1 + 0x448) = fVar6;
    bVar4 = (float10)*(float *)&REFG(undefined, 0x10c0c0c) < (float10)fVar6;
    fVar6 = *(float *)&REFG(undefined, 0x10c0c0c);
  }
  if (bVar4) {
    *(float *)(param_1 + 0x448) = fVar6;
  }
  F_00568210(*((undefined4 *)GEN_TOP((param_1 + 0x3fc + *(int *)(param_1 + 0x428) * 4))),
               *(float *)(param_1 + 0x448),*(float *)(param_1 + 0x448));
  uVar3 = *(uint *)(param_1 + 0x408);
  if ((float10)(int)*((short *)GEN_TOP((uVar3 + 4 + *(int *)(param_1 + 0x41c) * 0xc))) <=
      (float10)*(float *)(param_1 + 0x418)) {
    uVar1 = *(int *)(param_1 + 0x41c) + 1;
    *(uint *)(param_1 + 0x41c) = uVar1;
    if (uVar1 < (uint)((int)(*(int *)(param_1 + 0x40c) - uVar3) / 0xc)) {
      F_0058f5b0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3fc + (*(int *)(param_1 + 0x428) - 1U & 1) * 4))));
      uVar3 = F_00591c00(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3fc + (*(int *)(param_1 + 0x428) - 1U & 1) * 4))),
                           *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x408) + 8 + *(int *)(param_1 + 0x41c) * 0xc))),0);
    }
    else {
      *(undefined1 *)(param_1 + 0x424) = 1;
      uVar3 = F_0059d640(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3f4 + *(int *)(param_1 + 0x428) * 4))),0x66);
    }
  }
  *(float *)(param_1 + 0x418) = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(param_1 + 0x418))));
  return uVar3;
}

/* ref: FUN_007ebe00 */
uint F_007ebe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ebe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *(int *)((int)this + 0x3c0) - *(int *)((int)this + 0x3bc) >> 3;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x3bc);
    do {
      if (*piVar2 == param_1) {
        F_0055a300(((undefined *)GEN_TOP((*(int * PTR32 *)((int)this + 0x3bc))[uVar3 * 2 + 1])),1);
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x3bc) + 4 + uVar3 * 8)));
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_007ebe60 */
uint F_007ebe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ebe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  iVar2 = *(int *)((int)this + 0x198) - *(int *)((int)this + 0x194);
  iVar1 = iVar2 >> 0x1f;
  iVar2 = iVar2 / 0xd + iVar1;
  uVar4 = 0;
  if (iVar2 != iVar1) {
    pcVar3 = *(char * PTR32 *)((int)this + 0x194);
    do {
      if (*pcVar3 == (char)param_1) {
        return (uint)(*(char * PTR32 *)((int)this + 0x194) + uVar4 * 0xd);
      }
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 0xd;
    } while (uVar4 < (uint)(iVar2 - iVar1));
  }
  return 0;
}

/* ref: FUN_007ebec0 */
uint F_007ebec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ebec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  iVar2 = *(int *)((int)this + 0x1a8) - *(int *)((int)this + 0x1a4);
  iVar1 = iVar2 >> 0x1f;
  iVar2 = iVar2 / 3 + iVar1;
  uVar4 = 0;
  if (iVar2 != iVar1) {
    pcVar3 = *(char * PTR32 *)((int)this + 0x1a4);
    do {
      if (*pcVar3 == (char)param_1) {
        return (uint)(*(char * PTR32 *)((int)this + 0x1a4) + uVar4 * 3);
      }
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 3;
    } while (uVar4 < (uint)(iVar2 - iVar1));
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditCast::vf44 */
uint F_007ebf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ebf10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,0);
  (*(uint *)(gen_frame + 0x38)) = uVar2 & 0xffff;
  (*(double *)(gen_frame + 0x28)) = (double)(uVar2 & 0xffff);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
  (*(uint *)(gen_frame + 0x38)) = uVar2 & 0xffff;
  *(float *)(this + 0x1a8) = ((float)GEN_TOF(((float10)(*(double *)(gen_frame + 0x28)) / (float10)(uVar2 & 0xffff))));
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 400) = uVar2;
  uVar2 = F_0055e2f0(this,2);
  *(uint *)(this + 0x194) = uVar2;
  F_0055a300(*(undefined * PTR32 *)(this + 400),0);
  F_004ff310(((undefined1 *)(gen_frame + 0x30)),6,0);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x756764;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x34)),REFG(undefined * PTR32, 0x13283d0),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
  *(uint *)(this + 0x184) = uVar2;
  *(undefined4 *)(this + 0x180) = 1;
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  this[0x19c] = (undefined1)0x0;
  uVar2 = F_0055dcb0();
  uVar1 = *(undefined4 *)(uVar2 + 0x238);
  uVar2 = F_0055dcb0();
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,*(undefined4 *)(uVar2 + 0x234),uVar1);
  return uVar2;
}

/* ref: FUN_007ec030 */
uint F_007ec030(unsigned int gen_a0)
{
  GEN_ENTER(0x7ec030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  longlong lVar1;
  int * piVar2;
  short * psVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x184);
  if (piVar2 != (int *)0x0) {
    piVar2 = piVar2 + 0x22;
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar5 == 2) {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x184) + 0x8c)));
      LOCK();
      iVar5 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      if (iVar5 < 8) {
        if (*(int *)((int)this + 0x18c) != 0) {
          F_00406b30(*(int *)((int)this + 0x18c));
          *(undefined4 *)((int)this + 0x18c) = 0;
        }
        psVar3 = ((short *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x5c))))
                                    (*(int * PTR32 *)((int)this + 0x184))));
        sVar6 = *psVar3;
        *(short *)((int)this + 0x188) = sVar6;
        lVar1 = (ulonglong)(uint)(sVar6 * 2) * 2;
        uVar4 = F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
        *(uint *)((int)this + 0x18c) = uVar4;
        if (uVar4 != 0) {
          sVar6 = 0;
          if (0 < *(short *)((int)this + 0x188) * 2) {
            iVar5 = 0;
            do {
              psVar3 = psVar3 + 1;
              *((short *)GEN_TOP((*(int *)((int)this + 0x18c) + iVar5 * 2))) = *psVar3;
              sVar6 = sVar6 + 1;
              iVar5 = (int)sVar6;
            } while (iVar5 < *(short *)((int)this + 0x188) * 2);
          }
          if (*(int *)((int)this + 0x184) != 0) {
            F_0050c620(*(int *)((int)this + 0x184),0,0);
            *(undefined4 *)((int)this + 0x184) = 0;
          }
          *(undefined4 *)((int)this + 0x19e) = 0;
          *(undefined4 *)((int)this + 0x1a4) = 0;
          *(undefined4 *)((int)this + 0x180) = 2;
        }
        piVar2 = (int *)0x0;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_007ec160 */
uint F_007ec160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ec160u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  undefined * this_00;
  
  uVar7 = (*(uint *)&gen_args[1]);
  if (((*(uint *)&gen_args[1]) != 0) && ((*(int *)&gen_args[2]) != 0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x20) + 0x158)));
    if (iVar1 == 0) {
      F_0059d640(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),0x66);
      uVar7 = F_0055a300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),0);
      return uVar7;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x20) + 0x1a4)));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x20) + 0x1a8)));
    iVar2 = *((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x20) + 0x164)));
    iVar3 = *((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x20) + 0x160)));
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254)));
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x20) + 0x13c)));
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) = iVar3;
    (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),iVar4 != iVar3);
    F_0059d640(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),0x65);
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),1);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))),uVar5);
    uVar6 = F_00559c40(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))));
    if ((char)uVar6 == '\0') {
      F_00559c60(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),1);
    }
    if ((iVar1 < 1) || (2 < iVar1)) {
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) == 0) {
        uVar7 = F_0055a300((undefined *)0x0,0);
        return uVar7;
      }
      uVar7 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) + 0x70))),0);
    }
    else {
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) == 0) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) + 0x70)));
      }
      uVar7 = F_0055a300(this_00,1);
      if (*((int *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) + 0xe4))) != iVar2) {
        uVar7 = F_005a04e0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))),iVar2,(*(int *)&gen_args[2]));
        return uVar7;
      }
    }
  }
  return uVar7;
}

/* ref: FUN_007ec2b0 */
uint F_007ec2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ec2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  uVar2 = param_1;
  if ((param_1 != 0) && (param_2 != 0)) {
    (*(int *)(gen_frame + 0x20)) = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc)));
    (*(int *)(gen_frame + 0x28)) = 0;
    uVar4 = 0x10;
    do {
      this_00 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + uVar4 + 0x1c8);
      uVar2 = *((uint *)GEN_TOP((uVar4 + *(int *)(param_1 + 0x20))));
      if (((*(int *)(gen_frame + 0x28)) < (*(int *)(gen_frame + 0x20))) && (0 < (int)uVar2)) {
        F_004352a0(uVar2 >> 0x1d & 2,&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x18)));
        F_00562e60(this_00,(*(undefined4 *)(gen_frame + 0x1c)));
        F_00562e80(this_00,(*(undefined4 *)(gen_frame + 0x18)));
        F_0058a4b0(this_00,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + -4 + uVar4))));
        if (this_00 == (undefined *)0x0) {
          pvVar3 = (undefined *)0x0;
        }
        else {
          pvVar3 = *(undefined * PTR32 *)((int)this_00 + 0x70);
        }
        F_0055a300(pvVar3,1);
        if (*(uint *)((int)this_00 + 0x98) != (uVar2 & 0x3fffffff)) {
          F_00595530(this_00,uVar2 & 0x3fffffff,0,0);
        }
        F_00560760(((undefined4 *)(gen_frame + 0xc)));
        ((undefined4 *)(gen_frame + 0xc))[0] = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x74 + uVar4)));
        uVar2 = F_00591690(this_00,2,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x13a),((undefined4 *)(gen_frame + 0xc)));
      }
      else {
        bVar1 = F_00582410(this_00);
        if (bVar1 != 0) {
          F_00597550(this_00);
        }
        pvVar3 = (undefined *)0x0;
        if (this_00 != (undefined *)0x0) {
          pvVar3 = *(undefined * PTR32 *)((int)this_00 + 0x70);
        }
        uVar2 = F_0055a300(pvVar3,0);
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x88);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonTargetCursor::vf44 */
uint F_007ec3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ec3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pAVar8;
  
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  *(undefined4 *)(this + 0x94) = 0;
  uVar5 = F_0055e2f0(this,1);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(undefined * PTR32 *)(this + 0x24c) = this + 0x210;
  *(undefined * PTR32 *)(this + 0x250) = this + 0x1bc;
  *(undefined * PTR32 *)(this + 0x254) = this + 0x184;
  *(undefined * PTR32 *)(this + 600) = this + 0x1d8;
  *(undefined * PTR32 *)(this + 0x25c) = this + 500;
  *(undefined * PTR32 *)(this + 0x260) = this + 0x230;
  *(uint *)(this + 0x180) = uVar7;
  *(undefined * PTR32 *)(this + 0x264) = this + 0x1a0;
  uVar5 = F_0055e2f0(this,2);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x184) = uVar7;
  uVar5 = F_0055e2f0(this,7);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x188) = uVar7;
  uVar5 = F_0055e2f0(this,8);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x18c) = uVar7;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 0x65;
  *(undefined4 *)(this + 0x19c) = 4;
  uVar5 = F_0055e2f0(this,3);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1a0) = uVar7;
  uVar5 = F_0055e2f0(this,5);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1a4) = uVar7;
  uVar5 = F_0055e2f0(this,6);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1a8) = uVar7;
  uVar5 = F_0055e2f0(this,4);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1ac) = uVar7;
  *(undefined4 *)(this + 0x1b4) = 0x65;
  *(undefined4 *)(this + 0x1b8) = 4;
  uVar5 = F_0055e2f0(this,9);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1bc) = uVar7;
  uVar5 = F_0055e2f0(this,10);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1c0) = uVar7;
  uVar5 = F_0055e2f0(this,0xb);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1c4) = uVar7;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1d0) = 0x65;
  *(undefined4 *)(this + 0x1d4) = 4;
  uVar5 = F_0055e2f0(this,0xc);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1d8) = uVar7;
  uVar5 = F_0055e2f0(this,0xe);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1dc) = uVar7;
  uVar5 = F_0055e2f0(this,0xf);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1e0) = uVar7;
  uVar5 = F_0055e2f0(this,0xd);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1e4) = uVar7;
  *(undefined4 *)(this + 0x1ec) = 0x65;
  *(undefined4 *)(this + 0x1f0) = 4;
  uVar5 = F_0055e2f0(this,0x10);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 500) = uVar7;
  uVar5 = F_0055e2f0(this,0x11);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1f8) = uVar7;
  uVar5 = F_0055e2f0(this,0x12);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1fc) = uVar7;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x208) = 0x65;
  *(undefined4 *)(this + 0x20c) = 4;
  uVar5 = F_0055e2f0(this,0x13);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x210) = uVar7;
  uVar5 = F_0055e2f0(this,0x15);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x214) = uVar7;
  uVar5 = F_0055e2f0(this,0x16);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x218) = uVar7;
  uVar5 = F_0055e2f0(this,0x14);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x22c) = uVar7;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x224) = 0x65;
  *(undefined4 *)(this + 0x228) = 4;
  uVar5 = F_0055e2f0(this,0x17);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x230) = uVar7;
  uVar5 = F_0055e2f0(this,0x18);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x234) = uVar7;
  uVar5 = F_0055e2f0(this,0x19);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x238) = uVar7;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x244) = 0x65;
  *(undefined4 *)(this + 0x248) = 4;
  F_0055a300(*(undefined * PTR32 *)(this + 0x180),0);
  (*(uint *)(gen_frame + 0x18)) = 0;
  pAVar8 = this + 0x24c;
  do {
    if ((*(uint *)(gen_frame + 0x18)) < 7) {
      puVar3 = *(undefined4 * PTR32 *)pAVar8;
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[4] = 0;
        if (puVar3[6] == -1) {
          F_0055a300((undefined *)*puVar3,0);
        }
        else {
          F_0059d640((undefined *)*puVar3,puVar3[6]);
        }
      }
      puVar3 = *(undefined4 * PTR32 *)pAVar8;
      if (puVar3 != (undefined4 *)0x0) {
        F_0055a730(*puVar3,&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x14)));
        fVar1 = (float)((float10)0 - (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x10)) = fVar1;
        fVar2 = (float)((float10)0 - (float10)(*(float *)(gen_frame + 0xc)));
        (*(float *)(gen_frame + 0x10)) = fVar2;
        F_00559da0(*puVar3,fVar2,fVar1);
      }
      iVar4 = *(int *)pAVar8;
      if (iVar4 != 0) {
        F_0055a170(*(undefined * PTR32 *)(iVar4 + 4),0x5f,0x5f,0x5f);
        F_0055a170(*(undefined * PTR32 *)(iVar4 + 8),0xff,0xff,0xff);
      }
    }
    uVar7 = (*(uint *)(gen_frame + 0x18)) + 1;
    pAVar8 = pAVar8 + 4;
    (*(uint *)(gen_frame + 0x18)) = uVar7;
  } while (uVar7 < 6);
  F_0059d640(*(undefined * PTR32 *)(this + 0x184),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 0x1bc),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 0x1d8),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 500),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 0x210),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 0x230),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 0x1a0),0x66);
  uVar7 = 0;
  if (*(int *)(this + 0x2c) == 0) {
    (*(uint *)(gen_frame + 0x18)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x18)) = (uint)*(ushort *)(this + 0x3a) + *((int *)GEN_TOP((*(int *)(this + 0x2c) + 4)));
  }
  if ((*(uint *)(gen_frame + 0x18)) != 0) {
    do {
      uVar5 = F_00578ee0(this + 0x24,uVar7);
      F_0055a6b0(uVar5,0);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (*(uint *)(gen_frame + 0x18)));
  }
  uVar7 = F_005a91d0(this,1,0x17);
  return uVar7;
}

/* ref: Client::UI2::AddonTargetCursor::vf47 */
uint F_007eca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eca20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  bool bVar8;
  bool bVar9;
  undefined4 * puVar10;
  uint uVar11;
  
  iVar1 = param_1[0x17];
  puVar10 = param_1;
  if (iVar1 != 0) {
    bVar8 = true;
    bVar9 = false;
    uVar11 = 0;
    do {
      iVar2 = *(int *)(this + uVar11 * 4 + 0x24c);
      puVar10 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar1 + 0x20);
        puVar4 = *(undefined4 * PTR32 *)(iVar3 + uVar11 * 0x18);
        uVar5 = *(undefined4 *)(iVar3 + 8 + uVar11 * 0x18);
        uVar6 = *(undefined4 *)(iVar3 + 0xc + uVar11 * 0x18);
        puVar10 = (undefined4 *)F_00789fb0(this,uVar11,*(undefined4 *)(iVar3 + 4 + uVar11 * 0x18))
        ;
        if (((uVar11 < 7) &&
            (puVar7 = *(undefined4 * PTR32 *)(this + uVar11 * 4 + 0x24c), puVar7 != (undefined4 *)0x0)) &&
           (puVar10 = puVar4, (undefined4 *)puVar7[4] != puVar4)) {
          puVar7[4] = puVar4;
          if (puVar4 == (undefined4 *)0x0) {
            if (puVar7[6] == -1) {
              puVar10 = (undefined4 *)F_0055a300((undefined *)*puVar7,0);
            }
            else {
              puVar10 = (undefined4 *)F_0059d640((undefined *)*puVar7,puVar7[6]);
            }
          }
          else {
            puVar10 = (undefined4 *)((int)puVar4 + -1);
            if (puVar10 < (undefined4 *)0x2) {
              if (puVar7[5] == -1) {
                puVar10 = (undefined4 *)F_0055a300((undefined *)*puVar7,1);
              }
              else {
                puVar10 = (undefined4 *)F_0059d640((undefined *)*puVar7,puVar7[5]);
              }
              if ((undefined *)puVar7[3] != (undefined *)0x0) {
                puVar10 = (undefined4 *)F_00559c60((undefined *)puVar7[3],1);
              }
            }
          }
          bVar9 = true;
        }
        if (*(int *)(iVar2 + 0x10) != 0) {
          F_0055a300(*(undefined * PTR32 *)(this + 0x180),1);
          puVar10 = (undefined4 *)F_0078a020(this,uVar11,uVar5,uVar6);
          if (uVar11 == 2) {
            puVar10 = (undefined4 *)F_0078a020(this,6,uVar5,uVar6);
          }
          bVar8 = false;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 6);
    if ((*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x90))) < 1) || (*(int *)(this + 0x194) == 0)) {
      puVar10 = *(undefined4 * PTR32 *)(this + 0x264);
      if ((puVar10 != (undefined4 *)0x0) && (puVar10[4] != 0)) {
        puVar10[4] = 0;
        if (puVar10[6] == -1) {
          puVar10 = (undefined4 *)F_0055a300((undefined *)*puVar10,0);
        }
        else {
          puVar10 = (undefined4 *)F_0059d640((undefined *)*puVar10,puVar10[6]);
        }
      }
    }
    else {
      puVar4 = *(undefined4 * PTR32 *)(this + 0x264);
      if ((puVar4 != (undefined4 *)0x0) && (puVar4[4] != 1)) {
        puVar4[4] = 1;
        if (puVar4[5] == -1) {
          puVar10 = (undefined4 *)F_0055a300((undefined *)*puVar4,1);
        }
        else {
          puVar10 = (undefined4 *)F_0059d640((undefined *)*puVar4,puVar4[5]);
        }
        if ((undefined *)puVar4[3] != (undefined *)0x0) {
          puVar10 = (undefined4 *)F_00559c60((undefined *)puVar4[3],1);
        }
        bVar9 = true;
      }
    }
    if (((bVar8) &&
        (puVar10 = ((undefined4 *)GEN_TOP((*(uint *)(this + 0xf4) >> 0x14 & 0xf))),
        puVar10 != (undefined4 *)&REFG(undefined, 0x5))) && (puVar10 != (undefined4 *)&REFG(undefined, 0x4))) {
      uVar11 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
      return uVar11;
    }
    if (((bVar9) &&
        ((puVar10 = ((undefined4 *)GEN_TOP((*(uint *)(this + 0xf4) >> 0x14 & 0xf))),
         puVar10 == (undefined4 *)&REFG(undefined, 0x5) || (puVar10 == (undefined4 *)&REFG(undefined, 0x4))))) &&
       ((char)this[0x10e] < '\x01')) {
      puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0)));
    }
  }
  return (uint)puVar10;
}

/* ref: Client::UI2::AddonBattleTalk::vf2 */
unsigned int F_007ecc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ecc40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((short)param_1 == 0x3d) {
    F_0078a770(this);
  }
  return 0;
}

/* ref: Client::UI2::AddonBattleTalk::vf38 */
uint F_007ecc60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7ecc60u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_10;
  
  fVar1 = *(float *)((int)param_1 + 0x1c8);
  if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar2 = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)((int)param_1 + 0x1cc))));
    fVar5 = (float10)fVar2;
    *(float *)((int)param_1 + 0x1cc) = fVar2;
    if ((float10)fVar1 <= fVar5) {
      *(float *)((int)param_1 + 0x1cc) = fVar1;
      F_0078a6e0(param_1);
    }
    else {
      iVar4 = *(int *)((int)param_1 + 0x1c4) + -1;
      fVar6 = (float10)iVar4;
      if (iVar4 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar7 = (float10)*(int *)((int)param_1 + 0x1c0);
      if (*(int *)((int)param_1 + 0x1c0) < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      local_10 = (undefined4)
                 (longlong)TRUNC(fVar7 + fVar6 * (float10)(float)(fVar5 / (float10)fVar1));
      F_00577aa0(*(undefined * PTR32 *)((int)param_1 + 0x188),local_10);
    }
  }
  if (((*(byte *)((int)param_1 + 0xf9) & 1) != 0) && (*(char *)((int)param_1 + 0x1d2) == '\0')) {
    F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x90),0);
  }
  uVar3 = F_005a2370(param_1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonBattleTalk::vf47 */
uint F_007ecd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ecd50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((*(int *)&gen_args[1]) + 0x94);
  iVar1 = *(int *)((*(int *)&gen_args[2]) + 0x88);
  if ((uVar4 != 0) && (iVar1 != 0)) {
    if (**(int * PTR32 *)(uVar4 + 0x20) == 0) {
      uVar4 = F_0078a770((*(undefined * PTR32 *)&gen_args[0]));
      return uVar4;
    }
    iVar2 = (*(int * PTR32 *)(uVar4 + 0x20))[1];
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),**(undefined4 * PTR32 *)(iVar1 + 0x20));
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4)));
    uVar4 = F_0055dcb0();
    F_007853b0(*(undefined4 *)(uVar4 + 0x38),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),uVar3);
    *((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) = (float)((float10)iVar2 / (float10)*(double *)&REFG(undefined, 0x10912a8));
    F_00577d20(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),&(*(int *)&gen_args[2]),&(*(int *)&gen_args[1]),0,0,REFG(undefined4, 0x108cc50),0);
    F_0055a080(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),
                 (uint)(ushort)(*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) + (short)(*(int *)&gen_args[1])));
    F_0055a200(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),0xff);
    uVar4 = F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),1);
    (*(undefined * PTR32 *)&gen_args[0])[0x1d2] = (undefined1)0x1;
  }
  return uVar4;
}

/* ref: Client::UI2::AddonScreenInfo::vf44 */
uint F_007ece40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ece40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  bVar1 = F_005609d0(this + 0x1c8,0x3a);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_0056c440(this + 0x1c8,0x3a,0,this,0);
    uVar2 = F_00592380(this + 0x1c8);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonAreaText::vf64 */
uint F_007eceb0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7eceb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  if (*(int *)(param_1 + 0x188) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x188) + 0x70)));
  }
  uVar1 = F_0055a020(uVar4);
  fVar5 = (float10)REFG(double, 0x1088108);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x188) != 0) {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x188) + 0x70)));
  }
  uVar2 = F_0055a030(uVar4);
  uVar3 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)param_2 * fVar5 -
                              fVar5 * (float10)(float)((float10)uVar1 * (float10)(*(float *)(gen_frame + 0x8)))))),
                       ((float)GEN_TOF(((float10)param_3 * (float10)*(double *)&REFG(undefined, 0x109cac8) -
                              (float10)(float)((float10)uVar2 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar3;
}

/* ref: FUN_007ecf60 */
uint F_007ecf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ecf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00584110(*(undefined * PTR32 *)((int)this + 0x198),param_2);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x19c),param_3);
  F_00595190(*(undefined * PTR32 *)((int)this + 0x1a4),param_1,((code *)REFP(0x78ac10)),this);
  F_0059d640(*(undefined * PTR32 *)((int)this + 0x184),0x66);
  F_0055dcb0();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
  return uVar1;
}

/* ref: Client::UI2::AddonGetAction::vf64 */
uint F_007ed000(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ed000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 in_ecx;
  float10 fVar7;
  float10 fVar8;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  if (*(int *)(param_1 + 0x1a4) == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1a4) + 0x70)));
  }
  uVar3 = F_0055a020(in_ecx);
  uVar6 = F_00577bc0(*(undefined * PTR32 *)(param_1 + 0x19c),0,0,REFG(undefined4, 0x108cc50),0);
  fVar7 = (float10)(int)uVar6;
  if ((int)uVar6 < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar8 = (float10)REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar2 = (double)param_3 * *(double *)&REFG(undefined, 0x10d56d0);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)((double)GEN_TOD(((float10)uVar3 +
                                                (fVar8 * (float10)param_2 + fVar7 * fVar8)))) -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonGetAction::vf65 */
byte F_007ed100(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 400) != 0) {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    return ~(byte)((ushort)*((undefined2 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x184) + 0x1c))) + 0x22))) >> 0xf)
           & 1;
  }
  return 1;
}

/* ref: FUN_007ed140 */
uint F_007ed140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ed140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_2 + 0x38);
  uVar3 = F_0055dcb0();
  fVar4 = (float10)*(int *)(uVar3 + 0x234);
  if (*(int *)(uVar3 + 0x234) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar3 = F_0055dcb0();
  ((float *)(gen_frame + 0x10))[2] = *(float *)(uVar3 + 0x238);
  F_00559fe0(*(undefined4 *)(param_2 + 0x48),((float *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0xc)));
  fVar5 = (float10)(int)gen_fl2bits(((float *)(gen_frame + 0x10))[2]);
  if ((int)gen_fl2bits(((float *)(gen_frame + 0x10))[2]) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  F_0078b260(param_2,(float)fVar4,(float)fVar5);
  if (iVar1 == 0) {
    F_0056c5f0((undefined *)(param_2 + 4));
    uVar7 = *(undefined4 *)(param_2 + 0x48);
    ((float *)(gen_frame + 0x10))[1] = 7.00649e-45;
    fVar6 = REFG(float, 0x1087f04);
LAB_007ed25c: ;
    ((float *)(gen_frame + 0x10))[2] = fVar6;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_007ed273;
      F_0056c5f0((undefined *)(param_2 + 4));
      uVar7 = *(undefined4 *)(param_2 + 0x48);
      fVar6 = 0.0;
      ((float *)(gen_frame + 0x10))[1] = 0.0;
      goto LAB_007ed25c;
    }
    F_0056c5f0((undefined *)(param_2 + 4));
    ((float *)(gen_frame + 0x10))[1] = 0.0;
    uVar2 = F_0055a020(*(undefined4 *)(param_2 + 0x48));
    uVar7 = *(undefined4 *)(param_2 + 0x48);
    ((float *)(gen_frame + 0x10))[2] = ((float)GEN_TOF(((float10)(float)fVar4 -
                         (float10)(float)((float10)uVar2 * (float10)((float *)(gen_frame + 0x10))[0]))));
  }
  F_00595110(param_2 + 4,100,uVar7,((float *)(gen_frame + 0x10)) + 1,1,REFG(float, 0x1088068));
  F_0058d530((undefined *)(param_2 + 4));
LAB_007ed273: ;
  *(undefined4 *)(param_2 + 0x34) = 1;
  uVar3 = F_0055a300(*(undefined * PTR32 *)(param_2 + 0x48),1);
  *(undefined4 *)(param_2 + 0x44) = 0;
  return uVar3;
}

/* ref: Client::UI2::AddonScreenText::vf64 */
uint F_007ed290(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ed290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float10 fVar2;
  double dVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  float10 fVar8;
  
  puVar7 = (undefined4 *)(param_1 + 0x1c8);
  iVar6 = 10;
  do {
    iVar1 = puVar7[-4];
    F_00559fe0(*puVar7,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
    if (iVar1 == 0) {
      dVar3 = (double)param_2 * REFG(double, 0x1088108);
      uVar4 = F_0055a020(*puVar7);
      F_00559e70(*puVar7,((float)GEN_TOF(((float10)dVar3 -
                                  (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) *
                                  (float10)REFG(double, 0x1088108)))));
      iVar1 = puVar7[-2];
      fVar8 = (float10)*(double *)&REFG(undefined, 0x10968a0);
      fVar2 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
      uVar4 = F_0055a030(*puVar7);
      fVar8 = (float10)((float)GEN_TOF(((float10)(double)((float10)param_3 * fVar2 + (float10)iVar1 * fVar8)
                              - (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x4))) *
                                (float10)REFG(double, 0x1088108))));
LAB_007ed450: ;
      uVar5 = F_00559f00(*puVar7,(float)fVar8);
    }
    else {
      if (iVar1 == 1) {
        dVar3 = (double)param_2 * *(double *)&REFG(undefined, 0x10919f0);
        uVar4 = F_0055a020(*puVar7);
        F_00559e70(*puVar7,((float)GEN_TOF(((float10)dVar3 -
                                    (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) *
                                    (float10)REFG(double, 0x1088108)))));
        iVar1 = puVar7[-2];
        fVar8 = (float10)*(double *)&REFG(undefined, 0x10968a0);
        fVar2 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
        uVar4 = F_0055a030(*puVar7);
        fVar8 = (float10)((float)GEN_TOF(((float10)(double)((float10)param_3 * fVar2 + (float10)iVar1 * fVar8
                                                  ) -
                                (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x4))) *
                                (float10)REFG(double, 0x1088108))));
        goto LAB_007ed450;
      }
      uVar5 = iVar1 - 2;
      if (uVar5 == 0) {
        dVar3 = (double)param_2 * *(double *)&REFG(undefined, 0x1094878);
        uVar4 = F_0055a020(*puVar7);
        F_00559e70(*puVar7,((float)GEN_TOF(((float10)dVar3 -
                                    (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) *
                                    (float10)REFG(double, 0x1088108)))));
        iVar1 = puVar7[-2];
        fVar8 = (float10)*(double *)&REFG(undefined, 0x10968a0);
        fVar2 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
        uVar4 = F_0055a030(*puVar7);
        fVar8 = (float10)((float)GEN_TOF(((float10)(double)((float10)param_3 * fVar2 + (float10)iVar1 * fVar8
                                                  ) -
                                (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x4))) *
                                (float10)REFG(double, 0x1088108))));
        goto LAB_007ed450;
      }
    }
    puVar7 = puVar7 + 0x1c;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return uVar5;
    }
  } while( true );
}

/* ref: Client::UI2::AddonScreenText::vf65 */
byte F_007ed470(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if (*(int *)(in_ecx + 0x5e4) == 0) {
    uVar1 = 0;
    piVar2 = (int *)(in_ecx + 0x1b4);
    while (*piVar2 == 0) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x1c;
      if (9 < uVar1) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007ed4a0 */
uint F_007ed4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ed4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  uVar1 = 0;
  uVar5 = (int)this + 0x180;
  do {
    if (*(int *)(uVar5 + 0x34) == 0) {
      uVar1 = F_0078b190(this,param_1);
      *(int *)(uVar5 + 0x38) = param_1;
      *(uint *)(uVar5 + 0x40) = uVar1 + 1;
      return uVar5;
    }
    uVar1 = uVar1 + 1;
    uVar5 = uVar5 + 0x70;
  } while (uVar1 < 10);
  iVar6 = 2;
  iVar4 = 10;
  iVar3 = -1;
  piVar2 = (int *)((int)this + 0x1c0);
  local_8 = 2;
  do {
    if (((piVar2[-3] == 1) && (piVar2[-2] == param_1)) && (iVar4 < *piVar2)) {
      iVar3 = iVar6 + -2;
      iVar4 = *piVar2;
    }
    if (((piVar2[0x19] == 1) && (piVar2[0x1a] == param_1)) && (iVar4 < piVar2[0x1c])) {
      iVar3 = iVar6 + -1;
      iVar4 = piVar2[0x1c];
    }
    if (((piVar2[0x35] == 1) && (piVar2[0x36] == param_1)) && (iVar4 < piVar2[0x38])) {
      iVar3 = iVar6;
      iVar4 = piVar2[0x38];
    }
    if (((piVar2[0x51] == 1) && (piVar2[0x52] == param_1)) && (iVar4 < piVar2[0x54])) {
      iVar3 = iVar6 + 1;
      iVar4 = piVar2[0x54];
    }
    if (((piVar2[0x6d] == 1) && (piVar2[0x6e] == param_1)) && (iVar4 < piVar2[0x70])) {
      iVar3 = iVar6 + 2;
      iVar4 = piVar2[0x70];
    }
    iVar6 = iVar6 + 5;
    piVar2 = piVar2 + 0x8c;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (iVar3 == -1) {
    iVar4 = -1;
    iVar3 = 10;
    if ((*(int *)((int)this + 0x1b4) == 1) && (10 < *(int *)((int)this + 0x1c0))) {
      iVar4 = 0;
      iVar3 = *(int *)((int)this + 0x1c0);
    }
    if ((*(int *)((int)this + 0x224) == 1) && (iVar3 < *(int *)((int)this + 0x230))) {
      iVar4 = 1;
      iVar3 = *(int *)((int)this + 0x230);
    }
    if ((*(int *)((int)this + 0x294) == 1) && (iVar3 < *(int *)((int)this + 0x2a0))) {
      iVar4 = 2;
      iVar3 = *(int *)((int)this + 0x2a0);
    }
    if ((*(int *)((int)this + 0x304) == 1) && (iVar3 < *(int *)((int)this + 0x310))) {
      iVar4 = 3;
      iVar3 = *(int *)((int)this + 0x310);
    }
    if ((*(int *)((int)this + 0x374) == 1) && (iVar3 < *(int *)((int)this + 0x380))) {
      iVar4 = 4;
      iVar3 = *(int *)((int)this + 0x380);
    }
    if ((*(int *)((int)this + 0x3e4) == 1) && (iVar3 < *(int *)((int)this + 0x3f0))) {
      iVar4 = 5;
      iVar3 = *(int *)((int)this + 0x3f0);
    }
    if ((*(int *)((int)this + 0x454) == 1) && (iVar3 < *(int *)((int)this + 0x460))) {
      iVar4 = 6;
      iVar3 = *(int *)((int)this + 0x460);
    }
    if ((*(int *)((int)this + 0x4c4) == 1) && (iVar3 < *(int *)((int)this + 0x4d0))) {
      iVar4 = 7;
      iVar3 = *(int *)((int)this + 0x4d0);
    }
    if ((*(int *)((int)this + 0x534) == 1) && (iVar3 < *(int *)((int)this + 0x540))) {
      iVar4 = 8;
      iVar3 = *(int *)((int)this + 0x540);
    }
    if ((*(int *)((int)this + 0x5a4) == 1) && (iVar3 < *(int *)((int)this + 0x5b0))) {
      iVar4 = 9;
    }
    else if (iVar4 == -1) {
      return 0;
    }
    *(undefined4 *)(iVar4 * 0x70 + 0x1c4 + (int)this) = 10;
    return 0;
  }
  *(undefined4 *)(iVar3 * 0x70 + 0x1c4 + (int)this) = 10;
  return 0;
}

/* ref: Client::UI2::AddonImage::vf65 */
byte F_007ed6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(in_ecx + 0x194) != 0) {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonWideText::vf65 */
byte F_007ed740(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x194) != 0) {
    return 0;
  }
  if ((*(int *)(this + 0x180) != 0) && (*(undefined * PTR32 *)(this + 0x184) != (undefined *)0x0)) {
    uVar1 = F_00567f90(*(undefined * PTR32 *)(this + 0x184),0x66);
    uVar2 = F_00559cd0(*(undefined4 *)(this + 0x184));
    return uVar2 == uVar1;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf65 */
byte F_007ed790(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(in_ecx + 0x1a8) != 0) {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: FUN_007ed7e0 */
uint F_007ed7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[66])REFP(0x10c6544));
  in_ecx = (int)this + 0x180;
  iVar1 = 0x2b;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 2;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined1 *)((int)this + 0xff0) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf | 0x80;
  F_0055e2a0(this,0x4000002,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x200;
  *(undefined1 *)((int)this + 0x10f) = 0xff;
  return (uint)this;
}

/* ref: Client::UI2::AddonMainCommand::vf44 */
uint F_007ed860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ed860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint in_ecx;
  int * this_00;
  undefined * this_01;
  undefined1 * this_02;
  uint uVar1;
  int iVar2;
  
  this_02 = (gen_frame + 0x1c);
  uVar1 = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  do {
    in_ecx = F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c0ee8) + uVar1));
    this_00 = (int *)F_00559c20(in_ecx);
    if (this_00 != (int *)0x0) {
      F_00568380((undefined *)this_00[0x1c],0x17,*(undefined4 *)((int)&REFG(undefined4, 0x10c0eec) + uVar1),this,0,0);
      ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,(uint)(byte)(&REFG(undefined1, 0x10c0ef4))[uVar1]);
      this_01 = (undefined *)F_00561490(this_00,2);
      if ((this_01 != (undefined *)0x0) && (*(int *)((int)&REFG(undefined4, 0x10c0ef0) + uVar1) != 0)) {
        F_0059d670(this_01,*(int *)((int)&REFG(undefined4, 0x10c0ef0) + uVar1));
      }
    }
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0x120);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  iVar2 = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  do {
    this_02 = this_02 + -8;
    uVar1 = F_005a2670(this_02);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf56 */
uint F_007ed930(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  F_00560760(((uint *)(gen_frame + 0xc)));
  uVar3 = 0;
  do {
    uVar1 = F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c0ee8) + uVar3));
    this_00 = (undefined *)F_00559c20(uVar1);
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_0055a2d0(*(undefined4 *)((int)this_00 + 0x70));
      if ((char)uVar1 != '\0') {
        uVar1 = F_0042a990(this + *(int *)((int)&REFG(undefined4, 0x10c0eec) + uVar3) * 0x54 + 0x180);
        ((uint *)(gen_frame + 0xc))[0] = uVar1;
        uVar1 = F_00561490(this_00,4);
        (*(uint *)(gen_frame + 0x18)) = (uint)(byte)this[0x13a];
        uVar2 = F_0055dcb0();
        uVar1 = F_00590ad0((undefined *)(uVar2 + 0xe0),2,(*(uint *)(gen_frame + 0x18)),uVar1,((uint *)(gen_frame + 0xc)));
      }
    }
    uVar3 = uVar3 + 0x10;
  } while (uVar3 < 0x120);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf57 */
uint F_007ed9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar1 = F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c0ee8) + uVar3));
    this_00 = (undefined *)F_00559c20(uVar1);
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_0055a2d0(*(undefined4 *)((int)this_00 + 0x70));
      if ((char)uVar1 != '\0') {
        uVar1 = F_00561490(this_00,4);
        uVar2 = F_0055dcb0();
        uVar1 = F_00596b10((undefined *)(uVar2 + 0xe0),uVar1);
      }
    }
    uVar3 = uVar3 + 0x10;
  } while (uVar3 < 0x120);
  return uVar1;
}

/* ref: FUN_007eda30 */
uint F_007eda30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eda30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = &REFG(undefined4, 0x10c0eec);
  do {
    if (*piVar2 == param_1) {
      if ((-1 < (int)uVar1) && (uVar1 < 0x12)) {
        uVar1 = F_0055e2f0(this,(&REFG(undefined4, 0x10c0ee8))[uVar1 * 4]);
        piVar2 = (int *)F_00559c20(uVar1);
        uVar1 = 0;
        if (piVar2 != (int *)0x0) {
          uVar1 = F_0055a2d0(piVar2[0x1c]);
          if ((char)uVar1 != '\0') {
            uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,param_2);
          }
        }
      }
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 0x12);
  return uVar1;
}

/* ref: FUN_007edaa0 */
uint F_007edaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7edaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = &REFG(undefined4, 0x10c0eec);
  do {
    if (*piVar2 == param_1) {
      uVar1 = F_0055e2f0(this,(&REFG(undefined4, 0x10c0ee8))[uVar1 * 4]);
      uVar1 = F_00559c20(uVar1);
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 0x12);
  return 0;
}

/* ref: Client::UI2::AddonMainCommand::vf64 */
uint F_007edae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7edae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((byte)this[0x126] & 1) != 0) {
    *(ushort *)(this + 0x126) = *(ushort *)(this + 0x126) & 0xfffe;
    this[0xff0] = (undefined1)0x1;
  }
  if ((((byte)this[0xf9] & 1) != 0) &&
     ((uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)))) {
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2);
    if (uVar2 != 0) {
      bVar1 = F_0055de10(this,uVar2);
      if (bVar1 != 0) {
        uVar2 = F_0055dcb0();
        F_00594ca0(*(undefined * PTR32 *)(uVar2 + 0x14),this);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x32);
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
        return 1;
      }
    }
    piVar3 = (int *)F_007edaa0(this,1);
    if (piVar3 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3);
      if (uVar2 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        this_00 = (undefined *)F_0055dcb0();
        F_0059b300(this_00,uVar4,uVar5,uVar6);
        this[0xf8] = (undefined1)((byte)this[0xf8] & 0x7f);
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
        *(uint *)(this + 0xa4) = uVar2;
        uVar2 = F_0055dcb0();
        F_005794a0(*(undefined * PTR32 *)(uVar2 + 0x14));
        uVar2 = F_0055dcb0();
        F_0059b860(*(undefined * PTR32 *)(uVar2 + 0x14),this,0);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x32);
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
        return 1;
      }
    }
    return 0;
  }
  if (this[0xff0] != (undefined1)0x0) {
    *(ushort *)(this + 0x126) = *(ushort *)(this + 0x126) | 1;
    this[0xff0] = (undefined1)0x0;
  }
  return 0;
}

/* ref: Client::UI2::AddonParameter::vf47 */
uint F_007edc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7edc50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  uint uVar8;
  undefined * this_00;
  undefined4 uVar9;
  
  iVar2 = *(int *)((*(uint *)&gen_args[1]) + 0xc);
  iVar3 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x50)));
  iVar4 = *(int *)((*(int *)&gen_args[2]) + 8);
  uVar8 = (*(uint *)&gen_args[1]) >> 8;
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != iVar3) {
    if (iVar3 == 1) {
      uVar9 = 0x65;
LAB_007edc90: ;
      F_0059d640(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),uVar9);
    }
    else {
      if (iVar3 == 2) {
        uVar9 = 0x66;
        goto LAB_007edc90;
      }
      if (iVar3 == 4) {
        uVar9 = 0x67;
        goto LAB_007edc90;
      }
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = iVar3;
    (*(uint *)&gen_args[1]) = CONCAT31((int3)uVar8,1);
  }
  iVar5 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x40)));
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) != iVar5) {
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),1);
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = iVar5;
  }
  F_005a28a0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4))));
  F_005a04e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),**(undefined4 * PTR32 *)(iVar2 + 0x20),(*(uint *)&gen_args[1]));
  if (iVar3 == 1) {
    F_005a28a0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xc))));
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 8)));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c)));
  }
  else if (iVar3 == 2) {
    F_005a28a0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x24))));
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x20)));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198)));
  }
  else {
    if (iVar3 != 4) goto LAB_007edd61;
    F_005a28a0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1c))));
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x18)));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194)));
  }
  F_005a04e0(this_00,uVar9,(*(uint *)&gen_args[1]));
LAB_007edd61: ;
  F_005a28a0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x14))));
  F_005a04e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x10))),(*(uint *)&gen_args[1]));
  pcVar6 = *((char * PTR32 *)GEN_TOP((*(int *)(iVar4 + 0x20) + 0x104)));
  if (pcVar6 != (char *)0x0) {
    pcVar7 = pcVar6;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (pcVar7 != pcVar6 + 1) {
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),1);
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),1);
      uVar8 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),pcVar6);
      return uVar8;
    }
  }
  F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),0);
  uVar8 = F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),0);
  return uVar8;
}

/* ref: Client::UI2::AddonExp::vf44 */
uint F_007ede00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ede00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_0055e340(this,5);
  *(uint *)(this + 0x1c0) = uVar1;
  uVar1 = F_0055e340(this,3);
  *(uint *)(this + 0x1c4) = uVar1;
  uVar1 = F_0055e340(this,4);
  *(uint *)(this + 0x1c8) = uVar1;
  uVar1 = F_0055e2f0(this,2);
  uVar1 = F_00559b90(uVar1);
  *(uint *)(this + 0x1d4) = uVar1;
  uVar1 = F_0055e2f0(this,6);
  if (((uVar1 == 0) || (this_00 = (undefined *)F_00559c20(uVar1), this_00 == (undefined *)0x0)) ||
     (uVar1 = F_005613a0(this_00), uVar1 != 5)) {
    this_00 = (undefined *)0x0;
  }
  *(undefined * PTR32 *)(this + 0x1cc) = this_00;
  F_005a2870(this_00,0);
  F_005a28a0(*(undefined * PTR32 *)(this + 0x1cc),100);
  uVar1 = F_00561490(*(undefined * PTR32 *)(this + 0x1cc),5);
  *(uint *)(this + 0x1d0) = uVar1;
  F_00560990(this + 0x198,2000,1);
  F_005a91d0(this,1,3);
  uVar1 = F_005a91d0(this,0,2);
  return uVar1;
}

/* ref: Client::UI2::AddonExp::vf47 */
uint F_007eded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eded0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)((*(uint *)&gen_args[1]) + 0xc);
  iVar2 = *(int *)((*(int *)&gen_args[2]) + 0xc);
  iVar3 = *(int *)((*(int *)&gen_args[2]) + 8);
  uVar8 = ((*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xdc))) < 1) - 1 & 10) + 0x11;
  uVar7 = F_00559cf0(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))));
  if (uVar8 != (uVar7 & 0xffff)) {
    F_0059d640(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),uVar8);
  }
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x50)));
  uVar7 = (*(uint *)&gen_args[1]) >> 8;
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != iVar4) {
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = iVar4;
    (*(uint *)&gen_args[1]) = CONCAT31((int3)uVar7,1);
  }
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x40)));
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) != iVar4) {
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),1);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x268))));
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = iVar4;
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x28)));
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x30)));
  bVar5 = false;
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) != iVar2) || (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) != iVar4)) {
    F_005a04e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x2c))),(*(uint *)&gen_args[1]));
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xfc))));
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) = iVar4;
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) = iVar2;
    bVar5 = true;
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x34)));
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))) != iVar2) || (bVar5)) {
    if (iVar2 == 0) {
      F_0056cad0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))),0);
    }
    else {
      uVar7 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x38)));
      F_0056cad0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))),uVar7);
      if (uVar7 < 100) {
        uVar7 = F_00559cf0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) + 0x6c))));
        if ((short)uVar7 != 0x11) {
          F_0059d640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) + 0x6c))),0x11);
        }
      }
      else {
        uVar7 = F_00559cf0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) + 0x6c))));
        if ((short)uVar7 != 0x65) {
          F_0059d640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) + 0x6c))),0x65);
        }
      }
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))) = iVar2;
  }
  F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(uint)(0 < *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x3c)))));
  uVar7 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xd8)));
  uVar8 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188)));
  if (uVar8 != uVar7) {
    if (uVar7 == 0) {
      bVar6 = F_005609d0((*(undefined * PTR32 *)&gen_args[0]) + 0x198,0x3a);
      if (bVar6 == 0) {
        F_005609c0((*(undefined * PTR32 *)&gen_args[0]) + 0x198);
        F_00592380((*(undefined * PTR32 *)&gen_args[0]) + 0x198);
        F_0056c440((*(undefined * PTR32 *)&gen_args[0]) + 0x198,0x3a,0,(*(undefined * PTR32 *)&gen_args[0]),0);
      }
    }
    else if (uVar8 == 0) {
      F_00588be0((*(undefined * PTR32 *)&gen_args[0]) + 0x198,0x3a,0,(*(undefined * PTR32 *)&gen_args[0]));
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),1);
    }
    uVar8 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x100))));
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) = uVar7;
  }
  return uVar8;
}

/* ref: FUN_007ee110 */
uint F_007ee110(unsigned int gen_a0)
{
  GEN_ENTER(0x7ee110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  F_0055a300(*(undefined * PTR32 *)this,0);
  uVar1 = 0;
  *(undefined2 *)((int)this + 4) = 0;
  if (*(short *)((int)this + 6) != 0x11) {
    *(undefined2 *)((int)this + 6) = 0x11;
    uVar3 = 9;
    pvVar2 = (undefined *)F_00559c20(*(undefined4 *)this);
    pvVar2 = (undefined *)F_00561490(pvVar2,uVar3);
    uVar1 = F_0059d640(pvVar2,(uint)*(ushort *)((int)this + 6));
  }
  return uVar1;
}

/* ref: Client::UI2::AddonEnemyList::vf37 */
uint F_007ee150(unsigned int gen_a0)
{
  GEN_ENTER(0x7ee150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + iVar3))) != 0) {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x180) + iVar3)));
      if (iVar1 != 0) {
        F_00406ad0(iVar1);
      }
      *((undefined4 *)GEN_TOP((iVar3 + *(int *)(this + 0x180)))) = 0;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x20);
  F_005a92d0(this,0,0x12,0);
  F_005a92d0(this,1,0x14,0);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonEnemyList::vf44 */
uint F_007ee1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ee1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_c;
  uint * local_8;
  
  iVar4 = 0;
  uVar5 = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  pvVar2 = (undefined *)F_0055e2f0(this,3);
  F_0055a300(pvVar2,uVar5);
  local_c = 3;
  do {
    uVar5 = 0;
    uVar3 = F_00404270();
    local_8 = (uint *)F_00406bd0(8,0,uVar3,uVar5);
    if (local_8 == (uint *)0x0) {
      local_8 = (uint *)0x0;
    }
    else {
      *local_8 = 0;
      local_8[1] = 0;
    }
    *((uint * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + iVar4 * 4))) = local_8;
    uVar3 = F_00578f50(this + 0x24,2,iVar4,0);
    fVar1 = REFG(float, 0x1087ef8);
    *local_8 = uVar3;
    F_00559da0(uVar3,fVar1,(float)local_c);
    if (((uVar3 == 0) || (pvVar2 = (undefined *)F_00559c20(uVar3), pvVar2 == (undefined *)0x0)) ||
       (uVar3 = F_005613a0(pvVar2), uVar3 != 1)) {
      pvVar2 = (undefined *)0x0;
    }
    pvVar2 = (undefined *)F_00561490(pvVar2,0xc);
    if (pvVar2 != (undefined *)0x0) {
      F_00568380(pvVar2,3,iVar4,this,0,0);
      F_00568380(pvVar2,6,iVar4,this,0,0);
      F_00568380(pvVar2,7,iVar4,this,0,0);
    }
    local_c = local_c + 0x1f;
    iVar4 = iVar4 + 1;
  } while (local_c < 0xfb);
  F_005a91d0(this,1,0x14);
  uVar3 = F_005a91d0(this,0,0x12);
  return uVar3;
}

/* ref: Client::UI2::AddonEnemyList::vf47 */
uint F_007ee300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ee300u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  ushort uVar8;
  undefined4 uVar9;
  
  iVar7 = *(int *)((*(int *)&gen_args[1]) + 0x50);
  iVar1 = *(int *)((*(int *)&gen_args[2]) + 0x48);
  (*(int *)(gen_frame + 0x10)) = iVar7;
  if (*((int *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0xc))) == 0) {
    *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x126))) = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x126))) & 0xffef;
  }
  else {
    *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x126))) = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x126))) | 0x10;
  }
  iVar7 = **(int * PTR32 *)(iVar7 + 0x20);
  *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = iVar7;
  if (8 < iVar7) {
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = 8;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) == 0) {
    iVar7 = 0;
    do {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar7 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))))));
      F_0055a300((undefined *)*puVar2,0);
      *(undefined2 *)(puVar2 + 1) = 0;
      if (*(short *)((int)puVar2 + 6) != 0x11) {
        uVar9 = 9;
        *(undefined2 *)((int)puVar2 + 6) = 0x11;
        pvVar4 = (undefined *)F_00559c20(*puVar2);
        pvVar4 = (undefined *)F_00561490(pvVar4,uVar9);
        F_0059d640(pvVar4,(uint)*(ushort *)((int)puVar2 + 6));
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0x20);
    uVar5 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf4))) >> 0x14 & 0xf;
    if ((uVar5 != 3) && (uVar5 != 2)) {
      return uVar5;
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))((*(undefined * PTR32 *)&gen_args[0]),0,0);
    return uVar5;
  }
  uVar5 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf4))) >> 0x14 & 0xf;
  if (((uVar5 == 5) || (uVar5 == 4)) && ((char)(*(undefined * PTR32 *)&gen_args[0])[0x10e] < '\x01')) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),0);
  }
  uVar5 = (uint)(ushort)(*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) * 0x1f + 0xc);
  pvVar4 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),3);
  F_0055a300(pvVar4,(uint)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) != 0));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xc)),&(*(int *)&gen_args[1]),0);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0xc)),uVar5);
  F_0055a080(pvVar4,uVar5);
  (*(int *)&gen_args[2]) = 0;
  if (0 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184)))) {
    (*(int *)(gen_frame + 0x18)) = 0x10;
    (*(int *)(gen_frame + 0x14)) = 4;
    do {
      piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + (*(int *)&gen_args[2]) * 4)));
      F_0055a300((undefined *)*piVar3,1);
      if (((*piVar3 == 0) || (pvVar4 = (undefined *)F_00559c20(*piVar3), pvVar4 == (undefined *)0x0)) ||
         (uVar5 = F_005613a0(pvVar4), uVar5 != 1)) {
        pvVar4 = (undefined *)0x0;
      }
      uVar9 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + *(int *)(iVar1 + 0x20))));
      pvVar6 = (undefined *)F_00561530(pvVar4,3);
      F_00584110(pvVar6,uVar9);
      iVar7 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 4 + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20))));
      uVar8 = 0x69;
      if (iVar7 < 0x32) {
        uVar8 = 0x65;
      }
      else if (iVar7 < 0x50) {
        uVar8 = 0x66;
      }
      else if (iVar7 < 0x5a) {
        uVar8 = 0x67;
      }
      else if (iVar7 < 100) {
        uVar8 = 0x68;
      }
      if (*(ushort *)(piVar3 + 1) != uVar8) {
        *(ushort *)(piVar3 + 1) = uVar8;
        pvVar6 = (undefined *)F_00561490(pvVar4,7);
        F_0059d640(pvVar6,(uint)uVar8);
      }
      pvVar4 = (undefined *)F_00561550(pvVar4,5);
      iVar7 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20))));
      if (iVar7 < 0) {
        F_0055a300(pvVar4,0);
      }
      else {
        F_0055a300(pvVar4,1);
        F_00568230(pvVar4,(float)((float10)iVar7 / (float10)*(double *)&REFG(undefined, 0x1088118)));
      }
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x10;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0xc;
      (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + 1;
    } while ((*(int *)&gen_args[2]) < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))));
    if (7 < (*(int *)&gen_args[2])) goto LAB_007ee60c;
  }
  iVar7 = (*(int *)&gen_args[2]) * 4;
  do {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar7 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))))));
    F_0055a300((undefined *)*puVar2,0);
    *(undefined2 *)(puVar2 + 1) = 0;
    if (*(short *)((int)puVar2 + 6) != 0x11) {
      uVar9 = 9;
      *(undefined2 *)((int)puVar2 + 6) = 0x11;
      pvVar4 = (undefined *)F_00559c20(*puVar2);
      pvVar4 = (undefined *)F_00561490(pvVar4,uVar9);
      F_0059d640(pvVar4,(uint)*(ushort *)((int)puVar2 + 6));
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0x20);
LAB_007ee60c: ;
  uVar5 = F_0078d870((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x10)) + 0x20) + 4))),
                       *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x10)) + 0x20) + 8))));
  return uVar5;
}

/* ref: Client::UI2::AddonEnemyList::vf6 */
uint F_007ee630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ee630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar4 = 0;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar4 + *(int *)(this + 0x180))));
      F_0055a300((undefined *)*puVar1,0);
      *(undefined2 *)(puVar1 + 1) = 0;
      if (*(short *)((int)puVar1 + 6) != 0x11) {
        uVar5 = 9;
        *(undefined2 *)((int)puVar1 + 6) = 0x11;
        pvVar2 = (undefined *)F_00559c20(*puVar1);
        pvVar2 = (undefined *)F_00561490(pvVar2,uVar5);
        F_0059d640(pvVar2,(uint)*(ushort *)((int)puVar1 + 6));
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x20);
  }
  uVar3 = F_005b0610(this,param_1,1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonEnemyList::vf2 */
uint F_007ee6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ee6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 3) {
    uVar1 = F_0078d990(this,param_2,param_4);
  }
  else {
    if (uVar1 == 6) {
      uVar1 = F_0078da20(this,param_2,param_4);
      return uVar1;
    }
    uVar1 = uVar1 - 7;
    if (uVar1 == 0) {
      uVar1 = F_0078dab0(this,param_4);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_007ee700 */
uint F_007ee700(unsigned int gen_a0)
{
  GEN_ENTER(0x7ee700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 2;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d56dc));
  *(undefined4 *)((int)this + 0x274) = 0;
  F_0055e2a0(this,0x4000002,1);
  *(undefined1 *)((int)this + 0x10f) = 0xb;
  return (uint)this;
}

/* ref: Client::UI2::AddonStatus::vf44 */
uint F_007ee760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ee760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  uint uVar4;
  
  uVar4 = 0;
  pAVar3 = this + 0x184;
  do {
    uVar1 = F_0055e2f0(this,(&REFG(undefined4, 0x10c1090))[uVar4]);
    *(uint *)(pAVar3 + -4) = uVar1;
    if (((uVar1 == 0) || (pvVar2 = (undefined *)F_00559c20(uVar1), pvVar2 == (undefined *)0x0)) ||
       (uVar1 = F_005613a0(pvVar2), uVar1 != 0x10)) {
      pvVar2 = (undefined *)0x0;
    }
    *(undefined * PTR32 *)pAVar3 = pvVar2;
    F_0058a4b0(pvVar2,&REFG(undefined, 0x10be72f));
    pvVar2 = (undefined *)0x0;
    if (*(int *)pAVar3 != 0) {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
    }
    F_0055a300(pvVar2,0);
    if (*(int *)pAVar3 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
    }
    F_00568380(pvVar2,0x37,uVar4,this,0,0);
    uVar4 = uVar4 + 1;
    pAVar3 = pAVar3 + 8;
  } while (uVar4 < 0x1e);
  this[0x270] = (undefined1)0x0;
  F_005a91d0(this,1,3);
  uVar4 = F_005a91d0(this,0,2);
  return uVar4;
}

/* ref: Client::UI2::AddonStatus::vf47 */
uint F_007ee820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ee820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined * pAVar9;
  undefined * pAVar10;
  undefined4 uVar11;
  
  iVar8 = *(int *)(param_1 + 0xc);
  uVar1 = *((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xcc)));
  iVar2 = *(int *)(param_2 + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int *)(gen_frame + 0xc)) = iVar8;
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9e0(uVar4);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  param_2 = 0;
  param_1 = -1;
  if ((0 < *(int *)(this + 0x274)) || (0 < (int)uVar1)) {
    iVar6 = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = this + 0x184;
    do {
      piVar3 = *(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x14));
      uVar4 = *((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0x54 + iVar6 * 4)));
      if (piVar3 != (int *)0x0) {
        if ((int)uVar4 < 1) {
          F_0055a300((undefined *)piVar3[0x1c],0);
          uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
          if ((*(uint *)(gen_frame + 0x10)) == uVar4) {
            param_1 = iVar6;
          }
        }
        else {
          F_004352a0(uVar4 >> 0x1d & 2,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x4)));
          F_00562e60(piVar3,(*(undefined4 *)(gen_frame + 0x8)));
          F_00562e80(piVar3,(*(undefined4 *)(gen_frame + 0x4)));
          F_00595530(piVar3,uVar4 & 0x3fffffff,0,0);
          F_0058a4b0(piVar3,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4 + iVar6 * 4))));
          F_0055a300((undefined *)piVar3[0x1c],1);
        }
      }
      pAVar10 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      iVar6 = iVar6 + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)(gen_frame + 0x14)) + 8;
      iVar8 = (*(int *)(gen_frame + 0xc));
    } while (iVar6 < 0x1e);
    if (param_1 != -1) {
      uVar11 = 0;
      if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + param_1 * 8 + 0x184) != 0) {
        uVar11 = *((undefined4 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + param_1 * 8 + 0x184) + 0x70)));
      }
      uVar4 = F_0055a2d0(uVar11);
      if ((char)uVar4 == '\0') {
        uVar7 = param_1 + 1;
        uVar4 = param_2;
        if (uVar7 < 0x1e) {
          pAVar9 = pAVar10 + uVar7 * 8 + 0x184;
          do {
            uVar11 = 0;
            if (*(int *)pAVar9 != 0) {
              uVar11 = *(undefined4 *)(*(int *)pAVar9 + 0x70);
            }
            uVar5 = F_0055a2d0(uVar11);
            if ((char)uVar5 != '\0') {
              piVar3 = *(int * PTR32 *)(pAVar10 + uVar7 * 8 + 0x184);
              uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
              if (uVar4 != 0) goto LAB_007ee9ea;
              break;
            }
            uVar7 = uVar7 + 1;
            pAVar9 = pAVar9 + 8;
          } while (uVar7 < 0x1e);
        }
        iVar8 = param_1 + -1;
        if (-1 < iVar8) {
          pAVar10 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + iVar8 * 8 + 0x184;
          do {
            if (*(int *)pAVar10 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = *(undefined4 *)(*(int *)pAVar10 + 0x70);
            }
            uVar7 = F_0055a2d0(uVar11);
            if ((char)uVar7 != '\0') {
              uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + iVar8 * 8 + 0x184) + 0x3c))))
                                (*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + iVar8 * 8 + 0x184));
              break;
            }
            pAVar10 = pAVar10 + -8;
            iVar8 = iVar8 + -1;
          } while (-1 < iVar8);
        }
LAB_007ee9ea: ;
        if ((*(uint *)(gen_frame + 0x10)) != uVar4) {
          uVar11 = 0;
          uVar7 = -(uint)(uVar4 != 0) & (uint)(*(undefined * PTR32 *)(gen_frame + 0x18));
          this_00 = (undefined *)F_0055dcb0();
          F_0059b300(this_00,uVar4,uVar7,uVar11);
        }
      }
    }
    *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x274) = uVar1;
    uVar4 = uVar1;
    this = (*(undefined * PTR32 *)(gen_frame + 0x18));
  }
  if (this[0x270] != (undefined1)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this);
  }
  return uVar4;
}

/* ref: Client::UI2::AddonStatus::vf56 */
uint F_007eea50(unsigned int gen_a0)
{
  GEN_ENTER(0x7eea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pAVar4;
  int iVar5;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3);
  iVar5 = *(int *)(uVar2 + 0xc);
  pAVar4 = *(undefined * PTR32 *)(uVar3 + 8);
  (*(int *)(gen_frame + 0xc)) = iVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pAVar4;
  if (0 < *((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0xcc)))) {
    pAVar4 = this + 0x184;
    uVar2 = 0x7c;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar4;
    do {
      if (0 < *((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + -0x28 + uVar2)))) {
        F_00560760(((undefined4 *)(gen_frame + 0x0)));
        ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((uVar2 + *(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x20))));
        uVar1 = *(undefined4 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x68);
        (*(uint *)(gen_frame + 0x10)) = (uint)(byte)this[0x13a];
        uVar3 = F_0055dcb0();
        pAVar4 = (undefined *)F_00590ad0((undefined *)(uVar3 + 0xe0),2,(*(uint *)(gen_frame + 0x10)),uVar1,((undefined4 *)(gen_frame + 0x0)));
        iVar5 = (*(int *)(gen_frame + 0xc));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 8;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0xf4);
  }
  this[0x270] = (undefined1)0x1;
  return (uint)pAVar4;
}

/* ref: Client::UI2::AddonStatus::vf57 */
uint F_007eeb10(unsigned int gen_a0)
{
  GEN_ENTER(0x7eeb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  pAVar3 = this + 0x184;
  local_8 = 0x1e;
  do {
    uVar1 = *(undefined4 *)(*(int *)pAVar3 + 0x68);
    uVar2 = F_0055dcb0();
    uVar2 = F_00596b10((undefined *)(uVar2 + 0xe0),uVar1);
    pAVar3 = pAVar3 + 8;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  this[0x270] = (undefined1)0x0;
  return uVar2;
}

/* ref: Client::UI2::AddonStatus::vf32 */
byte F_007eeb60(unsigned int gen_a0)
{
  GEN_ENTER(0x7eeb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pAVar3;
  int iVar4;
  
  iVar4 = 0;
  pAVar3 = this + 0x184;
  do {
    piVar1 = *(int * PTR32 *)pAVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = F_0055a2d0(piVar1[0x1c]);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
        *(uint *)(this + 0xa4) = uVar2;
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pAVar3 = pAVar3 + 8;
  } while (iVar4 < 0x1e);
  return 0;
}

/* ref: Client::UI2::AddonBagStatus::vf37 */
uint F_007eebc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eebc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pAVar2;
  uint uVar3;
  
  uVar3 = 0;
  pAVar2 = this + 0x180;
  do {
    if (*(int *)pAVar2 == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *(undefined * PTR32 *)(*(int *)pAVar2 + 0x70);
    }
    uVar3 = uVar3 + 1;
    F_005840a0(pvVar1,0x17,uVar3,this,0);
    pAVar2 = pAVar2 + 4;
  } while (uVar3 < 4);
  if (*(int *)(this + 400) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_005840a0(pvVar1,0x17,0,this,0);
  F_005a92d0(this,1,8,0);
  F_005a92d0(this,1,7,0);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonBagStatus::vf47 */
uint F_007eec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eec40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  uVar7 = 0;
  ((uint *)(gen_frame + 0x10))[0] = 0x65;
  ((uint *)(gen_frame + 0x10))[1] = 0x66;
  ((uint *)(gen_frame + 0x10))[2] = 0x6b;
  ((uint *)(gen_frame + 0x10))[3] = 0x67;
  ((uint *)(gen_frame + 0x10))[4] = 0x69;
  ((uint *)(gen_frame + 0x10))[5] = 0x6a;
  if (REFG(undefined4, 0x13283e4) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
    do {
      uVar4 = F_00561490(*(undefined * PTR32 *)(this + 400),*((undefined4 *)GEN_TOP((REFG(undefined * PTR32, 0x13283e8) + uVar7 * 4))));
      iVar3 = *(int *)(uVar4 + 0x8c);
      uVar4 = ((uint *)(gen_frame + 0x10))[(int)(*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 4 + *(int *)(iVar2 + 0x20)))))];
      uVar5 = F_00559cf0(*(undefined4 *)(iVar3 + 0x6c));
      if (uVar4 != (uVar5 & 0xffff)) {
        F_0059d670(*(undefined * PTR32 *)(iVar3 + 0x6c),uVar4);
      }
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x10);
      uVar7 = uVar7 + 1;
    } while (uVar7 < REFG(undefined4, 0x13283e4));
  }
  uVar7 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this + 0x180;
  do {
    uVar4 = 0;
    do {
      uVar5 = F_00561490(*(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0xc)),*((undefined4 *)GEN_TOP((REFG(undefined * PTR32, 0x13283e0) + uVar4))));
      iVar2 = *(int *)(uVar5 + 0x8c);
      uVar5 = ((uint *)(gen_frame + 0x10))[(int)(*((byte *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc + uVar7))))];
      uVar6 = F_00559cf0(*(undefined4 *)(iVar2 + 0x6c));
      if (uVar5 != (uVar6 & 0xffff)) {
        uVar5 = F_0059d670(*(undefined * PTR32 *)(iVar2 + 0x6c),uVar5);
      }
      uVar4 = uVar4 + 4;
      uVar7 = uVar7 + 0x14;
    } while (uVar4 < 100);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 4;
  } while (uVar7 < 2000);
  F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: Client::UI2::AddonMoney::vf46 */
byte F_007eed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eed80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined * this_00;
  undefined4 uVar1;
  undefined1 AVar2;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    F_00568630(*(undefined * PTR32 *)(this + 0x180),uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x184);
  if (this_00 != (undefined *)0x0) {
    if ((param_2[8] & 0xf) == 0) {
      AVar2 = (undefined1)0x0;
    }
    else {
      AVar2 = SUB41(*(undefined4 *)(param_2 + 0xc),0);
    }
    if (AVar2 != this[0x188]) {
      switch((unsigned int)(uintptr_t)(AVar2)) {
      default: ;
        F_0059d640(this_00,0x65);
        this[0x188] = AVar2;
        break;
      case (undefined1)0x1: ;
        F_0059d640(this_00,0x66);
        this[0x188] = AVar2;
        return 1;
      case (undefined1)0x2: ;
        F_0059d640(this_00,0x67);
        this[0x188] = AVar2;
        return 1;
      case (undefined1)0x3: ;
        F_0059d640(this_00,0x68);
        this[0x188] = AVar2;
        return 1;
      }
    }
    return 1;
  }
  return 1;
}

/* ref: FUN_007eee50 */
uint F_007eee50(unsigned int gen_a0)
{
  GEN_ENTER(0x7eee50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6b54));
  puVar1 = (undefined4 *)((int)this + 0x18c);
  local_8 = 7;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    F_0058d480(puVar1 + 4);
    puVar1 = puVar1 + 0x10;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x10;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x77 ^
       *(byte *)((int)this + 0xf9) | 8;
  F_0055e2a0(this,0x4000002,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 8;
  *(undefined1 *)((int)this + 0x10f) = 8;
  return (uint)this;
}

/* ref: FUN_007eeef0 */
uint F_007eeef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7eeef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int * piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar5 = param_1 * 0x40;
  piVar1 = *(int * PTR32 *)(uVar5 + 0x198 + (int)this);
  if (piVar1 != (int *)0x0) {
    this_00 = (undefined *)(uVar5 + 0x19c + (int)this);
    bVar4 = F_005610b0(this_00);
    if (bVar4 == 0) {
      F_0056c5f0(this_00);
      fVar6 = F_0055dfa0(this,1);
      iVar3 = (int)(fVar6 * (float10)REFG(double, 0x10944b8));
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
      iVar2 = *(int *)((int)this + 0x184);
      (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((int)(short)uVar5 + *(int *)((int)this + 0x184) * iVar3 * 10)));
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
      (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((int)(short)uVar5 +
                        (iVar3 - iVar2 * iVar2 * iVar3) * *(int *)((int)this + 0x188))));
      (*(undefined4 *)(gen_frame + 0x10)) = 5;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_00595110(this_00,300,piVar1[0x24],&(*(undefined4 *)(gen_frame + 0x0)),3,REFG(float, 0x1088068));
      F_0056c650(this_00,0x3d,param_1,this,0,0);
      F_0058d530(this_00);
    }
    uVar5 = F_0055dcb0();
    if (*((int * PTR32 *)GEN_TOP((*(int *)(uVar5 + 0x14) + 0xcc))) == piVar1) {
      bVar4 = F_0078dfc0(this,param_1,9,0);
      uVar5 = CONCAT31(extraout_var,bVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar5;
}

/* ref: FUN_007ef040 */
uint F_007ef040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ef040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_c;
  
  F_00588f80((undefined *)((int)this + param_1 * 0x40 + 0x19c),0x3d,param_1,this,0);
  this_00 = (undefined *)F_0056c5f0((undefined *)((int)this + param_1 * 0x40 + 0x19c));
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 0x40 + 0x198);
  if (piVar1 != (int *)0x0) {
    uVar3 = F_0055dcb0();
    uVar4 = F_0055e2f0(piVar1,4);
    F_00596b10((undefined *)(uVar3 + 0xe0),uVar4);
    uVar3 = F_0055dcb0();
    if (*((int * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == piVar1) {
      F_0078dfc0(this,param_1,9,0);
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + param_1 * 0x40 + 0x18c) = 0;
    *(undefined4 *)((int)this + param_1 * 0x40 + 400) = 0;
    *(undefined4 *)((int)this + param_1 * 0x40 + 0x194) = 0;
    *(undefined4 *)((int)this + param_1 * 0x40 + 0x198) = 0;
    F_0056c5f0((undefined *)((int)this + param_1 * 0x40 + 0x19c));
    this_00 = (undefined *)((int)this + 0x19c);
    local_c = 8;
    do {
      piVar1 = *(int * PTR32 *)((int)this_00 + -4);
      if ((piVar1 != (int *)0x0) && (*(int *)((int)this_00 + -8) != 0)) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
        if (*(int *)((int)this + 0x188) < 0) {
          if ((short)uVar3 <= (short)uVar4) {
            if (*(int *)((int)this + 0x188) < 0) goto LAB_007ef187;
            goto LAB_007ef14e;
          }
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,1);
        }
        else {
LAB_007ef14e: ;
          if ((short)uVar4 <= (short)uVar3) goto LAB_007ef187;
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,1);
          uVar5 = (uint)(ushort)-(short)uVar5;
        }
        ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,(uVar5 & 0xffff) + (uVar4 & 0xffff));
        bVar2 = F_005610c0(this_00,0x3d);
        if (bVar2 == 0) {
          F_0056c5f0(this_00);
        }
      }
LAB_007ef187: ;
      this_00 = (undefined *)((int)this_00 + 0x40);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return (uint)this_00;
}

/* ref: FUN_007ef1b0 */
uint F_007ef1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,((short *)(gen_frame + 0x8)),((short *)(gen_frame + 0x4)));
  fVar3 = F_0055dfa0(this,1);
  fVar4 = (float10)REFG(double, 0x10944b8);
  uVar2 = F_0055dcb0();
  iVar1 = *(int *)(uVar2 + 0x234);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1);
  if ((int)((uVar2 & 0xffff) + (int)((short *)(gen_frame + 0x8))[0]) < iVar1 - (int)(fVar3 * fVar4)) {
    *(uint *)((int)this + 0x184) = ((int)(fVar3 * fVar4) < (int)((short *)(gen_frame + 0x8))[0]) - 1;
  }
  else {
    *(undefined4 *)((int)this + 0x184) = 1;
  }
  uVar2 = F_0055dcb0();
  fVar4 = (float10)*(int *)(uVar2 + 0x238);
  if (*(int *)(uVar2 + 0x238) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  if ((float10)(int)((short *)(gen_frame + 0x4))[0] < fVar4 * (float10)*(double *)&REFG(undefined, 0x10920a8)) {
    *(undefined4 *)((int)this + 0x188) = 1;
    return 1;
  }
  *(undefined4 *)((int)this + 0x188) = 0xffffffff;
  return 0xffffffff;
}

/* ref: Client::UI2::AddonCastBar::vf37 */
uint F_007ef280(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined2 *)(this + 0x1b0) = 0;
  *(undefined2 *)(this + 0x20c) = 0;
  this[0x20e] = (undefined1)0x0;
  F_005a92d0(this,1,0x15,0);
  F_005a92d0(this,0,0x13,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCastBar::vf5 */
uint F_007ef2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ef2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0078e800(this);
  F_005a89b0(this,param_1,1);
  uVar1 = F_0055e2a0(this,0x2000000,1);
  return uVar1;
}

/* ref: FUN_007ef320 */
uint F_007ef320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ef320u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  ushort uVar1;
  uint in_EAX = 0;
  undefined2 extraout_var = 0;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((*(int *)&gen_args[1]) == 0) {
    if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) != (*(uint *)&gen_args[3])) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) = (*(uint *)&gen_args[3]);
      *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) =
           (float)((float10)*(double *)&REFG(undefined, 0x1088118) / (float10)(int)(*(uint *)&gen_args[3]));
    }
    in_EAX = (*(uint *)&gen_args[2]);
    if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) != (*(uint *)&gen_args[2])) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) = (*(uint *)&gen_args[2]);
      in_EAX = F_0078e910((*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) - (*(uint *)&gen_args[2]));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))) != (undefined *)0x0) {
      (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)(int)(*(uint *)&gen_args[4]));
      fVar4 = (float10)(int)(*(uint *)&gen_args[4]);
      fVar5 = (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4)));
      bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
      bVar3 = bVar2 || fVar5 == fVar4;
      in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                        CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)in_EAX));
      if (bVar2 == bVar3) {
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) = (*(uint *)&gen_args[3]);
        F_0055a000(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))),&(*(int *)&gen_args[1]),&(*(uint *)&gen_args[2]));
        (*(uint *)&gen_args[3]) = CONCAT22(((undefined2)0x27f),*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x210))));
        (*(uint *)&gen_args[4]) = (uint)TRUNC((float10)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x210))) *
                              ((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) /
                              (float10)*(double *)&REFG(undefined, 0x1088118)));
        uVar1 = F_0055a040(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))),(*(uint *)&gen_args[4]) & 0xffff,(*(uint *)&gen_args[2]));
        in_EAX = CONCAT22(extraout_var,uVar1);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_007ef400 */
uint F_007ef400(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x184) != (undefined *)0x0) {
    in_EAX = F_00567f70(*(undefined * PTR32 *)((int)this + 0x184));
    if ((short)in_EAX == 0x66) {
      uVar1 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
      *(undefined1 *)((int)this + 0x1b0) = 0;
      if ((uVar1 == 3) || (uVar1 == 2)) {
        F_005b0610(this,0,1,1);
      }
      *(undefined1 *)((int)this + 0x20d) = 0;
      if (*(int *)((int)this + 0x18c) != 0) {
        uVar1 = F_0042a990((int)this + 0x1b4);
        F_00584110(*(undefined * PTR32 *)((int)this + 0x18c),uVar1);
      }
      *(undefined2 *)((int)this + 0x1b0) = 0;
      *(undefined2 *)((int)this + 0x20c) = 0;
      *(undefined1 *)((int)this + 0x20e) = 0;
      in_EAX = F_005b0610(this,0,1,1);
    }
  }
  return in_EAX;
}

/* ref: FUN_007ef490 */
uint F_007ef490(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x184) != (undefined *)0x0) {
    in_EAX = F_00567f70(*(undefined * PTR32 *)((int)this + 0x184));
    if ((short)in_EAX == 0x68) {
      uVar1 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
      *(undefined1 *)((int)this + 0x1b1) = 0;
      if ((uVar1 == 3) || (uVar1 == 2)) {
        F_005b0610(this,0,1,1);
      }
      *(undefined1 *)((int)this + 0x20e) = 0;
      if (*(int *)((int)this + 0x18c) != 0) {
        uVar1 = F_0042a990((int)this + 0x1b4);
        F_00584110(*(undefined * PTR32 *)((int)this + 0x18c),uVar1);
      }
      *(undefined2 *)((int)this + 0x1b0) = 0;
      *(undefined2 *)((int)this + 0x20c) = 0;
      *(undefined1 *)((int)this + 0x20e) = 0;
      in_EAX = F_005b0610(this,0,1,1);
    }
  }
  return in_EAX;
}

/* ref: FUN_007ef520 */
uint F_007ef520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7ef520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  uint param_7 = (uint)gen_a7;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)(param_1 * 0x20 + 0x1c8 + (int)this);
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  if (((byte)param_2 & 0x1f) == 3) {
    iVar3 = param_3;
    if (0x8000 < param_3) {
      iVar3 = param_3 + -0xffff;
    }
    puVar1[5] = (uint)gen_fl2bits((float)iVar3);
    *(undefined1 *)(puVar1 + 7) = 1;
  }
  else if (0 < param_3) {
    puVar1[4] = (uint)gen_fl2bits((float)((float10)param_3 / (float10)*(double *)&REFG(undefined, 0x1088118)));
  }
  *(undefined2 *)(puVar1 + 6) = (undefined2)param_4;
  *(undefined2 *)((int)puVar1 + 0x1a) = (undefined2)param_5;
  uVar2 = 0;
  *puVar1 = param_2;
  if ((param_2 >> 7 & 1) != 0) {
    uVar2 = param_7;
  }
  puVar1[3] = uVar2;
  puVar1[1] = param_6;
  uVar2 = F_0078ece0(this,param_1,1);
  return uVar2;
}

/* ref: FUN_007ef5c0 */
uint F_007ef5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this_00;
  uint uVar4;
  undefined * this_01;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (undefined4 *)((int)this + 0xe9c);
  puVar7 = (undefined4 *)((int)this + 0x1d0);
  puVar11 = (undefined4 *)((int)this + 0x1360);
  (*(int *)(gen_frame + 0xc)) = 100;
  do {
    this_00 = (undefined *)puVar11[-2];
    uVar4 = puVar7[-2];
    iVar10 = puVar7[-1];
    this_01 = (undefined *)*puVar7;
    uVar8 = F_0055a2d0(this_01);
    if (((char)uVar8 != '\0') || (uVar8 = F_0055a2d0(this_00), (char)uVar8 != '\0')) {
      (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),(char)(uVar4 >> 6)) & 0xffffff01;
      uVar6 = (*(uint *)(gen_frame + 0x10)) >> 8;
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) & 0xffffff00;
      uVar8 = (*(uint *)(gen_frame + 0x14)) >> 8;
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) & 0xffffff00;
      uVar5 = (*(uint *)(gen_frame + 0x20)) >> 8;
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) & 0xffffff00;
      fVar1 = ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10c7070) /
                     ((float10)*(float *)((int)this + 0x1c8c) *
                     (float10)*(float *)((int)this + 0x198)))));
      if ((uVar4 >> 5 & 1) == 0) {
LAB_007ef7cf: ;
        F_0055a300((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),(uint)(iVar10 != 0));
        F_0055a300((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x2c))[1],(*(uint *)(gen_frame + 0x4)));
        if (iVar10 != 0) {
          F_00591c00((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),iVar10,0);
        }
        if ((uVar4 >> 7 & 1) != 0) {
          (*(uint *)(gen_frame + 0x10)) = CONCAT31((int3)uVar6,1);
        }
      }
      else {
        fVar2 = ((float)GEN_TOF(((float10)(int)*(short *)(puVar7 + 4) -
                       (float10)*(float *)((int)this + 0x188))));
        fVar3 = ((float)GEN_TOF(((float10)(int)*(short *)((int)puVar7 + 0x12) -
                       (float10)*(float *)((int)this + 0x18c))));
        if (*(float *)&REFG(undefined, 0x1088114) < gen_bits2f(puVar7[2])) {
          fVar12 = (float10)fVar3;
          fVar13 = (float10)(float)(((float10)GEN_TOD(gen_bits2f(puVar7[2]))) *
                                    (float10)*(double *)&REFG(undefined, 0x1094568) + (float10)fVar1);
          if (!(fVar13 * fVar13 < (float10)fVar2 * (float10)fVar2 + fVar12 * fVar12))
          goto LAB_007ef7cf;
          iVar10 = 0;
        }
        else {
          fVar12 = (float10)fVar3;
          fVar13 = (float10)fVar1;
          if (!(fVar13 * fVar13 < (float10)fVar2 * (float10)fVar2 + fVar12 * fVar12))
          goto LAB_007ef7cf;
        }
        uVar9 = 0x65;
        if ((uVar4 & 0x1f) == 2) {
          uVar9 = 0x66;
        }
        F_0059d670((undefined *)puVar11[-1],uVar9);
        fVar12 = F_00c4d1fa((float10)fVar2);
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF((((float10)(float)fVar12 * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                          (float10)*(double *)&REFG(undefined, 0x1080228) + (float10)*(double *)&REFG(undefined, 0x10920c0))));
        if (*(char *)((int)this + 0x1bc) == '\0') {
          (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1a4) + (float10)(*(float *)(gen_frame + 0x34)))));
        }
        F_00568350(this_00,(*(float *)(gen_frame + 0x34)));
        F_0055a300((undefined *)*puVar11,(uint)(iVar10 != 0));
        F_00568350(*puVar11,GEN_TOF(gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x34))) ^ REFG(uint, 0x10920d0))));
        F_0055a300((undefined *)puVar11[1],1);
        if (iVar10 == 0) {
          fVar12 = (float10)0;
        }
        else {
          F_00591c00((undefined *)*puVar11,iVar10,0);
          fVar12 = (float10)*(float *)((int)this + 0x1c90);
        }
        F_00559f00(puVar11[1],(float)fVar12);
        if ((uVar4 >> 7 & 1) != 0) {
          (*(uint *)(gen_frame + 0x14)) = CONCAT31((int3)uVar8,1);
        }
        (*(uint *)(gen_frame + 0x20)) = CONCAT31((int3)uVar5,1);
      }
      F_0055a300(this_00,(*(uint *)(gen_frame + 0x20)));
      F_0055a3c0(puVar11[2],(*(uint *)(gen_frame + 0x14)));
      F_0055a300(this_01,(uint)((char)(*(uint *)(gen_frame + 0x20)) == '\0'));
      uVar8 = F_0055a3c0((*(undefined4 * PTR32 *)(gen_frame + 0x2c))[2],(*(uint *)(gen_frame + 0x10)));
    }
    puVar7 = puVar7 + 8;
    (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 3;
    puVar11 = puVar11 + 5;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
    if ((*(int *)(gen_frame + 0xc)) == 0) {
      return uVar8;
    }
  } while( true );
}

/* ref: FUN_007ef860 */
uint F_007ef860(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x7ef860u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  uVar5 = F_0078efb0(in_ecx + 0x180,in_xmm2,in_xmm3,in_xmm7);
  if (*(int *)(in_ecx + 0xe8c) != 0) {
    uVar3 = *(ushort *)(in_ecx + 0x1c98);
    uVar4 = *(ushort *)(in_ecx + 0x1c9a);
    fVar8 = *(float *)(in_ecx + 0x19c);
    fVar6 = (float10)((float)GEN_TOF(((float10)*(ushort *)(in_ecx + 0x1c94) * (float10)REFG(double, 0x1088108))));
    fVar7 = (float10)((float)GEN_TOF(((float10)REFG(double, 0x1088108) * (float10)*(ushort *)(in_ecx + 0x1c96))));
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x198) * (float10)*(float *)(in_ecx + 400))));
    fVar2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x198) * (float10)*(float *)(in_ecx + 0x194))));
    F_0055a770(*(undefined4 *)(in_ecx + 0xe90),(float)(fVar6 + (float10)fVar1),
                 (float)(fVar7 + (float10)fVar2));
    F_00559da0(*(undefined4 *)(in_ecx + 0xe90),
                 ((float)GEN_TOF(((float10)(float)((float10)uVar3 - fVar6) - (float10)fVar1))),
                 ((float)GEN_TOF(((float10)(float)((float10)uVar4 - fVar7) - (float10)fVar2))));
    F_00568210(*(undefined4 *)(in_ecx + 0xe90),fVar8,fVar8);
    if (*(char *)(in_ecx + 0x1bc) == '\0') {
      fVar8 = *(float *)(in_ecx + 0x1a4);
    }
    else {
      fVar8 = 0.0;
    }
    uVar5 = F_00568350(*(undefined4 *)(in_ecx + 0xe90),fVar8);
  }
  return uVar5;
}

/* ref: FUN_007ef9c0 */
uint F_007ef9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ef9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  
  uVar3 = param_1;
  if (param_1 < 0x65) {
    uVar3 = param_1 * 0x20;
    pbVar2 = *(byte * PTR32 *)(uVar3 + 0x1d4 + (int)this);
    if (pbVar2 != (byte *)0x0) {
      pbVar6 = &REFG(undefined1, 0x10be762);
      pbVar4 = pbVar2;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_007efa10: ;
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_007efa15;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_007efa10;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_007efa15: ;
      uVar3 = 0;
      if (iVar5 != 0) {
        pbVar4 = (byte *)((int)this + 0x1b60);
        pbVar6 = pbVar4;
        pbVar7 = pbVar2;
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_007efa48: ;
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_007efa4d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_007efa48;
          pbVar6 = pbVar6 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_007efa4d: ;
        if (iVar5 != 0) {
          F_00c49908(pbVar4,0x100,pbVar2);
        }
        F_00560760(((byte * PTR32 *)(gen_frame + 0x0)));
        ((byte * PTR32 *)(gen_frame + 0x0))[0] = pbVar4;
        bVar1 = *(byte *)((int)this + 0x13a);
        uVar3 = F_0055dcb0();
        uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),2,(uint)bVar1,
                             *(undefined4 *)((int)this + param_1 * 0xc + 0xea4),((byte * PTR32 *)(gen_frame + 0x0)),0,1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_007efab0 */
uint F_007efab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7efab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  undefined * this_00;
  char cVar2;
  uint uVar3;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  cVar1 = *(char *)((int)this + 0x1bc);
  cVar2 = (char)param_1;
  *(char *)((int)this + 0x1bc) = cVar2;
  uVar3 = param_1;
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0xe80);
    if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x88) != cVar2)) {
      uVar3 = F_0059dde0(this_00,param_1);
    }
    if (cVar1 != cVar2) {
      F_007ef5c0(this);
      uVar3 = F_007ef860(this,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da);
    }
  }
  return uVar3;
}

/* ref: FUN_007efb10 */
unsigned int F_007efb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7efb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(char *)((int)this + 0x1c9c) != (char)param_1) {
    uVar1 = F_00559c20(*(undefined4 *)((int)this + 0xe8c));
    if (uVar1 != 0) {
      F_0059d670(*(undefined * PTR32 *)(uVar1 + 0x6c),(-(uint)((char)param_1 != '\0') & 0x54) + 0x11);
      *(char *)((int)this + 0x1c9c) = (char)param_1;
    }
  }
  return 0;
}

/* ref: FUN_007efb60 */
byte F_007efb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7efb60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  byte bVar2;
  
  if (100 < param_1) {
    return 0;
  }
  iVar1 = *(int *)((int)this + param_1 * 0xc + 0xea4);
  if (((iVar1 != 0) && (bVar2 = F_0055a3a0(iVar1), bVar2 != 0)) &&
     (bVar2 = F_00570d10(iVar1,param_2,param_3,0), bVar2 != 0)) {
    return 1;
  }
  iVar1 = *(int *)((int)this + param_1 * 0x14 + 0x1368);
  if (((iVar1 != 0) && (bVar2 = F_0055a3a0(iVar1), bVar2 != 0)) &&
     (bVar2 = F_00570d10(iVar1,param_2,param_3,0), bVar2 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonNaviMap::SetTargetRenderer::vf4 */
uint F_007efc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7efc00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x44)) = param_2;
  if (param_1 == *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 8) + 0xe8c)))) {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 8) + 0x128)));
    F_0055dcb0();
    uVar1 = F_005596d0((uint)uVar1 << 6);
    iVar5 = *((int *)GEN_TOP((*(int *)(this + 8) + 0xe8c)));
    (*(uint *)(gen_frame + 0x40)) = (uint)uVar1;
    (*(undefined4 *)(gen_frame + 0x94)) = *(undefined4 *)(iVar5 + 0x24);
    (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(iVar5 + 0x28);
    (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)(iVar5 + 0x20);
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa4)) = *(undefined4 *)(iVar5 + 0x2c);
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0xc0)) = *(undefined4 *)(iVar5 + 0x30);
    (*(undefined4 *)(gen_frame + 0xc4)) = *(undefined4 *)(iVar5 + 0x34);
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    puVar3 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x90)));
    puVar6 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar5 = 0x10; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    (*(undefined4 *)(gen_frame + 0xd0)) = ((undefined4 *)(gen_frame + 0x0))[0];
    (*(undefined4 *)(gen_frame + 0xd4)) = ((undefined4 *)(gen_frame + 0x0))[1];
    (*(undefined4 *)(gen_frame + 0xd8)) = ((undefined4 *)(gen_frame + 0x0))[2];
    (*(undefined4 *)(gen_frame + 0xe0)) = (*(undefined4 *)(gen_frame + 0x10));
    (*(undefined4 *)(gen_frame + 0xdc)) = 0;
    (*(undefined4 *)(gen_frame + 0xe4)) = (*(undefined4 *)(gen_frame + 0x14));
    (*(undefined4 *)(gen_frame + 0xec)) = 0;
    (*(undefined4 *)(gen_frame + 0xfc)) = 0;
    (*(undefined4 *)(gen_frame + 0xe8)) = (*(undefined4 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0x100)) = (*(undefined4 *)(gen_frame + 0x30));
    (*(undefined4 *)(gen_frame + 0xf0)) = (*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 *)(gen_frame + 0x104)) = (*(undefined4 *)(gen_frame + 0x34));
    (*(undefined4 *)(gen_frame + 0xf4)) = (*(undefined4 *)(gen_frame + 0x24));
    (*(undefined4 *)(gen_frame + 0x108)) = (*(undefined4 *)(gen_frame + 0x38));
    (*(undefined4 *)(gen_frame + 0xf8)) = (*(undefined4 *)(gen_frame + 0x28));
    (*(undefined4 *)(gen_frame + 0x10c)) = REFG(float, 0x1087f04);
    uVar2 = F_0055dcb0();
    uVar7 = (*(uint *)(gen_frame + 0x40)) & 0xffff;
    puVar3 = &(*(undefined4 *)(gen_frame + 0xd0));
    (*(undefined * PTR32 *)(gen_frame + 0x48)) = *(undefined * PTR32 *)(uVar2 + 4);
    uVar2 = uVar7;
    uVar4 = F_0055c5f0(*(int *)(this_00 + 8) + 0x1b3c);
    F_00567bb0((*(undefined * PTR32 *)(gen_frame + 0x48)),1,uVar4,uVar2,puVar3);
    F_0055b190((undefined *)this_00,(*(undefined * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x44)));
    uVar2 = F_0055dcb0();
    (*(undefined * PTR32 *)(gen_frame + 0x4c)) = *(undefined * PTR32 *)(uVar2 + 4);
    puVar3 = &REFG(undefined4, 0x1302d40);
    uVar2 = F_0055c5f0(*(int *)(this_00 + 8) + 0x1b3c);
    uVar2 = F_00567bb0((*(undefined * PTR32 *)(gen_frame + 0x4c)),0,uVar2,uVar7,puVar3);
  }
  else {
    uVar2 = F_0055b190((undefined *)this,param_1,param_2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120));
  return uVar2;
}

/* ref: Client::UI2::AddonActionBarBase::vf37 */
uint F_007efe80(unsigned int gen_a0)
{
  GEN_ENTER(0x7efe80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  uint local_c;
  int local_8;
  
  iVar1 = *(int *)(this + 400) - *(int *)(this + 0x18c) >> 0x1f;
  local_c = 0;
  if ((*(int *)(this + 400) - *(int *)(this + 0x18c)) / 0xd4 + iVar1 != iVar1) {
    local_8 = 0;
    do {
      iVar1 = *(int *)(this + 0x18c);
      if (*(int *)(iVar1 + local_8) != 0) {
        uVar3 = 0;
        do {
          iVar2 = *(int *)(iVar1 + local_8);
          this_00 = (undefined *)0x0;
          if (iVar2 != 0) {
            this_00 = *(undefined * PTR32 *)(iVar2 + 0x70);
          }
          F_005840a0(this_00,(&REFG(undefined4, 0x10c12c0))[uVar3],uVar3,this,0);
          uVar3 = uVar3 + 1;
        } while (uVar3 < 3);
      }
      local_c = local_c + 1;
      local_8 = local_8 + 0xd4;
    } while (local_c < (uint)((*(int *)(this + 400) - *(int *)(this + 0x18c)) / 0xd4));
  }
  F_00406b30(*(undefined4 *)(this + 0x1a4));
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonActionBarBase::vf38 */
uint F_007eff30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7eff30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  int in_ecx;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 extraout_var = 0;
  undefined * this;
  int iVar6;
  float fVar7;
  int * piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  F_005a2370(param_1,param_2);
  iVar6 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c);
  uVar5 = iVar6 * 0x4d4873ed;
  fVar3 = gen_bits2f(iVar6 / 0xd4);
  fVar7 = 0.0;
  (*(int *)(gen_frame + 0x8)) = param_1;
  if (fVar3 != 0.0) {
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x1a4);
      if (*(char *)((int)gen_fl2bits(fVar7) + uVar5) != '\0') {
        piVar8 = ((int *)GEN_TOP((*(int *)(param_1 + 0x18c) + (*(int *)(gen_frame + 0x8)))));
        iVar6 = *piVar8;
        if ((iVar6 != 0) && (uVar5 = F_00562fa0(iVar6), uVar5 == 0)) {
          *((undefined1 *)GEN_TOP(((int)gen_fl2bits(fVar7) + *(int *)(param_1 + 0x1a4)))) = 0;
          uVar5 = F_0059fd80((undefined *)*piVar8,4);
        }
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0xd4;
      fVar7 = gen_bits2f((int)gen_fl2bits(fVar7) + 1);
    } while ((uint)gen_fl2bits(fVar7) < (uint)gen_fl2bits(fVar3));
  }
  if (fVar3 != 0.0) {
    iVar6 = 0;
    param_2 = fVar3;
    do {
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x18c) + 0x10 + iVar6))) == 0) {
        uVar11 = 0xffffffd0;
        uVar10 = 0xffffffd0;
        uVar9 = 0x30;
      }
      else {
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
      }
      uVar4 = F_0055a170(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x18c) + 0xc + iVar6))),uVar9,uVar10,uVar11);
      uVar5 = CONCAT22(extraout_var,uVar4);
      iVar6 = iVar6 + 0xd4;
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + -1);
    } while (param_2 != 0.0);
  }
  if (*(char *)(param_1 + 0x19f) == '\0') {
    uVar5 = F_0055dcb0();
    cVar1 = *(char *)(uVar5 + 0xbc);
    uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar1);
    if ((*(char *)(param_1 + 0x1a0) != cVar1) && (*(char *)(param_1 + 0x1a0) = cVar1, fVar3 != 0.0))
    {
      iVar6 = 0;
      param_2 = fVar3;
      do {
        iVar2 = *(int *)(param_1 + 0x18c);
        in_ecx = *(int *)(iVar2 + 4 + iVar6);
        if ((in_ecx != 0) && (uVar5 = F_0055a2d0(in_ecx), (char)uVar5 == '\0')) {
          (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),*(undefined1 *)(param_1 + 0x1a0));
          this = (undefined *)0x0;
          if (*(int *)(iVar2 + iVar6) != 0) {
            this = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + iVar6) + 0x70)));
          }
          F_0055a300(this,(*(int *)(gen_frame + 0x8)));
          uVar5 = F_0055a300(*(undefined * PTR32 *)(iVar2 + 8 + iVar6),(uint)*(byte *)(param_1 + 0x1a0));
        }
        iVar6 = iVar6 + 0xd4;
        param_2 = gen_bits2f((int)gen_fl2bits(param_2) + -1);
      } while (param_2 != 0.0);
    }
  }
  return uVar5;
}

/* ref: Client::UI2::AddonActionBarBase::vf47 */
uint F_007f0080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f0080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  uint * puVar1;
  undefined * pvVar2;
  uint3 uVar6;
  undefined1 * puVar3;
  int iVar4;
  uint uVar5;
  int * piVar7;
  int iVar8;
  int iVar9;
  undefined1 AVar10;
  char * pcVar11;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  iVar8 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(this + 0x180);
  (*(int *)(gen_frame + 0x4c)) = *(int *)(param_2 + 0x14);
  (*(uint *)(gen_frame + 0x54)) = iVar4 * 0x30;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x50)) = iVar8;
  iVar9 = iVar4 * 0x90 + 5;
  if (this[0x1a1] == (undefined1)0x0) {
    AVar10 = (undefined1)(iVar4 == 0x12);
    uVar6 = (uint3)((uint)(iVar4 * 0x10) >> 8);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = AVar10;
    (*(int *)(gen_frame + 0x5c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3),AVar10);
    if ((bool)AVar10) {
      iVar9 = 0xa25;
      (*(uint *)(gen_frame + 0x54)) = 0x360;
    }
  }
  else {
    AVar10 = (undefined1)(*((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0x2d58))) != 0);
    uVar6 = (uint3)((uint)*(int *)(iVar8 + 0x20) >> 8);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = AVar10;
    (*(int *)(gen_frame + 0x5c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3),AVar10);
    this[0x1a2] = AVar10;
    if ((bool)AVar10) {
      iVar9 = 0xab5;
      (*(uint *)(gen_frame + 0x54)) = 0x390;
    }
  }
  this[0x1a3] = (undefined1)(*((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0x2d5c))) != 0);
  if (((bool)AVar10) && (this[0x1a1] == (undefined1)0x0)) {
    iVar4 = CONCAT31(uVar6,1);
  }
  else {
    iVar4 = (uint)uVar6 << 8;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this,iVar8,iVar4);
  ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,iVar8,(*(int *)(gen_frame + 0x5c)));
  (*(uint *)(gen_frame + 0x20)) = 0;
  if (*(int *)(this + 0x188) != 0) {
    (*(int *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x54)) * 4;
    (*(int *)(gen_frame + 0x5c)) = 0;
    iVar9 = iVar9 * 4 + 0x10;
    do {
      piVar7 = ((int *)GEN_TOP((*(int *)(this + 0x18c) + (*(int *)(gen_frame + 0x5c)))));
      (*(undefined1 * PTR32 *)(gen_frame + 0x58)) = (undefined1 *)piVar7[1];
      if ((undefined1 *)piVar7[1] != (undefined1 *)0x0) {
        puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x48)) + *(int *)((*(int *)(gen_frame + 0x4c)) + 0x20))));
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &REFG(undefined1, 0x10be763);
        }
        F_0042e430(piVar7 + 0x20,puVar3);
        puVar3 = *((undefined1 * PTR32 *)GEN_TOP((*(int *)(*piVar7 + 0xa4) + 0xb8)));
        (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = puVar3;
        uVar5 = *((uint *)GEN_TOP((iVar9 + -0x10 + *(int *)((*(int *)(gen_frame + 0x50)) + 0x20))));
        (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = *((undefined1 * PTR32 *)GEN_TOP((*(int *)(*piVar7 + 0xa4) + 0xbc)));
        (*(uint *)(gen_frame + 0x54)) = uVar5;
        if (uVar5 == 0) {
          F_0055a300(puVar3,0);
          F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x34)),0);
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*piVar7 + 0x84) + 0x30))))(*piVar7 + 0x84);
          F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x58)),0);
          F_00597570((undefined *)*piVar7);
        }
        else {
          iVar8 = *(int *)((*(int *)(gen_frame + 0x50)) + 0x20);
          (*(int *)(gen_frame + 0x28)) = *(int *)(iVar8 + -4 + iVar9);
          (*(int *)(gen_frame + 0x40)) = *(undefined4 *)(iVar8 + iVar9);
          (*(uint *)(gen_frame + 0x38)) = *(uint *)(iVar8 + 4 + iVar9);
          (*(int *)(gen_frame + 0x1c)) = *(int *)(iVar8 + 8 + iVar9);
          (*(int *)(gen_frame + 0x30)) = *(int *)(iVar8 + -0xc + iVar9);
          (*(int *)(gen_frame + 0x3c)) = *(int *)(iVar8 + -8 + iVar9);
          (*(int *)(gen_frame + 0x44)) = *(int *)(iVar8 + 0x10 + iVar9);
          F_0042cc20(((char * PTR32 *)(gen_frame + 0x68)),*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4c)) + 0x20) + 4 + (*(int *)(gen_frame + 0x48))))),
                       REFG(undefined4, 0x108cc50));
          uVar5 = F_0055a2d0((*(undefined1 * PTR32 *)(gen_frame + 0x58)));
          if ((char)uVar5 == '\0') {
            F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x58)),1);
          }
          *(uint *)(*piVar7 + 0x98) = (*(uint *)(gen_frame + 0x54));
          piVar7[6] = *(int *)(this + 0x180);
          piVar7[7] = (*(int *)(gen_frame + 0x28));
          F_00595560((undefined *)*piVar7,(*(int *)(gen_frame + 0x40)));
          F_0059fde0(*piVar7,(*(uint *)(gen_frame + 0x38)));
          F_00563050(*piVar7,(uint)((*(int *)(gen_frame + 0x1c)) != 0));
          iVar8 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x50)) + 0x20) + 0xc + iVar9)));
          (*(int *)(gen_frame + 0x40)) = iVar8;
          F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x64)),0);
          F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x34)),0);
          (*(char *)(gen_frame + 0x63)) = '\0';
          if ((*(int *)(gen_frame + 0x3c)) == 1) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x58)) = (*(undefined1 * PTR32 *)(gen_frame + 0x64));
            if ((((*(int *)(gen_frame + 0x30)) == 0) || (iVar8 == 0)) || (iVar8 == -1)) {
              (*(char *)(gen_frame + 0x63)) = '\x01';
            }
LAB_007f036e: ;
            if ((*(undefined1 * PTR32 *)(gen_frame + 0x58)) != (undefined1 *)0x0) {
              F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x58)),1);
              if (((*(int *)(gen_frame + 0x3c)) != 1) || ((*(char *)(gen_frame + 0x63)) == '\0')) {
                if (*((char * PTR32 *)(gen_frame + 0x68))[0] == '\0') {
                  uVar5 = F_005608e0(iVar8,((undefined1 *)(gen_frame + 0xbc)),0xc);
                }
                else {
                  uVar5 = F_0042a990(((char * PTR32 *)(gen_frame + 0x68)));
                }
                F_00584110((*(undefined1 * PTR32 *)(gen_frame + 0x58)),uVar5);
                if ((*(int *)(gen_frame + 0x3c)) != 1) goto LAB_007f04b2;
              }
              F_0055a200((*(undefined1 * PTR32 *)(gen_frame + 0x64)),(uint)(byte)((-((*(int *)(gen_frame + 0x1c)) != 0) & 0x7fU) + 0x80));
              if ((piVar7[5] != (*(int *)(gen_frame + 0x30))) || (piVar7[4] != (*(int *)(gen_frame + 0x44)))) {
                iVar8 = (*(int *)(gen_frame + 0x44));
                if (((*(uint *)(gen_frame + 0x54)) & 0x40) == 0) {
                  iVar8 = 1;
                  piVar7[4] = 1;
                }
                piVar7[5] = (*(int *)(gen_frame + 0x30));
                piVar7[4] = iVar8;
                if ((*(int *)(gen_frame + 0x30)) == 0) {
                  iVar4 = 1;
                }
                else if (iVar8 == 0) {
                  iVar4 = 1;
                }
                else {
                  iVar4 = (*(int *)(gen_frame + 0x30)) + 2;
                }
                F_004352a0(iVar4,&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x18)));
                uVar5 = F_005612d0((*(undefined4 *)(gen_frame + 0x2c)));
                F_0055aa30((*(undefined1 * PTR32 *)(gen_frame + 0x64)),uVar5);
                uVar5 = F_005612d0((*(undefined4 *)(gen_frame + 0x18)));
                F_0055ab90((*(undefined1 * PTR32 *)(gen_frame + 0x64)),uVar5);
                if ((*(char *)(gen_frame + 0x63)) != '\0') {
                  if (iVar8 == 0) {
                    pcVar11 = *((char * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4c)) + 0x20) + 0x1138)));
                  }
                  else {
                    pcVar11 = "";
                  }
                  F_00584110((*(undefined1 * PTR32 *)(gen_frame + 0x64)),pcVar11);
                }
              }
            }
          }
          else if ((*(int *)(gen_frame + 0x3c)) == 2) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x58)) = (*(undefined1 * PTR32 *)(gen_frame + 0x34));
            goto LAB_007f036e;
          }
LAB_007f04b2: ;
          (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x0;
          (*(int *)(gen_frame + 0x44)) = 0;
          uVar5 = 8;
          F_00560760(&(*(undefined4 *)(gen_frame + 0xc)));
          if ((*(uint *)(gen_frame + 0x54)) == 0x44) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0xe;
            uVar5 = 8;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x1004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0xf;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x2004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x10;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x80004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x11;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x100004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x12;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x400004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x13;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x800004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x14;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x1000004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x19;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x10004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x1;
            uVar5 = 4;
            (*(undefined2 *)(gen_frame + 0x14)) = (undefined2)(*(int *)(gen_frame + 0x40));
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x20004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = &REFG(undefined, 0xa);
            uVar5 = 4;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x8004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x1;
            uVar5 = 4;
            (*(undefined2 *)(gen_frame + 0x14)) = (undefined2)(*(int *)(gen_frame + 0x40));
          }
          else {
            (*(int *)(gen_frame + 0x44)) = 0xffffffff;
            uVar5 = 1;
          }
          (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x48)) + *(int *)((*(int *)(gen_frame + 0x4c)) + 0x20))));
          (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x28));
          (*(undefined1 *)(gen_frame + 0x16)) = (*(undefined1 *)((char *)&(*(undefined1 * PTR32 *)(gen_frame + 0x64)) + 0));
          (*(undefined1 *)(gen_frame + 0x17)) = (undefined1)(*(int *)(gen_frame + 0x44));
          F_005916c0((undefined *)*piVar7,uVar5 | 2,(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x24))[0x13a],&(*(undefined4 *)(gen_frame + 0xc)));
          F_0042c880(((char * PTR32 *)(gen_frame + 0x68)));
          this = (*(undefined * PTR32 *)(gen_frame + 0x24));
        }
      }
      (*(int *)(gen_frame + 0x5c)) = (*(int *)(gen_frame + 0x5c)) + 0xd4;
      (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 0xc;
      uVar5 = (*(uint *)(gen_frame + 0x20)) + 1;
      iVar9 = iVar9 + 0x24;
      (*(uint *)(gen_frame + 0x20)) = uVar5;
    } while (uVar5 < *(uint *)(this + 0x188));
  }
  iVar8 = (*(int *)(gen_frame + 0x50));
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,(*(int *)(gen_frame + 0x50)));
  iVar9 = *(int *)(this + 0x184);
  if (iVar9 == 0x12) {
    if ((*((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xc))) & 0x40000) != 0) {
      if (*(int *)(this + 0x188) != 0) {
        iVar9 = 0;
        (*(int *)(gen_frame + 0x5c)) = 0xd88;
        uVar5 = 0;
        do {
          pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 8 + iVar9)));
          if (pvVar2 != (undefined *)0x0) {
            F_00584110(pvVar2,*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4c)) + 0x20) + (*(int *)(gen_frame + 0x5c))))));
          }
          (*(int *)(gen_frame + 0x5c)) = (*(int *)(gen_frame + 0x5c)) + 0xc;
          uVar5 = uVar5 + 1;
          iVar9 = iVar9 + 0xd4;
        } while (uVar5 < *(uint *)(this + 0x188));
      }
      puVar1 = ((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x50)) + 0x20) + 0xc)));
      *puVar1 = *puVar1 & 0xfffbffff;
      iVar8 = (*(int *)(gen_frame + 0x50));
    }
  }
  else if ((iVar9 != -1) &&
          (uVar5 = 1 << ((byte)iVar9 & 0x1f), (*(uint *)(gen_frame + 0x38)) = uVar5,
          (*((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xc))) & uVar5) != 0)) {
    uVar5 = 0;
    if (*(int *)(this + 0x188) != 0) {
      iVar8 = 0;
      (*(int *)(gen_frame + 0x5c)) = iVar9 * 0xc0 + 8;
      do {
        pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 8 + iVar8)));
        if (pvVar2 != (undefined *)0x0) {
          F_00584110(pvVar2,*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4c)) + 0x20) + (*(int *)(gen_frame + 0x5c))))));
        }
        (*(int *)(gen_frame + 0x5c)) = (*(int *)(gen_frame + 0x5c)) + 0xc;
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + 0xd4;
      } while (uVar5 < *(uint *)(this + 0x188));
    }
    puVar1 = ((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x50)) + 0x20) + 0xc)));
    *puVar1 = *puVar1 & ~(*(uint *)(gen_frame + 0x38));
    iVar8 = (*(int *)(gen_frame + 0x50));
  }
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0x2d44)));
  if ((uVar5 == *(uint *)(this + 0x180)) &&
     (iVar9 = *((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0x2d48))), -1 < iVar9)) {
    F_0059fd80(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + iVar9 * 0xd4))),3);
    uVar5 = *(uint *)(this + 0x1a4);
    *(undefined1 *)(iVar9 + uVar5) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar5;
}

/* ref: FUN_007f07c0 */
uint F_007f07c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7f07c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  uVar1 = F_00561490(param_3,param_4);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 0x11)) {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0x84) + 0xc))))((int *)(uVar1 + 0x84));
  param_1[1] = uVar1;
  if (param_5 == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00561530(param_3,param_5);
  }
  param_1[2] = uVar1;
  if (*(undefined * PTR32 *)(*param_1 + 0xa4) != (undefined *)0x0) {
    uVar1 = F_00561490(*(undefined * PTR32 *)(*param_1 + 0xa4),0xb);
    param_1[3] = uVar1;
  }
  uVar1 = 0;
  do {
    uVar2 = *param_1;
    pvVar3 = (undefined *)0x0;
    if (uVar2 != 0) {
      pvVar3 = *(undefined * PTR32 *)(uVar2 + 0x70);
    }
    F_005840a0(pvVar3,*(undefined4 *)((int)&REFG(undefined4, 0x10c12c0) + uVar1),(uint)*(ushort *)(uVar2 + 0x9c),
                 this,0);
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0xc);
  *(short *)(*param_1 + 0x9c) = (short)param_2;
  *(undefined4 *)(*param_1 + 0x98) = 0x1f8bd74;
  *(byte *)(*param_1 + 0xaa) = *(byte *)(*param_1 + 0xaa) | 4;
  *(byte *)(*param_1 + 0xaa) = *(byte *)(*param_1 + 0xaa) & 0xfd;
  uVar1 = 0;
  do {
    if (*param_1 == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(*param_1 + 0x70);
    }
    uVar2 = F_00568380(pvVar3,*(undefined4 *)((int)&REFG(undefined4, 0x10c12c0) + uVar1),param_2,this,0,0);
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0xc);
  return uVar2;
}

/* ref: Client::UI2::AddonActionBarBase::vf63 */
unsigned int F_007f08e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f08e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  this[0x19c] = (undefined1)(*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) == 1);
  if (*(int *)(this + 0x188) != 0) {
    iVar4 = 0;
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x18c) + 4 + iVar4))) != 0) {
        if ((this[0x19c] == (undefined1)0x0) && ((char)param_2 == '\0')) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x18c) + iVar4)));
        pbVar1 = (byte *)(iVar2 + 0xaa);
        *pbVar1 = *pbVar1 ^ (cVar3 * '\x02' ^ *(byte *)(iVar2 + 0xaa)) & 2;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xd4;
    } while (uVar5 < *(uint *)(this + 0x188));
  }
  return 0;
}

/* ref: Client::UI2::AddonActionBarBase::vf64 */
unsigned int F_007f0960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f0960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int in_ecx;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)(param_1 + 0x20);
  iVar2 = 0;
  param_1 = 0;
  this[0x19f] = (undefined1)(*(int *)(*piVar3 + 0x2d4c) != 0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)(this + 0x188) != 0) {
    do {
      in_ecx = *((int *)GEN_TOP((*(int *)(this + 0x18c) + 4 + iVar2)));
      piVar3 = ((int *)GEN_TOP((*(int *)(this + 0x18c) + iVar2)));
      if (((in_ecx == 0) || (uVar1 = F_0055a2d0(in_ecx), (char)uVar1 == '\0')) &&
         (this[0x1a0] == (undefined1)0x0)) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3),this[0x19f])));
        this_00 = (undefined *)0x0;
        if (*piVar3 != 0) {
          this_00 = *(undefined * PTR32 *)(*piVar3 + 0x70);
        }
        F_0055a300(this_00,(*(undefined * PTR32 *)(gen_frame + 0x8)));
        uVar1 = (uint)(byte)this[0x19f];
      }
      else if (*piVar3 == 0) {
        F_0055a300((undefined *)0x0,1);
        uVar1 = 1;
      }
      else {
        F_0055a300(*(undefined * PTR32 *)(*piVar3 + 0x70),1);
        uVar1 = 1;
      }
      F_0055a300((undefined *)piVar3[2],uVar1);
      param_1 = param_1 + 1;
      iVar2 = iVar2 + 0xd4;
    } while (param_1 < *(uint *)(this + 0x188));
  }
  return 0;
}

/* ref: Client::UI2::AddonActionBarBase::vf66 */
uint F_007f0a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f0a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  F_00557670(param_2,0);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  if (*(char *)(param_3 + 8) == '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x114))(this,*(undefined4 *)(this + 0x180),param_1);
    return uVar1;
  }
  uVar1 = param_3;
  if (this[0x19c] == (undefined1)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x118))(this,param_1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarBase::vf67 */
uint F_007f0aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f0aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * puVar6;
  undefined4 uVar7;
  
  F_00557670(param_2,0);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  piVar1 = (int *)*param_3;
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (param_3[1] != 0) {
    param_2 = F_00559c20(param_3[1]);
    if (param_2 != 0) {
      uVar2 = F_005613a0(param_2);
      if (uVar2 == 0x11) goto LAB_007f0af6;
    }
  }
  param_2 = 0;
LAB_007f0af6: ;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_2 + 0x84) + 0xc))))(param_2 + 0x84);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  puVar6 = ((uint *)GEN_TOP((param_1 * 0xd4 + *(int *)(this + 0x18c))));
  if ((*(int *)(this + 0x180) == 0x12) ||
     ((this[0x1a1] != (undefined1)0x0 && (this[0x1a2] != (undefined1)0x0)))) {
    uVar5 = F_0078f890(this,0x1c8);
  }
  else {
    if ((*(byte *)(piVar1 + 5) & 4) == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      uVar2 = puVar4[1];
      if ((*(byte *)(piVar1 + 5) & 0x10) != 0) {
        uVar2 = F_00760440(*puVar4);
        uVar2 = uVar2 << 0x10 | puVar4[1];
      }
      uVar2 = F_0078f910(this,*(undefined4 *)(this + 0x180),(uint)*(ushort *)(*puVar6 + 0x9c),
                           piVar1[5],uVar2);
      return uVar2;
    }
    if ((*(int *)(this + 0x180) != *piVar3) ||
       (uVar5 = *puVar6, (short)piVar1[6] != *(short *)(uVar5 + 0x9c))) {
      uVar2 = F_0055a2d0(uVar2);
      if ((char)uVar2 == '\0') {
        uVar2 = 0;
        uVar7 = 0;
      }
      else {
        uVar2 = puVar6[7];
        uVar7 = *(undefined4 *)(param_2 + 0x98);
      }
      F_0078f910(this,*piVar3,(uint)*(ushort *)(piVar1 + 6),uVar7,uVar2);
      uVar2 = F_0078f910(this,*(undefined4 *)(this + 0x180),(uint)*(ushort *)(*puVar6 + 0x9c),
                           piVar1[5],piVar3[1]);
      return uVar2;
    }
  }
  return uVar5;
}

/* ref: Client::UI2::AddonActionBarBase::vf68 */
uint F_007f0c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f0c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  F_00557670(param_2,0);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  piVar1 = (int *)*param_3;
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  iVar4 = (uint)*(ushort *)(piVar1 + 6) * 0xd4 + *(int *)(this + 0x18c);
  fVar5 = gen_bits2f(REFG(uint, 0x10a007c) ^ REFG(uint, 0x10920d0));
  fVar6 = (float)(float10)0;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  uVar3 = F_00559da0(uVar3,fVar6,fVar5);
  *puVar2 = *(undefined4 *)(iVar4 + 0x18);
  puVar2[1] = *(undefined4 *)(iVar4 + 0x1c);
  return uVar3;
}

/* ref: Client::UI2::AddonActionBar::vf37 */
uint F_007f0cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f0cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBar::vf2 */
uint F_007f0cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f0cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = F_0078f270((undefined *)this,param_1,param_2,param_3,param_4);
  if ((short)param_1 == 0x17) {
    if (param_2 == 2) {
      this[0x19c] = (undefined1)(this[0x19c] == (undefined1)0x0);
      uVar1 = F_0078f710(this);
    }
    else {
      if (param_2 == 4) {
        *(uint *)(this + 0x180) =
             -(uint)(*(int *)(this + 0x180) + 1U < 10) & *(int *)(this + 0x180) + 1U;
        ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this);
        iVar2 = *(int *)this;
        uVar1 = F_0055dcb0();
        uVar1 = F_0055b9a0(uVar1);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        ((code *)*(gen_code32 *)(iVar2 + 0xbc))(this,uVar3,uVar1);
        uVar1 = F_0078f5b0(this);
        return uVar1;
      }
      uVar1 = param_2 - 6;
      if (uVar1 == 0) {
        if (*(int *)(this + 0x180) == 0) {
          iVar2 = 9;
        }
        else {
          iVar2 = *(int *)(this + 0x180) + -1;
        }
        *(int *)(this + 0x180) = iVar2;
        ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this);
        iVar2 = *(int *)this;
        uVar1 = F_0055dcb0();
        uVar1 = F_0055b9a0(uVar1);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        ((code *)*(gen_code32 *)(iVar2 + 0xbc))(this,uVar3,uVar1);
        uVar1 = F_0078f5b0(this);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonActionBar::vf47 */
unsigned int F_007f0e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f0e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 0x14);
  F_0059dde0(*(undefined * PTR32 *)(this + 0x1b0),
               (uint)(*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x20))) + 4))) == 1));
  F_00560760(((undefined4 *)(gen_frame + 0x0)));
  AVar1 = this[0x13a];
  ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xf00)));
  uVar3 = F_0055dcb0();
  F_00590ad0((undefined *)(uVar3 + 0xe0),2,(uint)(byte)AVar1,*(undefined4 *)(this + 0x1ac),((undefined4 *)(gen_frame + 0x0)));
  F_007f0080((undefined *)this,param_1,param_2);
  return 0;
}

/* ref: Client::UI2::AddonActionBar::vf65 */
uint F_007f0e90(unsigned int gen_a0)
{
  GEN_ENTER(0x7f0e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x19d] != (undefined1)0x0) {
    uVar1 = F_004352e0(*(int *)(this + 0x180) + 1);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  uVar1 = F_00435340(*(int *)(this + 0x180) + 1);
  uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonPartyList::vf44 */
uint F_007f0ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f0ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char * pcVar10;
  undefined4 uVar11;
  float fVar12;
  undefined * local_c;
  undefined * local_8;
  
  iVar4 = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  pvVar1 = (undefined *)F_0055e2f0(this,0x15);
  *(undefined * PTR32 *)(this + 0x1a4) = pvVar1;
  F_0055a300(pvVar1,0);
  uVar2 = F_0055e2f0(this,2);
  *(uint *)(this + 0x1a8) = uVar2;
  local_c = this + 0x180;
  do {
    uVar2 = F_0055e2f0(this,iVar4 + 0xc);
    pvVar1 = (undefined *)F_00559c20(uVar2);
    *(undefined * PTR32 *)local_c = pvVar1;
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_0055a300(pvVar3,0);
    pcVar10 = "";
    pvVar3 = (undefined *)F_00561530(pvVar1,10);
    F_00584110(pvVar3,pcVar10);
    uVar2 = F_00561490(pvVar1,0x11);
    if (((uVar2 == 0) || (local_8 = (undefined *)F_00559c20(uVar2), local_8 == (undefined *)0x0)) ||
       (uVar2 = F_005613a0(local_8), uVar2 != 5)) {
      local_8 = (undefined *)0x0;
    }
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    pvVar3 = (undefined *)F_00561530(local_8,2);
    F_0057eb30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar11);
    F_005a04e0(local_8,0,1);
    uVar2 = F_00561490(pvVar1,0x12);
    if (((uVar2 == 0) || (local_8 = (undefined *)F_00559c20(uVar2), local_8 == (undefined *)0x0)) ||
       (uVar2 = F_005613a0(local_8), uVar2 != 5)) {
      local_8 = (undefined *)0x0;
    }
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    pvVar3 = (undefined *)F_00561530(local_8,2);
    F_0057eb30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar11);
    F_005a04e0(local_8,0,1);
    uVar6 = 0;
    pvVar3 = (undefined *)F_00561490(pvVar1,0xb);
    F_0055a300(pvVar3,uVar6);
    fVar12 = (float)(float10)0;
    uVar2 = F_00561490(pvVar1,0xc);
    F_00568230(uVar2,fVar12);
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_00568380(pvVar3,6,iVar4,this,0,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_00568380(pvVar3,7,iVar4,this,0,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_00568380(pvVar3,0x17,iVar4,this,0,0);
    F_00568380(*(undefined * PTR32 *)((int)pvVar1 + 0x68),3,iVar4,this,0,0);
    uVar6 = 0;
    pvVar1 = (undefined *)F_00561550(pvVar1,0x10);
    F_0055a300(pvVar1,uVar6);
    local_c = local_c + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  uVar2 = F_0055e2f0(this,10);
  if (((uVar2 == 0) || (pvVar1 = (undefined *)F_00559c20(uVar2), pvVar1 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar1), uVar2 != 5)) {
    pvVar1 = (undefined *)0x0;
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
  }
  F_0055a300(pvVar3,0);
  uVar11 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  pvVar3 = (undefined *)F_00561530(pvVar1,2);
  F_0057eb30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar11);
  F_005a04e0(pvVar1,0,1);
  uVar2 = F_0055e2f0(this,0x14);
  uVar2 = F_00559c20(uVar2);
  *(uint *)(this + 0x1a0) = uVar2;
  pvVar1 = (undefined *)0x0;
  if (uVar2 != 0) {
    pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_0055a300(pvVar1,0);
  if (*(int *)(this + 0x1a0) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar1,6,8,this,0,0);
  pvVar1 = (undefined *)0x0;
  if (*(int *)(this + 0x1a0) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar1,7,8,this,0,0);
  if (*(int *)(this + 0x1a0) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar1,0x17,8,this,0,0);
  F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x68))),3,8,this,0,0);
  pvVar1 = (undefined *)F_0055e2f0(this,3);
  F_0055a300(pvVar1,0);
  uVar2 = F_0055dcb0();
  pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x30);
  iVar4 = 0;
  pAVar5 = this + 0x1ac;
  do {
    uVar2 = F_0055e2f0(this,9 - iVar4);
    uVar2 = F_00559c20(uVar2);
    *(uint *)pAVar5 = uVar2;
    F_0059d640(*(undefined * PTR32 *)(uVar2 + 0x6c),7);
    uVar2 = F_0043bd00(pvVar1,(&REFG(undefined4, 0x10d57d4))[iVar4],0,0);
    pvVar3 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar5,2);
    F_00584110(pvVar3,uVar2);
    iVar4 = iVar4 + 1;
    pAVar5 = pAVar5 + 4;
  } while (iVar4 < 6);
  F_005a91d0(this,1,4);
  uVar2 = F_005a91d0(this,0,3);
  return uVar2;
}

/* ref: FUN_007f1240 */
unsigned int F_007f1240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  ushort local_8;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0x20);
  bVar8 = piVar1[0x1d1] != 0;
  iVar2 = piVar1[7];
  iVar3 = *piVar1;
  if (((*(int *)((int)this + 0x1fc) != iVar3) || (*(int *)((int)this + 0x204) != iVar2)) ||
     ((bool)*(char *)((int)this + 0x211) != bVar8)) {
    if (iVar3 < 1) {
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a4),0);
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a8),0);
      uVar7 = 0;
      pvVar6 = (undefined *)F_00561530(*(undefined * PTR32 *)((int)this + 0x180),4);
      F_0055a300(pvVar6,uVar7);
    }
    else if (((iVar3 != 1) || (iVar2 == 0)) || (bVar8)) {
      *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xef;
      F_0055e2a0(this,0x2000000,0);
      ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
      piVar1 = *(int * PTR32 *)(param_1 + 0x20);
      iVar4 = piVar1[0x1d1];
      local_8 = (ushort)(iVar4 != 0);
      if (((*piVar1 != 1) || (iVar4 == 0)) || (piVar1[7] == 0)) {
        local_8 = (short)*piVar1 + (ushort)(iVar4 != 0);
      }
      if (*(int *)((int)this + 0x184) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x184) + 0x70)));
      }
      fVar9 = F_00559d80(uVar7);
      uVar7 = 0;
      if (*(int *)((int)this + 0x180) != 0) {
        uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70)));
      }
      fVar10 = F_00559d80(uVar7);
      uVar7 = 0;
      if (*(int *)((int)this + 0x180) != 0) {
        uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70)));
      }
      uVar5 = F_0055a030(uVar7);
      F_0055a080(*(undefined4 *)((int)this + 0x1a4),
                   (uint)(ushort)(uVar5 + ((short)(int)fVar9 - (short)(int)fVar10) * (local_8 - 1) +
                                 8));
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a4),1);
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a8),1);
      F_00584110(*(undefined * PTR32 *)((int)this + 0x1a8),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x264))));
      uVar7 = 1;
      pvVar6 = (undefined *)F_00561530(*(undefined * PTR32 *)((int)this + 0x180),4);
      F_0055a300(pvVar6,uVar7);
    }
    else {
      *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x10;
      F_0055e2a0(this,0x2000000,1);
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
    }
    *(int *)((int)this + 0x1fc) = iVar3;
    *(int *)((int)this + 0x204) = iVar2;
    *(bool *)((int)this + 0x211) = bVar8;
  }
  return 0;
}

/* ref: FUN_007f1420 */
uint F_007f1420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_0055e2f0(this,3);
  if (*(int *)((int)this + 0x1fc) < 2) {
    uVar1 = F_0055a300(this_00,0);
    return uVar1;
  }
  F_0055a300(this_00,1);
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20)));
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x6c))),(-(uint)((uVar1 & 2) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x6c))),(-(uint)((uVar1 & 4) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1b4) + 0x6c))),(-(uint)((uVar1 & 8) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1b8) + 0x6c))),
               (-(uint)((uVar1 & 0x10) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1bc) + 0x6c))),
               (-(uint)((uVar1 & 0x20) != 0) & 10) + 7);
  uVar1 = F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c0) + 0x6c))),
                       (-(uint)((uVar1 & 0x40) != 0) & 10) + 7);
  return uVar1;
}

/* ref: FUN_007f1530 */
uint F_007f1530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  undefined2 uVar8;
  short * psVar9;
  int local_14;
  undefined4 * local_10;
  int local_8;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  iVar5 = *(int *)(uVar2 + 0x10);
  iVar1 = **(int * PTR32 *)(iVar5 + 0x20);
  *(undefined4 *)((int)this + 0x20c) = 0xffffffff;
  local_8 = 0;
  if (0 < iVar1) {
    local_10 = (undefined4 *)((int)this + 0x180);
    local_14 = 0x6c;
    psVar9 = (short *)((int)this + 0x1c4);
    do {
      pvVar4 = (undefined *)*local_10;
      this_00 = (undefined *)F_00561490(pvVar4,0x18);
      if (pvVar4 == (undefined *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((int)pvVar4 + 0x70);
      }
      uVar2 = F_0055a2d0(uVar6);
      if ((char)uVar2 != '\0') {
        iVar3 = *((int *)GEN_TOP((local_14 + *(int *)(iVar5 + 0x20))));
        if ((iVar3 == param_1) && (iVar3 != -0x20000000)) {
          if ((iVar3 == param_2) || (local_8 == *(int *)((int)this + 0x208))) {
            if (*psVar9 != 0x69) {
              sVar7 = 0x69;
              iVar3 = (*psVar9 == 0x67) + 0x69;
              goto LAB_007f1607;
            }
          }
          else if (*psVar9 != 0x67) {
            sVar7 = 0x67;
            iVar3 = (*psVar9 == 0x69) + 0x67;
LAB_007f1607: ;
            *psVar9 = sVar7;
            F_0059d640(this_00,iVar3);
          }
          *(int *)((int)this + 0x20c) = local_8;
        }
        else if (((iVar3 == param_2) || (local_8 == *(int *)((int)this + 0x208))) &&
                (iVar3 != -0x20000000)) {
          if (*psVar9 != 0x65) {
            *psVar9 = 0x65;
            F_0059d640(this_00,0x65);
          }
        }
        else {
          *psVar9 = 0x11;
          F_0059d670(this_00,0x11);
        }
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x4c;
      local_8 = local_8 + 1;
      psVar9 = psVar9 + 1;
    } while (local_8 < iVar1);
  }
  uVar6 = 0;
  if (*(int *)((int)this + 0x1a0) != 0) {
    uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x70)));
  }
  uVar2 = F_0055a2d0(uVar6);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  pvVar4 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x1a0),0x14);
  iVar5 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0x790)));
  if ((iVar5 != param_1) || (iVar5 == -0x20000000)) {
    if (((iVar5 == param_2) || (*(int *)((int)this + 0x208) == 8)) && (iVar5 != -0x20000000)) {
      if (*(short *)((int)this + 0x1d4) == 0x65) {
        return (uint)pvVar4;
      }
      *(undefined2 *)((int)this + 0x1d4) = 0x65;
      uVar2 = F_0059d640(pvVar4,0x65);
      return uVar2;
    }
    *(undefined2 *)((int)this + 0x1d4) = 0x11;
    uVar2 = F_0059d670(pvVar4,0x11);
    return uVar2;
  }
  if ((iVar5 == param_2) || (*(int *)((int)this + 0x208) == 8)) {
    if (*(short *)((int)this + 0x1d4) == 0x69) goto LAB_007f1715;
    uVar8 = 0x69;
    iVar5 = (*(short *)((int)this + 0x1d4) == 0x67) + 0x69;
  }
  else {
    if (*(short *)((int)this + 0x1d4) == 0x67) goto LAB_007f1715;
    uVar8 = 0x67;
    iVar5 = (*(short *)((int)this + 0x1d4) == 0x69) + 0x67;
  }
  *(undefined2 *)((int)this + 0x1d4) = uVar8;
  pvVar4 = (undefined *)F_0059d640(pvVar4,iVar5);
LAB_007f1715: ;
  *(undefined4 *)((int)this + 0x20c) = 8;
  return (uint)pvVar4;
}

/* ref: FUN_007f1780 */
uint F_007f1780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f1780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  uVar1 = param_1;
  if (7 < param_1) {
    uVar1 = 0x13;
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  *(uint *)((int)this + 0x208) = param_1;
  pvVar2 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x180);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((int)pvVar2 + 0x70);
  }
  uVar1 = F_0055a2d0(uVar3);
  if ((char)uVar1 != '\0') {
    if (*(int *)((int)this + 0x208) < 8) {
      uVar3 = 0x18;
    }
    else {
      uVar3 = 0x14;
    }
    pvVar2 = (undefined *)F_00561490(pvVar2,uVar3);
    F_0059d640(pvVar2,(-(uint)(*(int *)((int)this + 0x20c) != *(int *)((int)this + 0x208)) &
                        0xfffffffb) + 0x6a);
  }
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: FUN_007f1830 */
uint F_007f1830(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x208) * 4 + 0x180)));
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((int)pvVar2 + 0x70);
  }
  uVar1 = F_0055a2d0(uVar3);
  if ((char)uVar1 != '\0') {
    if (*(int *)((int)this + 0x208) < 8) {
      uVar3 = 0x18;
    }
    else {
      uVar3 = 0x14;
    }
    pvVar2 = (undefined *)F_00561490(pvVar2,uVar3);
    F_0059d640(pvVar2,(-(uint)(*(int *)((int)this + 0x20c) != *(int *)((int)this + 0x208)) &
                        0xffffffa9) + 0x68);
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  *(undefined4 *)((int)this + 0x208) = 0xffffffff;
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: Client::UI2::AddonToDoList::vf44 */
uint F_007f18e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f18e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(this + 0xa0) = 0;
  uVar2 = 0;
  do {
    uVar3 = 0;
    this_00 = (undefined *)F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c7174) + uVar2));
    F_0055a300(this_00,uVar3);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x20);
  F_005a91d0(this,1,0x1b);
  F_005a91d0(this,0,0x18);
  uVar2 = F_0055dcb0();
  piVar1 = (int *)F_0055b990(uVar2);
  uVar2 = *((int *)GEN_TOP((*(int *)(*piVar1 + 0x20) + 0x44))) - 1;
  if (uVar2 < 3) {
    *(undefined2 *)(this + 0x3b4) = 0x2d;
    return uVar2;
  }
  *(undefined2 *)(this + 0x3b4) = 0x18;
  return 0x18;
}

/* ref: FUN_007f1970 */
unsigned int F_007f1970(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  int local_8;
  
  F_007905e0(this);
  uVar1 = F_0055dcb0();
  F_00567340(*(undefined * PTR32 *)(uVar1 + 0x18),this,1);
  pvVar5 = this;
  pvVar2 = (undefined *)F_0055dcb0();
  F_0055ba60(pvVar2,pvVar5);
  pvVar5 = (undefined *)((int)this + 0x24);
  F_00590210(pvVar5,4,0);
  F_00590210(pvVar5,5,0);
  F_00590210(pvVar5,4,2000);
  F_00590210(pvVar5,7,2000);
  F_00590210(pvVar5,4,1000);
  F_00590210(pvVar5,5,1000);
  F_00590210(pvVar5,9,1000);
  F_00590210(pvVar5,2,1000);
  F_00590210(pvVar5,3,1000);
  local_8 = 0;
  do {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      pvVar2 = (undefined *)F_00578f50(pvVar5,7,iVar3,local_8);
      if (pvVar2 != (undefined *)0x0) {
        F_0055a300(pvVar2,1);
        pvVar2 = (undefined *)F_00559c20(pvVar2);
        if ((pvVar2 != (undefined *)0x0) && (uVar1 = F_00561490(pvVar2,9), uVar1 != 0)) {
          uVar4 = F_0055dcb0();
          F_00596b10((undefined *)(uVar4 + 0xe0),uVar1);
        }
      }
    } while (iVar3 < 10);
    F_00590210(pvVar5,7,local_8);
    F_00590210(pvVar5,8,local_8);
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      pvVar2 = (undefined *)F_00578f50(pvVar5,7,iVar3,local_8 + 1000);
      if (pvVar2 != (undefined *)0x0) {
        F_0055a300(pvVar2,1);
        pvVar2 = (undefined *)F_00559c20(pvVar2);
        if ((pvVar2 != (undefined *)0x0) && (uVar1 = F_00561490(pvVar2,9), uVar1 != 0)) {
          uVar4 = F_0055dcb0();
          F_00596b10((undefined *)(uVar4 + 0xe0),uVar1);
        }
      }
    } while (iVar3 < 10);
    F_00590210(pvVar5,7,local_8 + 1000);
    F_00590210(pvVar5,8,local_8 + 1000);
    local_8 = local_8 + 100;
  } while (local_8 < 500);
  return 0;
}

/* ref: Client::UI2::AddonToDoList::vf38 */
uint F_007f1b30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f1b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x3a8), iVar1 != 0)) {
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x90),
                 (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) & 0xfffffff0U) != 0));
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonToDoList::vf2 */
uint F_007f1b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f1b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_1 & 0xffff;
  puVar3 = (undefined4 *)(uVar2 - 6);
  if (puVar3 < (undefined4 *)0x12) {
    puVar3 = (undefined4 *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7f1c9c) + uVar2 + 2)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 6: ;
      uVar2 = F_0055dcb0();
      F_005aa060((undefined *)(uVar2 + 0x20c),0xb,0);
      *(undefined1 *)(uVar2 + 0x21b) = 1;
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 7: ;
      uVar2 = F_0055dcb0();
      *(undefined1 *)(uVar2 + 0x21b) = 0;
      uVar2 = F_005aa060((undefined *)(uVar2 + 0x20c),0,0);
      return uVar2;
    case 8: ;
    case 0x17: ;
      F_00790540(this,0,param_3,param_4);
      uVar2 = F_0055dcb0();
      puVar3 = (undefined4 *)F_00594ca0(*(undefined * PTR32 *)(uVar2 + 0x14),this);
      break;
    case 9: ;
      puVar1 = (undefined4 *)*param_3;
      puVar3 = param_3;
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 3: ;
        uVar2 = F_00790300(this,*puVar1,param_3,param_4);
        return uVar2;
      case 4: ;
        uVar2 = F_00790370(this,*puVar1,param_3,param_4);
        return uVar2;
      case 5: ;
        uVar2 = F_00790420(this,*puVar1,param_3,param_4);
        return uVar2;
      case 6: ;
        uVar2 = F_007904d0(this,*puVar1,param_3,param_4);
        return uVar2;
      case 7: ;
        uVar2 = F_007905b0(this);
        return uVar2;
      }
    }
  }
  return (uint)puVar3;
}

/* ref: Client::UI2::AddonActionBarHorizontal::vf37 */
uint F_007f1cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarHorizontal::vf65 */
uint F_007f1d00(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_0055dcb0();
  if (*(int *)(this + 0x180) == 0x12) {
    uVar1 = F_0043bd00(*(undefined * PTR32 *)(uVar1 + 0x30),0x3f4,0,0);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  iVar2 = *(int *)(this + 0x180) + 1;
  if (this[0x19d] != (undefined1)0x0) {
    uVar1 = F_004352e0(iVar2);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  uVar1 = F_00435340(iVar2);
  uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarVertical::vf37 */
uint F_007f1d70(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarVertical::vf65 */
uint F_007f1da0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x19d] != (undefined1)0x0) {
    uVar1 = F_004352e0(*(int *)(this + 0x180) + 1);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  uVar1 = F_00435340(*(int *)(this + 0x180) + 1);
  uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonActionCross::vf36 */
byte F_007f1de0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_0055dc60((undefined *)this);
  F_0055b850(this + 0x400,0x120000);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)(this + 0x4dc) = 0;
  *(undefined4 *)(this + 0x4e0) = 0;
  *(undefined4 *)(this + 0x4e4) = 0;
  *(undefined4 *)(this + 0x4f4) = uVar1;
  *(undefined4 *)(this + 0x4f8) = uVar1;
  *(undefined4 *)(this + 0x400) = 0;
  *(undefined4 *)(this + 0x404) = 0;
  *(undefined4 *)(this + 0x408) = 0;
  *(undefined4 *)(this + 0x518) = 0x80000000;
  this[0x521] = (undefined1)0x0;
  return 0;
}

/* ref: Client::UI2::AddonActionCross::vf37 */
uint F_007f1e60(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonActionCross::vf38 */
uint F_007f1e90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f1e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  F_007eff30(param_1,param_2);
  uVar1 = F_0055dcb0();
  fVar2 = (float10)*(int *)(uVar1 + 0x234);
  if (*(int *)(uVar1 + 0x234) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(param_1 + 0x510) = (float)fVar2;
  uVar1 = F_0055dcb0();
  fVar2 = (float10)*(int *)(uVar1 + 0x238);
  if (*(int *)(uVar1 + 0x238) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(param_1 + 0x514) = (float)fVar2;
  return uVar1;
}

/* ref: Client::UI2::AddonActionCross::vf39 */
unsigned int F_007f1ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00790780(this);
  F_00579170((undefined *)this);
  return 0;
}

/* ref: Client::UI2::AddonActionCross::vf63 */
uint F_007f1f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  this[0x19c] = (undefined1)(*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x2d3c))) != 0);
  if (*(int *)(this + 0x188) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x18c) + iVar3)));
      if (iVar1 != 0) {
        if ((this[0x19c] == (undefined1)0x0) && ((char)param_2 == '\0')) {
          cVar2 = '\0';
        }
        else {
          cVar2 = '\x01';
        }
        *(byte *)(iVar1 + 0xaa) =
             *(byte *)(iVar1 + 0xaa) ^ (cVar2 * '\x02' ^ *(byte *)(iVar1 + 0xaa)) & 2;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0xd4;
    } while (uVar4 < *(uint *)(this + 0x188));
  }
  uVar4 = F_0059dde0(*(undefined * PTR32 *)(this + 0x27c),(uint)(byte)this[0x19c]);
  return uVar4;
}

/* ref: Client::UI2::AddonFocusTargetInfo::vf37 */
uint F_007f1fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,9,0);
  F_005a92d0(this,0,8,0);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),3,0,this,0);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),6,0,this,0);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),7,0,this,0);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90),9,0,this,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFocusTargetInfo::vf47 */
uint F_007f2010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2010u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  int * piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar9 = *(int *)((*(uint *)&gen_args[1]) + 0x24);
  iVar10 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x168)));
  piVar8 = (int *)((*(int *)&gen_args[2]) + 0x20);
  (*(int *)(gen_frame + 0x18)) = iVar9;
  (*(int *)(gen_frame + 0x10)) = *piVar8;
  (*(int *)&gen_args[2]) = iVar10;
  if (iVar10 == 0) {
    uVar5 = (uint)(*(int * PTR32 *)&gen_args[0])[0x3d] >> 0x14 & 0xf;
    if ((uVar5 == 3) || (uVar5 == 2)) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]),0,0);
    }
    (*(int * PTR32 *)&gen_args[0])[0x67] = 0;
    return uVar5;
  }
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = (*(int * PTR32 *)&gen_args[0])[0x67] != iVar10;
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),(*(int * PTR32 *)&gen_args[0])[0x67] != iVar10);
  F_00584110(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x60])),*((undefined4 *)GEN_TOP((*(int *)(*piVar8 + 0x20) + 0x144))));
  uVar12 = 0;
  uVar11 = 0;
  uVar6 = REFG(undefined4, 0x108cc50);
  uVar5 = F_0055aaf0((*(int * PTR32 *)&gen_args[0])[0x60]);
  F_00577d20(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x60])),&(*(undefined4 *)(gen_frame + 0x14)),&(*(uint *)&gen_args[1]),uVar5,uVar11,uVar6,uVar12);
  F_0055a060((*(int * PTR32 *)&gen_args[0])[0x61],(*(undefined4 *)(gen_frame + 0x14)));
  uVar5 = F_0055e320((*(int * PTR32 *)&gen_args[0]));
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = *(undefined4 *)(uVar5 + 0x70);
  }
  uVar3 = F_0055a030(uVar6);
  uVar4 = F_00559d70((*(int * PTR32 *)&gen_args[0])[0x61]);
  (*(uint *)(gen_frame + 0xc)) = (uint)(ushort)(uVar4 + (short)(*(undefined4 *)(gen_frame + 0x14)));
  uVar5 = F_0055e320((*(int * PTR32 *)&gen_args[0]));
  pvVar7 = (undefined *)0x0;
  if (uVar5 != 0) {
    pvVar7 = *(undefined * PTR32 *)(uVar5 + 0x70);
  }
  F_0055a040(pvVar7,(*(uint *)(gen_frame + 0xc)),(uint)uVar3);
  iVar10 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x174)));
  pvVar7 = (undefined *)0x0;
  if ((*(int * PTR32 *)&gen_args[0])[0x65] != 0) {
    pvVar7 = *((undefined * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[0x65] + 0x70)));
  }
  F_0055a300(pvVar7,(uint)(0 < iVar10));
  uVar6 = 0;
  if ((*(int * PTR32 *)&gen_args[0])[0x65] != 0) {
    uVar6 = *((undefined4 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[0x65] + 0x70)));
  }
  uVar5 = F_0055a2d0(uVar6);
  if ((char)uVar5 != '\0') {
    F_005a04e0(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x65])),iVar10,(*(int *)(gen_frame + 0x8)));
  }
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x184)));
  if (uVar5 != 0) {
    piVar8 = (*(int * PTR32 *)&gen_args[0]) + 0x6a;
    (*(int *)(gen_frame + 0x8)) = -0x20 - (int)(*(int * PTR32 *)&gen_args[0]);
    (*(int *)(gen_frame + 0x4)) = -0x5c - (int)(*(int * PTR32 *)&gen_args[0]);
    (*(uint *)&gen_args[1]) = uVar5;
    do {
      uVar1 = *((uint *)GEN_TOP(((int)piVar8 + *(int *)(iVar9 + 0x20) + (*(int *)(gen_frame + 0x8)))));
      F_004352a0(uVar1 >> 0x1d & 2,&(*(uint *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x14)));
      F_00562e60(*piVar8,(*(uint *)(gen_frame + 0xc)));
      F_00562e80(*piVar8,(*(undefined4 *)(gen_frame + 0x14)));
      F_00595530((undefined *)*piVar8,uVar1 & 0x3fffffff,0,0);
      F_0058a4b0((undefined *)*piVar8,
                   *((undefined4 *)GEN_TOP(((int)piVar8 + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20) + (*(int *)(gen_frame + 0x4))))));
      pvVar7 = (undefined *)0x0;
      if (*piVar8 != 0) {
        pvVar7 = *(undefined * PTR32 *)(*piVar8 + 0x70);
      }
      F_0055a300(pvVar7,1);
      piVar8 = piVar8 + 1;
      (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) - 1;
      iVar9 = (*(int *)(gen_frame + 0x18));
    } while ((*(uint *)&gen_args[1]) != 0);
    (*(uint *)&gen_args[1]) = 0;
  }
  if (uVar5 < 5) {
    piVar8 = (*(int * PTR32 *)&gen_args[0]) + uVar5 + 0x6a;
    iVar10 = 5 - uVar5;
    do {
      if (*piVar8 == 0) {
        pvVar7 = (undefined *)0x0;
      }
      else {
        pvVar7 = *(undefined * PTR32 *)(*piVar8 + 0x70);
      }
      F_0055a300(pvVar7,0);
      piVar8 = piVar8 + 1;
      iVar10 = iVar10 + -1;
      iVar9 = (*(int *)(gen_frame + 0x18));
    } while (iVar10 != 0);
  }
  iVar10 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x180)));
  F_0055a300(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x62])),(uint)(0 < iVar10));
  uVar5 = F_0055a2d0((*(int * PTR32 *)&gen_args[0])[0x62]);
  if ((char)uVar5 != '\0') {
    F_00559fe0((*(int * PTR32 *)&gen_args[0])[100],&(*(int *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
    F_00568210((*(int * PTR32 *)&gen_args[0])[100],(float)((float10)iVar10 * (float10)*(double *)&REFG(undefined, 0x10928e8)),GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
    F_00584110(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[99])),*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x10)) + 0x20) + 0x148))));
  }
  iVar10 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x178)));
  iVar9 = *((int *)GEN_TOP((*(int *)(iVar9 + 0x20) + 0x17c)));
  if (((*(int * PTR32 *)&gen_args[0])[0x68] != iVar10) || ((*(int * PTR32 *)&gen_args[0])[0x69] != iVar9)) {
    (*(int * PTR32 *)&gen_args[0])[0x68] = iVar10;
    (*(int * PTR32 *)&gen_args[0])[0x69] = iVar9;
    F_0055aa30((*(int * PTR32 *)&gen_args[0])[0x60],iVar10);
    F_0055ab90((*(int * PTR32 *)&gen_args[0])[0x60],iVar9);
    iVar2 = (*(int * PTR32 *)&gen_args[0])[0x66];
    (*(uint *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[0])[0x65];
    F_00561aa0((undefined *)(*(uint *)&gen_args[1]),iVar10);
    F_00561b40((undefined *)(*(uint *)&gen_args[1]),iVar10);
    F_00561b90(iVar9,iVar2);
  }
  uVar5 = (uint)(*(int * PTR32 *)&gen_args[0])[0x3d] >> 0x14 & 0xf;
  if ((uVar5 != 5) && (uVar5 != 4)) {
    (*(int * PTR32 *)&gen_args[0])[0x67] = (*(int *)&gen_args[2]);
    return uVar5;
  }
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x10e))) < '\x01') {
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14))))((*(int * PTR32 *)&gen_args[0]),0);
    uVar5 = F_0055e2a0((*(int * PTR32 *)&gen_args[0]),0x2000000,1);
  }
  (*(int * PTR32 *)&gen_args[0])[0x67] = (*(int *)&gen_args[2]);
  return uVar5;
}

/* ref: FUN_007f23a0 */
uint F_007f23a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f23a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c729c));
  in_ecx = (int)this + 0x184;
  iVar1 = 0x1d;
  do {
    F_0042b630(in_ecx);
    F_0042b630(in_ecx + 0x54);
    in_ecx = in_ecx + 0xa8;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 2;
  F_0055e2a0(this,2,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf37 */
uint F_007f2410(unsigned int gen_a0)
{
  GEN_ENTER(0x7f2410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)0x0;
  if (*(int *)(this + 0x180) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_005840a0(this_00,0x23,0,this,0);
  F_005a92d0(this,0,2,0);
  F_005a92d0(this,1,3,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf44 */
uint F_007f2450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  uVar1 = F_0055e2f0(this,2);
  if (uVar1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = (undefined *)F_00559c20(uVar1);
    if ((pvVar2 == (undefined *)0x0) || (uVar1 = F_005613a0(pvVar2), uVar1 != 9)) {
      pvVar2 = (undefined *)0x0;
    }
  }
  *(undefined * PTR32 *)(this + 0x180) = pvVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 2;
  (*(undefined4 *)(gen_frame + 0x28)) = 3;
  (*(undefined4 *)(gen_frame + 0x34)) = 4;
  (*(undefined4 *)(gen_frame + 0x40)) = 5;
  (*(undefined4 *)(gen_frame + 0x4c)) = 6;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x791160));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00574320(pvVar2,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x1c)),5,0);
  if (*(int *)(this + 0x180) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_00568380(pvVar2,0x23,0,this,0,0);
  if (*(int *)(this + 0x180) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_0055a300(pvVar2,1);
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,(*(undefined4 *)(gen_frame + 0x18)));
  F_005a91d0(this,0,2);
  uVar1 = F_005a91d0(this,1,3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: Client::UI2::AddonLimitBreak::vf37 */
uint F_007f2580(unsigned int gen_a0)
{
  GEN_ENTER(0x7f2580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * pAVar1;
  uint uVar2;
  
  F_005a92d0(this,1,0x28,0);
  uVar2 = 0;
  pAVar1 = this + 0x1c4;
  do {
    if (*(int *)pAVar1 == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = *(undefined * PTR32 *)(*(int *)pAVar1 + 0x70);
    }
    F_005840a0(this_00,0x41,uVar2,this,0);
    uVar2 = uVar2 + 1;
    pAVar1 = pAVar1 + 0x38;
  } while (uVar2 < 3);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_007f25d0 */
unsigned int F_007f25d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f25d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (((char)param_3 != '\0') ||
     ((*(int *)(param_1 + 0x10) != param_2 && (*(char *)((int)this + 0x186) == '\0')))) {
    if ((*(char *)((int)this + 0x184) == '\0') && (param_2 == 0x66)) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x43);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    }
    F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x30) + 0x6c))),param_2);
    *(int *)(param_1 + 0x10) = param_2;
    if ((char)param_3 != '\0') {
      *(undefined1 *)((int)this + 0x186) = 1;
    }
  }
  return 0;
}

/* ref: FUN_007f2650 */
unsigned int F_007f2650(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f2650u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 * this;
  undefined * this_00;
  uint uVar6;
  int * piVar7;
  float10 fVar8;
  
  uVar5 = (ushort)(int)(((float10)*(int *)(param_1 + 0x240) * (float10)param_2) *
                       (float10)*(double *)&REFG(undefined, 0x10d57f0));
  if (uVar5 < 0x191) {
    if ((short)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 400;
  }
  sVar2 = *(short *)(param_1 + 0x244);
  sVar3 = *(short *)(param_1 + 0x246);
  if (sVar3 < sVar2) {
    *(ushort *)(param_1 + 0x246) = uVar5 + sVar3;
    if ((short)(uVar5 + sVar3) <= sVar2) goto LAB_007f26c3;
  }
  else if ((sVar3 <= sVar2) ||
          (*(ushort *)(param_1 + 0x246) = sVar3 - uVar5, sVar2 <= (short)(sVar3 - uVar5)))
  goto LAB_007f26c3;
  *(short *)(param_1 + 0x246) = sVar2;
LAB_007f26c3: ;
  (*(uint *)(gen_frame + 0x28)) = (uint)*(ushort *)(param_1 + 0x246);
  piVar7 = (int *)(param_1 + 0x1a4);
  (*(int *)(gen_frame + 0x24)) = 3;
  do {
    uVar6 = (uint)(short)(*(uint *)(gen_frame + 0x28));
    if ((uVar6 < 0x2711) && (uVar6 < 10000)) {
      iVar1 = piVar7[-3];
      if (iVar1 == 0) {
        if ((uint)piVar7[-2] < uVar6) {
          *(undefined1 *)(piVar7 + -4) = 0;
          if (((*(char *)((int)piVar7 + -0xf) == '\0') && (*piVar7 != 0x11)) &&
             (*(char *)(param_1 + 0x186) == '\0')) {
            this_00 = *(undefined * PTR32 *)(piVar7[8] + 0x6c);
            goto LAB_007f2859;
          }
        }
        else {
          *(undefined2 *)(piVar7 + -4) = 0;
          piVar7[-3] = 0;
          if (uVar6 < (uint)piVar7[-2]) {
            if ((*piVar7 != 0x11) && (*(char *)(param_1 + 0x186) == '\0')) {
              this_00 = *(undefined * PTR32 *)(piVar7[8] + 0x6c);
LAB_007f2859: ;
              F_0059d640(this_00,0x11);
              *piVar7 = 0x11;
            }
          }
          else if ((*piVar7 != 0x11) && (*(char *)(param_1 + 0x186) == '\0')) {
            this_00 = *(undefined * PTR32 *)(piVar7[8] + 0x6c);
            goto LAB_007f2859;
          }
        }
      }
      else {
        if (uVar6 != 0) {
          if (iVar1 == 1) {
            uVar4 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x10)),0x44);
            this = ((undefined1 *)(gen_frame + 0x10));
          }
          else {
            if (iVar1 < 2) goto LAB_007f27f7;
            uVar4 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x45);
            this = ((undefined1 *)(gen_frame + 0x8));
          }
          F_005a2670(this);
          if ((*piVar7 != 0x65) && (*(char *)(param_1 + 0x186) == '\0')) {
            F_0059d640(*(undefined * PTR32 *)(piVar7[8] + 0x6c),0x65);
            *piVar7 = 0x65;
          }
        }
LAB_007f27f7: ;
        *(undefined1 *)((int)piVar7 + -0xf) = 1;
        piVar7[-3] = 0;
      }
    }
    else {
      uVar6 = 10000;
      if ((char)piVar7[-4] == '\0') {
        *(undefined1 *)(piVar7 + -4) = 1;
        if ((*piVar7 != 0x66) && (*(char *)(param_1 + 0x186) == '\0')) {
          if (*(char *)(param_1 + 0x184) == '\0') {
            uVar4 = F_0055dcb0();
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x38) + 8))))(*(int * PTR32 *)(uVar4 + 0x38),((undefined1 *)(gen_frame + 0x18)),0x43);
            F_005a2670(((undefined1 *)(gen_frame + 0x18)));
          }
          F_0059d640(*(undefined * PTR32 *)(piVar7[8] + 0x6c),0x66);
          *piVar7 = 0x66;
          piVar7[-3] = 0;
          *(undefined1 *)((int)piVar7 + -0xf) = 0;
          goto LAB_007f2866;
        }
      }
      else {
        uVar4 = F_00559cd0(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c4) + 0x6c))));
        F_00559c60(*(undefined * PTR32 *)(piVar7[8] + 0x6c),uVar4 & 0xffff);
      }
      piVar7[-3] = 0;
      *(undefined1 *)((int)piVar7 + -0xf) = 0;
    }
LAB_007f2866: ;
    fVar8 = (float10)(int)uVar6;
    piVar7[-2] = uVar6;
    if ((int)uVar6 < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(uint *)(gen_frame + 0x20)) = ((undefined2)0x27f) | 0xc00;
    uVar6 = (uint)TRUNC((float10)*(ushort *)((int)piVar7 + -2) *
                        (float10)(float)(fVar8 / (float10)*(double *)&REFG(undefined, 0x10a2b98)));
    (*(uint *)(gen_frame + 0x20)) = uVar6;
    F_0055a060(piVar7[7],uVar6 & 0xffff);
    uVar6 = (*(uint *)(gen_frame + 0x28)) - 10000;
    (*(uint *)(gen_frame + 0x28)) = uVar6;
    if ((short)uVar6 < 0) {
      (*(uint *)(gen_frame + 0x28)) = 0;
    }
    piVar7 = piVar7 + 0xe;
    iVar1 = (*(int *)(gen_frame + 0x24)) + -1;
    (*(int *)(gen_frame + 0x24)) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}

/* ref: Client::UI2::AddonMainCross::vf5 */
uint F_007f28f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f28f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a89b0(this,param_1,1);
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055dcb0();
    uVar1 = F_005803e0(*(undefined * PTR32 *)(uVar1 + 0x14),0x10000000,0x20000,4,1);
  }
  this[0x4a0] = (undefined1)0x1;
  return uVar1;
}

/* ref: Client::UI2::AddonMainCross::vf6 */
uint F_007f2940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  this[0x4a0] = (undefined1)0x0;
  uVar1 = F_0055dcb0();
  F_005602f0((undefined *)(uVar1 + 0x20c),0,0,0);
  uVar1 = F_005b0610(this,param_1,1,param_2);
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055dcb0();
    uVar1 = F_005803e0(*(undefined * PTR32 *)(uVar1 + 0x14),0x10000000,0x20000,4,0);
  }
  return uVar1;
}

/* ref: FUN_007f29a0 */
uint F_007f29a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f29a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (*((char *)GEN_TOP((*(int *)((int)this + param_1 * 0x14 + 0x1ec) + 0x10 + param_2 * 0x14))) != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,1);
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((param_2 * 0x14 + *(int *)((int)this + param_1 * 0x14 + 0x1ec))));
    uVar1 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x37,1,&(*(undefined4 *)(gen_frame + 0x14)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
    return uVar1;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x1c5;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  uVar1 = F_0046a630(this_00,uVar3);
  return uVar1;
}

/* ref: FUN_007f2a50 */
uint F_007f2a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f2a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (((char)param_4 == '\x01') && (param_3 == *(int *)((int)this + 0x490))) {
    uVar1 = F_0059d640(*(undefined * PTR32 *)(param_1 + 0x6c),
                         (-(uint)(*((char *)GEN_TOP((*(int *)((int)this + param_2 * 0x14 + 0x1ec) + 0x10 +
                                           param_3 * 0x14))) != '\0') & 0xffffff9d) + 0x65);
    return uVar1;
  }
  uVar1 = F_0059d670(*(undefined * PTR32 *)(param_1 + 0x6c),
                       (-(uint)(*((char *)GEN_TOP((*(int *)((int)this + param_2 * 0x14 + 0x1ec) + 0x10 +
                                         param_3 * 0x14))) != '\0') & 0xfffffffa) + 7);
  return uVar1;
}

/* ref: FUN_007f2ad0 */
unsigned int F_007f2ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  int local_c;
  uint local_8;
  
  if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(param_2 + 0xc);
  }
  local_8 = 0;
  piVar5 = (int *)((int)this + 0x1ec);
  do {
    uVar2 = (piVar5[1] - *piVar5) / 0x14;
    uVar4 = 0;
    if (uVar2 != 0) {
      iVar6 = 0;
      do {
        if (local_c == *(int *)(iVar6 + *piVar5)) {
          if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_2 + 0x14);
          }
          *(bool *)(iVar6 + *piVar5 + 0x10) = iVar3 != 0;
          if (local_8 == *(uint *)((int)this + 0x48c)) {
            this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4 +
                                         *(uint *)((int)this + 0x490) * 0xc))) + 0x6c)));
            cVar1 = *(char *)(iVar6 + 0x10 + *piVar5);
            if (uVar4 == *(uint *)((int)this + 0x490)) {
              F_0059d640(this_00,(-(uint)(cVar1 != '\0') & 0xffffff9d) + 0x65);
            }
            else {
              F_0059d670(this_00,(-(uint)(cVar1 != '\0') & 0xfffffffa) + 7);
            }
          }
        }
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 0x14;
      } while (uVar4 < uVar2);
    }
    local_8 = local_8 + 1;
    piVar5 = piVar5 + 5;
  } while (local_8 < 6);
  return 0;
}

/* ref: FUN_007f2bd0 */
uint F_007f2bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f2bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  
  pvVar4 = (undefined *)((int)this + 0x29c);
  iVar2 = 6;
  do {
    F_0056c5f0(pvVar4);
    F_00588f80(pvVar4,0x3d,0,this,0);
    pvVar4 = (undefined *)((int)pvVar4 + 0x30);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x48c) * 0x14 + 0x1f0))) -
          *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x48c) * 0x14 + 0x1ec)))) / 0x14;
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      F_0056c5f0(((undefined *)GEN_TOP((iVar5 + *(int *)((int)this + 0x3bc)))));
      F_00588f80(((undefined *)GEN_TOP((iVar5 + *(int *)((int)this + 0x3bc)))),0x3d,2,this,0);
      iVar5 = iVar5 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3bc);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x3bc) = 0;
  }
  uVar3 = 3;
  pvVar4 = (undefined *)((int)this + 0x3f0);
  do {
    F_0056c5f0(pvVar4);
    F_00588f80(pvVar4,0x3d,uVar3,this,0);
    uVar3 = uVar3 + 0x100;
    pvVar4 = (undefined *)((int)pvVar4 + 0x30);
  } while (uVar3 < 0x303);
  F_0056c5f0((undefined *)((int)this + 0x3c0));
  uVar3 = F_00588f80((undefined *)((int)this + 0x3c0),0x3d,4,this,0);
  return uVar3;
}

/* ref: FUN_007f2ce0 */
uint F_007f2ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined2 extraout_var = 0;
  undefined2 extraout_var_00 = 0;
  undefined2 extraout_var_01 = 0;
  float10 fVar3;
  float10 fVar4;
  short local_8;
  
  if (param_2 == 0) {
    uVar2 = F_0055dcb0();
    uVar1 = F_005602f0((undefined *)(uVar2 + 0x20c),0,0,0);
    return CONCAT22(extraout_var,uVar1);
  }
  fVar3 = F_00559d80(*(undefined4 *)(param_2 + 0x70));
  uVar1 = F_0055a030(*(undefined4 *)(param_2 + 0x70));
  fVar4 = F_00559d60(*(undefined4 *)(param_2 + 0x70));
  uVar2 = F_0055dcb0();
  if ((char)param_1 != '\0') {
    local_8 = (short)(int)fVar4;
    uVar1 = F_005602f0((undefined *)(uVar2 + 0x20c),3,(int)local_8,
                         (int)(short)(int)((float10)(int)(short)(int)fVar3 +
                                          (float10)uVar1 * (float10)REFG(double, 0x1088108)));
    return CONCAT22(extraout_var_00,uVar1);
  }
  uVar1 = F_005602f0((undefined *)(uVar2 + 0x20c),0,0,0);
  return CONCAT22(extraout_var_01,uVar1);
}

/* ref: FUN_007f2db0 */
uint F_007f2db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0x8))[4] = uVar1;
  if (param_1 != 0) {
    this_00 = (undefined *)F_00559c20(param_1);
    uVar1 = F_00561530(this_00,4);
    if (uVar1 != 0) {
      ((uint *)(gen_frame + 0x8))[0] = 0xff888888;
      ((uint *)(gen_frame + 0x8))[1] = 0xffeeeeee;
      ((uint *)(gen_frame + 0x8))[2] = 0xff996666;
      ((uint *)(gen_frame + 0x8))[3] = 0xffeeaaaa;
      F_0055aa30(uVar1,((uint *)(gen_frame + 0x8))[(int)((-(uint)(*(char *)((int)this + 0x17) != '\0') & 2) +
                                  (uint)((char)param_2 != '\0'))]);
    }
    uVar1 = F_0059d670(*(undefined * PTR32 *)((int)this_00 + 0x6c),
                         (-(uint)((char)param_2 != '\0') & 0x52) + 0x13);
  }
  F_00c47745(((uint *)(gen_frame + 0x8))[4] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf52 */
byte F_007f2e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f2e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  if (((char)param_1[1] == '\0') && (*param_1 == 6)) {
    bVar1 = F_00792580(this);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007f2e80 */
uint F_007f2e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f2e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = F_007927b0(this);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf54 */
unsigned int F_007f2ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f2ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int * this;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1,param_2,param_3);
  uVar2 = F_0055dcb0();
  fVar4 = (float10)*(int *)(uVar2 + 0x234);
  if (*(int *)(uVar2 + 0x234) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x1c)) = (float)fVar4;
  uVar2 = F_0055dcb0();
  fVar4 = (float10)*(int *)(uVar2 + 0x238);
  if (*(int *)(uVar2 + 0x238) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x20)) = (float)fVar4;
  param_3 = 0;
  do {
    puVar1 = *(undefined4 * PTR32 *)(param_3 + param_1[0x65]);
    if (puVar1 == (undefined4 *)0x0) break;
    this = (int *)*puVar1;
    (*(uint *)(gen_frame + 0x24)) = *((uint *)GEN_TOP((param_1[0x66] + *(char *)(puVar1 + 5) * 4)));
    F_0056b5f0(this,&(*(int *)(gen_frame + 0xc)));
    iVar3 = (*(int *)(gen_frame + 0x18)) - (*(int *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x28)) = (float)((*(int *)(gen_frame + 0x14)) - (*(int *)(gen_frame + 0xc)));
    F_00791b20(puVar1,(*(uint *)(gen_frame + 0x24)),(uint)this,(float)((*(int *)(gen_frame + 0x14)) - (*(int *)(gen_frame + 0xc))),(*(float *)(gen_frame + 0x1c)),(float)iVar3,
                 (*(float *)(gen_frame + 0x20)));
    F_0057f4c0((*(uint *)(gen_frame + 0x24)),(int)(*(float *)(gen_frame + 0x28)) & 0xffff,(int)(float)iVar3 & 0xffff);
    ((code *)*(gen_code32 *)(*this + 0x6c))(this);
    param_3 = param_3 + 4;
  } while (param_3 < 0x80);
  F_00792980(param_1);
  return 0;
}

/* ref: FUN_007f2fd0 */
uint F_007f2fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f2fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 * puVar9;
  undefined4 uVar10;
  undefined4 * puVar11;
  undefined4 uVar12;
  
  ((uint *)(gen_frame + 0x88))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(int *)(gen_frame + 0x18)) = param_1;
  uVar4 = 0;
  if (param_1 != 0) {
    uVar10 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + param_1 * 4)));
    pvVar2 = (undefined *)F_00559c20(uVar10);
    F_00559d10(uVar10,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x8)));
    puVar11 = &(*(undefined4 *)(gen_frame + 0x2c));
    puVar9 = &(*(undefined4 *)(gen_frame + 0x30));
    pvVar3 = (undefined *)F_00561490(pvVar2,8);
    F_0055a000(pvVar3,puVar9,puVar11);
    uVar4 = F_00561530(pvVar2,4);
    uVar10 = REFG(undefined4, 0x108cc50);
    uVar4 = F_0055aaf0(uVar4);
    F_0042cc20(((undefined1 *)(gen_frame + 0x34)),uVar4,uVar10);
    for (iVar7 = (*(int *)(gen_frame + 0x18)); 0 < iVar7; iVar7 = iVar7 + -1) {
      uVar10 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + -4 + iVar7 * 4)));
      (*(undefined4 *)(gen_frame + 0x14)) = uVar10;
      pvVar3 = (undefined *)F_00559c20(uVar10);
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + iVar7 * 4)));
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar2;
      pvVar2 = (undefined *)F_00559c20(pvVar2);
      F_00559d10((*(undefined4 *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x4)));
      F_00559da0((*(undefined * PTR32 *)(gen_frame + 0x20)),(*(float *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0x4)));
      puVar11 = &(*(undefined4 *)(gen_frame + 0x28));
      puVar9 = &(*(undefined4 *)(gen_frame + 0x24));
      pvVar5 = (undefined *)F_00561490(pvVar3,8);
      F_0055a000(pvVar5,puVar9,puVar11);
      if (pvVar2 == (undefined *)0x0) {
        pvVar5 = (undefined *)0x0;
      }
      else {
        pvVar5 = *(undefined * PTR32 *)((int)pvVar2 + 0x70);
      }
      F_0055a040(pvVar5,(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
      uVar10 = (*(undefined4 *)(gen_frame + 0x24));
      uVar12 = (*(undefined4 *)(gen_frame + 0x28));
      pvVar5 = (undefined *)F_00561490(pvVar2,8);
      F_0055a040(pvVar5,uVar10,uVar12);
      uVar10 = (*(undefined4 *)(gen_frame + 0x24));
      uVar12 = (*(undefined4 *)(gen_frame + 0x28));
      pvVar5 = (undefined *)F_00561490(pvVar2,9);
      F_0055a040(pvVar5,uVar10,uVar12);
      pvVar3 = (undefined *)F_00561530(pvVar3,4);
      pvVar2 = (undefined *)F_00561530(pvVar2,4);
      uVar4 = F_0055aaf0(pvVar3);
      F_00584110(pvVar2,uVar4);
      uVar4 = F_00577bc0(pvVar3,0,0,REFG(undefined4, 0x108cc50),0);
      F_0055a060(pvVar2,uVar4 + 5);
      this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    }
    uVar10 = **(undefined4 * PTR32 *)((int)this + 0x198);
    pvVar2 = (undefined *)F_00559c20(uVar10);
    F_00559da0(uVar10,(*(float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x8)));
    if (pvVar2 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar2 + 0x70);
    }
    F_0055a040(pvVar3,(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x2c)));
    uVar10 = (*(undefined4 *)(gen_frame + 0x30));
    uVar12 = (*(undefined4 *)(gen_frame + 0x2c));
    pvVar3 = (undefined *)F_00561490(pvVar2,8);
    F_0055a040(pvVar3,uVar10,uVar12);
    pvVar3 = (undefined *)F_00561490(pvVar2,9);
    F_0055a040(pvVar3,(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x2c)));
    pvVar2 = (undefined *)F_00561530(pvVar2,4);
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x34)));
    F_00584110(pvVar2,uVar4);
    uVar4 = F_00577bc0(pvVar2,0,0,REFG(undefined4, 0x108cc50),0);
    F_0055a060(pvVar2,uVar4 + 5);
    iVar7 = 0;
    if (0 < *(int *)((int)this + 0x1b8)) {
      do {
        iVar6 = (int)*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x194) + iVar7 * 4))) + 0x14)));
        if (iVar6 == (*(int *)(gen_frame + 0x18))) {
          iVar6 = 0;
        }
        else if (iVar6 < (*(int *)(gen_frame + 0x18))) {
          iVar6 = iVar6 + 1;
        }
        *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x194) + iVar7 * 4))) + 0x14))) = (char)iVar6;
        iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x198) + iVar6 * 4)));
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x194) + iVar7 * 4)));
        if (iVar6 != 0) {
          pvVar2 = (undefined *)F_00559c20(iVar6);
          (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar2;
          uVar4 = F_00561530(pvVar2,4);
          if (uVar4 != 0) {
            ((uint *)(gen_frame + 0x88))[0] = 0xff888888;
            ((uint *)(gen_frame + 0x88))[1] = 0xffeeeeee;
            ((uint *)(gen_frame + 0x88))[2] = 0xff996666;
            ((uint *)(gen_frame + 0x88))[3] = 0xffeeaaaa;
            F_0055aa30(uVar4,((uint *)(gen_frame + 0x88))[(int)(-(uint)(*(char *)(iVar1 + 0x17) != '\0') & 2)]);
          }
          F_0059d670(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x6c),0x13);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)((int)this + 0x1b8));
    }
    uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x34)));
    uVar4 = (uint)uVar8;
  }
  F_00c47745(((uint *)(gen_frame + 0x88))[4] ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar4;
}

/* ref: FUN_007f3300 */
unsigned int F_007f3300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f3300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  float in_XMM7_Da = 0;
  
  if (param_1 != (int *)0x0) {
    uVar2 = F_00579400(param_1,0);
    F_00567e90(uVar2,in_XMM7_Da,0);
    uVar2 = F_0055e320(param_1);
    if ((uVar2 != 0) && (iVar1 = *(int *)(uVar2 + 0x70), iVar1 != 0)) {
      F_007928c0(*(undefined4 *)(iVar1 + 8));
      F_00567e90(iVar1,in_XMM7_Da,*(undefined4 *)(iVar1 + 8));
    }
    iVar1 = param_1[0x25];
    if (iVar1 != 0) {
      F_007928c0(*(undefined4 *)(iVar1 + 8));
      F_00567e90(iVar1,in_XMM7_Da,*(undefined4 *)(iVar1 + 8));
    }
    F_0056ae10(param_1);
    ((code *)*(gen_code32 *)(*param_1 + 0x6c))(param_1);
  }
  return 0;
}

/* ref: FUN_007f3380 */
uint F_007f3380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f3380u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  int iVar7;
  bool bVar8;
  
  uVar2 = 0;
  if (0 < param_3) {
    iVar7 = 0x22;
    pbVar6 = (byte *)(param_2 + 0x110);
    do {
      if ((((-1 < iVar7) && (iVar7 < param_1)) && ((*pbVar6 & 0xf) != 0)) &&
         (pbVar3 = *(byte * PTR32 *)(pbVar6 + 4), pbVar5 = param_4, pbVar3 != (byte *)0x0)) {
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_007f33d8: ;
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_007f33dd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_007f33d8;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_007f33dd: ;
        if (iVar4 == 0) {
          return uVar2;
        }
      }
      uVar2 = uVar2 + 1;
      iVar7 = iVar7 + 1;
      pbVar6 = pbVar6 + 8;
    } while ((int)uVar2 < param_3);
  }
  return 0xffffffff;
}

/* ref: FUN_007f3400 */
uint F_007f3400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f3400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  undefined * this_00;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x180) != 0) {
    bVar1 = F_0056c800();
    if (bVar1 == 0) {
      F_00792d50(this,(int)*param_2,(int)param_2[1]);
      F_00792220(*(undefined4 *)((int)this + 0x180),(uint)(ushort)param_2[2],
                   (uint)(ushort)param_2[3],*(uint *)(param_2 + 4));
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80000;
      *(undefined1 *)(param_1 + 0x15) = 6;
    }
    bVar1 = F_00a34970(*(undefined * PTR32 *)(param_2 + 4),5);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      in_EAX = *(uint *)((int)this + 0x180);
      this_00 = *(undefined * PTR32 *)(in_EAX + 0x19c);
      if ((this_00 != (undefined *)0x0) && ((*(uint *)((int)this_00 + 0x10) & 0x1000000) == 0)) {
        F_00791a70(this_00,*((undefined4 *)GEN_TOP((*(int *)(in_EAX + 0x198) + *(char *)((int)this_00 + 0x14) * 4))),
                     (uint)*(byte *)((int)this_00 + 0x17));
        in_EAX = F_00557670(param_1,0);
      }
    }
  }
  return in_EAX;
}

/* ref: Client::UI2::AddonSocial::vf60 */
byte F_007f34b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f34b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = 0;
  if ((char)param_2 == '\0') {
LAB_007f34e5: ;
    if (param_1 != 0xf) goto LAB_007f3500;
    bVar2 = (char)this[0x184] + 1U & 3;
  }
  else {
    if ((this[0x184] == (undefined1)0x0) && (param_1 == 0x10)) {
      return 0;
    }
    if (this[0x184] != (undefined1)0x3) goto LAB_007f34e5;
    if (param_1 == 0xf) {
      return 0;
    }
LAB_007f3500: ;
    if (param_1 != 0x10) goto LAB_007f351b;
    if (this[0x184] == (undefined1)0x0) {
      bVar2 = 3;
      goto LAB_007f351b;
    }
    bVar2 = (char)this[0x184] - 1;
  }
  if (3 < bVar2) {
    bVar2 = 0;
  }
LAB_007f351b: ;
  piVar1 = *(int * PTR32 *)(this + (uint)bVar2 * 4 + 0x1c0);
  if ((piVar1 != (int *)0x0) && (uVar3 = F_0055a350(piVar1[0x1c]), (char)uVar3 != '\0')) {
    uVar3 = F_0055a260((undefined *)piVar1[0x1c],0x17);
    F_007930a0(this,uVar3);
    uVar3 = F_00561390();
    ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar3 + 0xc0);
    uVar3 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonSocialList::vf38 */
uint F_007f35a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f35a0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)param_1 + 0x204) == '\0') goto LAB_007f3605;
  if (*(int *)((int)param_1 + 0x1cc) == 0) {
LAB_007f35eb: ;
    uVar2 = 0;
  }
  else {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x1cc) + 0x70))));
    if ((char)uVar1 == '\0') goto LAB_007f35eb;
    F_005879b0(param_1,0,7,0,9,0,0);
    uVar2 = *(undefined4 *)((int)param_1 + 0x200);
  }
  F_005879b0(param_1,uVar2,7,0,9,0,0);
  *(undefined1 *)((int)param_1 + 0x204) = 0;
LAB_007f3605: ;
  uVar1 = F_005a2370(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialList::vf47 */
uint F_007f3620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f3620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar6 = 0;
  if (*(int *)(this + 0x180) != 0) {
    iVar1 = *((int *)GEN_TOP((param_1 + *(int *)(this + 0x1e8) * 4)));
    iVar2 = *((int *)GEN_TOP((param_2 + *(int *)(this + 0x1ec) * 4)));
    iVar3 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + *(int *)(this + 0x1f0) * 4)));
    puVar5 = *(undefined4 * PTR32 *)(this + 0x180);
    iVar8 = 0;
    if (iVar3 != 0) {
      iVar7 = 0xc;
      iVar8 = iVar3 * 5;
      iVar9 = 0xc;
      param_1 = iVar3;
      do {
        *(undefined1 *)((int)puVar5 + 0x2b) = 0;
        *puVar5 = *((undefined4 *)GEN_TOP((iVar9 + -0xc + *(int *)(iVar2 + 0x20))));
        puVar5[1] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + -8 + iVar9)));
        puVar5[2] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + -4 + iVar9)));
        puVar5[3] = *((undefined4 *)GEN_TOP((iVar9 + *(int *)(iVar2 + 0x20))));
        puVar5[4] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4 + iVar9)));
        puVar5[5] = *((undefined4 *)GEN_TOP((iVar7 + -0xc + *(int *)(iVar1 + 0x20))));
        puVar5[6] = *((undefined4 *)GEN_TOP((iVar7 + -8 + *(int *)(iVar1 + 0x20))));
        puVar5[7] = *((undefined4 *)GEN_TOP((iVar7 + -4 + *(int *)(iVar1 + 0x20))));
        puVar5[8] = *((undefined4 *)GEN_TOP((iVar7 + *(int *)(iVar1 + 0x20))));
        puVar5[9] = *((undefined4 *)GEN_TOP((iVar7 + 4 + *(int *)(iVar1 + 0x20))));
        *(undefined1 *)(puVar5 + 10) = *((undefined1 *)GEN_TOP((iVar7 + 8 + *(int *)(iVar1 + 0x20))));
        *(undefined1 *)((int)puVar5 + 0x29) = *((undefined1 *)GEN_TOP((iVar7 + 0xc + *(int *)(iVar1 + 0x20))));
        *(byte *)((int)puVar5 + 0x2a) =
             (byte)(*((uint *)GEN_TOP((iVar7 + 0x10 + *(int *)(iVar1 + 0x20)))) >> 5) & 1;
        iVar9 = iVar9 + 0x14;
        iVar7 = iVar7 + 0x20;
        puVar5 = puVar5 + 0xb;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + iVar8 * 4)));
    *(int *)(this + 0x1fc) = iVar3;
    *(undefined4 *)(this + 0x184) = uVar4;
    uVar6 = *(uint *)(iVar1 + 0x20);
    this[0x205] = (undefined1)(*((int *)GEN_TOP((uVar6 + *(int *)(this + 0x1f8) * 4))) != 0);
    if (((byte)this[0xf9] & 1) != 0) {
      uVar6 = F_00793970(this);
    }
  }
  return uVar6;
}

/* ref: Client::UI2::AddonSocialList::vf52 */
byte F_007f3770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f3770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(int *)(this + 0x1cc) != 0) {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x70))));
    if ((((char)uVar1 != '\0') && (*param_1 == 5)) && ((char)param_1[1] == '\0')) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),1);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 3;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007f37f0 */
uint F_007f37f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f37f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00793750(this,param_1 * 0x2c + *(int *)((int)this + 0x180),param_2,param_3);
  return uVar1;
}

/* ref: Client::UI2::AddonBlackList::vf52 */
byte F_007f3820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f3820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(int *)(this + 0x184) != 0) {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))));
    if ((((char)uVar1 != '\0') && (*param_1 == 5)) && ((char)param_1[1] == '\0')) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),1);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 3;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007f38a0 */
unsigned int F_007f38a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f38a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint * puVar6;
  int iVar7;
  undefined * pvVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar9 = (*(uint *)(gen_frame + 0x8));
  iVar5 = (*(int *)&gen_args[2]);
  iVar4 = (*(int *)&gen_args[1]);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = uVar9 & 0xffffff00;
  if (((*(int *)&gen_args[1]) != 0) && ((*(int *)&gen_args[2]) != 0)) {
    iVar7 = **(int * PTR32 *)((*(int *)&gen_args[1]) + 0x20);
    uVar9 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8)));
    (*(int *)&gen_args[2]) = 200;
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(int *)&gen_args[1]) = iVar7;
    if (iVar7 < 200) {
      puVar6 = (uint *)&(*(int *)&gen_args[1]);
      if (iVar7 < 1) {
        puVar6 = &(*(uint *)(gen_frame + 0x4));
      }
    }
    else {
      puVar6 = (uint *)&(*(int *)&gen_args[2]);
    }
    uVar1 = *puVar6;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8))) = uVar1;
    if ((uVar9 != uVar1) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != 0)) {
      F_0058d980(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))),uVar1 & 0xffff);
    }
    iVar7 = 0;
    if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8)))) {
      do {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 * 4 + 0x188))) =
             *((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x20) + iVar7 * 4)));
        iVar7 = iVar7 + 1;
      } while (iVar7 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8))));
    }
    bVar3 = 0 < *((int *)GEN_TOP((*(int *)(iVar4 + 0x20) + 8)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = bVar3;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar3);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,(*(uint *)(gen_frame + 0x8)));
    uVar9 = (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8))) == 0);
    pvVar8 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),5);
    F_0055a300(pvVar8,uVar9);
    uVar9 = F_0055e340((*(undefined * PTR32 *)&gen_args[0]),7);
    if (uVar9 != 0) {
      uVar10 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4a8)));
      uVar11 = 200;
      pvVar8 = (undefined *)F_0055dcb0();
      uVar9 = F_005b03e0(pvVar8,uVar10,uVar11);
      pvVar8 = (undefined *)F_0055e340((*(undefined * PTR32 *)&gen_args[0]),7);
      F_00584110(pvVar8,uVar9);
    }
    F_005879b0((*(undefined * PTR32 *)&gen_args[0]),0x3c6,7,0,9,0,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonPartyMemberList::vf2 */
uint F_007f39e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f39e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint * puVar5;
  undefined4 * this_00;
  undefined * pAVar6;
  int iVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 6: ;
  case 0x1f: ;
    if (param_2 == 4) {
      iVar7 = *(int *)(this + 0x208);
    }
    else {
      iVar7 = *param_4;
    }
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x1e4) != 0)) {
      F_00560760(((int *)(gen_frame + 0xc)));
      if (param_2 == 4) {
        pAVar6 = this + 0x22c;
      }
      else {
        pAVar6 = ((undefined *)GEN_TOP((param_4[2] * 0x2c + *(int *)(this + 0x180))));
      }
      uVar4 = F_00568410(*(undefined * PTR32 *)(iVar7 + 0x1e4));
      if ((uVar4 == 6) && (((int *)(gen_frame + 0xc))[0] = *(int *)(pAVar6 + 0xc), *(int *)(pAVar6 + 0xc) != 0)) {
        AVar1 = this[0x13a];
        uVar8 = *(undefined4 *)(iVar7 + 0x1e4);
        uVar4 = F_0055dcb0();
        F_00588780((undefined *)(uVar4 + 0xe0),2,(uint)(byte)AVar1,uVar8,((int *)(gen_frame + 0xc)),0,0);
      }
      uVar4 = F_00568410(*(undefined * PTR32 *)(iVar7 + 0x1e4));
      if (uVar4 == 0x10) {
        if (*(int *)(pAVar6 + 0x10) != 0) {
          ((int *)(gen_frame + 0xc))[0] = *(int *)(pAVar6 + 0x10);
LAB_007f3eeb: ;
          uVar8 = *(undefined4 *)(iVar7 + 0x1e4);
          AVar1 = this[0x13a];
          uVar4 = F_0055dcb0();
          F_00588780((undefined *)(uVar4 + 0xe0),2,(uint)(byte)AVar1,uVar8,((int *)(gen_frame + 0xc)),0,0);
        }
      }
      else if ((((*(int *)(pAVar6 + 4) != 0) && (*(int *)(this + 0x224) != 0)) &&
               (uVar4 = F_00568410(*(undefined * PTR32 *)(iVar7 + 0x1e4)), uVar4 == 0x13)) &&
              (bVar3 = F_00584440(*(undefined * PTR32 *)(this + 0x224),*(undefined4 *)(pAVar6 + 4)),
              bVar3 != 0)) {
        ((int *)(gen_frame + 0xc))[0] = *(int *)(pAVar6 + 4);
        goto LAB_007f3eeb;
      }
    }
    break;
  case 7: ;
  case 0x20: ;
    if (param_2 == 4) {
      iVar7 = *(int *)(this + 0x208);
    }
    else {
      iVar7 = *param_4;
    }
    if (((iVar7 != 0) && (*(undefined * PTR32 *)(iVar7 + 0x1e4) != (undefined *)0x0)) &&
       ((uVar4 = F_00568410(*(undefined * PTR32 *)(iVar7 + 0x1e4)), uVar4 == 6 ||
        ((uVar4 == 0x10 || (uVar4 == 0x13)))))) {
      uVar4 = F_0055dcb0();
      F_00594d90((undefined *)(uVar4 + 0xe0),0);
    }
    break;
  default: ;
    break;
  case 0x11: ;
    if (param_2 == 5) {
      bVar3 = F_005615c0(*(undefined4 *)(this + 0x20c),*param_4);
      if (bVar3 == 0) {
        F_00793f00(this);
      }
      F_00793e60(this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0xc0))));
    }
    else if (param_2 == 4) {
      F_005879b0(this,0x3d1,7,0,9,0,0);
    }
    goto LAB_007f403b;
  case 0x12: ;
    if (param_2 != 5) {
      if (param_2 != 4) goto LAB_007f403b;
      goto LAB_007f3fd5;
    }
    bVar3 = F_005615c0(*(undefined4 *)(this + 0x20c),param_4[1]);
    if (bVar3 != 0) goto LAB_007f403b;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x208) + 0x3c))))(*(int * PTR32 *)(this + 0x208));
    if (param_4[1] == uVar4) {
      uVar8 = 0x3d1;
    }
    else {
      uVar8 = 0;
    }
    F_005879b0(this,uVar8,7,0,9,0,0);
    F_00793e60(this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0xc0))));
    break;
  case 0x17: ;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(uint *)(gen_frame + 0x24)) = 2;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x18)));
      break;
    case 1: ;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(uint *)(gen_frame + 0x24)) = 3;
      F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x18)));
      break;
    case 2: ;
    case 3: ;
      iVar7 = (uint)(param_2 != 2) * 2 + -1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 3;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(uint *)(gen_frame + 0x24)) = (uint)(param_2 != 2);
      uVar4 = *((uint *)GEN_TOP((*(int *)(this + 0x20c) + 0xc0)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
      (*(uint *)(gen_frame + 0x2c)) = uVar4;
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x20c) + 0xc0)));
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
      (*(int *)(gen_frame + 0x34)) = iVar2 + iVar7;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
      iVar7 = *((int *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x20c) + 0xc0))) + iVar7;
      if (-1 < iVar7) {
        F_005623b0(*(undefined * PTR32 *)(this + 0x20c),iVar7);
      }
      if (*(int *)(this + 0x218) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x218) + 0x28))))(iVar7 != 0);
      }
      if (*(int *)(this + 0x21c) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x21c) + 0x28))))(iVar7 < *(int *)(this + 600) + -1);
      }
      break;
    case 4: ;
      if (*(char *)((int)param_4 + 6) != '\x02') {
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 1;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
        (*(uint *)(gen_frame + 0x24)) = 0;
        uVar4 = F_0055aaf0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x208) + 0x104))));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
        (*(uint *)(gen_frame + 0x2c)) = uVar4;
        F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x18)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x218) + 0x28))))(0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x21c) + 0x28))))(0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20c) + 0x78))))();
      }
    }
    break;
  case 0x21: ;
    bVar3 = *(byte *)(param_4 + 4);
    if ((bVar3 == 0) && ((*(byte *)((int)param_4 + 0x11) & 8) != 0)) {
      F_00557670(param_3,0);
      puVar5 = &(*(uint *)(gen_frame + 0x38));
      iVar7 = 3;
      do {
        puVar5 = puVar5 + -2;
        uVar4 = F_005a2670(puVar5);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return uVar4;
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    ((int *)(gen_frame + 0xc))[1] = 0;
    if (bVar3 == 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)bVar3;
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    iVar7 = param_4[2];
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    ((int *)(gen_frame + 0xc))[0] = iVar7 + 1;
    uVar8 = *((undefined4 *)GEN_TOP((param_4[2] * 0x2c + *(int *)(this + 0x180))));
    F_005a2710(((int *)(gen_frame + 0xc)) + 1,6);
    ((int *)(gen_frame + 0xc))[2] = uVar8;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00557670(param_3,0);
    this_00 = &(*(undefined4 *)(gen_frame + 0x18));
    iVar7 = 2;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    goto LAB_007f403b;
  case 0x24: ;
    if ((*(byte *)((int)param_4 + 0x11) & 8) == 0) {
      F_00793e60(this,param_4[2]);
      F_00793f00(this);
    }
    else {
      F_00793e60(this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0xc0))));
      F_00793f00(this);
    }
    break;
  case 0x26: ;
    if (1 < *(int *)(this + 600)) {
      F_005879b0(this,0x18ab6,7,0,9,0,0);
    }
    goto LAB_007f403b;
  case 0x27: ;
    if (-1 < *((int *)GEN_TOP((*(int *)(this + 0x20c) + 0xcc)))) {
      if (*(int *)(this + 600) < 2) {
        if (*(int *)(this + 600) == 1) {
          F_005879b0(this,0x3d2,7,0,9,0,0);
        }
        F_00793e60(this,0xffffffff);
      }
      else {
        F_005879b0(this,0x142,7,0,9,0,0);
        F_00793e60(this,0xffffffff);
      }
      goto LAB_007f403b;
    }
LAB_007f3fd5: ;
    F_005879b0(this,0,7,0,9,0,0);
    goto LAB_007f403b;
  case 0x28: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    (*(uint *)(gen_frame + 0x24)) = 4;
    uVar4 = *((uint *)GEN_TOP((*(int *)(this + 0x20c) + 0xd0)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(uint *)(gen_frame + 0x2c)) = uVar4;
    iVar7 = param_4[2];
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
    (*(int *)(gen_frame + 0x34)) = iVar7;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
    F_00793e60(this,param_4[2]);
  }
  F_00557670(param_3,0);
LAB_007f403b: ;
  puVar5 = &(*(uint *)(gen_frame + 0x38));
  iVar7 = 3;
  do {
    puVar5 = puVar5 + -2;
    uVar4 = F_005a2670(puVar5);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_007f40d0 */
uint F_007f40d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f40d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(undefined4 *)((int)this + 600) = *(undefined4 *)((int)this + 0x1fc);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20c) + 0x7c))))(*(int * PTR32 *)((int)this + 0x20c));
  if (uVar2 != *(uint *)((int)this + 0x1fc)) {
    F_0058d980(*(undefined4 *)((int)this + 0x20c),(uint)*(ushort *)((int)this + 0x1fc));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20c) + 0x70))))(*(int * PTR32 *)((int)this + 0x20c));
  if (*(int *)((int)this + 0x220) != 0) {
    uVar5 = *(undefined4 *)((int)this + 500);
    iVar4 = *(int *)((int)this + 0x1fc) + 1;
    this_00 = (undefined *)F_0055dcb0();
    uVar2 = F_005b03e0(this_00,iVar4,uVar5);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x220),uVar2);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x208);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
  if (uVar2 == uVar3) {
    uVar2 = F_005879b0(this,0x3d1,7,0,9,0,0);
    return uVar2;
  }
  if ((*(int *)((int)this + 600) != 0) &&
     ((*(int *)((int)this + 0x20c) == 0 || (-1 < *((int *)GEN_TOP((*(int *)((int)this + 0x20c) + 0xcc))))))) {
    uVar2 = F_00793f00(this);
    return uVar2;
  }
  F_005879b0(this,0x142,7,0,9,0,0);
  uVar2 = F_005879b0(this,0,7,0,9,0,0);
  return uVar2;
}

/* ref: Client::UI2::AddonLetterList::vf37 */
uint F_007f41e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f41e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  
  AVar1 = this[0x13a];
  uVar4 = F_0055dcb0();
  F_00596b90((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,1);
  iVar2 = *(int *)(this + 0x180);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    iVar6 = iVar3 + -1;
    if (-1 < iVar6) {
      pvVar5 = (undefined *)(iVar3 * 0x104 + 0x58 + iVar2);
      do {
        F_0042c880((undefined *)((int)pvVar5 + -0xb0));
        F_0042c880((undefined *)((int)pvVar5 + -0x104));
        F_0042c880((undefined *)((int)pvVar5 + -0x158));
        iVar6 = iVar6 + -1;
        pvVar5 = (undefined *)((int)pvVar5 + -0x104);
      } while (-1 < iVar6);
    }
    F_00406b30((int *)(iVar2 + -4));
    *(undefined4 *)(this + 0x180) = 0;
  }
  F_005a92d0(this,1,0x12,0);
  F_005a92d0(this,0,0x10,0);
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x184) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar5,0x17,0,this,0);
    pvVar5 = (undefined *)0x0;
    if (*(int *)(this + 0x1ac) != 0) {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
    }
    F_005840a0(pvVar5,0x21,3,this,0);
    if (*(int *)(this + 0x188) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar5,0x17,1,this,0);
    pvVar5 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar5,0x17,2,this,0);
  }
  uVar4 = F_005b0510((undefined *)this);
  return uVar4;
}

/* ref: Client::UI2::AddonLetterList::vf47 */
uint F_007f4310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f4310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  int * piVar9;
  uint * puVar10;
  uint uVar11;
  uint * puVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar2 = *(int *)(param_1 + 0x48);
  iVar3 = *(int *)(param_2 + 0x40);
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x208)));
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar8 = F_0055dcb0();
  bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x188) + 0x88)));
  if (bVar1 == 0) {
    uVar16 = 0x1ad;
  }
  else {
    uVar16 = 0x1ac;
  }
  uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar8 + 0x30) + 0x2c))))(*(int * PTR32 *)(uVar8 + 0x30),uVar16);
  F_00584110(*(undefined * PTR32 *)(this + 0x1b0),uVar8);
  if (*(int *)(this + 0x1b8) < iVar4) {
    *(int *)(this + 0x1b8) = iVar4;
    if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
      F_009239e0(*(undefined * PTR32 *)(this + 0x180),3);
      *(undefined4 *)(this + 0x180) = 0;
    }
    piVar9 = (int *)F_00404270();
    uVar8 = *(uint *)(this + 0x1b8);
    uVar11 = -(uint)((int)((ulonglong)uVar8 * 0x104 >> 0x20) != 0) |
             (uint)((ulonglong)uVar8 * 0x104);
    puVar10 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar11) | uVar11 + 4,0,piVar9,0);
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
    }
    else {
      *puVar10 = uVar8;
      puVar10 = puVar10 + 1;
      puVar12 = puVar10;
      while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
        *puVar12 = 0;
        F_0042b630(puVar12 + 1);
        F_0042b630(puVar12 + 0x16);
        F_0042b630(puVar12 + 0x2b);
        puVar12[0x40] = 0;
        puVar12 = puVar12 + 0x41;
      }
    }
    *(uint * PTR32 *)(this + 0x180) = puVar10;
    uVar8 = ((code *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9,*(int *)(this + 0x1b8) * 0x104,0x10);
    *(uint *)(this + 0x180) = uVar8;
  }
  iVar13 = 0;
  if (0 < iVar4) {
    iVar14 = 0;
    do {
      uVar8 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x20) + iVar13 * 4)));
      if ((uint)bVar1 == (~(uVar8 >> 0x18) & 1)) {
        iVar5 = *(int *)(iVar3 + 0x20);
        uVar16 = *(undefined4 *)(iVar5 + 0x410 + iVar13 * 4);
        uVar6 = *(undefined4 *)(iVar5 + iVar13 * 4);
        iVar5 = *(int *)(this + 0x180);
        F_0042e430((undefined *)(iVar14 + 4 + iVar5),uVar6);
        F_0042e430((undefined *)(iVar14 + 0x58 + iVar5),uVar16);
        *(int *)(iVar14 + iVar5) = iVar13;
        bVar7 = F_0042b6a0((undefined *)(iVar14 + 4 + iVar5),&REFG(undefined, 0x10be796));
        if (bVar7 != 0) {
          F_0042e430((undefined *)(iVar14 + 4 + iVar5),uVar6);
        }
        bVar7 = F_0042b6a0((undefined *)(iVar14 + 0x58 + iVar5),&REFG(undefined, 0x10be797));
        if (bVar7 != 0) {
          F_0042e430((undefined *)(iVar14 + 0x58 + iVar5),uVar16);
        }
        F_0042e430((undefined *)(iVar14 + 0xac + iVar5),
                     *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x208 + iVar13 * 4))));
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        *(uint *)(iVar14 + 0x100 + iVar5) = uVar8 & 0xffffff;
        iVar14 = iVar14 + 0x104;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar4);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  uVar8 = F_00560910((*(int *)(gen_frame + 0x4)));
  F_0042d540(((undefined1 *)(gen_frame + 0x14)),uVar8);
  F_0042d540(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10c172c));
  uVar8 = F_00560910(iVar4);
  F_0042d540(((undefined1 *)(gen_frame + 0x14)),uVar8);
  F_0042d540(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10c1730));
  uVar8 = F_00560910(*((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x210))) + 0x82 +
                       *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x20c))));
  F_0042d540(((undefined1 *)(gen_frame + 0x14)),uVar8);
  uVar8 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
  F_00584110(*(undefined * PTR32 *)(this + 400),uVar8);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x1ac),(*(int *)(gen_frame + 0x4)),0,1);
  if ((*(int *)(gen_frame + 0x4)) == 0) {
    uVar16 = 0x65;
  }
  else {
    uVar16 = 0x11;
  }
  F_0059d6a0(this,uVar16,1,0);
  F_0057eb30(*(undefined * PTR32 *)(this + 0x194),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x20c))),0,0,0,0);
  F_0057eb30(*(undefined * PTR32 *)(this + 0x198),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x210))),0,0,0,0);
  F_0057eb30(*(undefined * PTR32 *)(this + 0x1a4),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x214))),0,0,0,0);
  uVar15 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar15;
}

/* ref: Client::UI2::AddonLetterViewer::vf37 */
uint F_007f4ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f4ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596b90((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,1);
  F_005a92d0(this,1,0x12,0);
  F_005a92d0(this,0,0x10,0);
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 400) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,0,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,1,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x194) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,2,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x19c),0x17,3,this,0);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonLetterViewer::vf47 */
uint F_007f4b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f4b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  undefined * pAVar6;
  undefined * this_00;
  undefined * pAVar7;
  
  iVar5 = *(int *)(param_1 + 0x48);
  (*(int *)(gen_frame + 0x8)) = iVar5;
  F_00584110(*(undefined * PTR32 *)(this + 0x188),
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 0x40) + 0x20))) + 0x61c))));
  F_00574c80(*(undefined4 *)(this + 0x180),0,1,1);
  F_0058e3c0(*(undefined * PTR32 *)(this + 0x180),*(undefined4 *)(this + 0x188),0,0);
  uVar3 = *(uint *)(iVar5 + 0x20);
  if (*(int *)(uVar3 + 0x21c) != 0) {
    iVar5 = *(int *)(uVar3 + 0x220);
    if (0 < iVar5) {
      uVar3 = F_00560910(iVar5);
      F_00584110(*(undefined * PTR32 *)(this + 0x1b4),uVar3);
    }
    param_1 = (uint)(0 < iVar5);
    iVar5 = 0x224;
    do {
      iVar1 = *((int *)GEN_TOP((iVar5 + *(int *)((*(int *)(gen_frame + 0x8)) + 0x20))));
      pvVar4 = *(undefined * PTR32 *)(this + iVar5 + -0x84);
      if (iVar1 < 1) {
        F_0058d590(pvVar4);
        this_00 = (undefined *)0x0;
        if (pvVar4 != (undefined *)0x0) {
          this_00 = *(undefined * PTR32 *)((int)pvVar4 + 0x70);
        }
        F_0055a300(this_00,0);
      }
      else {
        F_00595190(pvVar4,iVar1,0,0);
        if (pvVar4 == (undefined *)0x0) {
          F_0055a300((undefined *)0x0,1);
          param_1 = param_1 + 1;
        }
        else {
          F_0055a300(*(undefined * PTR32 *)((int)pvVar4 + 0x70),1);
          param_1 = param_1 + 1;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x238);
    piVar2 = *(int * PTR32 *)(this + 0x194);
    if (param_1 == 0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x28))))(*(int * PTR32 *)(this + 400),0);
      pAVar7 = this + 0x1a0;
      pAVar6 = this + 0x1bc;
      param_1 = 5;
      do {
        F_0055a300(*(undefined * PTR32 *)pAVar6,0);
        pAVar6 = pAVar6 + 4;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),0);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1b8),0);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1d0),0);
      iVar5 = 5;
      do {
        if (*(int *)pAVar7 == 0) {
          pvVar4 = (undefined *)0x0;
        }
        else {
          pvVar4 = *(undefined * PTR32 *)(*(int *)pAVar7 + 0x70);
        }
        F_0055a300(pvVar4,0);
        pAVar7 = pAVar7 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    else {
      ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x28))))(*(int * PTR32 *)(this + 400),1);
      pAVar6 = this + 0x1bc;
      iVar5 = 5;
      do {
        F_0055a300(*(undefined * PTR32 *)pAVar6,1);
        pAVar6 = pAVar6 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),1);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1b8),1);
      F_0055a300(*(undefined * PTR32 *)(this + 0x1d0),1);
    }
    *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x8)) + 0x20) + 0x21c))) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 4;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return uVar3;
}

/* ref: FUN_007f4d90 */
uint F_007f4d90(unsigned int gen_a0)
{
  GEN_ENTER(0x7f4d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7cac));
  puVar1 = (undefined4 *)((int)this + 0x180);
  local_8 = 0x7f;
  do {
    *puVar1 = 0;
    F_0042b630(puVar1 + 1);
    F_0042b630(puVar1 + 0x16);
    F_0042b630(puVar1 + 0x2b);
    F_0042b630(puVar1 + 0x40);
    F_0042b630(puVar1 + 0x55);
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6c] = 0;
    puVar1[0x6d] = 0;
    puVar1[0x6e] = 0;
    puVar1[0x6f] = 0;
    puVar1[0x70] = 0;
    puVar1[0x71] = 0;
    puVar1 = puVar1 + 0x72;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  F_00909ac0((int)this + 0xe580);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined4 *)((int)this + 0xe630) = 0;
  *(undefined2 *)((int)this + 0xe63c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonLinkShell::vf37 */
uint F_007f4e60(unsigned int gen_a0)
{
  GEN_ENTER(0x7f4e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
  F_005a92d0(this,1,0xf,0);
  F_005a92d0(this,0,0xd,0);
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = 0;
    pAVar3 = this + 0xe580;
    do {
      if (*(int *)pAVar3 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x17,uVar1,this,0);
      uVar1 = uVar1 + 1;
      pAVar3 = pAVar3 + 4;
    } while (uVar1 < 8);
    if (*(int *)(this + 0xe624) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xe624) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,8,this,0);
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xe624) + 0x94))) = 0;
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007f57f0 */
uint F_007f57f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f57f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int in_ecx;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7dac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  puVar2 = (undefined4 *)((int)this + 0x1ac);
  local_8 = 0x642;
  do {
    *puVar2 = 0;
    F_0042b630(puVar2 + 1);
    puVar2 = puVar2 + 0x16;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  F_0042b630((int)this + 0x228b4);
  in_ecx = (int)this + 0x2290c;
  iVar1 = 4;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonLetterEditor::vf37 */
uint F_007f5bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f5bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_c;
  undefined * local_8;
  
  AVar1 = this[0x13a];
  uVar3 = F_0055dcb0();
  F_00596b90((undefined *)(uVar3 + 0xe0),(uint)(byte)AVar1,1);
  iVar4 = *(int *)(this + 0x18c);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x144) = 0;
    *(undefined4 *)(iVar4 + 0x148) = 0;
    *(undefined4 *)(iVar4 + 0x14c) = 0;
  }
  local_8 = this + 0x194;
  iVar4 = 9;
  local_c = 5;
  do {
    iVar2 = *(int *)local_8;
    if (iVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x2d,iVar4 + -5,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x30,iVar4,this,0);
      F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x34,iVar4 + 5,this,0);
    }
    local_8 = local_8 + 4;
    iVar4 = iVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x21,2,this,0);
  }
  if (*(int *)(this + 0x1a8) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 400) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x17,0,this,0);
  }
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: FUN_007f5cf0 */
uint F_007f5cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f5cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_0042e430((undefined *)((int)this + 0x228b4),param_3);
  if (param_1 != 0) {
    if ((param_1 != 1) && (param_1 == 3)) {
      F_00795230(this);
    }
    return 0;
  }
  return 2;
}

/* ref: FUN_007f5d30 */
uint F_007f5d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f5d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint * this_00;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  bVar1 = *(byte *)((int)param_3 + 9);
  (*(int *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  (*(uint *)(gen_frame + 0x34)) = bVar1 >> 3 & 1;
  uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x2c))((int *)*param_3);
  if ((char)uVar3 == '\0') {
    if (*(char *)(param_3 + 2) == '\x04') {
      iVar5 = *((int *)GEN_TOP((*(int *)((int)this + (*(int *)(gen_frame + 0x4)) * 4 + 0x194) + 0xa4)));
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar5 + 0x70);
      }
      uVar3 = F_0055a2d0(uVar4);
      if ((char)uVar3 == '\0') {
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
        (*(undefined4 *)(gen_frame + 0xc)) = 6;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
        (*(int *)(gen_frame + 0x14)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      }
      goto LAB_007f5f73;
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    iVar5 = (*(int *)(gen_frame + 0x4));
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x4));
    F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
    if ((*(byte *)((int)param_3 + 9) & 8) != 0) {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + iVar5 * 4 + 0x194) + 0xa4)));
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = *(undefined4 *)(iVar2 + 0x70);
      }
      uVar3 = F_0055a2d0(uVar4);
      if ((char)uVar3 != '\0') {
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x11);
        F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
      (*(int *)(gen_frame + 0x14)) = iVar5;
      F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
      F_0056b630(this,0x1c0,7,0,9,0,0);
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
      *(undefined1 *)(param_2 + 0x15) = 1;
      goto LAB_007f5f73;
    }
    if (*(char *)(param_3 + 2) != '\x01') goto LAB_007f5f73;
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + iVar5 * 4 + 0x194) + 0xa4)));
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x70);
    }
    uVar3 = F_0055a2d0(uVar4);
    if ((char)uVar3 == '\0') goto LAB_007f5f73;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(int *)(gen_frame + 0x14)) = iVar5;
  }
  else {
    if (*(char *)(param_3 + 2) == '\x04') goto LAB_007f5f73;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x4));
  }
  F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
LAB_007f5f73: ;
  F_00557670(param_2,0);
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 5;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: FUN_007f5fb0 */
uint F_007f5fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f5fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (-1 < *(int *)(param_2 + 8)) {
    uVar1 = F_0042a990(*(int *)(param_2 + 8) * 0x58 + 0x1b0 + (int)this);
    F_005b2fe0(*(undefined * PTR32 *)((int)this + 0x188),uVar1);
  }
  F_00557670(param_1,0);
  uVar1 = F_00795230(this);
  return uVar1;
}

/* ref: Client::UI2::AddonLetterEditor::vf25 */
uint F_007f6000(unsigned int gen_a0)
{
  GEN_ENTER(0x7f6000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 in_ecx;
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  if (*(int *)(this + 400) == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  uVar1 = F_0055a350(in_ecx);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),2);
  (*(undefined1 *)(gen_frame + 0x14)) = (char)uVar1;
  F_005a9110(this,6,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar2 = 5;
  do {
    this_00 = this_00 + -2;
    uVar1 = F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: Client::UI2::AddonLetterEditor::vf2 */
uint F_007f60a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f60a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  if ((short)param_1 == 0x11) {
    uVar1 = param_2;
    if (0xd < param_2) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + param_2 * 4 + 0x15c) + 0x84))) + 0xc))))
                        (*(int *)(this + param_2 * 4 + 0x15c) + 0x84);
      uVar1 = F_0055a2d0(uVar1);
      if ((char)uVar1 != '\0') {
        F_0056b630(this,0x18ad7,7,0,9,0,0);
        uVar1 = F_00557670(param_3,0);
        return uVar1;
      }
      F_0056b630(this,0x1c0,7,0,9,0,0);
      uVar1 = F_00557670(param_3,0);
      return uVar1;
    }
  }
  else {
    if ((short)param_1 == 0x12) {
      F_0056b780(this,0);
      uVar1 = F_00557670(param_3,0);
      return uVar1;
    }
    if ((short)param_1 == 0x17) {
      if (param_2 == 0) {
        uVar1 = F_007950e0(this,param_3,param_4);
        return uVar1;
      }
      uVar1 = param_2 - 1;
      if (uVar1 == 0) {
        uVar1 = F_007951b0(this,param_3,param_4);
        return uVar1;
      }
    }
    else if ((short)param_1 == 0x21) {
      uVar1 = param_2 - 2;
      if (uVar1 == 0) {
        uVar1 = F_007f5fb0(this,param_3,param_4);
        return uVar1;
      }
    }
    else if ((short)param_1 == 0x30) {
      uVar1 = param_2;
      if (param_2 - 9 < 5) {
        uVar1 = F_00794ef0(this,param_2 - 9,param_3,param_4);
        return uVar1;
      }
    }
    else if ((short)param_1 == 0x34) {
      uVar1 = param_2;
      if (param_2 - 0xe < 5) {
        uVar1 = F_007f5d30(this,param_2 - 0xe,param_3,param_4);
        return uVar1;
      }
    }
    else if (((short)param_1 == 0x2d) && (uVar1 = param_2, param_2 - 4 < 5)) {
      uVar1 = F_00795450(this,param_2 - 4,param_3,param_4);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonRequest::vf37 */
uint F_007f6220(unsigned int gen_a0)
{
  GEN_ENTER(0x7f6220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  undefined * pAVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  int local_c;
  
  F_005a92d0(this,1,0xb,0);
  F_005a92d0(this,0,10,0);
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1ac) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x70)));
    }
    F_005840a0(pvVar5,0x17,0,this,0);
    if (*(int *)(this + 0x1b0) == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
    }
    F_005840a0(pvVar5,0x17,1,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x180),0x31,0x11,this,0);
    pAVar3 = this + 0x1b4;
    iVar6 = 7;
    local_c = 5;
    do {
      iVar2 = *(int *)(pAVar3 + -0x1c);
      *(undefined4 *)pAVar3 = *(undefined4 *)(pAVar3 + -0x30);
      *(int *)(pAVar3 + 0x14) = iVar2;
      if (iVar2 != 0) {
        F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x2d,iVar6 + -5,this,0);
        F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x30,iVar6,this,0);
        F_005840a0(*(undefined * PTR32 *)(iVar2 + 0x70),0x34,iVar6 + 5,this,0);
      }
      pAVar3 = pAVar3 + 4;
      iVar6 = iVar6 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  AVar1 = this[0x13a];
  uVar4 = F_0055dcb0();
  F_00596b90((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,1);
  uVar4 = F_005b0510((undefined *)this);
  return uVar4;
}

/* ref: FUN_007f6330 */
uint F_007f6330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f6330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  int * piVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint * this_00;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar7 = *(int *)((int)this + param_1 * 4 + 0x1c8);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar7 + 0x84) + 0xc))))(iVar7 + 0x84);
  uVar5 = F_0055a2d0(uVar5);
  if ((char)uVar5 == '\0') {
    F_00559d10(*(undefined4 *)(param_3 + 4),&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x10)));
    F_0055a000(*(undefined * PTR32 *)(param_3 + 4),((ushort *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0xc)));
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(undefined4 *)(gen_frame + 0x2c)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
    (*(ushort *)(gen_frame + 0x26)) = ((undefined2)0x27f);
    (*(int *)(gen_frame + 0x34)) = param_1;
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) = ((undefined2)0x27f) | 0xc00;
    (*(longlong *)(gen_frame + 0x1c)) = (longlong)TRUNC((float10)(*(float *)(gen_frame + 0x14)));
    lVar4 = (*(longlong *)(gen_frame + 0x1c));
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 0)) = (int)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0x14)));
    iVar7 = (uint)((ushort *)(gen_frame + 0x18))[0] + (int)(*(longlong *)(gen_frame + 0x1c));
    (*(longlong *)(gen_frame + 0x1c)) = lVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
    (*(int *)(gen_frame + 0x3c)) = iVar7;
    (*(ushort *)(gen_frame + 0x26)) = ((undefined2)0x27f);
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) = ((undefined2)0x27f) | 0xc00;
    (*(longlong *)(gen_frame + 0x1c)) = (longlong)TRUNC((float10)(*(float *)(gen_frame + 0x10)));
    lVar4 = (*(longlong *)(gen_frame + 0x1c));
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 0)) = (int)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0x10)));
    uVar3 = (int)(*(longlong *)(gen_frame + 0x1c));
    (*(longlong *)(gen_frame + 0x1c)) = lVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
    (*(undefined4 *)(gen_frame + 0x44)) = uVar3;
    F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x28)));
    this_00 = &(*(uint *)(gen_frame + 0x48));
    iVar7 = 3;
    do {
      this_00 = this_00 + -2;
      uVar5 = F_005a2670(this_00);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  else {
    F_00795980(this,param_1);
    F_0056b630(this,0x18ad8,7,0,9,0,0);
    uVar5 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 8))))(*(int * PTR32 *)(uVar5 + 0x38),&(*(longlong *)(gen_frame + 0x1c)),0x11);
    F_005a2670(&(*(longlong *)(gen_frame + 0x1c)));
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar5 = F_0055dcb0();
    F_00590c40((undefined *)(uVar5 + 0xe0),(uint)bVar1);
    piVar2 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x1c8);
    uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2);
    uVar5 = F_0055dcb0();
    if (*(uint *)(uVar5 + 0xf8) != uVar6) {
      uVar5 = F_0055dcb0();
      uVar5 = F_0058d370((undefined *)(uVar5 + 0xe0),uVar6);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar5;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: Client::UI2::AddonRequest::vf2 */
uint F_007f64f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f64f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  undefined4 uVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  uVar2 = param_2;
  uVar4 = param_3;
  if ((short)param_1 == 0x11) {
    if (param_2 < 2) goto LAB_007f66fb;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + param_2 * 4 + 0x1c0) + 0x84))) + 0xc))))
                      (*(int *)(this + param_2 * 4 + 0x1c0) + 0x84);
    uVar2 = F_0055a2d0(uVar2);
    if ((char)uVar2 == '\0') {
      F_0056b630(this,0x18ad8,7,0,9,0,0);
    }
    else {
      F_0056b630(this,0xd1,7,0,9,0,0);
    }
  }
  else if ((short)param_1 == 0x12) {
    F_0056b780(this,0);
  }
  else if ((short)param_1 == 0xc) {
    if (*param_4 != 1) goto LAB_007f66fb;
    if ((char)param_4[1] != '\x01') {
      if ((char)param_4[1] == '\0') {
        *(uint *)(this + 0x1e0) = param_2;
        F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x3c));
        return param_2;
      }
      goto LAB_007f66fb;
    }
    if (param_2 == *(uint *)(this + 0x1e0)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + param_2 * 4 + 0x1c8) + 0x84))) + 0xc))))
                        (*(int *)(this + param_2 * 4 + 0x1c8) + 0x84);
      uVar2 = F_0055a2d0(uVar2);
      if ((char)uVar2 == '\0') {
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0xc)));
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 4;
        F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
        this_00 = &(*(uint *)(gen_frame + 0x38));
        iVar3 = 3;
        do {
          this_00 = this_00 + -2;
          F_005a2670(this_00);
          iVar3 = iVar3 + -1;
          uVar4 = (*(undefined4 *)(gen_frame + 0x14));
        } while (-1 < iVar3);
      }
    }
    *(undefined4 *)(this + 0x1e0) = 0xffffffff;
  }
  else if ((short)param_1 == 0x17) {
    if (param_2 == 0) {
      F_007956e0(this,param_3,param_4);
    }
    else if (param_2 == 1) {
      F_00795750(this,param_3,param_4);
    }
  }
  else if ((short)param_1 == 0x30) {
    if (param_2 - 7 < 5) {
      F_007957c0(this,param_2 - 7,param_3,param_4);
    }
  }
  else if ((short)param_1 == 0x31) {
    if (param_2 == 0x11) {
      F_007957c0(this,5,param_3,param_4);
    }
  }
  else if ((short)param_1 == 0x34) {
    if (param_2 - 0xc < 5) {
      F_007f6330(this,param_2 - 0xc,param_3,param_4);
    }
  }
  else {
    if ((short)param_1 != 0x2d) goto LAB_007f66fb;
    if (param_2 - 2 < 5) {
      F_00795900(this,param_2 - 2,param_3,param_4);
    }
  }
  uVar2 = F_00557670(uVar4,0);
LAB_007f66fb: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_007f6710 */
unsigned int F_007f6710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f6710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint in_ecx;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xf9) & 1) != 0) && ((char)param_1 < '\x05')) {
    piVar1 = (int *)((int)this + (char)param_1 * 4 + 0x1c8);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(*piVar1 + 0xa4) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 0xa4) + 0x70)));
    }
    F_0055a300(pvVar3,param_2);
    iVar2 = *(int *)(*piVar1 + 0xc);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)(*piVar1 + 0x1a) + *(int *)(iVar2 + 4);
    }
    uVar5 = 1;
    if (1 < uVar4) {
      do {
        in_ecx = F_00578ee0((undefined *)(*piVar1 + 4),uVar5);
        pvVar3 = (undefined *)F_00559b90(in_ecx);
        if (pvVar3 != (undefined *)0x0) {
          F_0055a300(pvVar3,param_2);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
  }
  return 0;
}

/* ref: FUN_007f67a0 */
uint F_007f67a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f67a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7fac));
  F_00909c00((int)this + 0x180);
  F_0042b630((int)this + 0x23c);
  F_0042b630((int)this + 0x290);
  in_ecx = (int)this + 900;
  iVar1 = 0x2d;
  do {
    F_0042b630(in_ecx);
    F_0042b630(in_ecx + 0x54);
    in_ecx = in_ecx + 0xa8;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630((int)this + 0x21b4);
  F_0042b630((int)this + 0x2208);
  *(undefined4 *)((int)this + 0x2e4) = 0;
  *(undefined4 *)((int)this + 0x2e8) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  F_00c48350((undefined *)((int)this + 0x2f0),0,0x70);
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonSocialDetailA::vf37 */
uint F_007f6880(unsigned int gen_a0)
{
  GEN_ENTER(0x7f6880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  undefined * pAVar4;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055dcb0();
    F_00596b90((undefined *)(uVar1 + 0xe0),(uint)(byte)this[0x13a],1);
    pAVar4 = this + 0x1ac;
    iVar3 = 4;
    do {
      if (*(int *)pAVar4 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar2,0x17,0,this,0);
      pAVar4 = pAVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    pAVar4 = this + 0x1bc;
    iVar3 = 0x1c;
    do {
      if (*(int *)pAVar4 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar2,0x17,1,this,0);
      pAVar4 = pAVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)(this + 0x188) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    if (*(int *)(this + 0x18c) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,3,this,0);
    if (*(int *)(this + 0x180) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,5,this,0);
    iVar3 = *(int *)(this + 0x184);
    *(undefined4 *)(iVar3 + 0x144) = 0;
    *(undefined4 *)(iVar3 + 0x148) = 0;
    *(undefined4 *)(iVar3 + 0x14c) = 0;
    F_005840a0(*(undefined * PTR32 *)(this + 0x194),6,6,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x194),7,6,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x238),6,7,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x238),7,7,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007f69c0 */
uint F_007f69c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f69c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 in_ecx;
  int * piVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  local_8 = 0;
  local_c = 0;
  piVar3 = (int *)((int)this + 0x2f0);
  do {
    iVar1 = piVar3[-0x4d];
    if (iVar1 == 0) {
      in_ecx = 0;
    }
    else {
      in_ecx = *(undefined4 *)(iVar1 + 0x70);
    }
    uVar2 = F_0055a350(in_ecx);
    if ((((char)uVar2 != '\0') && (*(char *)(iVar1 + 0x88) != '\0')) && (local_8 < *piVar3)) {
      local_c = iVar4 + 1;
      local_8 = *piVar3;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x1c);
  *(int *)((int)this + 0x2e4) = local_c;
  if (local_c != 0) {
    uVar2 = F_0059dde0(*(undefined * PTR32 *)((int)this + local_c * 4 + 0x1b8),1);
    return uVar2;
  }
  uVar2 = F_0059dde0(param_1,0);
  return uVar2;
}

/* ref: FUN_007f6a60 */
uint F_007f6a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f6a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    this_00 = (undefined *)F_00559c20(*(int *)(param_1 + 4));
    uVar1 = 0;
    if ((this_00 != (undefined *)0x0) && (uVar1 = F_005613a0(this_00), uVar1 == 3)) {
      uVar1 = 0;
      piVar2 = (int *)((int)this + 0x1bc);
      do {
        uVar3 = uVar1;
        if ((undefined *)*piVar2 == this_00) break;
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 1;
        uVar3 = 0;
      } while ((int)uVar1 < 0x1c);
      if (*(int *)((int)this + 0x2e4) - 1U == uVar3) {
        uVar1 = F_0059dde0(this_00,1);
        *(undefined1 *)(uVar3 + 0x360 + (int)this) = 1;
        return uVar1;
      }
      *(undefined1 *)(uVar3 + 0x360 + (int)this) = *(undefined1 *)((int)this_00 + 0x88);
    }
  }
  return uVar1;
}

/* ref: FUN_007f6ae0 */
uint F_007f6ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f6ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  uint * this_00;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x18)) = 0;
  uVar3 = 1;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)((int)this + 0x1bc);
  (*(int *)(gen_frame + 0x14)) = 0x1c;
  do {
    iVar4 = *(*(int * PTR32 *)(gen_frame + 0x1c));
    (*(int *)(gen_frame + 0x8)) = iVar4;
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0x70);
    }
    uVar2 = F_0055a350(uVar1);
    if (((char)uVar2 != '\0') && (*(char *)((*(int *)(gen_frame + 0x8)) + 0x88) != '\0')) {
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) | uVar3;
    }
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x1c)) + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    iVar4 = (*(int *)(gen_frame + 0x14)) + -1;
    (*(int *)(gen_frame + 0x14)) = iVar4;
  } while (iVar4 != 0);
  if ((0 < *(int *)((int)this + 0x2e4)) &&
     (*(int *)((int)this + 0x37c) == *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0x88))) + 0xc0)))))
  {
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) | 1 << ((char)*(int *)((int)this + 0x2e4) - 1U & 0x1f);
  }
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
  bVar5 = *((char *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x88))) != '\0';
  if (bVar5) {
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x1;
  }
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)(uint)bVar5;
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x88))) != '\0') {
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)((uint)(*(int * PTR32 *)(gen_frame + 0x1c)) | 2);
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b4) + 0x88))) != '\0') {
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)((uint)(*(int * PTR32 *)(gen_frame + 0x1c)) | 4);
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b8) + 0x88))) != '\0') {
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)((uint)(*(int * PTR32 *)(gen_frame + 0x1c)) | 8);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  uVar1 = *(undefined4 *)((int)this + 0x2e4);
  (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x18));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0x88))) + 0xc0)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),4);
  (*(uint *)(gen_frame + 0x3c)) = (uint)(*(int * PTR32 *)(gen_frame + 0x1c));
  uVar3 = F_0042a990((int)this + 0x290);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),6);
  (*(uint *)(gen_frame + 0x44)) = uVar3;
  uVar3 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x25,5,&(*(undefined4 *)(gen_frame + 0x20)));
  F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0xc)));
  F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar4 = 4;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: Client::UI2::AddonSocialDetailA::vf2 */
uint F_007f6cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f6cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  undefined4 uVar3;
  
  if ((short)param_1 == 0x17) {
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      F_00795b50(this,param_3,param_4);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 1: ;
      F_007f6a60(this,param_3,param_4);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 2: ;
      F_007f6ae0(this,param_3,param_4);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 3: ;
      F_00795c50(this,param_3,param_4);
    }
    uVar2 = F_00557670(param_3,0);
    return uVar2;
  }
  if ((short)param_1 == 0x23) {
    if (param_2 == 5) {
      F_00795c90(this,param_3,param_4);
    }
    uVar2 = F_00557670(param_3,0);
    return uVar2;
  }
  if ((short)param_1 == 6) {
    F_00560760(((uint *)(gen_frame + 0x0)));
    if (param_2 == 6) {
      if (**(char * PTR32 *)(this + 0x21b4) != '\0') {
        uVar2 = F_0042a990(this + 0x21b4);
        AVar1 = this[0x13a];
        ((uint *)(gen_frame + 0x0))[0] = uVar2;
        uVar2 = F_0055dcb0();
        uVar3 = *(undefined4 *)(this + 0x194);
        goto LAB_007f6e04;
      }
    }
    else if ((param_2 == 7) && (**(char * PTR32 *)(this + 0x2208) != '\0')) {
      uVar2 = F_0042a990(this + 0x2208);
      AVar1 = this[0x13a];
      ((uint *)(gen_frame + 0x0))[0] = uVar2;
      uVar2 = F_0055dcb0();
      uVar3 = *(undefined4 *)(this + 0x238);
LAB_007f6e04: ;
      F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)(byte)AVar1,uVar3,((uint *)(gen_frame + 0x0)),0,0);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
  }
  else {
    if ((short)param_1 != 7) {
      return CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
    }
    if ((5 < param_2) && (param_2 < 8)) {
      AVar1 = this[0x13a];
      uVar2 = F_0055dcb0();
      F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    }
  }
  uVar2 = F_00557670(param_3,0);
  return uVar2;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf46 */
byte F_007f6e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f6e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte * pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  pbVar1 = param_2;
  if ((param_2 != (byte *)0x0) && (*(int *)(this + 0xf4c) != 0)) {
    if ((*param_2 & 0xf) == 0) {
      param_2 = (byte *)0x0;
    }
    else {
      param_2 = *(byte * PTR32 *)(param_2 + 4);
    }
    if (((uint)param_2 & 1) != 0) {
      if ((pbVar1[0x300] & 0xf) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(pbVar1 + 0x304);
      }
      local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),iVar2 == 0);
      if (*(undefined * PTR32 *)(this + 0xf58) != (undefined *)0x0) {
        F_0059dde0(*(undefined * PTR32 *)(this + 0xf58),local_8);
      }
      if (*(undefined * PTR32 *)(this + 0xf5c) != (undefined *)0x0) {
        F_0059dde0(*(undefined * PTR32 *)(this + 0xf5c),(uint)(iVar2 != 0));
      }
      if (*(undefined * PTR32 *)(this + 0xf48) != (undefined *)0x0) {
        if ((pbVar1[0x2f8] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar1 + 0x2fc);
        }
        F_005b2fe0(*(undefined * PTR32 *)(this + 0xf48),uVar3);
      }
    }
    if (((uint)param_2 & 2) != 0) {
      if ((pbVar1[0x308] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(pbVar1 + 0x30c);
      }
      F_007964e0(this,uVar3);
    }
    if (((uint)param_2 & 4) != 0) {
      if ((pbVar1[0x310] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(pbVar1 + 0x314);
      }
      F_00796520(this,uVar3);
    }
    if (((uint)param_2 & 8) != 0) {
      if (*(undefined * PTR32 *)(this + 0x1048) != (undefined *)0x0) {
        if ((pbVar1[0x318] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar1 + 0x31c);
        }
        F_0059cf90(*(undefined * PTR32 *)(this + 0x1048),uVar3,1,1);
      }
      if (*(undefined * PTR32 *)(this + 0x104c) != (undefined *)0x0) {
        if ((pbVar1[800] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar1 + 0x324);
        }
        F_0059cf90(*(undefined * PTR32 *)(this + 0x104c),uVar3,1,1);
      }
    }
    if (((uint)param_2 & 0x10) != 0) {
      if ((pbVar1[0x328] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(pbVar1 + 0x32c);
      }
      F_00796560(this,uVar3);
    }
    if (((uint)param_2 & 0x20) != 0) {
      if ((pbVar1[0x330] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(pbVar1 + 0x334);
      }
      F_007965c0(this,uVar3);
    }
    if (((uint)param_2 & 0x40) != 0) {
      if ((pbVar1[0x338] & 0xf) == 0) {
        F_00796600(this,0);
        return 1;
      }
      F_00796600(this,*(undefined4 *)(pbVar1 + 0x33c));
    }
    return 1;
  }
  if ((param_2[0x308] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x30c);
  }
  *(undefined4 *)(this + 0x1050) = uVar3;
  if ((param_2[0x310] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x314);
  }
  *(undefined4 *)(this + 0x1054) = uVar3;
  if ((param_2[0x328] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x32c);
  }
  *(undefined4 *)(this + 0x1058) = uVar3;
  if ((param_2[0x330] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x334);
  }
  *(undefined4 *)(this + 0x105c) = uVar3;
  if ((param_2[0x338] & 0xf) == 0) {
    *(undefined4 *)(this + 0x1060) = 0;
    return 0;
  }
  *(undefined4 *)(this + 0x1060) = *(undefined4 *)(param_2 + 0x33c);
  return 0;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf52 */
byte F_007f70d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f70d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(int *)(this + 0xf4c) != 0) {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0xf4c) + 0x70))));
    if ((((char)uVar1 != '\0') && (*param_1 == 5)) && ((char)param_1[1] == '\0')) {
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),1);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      (*(undefined4 *)(gen_frame + 0x14)) = 3;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_007f7160 */
uint F_007f7160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f7160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  undefined4 uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  if (999 < param_1) {
    uVar2 = param_1 % 100;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    if (param_1 < 0x44c) {
      iVar5 = *(int *)((int)this + uVar2 * 4 + 0xf60);
      uVar4 = 3;
    }
    else if (param_1 < 0x4b0) {
      iVar5 = *(int *)((int)this + uVar2 * 4 + 0xf88);
      uVar4 = 4;
    }
    else if (param_1 < 0x514) {
      iVar5 = *(int *)((int)this + uVar2 * 4 + 0x1008);
      uVar4 = 6;
    }
    else if (param_1 < 0x578) {
      iVar5 = *(int *)((int)this + uVar2 * 4 + 0x102c);
      uVar4 = 7;
    }
    else {
      if (0x5db < param_1) {
        puVar3 = &(*(uint *)(gen_frame + 0x38));
        iVar5 = 4;
        do {
          puVar3 = puVar3 + -2;
          uVar2 = F_005a2670(puVar3);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      iVar5 = *(int *)((int)this + uVar2 * 4 + 0x103c);
      uVar4 = 8;
    }
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0x88) != '\0')) {
      (*(undefined4 *)(gen_frame + 0xc)) = 1;
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    bVar1 = *(byte *)(param_3 + 6);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0xc));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(uint *)(gen_frame + 0x2c)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
    (*(uint *)(gen_frame + 0x34)) = 0;
    F_005a9110(this,5,&(*(undefined4 *)(gen_frame + 0x10)));
    F_00557670(param_2,0);
    puVar3 = &(*(uint *)(gen_frame + 0x38));
    iVar5 = 4;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar2;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 3: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    uVar4 = 1;
    break;
  case 4: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    uVar4 = 1;
    break;
  case 5: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
    uVar4 = 1;
    break;
  case 6: ;
  case 7: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(uint *)(gen_frame + 0x1c)) = (uint)(param_1 != 6);
    if (*(int *)((int)this + 0xf48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_0042a990(*(int *)((int)this + 0xf48) + 0xf0);
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
    (*(uint *)(gen_frame + 0x34)) = uVar2;
    uVar4 = 5;
    break;
  default: ;
    goto switchD_007f72fc_default;
  }
  F_005a9110(this,uVar4,&(*(undefined4 *)(gen_frame + 0x10)));
switchD_007f72fc_default: ;
  F_00557670(param_2,0);
  puVar3 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 4;
  do {
    puVar3 = puVar3 + -2;
    uVar2 = F_005a2670(puVar3);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_007f7400 */
uint F_007f7400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f7400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    bVar2 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x144,7,0,9,0,0);
    return CONCAT31(extraout_var_01,bVar2);
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))) != 0) {
    F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x11a,7,0,9,0,0);
    F_005614a0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    uVar3 = F_00559d70(uVar4);
    sVar1 = (short)(*(undefined * PTR32 *)(gen_frame + 0x8)) + uVar3;
    (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = sVar1;
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    uVar3 = F_00559d90(uVar4);
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))) + 0x70)));
    }
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = (short)(*(undefined4 *)&gen_args[1]) + uVar3;
    uVar3 = F_0055a030(uVar5);
    (*(undefined4 *)&gen_args[1]) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 2)),(short)(*(undefined4 *)&gen_args[1]) + uVar3);
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf48))) + 0x70)));
    }
    uVar3 = F_0055a020(uVar5);
    sVar1 = (short)(*(undefined * PTR32 *)(gen_frame + 0x8)) + (uVar3 >> 1);
    (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = sVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)),sVar1)));
    bVar2 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x11a,0,0,9,(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
    return CONCAT31(extraout_var,bVar2);
  }
  bVar2 = F_0056b780((*(undefined * PTR32 *)&gen_args[0]),0);
  return CONCAT31(extraout_var_00,bVar2);
}

/* ref: Client::UI2::AddonItemSearch::vf46 */
byte F_007f74f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f74f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  bool bVar1;
  bool bVar2;
  undefined1 AVar3;
  int iVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  undefined * pAVar7;
  uint uVar8;
  uint uVar9;
  byte * pbVar10;
  int iVar11;
  
  if (param_2 == (undefined4 *)0x0) {
    return 1;
  }
  if (*(int *)(this + 0x2a3c) == 0) {
    return 1;
  }
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (((byte)*param_2 & 0xf) == 3) {
    (*(uint *)(gen_frame + 0x8)) = param_2[1];
  }
  if (((*(uint *)(gen_frame + 0x8)) & 1) != 0) {
    if ((*(byte *)(param_2 + 0x18e) & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2[399];
    }
    (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),-1 < iVar4);
    F_0055a300(*(undefined * PTR32 *)(this + 0x2a58),(*(uint *)(gen_frame + 0x4)));
    if (-1 < iVar4) {
      if ((*(byte *)(param_2 + 0x18e) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = param_2[399];
      }
      F_00591c00(*(undefined * PTR32 *)(this + 0x2a58),uVar5,0);
    }
    if ((*(byte *)(param_2 + 400) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_2[0x191];
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x2a54),uVar5);
  }
  if (((*(uint *)(gen_frame + 0x8)) & 2) != 0) {
    if ((*(byte *)(param_2 + 0x196) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_2[0x197];
    }
    F_0059cf90(*(undefined * PTR32 *)(this + 0x2a30),uVar5,1,1);
  }
  if (((*(uint *)(gen_frame + 0x8)) & 4) != 0) {
    F_0055a300(*(undefined * PTR32 *)(this + 0x2a5c),1);
    if ((*(byte *)(param_2 + 0x1da) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_2[0x1db];
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x2a5c),uVar5);
    if ((*(byte *)(param_2 + 0x188) & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2[0x189];
    }
    bVar1 = 0 < iVar4;
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar1);
    if ((*(byte *)(param_2 + 0x18a) & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2[0x18b];
    }
    bVar2 = 0 < iVar4;
    (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),bVar2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a4c) + 0x28))))(*(int * PTR32 *)(this + 0x2a4c),(*(undefined4 *)(gen_frame + 0x0)));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a50) + 0x28))))(*(int * PTR32 *)(this + 0x2a50),(*(uint *)(gen_frame + 0x4)));
    if ((bVar1) || (bVar2)) {
      F_0056b630(this,0x18ab7,7,0,9,0,0);
      if ((!bVar1) && (!bVar2)) goto LAB_007f768f;
      AVar3 = (undefined1)0x1;
    }
    else if (this[0x2a6c] == (undefined1)0x0) {
LAB_007f768f: ;
      AVar3 = (undefined1)0x0;
    }
    else {
      F_0056b780(this,0);
      AVar3 = (undefined1)0x0;
    }
    this[0x2a6c] = AVar3;
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),AVar3);
    pvVar6 = (undefined *)0x0;
    if (*(int *)(this + 0x2a4c) != 0) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a4c) + 0x70)));
    }
    F_0055a300(pvVar6,(*(undefined4 *)(gen_frame + 0x0)));
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),this[0x2a6c]);
    pvVar6 = (undefined *)0x0;
    if (*(int *)(this + 0x2a50) != 0) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a50) + 0x70)));
    }
    F_0055a300(pvVar6,(*(undefined4 *)(gen_frame + 0x0)));
  }
  if (((*(uint *)(gen_frame + 0x8)) & 8) != 0) {
    F_0042e430(this + 0xf58,"");
    F_0042e430(this + 0xfac,"");
    if ((*(byte *)(param_2 + 0x1dc) & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2[0x1dd];
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a2c) + 0x28))))(*(int * PTR32 *)(this + 0x2a2c),(uint)(0 < iVar4));
  }
  if (((*(uint *)(gen_frame + 0x8)) & 0x10) == 0) goto LAB_007f780e;
  if (this[0x2a6d] != (undefined1)0x0) {
    *(undefined2 *)(this + 0x2a6d) = 0x100;
  }
  if ((*(byte *)(param_2 + 0x30c) & 0xf) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_2[0x30d];
  }
  if (iVar4 != 0) {
    pbVar10 = (byte *)(param_2 + 0x2a8);
    pAVar7 = this + 0x28f0;
    iVar11 = iVar4;
    do {
      if ((*pbVar10 & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar10 + 4);
      }
      *(undefined4 *)pAVar7 = uVar5;
      pbVar10 = pbVar10 + 8;
      pAVar7 = pAVar7 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a44) + 0x88))),iVar4,this + 0x28f0,0);
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2a44) + 0x88))) + 0x70))))
            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2a44) + 0x88))));
  F_00581b80(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a44) + 0x88))));
  F_0059caa0(*(undefined * PTR32 *)(this + 0x2a44),0);
  if ((*(byte *)(param_2 + 0x2a6) & 0xf) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_2[0x2a7];
  }
  if (iVar4 == 0) {
LAB_007f77f6: ;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),1);
    if (uVar8 < 2) goto LAB_007f77f6;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a44) + 0x28))))(*(int * PTR32 *)(this + 0x2a44),(*(uint *)(gen_frame + 0x4)));
LAB_007f780e: ;
  if (((*(uint *)(gen_frame + 0x8)) & 0x20) != 0) {
    if ((*(byte *)(param_2 + 0x2a6) & 0xf) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_2[0x2a7];
    }
    uVar9 = 0;
    if (uVar8 != 0) {
      pbVar10 = (byte *)(param_2 + 0x1de);
      do {
        if ((*pbVar10 & 0xf) == 0) {
          AVar3 = (undefined1)0x0;
        }
        else {
          AVar3 = SUB41(*(undefined4 *)(pbVar10 + 4),0);
        }
        this[uVar9 + 0x29b8] = AVar3;
        uVar9 = uVar9 + 1;
        pbVar10 = pbVar10 + 8;
      } while (uVar9 < uVar8);
    }
    if (*(int *)(this + 0x2a3c) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 0x2a3c) + 0x11d))) = 1;
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonItemSearch::vf47 */
uint F_007f7870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f7870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  ushort uVar2;
  uint3 extraout_var = 0;
  uint3 extraout_var_00 = 0;
  uint3 uVar6;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  int iVar7;
  uint uVar8;
  undefined4 * puVar9;
  uint * this_00;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (*(int *)(this + 0xf50) == 0) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x14)),*(int *)(this + 0x2a28) + 0xf0);
    bVar1 = F_0042b740(((undefined1 *)(gen_frame + 0x14)),"");
    uVar6 = extraout_var;
    if ((bVar1 == 0) ||
       (bVar1 = F_0042b6f0(((undefined1 *)(gen_frame + 0x14)),this + 0xf58), uVar6 = extraout_var_00, bVar1 == 0)) {
      iVar7 = (uint)uVar6 << 8;
    }
    else {
      iVar7 = CONCAT31(extraout_var_00,1);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a2c) + 0x28))))(*(int * PTR32 *)(this + 0x2a2c),iVar7);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  }
  uVar3 = *(uint *)(param_1 + 0x90);
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  (*(int *)(gen_frame + 0x10)) = *(int *)(param_2 + 0x84);
  if ((uVar3 != 0) && (*(int *)(param_2 + 0x84) != 0)) {
    uVar8 = **(uint * PTR32 *)(uVar3 + 0x20);
    (*(uint *)(gen_frame + 0xc)) = uVar8;
    uVar3 = F_0055a300(*(undefined * PTR32 *)(this + 0x2a48),(uint)((int)uVar8 < 1));
    if ((int)uVar8 < 1) {
      if (uVar8 == 0) {
        F_0055a300(*(undefined * PTR32 *)(this + 0x2a5c),0);
        (*(undefined4 *)(gen_frame + 0x68)) = 0;
        (*(undefined4 *)(gen_frame + 0x70)) = 0;
        (*(undefined4 *)(gen_frame + 0x78)) = 0;
        (*(undefined4 *)(gen_frame + 0x80)) = 0;
        uVar10 = **(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x10)) + 0x20);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x68)),6);
        (*(undefined4 *)(gen_frame + 0x6c)) = uVar10;
        uVar2 = F_0055a020(*(undefined4 *)(this + 0x2a48));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x70)),4);
        (*(uint *)(gen_frame + 0x74)) = (uint)uVar2;
        uVar3 = F_0055ab00(*(undefined4 *)(this + 0x2a48));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x78)),4);
        (*(uint *)(gen_frame + 0x7c)) = uVar3;
        bVar1 = F_0055ab50(*(undefined4 *)(this + 0x2a48));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x80)),4);
        (*(uint *)(gen_frame + 0x84)) = (uint)bVar1;
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 4))))
                  (*(int * PTR32 *)(uVar3 + 0x38),((byte *)(gen_frame + 0x4)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x68)));
        F_0042e430(this + 0x1000,-(uint)((((byte *)(gen_frame + 0x4))[0] & 0xf) != 0) & (*(uint *)(gen_frame + 0x8)));
        uVar3 = F_0042a990(this + 0x1000);
        F_00584110(*(undefined * PTR32 *)(this + 0x2a48),uVar3);
        F_0058d980(*(undefined4 *)(this + 0x2a3c),0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a3c) + 0x78))))(*(int * PTR32 *)(this + 0x2a3c));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a44) + 0x28))))(*(int * PTR32 *)(this + 0x2a44),0);
        pvVar5 = (undefined *)0x0;
        if (*(int *)(this + 0x2a4c) != 0) {
          pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a4c) + 0x70)));
        }
        F_0055a300(pvVar5,0);
        pvVar5 = (undefined *)0x0;
        if (*(int *)(this + 0x2a50) != 0) {
          pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2a50) + 0x70)));
        }
        F_0055a300(pvVar5,0);
        F_005a2670(((byte *)(gen_frame + 0x4)));
        this_00 = &(*(uint *)(gen_frame + 0x88));
        iVar7 = 3;
        do {
          this_00 = this_00 + -2;
          uVar3 = F_005a2670(this_00);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
    }
    else {
      F_00592700(*(undefined * PTR32 *)(this + 0x2a3c),0);
      if (*(int *)(this + 0x2a68) < (int)uVar8) {
        *(uint *)(this + 0x2a68) = uVar8;
        if (*(int *)(this + 0x2a64) != 0) {
          F_00406810(*(int *)(this + 0x2a64));
          *(undefined4 *)(this + 0x2a64) = 0;
        }
        piVar4 = (int *)F_00404270();
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,*(int *)(this + 0x2a68) << 4,0x10);
        *(uint *)(this + 0x2a64) = uVar3;
      }
      puVar9 = *(undefined4 * PTR32 *)(this + 0x2a64);
      if (0 < (int)uVar8) {
        iVar7 = 4;
        (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0xc));
        do {
          *puVar9 = *((undefined4 *)GEN_TOP((iVar7 + *(int *)((*(uint *)(gen_frame + 0x8)) + 0x20))));
          puVar9[1] = *((undefined4 *)GEN_TOP((iVar7 + 4 + *(int *)((*(uint *)(gen_frame + 0x8)) + 0x20))));
          puVar9[2] = *((undefined4 *)GEN_TOP((iVar7 + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20))));
          puVar9[3] = *((undefined4 *)GEN_TOP((iVar7 + 4 + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20))));
          F_00596d70(*(undefined * PTR32 *)(this + 0x2a3c),puVar9[1],0,0,0);
          iVar7 = iVar7 + 8;
          puVar9 = puVar9 + 4;
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
          uVar8 = (*(uint *)(gen_frame + 0xc));
        } while ((*(uint *)(gen_frame + 0x0)) != 0);
      }
      uVar3 = F_0058d980(*(undefined4 *)(this + 0x2a3c),uVar8);
      if (this[0x2a6d] != (undefined1)0x0) {
        *(undefined2 *)(this + 0x2a6d) = 0x100;
      }
    }
    if (this[0x2a6e] != (undefined1)0x0) {
      this[0x2a6e] = (undefined1)0x0;
      uVar3 = F_0055dcb0();
      if (*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == this) {
        uVar11 = 0;
        uVar10 = 1;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a3c) + 0x3c))))(*(int * PTR32 *)(this + 0x2a3c));
        uVar3 = F_0059b340(this,uVar3,uVar10,uVar11);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: Client::UI2::AddonItemSearch::vf60 */
byte F_007f7bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f7bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  if (this[0x2a6c] == (undefined1)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(byte *)(gen_frame + 0x7)) = 0;
  if (*(int *)(this + 0x2a4c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x2a4c) + 0x70)));
  }
  uVar2 = F_0055a350(uVar1);
  if (((char)uVar2 == '\0') || (param_1 != 0xf)) {
    if (*(int *)(this + 0x2a50) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x2a50) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1);
    if (((char)uVar2 == '\0') || (param_1 != 0x10)) goto LAB_007f7cd4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
  }
  (*(byte *)(gen_frame + 0x7)) = 1;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x8)));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a4c) + 0x28))))(*(int * PTR32 *)(this + 0x2a4c),0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a50) + 0x28))))(*(int * PTR32 *)(this + 0x2a50),0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x2a44) + 0x28))))(*(int * PTR32 *)(this + 0x2a44),0);
  this[0x2a6c] = (undefined1)0x0;
  F_0059ead0(*(undefined * PTR32 *)(this + 0x2a3c),0,0,1);
LAB_007f7cd4: ;
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar3 = 7;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (*(byte *)(gen_frame + 0x7));
}

/* ref: FUN_007f7f20 */
uint F_007f7f20(unsigned int gen_a0)
{
  GEN_ENTER(0x7f7f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pvVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a2c) + 0x28))))(*(int * PTR32 *)((int)this + 0x2a2c),0);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x2a48),0);
  F_0042ccf0((undefined *)((int)this + 0xf58),*(int *)((int)this + 0x2a28) + 0xf0);
  F_0042ccf0((undefined *)((int)this + 0xfac),*(int *)((int)this + 0x2a28) + 0x9c);
  if (*(int *)((int)this + 0x2a4c) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2a4c) + 0x70)));
  }
  F_0055a300(pvVar1,0);
  if (*(int *)((int)this + 0x2a50) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2a50) + 0x70)));
  }
  F_0055a300(pvVar1,0);
  *(undefined1 *)((int)this + 0x2a6c) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
  uVar4 = *(undefined4 *)((int)this + 0xf54);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
  uVar4 = *(undefined4 *)((int)this + 0xf50);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar4;
  uVar2 = F_0042a990((int)this + 0xf58);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(uint *)(gen_frame + 0x24)) = uVar2;
  uVar2 = F_0042a990((int)this + 0xfac);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
  (*(uint *)(gen_frame + 0x2c)) = uVar2;
  if (*(int *)((int)this + 0x2a30) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2a30) + 0x178)));
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(undefined4 *)(gen_frame + 0x34)) = uVar4;
  if (*(int *)((int)this + 0x2a34) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2a34) + 0x178)));
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar4;
  uVar2 = F_00562c60(*(undefined4 *)((int)this + 0x2a38));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),3);
  (*(uint *)(gen_frame + 0x44)) = uVar2;
  F_005a9110(this,8,&(*(undefined4 *)(gen_frame + 0x8)));
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  *(uint *)((int)this + 0xf4c) = uVar2;
  if (*(char *)((int)this + 0x2a6d) == '\0') {
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a3c) + 0x3c))))(*(int * PTR32 *)((int)this + 0x2a3c));
    F_0059b340(this,uVar2,uVar4,uVar5);
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a3c) + 0x74))))(*(int * PTR32 *)((int)this + 0x2a3c),0xfffffffe,0);
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar3 = 7;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_007f8110 */
uint F_007f8110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f8110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
    bVar2 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x792,7,0,9,0,0);
    return CONCAT31(extraout_var_01,bVar2);
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))) != 0) {
    F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x11a,7,0,9,0,0);
    F_005614a0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    uVar3 = F_00559d70(uVar4);
    sVar1 = (short)(*(undefined * PTR32 *)(gen_frame + 0x8)) + uVar3;
    (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = sVar1;
    uVar4 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    uVar3 = F_00559d90(uVar4);
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))) + 0x70)));
    }
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = (short)(*(undefined4 *)&gen_args[1]) + uVar3;
    uVar3 = F_0055a030(uVar5);
    (*(undefined4 *)&gen_args[1]) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 2)),(short)(*(undefined4 *)&gen_args[1]) + uVar3);
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2a28))) + 0x70)));
    }
    uVar3 = F_0055a020(uVar5);
    sVar1 = (short)(*(undefined * PTR32 *)(gen_frame + 0x8)) + (uVar3 >> 1);
    (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = sVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)),sVar1)));
    bVar2 = F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x11a,0,0,9,(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
    return CONCAT31(extraout_var,bVar2);
  }
  bVar2 = F_0056b780((*(undefined * PTR32 *)&gen_args[0]),0);
  return CONCAT31(extraout_var_00,bVar2);
}

/* ref: Client::UI2::AddonItemSearchHistory::vf44 */
uint F_007f8200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f8200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  undefined4 in_ecx;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
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
    if (*(int *)(this + 0x180) == 0) {
      in_ecx = 0;
    }
    else {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_0055a3c0(in_ecx,0);
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 6;
    (*(undefined4 *)(gen_frame + 0x28)) = 4;
    (*(undefined4 *)(gen_frame + 0x34)) = 5;
    (*(undefined4 *)(gen_frame + 0x40)) = 7;
    (*(undefined4 *)(gen_frame + 0x4c)) = 2;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x797530));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    F_00574320(*(undefined * PTR32 *)(this + 0x180),&(*(undefined * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x1c)),5,0);
    if (*(int *)(this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_00568380(pvVar3,0x21,0,this,0,0);
    if (*(int *)(this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_00568380(pvVar3,0x20,0,this,0,0);
    if (*(int *)(this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_00568380(pvVar3,0x1f,0,this,0,0);
  }
  F_005a91d0(this,0,0x21);
  uVar1 = F_005a91d0(this,1,0x24);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_007f8380 */
uint F_007f8380(unsigned int gen_a0)
{
  GEN_ENTER(0x7f8380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c86bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 400) =
       (*(undefined * PTR32 (*)[4])REFP(0x10c86a8));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf37 */
uint F_007f83e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f83e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  int iVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar3 = 0;
    pAVar2 = this + 0x180;
    do {
      if (*(int *)pAVar2 != 0) {
        F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,iVar3 + 1,this,0);
      }
      iVar3 = iVar3 + 1;
      pAVar2 = pAVar2 + 4;
    } while (iVar3 < 2);
    F_005a92d0(this,1,0x2c,0);
    F_005a92d0(this,0,0x28,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf2 */
unsigned int F_007f8440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((short)param_1 == 0x17) && (param_2 - 1U < 2)) {
    F_007977a0(this,param_2 + -1);
  }
  return 0;
}

/* ref: FUN_007f8460 */
uint F_007f8460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f8460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*((byte *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) & 1) != 0) {
    return *(uint *)((int)this + 0x19c);
  }
  return *(uint *)((int)this + 0x1a0);
}

/* ref: FUN_007f8490 */
uint F_007f8490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f8490u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10)));
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,uVar2);
  return uVar1;
}

/* ref: FUN_007f84c0 */
uint F_007f84c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f84c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10)));
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,uVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf47 */
uint F_007f84f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f84f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  uint3 uVar5;
  int iVar4;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined * pAVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 0xa8);
  iVar6 = *(int *)(param_2 + 0x98);
  if (0 < **(int * PTR32 *)(iVar10 + 0x20)) {
    F_00591c00(*(undefined * PTR32 *)(this + 0x184),**(int * PTR32 *)(iVar10 + 0x20),0);
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x180),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0xc))));
  F_00584110(*(undefined * PTR32 *)(this + 0x18c),**(undefined4 * PTR32 *)(iVar6 + 0x20));
  F_00584110(*(undefined * PTR32 *)(this + 400),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 4))));
  F_00584110(*(undefined * PTR32 *)(this + 0x194),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 8))));
  *(undefined4 *)(this + 0x1d0) = *((undefined4 *)GEN_TOP((*(int *)(iVar10 + 0x20) + 0x14)));
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x20) + 0x18)));
  iVar8 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x20) + 4)));
  pvVar2 = (undefined *)0x0;
  if (*(int *)(this + 0x198) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
  }
  uVar7 = CONCAT31((int3)((uint)iVar8 >> 8),iVar8 != 0);
  F_0055a300(pvVar2,uVar7);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x28))))(*(int * PTR32 *)(this + 0x198),uVar7);
  pvVar2 = *(undefined * PTR32 *)(this + 0x198);
  uVar7 = *((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x10)));
  if (pvVar2 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00561550(pvVar2,2);
    if (pvVar1 != (undefined *)0x0) {
      F_00591c00(pvVar1,iVar8,0);
    }
    pvVar2 = (undefined *)F_00561530(pvVar2,3);
    if (pvVar2 != (undefined *)0x0) {
      F_00584110(pvVar2,uVar7);
    }
  }
  pAVar9 = this + 0x19c;
  iVar8 = 3;
  do {
    if (*(int *)pAVar9 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar9 + 0x70);
    }
    F_0055a300(pvVar2,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar9 + 0x28))))(*(int * PTR32 *)pAVar9,0);
    pAVar9 = pAVar9 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (0 < *(int *)(this + 0x1d0)) {
    pAVar9 = this + 0x19c;
    param_1 = 0;
    do {
      iVar8 = *((int *)GEN_TOP((pAVar9 + *(int *)(iVar10 + 0x20) + (-0x194 - (int)this))));
      if (iVar8 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar9 + 0x28))))(*(int * PTR32 *)pAVar9,1);
        if (*(int *)pAVar9 == 0) {
          pvVar2 = (undefined *)0x0;
        }
        else {
          pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar9 + 0x70);
        }
        F_0055a300(pvVar2,1);
        uVar7 = *((undefined4 *)GEN_TOP((pAVar9 + *(int *)(iVar6 + 0x20) + (-0x188 - (int)this))));
        pvVar2 = *(undefined * PTR32 *)pAVar9;
        if (pvVar2 != (undefined *)0x0) {
          pvVar1 = (undefined *)F_00561550(pvVar2,2);
          if (pvVar1 != (undefined *)0x0) {
            F_00591c00(pvVar1,iVar8,0);
          }
          pvVar2 = (undefined *)F_00561530(pvVar2,3);
          if (pvVar2 != (undefined *)0x0) {
            F_00584110(pvVar2,uVar7);
          }
        }
      }
      param_1 = param_1 + 1;
      pAVar9 = pAVar9 + 4;
    } while (param_1 < *(int *)(this + 0x1d0));
  }
  uVar3 = F_00584110(*(undefined * PTR32 *)(this + 0x1b0),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x20))));
  pvVar2 = *(undefined * PTR32 *)(this + 0x1a8);
  if (pvVar2 != (undefined *)0x0) {
    if (iVar4 < 1) {
      uVar3 = F_0055a300(pvVar2,0);
    }
    else {
      F_0055a300(pvVar2,1);
      uVar3 = F_0059d670(*(undefined * PTR32 *)(this + 0x1a8),0x66 - (uint)(*(int *)(this + 0x1d0) != 0));
    }
  }
  uVar5 = (uint3)(uVar3 >> 8);
  if ((iVar4 < 1) || (*(int *)(this + 0x1d0) != iVar4)) {
    iVar4 = (uint)uVar5 << 8;
  }
  else {
    iVar4 = CONCAT31(uVar5,1);
  }
  F_0055a300(*(undefined * PTR32 *)(this + 0x1ac),iVar4);
  F_00584110(*(undefined * PTR32 *)(this + 0x1b4),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x24))));
  F_00584110(*(undefined * PTR32 *)(this + 0x1b8),*((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x28))));
  iVar6 = *((int *)GEN_TOP((*(int *)(iVar10 + 0x20) + 0x1c)));
  iVar10 = 0;
  if (iVar6 == 1) {
    iVar6 = *(int *)(this + 0x1cc);
    iVar10 = 0x65;
    uVar3 = 0;
  }
  else {
    uVar3 = iVar6 - 2;
    if (uVar3 != 0) goto LAB_007f87b1;
    iVar10 = iVar6 + 100;
    F_0055b080(*(int *)(this + 0x1c4) + 0x78);
    iVar6 = *(int *)(this + 0x1c8);
  }
  F_0055b080(iVar6 + 0x78);
LAB_007f87b1: ;
  if ((*(undefined * PTR32 *)(this + 0x1bc) != (undefined *)0x0) && (iVar10 != 0)) {
    uVar3 = F_0059d670(*(undefined * PTR32 *)(this + 0x1bc),iVar10);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf37 */
uint F_007f87d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f87d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,0xf,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,0x10,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x68))),6,0xf,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x68))),7,0xf,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x21,0xc,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x24,0xc,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x25,0xc,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x1f,0xc,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar3,0x20,0xc,this,0);
  }
  F_005a92d0(this,1,0x2c,0);
  F_005a92d0(this,0,0x28,0);
  AVar1 = this[0x13a];
  uVar2 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf47 */
uint F_007f8910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f8910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar6 = *(int *)(param_1 + 0xb0);
  uVar7 = 0;
  iVar2 = 0;
  iVar5 = 0;
  do {
    uVar3 = *((uint *)GEN_TOP((iVar5 + 4 + *(int *)(iVar6 + 0x20))));
    if (uVar3 < 0x10) {
      this[uVar3 + 400] = SUB41(iVar2,0);
      uVar7 = uVar7 + 1;
    }
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + 0xc;
  } while (iVar2 < 0x10);
  uVar7 = F_0058d980(*(undefined4 *)(this + 0x18c),uVar7);
  if ((((byte)this[0xf9] & 1) != 0) && (this[0x1a8] == (undefined1)0x0)) {
    uVar7 = *((uint *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0)));
    if (uVar7 < 0x10) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = 2;
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(int *)(gen_frame + 0x14)) = (int)(short)uVar4 + (uVar3 & 0xffff);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(int *)(gen_frame + 0x1c)) = (int)(short)uVar3;
      AVar1 = this[uVar7 + 400];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
      (*(uint *)(gen_frame + 0x24)) = (uint)(byte)AVar1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar6 = 3;
      do {
        this_00 = this_00 + -2;
        uVar7 = F_005a2670(this_00);
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    this[0x1a8] = (undefined1)0x1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar7;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf52 */
byte F_007f8a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f8a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = 0;
  if (*param_1 == 0xf) {
    F_007980a0(this);
    bVar1 = 1;
  }
  else if (*param_1 == 0x10) {
    F_00798100(this);
    return 1;
  }
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf2 */
uint F_007f8a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f8a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined * in_ecx;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  bool bVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = param_1 & 0xffff;
  uVar4 = uVar3 - 6;
  (*(uint *)(gen_frame + 0x14)) = param_3;
  if (0x1f < uVar4) goto switchD_007f8ab5_caseD_8;
  uVar4 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7f8dc4) + uVar3 + 2)));
  uVar5 = param_3;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 6: ;
    if (param_2 != 0xf) goto switchD_007f8ab5_caseD_8;
    iVar7 = *((int *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0)));
    uVar4 = F_005c0730(*(undefined4 *)(this + 0x180));
    if (((char)uVar4 == '\0') && (-1 < iVar7)) {
      if ((this[0x1a0] == (undefined1)0x0) && (iVar7 == 0)) {
        F_00560760(((uint *)(gen_frame + 0x8)));
        in_ecx = this + 0x1ac;
      }
      else {
        if (*(uint *)(this + 0x1a4) != (uint)(byte)this[iVar7 + 400]) break;
        F_00560760(((uint *)(gen_frame + 0x8)));
        in_ecx = this + 0x200;
      }
      uVar4 = F_0042a990(in_ecx);
      ((uint *)(gen_frame + 0x8))[0] = uVar4;
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x68)));
      (*(uint *)(gen_frame + 0x14)) = (uint)(byte)this[0x13a];
      uVar4 = F_0055dcb0();
      F_00588780((undefined *)(uVar4 + 0xe0),2,(*(uint *)(gen_frame + 0x14)),uVar2,((uint *)(gen_frame + 0x8)),0,0);
    }
    break;
  case 7: ;
    bVar8 = param_2 == 0xf;
    goto LAB_007f8d6e;
  default: ;
    goto switchD_007f8ab5_caseD_8;
  case 0x17: ;
    if (param_2 != 0xf) {
      uVar4 = param_2;
      if (param_2 == 0x10) {
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 1;
        F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
        F_00557670(param_3,0);
        puVar6 = &(*(uint *)(gen_frame + 0x38));
        iVar7 = 3;
        do {
          puVar6 = puVar6 + -2;
          uVar4 = F_005a2670(puVar6);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar4;
      }
      goto switchD_007f8ab5_caseD_8;
    }
    uVar4 = *((uint *)GEN_TOP((*(int *)(this + 0x18c) + 0xc0)));
    uVar5 = (*(uint *)(gen_frame + 0x14));
    if (uVar4 < 0x10) {
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      AVar1 = this[uVar4 + 400];
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
      (*(uint *)(gen_frame + 0x34)) = (uint)(byte)AVar1;
      F_005a9110(this,4,&(*(undefined4 *)(gen_frame + 0x18)));
      puVar6 = &(*(uint *)(gen_frame + 0x38));
      iVar7 = 3;
      do {
        puVar6 = puVar6 + -2;
        F_005a2670(puVar6);
        iVar7 = iVar7 + -1;
        uVar5 = (*(uint *)(gen_frame + 0x14));
      } while (-1 < iVar7);
    }
    break;
  case 0x1f: ;
    if (param_2 != 0xc) goto switchD_007f8ab5_caseD_8;
    if ((this[0x1a0] == (undefined1)0x0) && (param_4[2] == 0)) {
      F_00560760(((uint *)(gen_frame + 0x8)));
      uVar4 = F_0042a990(this + 0x1ac);
      AVar1 = this[0x13a];
      ((uint *)(gen_frame + 0x8))[0] = uVar4;
      uVar2 = *(undefined4 *)(*param_4 + 0x1e4);
      uVar4 = F_0055dcb0();
      F_00588780((undefined *)(uVar4 + 0xe0),2,(uint)(byte)AVar1,uVar2,((uint *)(gen_frame + 0x8)),0,0);
      uVar5 = (*(uint *)(gen_frame + 0x14));
    }
    break;
  case 0x20: ;
    bVar8 = param_2 == 0xc;
LAB_007f8d6e: ;
    if (!bVar8) goto switchD_007f8ab5_caseD_8;
    AVar1 = this[0x13a];
    uVar4 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar4 + 0xe0),(uint)(byte)AVar1,0);
    break;
  case 0x21: ;
    if (param_2 != 0xc) goto switchD_007f8ab5_caseD_8;
    uVar4 = F_005c0730(*(undefined4 *)(this + 0x180));
    if ((char)uVar4 != '\0') {
      F_0059b390(this,*(undefined4 *)(this + 0x180),1,0);
    }
    break;
  case 0x24: ;
    if (param_2 != 0xc) goto switchD_007f8ab5_caseD_8;
    iVar7 = param_4[2];
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x28))))(*(int * PTR32 *)(this + 0x180),1);
    if (((this[0x1a0] == (undefined1)0x0) && (iVar7 == 0)) ||
       (*(uint *)(this + 0x1a4) == (uint)(byte)this[iVar7 + 400])) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x28))))(*(int * PTR32 *)(this + 0x180),0);
    }
    F_005623b0(*(undefined * PTR32 *)(this + 0x18c),iVar7);
    F_00797fd0(this,iVar7);
    break;
  case 0x25: ;
    F_0059b390(this,*(undefined4 *)(this + 0x184),1,0);
  }
  uVar4 = F_00557670(uVar5,0);
switchD_007f8ab5_caseD_8: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_007f8df0 */
uint F_007f8df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f8df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3);
  iVar1 = *(int *)(uVar3 + 0xb0);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3);
  uVar3 = *(uint *)(uVar3 + 0xa0);
  if ((iVar1 != 0) && (uVar3 != 0)) {
    uVar6 = (uint)*(byte *)(param_1 + 400 + (int)this);
    if ((undefined *)*param_2 != (undefined *)0x0) {
      uVar2 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + uVar6 * 0xc)));
      if (uVar2 < 0xf) {
        iVar4 = uVar2 + 0x65;
      }
      else {
        iVar4 = 0;
      }
      F_0059d640((undefined *)*param_2,iVar4);
    }
    pvVar5 = (undefined *)F_00559ba0(param_2[1]);
    if (pvVar5 != (undefined *)0x0) {
      F_0057eb30(pvVar5,*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + uVar6 * 0xc))) + 1,0,0,0,0);
    }
    pvVar5 = (undefined *)F_00559ba0(param_2[2]);
    if (pvVar5 != (undefined *)0x0) {
      F_00584110(pvVar5,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + uVar6 * 4))));
    }
    pvVar5 = (undefined *)F_00559ba0(param_2[3]);
    uVar3 = 0;
    if (pvVar5 != (undefined *)0x0) {
      uVar3 = F_0057eb30(pvVar5,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8 + uVar6 * 0xc))),0,0,0,0)
      ;
    }
  }
  return uVar3;
}

/* ref: FUN_007f8ee0 */
uint F_007f8ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f8ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8abc));
  F_00798170((undefined *)((int)this + 0x180));
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  in_ecx = (int)this + 0x22c;
  iVar1 = 2;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankEdit::vf37 */
uint F_007f8f50(unsigned int gen_a0)
{
  GEN_ENTER(0x7f8f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  undefined * pAVar4;
  
  if (*(int *)(this + 0x21c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x21c) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 0x220) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x220) + 0x70))),0x17,2,this,0);
  }
  pAVar4 = this + 0x198;
  iVar3 = 0xc;
  do {
    if (*(int *)pAVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar4 + 0x70),0x17,3,this,0);
    }
    pAVar4 = pAVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pAVar4 = this + 0x1d0;
  iVar3 = 5;
  do {
    if (*(int *)(pAVar4 + -8) != 0) {
      if (*(int *)pAVar4 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar2,0x23,6,this,0);
    }
    pAVar4 = pAVar4 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(this + 0x204) != 0) {
    if (*(int *)(this + 0x20c) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
    }
    F_005840a0(pvVar2,0x23,6,this,0);
  }
  if (*(int *)(this + 0x210) != 0) {
    if (*(int *)(this + 0x218) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x218) + 0x70)));
    }
    F_005840a0(pvVar2,0x23,6,this,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),0x17,4,this,0);
  }
  if (*(int *)(this + 400) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x17,5,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007f9070 */
uint F_007f9070(unsigned int gen_a0)
{
  GEN_ENTER(0x7f9070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_ecx;
  
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
  iVar1 = *(int *)((int)this + 400);
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

/* ref: FUN_007f9140 */
uint F_007f9140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = param_1 - 1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    F_007985b0(this);
    uVar3 = F_00557670(param_2,0);
    return uVar3;
  case 1: ;
    ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
    uVar3 = F_00557670(param_2,0);
    return uVar3;
  case 2: ;
    iVar1 = **(int * PTR32 *)((int)this + 0x21c);
    bVar2 = F_00798250(this);
    ((code *)*(gen_code32 *)(iVar1 + 0x28))(*(undefined4 *)((int)this + 0x21c),(uint)(bVar2 != 0));
    uVar3 = F_00557670(param_2,0);
    return uVar3;
  case 3: ;
    F_00798360(this);
    uVar3 = F_00557670(param_2,0);
    return uVar3;
  case 4: ;
    F_007983e0(this);
    uVar3 = F_00557670(param_2,0);
  }
  return uVar3;
}

/* ref: FUN_007f9200 */
uint F_007f9200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00584110(*(undefined * PTR32 *)(param_1 + 4),param_2);
  F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x88))),3,0,1);
  F_005b2b20(*(undefined * PTR32 *)(param_1 + 8),3,0);
  F_0059caa0(*(undefined * PTR32 *)(param_1 + 8),param_3);
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = F_00568380((undefined *)0x0,0x23,6,this,0,0);
    return uVar1;
  }
  uVar1 = F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x70))),0x23,6,this,0,0);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankOrderEdit::vf37 */
uint F_007f9280(unsigned int gen_a0)
{
  GEN_ENTER(0x7f9280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x21,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x25,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x23,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x24,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x28,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x26,8,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar1,0x27,8,this,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,10,this,0);
  }
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,0xb,this,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),0x17,0xd,this,0);
  }
  if (*(int *)(this + 400) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x17,0xe,this,0);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_007f93b0 */
uint F_007f93b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f93b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_00557670(param_2,0);
  uVar1 = F_00798960(this,*(undefined4 *)(param_3 + 8),(uint)(*(byte *)(param_3 + 0x11) >> 3 & 1))
  ;
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf37 */
uint F_007f93e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f93e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),0xc,0,this,0);
    iVar1 = *(int *)(this + 0x18c);
    *(undefined4 *)(iVar1 + 0x144) = 0;
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(undefined4 *)(iVar1 + 0x14c) = 0;
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_007f9460 */
uint F_007f9460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f9460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_1 != 0) {
    if ((param_1 != 1) && (param_1 == 3)) {
      F_00798c10(this);
    }
    return 0;
  }
  uVar1 = F_00582650(*(undefined * PTR32 *)((int)this + 0x18c),param_2);
  return -(uint)(uVar1 < 2) & 2;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf37 */
uint F_007f94a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f94a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  int iVar4;
  int local_8;
  
  if (((byte)this[0xf9] & 1) != 0) {
    pAVar3 = this + 0x18c;
    iVar4 = 0;
    do {
      if (*(int *)pAVar3 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      iVar4 = iVar4 + 1;
      F_005840a0(pvVar2,0x17,iVar4,this,0);
      pAVar3 = pAVar3 + 4;
    } while (iVar4 < 5);
    if (*(int *)(this + 0x1a0) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,6,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,7,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x2c0) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x2c0) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,8,this,0);
    iVar4 = 9;
    pAVar3 = this + 0x1a8;
    local_8 = 0x32;
    do {
      F_00597570(*(undefined * PTR32 *)pAVar3);
      if (*(int *)pAVar3 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x2d,iVar4,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pAVar3 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x2e,iVar4,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pAVar3 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x30,iVar4,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pAVar3 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x34,iVar4,this,0);
      pAVar3 = pAVar3 + 4;
      iVar4 = iVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    iVar4 = 0x3b;
    pAVar3 = this + 0x270;
    local_8 = 0x12;
    do {
      F_00597570(*(undefined * PTR32 *)pAVar3);
      if (*(int *)pAVar3 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x2d,iVar4,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pAVar3 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x30,iVar4,this,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pAVar3 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x34,iVar4,this,0);
      pAVar3 = pAVar3 + 4;
      iVar4 = iVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    F_005a92d0(this,1,0x37,0);
    F_005a92d0(this,0,0x33,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007f9640 */
uint F_007f9640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  if (param_1 - 9 < 0x32) {
    bVar1 = F_00799060(this,param_1 - 9,param_3);
  }
  else {
    if (0x11 < param_1 - 0x3b) {
      return param_1;
    }
    bVar1 = F_00799160(this,param_1 - 0x3b,param_3);
  }
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(byte *)(param_2 + 0x15) = bVar1;
  uVar2 = F_00557670(param_2,0);
  return uVar2;
}

/* ref: FUN_007f9690 */
uint F_007f9690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  
  if (param_1 - 9 < 0x32) {
    iVar1 = param_1 - 9;
  }
  else {
    if (0x11 < param_1 - 0x3b) {
      return param_1;
    }
    iVar1 = param_1 - 0x3b;
    if (*(char *)(param_3 + 8) == '\x05') {
      F_007992c0(this,iVar1);
      uVar2 = F_00557670(param_2,0);
      return uVar2;
    }
  }
  F_00799240(this,iVar1);
  uVar2 = F_00557670(param_2,0);
  return uVar2;
}

/* ref: FUN_007f96e0 */
uint F_007f96e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f96e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 - 9 < 0x32) {
    F_00799330(this,param_1 - 9);
    uVar1 = F_00557670(param_2,0);
    return uVar1;
  }
  uVar1 = param_1;
  if (param_1 - 0x3b < 0x12) {
    F_007993a0(this,param_1 - 0x3b);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: FUN_007f9730 */
uint F_007f9730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f9730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * this_00;
  undefined4 uVar1;
  char * pcVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  bool bVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(bool *)(gen_frame + 0x2b)) = ((byte)(*(uint *)((int)this + 0x2c8) >> (*(char *)((int)this + 0x2c5) * '\x02' & 0x1fU))
            & 3) != 2;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0x10;
  do {
    iVar5 = (*(int *)(gen_frame + 0x24));
    this_00 = *(int * PTR32 *)((int)this + (*(int *)(gen_frame + 0x20)) * 4 + 0x1a8);
    if (this_00 != (int *)0x0) {
      uVar1 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + -4 + *(int *)(param_1 + 0x20))));
      ((byte *)(gen_frame + 0x8))[0xc] = (byte)uVar1;
      ((byte *)(gen_frame + 0x8))[0xd] = SUB41(uVar1,1);
      ((byte *)(gen_frame + 0x8))[0xe] = SUB41(uVar1,2);
      ((byte *)(gen_frame + 0x8))[0xf] = SUB41(uVar1,3);
      bVar6 = SUB41(uVar1,1) != 0;
      ((byte *)(gen_frame + 0x8))[0x10] = bVar6;
      F_0056e4d0(this_00,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)));
      ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,(uint)(((byte *)(gen_frame + 0x8))[0x10] == 0));
      iVar5 = *((int *)GEN_TOP((iVar5 + -0x10 + *(int *)(param_1 + 0x20))));
      if (iVar5 < 0) {
        if (this_00[0x29] == 0) {
          pvVar4 = (undefined *)0x0;
        }
        else {
          pvVar4 = *(undefined * PTR32 *)(this_00[0x29] + 0x70);
        }
        F_0055a300(pvVar4,0);
        *(byte *)((int)this_00 + 0xaa) = *(byte *)((int)this_00 + 0xaa) | 2;
        F_00597570(this_00);
        ((code *)*(gen_code32 *)(this_00[0x21] + 0x30))(this_00 + 0x21);
        this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
        iVar5 = (*(int *)(gen_frame + 0x24));
      }
      else {
        ((code *)*(gen_code32 *)(this_00[0x21] + 0xc))(this_00 + 0x21);
        F_00595560(this_00,iVar5);
        if (this_00[0x29] == 0) {
          pvVar4 = (undefined *)0x0;
        }
        else {
          pvVar4 = *(undefined * PTR32 *)(this_00[0x29] + 0x70);
        }
        F_0055a300(pvVar4,1);
        *(byte *)((int)this_00 + 0xaa) =
             *(byte *)((int)this_00 + 0xaa) ^
             ((*(bool *)(gen_frame + 0x2b)) * '\x02' ^ *(byte *)((int)this_00 + 0xaa)) & 2;
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + -8 + *(int *)(param_1 + 0x20))));
        F_00560760(((byte *)(gen_frame + 0x8)));
        pcVar2 = *((char * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x20) + (*(int *)(gen_frame + 0x20)) * 4)));
        if (pcVar2 == (char *)0x0) {
          pcVar2 = "";
        }
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = pcVar2;
        ((byte *)(gen_frame + 0x8))[0xb] = (byte)(*(int *)(gen_frame + 0x20));
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x2c5) + 0x3e;
        ((byte *)(gen_frame + 0x8))[10] = 2;
        F_005916c0(this_00,6,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x13a),((byte *)(gen_frame + 0x8)));
        uVar3 = iVar5 >> 0x10 & 0xffff;
        if ((uVar3 < 2) && (((byte *)(gen_frame + 0x8))[0xc] != 5)) {
          F_0058ea60(this_00,"");
        }
        else {
          F_0058ea90(this_00,uVar3);
        }
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + *(int *)(param_1 + 0x20))));
        F_00561860((undefined *)this_00[0x29],(uint)((byte)iVar5 & 1));
        F_005a03c0((undefined *)this_00[0x29],iVar5 >> 1);
        this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
        iVar5 = (*(int *)(gen_frame + 0x24));
      }
    }
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
    (*(int *)(gen_frame + 0x24)) = iVar5 + 0x14;
  } while (iVar5 + 0x14 < 0x3f8);
  uVar3 = F_0055a2d0(*(undefined4 *)((int)this + 0x2b8));
  if ((char)uVar3 != '\0') {
    uVar3 = F_00584110(*(undefined * PTR32 *)((int)this + 0x2b8),
                         *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 200))));
  }
  return uVar3;
}

/* ref: FUN_007f9940 */
uint F_007f9940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *(undefined4 * PTR32 *)((int)this + 0x2c8) = param_1;
  param_1 = (undefined4 *)((int)this + 0x18c);
  *(undefined4 *)((int)this + 0x2cc) = param_2;
  *(undefined4 *)((int)this + 0x2d0) = param_3;
  iVar2 = 0;
  do {
    uVar3 = *(uint *)((int)this + 0x2c8) >> ((byte)iVar2 & 0x1f) & 3;
    pvVar1 = (undefined *)F_00561490((undefined *)*param_1,2);
    if (uVar3 == 0) {
      uVar4 = 0x66;
LAB_007f99a0: ;
      F_0059d670(pvVar1,uVar4);
    }
    else {
      if (uVar3 == 1) {
        uVar4 = 0x67;
        goto LAB_007f99a0;
      }
      if (uVar3 == 2) {
        uVar4 = 0x65;
        goto LAB_007f99a0;
      }
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 2;
  } while (iVar2 < 10);
  iVar2 = *(int *)((int)this + 0x2cc);
  pvVar1 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x1a0),2);
  if (iVar2 == 0) {
    uVar4 = 0x66;
LAB_007f99dd: ;
    F_0059d670(pvVar1,uVar4);
  }
  else {
    if (iVar2 == 1) {
      uVar4 = 0x67;
      goto LAB_007f99dd;
    }
    if (iVar2 == 2) {
      uVar4 = 0x65;
      goto LAB_007f99dd;
    }
  }
  iVar2 = *(int *)((int)this + 0x2d0);
  pvVar1 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x1a4),2);
  if (iVar2 == 0) {
    uVar4 = 0x66;
  }
  else if (iVar2 == 1) {
    uVar4 = 0x67;
  }
  else {
    if (iVar2 != 2) goto LAB_007f9a13;
    uVar4 = 0x65;
  }
  F_0059d670(pvVar1,uVar4);
LAB_007f9a13: ;
  if (*(int *)((int)this + 0x2d0) == 0) {
    uVar3 = F_0059d670(*(undefined * PTR32 *)((int)this + 700),0x65);
    return uVar3;
  }
  uVar3 = F_0059d670(*(undefined * PTR32 *)((int)this + 700),0x11);
  return uVar3;
}

/* ref: FUN_007f9a40 */
uint F_007f9a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f9a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 uVar2;
  
  *(int *)((int)this + 0x2d4) = param_1;
  if ((char)param_2 != '\0') {
    if (param_1 == 0) {
      if (*(char *)((int)this + 0x2c4) == '\x01') {
        uVar2 = *(undefined4 *)((int)this + 0x1a0);
      }
      else {
        uVar2 = *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x2c5) * 4 + 0x18c)));
      }
      F_0059b390(this,uVar2,1,0);
      uVar1 = F_0055dcb0();
      if (*(char *)(uVar1 + 0xbc) != '\0') {
        F_005aa300((undefined *)(uVar1 + 0x3c),1,1,9);
      }
    }
    else if (param_1 == 1) {
      if ((*(uint *)((int)this + 0x2c8) >> (*(char *)((int)this + 0x2c5) * '\x02' & 0x1fU) & 3) != 0
         ) {
        F_0059b390(this,*(undefined4 *)((int)this + 0x1a8),1,0);
        uVar1 = F_007994c0(this,param_3);
        return uVar1;
      }
    }
    else if ((param_1 == 2) && (*(int *)((int)this + 0x2cc) != 0)) {
      F_0059b390(this,*(undefined4 *)((int)this + 0x270),1,0);
      uVar1 = F_007994c0(this,param_3);
      return uVar1;
    }
  }
  uVar1 = F_007994c0(this,param_3);
  return uVar1;
}

/* ref: FUN_007f9b30 */
uint F_007f9b30(unsigned int gen_a0)
{
  GEN_ENTER(0x7f9b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0079b040(this);
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[72])REFP(0x10d57fc));
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) & 0xbf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf38 */
uint F_007f9be0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f9be0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_0079b0c0(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf37 */
uint F_007f9c00(unsigned int gen_a0)
{
  GEN_ENTER(0x7f9c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1dc) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1dc) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1dc) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x25,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x25,2,this,0);
    F_005a92d0(this,1,0x30,0);
    F_005a92d0(this,0,0x2c,0);
    F_005a92d0(this,1,0x39,0);
    F_005a92d0(this,0,0x35,0);
    F_005a92d0(this,1,0x3a,0);
    F_005a92d0(this,0,0x36,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf44 */
uint F_007f9da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f9da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar2 = F_0055e2f0(this,2);
  *(uint *)(this + 0x1b4) = uVar2;
  uVar2 = F_0055e360(this,3);
  *(uint *)(this + 0x1b8) = uVar2;
  uVar2 = F_0055e360(this,4);
  *(uint *)(this + 0x1bc) = uVar2;
  uVar2 = F_0055e340(this,5);
  *(uint *)(this + 0x1c0) = uVar2;
  uVar2 = F_0055e340(this,0xc);
  *(uint *)(this + 0x1c4) = uVar2;
  uVar2 = F_0055e340(this,0xd);
  *(uint *)(this + 0x1c8) = uVar2;
  uVar2 = F_0055e340(this,10);
  *(uint *)(this + 0x1cc) = uVar2;
  uVar2 = F_0055e340(this,8);
  *(uint *)(this + 0x1d0) = uVar2;
  uVar2 = F_0055e2f0(this,0x15);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 9)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1dc) = uVar2;
  uVar2 = F_0055e2f0(this,0x1b);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 9)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x188) = uVar2;
  uVar2 = F_0055e2f0(this,0x22);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2), uVar3 != 9)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x18c) = uVar2;
  uVar2 = F_0055e2f0(this,0x18);
  *(uint *)(this + 0x180) = uVar2;
  uVar2 = F_0055e2f0(this,0x1f);
  *(uint *)(this + 0x184) = uVar2;
  uVar2 = F_0055e340(this,0x1c);
  *(uint *)(this + 400) = uVar2;
  uVar2 = F_0055e340(this,0x23);
  *(uint *)(this + 0x194) = uVar2;
  *(undefined4 *)(this + 0x1a0) = 0x65;
  *(undefined4 *)(this + 0x1ac) = 0x65;
  *(undefined4 *)(this + 0x19c) = 0x66;
  *(undefined4 *)(this + 0x1a8) = 0x66;
  *(undefined4 *)(this + 0x198) = 0x11;
  *(undefined4 *)(this + 0x1a4) = 0x11;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  (*(undefined4 *)(gen_frame + 0x20)) = 3;
  (*(undefined4 *)(gen_frame + 0x2c)) = 4;
  (*(undefined4 *)(gen_frame + 0x38)) = 5;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x799900));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x1dc),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),4,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x11e))) = 1;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 2;
  (*(undefined4 *)(gen_frame + 0x50)) = 3;
  (*(undefined4 *)(gen_frame + 0x5c)) = 4;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x920a00));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x188),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x44)),3,0);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x79b560));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x18c),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x44)),3,0);
  if (*(int *)(this + 0x1dc) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
  }
  F_00568380(pvVar4,0x1f,3,this,0,0);
  if (*(int *)(this + 0x1dc) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
  }
  F_00568380(pvVar4,0x20,3,this,0,0);
  if (*(int *)(this + 0x1dc) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
  }
  F_00568380(pvVar4,0x21,3,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar4,0x1f,1,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar4,0x20,1,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar4,0x21,1,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar4,0x25,1,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar4,0x1f,2,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar4,0x20,2,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar4,0x21,2,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar4,0x25,2,this,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x1dc),1,1,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x188),1,1,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x18c),1,1,0);
  F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),0);
  uVar2 = F_0055e2f0(this,0x16);
  if (*(int *)(this + 0x1dc) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
  }
  uVar1 = F_0055a030(uVar5);
  *(ushort *)(this + 0x1e8) = uVar1;
  uVar1 = F_0055a030(uVar2);
  *(ushort *)(this + 0x1ea) = uVar1;
  if (1 < param_1) {
    if ((*param_2 & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 4);
    }
    *(undefined4 *)(this + 0x1e0) = uVar5;
    if ((param_2[8] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)(this + 0x1e4) = uVar5;
  }
  F_005a91d0(this,1,0x30);
  F_005a91d0(this,0,0x2c);
  F_005a91d0(this,1,0x39);
  F_005a91d0(this,0,0x35);
  F_005a91d0(this,1,0x3a);
  uVar2 = F_005a91d0(this,0,0x36);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf47 */
unsigned int F_007fa260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fa260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined4 in_ecx;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  F_0079b160((undefined *)this,param_1,param_2);
  iVar5 = *(int *)(param_1 + 0xc0);
  iVar1 = *(int *)(param_1 + 0xe4);
  iVar2 = *(int *)(param_2 + 0xb0);
  if (*((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0xc))) == 0) {
    F_0055a300(*(undefined * PTR32 *)(this + 0x1b4),1);
    F_005600b0(((undefined1 *)(gen_frame + 0x0)),**(undefined4 * PTR32 *)(iVar5 + 0x20));
    F_00560080(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x20) + 4))));
    F_005959f0(*(undefined * PTR32 *)(this + 0x1b8),((undefined1 *)(gen_frame + 0x0)));
    F_00591c00(*(undefined * PTR32 *)(this + 0x1bc),*((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x20) + 8))),0);
    F_00584110(*(undefined * PTR32 *)(this + 0x1c0),**(undefined4 * PTR32 *)(iVar2 + 0x20));
    F_00584110(*(undefined * PTR32 *)(this + 0x1c4),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4))));
    F_00584110(*(undefined * PTR32 *)(this + 0x1c8),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 8))));
    F_00584110(*(undefined * PTR32 *)(this + 0x1cc),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x18))));
    F_0057eb30(*(undefined * PTR32 *)(this + 0x1d0),*((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0x10))),0,0,0,0);
  }
  F_0059ead0(*(undefined * PTR32 *)(this + 0x1dc),(uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4))),0,1);
  bVar7 = **(int * PTR32 *)(iVar1 + 0x20) == 0;
  if (bVar7) {
    F_0059d6a0(this,0x65,1,0);
    in_ecx = 0;
    if (*(int *)(this + 0x1dc) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
    }
    uVar3 = F_0055a020(in_ecx);
    uVar4 = (uint)*(ushort *)(this + 0x1ea);
  }
  else {
    F_0059d6a0(this,0x11,1,0);
    if (*(int *)(this + 0x1dc) == 0) {
      uVar3 = F_0055a020(0);
      uVar4 = (uint)*(ushort *)(this + 0x1e8);
    }
    else {
      uVar3 = F_0055a020(*((undefined4 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70))));
      uVar4 = (uint)*(ushort *)(this + 0x1e8);
    }
  }
  F_005b1cd0(*(undefined * PTR32 *)(this + 0x1dc),(uint)uVar3,uVar4);
  (*(uint *)(gen_frame + 0x4)) = *((uint *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0x24)));
  (*(uint *)(gen_frame + 0x8)) = *((uint *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0x10)));
  uVar6 = 0;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x7c))))(*(int * PTR32 *)(this + 0x1dc));
  if (uVar4 != 0) {
    iVar5 = 0x14;
    do {
      uVar4 = *(uint *)(iVar1 + 0x20);
      if ((((*(uint *)(gen_frame + 0x8)) < *(uint *)(iVar5 + -4 + uVar4)) || ((*(uint *)(gen_frame + 0x4)) < *(uint *)(iVar5 + uVar4))) ||
         (bVar7)) {
        uVar4 = 1;
      }
      else {
        uVar4 = uVar4 & 0xffffff00;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x54))))(*(int * PTR32 *)(this + 0x1dc),uVar6,uVar4);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x10;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x7c))))(*(int * PTR32 *)(this + 0x1dc));
    } while (uVar6 < uVar4);
  }
  return 0;
}

/* ref: FUN_007fa470 */
uint F_007fa470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fa470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 1) {
    F_00799ac0(this);
    uVar1 = F_00557670(param_2,0);
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyProfileEdit::vf37 */
uint F_007fa4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fa4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x180) == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,1,this,0);
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x184) != 0) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar3,0x17,2,this,0);
    iVar1 = *(int *)(this + 0x188);
    *(undefined4 *)(iVar1 + 0x144) = 0;
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(undefined4 *)(iVar1 + 0x14c) = 0;
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_007fa520 */
uint F_007fa520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7fa520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if ((param_1 != 1) && (param_1 == 3)) {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x188) + 0x1d4)));
      uVar2 = F_0042a970(*(int *)((int)this + 0x188) + 0x9c);
      uVar2 = F_00560910(iVar1 - uVar2);
      F_00584110(*(undefined * PTR32 *)((int)this + 0x18c),uVar2);
    }
    return 0;
  }
  uVar2 = F_00582650(*(undefined * PTR32 *)((int)this + 0x188),param_2);
  return -(uint)(uVar2 < 2) & 2;
}

/* ref: FUN_007fa590 */
uint F_007fa590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fa590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 600) * 0x10 + 0x208)));
  uVar1 = param_1 + *(int *)((int)this + 0x25c) * 0x18;
  uVar3 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 600) * 0x10 + 0x20c))) - iVar2 >> 3;
  if ((uVar1 < uVar3) && (param_1 < 0x18)) {
    uVar4 = *(undefined4 *)(iVar2 + 4 + uVar1 * 8);
    uVar5 = 0;
    this_00 = (undefined *)F_00559b90(*param_2);
    uVar3 = F_00591c00(this_00,uVar4,uVar5);
  }
  return uVar3;
}

/* ref: FUN_007fa630 */
uint F_007fa630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
    bVar1 = F_0056bb30((int)this + 0x1f8);
  }
  else {
    if (2 < param_1) {
      return param_1;
    }
    uVar3 = 1;
    bVar1 = F_0056bb70((int)this + 0x1f8);
  }
  uVar2 = (uint)bVar1;
  if (uVar2 != 0xffffffff) {
    uVar2 = F_00799cd0(this,uVar3,uVar2);
  }
  return uVar2;
}

/* ref: FUN_007fa680 */
uint F_007fa680(unsigned int gen_a0)
{
  GEN_ENTER(0x7fa680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00560050((undefined *)((int)this + 0x200),(int)this + 0x1f8);
  uVar1 = F_00799d60(this,3,(undefined *)((int)this + 0x200));
  return uVar1;
}

/* ref: FUN_007fa6b0 */
unsigned int F_007fa6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < (uint)(*(int *)((int)this + 0x22c) - *(int *)((int)this + 0x228) >> 3)) {
    F_0056bb40((undefined *)((int)this + 0x200),
                 (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x228) + param_1 * 8))));
  }
  return 0;
}

/* ref: FUN_007fa6f0 */
unsigned int F_007fa6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < (uint)(*(int *)((int)this + 0x21c) - *(int *)((int)this + 0x218) >> 3)) {
    F_0056bb80((undefined *)((int)this + 0x200),
                 (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x218) + param_1 * 8))));
  }
  return 0;
}

/* ref: FUN_007fa730 */
unsigned int F_007fa730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < (uint)(*(int *)((int)this + 0x20c) - *(int *)((int)this + 0x208) >> 3)) {
    F_0056bb00((undefined *)((int)this + 0x200),
                 (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x208) + param_1 * 8))));
  }
  return 0;
}

/* ref: FUN_007fa770 */
uint F_007fa770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  iVar1 = *(int *)((int)this + 0x248);
  uVar3 = *(int *)((int)this + 0x24c) - iVar1 >> 3;
  if (param_1 < uVar3) {
    F_0056bc40((int)this + 0x200,(uint)*(byte *)(iVar1 + param_1 * 8));
    bVar2 = F_0055a1d0(*(undefined * PTR32 *)((int)this + 0x1ac),
                         ((uint)*(byte *)(iVar1 + 6 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 5 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 4 + param_1 * 8) * 100) / 0xff);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  return uVar3;
}

/* ref: FUN_007fa7f0 */
uint F_007fa7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  iVar1 = *(int *)((int)this + 0x248);
  uVar3 = *(int *)((int)this + 0x24c) - iVar1 >> 3;
  if (param_1 < uVar3) {
    F_0056bc80((int)this + 0x200,(uint)*(byte *)(iVar1 + param_1 * 8));
    bVar2 = F_0055a1d0(*(undefined * PTR32 *)((int)this + 0x1b0),
                         ((uint)*(byte *)(iVar1 + 6 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 5 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 4 + param_1 * 8) * 100) / 0xff);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  return uVar3;
}

/* ref: FUN_007fa870 */
uint F_007fa870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fa870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  iVar1 = *(int *)((int)this + 0x238);
  uVar3 = *(int *)((int)this + 0x23c) - iVar1 >> 3;
  if (param_1 < uVar3) {
    F_0056bbc0((undefined *)((int)this + 0x200),(uint)*(byte *)(iVar1 + param_1 * 8));
    bVar2 = F_0055a1d0(*(undefined * PTR32 *)((int)this + 0x1a8),
                         ((uint)*(byte *)(iVar1 + 6 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 5 + param_1 * 8) * 100) / 0xff,
                         ((uint)*(byte *)(iVar1 + 4 + param_1 * 8) * 100) / 0xff);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  return uVar3;
}

/* ref: FUN_007fa8f0 */
uint F_007fa8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fa8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)((int)this + 0x26c);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9e0(uVar3);
  if ((uVar3 != 0) && (*(int *)((int)this + 0x1c8) != 0)) {
    bVar2 = F_005615c0(*(int *)((int)this + 0x1c8),uVar3);
    if (bVar2 != 0) {
      iVar1 = *(int *)((int)this + 600);
      if (iVar1 == 0) {
        uVar3 = F_00799e50(this);
        if ((uint)(*(int *)((int)this + 0x20c) - *(int *)((int)this + 0x208) >> 3) <= uVar3)
        goto LAB_007fa973;
        if (1 < *((ushort *)GEN_TOP((*(int *)((int)this + 0x208) + 2 + uVar3 * 8)))) {
          uVar5 = *(undefined4 *)((int)this + 0x270);
          goto LAB_007fa973;
        }
      }
      else if (iVar1 != 1) {
        if (iVar1 == 2) {
          uVar5 = *(undefined4 *)((int)this + 0x270);
        }
        goto LAB_007fa973;
      }
      uVar5 = *(undefined4 *)((int)this + 0x274);
    }
  }
LAB_007fa973: ;
  F_0056b630(this,uVar5,7,0,9,0,0);
  if (1 < *(uint *)((int)this + 0x260)) {
    F_00559fb0(*(undefined * PTR32 *)((int)this + 0x90),((short *)(gen_frame + 0x14)),((short *)(gen_frame + 0x18)));
    iVar1 = *(int *)((int)this + 0x1cc);
    if (iVar1 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_00559fb0(pvVar4,((ushort *)(gen_frame + 0x4)),((ushort *)(gen_frame + 0xc)));
    if (iVar1 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_0055a000(pvVar4,((ushort *)(gen_frame + 0x8)),((ushort *)(gen_frame + 0x10)));
    F_0056b7f0(this,0,9,(uint)(ushort)(((((ushort *)(gen_frame + 0x8))[0] >> 1) - ((short *)(gen_frame + 0x14))[0]) + ((ushort *)(gen_frame + 0x4))[0]),
                 (uint)(ushort)((((ushort *)(gen_frame + 0xc))[0] - (((ushort *)(gen_frame + 0x10))[0] >> 1)) - ((short *)(gen_frame + 0x18))[0]));
    iVar1 = *(int *)((int)this + 0x1d0);
    if (iVar1 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_00559fb0(pvVar4,((ushort *)(gen_frame + 0x10)),((ushort *)(gen_frame + 0x8)));
    if (iVar1 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_0055a000(pvVar4,((ushort *)(gen_frame + 0xc)),((ushort *)(gen_frame + 0x4)));
    uVar3 = F_0056b820(this,0,9,(uint)(ushort)(((((ushort *)(gen_frame + 0xc))[0] >> 1) - ((short *)(gen_frame + 0x14))[0]) + ((ushort *)(gen_frame + 0x10))[0]),
                         (uint)(ushort)((((ushort *)(gen_frame + 0x8))[0] - (((ushort *)(gen_frame + 0x4))[0] >> 1)) - ((short *)(gen_frame + 0x18))[0]));
    return uVar3;
  }
  F_0056b850(this);
  uVar3 = F_0056b860(this);
  return uVar3;
}

/* ref: FUN_007faae0 */
uint F_007faae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7faae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  ushort * puVar3;
  
  puVar3 = (ushort *)*param_1;
  uVar2 = param_1[1] - (int)((int)(uintptr_t)puVar3) >> 3;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*puVar3 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 4;
    } while (uVar1 < uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_007fab20 */
uint F_007fab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fab20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = (int *)*param_1;
  uVar2 = param_1[1] - (int)((int)(uintptr_t)piVar3) >> 3;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*piVar3 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar1 < uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_007fab60 */
uint F_007fab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fab60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  undefined2 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x1a8);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x1ac) - uVar2) >> 3)) {
    uVar1 = F_0055a170((undefined *)*param_2,(uint)*(byte *)(uVar2 + 6 + param_1 * 8),
                         (uint)*(byte *)(uVar2 + 5 + param_1 * 8),
                         (uint)*(byte *)(uVar2 + 4 + param_1 * 8));
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}

/* ref: FUN_007fabb0 */
uint F_007fabb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fabb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00799f70(this,3,(int)this + 400);
  uVar1 = F_00799f70(this,1,(int)this + 400);
  return uVar1;
}

/* ref: FUN_007fabd0 */
uint F_007fabd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fabd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00560050((undefined *)((int)this + 0x1a0),(int)this + 0x198);
  uVar1 = F_00799f70(this,2,(undefined *)((int)this + 0x1a0));
  return uVar1;
}

/* ref: FUN_007fac00 */
uint F_007fac00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fac00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x1ac) - uVar1) >> 3)) {
    uVar1 = F_0056bc40((int)this + 0x1a0,(uint)*(byte *)(uVar1 + param_1 * 8));
  }
  return uVar1;
}

/* ref: FUN_007fac40 */
uint F_007fac40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fac40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x1ac) - uVar1) >> 3)) {
    uVar1 = F_0056bc80((int)this + 0x1a0,(uint)*(byte *)(uVar1 + param_1 * 8));
  }
  return uVar1;
}

/* ref: FUN_007fac80 */
uint F_007fac80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fac80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = (int *)*param_1;
  uVar2 = param_1[1] - (int)((int)(uintptr_t)piVar3) >> 3;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*piVar3 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar1 < uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_007facc0 */
uint F_007facc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7facc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x1ac) - uVar1) >> 3)) {
    uVar2 = *(undefined4 *)(uVar1 + 4 + param_1 * 8);
    uVar3 = 0;
    this_00 = (undefined *)F_00559b90(*param_2);
    uVar1 = F_00591c00(this_00,uVar2,uVar3);
  }
  return uVar1;
}

/* ref: FUN_007fad10 */
uint F_007fad10(unsigned int gen_a0)
{
  GEN_ENTER(0x7fad10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0079a1a0(this,3,(int)this + 400);
  uVar1 = F_0079a1a0(this,1,(int)this + 400);
  return uVar1;
}

/* ref: FUN_007fad30 */
uint F_007fad30(unsigned int gen_a0)
{
  GEN_ENTER(0x7fad30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00560050((undefined *)((int)this + 0x1a0),(int)this + 0x198);
  uVar1 = F_0079a1a0(this,2,(undefined *)((int)this + 0x1a0));
  return uVar1;
}

/* ref: FUN_007fad60 */
uint F_007fad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  if (param_1 < (uint)((int)(*(int *)((int)this + 0x1ac) - uVar1) >> 3)) {
    uVar1 = F_0056bbc0((undefined *)((int)this + 0x1a0),(uint)*(byte *)(uVar1 + param_1 * 8));
  }
  return uVar1;
}

/* ref: FUN_007fada0 */
uint F_007fada0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fada0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = (int *)*param_1;
  uVar2 = param_1[1] - (int)((int)(uintptr_t)piVar3) >> 3;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*piVar3 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar1 < uVar2);
  }
  return 0xffffffff;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf37 */
uint F_007fade0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fade0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x184) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x23,4,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,5,this,0);
    F_005a92d0(this,0,0x20,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf46 */
byte F_007faed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7faed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte * pbVar6;
  undefined * pAVar7;
  uint uVar8;
  int iVar9;
  
  if (((byte)this[0xf9] & 1) == 0) {
    return 1;
  }
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 4);
  }
  if ((uVar8 & 1) != 0) {
    if ((param_2[0x10] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x14);
    }
    if ((param_2[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    F_0079a6c0(this,uVar3,uVar5);
  }
  if ((uVar8 & 2) != 0) {
    F_0079a6c0(this,(uint)(byte)this[0x97c],0);
    if ((param_2[0x18] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_0059caa0(*(undefined * PTR32 *)(this + 0x18c),uVar5);
  }
  if ((uVar8 & 4) == 0) {
    return 1;
  }
  uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x7c))))(*(int * PTR32 *)(this + 0x198));
  if ((param_2[0x38] & 0xf) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(param_2 + 0x3c);
  }
  if (param_1 != 0) {
    pbVar6 = param_2 + 0x54;
    pAVar7 = this + uVar8 * 0x14 + 0x1b0;
    iVar9 = param_1;
    do {
      if ((pbVar6[-0x14] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar6 + -0x10);
      }
      *(undefined4 *)(pAVar7 + -4) = uVar5;
      if ((pbVar6[-0xc] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar6 + -8);
      }
      *(undefined4 *)pAVar7 = uVar5;
      if ((pbVar6[-4] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)pbVar6;
      }
      *(undefined4 *)(pAVar7 + 4) = uVar5;
      if ((pbVar6[4] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar6 + 8);
      }
      *(undefined4 *)(pAVar7 + 8) = uVar5;
      if ((pbVar6[0xc] & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar6 + 0x10);
      }
      *(undefined4 *)(pAVar7 + 0xc) = uVar5;
      pbVar6 = pbVar6 + 0x28;
      pAVar7 = pAVar7 + 0x14;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  F_0058d980(*(undefined4 *)(this + 0x198),uVar8 + param_1);
  if ((param_2[0x1d8] & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x1dc);
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x19c),uVar5);
  uVar8 = F_0055dcb0();
  if (*(char *)(uVar8 + 0x21d) == '\0') {
    piVar1 = *(int * PTR32 *)(this + 0x198);
    uVar8 = F_0055dcb0();
    uVar8 = F_0055b9e0(uVar8);
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    if (uVar4 != uVar8) {
      if (*(int *)(this + 0x198) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
      }
      uVar8 = F_0055dcb0();
      uVar8 = F_0055b9e0(uVar8);
      bVar2 = F_005612e0(uVar5,uVar8);
      if (bVar2 == 0) goto LAB_007fb0aa;
    }
    piVar1 = *(int * PTR32 *)(this + 0x198);
    iVar9 = piVar1[0x33];
    uVar8 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,iVar9);
    F_0079a630(this,iVar9,uVar8);
  }
LAB_007fb0aa: ;
  if (((param_2[0x1d0] & 0xf) != 0) && (*(int *)(param_2 + 0x1d4) != 0)) {
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x7c))))(*(int * PTR32 *)(this + 0x198));
    if (uVar8 == 0) {
      if (this[0x97c] != (undefined1)0x1) {
        F_0059d670(*(undefined * PTR32 *)(this + 0x194),0x67);
        return 1;
      }
      F_0059d670(*(undefined * PTR32 *)(this + 0x194),0x68);
      return 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x28))))(*(int * PTR32 *)(this + 400),1);
  }
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf52 */
byte F_007fb120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fb120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*param_1 == 0xf) {
    if ((char)param_1[1] != '\0') {
      return 0;
    }
    if (*((char *)GEN_TOP((*(int *)(this + 0x188) + 0x88))) == '\0') {
      F_0079a460(this);
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    }
  }
  else {
    if (*param_1 != 0x10) {
      return 0;
    }
    if ((char)param_1[1] != '\0') {
      return 0;
    }
    if (*((char *)GEN_TOP((*(int *)(this + 0x184) + 0x88))) == '\0') {
      F_0079a3f0(this);
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x14)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_007fb1c0 */
uint F_007fb1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fb1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 1) {
    F_0079a3f0(this);
    uVar1 = F_00557670(param_2,0);
  }
  else {
    if (param_1 == 2) {
      F_0079a460(this);
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
    uVar1 = param_1 - 3;
    if (uVar1 == 0) {
      F_0079a4d0(this);
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_007fb210 */
unsigned int F_007fb210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fb210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_1 == 4) {
    F_0079a540(this,*(undefined4 *)(param_3 + 8));
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: FUN_007fb240 */
unsigned int F_007fb240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fb240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_1 == 5) {
    F_0079a5c0(this,*(undefined4 *)(param_3 + 8));
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: FUN_007fb270 */
unsigned int F_007fb270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fb270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  if (param_1 == 5) {
    F_0079a630(this,param_3[2],*param_3);
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: FUN_007fb2a0 */
uint F_007fb2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fb2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (param_1 == 5) {
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)bVar1,0);
    in_EAX = F_00557670(param_2,0);
  }
  return in_EAX;
}

/* ref: FUN_007fb2e0 */
uint F_007fb2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fb2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_ecx;
  
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x184));
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

/* ref: Client::UI2::AddonFreeCompany::vf37 */
uint F_007fb3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fb3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  int iVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar3 = 0;
    pAVar2 = this + 0x180;
    do {
      if (*(int *)pAVar2 != 0) {
        F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,iVar3 + 1,this,0);
      }
      iVar3 = iVar3 + 1;
      pAVar2 = pAVar2 + 4;
    } while (iVar3 < 6);
    F_005a92d0(this,1,0x30,0);
    F_005a92d0(this,0,0x2c,0);
  }
  F_00588e00(this + 0x1c4,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf46 */
byte F_007fb420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fb420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  byte * pbVar2;
  undefined4 uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  pbVar2 = param_2;
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_1 < 3) {
    return 1;
  }
  if ((*param_2 & 0xf) == 0) {
    param_2 = (byte *)0x0;
  }
  else {
    param_2 = *(byte * PTR32 *)(param_2 + 4);
  }
  if ((((uint)param_2 & 1) != 0) || (((uint)param_2 & 2) != 0)) {
    if ((pbVar2[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(pbVar2 + 0xc);
    }
    uVar4 = F_00594fc0(this + 0x1c4,uVar3,0,0,0,0,"",1,1,0);
    *(uint *)(this + 0x1fc) = uVar4;
    fVar5 = F_00559d80(*(undefined4 *)(this + 0x200));
    fVar6 = F_00559d60(*(undefined4 *)(this + 0x200));
    iVar1 = *(int *)(this + 0x1fc);
    *(short *)(iVar1 + 0x2a) = (short)(int)fVar5;
    *(short *)(iVar1 + 0x28) = (short)(int)fVar6;
  }
  if (((uint)param_2 & 1) != 0) {
    this[0x1fa] = (undefined1)0x1;
    if ((pbVar2[0x10] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(pbVar2 + 0x14);
      if (5 < (byte)uVar4) goto LAB_007fb526;
    }
    this[0x1c0] = SUB41(uVar4,0);
    if (*((int *)GEN_TOP((this + (uVar4 & 0xff) * 4 + 0x180))) != 0) {
      F_0059dde0(*((undefined * PTR32 *)GEN_TOP((this + (uVar4 & 0xff) * 4 + 0x180))),1);
      F_0059bd30(this + 0x1c4,0,1,0);
      F_0079a940(this,0);
    }
  }
LAB_007fb526: ;
  if (((uint)param_2 & 2) != 0) {
    this[0x1fa] = (undefined1)0x0;
    if ((pbVar2[0x10] & 0xf) == 0) {
      F_0079aa30(this,0,1);
      return 1;
    }
    F_0079aa30(this,*(undefined4 *)(pbVar2 + 0x14),1);
  }
  return 1;
}

/* ref: Client::UI2::AddonFreeCompany::vf47 */
uint F_007fb570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fb570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_2 + 0xc0);
  iVar2 = *(int *)(param_3 + 0xb0);
  if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc))) == 1) {
    uVar3 = F_0059d6a0(param_1,0x65,1,0);
    return uVar3;
  }
  F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x198),1);
  F_005600b0(((undefined1 *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)(iVar1 + 0x20));
  F_00560080(((undefined1 *)(gen_frame + 0x4)),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4))));
  F_005959f0(*(undefined * PTR32 *)((int)param_1 + 0x19c),((undefined1 *)(gen_frame + 0x4)));
  F_00591c00(*(undefined * PTR32 *)((int)param_1 + 0x1a0),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 8))),0);
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1a4),**(undefined4 * PTR32 *)(iVar2 + 0x20));
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1b0),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xc))));
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1a8),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4))));
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1ac),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 8))));
  F_0079aaf0(param_1);
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1b4),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x18))));
  F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1b8),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x10))));
  uVar3 = F_00568230(*(undefined4 *)((int)param_1 + 0x1bc),
                       ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x20))) *
                              (float10)*(double *)&REFG(undefined, 0x10928e8)))));
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompany::vf17 */
double F_007fb6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fb6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  double dVar1;
  
  F_0058cad0((undefined *)this,param_1);
  dVar1 = F_0079aaf0(this);
  return dVar1;
}

/* ref: FUN_007fb6c0 */
uint F_007fb6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fb6c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 in_EAX = 0;
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  this_00 = (gen_frame + 0x1c);
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) != (char)(*(uint *)&gen_args[1])) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1fc))) != 0) {
      F_00588cd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))),&(*(uint *)&gen_args[1]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1fc))),1);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1fc))) = 0;
    }
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
    (*(uint *)(gen_frame + 0x18)) = uVar1 & 0xff;
    F_005a9110((*(undefined * PTR32 *)&gen_args[0]),2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    return uVar1;
  }
  uVar1 = F_0079aa30((*(undefined * PTR32 *)&gen_args[0]),CONCAT31((int3)((uint)in_EAX >> 8),*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0)))),1);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf37 */
uint F_007fb760(unsigned int gen_a0)
{
  GEN_ENTER(0x7fb760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x188) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,2,this,0);
    F_005a92d0(this,1,0x3a,0);
    F_005a92d0(this,0,0x36,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf44 */
uint F_007fb840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fb840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,0);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar1 = F_0055e2f0(this,2);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this,10);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e2f0(this,6);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e2f0(this,0xe);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this,7);
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_0055e340(this,0xf);
  *(uint *)(this + 0x194) = uVar1;
  *(undefined4 *)(this + 0x1a0) = 0x65;
  *(undefined4 *)(this + 0x1ac) = 0x65;
  *(undefined4 *)(this + 0x19c) = 0x66;
  *(undefined4 *)(this + 0x1a8) = 0x66;
  *(undefined4 *)(this + 0x198) = 0x11;
  *(undefined4 *)(this + 0x1a4) = 0x11;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  (*(undefined4 *)(gen_frame + 0x20)) = 3;
  (*(undefined4 *)(gen_frame + 0x2c)) = 4;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x920a00));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x188),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),3,0);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x79b560));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x18c),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),3,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar3,0x1f,1,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar3,0x20,1,this,0,0);
  if (*(int *)(this + 0x188) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00568380(pvVar3,0x21,1,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar3,0x1f,2,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar3,0x20,2,this,0,0);
  if (*(int *)(this + 0x18c) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00568380(pvVar3,0x21,2,this,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x188),1,1,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x18c),1,1,0);
  F_005a91d0(this,1,0x3a);
  uVar1 = F_005a91d0(this,0,0x36);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf63 */
uint F_007fbad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (param_1 < 3)) {
    F_0079b340(this,param_1,*(undefined4 *)(param_3 + 8));
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf65 */
unsigned int F_007fbb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  if ((param_1 != 0) && (param_1 < 3)) {
    F_0079b400(this,param_1,param_3[2],*param_3);
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf66 */
uint F_007fbb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 != 0) && (param_1 < 3)) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf37 */
uint F_007fbb70(unsigned int gen_a0)
{
  GEN_ENTER(0x7fbb70u, gen_a0, 0u, 0u, 0u);
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
    F_005840a0(pvVar2,0x1f,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x180) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,1,this,0);
    F_005a92d0(this,1,0x2f,0);
    F_005a92d0(this,0,0x2b,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf44 */
uint F_007fbbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fbbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,0);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,0);
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
  *(uint *)(this + 0x180) = uVar1;
  if (uVar1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(uVar1 + 0x70);
  }
  F_00568380(pvVar3,0x1f,1,this,0,0);
  if (*(int *)(this + 0x180) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
  }
  F_00568380(pvVar3,0x20,1,this,0,0);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  (*(undefined4 *)(gen_frame + 0x20)) = 4;
  (*(undefined4 *)(gen_frame + 0x2c)) = 5;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x79b770));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x180),&(*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x14)),3,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x180),1,1,0);
  F_005a91d0(this,1,0x2f);
  uVar1 = F_005a91d0(this,0,0x2b);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf65 */
uint F_007fbd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079b6c0(this,param_3[2],*param_3);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf66 */
uint F_007fbd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1;
  if (uVar2 == 0) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf37 */
uint F_007fbd90(unsigned int gen_a0)
{
  GEN_ENTER(0x7fbd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  int iVar4;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar4 = 0;
    pAVar3 = this + 400;
    do {
      if (*(int *)pAVar3 == 0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
      }
      F_005840a0(pvVar2,0x17,iVar4 + 2,this,0);
      iVar4 = iVar4 + 1;
      pAVar3 = pAVar3 + 4;
    } while (iVar4 < 3);
    if (*(int *)(this + 0x19c) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar2,6,5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar2,7,5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1b0) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,6,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x68))),6,6,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x68))),7,6,this,0);
    F_005a92d0(this,1,0x27,0);
    F_005a92d0(this,0,0x24,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf63 */
uint F_007fbef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079bc10(this,(uint)*(byte *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8));
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf65 */
uint F_007fbf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079bc90(this,*param_3,param_3[2]);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf66 */
uint F_007fbf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079bd90(this,*param_3,param_3[2]);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf69 */
uint F_007fbf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fbf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  if ((param_1 == 5) || (uVar2 = param_1 - 6, uVar2 == 0)) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: FUN_007fbfc0 */
uint F_007fbfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fbfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  if (param_1 < 3) {
    F_0059ead0(*(undefined * PTR32 *)((int)this + 0x19c),0,0,1);
    uVar1 = 0;
    puVar2 = (undefined4 *)((int)this + 400);
    do {
      F_0059dde0((undefined *)*puVar2,(uint)(uVar1 == param_1));
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while ((int)uVar1 < 3);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
    (*(uint *)(gen_frame + 0xc)) = param_1;
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

/* ref: FUN_007fc080 */
uint F_007fc080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fc080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  undefined * pvVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  
  piVar7 = (int *)((int)this + 400);
  iVar5 = 3;
  do {
    if (*piVar7 == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(*piVar7 + 0x70);
    }
    F_0055a300(pvVar3,0);
    piVar7 = piVar7 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar2 = param_1;
  if (200 < (int)param_1) {
    iVar5 = (int)(param_1 - 1) / 200;
    cVar1 = (char)iVar5 + '\x01';
    uVar2 = CONCAT31((int3)((uint)iVar5 >> 8),cVar1);
    *(char *)((int)this + 0x1b6) = cVar1;
    uVar6 = 0;
    if (cVar1 != '\0') {
      do {
        iVar5 = *(int *)((int)this + uVar6 * 4 + 400);
        pvVar3 = (undefined *)0x0;
        if (iVar5 != 0) {
          pvVar3 = *(undefined * PTR32 *)(iVar5 + 0x70);
        }
        uVar2 = F_0055a300(pvVar3,1);
        bVar4 = (char)uVar6 + 1;
        uVar6 = (uint)bVar4;
      } while (bVar4 < *(byte *)((int)this + 0x1b6));
    }
  }
  return uVar2;
}

/* ref: FUN_007fc110 */
uint F_007fc110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fc110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_007fbfc0(this,param_1 & 0xff);
  return uVar1;
}

/* ref: FUN_007fc130 */
uint F_007fc130(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_0079bf10(this);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
  iVar3 = 2;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0x88)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = (uint)(cVar1 != '\0');
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007fc1c0 */
uint F_007fc1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x1b0) != 0) {
    uVar3 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x70))));
    if ((char)uVar3 == '\0') {
      F_00560760(((uint *)(gen_frame + 0x0)));
      uVar3 = F_0042a990((int)this + 0x214);
      bVar1 = *(byte *)((int)this + 0x13a);
      ((uint *)(gen_frame + 0x0))[0] = uVar3;
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x68)));
      uVar3 = F_0055dcb0();
      uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),2,(uint)bVar1,uVar2,((uint *)(gen_frame + 0x0)),0,0);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf37 */
uint F_007fc230(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 400) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x24,1,this,0);
    if (*(int *)(this + 0x198) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x68))),6,2,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x68))),7,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,3,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x68))),6,3,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x68))),7,3,this,0);
    F_005a92d0(this,1,0x2c,0);
    F_005a92d0(this,0,0x28,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf47 */
uint F_007fc330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fc330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 AVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0xb0);
  iVar2 = *(int *)(param_2 + 0xa0);
  F_00584110(*(undefined * PTR32 *)(this + 0x180),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x50))));
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0xc0)));
  F_0055a300(*(undefined * PTR32 *)(this + 0x184),1);
  F_0059d670(*(undefined * PTR32 *)(this + 0x184),iVar4 + 0x65);
  F_00584110(*(undefined * PTR32 *)(this + 0x188),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x44))));
  F_00584110(*(undefined * PTR32 *)(this + 0x18c),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x48))));
  iVar6 = 0;
  param_1 = 0;
  iVar4 = 0;
  do {
    uVar5 = *((uint *)GEN_TOP((*(int *)(iVar7 + 0x20) + 4 + iVar6)));
    if (uVar5 < 0x10) {
      param_1 = param_1 + 1;
      this[uVar5 + 0x1a0] = SUB41(iVar4,0);
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 0xc;
  } while (iVar4 < 0x10);
  F_0058d980(*(undefined4 *)(this + 400),param_1);
  piVar3 = *(int * PTR32 *)(this + 0x19c);
  if (*((int *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0x160))) == 0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x28))))(*(int * PTR32 *)(this + 0x198),0);
    *(undefined4 *)(this + 0x1b0) = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xe4)));
    *(undefined4 *)(this + 0x1b4) = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xe4)));
  }
  else {
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1);
    piVar3 = *(int * PTR32 *)(this + 0x198);
    if (*((int *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0x164))) == 0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1);
    }
    else {
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0);
      *(undefined4 *)(this + 0x1b4) = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xe8)));
    }
  }
  uVar5 = F_00584110(*(undefined * PTR32 *)(this + 0x194),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x4c))));
  if (((byte)this[0xfb] & 4) != 0) {
    AVar1 = *((undefined *)GEN_TOP((*(int *)(iVar7 + 0x20) + 200)));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x7c))))(*(int * PTR32 *)(this + 400));
    iVar7 = 0;
    if (0 < (int)uVar5) {
      do {
        if (this[iVar7 + 0x1a0] == AVar1) break;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar5);
      if (iVar7 < 0) {
        return uVar5;
      }
    }
    if (iVar7 != *((int *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 400) + 0xc0)))) {
      F_005623b0(*(undefined * PTR32 *)(this + 400),iVar7);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x74))))(*(int * PTR32 *)(this + 400),iVar7,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x4c))))(*(int * PTR32 *)(this + 400),iVar7);
      uVar5 = F_0079c270(this,iVar7);
    }
  }
  return uVar5;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf52 */
byte F_007fc500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fc500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if ((*param_1 == 2) && ((char)param_1[1] == '\0')) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4);
    }
    bVar2 = 1;
  }
  if (bVar2 == 0) {
    if (*param_1 == 0xf) {
      F_0079c350(this);
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      bVar2 = 1;
    }
    else if (*param_1 == 0x10) {
      F_0079c3c0(this);
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x14)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return bVar2;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf62 */
uint F_007fc5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 2) {
    F_0079c0d0(this);
    uVar1 = F_00557670(param_2,0);
  }
  else {
    uVar1 = param_1 - 3;
    if (uVar1 == 0) {
      F_0079c040(this);
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf63 */
uint F_007fc600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079c160(this,(uint)*(byte *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8),
                 (uint)(*(byte *)(param_3 + 0x11) >> 3 & 1));
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf64 */
uint F_007fc640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079c270(this,*(undefined4 *)(param_3 + 8));
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf69 */
uint F_007fc670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  if ((param_1 == 2) || (uVar2 = param_1 - 3, uVar2 == 0)) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: FUN_007fc6b0 */
uint F_007fc6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x19c) != 0) {
    uVar2 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + 0x70))));
    if ((char)uVar2 == '\0') {
      F_00560760(((undefined4 *)(gen_frame + 0x0)));
      bVar1 = *(byte *)((int)this + 0x13a);
      ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)((int)this + 0x1b0);
      uVar2 = F_0055dcb0();
      uVar6 = 0;
      uVar5 = 0;
      puVar4 = ((undefined4 *)(gen_frame + 0x0));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x19c) + 0x38))))(*(int * PTR32 *)((int)this + 0x19c));
      uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)bVar1,uVar3,puVar4,uVar5,uVar6);
    }
  }
  return uVar2;
}

/* ref: FUN_007fc720 */
uint F_007fc720(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x198) != 0) {
    uVar2 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + 0x70))));
    if ((char)uVar2 == '\0') {
      F_00560760(((undefined4 *)(gen_frame + 0x0)));
      bVar1 = *(byte *)((int)this + 0x13a);
      ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)((int)this + 0x1b4);
      uVar2 = F_0055dcb0();
      uVar6 = 0;
      uVar5 = 0;
      puVar4 = ((undefined4 *)(gen_frame + 0x0));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x38))))(*(int * PTR32 *)((int)this + 0x198));
      uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)bVar1,uVar3,puVar4,uVar5,uVar6);
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf37 */
uint F_007fc790(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  undefined * pAVar2;
  int iVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar3 = 0;
    pAVar2 = this + 0x180;
    do {
      if (*(int *)pAVar2 != 0) {
        F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,iVar3 + 1,this,0);
      }
      iVar3 = iVar3 + 1;
      pAVar2 = pAVar2 + 4;
    } while (iVar3 < 3);
    if (*(int *)(this + 0x1dc) == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
    }
    F_005840a0(this_00,0x17,4,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x68))),6,4,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x68))),7,4,this,0);
    F_005a92d0(this,1,0x31,0);
    F_005a92d0(this,0,0x2d,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf52 */
byte F_007fc840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fc840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if ((*param_1 == 2) && ((char)param_1[1] == '\0')) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4);
    }
    bVar2 = 1;
  }
  if (bVar2 == 0) {
    if (*param_1 == 0xf) {
      if (this[0x1e8] == (undefined1)0x0) {
        F_0079c900(this,1);
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0xc)),0xd);
        F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      }
    }
    else {
      if (*param_1 != 0x10) {
        return 0;
      }
      if (this[0x1e8] != (undefined1)0x0) {
        F_0079c900(this,(uint)(byte)((char)this[0x1e8] - 1));
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x14)),0xd);
        F_005a2670(((undefined1 *)(gen_frame + 0x14)));
        return 1;
      }
    }
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf62 */
uint F_007fc920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 - 1 < 3) {
    uVar1 = F_0079c900(this,(uint)(byte)((char)param_1 - 1));
    return uVar1;
  }
  uVar1 = param_1;
  if (param_1 == 4) {
    F_0079c960(this);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf69 */
unsigned int F_007fc960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fc960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  if (param_1 == 4) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    F_00557670(param_2,0);
  }
  return 0;
}

/* ref: FUN_007fc9a0 */
uint F_007fc9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fc9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *(uint *)((int)this + 0x1dc);
  if ((uVar2 != 0) && (*(int *)((int)this + 0x1e4) != 0)) {
    uVar2 = F_0055a350(*(undefined4 *)(uVar2 + 0x70));
    if ((char)uVar2 == '\0') {
      F_00560760(((undefined4 *)(gen_frame + 0x0)));
      bVar1 = *(byte *)((int)this + 0x13a);
      ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)((int)this + 0x1e4);
      uVar2 = F_0055dcb0();
      uVar6 = 0;
      uVar5 = 0;
      puVar4 = ((undefined4 *)(gen_frame + 0x0));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1dc) + 0x38))))(*(int * PTR32 *)((int)this + 0x1dc));
      uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)bVar1,uVar3,puVar4,uVar5,uVar6);
    }
  }
  return uVar2;
}

/* ref: FUN_007fca20 */
uint F_007fca20(unsigned int gen_a0)
{
  GEN_ENTER(0x7fca20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_ecx;
  
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),*(undefined4 *)((int)this + 0x180));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x184);
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

/* ref: Client::UI2::AddonFreeCompanyTopics::vf37 */
uint F_007fcaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fcaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x188) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x68))),6,1,this,0);
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x68))),7,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x198) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x1f,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x20,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,4,this,0);
    F_005a92d0(this,1,0x3a,0);
    F_005a92d0(this,0,0x36,0);
    F_005a92d0(this,1,0x2f,0);
    F_005a92d0(this,0,0x2b,0);
    F_005a92d0(this,1,0x27,0);
    F_005a92d0(this,0,0x24,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf47 */
uint F_007fcc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fcc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  F_0079cbd0(this,param_1,param_2);
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(param_2 + 0xac) != 0)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0xbc) + 0x20)));
    if (*piVar1 == 0) {
      F_0059ead0(*(undefined * PTR32 *)(this + 0x198),0,0,1);
    }
    else {
      uVar3 = piVar1[1];
      if (3 < uVar3) {
        uVar3 = 3;
      }
      F_0058d980(*(undefined4 *)(this + 0x198),uVar3);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x9c);
  if ((uVar3 != 0) && (*(int *)(param_2 + 0x90) != 0)) {
    uVar2 = *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x1900)));
    if ((*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 0x190c))) != 0) && (0 < (int)uVar2)) {
      F_0058d980(*(undefined4 *)(this + 0x19c),uVar2);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0x70))))(*(int * PTR32 *)(this + 0x19c));
      return uVar3;
    }
    uVar3 = F_0059ead0(*(undefined * PTR32 *)(this + 0x19c),0,0,1);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf52 */
byte F_007fcd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fcd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if ((*param_1 == 2) && ((char)param_1[1] == '\0')) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4);
    }
    bVar2 = 1;
  }
  if (((bVar2 == 0) && (*param_1 == 5)) && ((char)param_1[1] == '\0')) {
    if (*(int *)(this + 0x188) != 0) {
      uVar3 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))));
      if ((char)uVar3 != '\0') {
        F_0079cdf0(this);
        uVar3 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x4)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
      }
    }
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf62 */
uint F_007fcda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fcda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    F_0079cdf0(this);
    uVar1 = F_00557670(param_2,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf63 */
uint F_007fcdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fcdc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_1 == 3) {
    F_0079cf80(this,(uint)*(byte *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8));
    uVar1 = F_00557670(param_2,0);
  }
  else {
    uVar1 = param_1 - 4;
    if (uVar1 == 0) {
      F_0079cf10(this,(uint)*(byte *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8));
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf65 */
uint F_007fce10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fce10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  if (param_1 == 2) {
    F_0079ce60(this,param_3[2],*param_3);
    uVar1 = F_00557670(param_2,0);
  }
  else {
    uVar1 = param_1 - 3;
    if (uVar1 == 0) {
      F_0079cff0(this,param_3[2],*param_3);
      uVar1 = F_00557670(param_2,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf66 */
uint F_007fce60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fce60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  if ((param_1 == 2) || (uVar2 = param_1 - 3, uVar2 == 0)) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf69 */
uint F_007fcea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fcea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1;
  if (uVar2 == 0) {
    AVar1 = this[0x13a];
    uVar2 = F_0055dcb0();
    F_00596cb0((undefined *)(uVar2 + 0xe0),(uint)(byte)AVar1,0);
    uVar2 = F_00557670(param_2,0);
  }
  return uVar2;
}

/* ref: FUN_007fcee0 */
uint F_007fcee0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fcee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x188) != 0) {
    uVar2 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x188) + 0x70))));
    if ((char)uVar2 == '\0') {
      F_00560760(((uint *)(gen_frame + 0x0)));
      uVar2 = F_0042a990((int)this + 0x1a0);
      bVar1 = *(byte *)((int)this + 0x13a);
      ((uint *)(gen_frame + 0x0))[0] = uVar2;
      uVar2 = F_0055dcb0();
      uVar6 = 0;
      uVar5 = 0;
      puVar4 = ((uint *)(gen_frame + 0x0));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x188) + 0x38))))(*(int * PTR32 *)((int)this + 0x188));
      uVar2 = F_00588780((undefined *)(uVar2 + 0xe0),2,(uint)bVar1,uVar3,puVar4,uVar5,uVar6);
    }
  }
  return uVar2;
}

/* ref: FUN_007fcf60 */
uint F_007fcf60(unsigned int gen_a0)
{
  GEN_ENTER(0x7fcf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 in_ecx;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  F_0056b780(this,0);
  in_ecx = 0;
  if (*(int *)((int)this + 0x188) != 0) {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x188) + 0x70)));
  }
  uVar2 = F_0055a350(in_ecx);
  if ((char)uVar2 != '\0') {
    bVar1 = F_0056b630(this,0x18ab9,7,0,9,0,0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_007fcfa0 */
uint F_007fcfa0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fcfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c98bc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1ac);
  iVar2 = 0xa0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6b4) = (*(undefined * PTR32 (*)[4])REFP(0x10c98a4));
  F_00580ea0((undefined *)((int)this + 0x6c0));
  *(undefined1 *)((int)this + 0xcf8) = 0;
  F_00c48350((undefined *)((int)this + 0x6f8),0,0x600);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this,0x1000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  F_00560e80((undefined *)((int)this + 0x6c0),this);
  return (uint)this;
}

/* ref: FUN_007fd070 */
unsigned int F_007fd070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (1 < param_1) {
    param_1 = 0;
  }
  uVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x198);
  do {
    F_0059dde0((undefined *)*puVar4,(uint)(uVar3 == param_1));
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
  } while ((int)uVar3 < 2);
  *(uint *)((int)this + 0x180) = param_1;
  this_00 = *(undefined * PTR32 *)((int)this + 0x18c);
  if (param_1 == 1) {
    if (this_00 == (undefined *)0x0) {
      uVar5 = 1;
    }
    else {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x70);
      uVar5 = 1;
    }
  }
  else {
    if (this_00 != (undefined *)0x0) {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x70);
    }
    uVar5 = 0;
  }
  F_0055a300(this_00,uVar5);
  uVar5 = 0x1c1;
  if (*(int *)((int)this + 0x180) == 1) {
    uVar5 = 0x18ad3;
  }
  uVar6 = 0;
  uVar3 = F_0055e2f0(this,0x1e);
  uVar1 = F_0055a020(uVar3);
  F_0056b630(this,uVar5,6,0,7,(uint)(uVar1 >> 1),uVar6);
  if (*(int *)((int)this + 0x180) == 0) {
    uVar5 = 0x1c;
  }
  else {
    uVar5 = 0x1d;
  }
  uVar3 = F_0055e2f0(this,uVar5);
  uVar1 = F_00559d90(uVar3);
  uVar5 = 0;
  if (*(int *)((int)this + 400) != 0) {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
  }
  F_00559f00(uVar5,(float)(int)(short)uVar1);
  uVar1 = F_0055a030(uVar3);
  uVar2 = (uint)uVar1;
  uVar1 = F_0055a020(uVar3);
  F_005b1cd0(*(undefined * PTR32 *)((int)this + 400),(uint)uVar1,uVar2);
  return 0;
}

/* ref: FUN_007fd190 */
uint F_007fd190(unsigned int gen_a0)
{
  GEN_ENTER(0x7fd190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  undefined4 in_ecx;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x188);
  if ((*(byte *)(uVar3 + 0x2c) & 1) != 0) {
    if (((byte)*(undefined4 *)((int)this + 0x4d4) & 0xf) == 4) {
      F_00560f40(uVar3,0xa1,(int)this + 0x1ac);
    }
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x188) + 4))) + 0x120)));
    *puVar1 = *puVar1 | 0x400;
    in_ecx = 0;
    if (*(int *)((int)this + 400) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
    }
    uVar3 = F_0055a2d0(in_ecx);
    if (((char)uVar3 == '\0') ||
       (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x7c))))(*(int * PTR32 *)((int)this + 400)),
       uVar3 == 0)) {
      uVar3 = F_0055dcb0();
      if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == *((int *)GEN_TOP((*(int *)((int)this + 0x188) + 4)))) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
      }
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x188) + 4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0,0);
    }
    else {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x188) + 4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,0);
    }
    uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x188) + 4)));
    puVar1 = (uint *)(uVar3 + 0x120);
    *puVar1 = *puVar1 & 0xfffffbff;
    return uVar3;
  }
  return uVar3;
}

/* ref: FUN_007fd270 */
uint F_007fd270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 400);
  uVar1 = *((uint *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) >> 4 & 0xffffff;
  if (uVar1 == 0xfffffd) {
    uVar1 = F_0056d250(this_00,3,0);
    return uVar1;
  }
  if (uVar1 - 0xfffffe < 2) {
    uVar1 = F_0056d250(this_00,2,0);
    return uVar1;
  }
  uVar1 = F_0056d250(this_00,4,0);
  return uVar1;
}

/* ref: FUN_007fd2c0 */
uint F_007fd2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  undefined * this_00;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(param_2[1]);
  this_00 = (undefined *)F_00559ba0(*param_2);
  F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  uVar1 = F_00584110(this_00,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))) + 4))));
  return uVar1;
}

/* ref: FUN_007fd310 */
uint F_007fd310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd310u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559ba0(*param_2);
  uVar1 = F_00584110(this,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  return uVar1;
}

/* ref: FUN_007fd340 */
uint F_007fd340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4)));
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

/* ref: FUN_007fd3c0 */
unsigned int F_007fd3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x184) != param_1) {
    puVar1 = (undefined4 *)((int)this + 0x198);
    iVar2 = 2;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x28))((int *)*puVar1,0);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(int *)((int)this + 0x184) = param_1;
  }
  return 0;
}

/* ref: FUN_007fd410 */
byte F_007fd410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7fd410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x7c))))(*(int * PTR32 *)((int)this + 400));
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined4 *)F_0056dc60(*(undefined4 *)((int)this + 400),uVar5);
      uVar1 = *(uint *)*puVar3;
      uVar4 = uVar1 >> 4 & 0xffffff;
      if (((uVar1 & 2) != 0) && ((*(byte *)((int)puVar3 + 0x2a) & 0xf) == 0)) {
        *param_2 = uVar5;
      }
      if ((uVar4 < 0xfffffd) && (uVar4 == param_3)) {
        *param_1 = uVar5;
        return 1;
      }
      if ((uVar1 & 1) != 0) {
        *param_2 = 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return 0;
}

/* ref: FUN_007fd4a0 */
uint F_007fd4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint * this_00;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = param_1;
  if (*(uint *)((int)this + 0x180) != param_1) {
    puVar4 = (undefined4 *)((int)this + 0x198);
    iVar3 = 2;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar4 + 0x28))((int *)*puVar4,0);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    F_007fd070(this,param_1);
    if (*(int *)((int)this + 0x184) < 0) {
      *(undefined4 *)((int)this + 0x184) = 0;
    }
    uVar1 = 0;
    if (*(int *)((int)this + 0x18c) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x70)));
    }
    uVar2 = F_0055a2d0(uVar1);
    if ((char)uVar2 == '\0') {
      uVar1 = *(undefined4 *)((int)this + 400);
    }
    else {
      F_0059caa0(*(undefined * PTR32 *)((int)this + 0x18c),*(undefined4 *)((int)this + 0x184));
      uVar1 = *(undefined4 *)((int)this + 0x18c);
    }
    F_0059b390(this,uVar1,1,0);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0x184);
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 8;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(uint *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x18));
    iVar3 = 2;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007fd5a0 */
uint F_007fd5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  undefined1 * this_00;
  int iVar3;
  int iVar4;
  
  this_00 = (gen_frame + 0x1c);
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)((int)this + 0x184) != iVar4) {
    puVar2 = (undefined4 *)((int)this + 0x198);
    iVar3 = 2;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x28))((int *)*puVar2,0);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(int *)((int)this + 0x184) = iVar4;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 9;
  (*(int *)(gen_frame + 0x18)) = iVar4;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar4 = 1;
  do {
    this_00 = this_00 + -8;
    uVar1 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return uVar1;
}

/* ref: FUN_007fd630 */
uint F_007fd630(unsigned int gen_a0)
{
  GEN_ENTER(0x7fd630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 *)((int)this + 0x6b8) = this;
  *(gen_code32 *)((int)this + 0x6bc) = ((code *)REFP(0x7fd270));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = 4;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(gen_code32 *)(gen_frame + 0x38)) = ((code *)REFP(0x7fd2c0));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00574320(*(undefined * PTR32 *)((int)this + 400),&(*(undefined * PTR32 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0xc)),2,2);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(gen_code32 *)(gen_frame + 0x38)) = ((code *)REFP(0x7fd310));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00574320(*(undefined * PTR32 *)((int)this + 400),&(*(undefined * PTR32 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x24)),1,3);
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 2;
  (*(undefined4 *)(gen_frame + 0x4c)) = 3;
  (*(undefined4 *)(gen_frame + 0x58)) = 4;
  (*(undefined4 *)(gen_frame + 0x64)) = 5;
  (*(undefined4 *)(gen_frame + 0x70)) = 6;
  (*(undefined4 *)(gen_frame + 0x7c)) = 7;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(gen_code32 *)(gen_frame + 0x38)) = ((code *)REFP(0x7fd340));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  uVar1 = F_00574320(*(undefined * PTR32 *)((int)this + 400),&(*(undefined * PTR32 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)),6,4);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar1;
}

/* ref: FUN_007fd770 */
byte F_007fd770(unsigned int gen_a0)
{
  GEN_ENTER(0x7fd770u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 != (undefined4 *)0x0) && ((*(uint *)*param_1 & 0xffffff0) < 0xfffffd0)) {
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_007fd7a0 */
uint F_007fd7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    (*(uint *)(gen_frame + 0xc)) = *(uint *)*param_1 >> 4 & 0xffffff;
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = 10;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(uint *)(gen_frame + 0x14)) = ((uint *)*param_1)[2];
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

/* ref: Client::UI2::AddonJournal::vf5 */
uint F_007fd820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((*(int *)(this + 0x188) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x188) + 4))) != 0)) &&
     (*(int *)(this + 400) != 0)) {
    uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x70))));
    if ((char)uVar1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 4))) + 0x14))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 4))),param_1);
    }
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonJournal::vf6 */
uint F_007fd880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fd880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (((*(int *)(this + 0x188) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x188) + 4))) != 0)) &&
     (*(int *)(this + 400) != 0)) {
    uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x70))));
    if ((char)uVar1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 4))) + 0x18))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 4))),param_1,0);
    }
  }
  uVar1 = F_005b0610(this,param_1,1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonJournalAccept::vf37 */
uint F_007fd8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7fd8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 400) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x194) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: FUN_007fd930 */
uint F_007fd930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7fd930u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  undefined * this;
  
  if (param_2 == 1) {
    if (param_1 == (int *)0x0) {
      this = (undefined *)0x0;
    }
    else {
      this = (undefined *)param_1[0x1c];
    }
    F_0055a300(this,1);
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,1);
  }
  else {
    if (param_2 == 2) {
      if (param_1 == (int *)0x0) {
        F_0055a300((undefined *)0x0,1);
        uVar1 = ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x28))(0,0);
        return uVar1;
      }
      F_0055a300((undefined *)param_1[0x1c],1);
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,0);
      return uVar1;
    }
    uVar1 = param_2 - 3;
    if (uVar1 == 0) {
      if (param_1 == (int *)0x0) {
        F_0055a300((undefined *)0x0,0);
        uVar1 = ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x28))(0,0);
        return uVar1;
      }
      F_0055a300((undefined *)param_1[0x1c],0);
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_007fd9e0 */
uint F_007fd9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fd9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint in_EAX = 0;
  undefined4 in_ecx;
  uint uVar1;
  
  if ((*(short *)(param_2 + 4) != 0) || (*(short *)(param_2 + 6) != 0)) {
    in_ecx = 0;
    if (*(int *)((int)this + 0x1a4) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0x70)));
    }
    uVar1 = F_0055a350(in_ecx);
    if ((char)uVar1 != '\0') {
      F_0059f6f0(*(undefined * PTR32 *)((int)this + 0x1a4),
                   ((uint)(*(short *)(param_2 + 6) < 1) * 2 + -1) *
                   (int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x1a4) + 0xc2))),1);
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x80000;
    *(undefined1 *)(param_1 + 0x15) = 2;
    in_EAX = param_1;
  }
  return in_EAX;
}

/* ref: Client::UI2::AddonJournalDetail::vf46 */
byte F_007fda50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7fda50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  char cVar2;
  int iVar3;
  byte * pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char * pcVar8;
  undefined * pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  
  pbVar4 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(int *)&gen_args[1]) != 0) {
    if (((*(byte * PTR32 *)&gen_args[2])[0x328] & 0xf) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x32c)));
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = iVar5;
    iVar3 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c)));
    if (iVar5 != 0) {
      uVar7 = 0;
      if (iVar3 != 0) {
        uVar7 = *(undefined4 *)(iVar3 + 0x70);
      }
      uVar6 = F_0055a2d0(uVar7);
      if ((char)uVar6 != '\0') {
        F_00574dc0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),0,1,1);
      }
      if ((*pbVar4 & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(pbVar4 + 4);
      }
      (*(undefined * PTR32 *)&gen_args[0])[0x188] = SUB41(uVar6 >> 0x1f,0);
      (*(uint *)(gen_frame + 0x8)) = uVar6 & 0x7fffffff;
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),1);
      if ((pbVar4[0x18] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x1c);
      }
      F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),uVar7);
      if ((pbVar4[0x10] & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pbVar4 + 0x14);
      }
      (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(CONCAT13(iVar5 != 0,GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 0, 3))));
      if ((*(uint *)(pbVar4 + 8) & 0xf) == 0) {
        pcVar8 = (char *)0x0;
      }
      else {
        pcVar8 = *(char * PTR32 *)(pbVar4 + 0xc);
      }
      pcVar1 = pcVar8 + 1;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      if (pcVar8 == pcVar1) {
        uVar7 = 0;
      }
      else if ((*(uint *)(pbVar4 + 8) & 0xf) == 0) {
        F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),0);
        uVar7 = 1;
      }
      else {
        F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),*(undefined4 *)(pbVar4 + 0xc));
        uVar7 = 1;
      }
      pvVar9 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),7);
      F_0055a300(pvVar9,uVar7);
      uVar7 = 0x65;
      if (((pbVar4[0x318] & 0xf) == 0) || (*(int *)(pbVar4 + 0x31c) == 0)) {
        if ((*(uint *)(gen_frame + 0x8)) == 10) {
          uVar7 = 0x67;
        }
      }
      else {
        uVar7 = 0x66;
      }
      pvVar9 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),3);
      F_0059d670(pvVar9,uVar7);
      if ((pbVar4[0x460] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x464);
      }
      if ((pbVar4[0x330] & 0xf) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined4 *)(pbVar4 + 0x334);
      }
      if ((pbVar4[0x318] & 0xf) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(pbVar4 + 0x31c);
      }
      F_00592b60(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))),uVar10,uVar11,uVar7);
      if ((pbVar4[800] & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pbVar4 + 0x324);
      }
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),(uint)(iVar5 != 0));
      if (iVar5 != 0) {
        F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),iVar5,0);
      }
      if ((pbVar4[0x20] & 0xf) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(pbVar4 + 0x24);
      }
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),(uint)(iVar5 != 0));
      if (iVar5 != 0) {
        F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),iVar5,0);
      }
      if ((*(undefined * PTR32 *)&gen_args[0])[0x188] != (undefined1)0x0) {
        F_0059d6a0((*(undefined * PTR32 *)&gen_args[0]),0x66,1,0);
        uVar7 = 0x65;
        pvVar9 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x24);
        F_0059d670(pvVar9,uVar7);
        if ((pbVar4[0x28] & 0xf) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(pbVar4 + 0x2c);
        }
        F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))),(uint)(iVar5 != 0));
        if (iVar5 != 0) {
          F_00591c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))),iVar5,0);
        }
        if ((pbVar4[0x350] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x354);
        }
        F_0079df00((*(undefined * PTR32 *)&gen_args[0]),uVar7,(*(int *)&gen_args[1]),pbVar4,0x6b);
        F_0056e740(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))));
        uVar12 = 0;
        uVar6 = F_0055a2d0(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))));
        if ((char)uVar6 != '\0') {
          uVar12 = (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8)));
        }
        F_00559f40(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))),uVar12);
        F_00577d20(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))),&(*(uint *)(gen_frame + 0x8)),&(*(byte * PTR32 *)&gen_args[2]),0,0,REFG(undefined4, 0x108cc50),0);
        F_0055a080(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))),(uint)(ushort)((short)(*(byte * PTR32 *)&gen_args[2]) + (short)uVar12));
        F_00574c80(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),0,1,1);
        uVar7 = 0;
        uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x29);
        F_0058e3c0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))),uVar6,uVar7);
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) | 1;
        return 1;
      }
      uVar7 = 0x11;
      pvVar9 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x24);
      F_0059d670(pvVar9,uVar7);
      if ((pbVar4[0x28] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x2c);
      }
      F_00592c00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar7);
      if ((pbVar4[0x418] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(pbVar4 + 0x41c);
      }
      if ((*(uint *)(gen_frame + 0x8)) == 10) {
        if ((pbVar4[0x4c8] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x4cc);
        }
        if ((pbVar4[0x30] & 0xf) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(pbVar4 + 0x34);
        }
        if ((pbVar4[0x40] & 0xf) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(pbVar4 + 0x44);
        }
        F_005ae8f0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar6 & 0xffff,(*(int *)&gen_args[1]),pbVar4,0x84,uVar10,uVar11,uVar7
                    );
      }
      else {
        if ((pbVar4[0x30] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x34);
        }
        if ((pbVar4[0x40] & 0xf) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(pbVar4 + 0x44);
        }
        F_005adb40(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar6 & 0xffff,(*(int *)&gen_args[1]),pbVar4,0x84,uVar11,uVar7);
      }
      if ((pbVar4[0x298] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x29c);
      }
      F_005a3cf0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar7,(*(int *)&gen_args[1]),pbVar4,0x54,0x59,0x5e);
      uVar6 = F_0055dcb0();
      F_0055b9b0(uVar6);
      F_0056e740(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))));
      if ((pbVar4[0x48] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x4c);
      }
      F_00597d10(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar7,(*(int *)&gen_args[1]),pbVar4,10,0xf,0x14,0x1e,0x23);
      if ((pbVar4[0x140] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x144);
      }
      F_00597f60(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar7,(*(int *)&gen_args[1]),pbVar4,0x29,0x2e,0x33,0x38);
      if (((byte)*(undefined4 *)(pbVar4 + 0x1e8) & 0xf) == 4) {
        F_00598240(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),*(undefined4 *)(pbVar4 + 0x1ec),(*(int *)&gen_args[1]),pbVar4,0x3f,
                     0x43,0x4b,0x4f,0x47);
      }
      if (((byte)*(undefined4 *)(pbVar4 + 0x1f0) & 0xf) == 6) {
        F_0058bbd0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),*(undefined4 *)(pbVar4 + 500));
      }
      if ((pbVar4[0x38] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar4 + 0x3c);
      }
      uVar6 = F_0055dcb0();
      uVar6 = F_00785470(*(undefined4 *)(uVar6 + 0x38),uVar7);
      F_0058bbf0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar6);
      uVar7 = 0;
      if (((byte)*(undefined4 *)(pbVar4 + 0x350) & 0xf) == 4) {
        uVar7 = *(undefined4 *)(pbVar4 + 0x354);
      }
      F_005a49e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),uVar7,(*(int *)&gen_args[1]),pbVar4,0x6b);
      F_00574ec0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))));
      F_00574c80(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),0,1,1);
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) + 0x70)));
      }
      uVar11 = 0;
      uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x29);
      F_0058e3c0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),uVar7,uVar6,uVar11);
      if ((*(uint *)(gen_frame + 0x8)) != *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184)))) {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = (*(uint *)(gen_frame + 0x8));
        *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) = 3;
        if (((((*(uint *)(gen_frame + 0x8)) == 4) || ((*(uint *)(gen_frame + 0x8)) == 1)) || ((*(uint *)(gen_frame + 0x8)) == 6)) ||
           ((((*(uint *)(gen_frame + 0x8)) == 7 || ((*(uint *)(gen_frame + 0x8)) == 8)) || ((*(uint *)(gen_frame + 0x8)) == 9)))) {
          *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) = 1;
        }
        else if ((*(uint *)(gen_frame + 0x8)) == 10) {
          *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) = 0xffffffff;
        }
        *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = 0xffffffff;
        switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x8)))) {
        case 4: ;
        case 8: ;
          *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = 4;
          break;
        case 6: ;
          *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = 3;
          break;
        case 7: ;
          *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = 0xd;
        }
        if ((pbVar4[0x338] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x33c);
        }
        F_00589280(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),uVar7);
        if ((pbVar4[0x340] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x344);
        }
        F_00589280(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))),uVar7);
        if ((pbVar4[0x348] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x34c);
        }
        F_00589280(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),uVar7);
      }
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) = 0xffffffff;
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) == 7) {
        *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) = 5;
      }
      else if ((*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3)))) != '\0') {
        *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) = 6;
      }
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),-1 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))));
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) == 0) {
        pvVar9 = (undefined *)0x0;
      }
      else {
        pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) + 0x70)));
      }
      F_0055a300(pvVar9,(*(int *)&gen_args[1]));
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),-1 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))));
      pvVar9 = (undefined *)0x0;
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) != 0) {
        pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) + 0x70)));
      }
      F_0055a300(pvVar9,(*(int *)&gen_args[1]));
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),-1 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))));
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) == 0) {
        pvVar9 = (undefined *)0x0;
      }
      else {
        pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) + 0x70)));
      }
      F_0055a300(pvVar9,(*(int *)&gen_args[1]));
      F_005617e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),2,0x32);
      F_005617e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))),2,0x32);
      F_005617e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),2,0x32);
      if (((byte)*(undefined4 *)(pbVar4 + 0x4d0) & 0xf) == 8) {
        F_0059d6a0((*(undefined * PTR32 *)&gen_args[0]),0x65,0,0);
        if ((pbVar4[0x4d0] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x4d4);
        }
        uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x1d);
        pvVar9 = (undefined *)F_00559ba0(uVar6);
        F_00584110(pvVar9,uVar7);
        if ((pbVar4[0x4d8] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x4dc);
        }
        uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x1e);
        pvVar9 = (undefined *)F_00559ba0(uVar6);
        F_00584110(pvVar9,uVar7);
        if ((pbVar4[0x4e0] & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar4 + 0x4e4);
        }
        uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),0x1f);
        pvVar9 = (undefined *)F_00559ba0(uVar6);
        F_00584110(pvVar9,uVar7);
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) | 1;
        return 1;
      }
      F_0059d6a0((*(undefined * PTR32 *)&gen_args[0]),0x11,1,0);
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) | 1;
      return 1;
    }
    if (iVar3 == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *(undefined * PTR32 *)(iVar3 + 0x70);
    }
    F_0055a300(pvVar9,0);
    pvVar9 = (undefined *)0x0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) != 0) {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) + 0x70)));
    }
    F_0055a300(pvVar9,0);
    pvVar9 = (undefined *)0x0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) != 0) {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) + 0x70)));
    }
    F_0055a300(pvVar9,0);
    pvVar9 = (undefined *)0x0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) != 0) {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) + 0x70)));
    }
    F_0055a300(pvVar9,0);
    pvVar9 = (undefined *)0x0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) != 0) {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) + 0x70)));
    }
    F_0055a300(pvVar9,0);
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),0);
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) | 1;
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = 0xffffffff;
  }
  return 1;
}

