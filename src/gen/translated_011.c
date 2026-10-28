#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::UI::Misc::RaptureTextModule::vf11 */
GEN_FRAME uint GEN_THISCALL F_004937a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4937a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  if (*(int *)(this + 600) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 8))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_FWD,"Addon");
    *(uint *)(this + 600) = uVar2;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 600) + 0x24))))(*(int * PTR32 *)(this + 600) GEN_EDX_ARG,param_1)));
  uVar4 = 0;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
  uVar2 = F_00cb0950(this_00 GEN_EDX_ARG,uVar4);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00493810 */
GEN_NOFRAME uint GEN_THISCALL F_00493810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x493810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00493b20((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00493820 */
GEN_FRAME uint GEN_THISCALL F_00493820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x493820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00492d20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x74,400);
  return (uint)uVar1;
}

/* ref: FUN_00493860 */
GEN_FRAME uint GEN_THISCALL F_00493860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x493860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00492fb0(param_1,param_2,(int)this + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00493880 */
GEN_FRAME unsigned int F_00493880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x493880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00492f50(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_004938a0 */
GEN_FRAME unsigned int F_004938a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4938a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00492f50(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_004938c0 */
GEN_FRAME uint GEN_THISCALL F_004938c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4938c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00492c50((undefined *)((int)this + 4) GEN_EDX_FWD);
  F_00429760(*(undefined4 *)((int)this + 4),8,0x2c4);
  *(undefined4 *)((int)this + 4) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00493900 */
GEN_FRAME uint GEN_THISCALL F_00493900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x493900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x70) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x1c) GEN_EDX_ARG);
  F_00492c50((undefined *)((int)this + 4) GEN_EDX_ARG);
  F_00429760(*(undefined4 *)((int)this + 4),8,0x2c4);
  *(undefined4 *)((int)this + 4) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00493950 */
GEN_FRAME unsigned int F_00493950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0xff;
    }
    puVar1 = puVar1 + 3;
  }
  return;
}

/* ref: FUN_00493980 */
GEN_FRAME uint GEN_THISCALL F_00493980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x493980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00486f80(this GEN_EDX_FWD,1);
  }
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 8);
  }
  iVar2 = iVar2 - 1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + iVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00492f50(this_00 GEN_EDX_ARG,param_1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(int *)((int)this + 0xc) = iVar2;
  return uVar1;
}

/* ref: FUN_004939f0 */
GEN_FRAME unsigned int F_004939f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4939f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_4;
  if (param_2 != param_4) {
    do {
      uVar2 = uVar2 - 1;
      if (param_2 == uVar2) {
        return 0;
      }
      uVar3 = uVar2;
      if (*(uint *)(param_3 + 8) <= uVar2) {
        uVar3 = uVar2 - *(uint *)(param_3 + 8);
      }
      uVar1 = param_2;
      if (*(uint *)(param_1 + 8) <= param_2) {
        uVar1 = param_2 - *(uint *)(param_1 + 8);
      }
      F_00493070(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + uVar1 * 4))),
                   *((undefined4 *)GEN_TOP((*(int *)(param_3 + 4) + uVar3 * 4))));
      param_2 = param_2 + 1;
    } while (param_2 != uVar2);
  }
  return 0;
}

/* ref: FUN_00493a50 */
GEN_FRAME unsigned int F_00493a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x493a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00493500(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  return;
}

/* ref: FUN_00493a80 */
GEN_FRAME uint GEN_THISCALL F_00493a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x493a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00492d20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x74,400);
  return (uint)uVar1;
}

/* ref: Client::UI::Misc::AddonConfig::vf4 */
GEN_NOFRAME uint F_00493ac0(void)
{
  GEN_ENTER(0x493ac0u, 0u, 0u, 0u, 0u);
  return 0x5000;
}

/* ref: Client::UI::Misc::AddonConfig::vf5 */
GEN_NOFRAME uint F_00493ad0(void)
{
  GEN_ENTER(0x493ad0u, 0u, 0u, 0u, 0u);
  return 100;
}

/* ref: Client::UI::Misc::AddonConfig::vf6 */
GEN_NOFRAME uint F_00493ae0(void)
{
  GEN_ENTER(0x493ae0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI::Misc::RaptureTextModule::vf0 */
GEN_FRAME uint GEN_THISCALL F_00493af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x493af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0045fdf0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Misc::ConfigModule::vf0 */
GEN_FRAME uint GEN_THISCALL F_00493b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x493b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004600d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00493b50 */
GEN_FRAME uint GEN_THISCALL F_00493b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x493b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00486f80(this GEN_EDX_FWD,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00492f50(this_00 GEN_EDX_ARG,param_1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar1;
}

/* ref: FUN_00493bc0 */
GEN_FRAME uint GEN_THISCALL F_00493bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x493bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00486f80(this GEN_EDX_FWD,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00492f50(this_00 GEN_EDX_ARG,param_1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar1;
}

/* ref: FUN_00493c70 */
GEN_FRAME uint GEN_THISCALL F_00493c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x493c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00492fb0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x68) * 0x68,0);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00493ce0 */
GEN_FRAME unsigned int F_00493ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0xff;
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00493d10 */
GEN_FRAME uint GEN_STDCALL F_00493d10(unsigned int gen_a0)
{
  GEN_ENTER(0x493d10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)(param_1 + 4) GEN_EDX_ARG);
  uVar1 = F_00429760(*(undefined4 *)(param_1 + 4),8,0x2c4);
  *(undefined4 *)(param_1 + 4) = 0;
  return (uint)uVar1;
}

/* ref: FUN_00493d40 */
GEN_FRAME uint GEN_STDCALL F_00493d40(unsigned int gen_a0)
{
  GEN_ENTER(0x493d40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)(param_1 + 0x70) GEN_EDX_ARG);
  F_0042c880((undefined *)(param_1 + 0x1c) GEN_EDX_ARG);
  F_00492c50((undefined *)(param_1 + 4) GEN_EDX_ARG);
  uVar1 = F_00429760(*(undefined4 *)(param_1 + 4),8,0x2c4);
  *(undefined4 *)(param_1 + 4) = 0;
  return (uint)uVar1;
}

/* ref: FUN_00493d80 */
GEN_FRAME unsigned int F_00493d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x493d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 uVar2;
  
  if (((param_4 == (int *)0x0) || ((int *)*param_4 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_4, puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  if (((param_1 != (int *)0x0) && ((int *)*param_1 != (int *)0x0)) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    F_004939f0(*puVar1,param_3,uVar2,param_6,param_6);
    return;
  }
  F_004939f0(0,param_3,uVar2,param_6,param_6);
  return;
}

/* ref: FUN_00493de0 */
GEN_FRAME uint F_00493de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x493de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_4;
  if ((param_4 != (*(int *)&gen_a6)) && ((*(int *)&gen_a6) != param_10)) {
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
    F_00493500(uVar2,param_4,uVar3,(*(int *)&gen_a6),uVar4,param_10,0,0);
    iVar5 = param_4 + (param_10 - (*(int *)&gen_a6));
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar5;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return (uint)param_1;
}

/* ref: Client::UI::Misc::AddonConfig::vf0 */
GEN_FRAME uint GEN_THISCALL F_00493e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x493e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109181c));
  F_00492d20(this + 0x38 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0x3c),*(undefined4 * PTR32 *)(this + 0x3c));
  F_00429760(*(undefined4 *)(this + 0x3c),0x74,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*(int *)(this + 0x14) != 0) {
    F_00406810(*(int *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandRecast::vf1 */
GEN_FRAME uint GEN_THISCALL F_00493f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x493f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  float fVar6;
  double dVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar2 = *(uint *)(param_1 + 4);
  if (-1 < (int)uVar2) {
    uVar8 = *(undefined4 *)(&REFG(undefined, 0x12fe6d4) + ((int)uVar2 >> 0x18) * 4);
    uVar2 = uVar2 & 0xffffff;
    switch((unsigned int)(uintptr_t)(uVar8)) {
    case 1: ;
      uVar2 = F_00ac1b60(uVar2);
      break;
    case 6: ;
    case 0xb: ;
      goto switchD_00493f4f_caseD_6;
    case 9: ;
      uVar2 = F_00ac1cb0(uVar2);
    }
    bVar1 = F_00ac78f0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar8,uVar2);
    if (bVar1 != 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,&REFG(undefined, 0x1091850),REFG(undefined4, 0x108cc50));
      puVar9 = ((undefined1 *)(gen_frame + 0xb4));
      pvVar3 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x10));
      uVar4 = F_0042e360(pvVar3 GEN_EDX_ARG,puVar9);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
      bVar1 = F_00ac2f60(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar8,uVar2);
      if (bVar1 == 0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x18))(param_2 GEN_EDX_ARG);
        if (*(int *)(uVar2 + 600) == 0) {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x34) + 8))))(*(int * PTR32 *)(uVar2 + 0x34) GEN_EDX_ARG,"Addon");
          *(uint *)(uVar2 + 600) = uVar4;
        }
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 600) + 0x24))))(*(int * PTR32 *)(uVar2 + 600) GEN_EDX_ARG,0x30)));
        uVar8 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 8))(piVar5 GEN_EDX_ARG)));
        uVar2 = F_00cb0950(pvVar3 GEN_EDX_ARG,uVar8);
        F_0042e370(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,uVar2);
      }
      else {
        fVar6 = F_00ac3090(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar8,uVar2);
        uVar11 = 0x21;
        dVar7 = F_00ac3060(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,uVar8,uVar2);
        (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)
                    (longlong)TRUNC(((float10)fVar6 - (float10)dVar7) + (float10)REFG(double, 0x1088108));
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x18))(param_2 GEN_EDX_ARG)));
        uVar2 = F_00462440(pvVar3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),uVar11);
        F_0042e360(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,uVar2);
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
      uVar11 = 0;
      puVar10 = ((undefined1 *)(gen_frame + 0x60));
      puVar9 = ((undefined1 *)(gen_frame + 0xb4));
      uVar8 = 0x39;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x28))(param_2 GEN_EDX_ARG)));
      F_00459b00(pvVar3 GEN_EDX_ARG,uVar8,puVar9,puVar10,uVar11);
      F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
      return 0;
    }
  }
switchD_00493f4f_caseD_6: ;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return 7;
}

/* ref: FUN_00494140 */
GEN_FRAME uint GEN_THISCALL F_00494140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x494140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = *(uint *)((int)this + 0x10);
  uVar2 = uVar3;
  if (uVar3 <= param_1) {
    while (uVar2 < param_1) {
      if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
        F_00486f80(this GEN_EDX_FWD,1);
      }
      uVar2 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
        uVar3 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar3;
      }
      uVar3 = *(uint *)((int)this + 4);
      puVar1 = *(undefined4 * PTR32 *)(uVar3 + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 0xff;
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      uVar2 = *(uint *)((int)this + 0x10);
    }
    return uVar3;
  }
  uVar7 = 0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    uVar7 = *puVar1;
  }
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar1;
  }
  piVar5 = (int *)0x0;
  if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
    piVar5 = *(int * PTR32 *)*piVar4;
  }
  uVar6 = 0;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    uVar6 = *(undefined4 *)*piVar5;
  }
  uVar2 = F_004931c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar6,0,param_1 + *(int *)((int)this + 0xc),uVar7,0,
                       *(int *)((int)this + 0xc) + uVar3);
  return uVar2;
}

/* ref: FUN_00494260 */
GEN_FRAME uint F_00494260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  F_00492c50((undefined *)(param_2 + 4) GEN_EDX_ARG);
  uVar1 = F_00429760(*(undefined4 *)(param_2 + 4),8,0x2c4);
  *(undefined4 *)(param_2 + 4) = 0;
  return (uint)uVar1;
}

/* ref: FUN_00494290 */
GEN_FRAME uint F_00494290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  F_0042c880((undefined *)(param_2 + 0x70) GEN_EDX_ARG);
  F_0042c880((undefined *)(param_2 + 0x1c) GEN_EDX_ARG);
  F_00492c50((undefined *)(param_2 + 4) GEN_EDX_ARG);
  uVar1 = F_00429760(*(undefined4 *)(param_2 + 4),8,0x2c4);
  *(undefined4 *)(param_2 + 4) = 0;
  return (uint)uVar1;
}

/* ref: FUN_004942d0 */
GEN_FRAME uint GEN_THISCALL F_004942d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x4942d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint param_9 = (uint)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int * piVar9;
  int * piVar10;
  int iVar11;
  
  uVar3 = param_3 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)this + 0x10);
  uVar7 = param_6;
  if (param_6 != param_9) {
    if (uVar3 <= *(uint *)((int)this + 0x10) >> 1) {
      do {
        if (param_4 == (int *)0x0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *param_4;
        }
        uVar7 = param_6;
        if (*(uint *)(iVar11 + 8) <= param_6) {
          uVar7 = param_6 - *(uint *)(iVar11 + 8);
        }
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(iVar11 + 4) + uVar7 * 4)));
        if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
          F_00486f80(this GEN_EDX_FWD,1);
        }
        iVar11 = *(int *)((int)this + 0xc);
        if (iVar11 == 0) {
          iVar11 = *(int *)((int)this + 8);
        }
        iVar11 = iVar11 - 1;
        if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar11 * 4))) == 0) {
          uVar7 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP((*(int *)((int)this + 4) + iVar11 * 4))) = uVar7;
        }
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + iVar11 * 4)));
        if (pvVar1 != (undefined *)0x0) {
          F_00492f50(pvVar1 GEN_EDX_ARG,uVar5);
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
        param_6 = param_6 + 1;
        *(int *)((int)this + 0xc) = iVar11;
      } while (param_6 != param_9);
      iVar8 = *(int *)((int)this + 0x10) - (*(uint *)(gen_frame + 0x14));
      piVar10 = *(int * PTR32 *)this;
      piVar4 = (int *)0x0;
      (*(uint *)(gen_frame + 0x14)) = iVar8;
      if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
        piVar4 = *(int * PTR32 *)*piVar10;
      }
      piVar9 = (int *)0x0;
      if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
        piVar9 = *(int * PTR32 *)*piVar4;
      }
      if (((piVar9 == (int *)0x0) || ((int *)*piVar9 == (int *)0x0)) ||
         (puVar2 = *(undefined4 * PTR32 *)*piVar9, puVar2 == (undefined4 *)0x0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar2;
      }
      if (((piVar10 == (int *)0x0) || ((int *)*piVar10 == (int *)0x0)) ||
         (puVar2 = *(undefined4 * PTR32 *)*piVar10, puVar2 == (undefined4 *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar2;
      }
      F_004939f0(uVar6,iVar11,uVar5,iVar8 + iVar11,param_6);
      piVar10 = (int *)0x0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
        piVar10 = (int *)*puVar2;
      }
      piVar4 = (int *)0x0;
      if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
        piVar4 = *(int * PTR32 *)*piVar10;
      }
      piVar10 = (int *)0x0;
      if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
        piVar10 = *(int * PTR32 *)*piVar4;
      }
      uVar5 = 0;
      if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
        uVar5 = *(undefined4 *)*piVar10;
      }
      piVar10 = (int *)0x0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
        piVar10 = (int *)*puVar2;
      }
      uVar6 = 0;
      if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
        uVar6 = *(undefined4 *)*piVar10;
      }
      uVar7 = F_00493de0(((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,
                           (*(uint *)(gen_frame + 0x14)) + *(int *)((int)this + 0xc),uVar5,0,
                           (*(uint *)(gen_frame + 0x18)) + *(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x14)));
      return uVar7;
    }
    do {
      if (param_4 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *param_4;
      }
      uVar7 = param_6;
      if (*(uint *)(iVar11 + 8) <= param_6) {
        uVar7 = param_6 - *(uint *)(iVar11 + 8);
      }
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)(iVar11 + 4) + uVar7 * 4)));
      if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
        F_00486f80(this GEN_EDX_ARG,1);
      }
      uVar7 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar7) {
        uVar7 = uVar7 - *(uint *)((int)this + 8);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar7 * 4))) == 0) {
        uVar3 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar7 * 4))) = uVar3;
      }
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar7 * 4)));
      if (pvVar1 != (undefined *)0x0) {
        F_00492f50(pvVar1 GEN_EDX_ARG,uVar5);
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      param_6 = param_6 + 1;
    } while (param_6 != param_9);
    piVar10 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
      piVar10 = (int *)*puVar2;
    }
    uVar5 = 0;
    if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*piVar10;
    }
    piVar10 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
      piVar10 = (int *)*puVar2;
    }
    uVar6 = 0;
    if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar10;
    }
    uVar7 = F_00493de0(((undefined1 *)(gen_frame + 0x8)),uVar6,0,*(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x18)),uVar5,0,
                         (*(uint *)(gen_frame + 0x14)) + *(int *)((int)this + 0xc),*(undefined4 *)this,0,
                         *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10));
  }
  return uVar7;
}

/* ref: FUN_004945e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004945e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4945e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    F_00492c50((undefined *)(iVar2 + 4) GEN_EDX_FWD);
    F_00429760(*(undefined4 *)(iVar2 + 4),8,0x2c4);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return;
}

/* ref: FUN_00494640 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00494640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x494640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    F_0042c880((undefined *)(iVar2 + 0x70) GEN_EDX_FWD);
    F_0042c880((undefined *)(iVar2 + 0x1c) GEN_EDX_ARG);
    F_00492c50((undefined *)(iVar2 + 4) GEN_EDX_ARG);
    F_00429760(*(undefined4 *)(iVar2 + 4),8,0x2c4);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return;
}

/* ref: FUN_004946b0 */
GEN_NOFRAME uint GEN_THISCALL F_004946b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4946b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = *(int *)((int)this + 0x10) - 1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)this + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
    F_00492c50((undefined *)(iVar2 + 4) GEN_EDX_FWD);
    uVar4 = F_00429760(*(undefined4 *)(iVar2 + 4),8,0x2c4);
    uVar3 = (uint)uVar4;
    *(undefined4 *)(iVar2 + 4) = 0;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00494710 */
GEN_NOFRAME uint GEN_THISCALL F_00494710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x494710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = *(int *)((int)this + 0x10) - 1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)this + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
    F_0042c880((undefined *)(iVar2 + 0x70) GEN_EDX_FWD);
    F_0042c880((undefined *)(iVar2 + 0x1c) GEN_EDX_ARG);
    F_00492c50((undefined *)(iVar2 + 4) GEN_EDX_ARG);
    uVar4 = F_00429760(*(undefined4 *)(iVar2 + 4),8,0x2c4);
    uVar3 = (uint)uVar4;
    *(undefined4 *)(iVar2 + 4) = 0;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00494780 */
GEN_FRAME uint GEN_THISCALL F_00494780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x494780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((param_7 != (int *)0x0) && ((undefined4 *)*param_7 != (undefined4 *)0x0)) {
    uVar4 = *(undefined4 *)*param_7;
  }
  uVar3 = 0;
  if ((param_4 != (int *)0x0) && ((undefined4 *)*param_4 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_4;
  }
  uVar2 = 0;
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_1;
  }
  uVar1 = F_004942d0(this GEN_EDX_FWD,uVar2,0,param_3,uVar3,0,param_6,uVar4,0,param_9,param_9);
  return uVar1;
}

/* ref: FUN_00494810 */
GEN_FRAME uint GEN_THISCALL F_00494810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x494810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (this != param_1) {
    if (param_1[4] == 0) {
      F_00492c50(this GEN_EDX_FWD);
      return (uint)this;
    }
    uVar1 = *(uint *)((int)this + 0x10);
    if ((uint)param_1[4] <= uVar1) {
      F_00493400(&(*(int * PTR32 *)(gen_frame + 0x4)),*param_1,0,param_1[3],*param_1,0,param_1[4] + param_1[3],
                   *(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc));
      uVar4 = 0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
        uVar4 = *puVar2;
      }
      uVar3 = 0;
      if (((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0)) {
        uVar3 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x4));
      }
      F_004931c0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)),uVar3,0,(*(undefined4 *)(gen_frame + 0xc)),uVar4,0,
                   *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc));
      return (uint)this;
    }
    (*(undefined4 *)(gen_frame + 0xc)) = param_1[3];
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)*param_1;
    F_0047f520(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,((int * PTR32 *)(gen_frame + 0x10)),uVar1);
    uVar4 = 0;
    if ((((int * PTR32 *)(gen_frame + 0x10))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0])) != (undefined4 *)0x0)) {
      uVar4 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0]));
    }
    F_00493400(&(*(int * PTR32 *)(gen_frame + 0x4)),*param_1,0,param_1[3],uVar4,0,(*(undefined4 *)(gen_frame + 0x18)),*(undefined4 *)this,0,
                 *(undefined4 *)((int)this + 0xc));
    uVar4 = 0;
    if ((((int * PTR32 *)(gen_frame + 0x10))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0])) != (undefined4 *)0x0)) {
      uVar4 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0]));
    }
    uVar3 = 0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
      uVar3 = *puVar2;
    }
    F_00494780(this GEN_EDX_ARG,uVar3,0,*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc),uVar4,0,(*(undefined4 *)(gen_frame + 0x18))
                 ,*param_1,0,param_1[4] + param_1[3]);
  }
  return (uint)this;
}

/* ref: FUN_004949f0 */
GEN_FRAME uint GEN_THISCALL F_004949f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4949f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar2 = 0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  F_00494780(this GEN_EDX_ARG,uVar2,0,*(undefined4 *)((int)this + 0xc),*param_1,0,param_1[3],*param_1,0,
               param_1[4] + param_1[3]);
  return (uint)this;
}

/* ref: FUN_00494a90 */
GEN_NOFRAME uint GEN_THISCALL F_00494a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x494a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) - 1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      F_0042c880((undefined *)(iVar3 + 0x70) GEN_EDX_FWD);
      F_0042c880((undefined *)(iVar3 + 0x1c) GEN_EDX_ARG);
      F_00492c50((undefined *)(iVar3 + 4) GEN_EDX_ARG);
      F_00429760(*(undefined4 *)(iVar3 + 4),8,0x2c4);
      *(undefined4 *)(iVar3 + 4) = 0;
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0xd4,0x192);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x192);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00494b50 */
GEN_FRAME uint GEN_THISCALL F_00494b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x494b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_004949f0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 1);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return (uint)this;
}

/* ref: FUN_00494b80 */
GEN_FRAME uint GEN_THISCALL F_00494b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x494b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_004949f0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 1);
  F_0042cbc0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,param_1 + 7);
  F_0042cbc0((undefined *)((int)this + 0x70) GEN_EDX_ARG,param_1 + 0x1c);
  *(undefined1 *)((int)this + 0xc4) = *(undefined1 *)(param_1 + 0x31);
  *(undefined1 *)((int)this + 0xc5) = *(undefined1 *)((int)param_1 + 0xc5);
  *(undefined1 *)((int)this + 0xc6) = *(undefined1 *)((int)param_1 + 0xc6);
  *(undefined1 *)((int)this + 199) = *(undefined1 *)((int)param_1 + 199);
  *(undefined4 *)((int)this + 200) = param_1[0x32];
  *(undefined4 *)((int)this + 0xcc) = param_1[0x33];
  *(undefined1 *)((int)this + 0xd0) = *(undefined1 *)(param_1 + 0x34);
  *(undefined1 *)((int)this + 0xd1) = *(undefined1 *)((int)param_1 + 0xd1);
  return (uint)this;
}

/* ref: FUN_00494c20 */
GEN_FRAME uint GEN_THISCALL F_00494c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x494c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00494810((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 1);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return (uint)this;
}

/* ref: FUN_00494c50 */
GEN_FRAME uint GEN_THISCALL F_00494c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x494c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  *(undefined4 *)this = param_1;
  F_004949f0((undefined *)((int)this + 4) GEN_EDX_FWD,param_2);
  uVar1 = F_00427d90();
  *(ulonglong *)((int)this + 0x20) = uVar1;
  return (uint)this;
}

/* ref: FUN_00494c80 */
GEN_NOFRAME uint GEN_THISCALL F_00494c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x494c80u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(undefined4 *)(in_ecx + 0xbc) = 0;
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined4 *)(in_ecx + 200) = 0;
  *(undefined4 *)(in_ecx + 0xcc) = 0;
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  *(undefined4 *)(in_ecx + 0xd8) = 0;
  *(undefined4 *)(in_ecx + 0xdc) = 0;
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  return in_ecx;
}

/* ref: FUN_00494ce0 */
GEN_NOFRAME uint GEN_THISCALL F_00494ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x494ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00488e10((undefined *)((int)this + 0xd8) GEN_EDX_FWD);
  F_0048a430((undefined *)((int)this + 200) GEN_EDX_ARG);
  F_00493c70((undefined *)((int)this + 0xb8) GEN_EDX_ARG);
  F_0048a2f0((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00494d20 */
GEN_NOFRAME uint GEN_THISCALL F_00494d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x494d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00494a90(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x192);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00494d50 */
GEN_FRAME unsigned int GEN_STDCALL F_00494d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    F_004949f0(param_1 + 1 GEN_EDX_ARG,param_2 + 1);
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
  }
  return;
}

/* ref: FUN_00494d90 */
GEN_FRAME unsigned int GEN_STDCALL F_00494d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00494b80(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00494db0 */
GEN_FRAME uint F_00494db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x494db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = param_7;
  uVar5 = param_10;
  while (param_4 != uVar3) {
    uVar3 = uVar3 - 1;
    iVar6 = 0;
    if (param_5 != (int *)0x0) {
      iVar6 = *param_5;
    }
    uVar4 = uVar3;
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar4 = uVar3 - *(uint *)(iVar6 + 8);
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4)));
    uVar5 = uVar5 - 1;
    iVar6 = 0;
    if (param_8 != (int *)0x0) {
      iVar6 = *param_8;
    }
    uVar4 = uVar5;
    if (*(uint *)(iVar6 + 8) <= uVar5) {
      uVar4 = uVar5 - *(uint *)(iVar6 + 8);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4)));
    *puVar2 = *puVar1;
    F_00494810(puVar2 + 1 GEN_EDX_ARG,puVar1 + 1);
    puVar2[8] = puVar1[8];
    puVar2[9] = puVar1[9];
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != (int *)0x0) {
    if ((undefined4 *)*param_8 == (undefined4 *)0x0) {
      param_1[2] = uVar5;
      return (uint)param_1;
    }
    *param_1 = *(undefined4 *)*param_8;
  }
  param_1[2] = uVar5;
  return (uint)param_1;
}

/* ref: FUN_00494e60 */
GEN_FRAME uint F_00494e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x494e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = param_10;
  for (uVar4 = param_4; uVar4 != param_7; uVar4 = uVar4 + 1) {
    if (param_2 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *param_2;
    }
    uVar3 = uVar4;
    if (*(uint *)(iVar8 + 8) <= uVar4) {
      uVar3 = uVar4 - *(uint *)(iVar8 + 8);
    }
    iVar7 = 0;
    if (param_8 != (int *)0x0) {
      iVar7 = *param_8;
    }
    uVar5 = uVar6;
    if (*(uint *)(iVar7 + 8) <= uVar6) {
      uVar5 = uVar6 - *(uint *)(iVar7 + 8);
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar3 * 4)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar7 + 4) + uVar5 * 4)));
    *puVar2 = *puVar1;
    F_00494810(puVar2 + 1 GEN_EDX_ARG,puVar1 + 1);
    puVar2[8] = puVar1[8];
    puVar2[9] = puVar1[9];
    uVar6 = uVar6 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar6;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return (uint)param_1;
}

/* ref: FUN_00494f00 */
GEN_FRAME uint GEN_THISCALL F_00494f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x494f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int iVar4;
  
  F_00494a90((undefined *)((int)this + 0x2790) GEN_EDX_FWD);
  F_00429760(*(undefined4 *)((int)this + 0x2790),8,0x192);
  *(undefined4 *)((int)this + 0x2790) = 0;
  F_0042c880((undefined *)((int)this + 0x273c) GEN_EDX_ARG);
  F_00487420((undefined *)((int)this + 0x2724) GEN_EDX_ARG);
  F_00429760(*(undefined4 *)((int)this + 0x2724),8,0x192);
  *(undefined4 *)((int)this + 0x2724) = 0;
  F_004823a0((undefined *)((int)this + 0x270c) GEN_EDX_ARG);
  F_00429760(*(undefined4 *)((int)this + 0x270c),8,0x192);
  pvVar3 = (undefined *)((int)this + 0x270c);
  *(undefined4 *)((int)this + 0x270c) = 0;
  (*(int *)(gen_frame + 0x8)) = 4;
  puVar2 = (undefined4 *)((int)this + 0x2e3c);
  do {
    pvVar3 = (undefined *)((int)pvVar3 - 0x754);
    F_00488bc0(puVar2 - 0x1d6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)puVar2[-0x1d5],(undefined4 *)puVar2[-0x1d5])
    ;
    F_00429760(puVar2[-0x1d5],0x6c,0x192);
    F_00a4b160(puVar2 - 0x1df GEN_EDX_ARG);
    F_0042c880(puVar2 - 0x38c GEN_EDX_ARG);
    F_0042c880(pvVar3 GEN_EDX_ARG);
    iVar4 = (*(int *)(gen_frame + 0x8)) - 1;
    (*(int *)(gen_frame + 0x8)) = iVar4;
    puVar2 = puVar2 - 0x1d5;
  } while (-1 < iVar4);
  pvVar3 = (undefined *)((int)this + 0x25c);
  iVar4 = 5;
  do {
    pvVar3 = (undefined *)((int)pvVar3 - 0x54);
    F_0042c880(pvVar3 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  uVar1 = F_00b004a0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00495030 */
GEN_NOFRAME uint GEN_THISCALL F_00495030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x495030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00495210((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00495040 */
GEN_NOFRAME uint GEN_THISCALL F_00495040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x495040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00495210((undefined *)((int)this - 8) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00495050 */
GEN_NOFRAME uint GEN_THISCALL F_00495050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x495050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00495210((undefined *)((int)this - 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::UI::Misc::RaptureLogModule::vf0 */
GEN_FRAME uint GEN_THISCALL F_00495060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x495060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00494f00(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Misc::SupportModule::vf0 */
GEN_FRAME uint GEN_THISCALL F_00495090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x495090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00468e90(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004950c0 */
GEN_FRAME unsigned int F_004950c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4950c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    F_004949f0(param_2 + 1 GEN_EDX_ARG,param_3 + 1);
    param_2[8] = param_3[8];
    param_2[9] = param_3[9];
  }
  return;
}

/* ref: FUN_004950f0 */
GEN_FRAME unsigned int F_004950f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4950f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00494b80(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00495110 */
GEN_FRAME uint F_00495110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x495110u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_00494db0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00495190 */
GEN_FRAME uint F_00495190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x495190u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_00494e60(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: Client::UI::UIModule::vf0 */
GEN_FRAME uint GEN_THISCALL F_00495210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x495210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004694b0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00495240 */
GEN_FRAME uint GEN_THISCALL F_00495240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x495240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_004870f0(this GEN_EDX_FWD,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar2 = F_004296a0(0x28,0,400);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar2;
  }
  uVar2 = *(uint *)((int)this + 4);
  puVar1 = *(undefined4 * PTR32 *)(uVar2 + uVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    F_004949f0(puVar1 + 1 GEN_EDX_ARG,param_1 + 1);
    uVar2 = param_1[8];
    puVar1[8] = uVar2;
    puVar1[9] = param_1[9];
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar2;
}

/* ref: FUN_004952c0 */
GEN_FRAME uint GEN_THISCALL F_004952c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4952c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_004874c0(this GEN_EDX_FWD,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0xd4,0,0x192);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00494b80(this_00 GEN_EDX_ARG,param_1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar1;
}

/* ref: FUN_00495330 */
GEN_FRAME uint GEN_THISCALL F_00495330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x495330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar4 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar4 = *(int * PTR32 *)this;
  }
  uVar3 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar6 = 0;
  if (uVar3 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar4;
    }
    uVar5 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_00495110(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar5,0,param_4,
                 uVar6,0,param_7);
    while ((*(int *)(gen_frame + 0x28)) != 0) {
      if (*(int *)((int)this + 0x10) != 0) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
        F_00492c50((undefined *)(iVar1 + 4) GEN_EDX_ARG);
        F_00429760(*(undefined4 *)(iVar1 + 4),8,0x2c4);
        *(undefined4 *)(iVar1 + 4) = 0;
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        piVar4 = (int *)((int)this + 0x10);
        *piVar4 = *piVar4 - 1;
        if (*piVar4 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) - 1;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar5 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*piVar4;
    }
    F_00495190(((undefined1 *)(gen_frame + 0xc)),uVar5,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar6,0,param_4);
    while ((*(int *)(gen_frame + 0x28)) != 0) {
      if (*(int *)((int)this + 0x10) != 0) {
        uVar3 = *(int *)((int)this + 0xc) - 1 + *(int *)((int)this + 0x10);
        if (*(uint *)((int)this + 8) <= uVar3) {
          uVar3 = uVar3 - *(uint *)((int)this + 8);
        }
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
        F_00492c50((undefined *)(iVar1 + 4) GEN_EDX_ARG);
        F_00429760(*(undefined4 *)(iVar1 + 4),8,0x2c4);
        *(undefined4 *)(iVar1 + 4) = 0;
        piVar4 = (int *)((int)this + 0x10);
        *piVar4 = *piVar4 - 1;
        if (*piVar4 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) - 1;
    }
  }
  iVar1 = *(int *)((int)this + 0xc);
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar1;
  if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar4;
  }
  return (uint)param_1;
}

/* ref: FUN_00495530 */
GEN_FRAME uint GEN_STDCALL F_00495530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x495530u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined * this;
  ulonglong uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG);
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  if ((-1 < (*(int *)&gen_a1)) && ((*(int *)&gen_a1) < (int)(uint)bVar1)) {
    iVar3 = (*(int *)&gen_a1);
    if (100 < (*(int *)&gen_a1)) {
      iVar3 = 0;
    }
    if ((*(byte *)(iVar3 * 0x120 + 0x6d + uVar2) & 1) != 0) {
      uVar6 = 0x50;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x48))(param_1 GEN_EDX_ARG);
      this = (undefined *)F_00763050(uVar2 GEN_EDX_ARG,uVar6);
      uVar2 = 0;
      if (this != (undefined *)0x0) {
        uVar2 = F_0086c6f0(this GEN_EDX_ARG,(*(int *)&gen_a1));
      }
      F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
      return uVar2;
    }
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x28))(param_1 GEN_EDX_ARG);
  uVar4 = F_0045fb20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0x301);
  F_004952c0((undefined *)(uVar2 + 0x2790) GEN_EDX_ARG,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  F_00492c50(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  uVar5 = F_00429760(((undefined4 *)(gen_frame + 0x8))[0],8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
  return (uint)uVar5;
}

/* ref: Client::UI::Shell::ShellCommandGear::vf1 */
GEN_FRAME uint GEN_THISCALL F_00495630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x495630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint in_ecx;
  undefined * pvVar5;
  undefined4 uVar6;
  
  if ((param_2 != (int *)0x0) && (-1 < *(int *)(param_1 + 4))) {
    bVar1 = false;
    if ((uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54) < 2) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x34))(param_2 GEN_EDX_FWD);
      if (*(char *)(uVar3 + 0x71d8) == '\0') {
        uVar3 = *(uint *)(uVar3 + 0x71d4);
      }
      else {
        uVar3 = 0xffffffff;
      }
      bVar1 = true;
    }
    else {
      bVar2 = F_00a4cda0(*(int *)(param_1 + 0x10) + 0x54,0);
      if (bVar2 == 0) {
        iVar4 = *(int *)(param_1 + 0x10) + 0x54;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x34))(param_2 GEN_EDX_ARG)));
        uVar3 = F_0043b480(pvVar5 GEN_EDX_ARG,iVar4);
      }
      else {
        uVar3 = F_00a4cf70(*(int *)(param_1 + 0x10) + 0x54,10);
        uVar3 = uVar3 - 1;
      }
    }
    uVar6 = 0x50;
    in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x48))(param_2 GEN_EDX_ARG);
    pvVar5 = (undefined *)F_00763050(in_ecx GEN_EDX_ARG,uVar6);
    switch((unsigned int)(uintptr_t)(*(uint *)(param_1 + 4) & 0xfffffffe)) {
    case 4: ;
    case 0x72: ;
    case 0x80: ;
    case 0x82: ;
      if (bVar1) {
        F_00824e90(pvVar5 GEN_EDX_ARG,0xffffffff,1);
        return 0;
      }
      F_0086ca80(pvVar5 GEN_EDX_ARG,uVar3);
      return 0;
    case 0xe: ;
      F_0086c540(pvVar5 GEN_EDX_ARG,uVar3);
      return 0;
    case 0x7a: ;
    case 0x7c: ;
      F_007d22b0(pvVar5 GEN_EDX_ARG,uVar3);
      return 0;
    case 0x7e: ;
    case 0x84: ;
      F_00495530(param_2,uVar3);
      return 0;
    }
  }
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandParty::vf1 */
GEN_FRAME uint GEN_THISCALL F_00495b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x495b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * this_00;
  undefined * pvVar5;
  ulonglong uVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x44))(param_2 GEN_EDX_FWD);
  pcVar1 = *(gen_code32 *)(*param_2 + 0x48);
  if ((*(uint *)(uVar3 + 0xa8) & 0x800) != 0) {
    uVar8 = 0x2a;
    uVar3 = (*pcVar1)(param_2);
    pvVar4 = (undefined *)F_00763050(uVar3 GEN_EDX_ARG,uVar8);
    F_00878990(pvVar4 GEN_EDX_ARG,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 0;
  }
  if (*(int *)(param_1 + 4) < 0) {
    uVar8 = 0x2a;
    uVar3 = (*pcVar1)(param_2);
    pvVar4 = (undefined *)F_00763050(uVar3 GEN_EDX_ARG,uVar8);
    F_00878990(pvVar4 GEN_EDX_ARG,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 0;
  }
  uVar8 = 0x2e;
  uVar3 = (*pcVar1)(param_2);
  this_00 = (undefined *)F_00763050(uVar3 GEN_EDX_ARG,uVar8);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x44))(param_2 GEN_EDX_ARG);
  pvVar4 = *(undefined * PTR32 *)(uVar3 + 8);
  uVar3 = *(uint *)(param_1 + 4) & 0xfffffffe;
  if (REFG(char, 0x1338ad4) != '\0') {
    bVar2 = F_00ae09c0(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,REFG(undefined4, 0x1379690));
    if (bVar2 == 0) {
      if (uVar3 != 6) goto LAB_00495e06;
    }
    else if (uVar3 != 6) {
      if (uVar3 == 10) {
        if ((uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54) < 2) {
          uVar3 = 0;
        }
        else {
          uVar3 = F_0042a990(*(int *)(param_1 + 0x10) + 0x54 GEN_EDX_ARG);
        }
        uVar8 = 1;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x24))(param_2 GEN_EDX_ARG)));
        uVar3 = F_00455100(pvVar5 GEN_EDX_ARG,uVar3,uVar8);
        if (uVar3 != 0) {
          uVar6 = F_00435f70(pvVar4 GEN_EDX_ARG,uVar3);
          if (uVar6 != 0) {
            F_0087d6a0(this_00 GEN_EDX_ARG,uVar3,0);
            goto LAB_00495bef;
          }
        }
        goto LAB_00495dee;
      }
      if (uVar3 == 8) {
        if ((uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54) < 2) {
          uVar3 = 0;
        }
        else {
          uVar3 = F_0042a990(*(int *)(param_1 + 0x10) + 0x54 GEN_EDX_ARG);
        }
        uVar8 = 1;
        pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x24))(param_2 GEN_EDX_ARG)));
        uVar3 = F_00455100(pvVar5 GEN_EDX_ARG,uVar3,uVar8);
        if (uVar3 != 0) {
          uVar6 = F_00435f70(pvVar4 GEN_EDX_ARG,uVar3);
          if (uVar6 != 0) {
            F_0087d810(this_00 GEN_EDX_ARG,uVar3,0);
            goto LAB_00495bef;
          }
        }
        goto LAB_00495dee;
      }
      if (uVar3 == 0xc) {
        F_0087dae0(this_00 GEN_EDX_ARG,0);
        goto LAB_00495bef;
      }
      goto LAB_00495d2c;
    }
    F_0087d980(this_00 GEN_EDX_ARG,0);
    goto LAB_00495bef;
  }
  bVar2 = F_00448090(param_1,param_2,uVar3);
  if (bVar2 != 0) goto LAB_00495bef;
LAB_00495d2c: ;
  if (uVar3 != 4) {
LAB_00495e06: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 7;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x44))(param_2 GEN_EDX_ARG);
  if ((uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54) < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_0042a990(*(int *)(param_1 + 0x10) + 0x54 GEN_EDX_ARG);
  }
  uVar8 = 1;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x24))(param_2 GEN_EDX_ARG)));
  uVar3 = F_00455100(pvVar4 GEN_EDX_ARG,uVar3,uVar8);
  if (uVar3 != 0) {
    bVar2 = F_0043f660(uVar3);
    if (bVar2 != 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar3,REFG(undefined4, 0x108cc50));
      puVar7 = ((undefined1 *)(gen_frame + 0x4));
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x44))(param_2 GEN_EDX_ARG)));
      bVar2 = F_00453480(pvVar4 GEN_EDX_ARG,puVar7);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      if (bVar2 == 0) {
        bVar2 = F_00445760(uVar3);
        if (bVar2 == 0) goto LAB_00495dee;
      }
      else {
        uVar8 = 0x39;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x28))(param_2 GEN_EDX_ARG)));
        F_0046a630(pvVar4 GEN_EDX_ARG,uVar8);
      }
LAB_00495bef: ;
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 0;
    }
  }
LAB_00495dee: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandLinkshell::vf1 */
GEN_FRAME uint GEN_THISCALL F_00495e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x495e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  uint uVar6;
  int * this_00;
  int iVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar7 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar7 >> 0x1f;
  if (iVar7 / 0x54 + iVar1 != iVar1) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x44))(param_2 GEN_EDX_FWD);
    pvVar5 = *(undefined * PTR32 *)(uVar3 + 0x10);
    if (-1 < (int)*(uint *)(param_1 + 8)) {
      uVar3 = *(uint *)(param_1 + 8) & 0xfffffffe;
      if (uVar3 == 4) {
        if ((uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54) < 3) {
          uVar3 = 0;
        }
        else {
          uVar3 = F_0042a990(*(int *)(param_1 + 0x10) + 0xa8 GEN_EDX_ARG);
        }
        uVar8 = 1;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x24))(param_2 GEN_EDX_ARG)));
        uVar3 = F_00455100(pvVar4 GEN_EDX_ARG,uVar3,uVar8);
        if (uVar3 == 0) {
          F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
          return 7;
        }
        bVar2 = F_0043f660(uVar3);
        if (bVar2 == 0) {
          F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
          return 2;
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar3,REFG(undefined4, 0x108cc50));
        puVar9 = ((undefined1 *)(gen_frame + 0x4));
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x44))(param_2 GEN_EDX_ARG)));
        bVar2 = F_00453480(pvVar4 GEN_EDX_ARG,puVar9);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        if (bVar2 == 0) {
          uVar6 = F_0042a990(*(undefined4 *)(param_1 + 0x10) GEN_EDX_ARG);
          F_00444bf0(pvVar5 GEN_EDX_ARG,uVar6,uVar3);
        }
        else {
          uVar8 = 0x3a;
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x28))(param_2 GEN_EDX_ARG)));
          F_0046a630(pvVar5 GEN_EDX_ARG,uVar8);
        }
        goto LAB_00495f62;
      }
      if (uVar3 == 0x10) {
        uVar3 = F_0042a990(*(undefined4 *)(param_1 + 0x10) GEN_EDX_ARG);
        F_00444cc0(pvVar5 GEN_EDX_ARG,uVar3);
      }
      else if (uVar3 == 0x12) {
        uVar3 = F_0042a990(*(undefined4 *)(param_1 + 0x10) GEN_EDX_ARG);
        F_00444d80(pvVar5 GEN_EDX_ARG,uVar3);
      }
    }
  }
  uVar8 = 0x2d;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x48))(param_2 GEN_EDX_ARG);
  this_00 = (int *)F_00763050(uVar3 GEN_EDX_ARG,uVar8);
  if (this_00 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x2c))(this_00 GEN_EDX_ARG);
    if ((char)uVar3 == '\0') {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 10;
    }
    iVar7 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
    iVar1 = iVar7 >> 0x1f;
    if (iVar7 / 0x54 + iVar1 == iVar1) {
      F_0087cf00(this_00 GEN_EDX_ARG,0);
    }
    else {
      uVar3 = F_0042a990(*(int *)(param_1 + 0x10) GEN_EDX_ARG);
      F_0087cf00(this_00 GEN_EDX_ARG,uVar3);
    }
  }
LAB_00495f62: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandTrade::vf1 */
GEN_FRAME uint GEN_THISCALL F_00496530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x496530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x54 + iVar1 == iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990(*(undefined4 *)(param_1 + 0x10) GEN_EDX_FWD);
  }
  uVar7 = 1;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x24))(param_2 GEN_EDX_ARG)));
  piVar4 = (int *)F_00455070(pvVar3 GEN_EDX_ARG,uVar2,uVar7);
  if (piVar4 == (int *)0x0) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 2;
  }
  uVar7 = REFG(undefined4, 0x108cc50);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar2,uVar7);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x44))(param_2 GEN_EDX_ARG);
  iVar1 = *(int *)(uVar2 + 0x18);
  if (*(char *)(iVar1 + 0x660) == '\0') {
    bVar6 = true;
  }
  else {
    F_00481810((undefined *)(iVar1 + 0x650) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x4)));
    bVar6 = (*(int *)(gen_frame + 0x0)) != *(int *)(iVar1 + 0x654);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  if (bVar6) {
    uVar7 = 0x38;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x28))(param_2 GEN_EDX_ARG)));
    F_0046a630(pvVar3 GEN_EDX_ARG,uVar7);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 0;
  }
  F_00a41df0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,piVar4[0x1d]);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandMateria::vf1 */
GEN_FRAME uint GEN_THISCALL F_00496650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x496650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x54 + iVar1 == iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990(*(undefined4 *)(param_1 + 0x10) GEN_EDX_FWD);
  }
  uVar7 = 1;
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x24))(param_2 GEN_EDX_ARG)));
  piVar4 = (int *)F_00455070(pvVar3 GEN_EDX_ARG,uVar2,uVar7);
  if (piVar4 != (int *)0x0) {
    uVar2 = F_00ab21a0((uint)*(byte *)(piVar4 + 0x5a2));
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    uVar7 = REFG(undefined4, 0x108cc50);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar2,uVar7);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x44))(param_2 GEN_EDX_ARG);
    iVar1 = *(int *)(uVar2 + 0x18);
    if (*(char *)(iVar1 + 0x660) == '\0') {
      bVar6 = true;
    }
    else {
      F_00481810((undefined *)(iVar1 + 0x650) GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
      bVar6 = (*(int *)(gen_frame + 0xc)) != *(int *)(iVar1 + 0x654);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    if (bVar6) {
      uVar7 = 0x38;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x28))(param_2 GEN_EDX_ARG)));
      F_0046a630(pvVar3 GEN_EDX_ARG,uVar7);
    }
    else if (((*(uint *)(gen_frame + 0x10)) != 0) && (*(int *)((*(uint *)(gen_frame + 0x10)) + 0x10) == 0x21)) {
      F_00a387b0(piVar4);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandSalute::vf1 */
GEN_FRAME uint GEN_THISCALL F_00496780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x496780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  pvVar2 = REFG(void * PTR32, 0x1379694);
  bVar1 = 0;
  if (param_2 == (int *)0x0) {
    return 8;
  }
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1090544));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = 0xe0000000;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = 0;
    (*(ulonglong *)(gen_frame + 0x14)) = 0xe0000000;
    (*(ushort *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x24)) = 1;
    if ((*(short *)(param_1 + 2) != 0) && ((*(uint *)(param_1 + 4) & 0xfffffffe) == 0x16)) {
      bVar1 = 1;
    }
    uVar3 = F_00533c20(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
    (*(ulonglong *)(gen_frame + 0x14)) = uVar3;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x1c)) + 1)) = 0;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x1c)) + 0)) = bVar1;
    (*(ushort *)(gen_frame + 0x1c)) = (ushort)bVar1;
    (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x24)) = 0xffffffff;
    if (REFG(char, 0x14ab29a) != '\x01') {
      if (REFG(char, 0x14ab29a) == '\x02') {
        F_00aa0ed0(pvVar2 GEN_EDX_ARG,0x38,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
        return 0;
      }
      if (REFG(char, 0x14ab29a) != '\x03') {
        uVar4 = 0x2f1;
        pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x28))(param_2 GEN_EDX_ARG)));
        F_0046a630(pvVar2 GEN_EDX_ARG,uVar4);
        return 0;
      }
      F_00aa0ed0(pvVar2 GEN_EDX_ARG,0x39,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
      return 0;
    }
    F_00aa0ed0(pvVar2 GEN_EDX_ARG,0x37,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandReturn::vf1 */
GEN_FRAME uint GEN_THISCALL F_00496890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x496890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  int * this_00;
  undefined * this_01;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_2 != (int *)0x0) {
    uVar4 = 0x38;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x48))(param_2 GEN_EDX_FWD);
    this_00 = (int *)F_00763050(uVar2 GEN_EDX_ARG,uVar4);
    if ((this_00 != (int *)0x0) && (bVar1 = F_00775e60(this_00 GEN_EDX_ARG), bVar1 != 0)) {
      return 0;
    }
    if ((REFG(undefined1, 0x14b4ec0) & 2) == 0) {
      uVar4 = 0x673;
    }
    else {
      if (REFG(undefined4 * PTR32, 0x1379694) == (undefined4 *)0x0) {
        return 0;
      }
      uVar4 = 1;
      uVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1379694))))(REFG(undefined4 * PTR32, 0x1379694));
      uVar2 = F_00ac6e80(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,1,6,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20),uVar4);
      if (uVar2 == 0x246) {
        uVar4 = 0x674;
      }
      else {
        bVar1 = F_00ac7930(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,1,6);
        if (bVar1 != 0) {
          if (this_00 == (int *)0x0) {
            return 0;
          }
          ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 8))(this_00 GEN_EDX_ARG);
          return 0;
        }
        uVar4 = 0x675;
      }
    }
    this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x28))(param_2 GEN_EDX_ARG)));
    F_0046a630(this_01 GEN_EDX_ARG,uVar4);
  }
  return 0;
}

/* ref: FUN_00496950 */
GEN_FRAME uint GEN_THISCALL F_00496950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x496950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)0x0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    piVar1 = *(int * PTR32 *)*param_2;
  }
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*piVar1;
  }
  uVar2 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_2;
  }
  F_00495330(this GEN_EDX_FWD,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_004969e0 */
GEN_FRAME uint F_004969e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4969e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}

/* ref: FUN_004969f0 */
GEN_FRAME float10 F_004969f0(float gen_a0)
{
  GEN_ENTER(0x4969f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,7)));
  return (float10)(float)fVar2;
}

/* ref: FUN_00496a10 */
GEN_FRAME float10 F_00496a10(float gen_a0)
{
  GEN_ENTER(0x496a10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fcos((float10)param_1)));
  return (float10)(float)fVar1;
}

/* ref: FUN_00496a30 */
GEN_FRAME float10 F_00496a30(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x496a30u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(pow((float10)param_1,(float10)param_2)));
  return (float10)(float)fVar2;
}

/* ref: FUN_00496a50 */
GEN_FRAME float10 F_00496a50(float gen_a0)
{
  GEN_ENTER(0x496a50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)param_1)));
  return (float10)(float)fVar1;
}

/* ref: FUN_00496a70 */
GEN_FRAME float10 F_00496a70(float gen_a0)
{
  GEN_ENTER(0x496a70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,7)));
  return (float10)(float)fVar2;
}

/* ref: FUN_00496a90 */
GEN_FRAME float10 F_00496a90(float gen_a0)
{
  GEN_ENTER(0x496a90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fcos((float10)param_1)));
  return (float10)(float)fVar1;
}

/* ref: FUN_00496ab0 */
GEN_FRAME float10 F_00496ab0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x496ab0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(pow((float10)param_1,(float10)param_2)));
  return (float10)(float)fVar2;
}

/* ref: FUN_00496ad0 */
GEN_FRAME float10 F_00496ad0(float gen_a0)
{
  GEN_ENTER(0x496ad0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)param_1)));
  return (float10)(float)fVar1;
}

/* ref: FUN_00496af0 */
GEN_FRAME float10 F_00496af0(float gen_a0)
{
  GEN_ENTER(0x496af0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(SQRT((float10)param_1)));
}

/* ref: FUN_00496b10 */
GEN_FRAME uint F_00496b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x496b10u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t * pwVar1;
  
  pwVar1 = F_00c4cec9(param_1,param_2);
  return (uint)pwVar1;
}

/* ref: FUN_00496b20 */
GEN_FRAME uint F_00496b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x496b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004011f0(param_1,param_2);
  return uVar1;
}

/* ref: Client::System::Input::PadDevice::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00496b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x496b30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x32c);
}

/* ref: Client::System::Input::PadDevice::vf12 */
GEN_FRAME byte GEN_THISCALL F_00496b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x496b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pPVar2;
  
  uVar1 = 0;
  pPVar2 = this + 0x340;
  do {
    if (*(int *)pPVar2 == 0) {
      *(undefined4 *)(this + uVar1 * 8 + 0x340) = param_1;
      *(undefined4 *)(this + uVar1 * 8 + 0x344) = param_2;
      return 1;
    }
    uVar1 = uVar1 + 1;
    pPVar2 = pPVar2 + 8;
  } while (uVar1 < 4);
  return 0;
}

/* ref: Client::System::Input::PadDevice::vf13 */
GEN_FRAME byte GEN_THISCALL F_00496b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x496b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pPVar2;
  
  uVar1 = 0;
  pPVar2 = this + 0x340;
  do {
    if (*(int *)pPVar2 == param_1) {
      *(undefined4 *)(this + uVar1 * 8 + 0x340) = 0;
      *(undefined4 *)(this + uVar1 * 8 + 0x344) = 0;
      return 1;
    }
    uVar1 = uVar1 + 1;
    pPVar2 = pPVar2 + 8;
  } while (uVar1 < 4);
  return 0;
}

/* ref: FUN_00496bd0 */
GEN_NOFRAME uint GEN_THISCALL F_00496bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x496bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x329) == '\0') && (*(int *)((int)this + 0x334) == 0)) {
    *(undefined4 *)((int)this + 0x334) = 5;
    *(undefined1 *)((int)this + 0x33d) = 1;
    uVar1 = F_004cf9e0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0,0xfffffff1,0,0);
    return uVar1;
  }
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)((int)this + 0x33d));
  if (*(char *)((int)this + 0x33d) == '\0') {
    *(undefined1 *)((int)this + 0x33d) = 1;
    *(undefined4 *)((int)this + 0x334) = 5;
    *(undefined1 *)((int)this + 0x329) = 0;
    uVar1 = F_004cf9e0((undefined *)((int)this + 0x18) GEN_EDX_ARG,0,0xfffffff1,0,0);
  }
  return uVar1;
}

/* ref: FUN_00496c40 */
GEN_FRAME byte GEN_STDCALL F_00496c40(unsigned int gen_a0)
{
  GEN_ENTER(0x496c40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined * puVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  uVar2 = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar1 = F_004011f0(&REFG(undefined, 0x1300c98),&(*(undefined4 *)(gen_frame + 0x8)));
  if (uVar1 == 0) {
    puVar3 = &REFG(undefined, 0x1300c98);
    do {
      uVar1 = F_004011f0(puVar3,param_1);
      if (uVar1 != 0) {
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return 1;
      }
      uVar2 = (uint)(byte)((char)uVar2 + 1);
      puVar3 = &REFG(undefined, 0x1300c98) + uVar2 * 0x10;
      uVar1 = F_004011f0(puVar3,&(*(undefined4 *)(gen_frame + 0x8)));
    } while (uVar1 == 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00496d10 */
GEN_FRAME uint GEN_STDCALL F_00496d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x496d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (((*(byte *)(param_1 + 0x1c) & 1) != 0) && (*(uint *)(param_2 + 0x2c) < 2)) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_1 + 0x18);
  piVar2 = *(int * PTR32 *)(param_2 + 0x724);
  (*(undefined4 *)(gen_frame + 0x0)) = 0x18;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((int)uVar1 < 0) goto LAB_004970a8;
  iVar3 = param_1 + 4;
  uVar1 = F_004011f0(iVar3,&REFG(undefined, 0x10817d4));
  if (uVar1 == 0) {
    uVar1 = F_004011f0(iVar3,&REFG(undefined, 0x10817e4));
    if (uVar1 == 0) {
      uVar1 = F_004011f0(iVar3,&REFG(undefined, 0x10817f4));
      if (uVar1 == 0) {
        uVar1 = F_004011f0(iVar3,&REFG(undefined, 0x1081804));
        if (uVar1 == 0) {
          uVar1 = F_004011f0(iVar3,&REFG(undefined, 0x1081814));
          if (uVar1 == 0) {
            uVar1 = F_004011f0(iVar3,&REFG(undefined, 0x1081824));
            if (uVar1 == 0) {
              uVar1 = F_004011f0(iVar3,&REFG(undefined, 0x1081834));
              if (uVar1 == 0) goto LAB_004970a8;
              uVar1 = *(uint *)(param_1 + 0x1c) & 0xf00;
              if (uVar1 < 0x301) {
                if (uVar1 == 0x300) {
                  piVar2 = (int *)(param_2 + 0x360);
                }
                else if (uVar1 == 0x100) {
                  piVar2 = (int *)(param_2 + 0x348);
                }
                else {
                  if (uVar1 != 0x200) goto LAB_004970a8;
                  piVar2 = (int *)(param_2 + 0x354);
                }
              }
              else {
                if (uVar1 != 0x400) goto LAB_004970a8;
                piVar2 = (int *)(param_2 + 0x36c);
              }
            }
            else {
              uVar1 = *(uint *)(param_1 + 0x1c) & 0xf00;
              if (uVar1 < 0x301) {
                if (uVar1 == 0x300) {
                  piVar2 = (int *)(param_2 + 0x330);
                }
                else if (uVar1 == 0x100) {
                  piVar2 = (int *)(param_2 + 0x318);
                }
                else {
                  if (uVar1 != 0x200) goto LAB_004970a8;
                  piVar2 = (int *)(param_2 + 0x324);
                }
              }
              else {
                if (uVar1 != 0x400) goto LAB_004970a8;
                piVar2 = (int *)(param_2 + 0x33c);
              }
            }
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x1c) & 0xf00;
            if (uVar1 < 0x301) {
              if (uVar1 == 0x300) {
                piVar2 = (int *)(param_2 + 0x300);
              }
              else if (uVar1 == 0x100) {
                piVar2 = (int *)(param_2 + 0x2e8);
              }
              else {
                if (uVar1 != 0x200) goto LAB_004970a8;
                piVar2 = (int *)(param_2 + 0x2f4);
              }
            }
            else {
              if (uVar1 != 0x400) goto LAB_004970a8;
              piVar2 = (int *)(param_2 + 0x30c);
            }
          }
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x1c) & 0xf00;
          if (uVar1 < 0x301) {
            if (uVar1 == 0x300) {
              piVar2 = (int *)(param_2 + 0x2d0);
            }
            else if (uVar1 == 0x100) {
              piVar2 = (int *)(param_2 + 0x2b8);
            }
            else {
              if (uVar1 != 0x200) goto LAB_004970a8;
              piVar2 = (int *)(param_2 + 0x2c4);
            }
          }
          else {
            if (uVar1 != 0x400) goto LAB_004970a8;
            piVar2 = (int *)(param_2 + 0x2dc);
          }
        }
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x1c) & 0xf00;
        if (uVar1 < 0x301) {
          if (uVar1 == 0x300) {
            piVar2 = (int *)(param_2 + 0x2a0);
          }
          else if (uVar1 == 0x100) {
            piVar2 = (int *)(param_2 + 0x288);
          }
          else {
            if (uVar1 != 0x200) goto LAB_004970a8;
            piVar2 = (int *)(param_2 + 0x294);
          }
        }
        else {
          if (uVar1 != 0x400) goto LAB_004970a8;
          piVar2 = (int *)(param_2 + 0x2ac);
        }
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x1c) & 0xf00;
      if (uVar1 < 0x301) {
        if (uVar1 == 0x300) {
          piVar2 = (int *)(param_2 + 0x270);
        }
        else if (uVar1 == 0x100) {
          piVar2 = (int *)(param_2 + 600);
        }
        else {
          if (uVar1 != 0x200) goto LAB_004970a8;
          piVar2 = (int *)(param_2 + 0x264);
        }
      }
      else {
        if (uVar1 != 0x400) goto LAB_004970a8;
        piVar2 = (int *)(param_2 + 0x27c);
      }
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1c) & 0xf00;
    if (uVar1 < 0x301) {
      if (uVar1 == 0x300) {
        piVar2 = (int *)(param_2 + 0x240);
      }
      else if (uVar1 == 0x100) {
        piVar2 = (int *)(param_2 + 0x228);
      }
      else {
        if (uVar1 != 0x200) goto LAB_004970a8;
        piVar2 = (int *)(param_2 + 0x234);
      }
    }
    else {
      if (uVar1 != 0x400) goto LAB_004970a8;
      piVar2 = (int *)(param_2 + 0x24c);
    }
  }
  if (piVar2 != (int *)0x0) {
    iVar3 = ((*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14))) / 2;
    uVar1 = (*(int *)(gen_frame + 0x14)) - iVar3;
    *piVar2 = iVar3;
    uVar4 = (int)uVar1 >> 0x1f;
    iVar3 = (uVar1 ^ uVar4) - uVar4;
    piVar2[1] = iVar3;
    piVar2[2] = (int)gen_fl2bits((float)((float10)1 / (float10)iVar3));
  }
LAB_004970a8: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004970c0 */
GEN_FRAME byte GEN_STDCALL F_004970c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4970c0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  HRESULT HVar2;
  BSTR pOVar3;
  uint uVar4;
  uint uVar5;
  wchar_t * pwVar6;
  int iVar7;
  int iVar8;
  BSTR pOVar9;
  
  (*(byte *)(gen_frame + 0x8b)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x84)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x80)) = (int *)0x0;
  (*(int *)(gen_frame + 0x8)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0xc)),0,0x4c);
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = (undefined *)0x0;
  pOVar9 = (BSTR)0x0;
  (*(uint *)(gen_frame + 0x7c)) = 0;
  HVar2 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1092068),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1092078),&(*(int * PTR32 *)(gen_frame + 0x84)));
  if ((-1 < HVar2) && ((*(int * PTR32 *)(gen_frame + 0x84)) != (int *)0x0)) {
    pOVar3 = gen_imp_SysAllocString((*(undefined * PTR32 (*)[6])REFP(0x1091f68)));
    (*(BSTR *)(gen_frame + 0x68)) = pOVar3;
    if (pOVar3 != (BSTR)0x0) {
      pOVar3 = gen_imp_SysAllocString((*(undefined * PTR32 (*)[1])REFP(0x1091ef4)));
      (*(BSTR *)(gen_frame + 0x70)) = pOVar3;
      if ((((pOVar3 != (BSTR)0x0) && (pOVar9 = gen_imp_SysAllocString((*(undefined * PTR32 (*)[4])REFP(0x1091f14))), pOVar9 != (BSTR)0x0)
           ) && (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x84)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x84)) GEN_EDX_ARG,(*(BSTR *)(gen_frame + 0x68)),0,0,0,0,0,0,&(*(undefined * PTR32 *)(gen_frame + 0x78))),
                -1 < (int)uVar4)) && ((*(undefined * PTR32 *)(gen_frame + 0x78)) != (undefined *)0x0)) {
        gen_imp_CoSetProxyBlanket((*(undefined * PTR32 *)(gen_frame + 0x78)),10,0,(wchar_t *)0x0,3,3,(undefined *)0x0,0);
        uVar4 = ((code *)((*(gen_code32 *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x78))))) + (6) * 12))))))((*(undefined * PTR32 *)(gen_frame + 0x78)),(*(BSTR *)(gen_frame + 0x70)),0,0,&(*(int * PTR32 *)(gen_frame + 0x80)));
        if (((-1 < (int)uVar4) && ((*(int * PTR32 *)(gen_frame + 0x80)) != (int *)0x0)) &&
           (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x80)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,10000,0x14,&(*(int *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x7c))),
           -1 < (int)uVar4)) {
          while ((*(uint *)(gen_frame + 0x7c)) != 0) {
            uVar4 = 0;
            if ((*(uint *)(gen_frame + 0x7c)) != 0) {
              do {
                uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(((undefined1 *)(gen_frame + 0xc)) + uVar4 * 4 - 4) + 0x10))))
                                  (*(int * PTR32 *)(((undefined1 *)(gen_frame + 0xc)) + uVar4 * 4 - 4) GEN_EDX_ARG,pOVar9,0,((short *)(gen_frame + 0x58)),0,0);
                if (((-1 < (int)uVar5) && (((short *)(gen_frame + 0x58))[0] == 8)) &&
                   (((*(wchar_t * PTR32 *)(gen_frame + 0x60)) != (wchar_t *)0x0 &&
                    (pwVar6 = F_00c4cec9((*(wchar_t * PTR32 *)(gen_frame + 0x60)),((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x1091f88))))), pwVar6 != (wchar_t *)0x0
                    )))) {
                  (*(int *)(gen_frame + 0x6c)) = 0;
                  (*(uint *)(gen_frame + 0x74)) = 0;
                  pwVar6 = F_00c4cec9((*(wchar_t * PTR32 *)(gen_frame + 0x60)),((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x1091f90)))));
                  if ((pwVar6 != (wchar_t *)0x0) &&
                     (iVar7 = F_00c4cfe2(pwVar6,(*(undefined * PTR32 (*)[2])REFP(0x1091f9c)),&(*(uint *)(gen_frame + 0x74))),
                     iVar7 != 1)) {
                    (*(uint *)(gen_frame + 0x74)) = 0;
                  }
                  pwVar6 = F_00c4cec9((*(wchar_t * PTR32 *)(gen_frame + 0x60)),((wchar_t *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x1091fac)))));
                  iVar7 = (*(int *)(gen_frame + 0x6c));
                  if ((pwVar6 != (wchar_t *)0x0) &&
                     (iVar8 = F_00c4cfe2(pwVar6,(*(undefined * PTR32 (*)[2])REFP(0x1091fb8)),&(*(int *)(gen_frame + 0x6c))),
                     iVar7 = (*(int *)(gen_frame + 0x6c)), iVar8 != 1)) {
                    iVar7 = 0;
                  }
                  if ((iVar7 << 0x10 | (*(uint *)(gen_frame + 0x74)) & 0xffff) == *param_1) {
                    (*(byte *)(gen_frame + 0x8b)) = 1;
                    goto LAB_00497306;
                  }
                }
                piVar1 = *(int * PTR32 *)(((undefined1 *)(gen_frame + 0xc)) + uVar4 * 4 - 4);
                if (piVar1 != (int *)0x0) {
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
                  *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar4 * 4 - 4) = 0;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < (*(uint *)(gen_frame + 0x7c)));
            }
            uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x80)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,10000,0x14,&(*(int *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x7c)));
            if ((int)uVar4 < 0) break;
          }
        }
      }
LAB_00497306: ;
      gen_imp_SysFreeString((*(BSTR *)(gen_frame + 0x68)));
      if (pOVar9 != (BSTR)0x0) {
        gen_imp_SysFreeString(pOVar9);
      }
      if ((*(BSTR *)(gen_frame + 0x70)) != (BSTR)0x0) {
        gen_imp_SysFreeString((*(BSTR *)(gen_frame + 0x70)));
      }
    }
  }
  uVar4 = 0;
  do {
    piVar1 = *(int * PTR32 *)(((undefined1 *)(gen_frame + 0xc)) + uVar4 * 4 - 4);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar4 * 4 - 4) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x14);
  if ((*(int * PTR32 *)(gen_frame + 0x80)) != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x80)) + 8))((*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x80)) = (int *)0x0;
  }
  if ((*(int * PTR32 *)(gen_frame + 0x84)) != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x84)) + 8))((*(int * PTR32 *)(gen_frame + 0x84)) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x84)) = (int *)0x0;
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x78)) != (undefined *)0x0) {
    ((code *)((*(gen_code32 *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x78))))) + 8))))))((*(undefined * PTR32 *)(gen_frame + 0x78)));
  }
  return (*(byte *)(gen_frame + 0x8b));
}

/* ref: Client::System::Input::PadDevice::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00497390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x497390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x38) - *(int *)(this + 0x34)) / 0x770;
}

/* ref: Client::System::Input::PadDevice::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_004973b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4973b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (-1 < param_1) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD);
    if (param_1 < (int)uVar2) {
      iVar1 = *(int *)(this + 0x34);
      *(int *)(this + 0x32c) = param_1;
      iVar3 = param_1 * 0x770;
      *(undefined4 *)(this + 0x1fc) = *(undefined4 *)(iVar1 + 0x730 + iVar3);
      *(undefined4 *)(this + 0x200) = *(undefined4 *)(iVar1 + 0x734 + iVar3);
      *(undefined4 *)(this + 0x21c) = *(undefined4 *)(iVar1 + 0x750 + iVar3);
      *(undefined4 *)(this + 0x338) = *(undefined4 *)(this + 0x200);
    }
  }
  return;
}

/* ref: Client::System::Input::PadDevice::vf8 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00497420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x497420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  undefined * pvVar1;
  uint uVar2;
  undefined4 extraout_ECX = 0;
  int iVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float local_10;
  
  iVar3 = *(int *)(this + 0x32c);
  if (-1 < iVar3) {
    if (iVar3 <= (*(int *)(this + 0x38) - *(int *)(this + 0x34)) / 0x770) {
      local_10 = 1.4013e-45;
      uStack_14 = 0x2011ff14;
      uStack_18 = 0x44;
      iVar3 = iVar3 * 0x770 + *(int *)(this + 0x34);
      uStack_1c = 0x497471;
      pvVar1 = (undefined *)F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_FWD,0x44);
      uStack_18 = 0x497478;
      F_00414a40(pvVar1 GEN_EDX_ARG,uStack_14,(undefined4)gen_fl2bits(local_10));
      local_10 = 1.4013e-45;
      uStack_14 = *(undefined4 *)(iVar3 + 0x730);
      uStack_18 = 0x49;
      uStack_1c = 0x49748e;
      pvVar1 = (undefined *)F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_ARG,0x49);
      uStack_18 = 0x497495;
      F_00414a40(pvVar1 GEN_EDX_ARG,uStack_14,(undefined4)gen_fl2bits(local_10));
      local_10 = gen_bits2f(extraout_ECX);
      local_10 = *(float *)(iVar3 + 0x734);
      uStack_14 = 0x47;
      uStack_18 = 0x4974ac;
      uVar2 = F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_ARG,0x47);
      uStack_14 = 0x4974b3;
      F_00414ad0(uVar2 GEN_EDX_ARG,local_10);
      local_10 = 1.4013e-45;
      uStack_14 = *(undefined4 *)(iVar3 + 0x750);
      uStack_18 = 0x4a;
      uStack_1c = 0x4974c9;
      pvVar1 = (undefined *)F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_ARG,0x4a);
      uStack_18 = 0x4974d0;
      F_00414a40(pvVar1 GEN_EDX_ARG,uStack_14,(undefined4)gen_fl2bits(local_10));
      F_00413d50((gen_out + 0x0),iVar3 + 0x3a8);
      pvVar1 = (undefined *)F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_ARG,0x45);
      F_00414b60(pvVar1 GEN_EDX_ARG,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48, uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28, uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14, (undefined4)gen_fl2bits(local_10));
      F_00413d50((gen_out + 0x0),iVar3 + 0x3b8);
      pvVar1 = (undefined *)F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_ARG,0x46);
      F_00414b60(pvVar1 GEN_EDX_ARG,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48, uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28, uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14, (undefined4)gen_fl2bits(local_10));
      F_0049a760((gen_out + 0x0),iVar3 + 0x738,0x18,&REFG(undefined, 0x1091e80));
      pvVar1 = (undefined *)F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_ARG,0x48);
      F_00414b60(pvVar1 GEN_EDX_ARG,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48, uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28, uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14, (undefined4)gen_fl2bits(local_10));
    }
  }
  return;
}

/* ref: Client::System::Input::PadDevice::vf14 */
GEN_NOFRAME uint F_00497560(void)
{
  GEN_ENTER(0x497560u, 0u, 0u, 0u, 0u);
  char cVar1;
  
  cVar1 = *(char *)(REFG(int, 0x137104c) + 0x1d);
  if (((cVar1 != -1) && (cVar1 != '\x01')) && (cVar1 != '\x04')) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Input::PadDevice::vf11 */
GEN_FRAME uint GEN_THISCALL F_00497590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x497590u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  longlong lVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  
  iVar4 = (*(uint *)&gen_args[2]);
  uVar5 = (*(uint *)&gen_args[1]);
  if (*(int *)((*(uint *)&gen_args[0]) + 0x21c) == 0) {
    uVar5 = 0;
    iVar4 = 0;
  }
  if (*(int *)((*(uint *)&gen_args[0]) + 0x1fc) == 0) {
    piVar2 = (int *)(REFG(int, 0x137104c) + 0x1274);
    iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar3 != 0) {
      uVar5 = 0;
      iVar4 = 0;
    }
  }
  iVar3 = *(int *)((*(uint *)&gen_args[0]) + 0x32c);
  if (-1 < iVar3) {
    piVar2 = (int *)((*(uint *)&gen_args[0]) + 0x34);
    (*(uint *)&gen_args[0]) = (*(int *)((*(uint *)&gen_args[0]) + 0x38) - *piVar2) / 0x770;
    if (iVar3 < (int)(*(uint *)&gen_args[0])) {
      if (iVar4 < 0x65) {
        if (iVar4 < -100) {
          iVar4 = -100;
        }
      }
      else {
        iVar4 = 100;
      }
      if ((int)uVar5 < 0x65) {
        if ((int)uVar5 < -100) {
          uVar5 = 0xffffff9c;
        }
      }
      else {
        uVar5 = 100;
      }
      iVar3 = iVar3 * 0x770 + *piVar2;
      if (*(char *)(iVar3 + 1) != '\0') {
        iVar4 = iVar4 * 0xffff;
        iVar6 = uVar5 * 0xffff;
        (*(uint *)&gen_args[1]) = CONCAT22(((short)(iVar6 / 100) + (short)(iVar6 >> 0x1f)) -
                           (short)((longlong)iVar6 * 0x51eb851f >> 0x3f),
                           ((short)(iVar4 / 100) + (short)(iVar4 >> 0x1f)) -
                           (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
        uVar5 = gen_imp_XInputSetState(*(undefined4 *)(iVar3 + 0x28),&(*(uint *)&gen_args[1]));
        return uVar5;
      }
      (*(int * PTR32 *)(gen_frame + 0x48)) = *(int * PTR32 *)(iVar3 + 0x728);
      (*(uint *)&gen_args[0]) = 0;
      if (*(int * PTR32 *)(iVar3 + 0x728) != (int *)0x0) {
        iVar6 = *(int *)(iVar3 + 0x2c);
        uVar7 = uVar5 * 100;
        (*(uint *)&gen_args[2]) = iVar4 * 100;
        *(uint *)(iVar3 + 0x24) = uVar5 * 0x640000 | (*(uint *)&gen_args[2]);
        (*(uint *)(gen_frame + 0x44)) = 0;
        if (iVar6 == 1) {
          (*(uint *)(gen_frame + 0x40)) = 0;
          (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[2]);
          if (uVar7 + iVar4 * -100 != 0 && (int)(*(uint *)&gen_args[2]) <= (int)uVar7) {
            (*(uint *)&gen_args[1]) = uVar7;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x40)) = uVar7;
          fVar8 = (float10)(int)(*(uint *)&gen_args[2]);
          (*(uint *)(gen_frame + 0x44)) = (*(uint *)&gen_args[2]);
          (*(uint *)&gen_args[2]) = gen_x87_cw | 0xc00;
          lVar1 = (longlong)
                  TRUNC((float10)((float)GEN_TOF(SQRT((float10)(float)(fVar8 * fVar8 +
                                                             (float10)(int)uVar7 *
                                                             (float10)(int)uVar7)))));
          (*(longlong *)(gen_frame + 0x38)) = lVar1;
          lVar1 = (*(longlong *)(gen_frame + 0x38));
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x38)) + 0)) = (uint)lVar1;
          (*(uint *)&gen_args[1]) = (uint)(*(longlong *)(gen_frame + 0x38));
          (*(longlong *)(gen_frame + 0x38)) = lVar1;
        }
        (*(undefined4 *)(gen_frame + 0x0)) = 0x38;
        F_00c48350(((undefined4 *)(gen_frame + 0x4)),0,0x34);
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(uint * PTR32 *)(gen_frame + 0x30)) = &(*(uint *)&gen_args[1]);
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        (*(uint * PTR32 *)(gen_frame + 0x24)) = &(*(uint *)(gen_frame + 0x40));
        ((undefined4 *)(gen_frame + 0x4))[0] = 0x12;
        (*(int *)(gen_frame + 0x1c)) = iVar6;
        (*(undefined4 *)(gen_frame + 0x2c)) = 4;
        (*(uint *)&gen_args[0]) = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0x20000140);
      }
    }
  }
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00497770 */
GEN_NOFRAME uint GEN_THISCALL F_00497770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x497770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x329) == '\0') && (*(int *)((int)this + 0x334) != 0)) {
    *(undefined1 *)((int)this + 0x2c) = 1;
    gen_imp_SetEvent(*(HANDLE *)((int)this + 800));
    uVar1 = F_004cf020((undefined *)((int)this + 0x18) GEN_EDX_ARG);
    return uVar1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),*(char *)((int)this + 0x329));
}

/* ref: FUN_004977b0 */
GEN_FRAME unsigned int GEN_THISCALL F_004977b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4977b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((-1 < *(int *)((int)this + 0x32c)) &&
     (*(int *)((int)this + 0x32c) <=
      (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34)) / 0x770)) {
    return;
  }
  return;
}

/* ref: FUN_00497800 */
GEN_FRAME uint GEN_THISCALL F_00497800(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x497800u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  double dVar2;
  double dVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float fVar12;
  
  ((uint *)(gen_frame + 0x18))[0x18] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  iVar10 = *(int *)(param_1 + 0x32c);
  uVar8 = 0;
  iVar9 = iVar10 * 0x770 + *(int *)(param_1 + 0x34);
  (*(uint *)(gen_frame + 0x10)) = 0;
  iVar7 = 0x17;
  puVar4 = (undefined4 *)(iVar9 + 0x34);
  puVar6 = (undefined4 *)(param_1 + 0x6c);
  do {
    puVar6[-1] = puVar4[-1];
    iVar7 = iVar7 - 1;
    *puVar6 = *puVar4;
    puVar6[1] = puVar4[1];
    puVar6[2] = puVar4[2];
    puVar4 = puVar4 + 4;
    puVar6 = puVar6 + 4;
  } while (iVar7 != 0);
  if (*(char *)(iVar9 + 0x76c) == '\x01') {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  dVar2 = *(double *)&REFG(undefined, 0x1088118);
  if (-1 < iVar10) {
    iVar7 = *(int *)(param_1 + 0x34);
    iVar1 = (*(int *)(param_1 + 0x38) - iVar7) / 0x770;
    uVar8 = (*(uint *)(gen_frame + 0x10));
    if (iVar10 < iVar1) {
      iVar10 = *(int *)(param_1 + 0x32c);
      fVar12 = 0.0;
      if ((iVar10 < 0) || (iVar1 < iVar10)) {
        (*(float *)(gen_frame + 0x14)) = 0.0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x34);
        (*(float *)(gen_frame + 0x14)) = *((float *)GEN_TOP((iVar7 + 0x30 + ((int)*(char *)(iVar9 + 0x73d) + iVar10 * 0x1dc) * 4)));
      }
      if ((iVar10 < 0) || (iVar1 < iVar10)) {
        (*(float *)(gen_frame + 0x8)) = 0.0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x34);
        (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((iVar7 + 0x30 + ((int)*(char *)(iVar9 + 0x73c) + iVar10 * 0x1dc) * 4)));
      }
      fVar11 = (float10)(*(float *)(gen_frame + 0x8));
      if ((iVar10 < 0) || (iVar1 < iVar10)) {
        (*(float *)(gen_frame + 0x8)) = 0.0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x34);
        (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((iVar7 + 0x30 + ((int)*(char *)(iVar9 + 0x73f) + iVar10 * 0x1dc) * 4)));
      }
      if ((-1 < iVar10) && (iVar10 <= iVar1)) {
        fVar12 = *((float *)GEN_TOP((iVar7 + 0x30 + ((int)*(char *)(iVar9 + 0x73e) + iVar10 * 0x1dc) * 4)));
      }
      *(int *)(param_1 + 0x48) =
           (int)((double)(float)((float10)(*(float *)(gen_frame + 0x14)) - fVar11) * *(double *)&REFG(undefined, 0x1088118));
      *(int *)(param_1 + 0x44) = (int)((double)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)fVar12) * dVar2)
      ;
      iVar7 = *(int *)(param_1 + 0x32c);
      if ((iVar7 < 0) || ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x770 < iVar7)) {
        (*(float *)(gen_frame + 0xc)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0xc)) = *((float *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x30 +
                             ((int)*(char *)(iVar9 + 0x741) + iVar7 * 0x1dc) * 4)));
      }
      fVar12 = 0.0;
      if ((iVar7 < 0) || ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x770 < iVar7)) {
        (*(float *)(gen_frame + 0x8)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x30 +
                             ((int)*(char *)(iVar9 + 0x740) + iVar7 * 0x1dc) * 4)));
      }
      fVar11 = (float10)(*(float *)(gen_frame + 0xc));
      if ((iVar7 < 0) || ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x770 < iVar7)) {
        (*(float *)(gen_frame + 0xc)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0xc)) = *((float *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x30 +
                             ((int)*(char *)(iVar9 + 0x743) + iVar7 * 0x1dc) * 4)));
      }
      if ((-1 < iVar7) && (iVar7 <= (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x770))
      {
        fVar12 = *((float *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x30 +
                           ((int)*(char *)(iVar9 + 0x742) + iVar7 * 0x1dc) * 4)));
      }
      *(int *)(param_1 + 0x50) = (int)((double)(float)(fVar11 - (float10)(*(float *)(gen_frame + 0x8))) * dVar2);
      dVar3 = *(double *)&REFG(undefined, 0x10920a8);
      iVar10 = 0;
      *(int *)(param_1 + 0x4c) = (int)(dVar2 * (double)(float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)fVar12))
      ;
      iVar7 = *(int *)(param_1 + 0x32c);
      ((uint *)(gen_frame + 0x18))[0] = 1;
      ((uint *)(gen_frame + 0x18))[1] = 2;
      ((uint *)(gen_frame + 0x18))[2] = 4;
      ((uint *)(gen_frame + 0x18))[3] = 8;
      ((uint *)(gen_frame + 0x18))[4] = 0;
      ((uint *)(gen_frame + 0x18))[5] = 0;
      ((uint *)(gen_frame + 0x18))[6] = 0;
      ((uint *)(gen_frame + 0x18))[7] = 0;
      ((uint *)(gen_frame + 0x18))[8] = 0;
      ((uint *)(gen_frame + 0x18))[9] = 0;
      ((uint *)(gen_frame + 0x18))[10] = 0;
      ((uint *)(gen_frame + 0x18))[0xb] = 0;
      ((uint *)(gen_frame + 0x18))[0xc] = 0x10;
      ((uint *)(gen_frame + 0x18))[0xd] = 0x80;
      ((uint *)(gen_frame + 0x18))[0xe] = 0x20;
      ((uint *)(gen_frame + 0x18))[0xf] = 0x40;
      ((uint *)(gen_frame + 0x18))[0x10] = 0x100;
      ((uint *)(gen_frame + 0x18))[0x11] = 0x200;
      ((uint *)(gen_frame + 0x18))[0x12] = 0x400;
      ((uint *)(gen_frame + 0x18))[0x13] = 0x800;
      ((uint *)(gen_frame + 0x18))[0x14] = 0x1000;
      ((uint *)(gen_frame + 0x18))[0x15] = 0x2000;
      ((uint *)(gen_frame + 0x18))[0x16] = 0x8000;
      ((uint *)(gen_frame + 0x18))[0x17] = 0x4000;
      do {
        if ((iVar7 < 0) || ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x770 < iVar7))
        {
          (*(float *)(gen_frame + 0x14)) = 0.0;
        }
        else {
          (*(float *)(gen_frame + 0x14)) = *((float *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x30 +
                               ((int)*(char *)(iVar10 + 0x738 + iVar9) + iVar7 * 0x1dc) * 4)));
        }
        if (dVar3 < (double)(*(float *)(gen_frame + 0x14))) {
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | ((uint *)(gen_frame + 0x18))[(int)(iVar10)];
        }
        if ((iVar7 < 0) || ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x770 < iVar7))
        {
          (*(float *)(gen_frame + 0x14)) = 0.0;
        }
        else {
          (*(float *)(gen_frame + 0x14)) = *((float *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x30 +
                               ((int)*(char *)(iVar10 + 0x739 + iVar9) + iVar7 * 0x1dc) * 4)));
        }
        if (dVar3 < (double)(*(float *)(gen_frame + 0x14))) {
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | ((uint *)(gen_frame + 0x18))[(int)(iVar10 + 1)];
        }
        if ((iVar7 < 0) || ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x770 < iVar7))
        {
          (*(float *)(gen_frame + 0x14)) = 0.0;
        }
        else {
          (*(float *)(gen_frame + 0x14)) = *((float *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x30 +
                               ((int)*(char *)(iVar10 + 0x73a + iVar9) + iVar7 * 0x1dc) * 4)));
        }
        if (dVar3 < (double)(*(float *)(gen_frame + 0x14))) {
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | ((uint *)(gen_frame + 0x18))[(int)(iVar10 + 2)];
        }
        if ((iVar7 < 0) || ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x770 < iVar7))
        {
          (*(float *)(gen_frame + 0x14)) = 0.0;
        }
        else {
          (*(float *)(gen_frame + 0x14)) = *((float *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x30 +
                               ((int)*(char *)(iVar10 + 0x73b + iVar9) + iVar7 * 0x1dc) * 4)));
        }
        if (dVar3 < (double)(*(float *)(gen_frame + 0x14))) {
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | ((uint *)(gen_frame + 0x18))[(int)(iVar10 + 3)];
        }
        if ((iVar7 < 0) || ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x770 < iVar7))
        {
          (*(float *)(gen_frame + 0x14)) = 0.0;
        }
        else {
          (*(float *)(gen_frame + 0x14)) = *((float *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x30 +
                               ((int)*(char *)(iVar10 + 0x73c + iVar9) + iVar7 * 0x1dc) * 4)));
        }
        if (dVar3 < (double)(*(float *)(gen_frame + 0x14))) {
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | ((uint *)(gen_frame + 0x18))[(int)(iVar10 + 4)];
        }
        if ((iVar7 < 0) || ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x770 < iVar7))
        {
          (*(float *)(gen_frame + 0x14)) = 0.0;
        }
        else {
          (*(float *)(gen_frame + 0x14)) = *((float *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x30 +
                               ((int)*(char *)(iVar10 + 0x73d + iVar9) + iVar7 * 0x1dc) * 4)));
        }
        if (dVar3 < (double)(*(float *)(gen_frame + 0x14))) {
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | ((uint *)(gen_frame + 0x18))[(int)(iVar10 + 5)];
        }
        iVar10 = iVar10 + 6;
        uVar8 = (*(uint *)(gen_frame + 0x10));
      } while (iVar10 < 0x18);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x54) ^ uVar8;
  *(uint *)(param_1 + 0x5c) = uVar5 & *(uint *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 100) = 0;
  *(uint *)(param_1 + 0x58) = uVar5 & uVar8;
  uVar5 = F_00b10660(param_1 + 8 GEN_EDX_FWD,param_2,uVar8,param_3);
  *(uint *)(param_1 + 0x54) = uVar8;
  *(uint *)(param_1 + 0x60) = uVar5;
  F_00c47745(((uint *)(gen_frame + 0x18))[0x18] ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00497de0 */
GEN_FRAME uint GEN_THISCALL F_00497de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x497de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  iVar1 = param_1;
  iVar3 = *(int *)((int)this + 0x38) - *(int *)((int)this + 0x34);
  uVar2 = iVar3 * 0x44d72045;
  iVar3 = iVar3 / 0x770;
  local_8 = 0;
  if (0 < iVar3) {
    param_1 = *(int *)((int)this + 0x34) + 0x3a8;
    while ((uVar2 = F_004011f0(iVar1 + 0x14,param_1 + 0x10), uVar2 == 0 ||
           (uVar2 = F_004011f0(iVar1 + 4,param_1), uVar2 == 0))) {
      param_1 = param_1 + 0x770;
      local_8 = local_8 + 1;
      if (iVar3 <= (int)local_8) {
        return local_8;
      }
    }
    iVar3 = local_8 * 0x770;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x72c + iVar3))) = 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0x734 + *(int *)((int)this + 0x34)))) = *(undefined4 *)(iVar1 + 0x28);
    *((undefined4 *)GEN_TOP((iVar3 + 0x730 + *(int *)((int)this + 0x34)))) = *(undefined4 *)(iVar1 + 0x24);
    F_00c4d027(((undefined *)GEN_TOP((iVar3 + 0x738 + *(int *)((int)this + 0x34)))),0x18,(undefined *)(iVar1 + 0x2c),0x18)
    ;
    uVar2 = *(uint *)((int)this + 0x34);
    *(undefined4 *)(iVar3 + 0x750 + uVar2) = *(undefined4 *)(iVar1 + 0x44);
    if (((char)param_2 == '\x01') && (*(int *)((int)this + 0x32c) == -1)) {
      *(uint *)((int)this + 0x32c) = local_8;
    }
  }
  return uVar2;
}

/* ref: Client::System::Input::PadDevice::vf2 */
GEN_FRAME uint GEN_THISCALL F_00497f20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x497f20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  float * pfVar4;
  uint * puVar5;
  int iVar6;
  int iVar7;
  float * pfVar8;
  char * pcVar9;
  char * pcVar10;
  undefined4 * puVar11;
  float10 fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  uVar2 = 0xffffffff;
  (*(int *)(gen_frame + 0xc)) = param_1;
  if (((*(int *)(param_1 + 0x32c) == -1) || (*(char *)(param_1 + 0x329) == '\0')) ||
     (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x38))) {
    if ((*(int *)(param_1 + 0x334) != 0) &&
       (*(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + 1, 0x96 < *(int *)(param_1 + 0x330))
       ) {
      *(int *)(param_1 + 0x334) = *(int *)(param_1 + 0x334) - 1;
      *(undefined4 *)(param_1 + 0x330) = 0;
      uVar2 = gen_imp_SetEvent(*(HANDLE *)(param_1 + 800));
    }
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x1fc) == 0) {
    piVar3 = (int *)(REFG(int, 0x137104c) + 0x1274);
    iVar6 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    if (iVar6 != 0) {
      iVar7 = *(int *)(param_1 + 0x32c) * 0x770 + *(int *)(param_1 + 0x34);
      *(undefined4 *)(iVar7 + 2) = 0;
      *(undefined4 *)(iVar7 + 6) = 0;
      *(undefined4 *)(iVar7 + 10) = 0;
      *(undefined4 *)(iVar7 + 0xe) = 0;
      *(undefined4 *)(iVar7 + 0x12) = 0;
      *(undefined4 *)(iVar7 + 0x16) = 0;
      *(undefined4 *)(iVar7 + 0x1a) = 0;
      *(undefined4 *)(iVar7 + 0x1e) = 0;
      puVar11 = (undefined4 *)(iVar7 + 0x30);
      for (iVar6 = 0x5c; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      *(undefined4 *)(iVar7 + 0x1a0) = 0;
      *(undefined4 *)(iVar7 + 0x1a4) = 0;
      *(undefined4 *)(iVar7 + 0x1a8) = 0;
      *(undefined4 *)(iVar7 + 0x1ac) = 0;
      *(undefined4 *)(iVar7 + 0x1b0) = 0;
      *(undefined4 *)(iVar7 + 0x1b4) = 0;
      *(undefined4 *)(iVar7 + 0x1b8) = 0;
      *(undefined4 *)(iVar7 + 0x1bc) = 0;
      *(undefined4 *)(iVar7 + 0x1c0) = 0;
      *(undefined4 *)(iVar7 + 0x1c4) = 0;
      *(undefined4 *)(iVar7 + 0x1c8) = 0;
      *(undefined4 *)(iVar7 + 0x1cc) = 0;
      *(undefined4 *)(iVar7 + 0x1d0) = 0;
      *(undefined4 *)(iVar7 + 0x1d4) = 0;
      *(undefined4 *)(iVar7 + 0x1d8) = 0;
      *(undefined4 *)(iVar7 + 0x1dc) = 0;
      *(undefined4 *)(iVar7 + 0x1e0) = 0;
      *(undefined4 *)(iVar7 + 0x1e4) = 0;
      *(undefined4 *)(iVar7 + 0x1e8) = 0;
      *(undefined4 *)(iVar7 + 0x1ec) = 0;
      *(undefined4 *)(iVar7 + 0x1f0) = 0;
      *(undefined4 *)(iVar7 + 500) = 0;
      *(undefined4 *)(iVar7 + 0x1f8) = 0;
      *(undefined4 *)(iVar7 + 0x1fc) = 0;
      *(undefined4 *)(iVar7 + 0x200) = 0;
      *(undefined4 *)(iVar7 + 0x204) = 0;
      *(undefined4 *)(iVar7 + 0x208) = 0;
      *(undefined4 *)(iVar7 + 0x20c) = 0;
      *(undefined4 *)(iVar7 + 0x210) = 0;
      *(undefined4 *)(iVar7 + 0x214) = 0;
      goto LAB_00498650;
    }
  }
  pcVar10 = ((char *)GEN_TOP((*(int *)(param_1 + 0x32c) * 0x770 + *(int *)(param_1 + 0x34))));
  piVar3 = *(int * PTR32 *)(pcVar10 + 0x724);
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG);
  }
  if (pcVar10[1] == '\0') {
    piVar3 = *(int * PTR32 *)(pcVar10 + 0x724);
    if (piVar3 != (int *)0x0) {
      if (*pcVar10 != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_ARG);
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pcVar10 + 0x724) + 0x24))))
                        (*(int * PTR32 *)(pcVar10 + 0x724) GEN_EDX_ARG,0x94,((byte *)(gen_frame + 0x1c)));
      if ((int)uVar2 < 0) {
        piVar3 = *(int * PTR32 *)(pcVar10 + 0x724);
        if (piVar3 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
          pcVar10[0x724] = '\0';
          pcVar10[0x725] = '\0';
          pcVar10[0x726] = '\0';
          pcVar10[0x727] = '\0';
        }
        goto LAB_00498a63;
      }
      uVar2 = 0;
      do {
        pcVar10[uVar2 + 2] = ((byte *)(gen_frame + 0x1c))[(int)(uVar2)] >> 7;
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x20);
      uVar2 = 0;
      (*(float * PTR32 *)(gen_frame + 0x10)) = (float *)(pcVar10 + 0x1a4);
      pfVar4 = (float *)(pcVar10 + 0x230);
      pfVar8 = (float *)(pcVar10 + 0x1a4);
      do {
        piVar3 = ((int *)(gen_frame + 0x3c)) + uVar2;
        uVar2 = uVar2 + 7;
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(*piVar3 - (int)gen_fl2bits(pfVar4[-2]));
        iVar6 = *(int *)(((byte *)(gen_frame + 0x1c)) + uVar2 * 4 + 8);
        pfVar8[-1] = ((float)GEN_TOF(((float10)(*piVar3 - (int)gen_fl2bits(pfVar4[-2])) * (float10)*pfVar4)));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(iVar6 - (int)gen_fl2bits(pfVar4[1]));
        iVar7 = *(int *)(((byte *)(gen_frame + 0x1c)) + uVar2 * 4 + 0xc);
        *pfVar8 = ((float)GEN_TOF(((float10)(iVar6 - (int)gen_fl2bits(pfVar4[1])) * (float10)pfVar4[3])));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(iVar7 - (int)gen_fl2bits(pfVar4[4]));
        iVar6 = *(int *)(((byte *)(gen_frame + 0x1c)) + uVar2 * 4 + 0x10);
        pfVar8[1] = ((float)GEN_TOF(((float10)(iVar7 - (int)gen_fl2bits(pfVar4[4])) * (float10)pfVar4[6])));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(iVar6 - (int)gen_fl2bits(pfVar4[7]));
        iVar7 = *(int *)(((byte *)(gen_frame + 0x1c)) + uVar2 * 4 + 0x14);
        pfVar8[2] = ((float)GEN_TOF(((float10)(iVar6 - (int)gen_fl2bits(pfVar4[7])) * (float10)pfVar4[9])));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(iVar7 - (int)gen_fl2bits(pfVar4[10]));
        iVar6 = *(int *)(((byte *)(gen_frame + 0x1c)) + uVar2 * 4 + 0x18);
        pfVar8[3] = ((float)GEN_TOF(((float10)(iVar7 - (int)gen_fl2bits(pfVar4[10])) * (float10)pfVar4[0xc])));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(iVar6 - (int)gen_fl2bits(pfVar4[0xd]));
        iVar7 = *(int *)(((byte *)(gen_frame + 0x1c)) + uVar2 * 4 + 0x1c);
        pfVar8[4] = ((float)GEN_TOF(((float10)(iVar6 - (int)gen_fl2bits(pfVar4[0xd])) * (float10)pfVar4[0xf])))
        ;
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(iVar7 - (int)gen_fl2bits(pfVar4[0x10]));
        pfVar8[5] = ((float)GEN_TOF(((float10)(iVar7 - (int)gen_fl2bits(pfVar4[0x10])) *
                           (float10)pfVar4[0x12])));
        pfVar4 = pfVar4 + 0x15;
        pfVar8 = pfVar8 + 7;
      } while (uVar2 < 0x1c);
      F_0049a9d0(param_1 GEN_EDX_ARG,(uint)(pcVar10 + 0x1a0),(uint)(pcVar10 + 0x1b0));
      F_0049a9d0(param_1 GEN_EDX_ARG,(uint)(pcVar10 + 0x1c0),(uint)(pcVar10 + 0x1f0));
      if ((short)(*(int *)(gen_frame + 0xac)) == -1) {
        pcVar10[0x210] = '\0';
        pcVar10[0x211] = '\0';
        pcVar10[0x212] = '\0';
        pcVar10[0x213] = '\0';
        pcVar10[0x214] = '\0';
        pcVar10[0x215] = '\0';
        pcVar10[0x216] = '\0';
        pcVar10[0x217] = '\0';
      }
      else {
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((*(int *)(gen_frame + 0xac)));
        fVar12 = (float10)(*(int *)(gen_frame + 0xac));
        if ((*(int *)(gen_frame + 0xac)) < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar14 = ((float)GEN_TOF((((fVar12 / (float10)*(double *)&REFG(undefined, 0x1088118) -
                          (float10)*(double *)&REFG(undefined, 0x10920c0)) * (float10)REFG(double, 0x10920b8)) /
                        (float10)*(double *)&REFG(undefined, 0x10920b0))));
        (*(float *)(gen_frame + 0x18)) = fVar14;
        fVar12 = ((float10)GEN_TOD(fcos((float10)fVar14)));
        (*(float *)(gen_frame + 0x14)) = (float)fVar12;
        *(float *)(pcVar10 + 0x210) = (float)fVar12;
        fVar12 = ((float10)GEN_TOD(fsin((float10)fVar14)));
        (*(float *)(gen_frame + 0x18)) = (float)fVar12;
        *(float *)(pcVar10 + 0x214) = (float)fVar12;
      }
      fVar14 = REFG(float, 0x1087f04);
      pcVar9 = pcVar10 + 3;
      pfVar4 = (float *)(pcVar10 + 0x34);
      iVar6 = 4;
      do {
        fVar15 = fVar14;
        if (pcVar9[-1] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[-1] = fVar15;
        fVar15 = fVar14;
        if (*pcVar9 == '\0') {
          fVar15 = 0.0;
        }
        *pfVar4 = fVar15;
        fVar15 = fVar14;
        if (pcVar9[1] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[1] = fVar15;
        fVar15 = fVar14;
        if (pcVar9[2] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[2] = fVar15;
        fVar15 = fVar14;
        if (pcVar9[3] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[3] = fVar15;
        fVar15 = fVar14;
        if (pcVar9[4] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[4] = fVar15;
        fVar15 = fVar14;
        if (pcVar9[5] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[5] = fVar15;
        fVar15 = fVar14;
        if (pcVar9[6] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[6] = fVar15;
        uVar2 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
        pcVar9 = pcVar9 + 8;
        pfVar4 = pfVar4 + 8;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      puVar5 = (uint *)(pcVar10 + 0xb0);
      iVar6 = 5;
      pfVar4 = (*(float * PTR32 *)(gen_frame + 0x10));
      do {
        if (pfVar4[-1] < 0.0) {
          uVar13 = (uint)gen_fl2bits(pfVar4[-1]) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        *puVar5 = uVar13;
        fVar14 = pfVar4[-1];
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[1] = (uint)gen_fl2bits(fVar14);
        if (*pfVar4 < 0.0) {
          uVar13 = (uint)gen_fl2bits(*pfVar4) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        puVar5[2] = uVar13;
        fVar14 = *pfVar4;
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[3] = (uint)gen_fl2bits(fVar14);
        if (pfVar4[1] < 0.0) {
          uVar13 = (uint)gen_fl2bits(pfVar4[1]) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        puVar5[4] = uVar13;
        fVar14 = pfVar4[1];
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[5] = (uint)gen_fl2bits(fVar14);
        if (pfVar4[2] < 0.0) {
          uVar13 = (uint)gen_fl2bits(pfVar4[2]) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        puVar5[6] = uVar13;
        fVar14 = pfVar4[2];
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[7] = (uint)gen_fl2bits(fVar14);
        if (pfVar4[3] < 0.0) {
          uVar13 = (uint)gen_fl2bits(pfVar4[3]) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        puVar5[8] = uVar13;
        fVar14 = pfVar4[3];
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[9] = (uint)gen_fl2bits(fVar14);
        if (pfVar4[4] < 0.0) {
          uVar13 = (uint)gen_fl2bits(pfVar4[4]) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        puVar5[10] = uVar13;
        fVar14 = pfVar4[4];
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[0xb] = (uint)gen_fl2bits(fVar14);
        puVar5 = puVar5 + 0xc;
        pfVar4 = pfVar4 + 6;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      goto LAB_00498603;
    }
  }
  else {
    iVar6 = gen_imp_XInputGetState(*(undefined4 *)(pcVar10 + 0x28),pcVar10 + 0x218);
    if (iVar6 == 0) {
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      pcVar10[4] = '\0';
      pcVar10[5] = '\0';
      pcVar10[6] = '\0';
      pcVar10[7] = '\0';
      pcVar10[8] = '\0';
      pcVar10[9] = '\0';
      pcVar10[10] = '\0';
      pcVar10[0xb] = '\0';
      pcVar10[0xc] = '\0';
      pcVar10[0xd] = '\0';
      pcVar10[0xe] = '\0';
      pcVar10[0xf] = '\0';
      pcVar10[0x10] = '\0';
      pcVar10[0x11] = '\0';
      pcVar10[0x12] = '\0';
      pcVar10[0x13] = '\0';
      pcVar10[0x14] = '\0';
      pcVar10[0x15] = '\0';
      pcVar10[0x16] = '\0';
      pcVar10[0x17] = '\0';
      pcVar10[0x18] = '\0';
      pcVar10[0x19] = '\0';
      pcVar10[0x1a] = '\0';
      pcVar10[0x1b] = '\0';
      pcVar10[0x1c] = '\0';
      pcVar10[0x1d] = '\0';
      pcVar10[0x1e] = '\0';
      pcVar10[0x1f] = '\0';
      pcVar10[0x20] = '\0';
      pcVar10[0x21] = '\0';
      pcVar10[2] = (byte)pcVar10[0x21c] >> 4 & 1;
      pcVar10[3] = (byte)pcVar10[0x21c] >> 5 & 1;
      pcVar10[4] = (byte)pcVar10[0x21c] >> 6 & 1;
      pcVar10[5] = (byte)pcVar10[0x21c] >> 7;
      pcVar10[6] = pcVar10[0x21d] & 1;
      pcVar10[7] = (byte)((ushort)*(undefined2 *)(pcVar10 + 0x21c) >> 9) & 1;
      pcVar10[8] = (byte)((ushort)*(undefined2 *)(pcVar10 + 0x21c) >> 0xc) & 1;
      pcVar10[9] = (byte)((ushort)*(undefined2 *)(pcVar10 + 0x21c) >> 0xd) & 1;
      pcVar10[10] = (byte)((ushort)*(undefined2 *)(pcVar10 + 0x21c) >> 0xe) & 1;
      pcVar10[0xb] = (byte)((ushort)*(undefined2 *)(pcVar10 + 0x21c) >> 0xf);
      pcVar10[0x1a0] = '\0';
      pcVar10[0x1a1] = '\0';
      pcVar10[0x1a2] = '\0';
      pcVar10[0x1a3] = '\0';
      pcVar10[0x1a4] = '\0';
      pcVar10[0x1a5] = '\0';
      pcVar10[0x1a6] = '\0';
      pcVar10[0x1a7] = '\0';
      pcVar10[0x1a8] = '\0';
      pcVar10[0x1a9] = '\0';
      pcVar10[0x1aa] = '\0';
      pcVar10[0x1ab] = '\0';
      pcVar10[0x1ac] = '\0';
      pcVar10[0x1ad] = '\0';
      pcVar10[0x1ae] = '\0';
      pcVar10[0x1af] = '\0';
      pcVar10[0x1b0] = '\0';
      pcVar10[0x1b1] = '\0';
      pcVar10[0x1b2] = '\0';
      pcVar10[0x1b3] = '\0';
      pcVar10[0x1b4] = '\0';
      pcVar10[0x1b5] = '\0';
      pcVar10[0x1b6] = '\0';
      pcVar10[0x1b7] = '\0';
      pcVar10[0x1b8] = '\0';
      pcVar10[0x1b9] = '\0';
      pcVar10[0x1ba] = '\0';
      pcVar10[0x1bb] = '\0';
      pcVar10[0x1bc] = '\0';
      pcVar10[0x1bd] = '\0';
      pcVar10[0x1be] = '\0';
      pcVar10[0x1bf] = '\0';
      pcVar10[0x1c0] = '\0';
      pcVar10[0x1c1] = '\0';
      pcVar10[0x1c2] = '\0';
      pcVar10[0x1c3] = '\0';
      pcVar10[0x1c4] = '\0';
      pcVar10[0x1c5] = '\0';
      pcVar10[0x1c6] = '\0';
      pcVar10[0x1c7] = '\0';
      pcVar10[0x1c8] = '\0';
      pcVar10[0x1c9] = '\0';
      pcVar10[0x1ca] = '\0';
      pcVar10[0x1cb] = '\0';
      pcVar10[0x1cc] = '\0';
      pcVar10[0x1cd] = '\0';
      pcVar10[0x1ce] = '\0';
      pcVar10[0x1cf] = '\0';
      pcVar10[0x1d0] = '\0';
      pcVar10[0x1d1] = '\0';
      pcVar10[0x1d2] = '\0';
      pcVar10[0x1d3] = '\0';
      pcVar10[0x1d4] = '\0';
      pcVar10[0x1d5] = '\0';
      pcVar10[0x1d6] = '\0';
      pcVar10[0x1d7] = '\0';
      pcVar10[0x1d8] = '\0';
      pcVar10[0x1d9] = '\0';
      pcVar10[0x1da] = '\0';
      pcVar10[0x1db] = '\0';
      pcVar10[0x1dc] = '\0';
      pcVar10[0x1dd] = '\0';
      pcVar10[0x1de] = '\0';
      pcVar10[0x1df] = '\0';
      pcVar10[0x1e0] = '\0';
      pcVar10[0x1e1] = '\0';
      pcVar10[0x1e2] = '\0';
      pcVar10[0x1e3] = '\0';
      pcVar10[0x1e4] = '\0';
      pcVar10[0x1e5] = '\0';
      pcVar10[0x1e6] = '\0';
      pcVar10[0x1e7] = '\0';
      pcVar10[0x1e8] = '\0';
      pcVar10[0x1e9] = '\0';
      pcVar10[0x1ea] = '\0';
      pcVar10[0x1eb] = '\0';
      pcVar10[0x1ec] = '\0';
      pcVar10[0x1ed] = '\0';
      pcVar10[0x1ee] = '\0';
      pcVar10[0x1ef] = '\0';
      pcVar10[0x1f0] = '\0';
      pcVar10[0x1f1] = '\0';
      pcVar10[0x1f2] = '\0';
      pcVar10[499] = '\0';
      pcVar10[500] = '\0';
      pcVar10[0x1f5] = '\0';
      pcVar10[0x1f6] = '\0';
      pcVar10[0x1f7] = '\0';
      (*(undefined4 *)(gen_frame + 0xb0)) = 0x10;
      (*(undefined4 *)(gen_frame + 0xb4)) = 0x20;
      (*(undefined4 *)(gen_frame + 0xb8)) = 0x40;
      (*(undefined4 *)(gen_frame + 0xbc)) = 0x80;
      (*(undefined4 *)(gen_frame + 0xc0)) = 0x100;
      (*(undefined4 *)(gen_frame + 0xc4)) = 0x200;
      (*(undefined4 *)(gen_frame + 0xc8)) = 0x1000;
      (*(undefined4 *)(gen_frame + 0xcc)) = 0x2000;
      (*(undefined4 *)(gen_frame + 0xd0)) = 0x4000;
      (*(undefined4 *)(gen_frame + 0xd4)) = 0x8000;
      pcVar10[0x1f8] = '\0';
      fVar15 = REFG(float, 0x1090708);
      pcVar10[0x1f9] = '\0';
      pcVar10[0x1fa] = '\0';
      pcVar10[0x1fb] = '\0';
      pcVar10[0x1fc] = '\0';
      pcVar10[0x1fd] = '\0';
      pcVar10[0x1fe] = '\0';
      pcVar10[0x1ff] = '\0';
      pcVar10[0x200] = '\0';
      pcVar10[0x201] = '\0';
      pcVar10[0x202] = '\0';
      pcVar10[0x203] = '\0';
      pcVar10[0x204] = '\0';
      pcVar10[0x205] = '\0';
      pcVar10[0x206] = '\0';
      pcVar10[0x207] = '\0';
      pcVar10[0x208] = '\0';
      pcVar10[0x209] = '\0';
      pcVar10[0x20a] = '\0';
      pcVar10[0x20b] = '\0';
      pcVar10[0x20c] = '\0';
      pcVar10[0x20d] = '\0';
      pcVar10[0x20e] = '\0';
      pcVar10[0x20f] = '\0';
      pcVar10[0x210] = '\0';
      pcVar10[0x211] = '\0';
      pcVar10[0x212] = '\0';
      pcVar10[0x213] = '\0';
      pcVar10[0x214] = '\0';
      fVar14 = REFG(float, 0x1087f04);
      pcVar10[0x215] = '\0';
      pcVar10[0x216] = '\0';
      pcVar10[0x217] = '\0';
      uVar1 = *(ushort *)(pcVar10 + 0x21c);
      if ((uVar1 & 4) == 0) {
        (*(float *)(gen_frame + 0x14)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0x14)) = fVar15;
      }
      if ((uVar1 & 8) == 0) {
        (*(float * PTR32 *)(gen_frame + 0x10)) = (float *)0x0;
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
      }
      *(float *)(pcVar10 + 0x1a0) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x10))))) + (float10)(*(float *)(gen_frame + 0x14)));
      if ((uVar1 & 1) == 0) {
        (*(float *)(gen_frame + 0x18)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0x18)) = fVar15;
      }
      if ((uVar1 & 2) == 0) {
        (*(float *)(gen_frame + 0x14)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0x14)) = fVar14;
      }
      (*(float * PTR32 *)(gen_frame + 0x10)) = (float *)(pcVar10 + 0x1a4);
      *(float *)(pcVar10 + 0x1a4) = (float)((float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x18)));
      (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)*(short *)(pcVar10 + 0x220));
      fVar12 = (float10)*(double *)&REFG(undefined, 0x10920e0);
      (*(float *)(gen_frame + 0x18)) = gen_bits2f(-(int)*(short *)(pcVar10 + 0x222));
      uVar2 = 0;
      pcVar9 = pcVar10 + 0x1a0;
      *(float *)(pcVar10 + 0x1a8) = ((float)GEN_TOF(((float10)(int)*(short *)(pcVar10 + 0x220) / fVar12)));
      (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)*(short *)(pcVar10 + 0x224));
      *(float *)(pcVar10 + 0x1ac) = ((float)GEN_TOF((((float10)GEN_TOD(-(int)*(short *)(pcVar10 + 0x222))) / fVar12)));
      (*(float *)(gen_frame + 0x18)) = gen_bits2f(-(int)*(short *)(pcVar10 + 0x226));
      *(float *)(pcVar10 + 0x1b0) = ((float)GEN_TOF(((float10)(int)*(short *)(pcVar10 + 0x224) / fVar12)));
      (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)(byte)pcVar10[0x21e]);
      *(float *)(pcVar10 + 0x1b4) = ((float)GEN_TOF((((float10)GEN_TOD(-(int)*(short *)(pcVar10 + 0x226))) / fVar12)));
      fVar12 = (float10)*(double *)&REFG(undefined, 0x1088100);
      (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)(byte)pcVar10[0x21f]);
      *(float *)(pcVar10 + 0x1b8) = (float)((float10)(byte)pcVar10[0x21e] / fVar12);
      *(float *)(pcVar10 + 0x1bc) = (float)((float10)(byte)pcVar10[0x21f] / fVar12);
      do {
        if ((uVar2 < 2) || (5 < uVar2)) {
          (*(undefined4 *)(gen_frame + 0x8)) = 0;
          F_0049a9d0((*(int *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)pcVar9,(uint)&(*(undefined4 *)(gen_frame + 0x8)));
        }
        param_1 = (*(int *)(gen_frame + 0xc));
        uVar2 = uVar2 + 1;
        pcVar9 = pcVar9 + 4;
      } while (uVar2 < 0x1c);
      F_0049a9d0((*(int *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)(pcVar10 + 0x1a8),(uint)(pcVar10 + 0x1ac));
      F_0049a9d0(param_1 GEN_EDX_ARG,(uint)(pcVar10 + 0x1b0),(uint)(pcVar10 + 0x1b4));
      fVar14 = REFG(float, 0x1087f04);
      pcVar9 = pcVar10 + 3;
      pfVar4 = (float *)(pcVar10 + 0x34);
      iVar6 = 4;
      do {
        fVar15 = fVar14;
        if (pcVar9[-1] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[-1] = fVar15;
        fVar15 = fVar14;
        if (*pcVar9 == '\0') {
          fVar15 = 0.0;
        }
        *pfVar4 = fVar15;
        fVar15 = fVar14;
        if (pcVar9[1] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[1] = fVar15;
        fVar15 = fVar14;
        if (pcVar9[2] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[2] = fVar15;
        fVar15 = fVar14;
        if (pcVar9[3] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[3] = fVar15;
        fVar15 = fVar14;
        if (pcVar9[4] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[4] = fVar15;
        fVar15 = fVar14;
        if (pcVar9[5] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[5] = fVar15;
        fVar15 = fVar14;
        if (pcVar9[6] == '\0') {
          fVar15 = 0.0;
        }
        pfVar4[6] = fVar15;
        uVar2 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
        pcVar9 = pcVar9 + 8;
        pfVar4 = pfVar4 + 8;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
      puVar5 = (uint *)(pcVar10 + 0xb0);
      iVar6 = 5;
      pfVar4 = (*(float * PTR32 *)(gen_frame + 0x10));
      do {
        if (pfVar4[-1] < 0.0) {
          uVar13 = (uint)gen_fl2bits(pfVar4[-1]) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        *puVar5 = uVar13;
        fVar14 = pfVar4[-1];
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[1] = (uint)gen_fl2bits(fVar14);
        if (*pfVar4 < 0.0) {
          uVar13 = (uint)gen_fl2bits(*pfVar4) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        puVar5[2] = uVar13;
        fVar14 = *pfVar4;
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[3] = (uint)gen_fl2bits(fVar14);
        if (pfVar4[1] < 0.0) {
          uVar13 = (uint)gen_fl2bits(pfVar4[1]) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        puVar5[4] = uVar13;
        fVar14 = pfVar4[1];
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[5] = (uint)gen_fl2bits(fVar14);
        if (pfVar4[2] < 0.0) {
          uVar13 = (uint)gen_fl2bits(pfVar4[2]) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        puVar5[6] = uVar13;
        fVar14 = pfVar4[2];
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[7] = (uint)gen_fl2bits(fVar14);
        if (pfVar4[3] < 0.0) {
          uVar13 = (uint)gen_fl2bits(pfVar4[3]) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        puVar5[8] = uVar13;
        fVar14 = pfVar4[3];
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[9] = (uint)gen_fl2bits(fVar14);
        if (pfVar4[4] < 0.0) {
          uVar13 = (uint)gen_fl2bits(pfVar4[4]) ^ uVar2;
        }
        else {
          uVar13 = 0;
        }
        puVar5[10] = uVar13;
        fVar14 = pfVar4[4];
        if (!(0.0 < fVar14)) {
          fVar14 = 0.0;
        }
        puVar5[0xb] = (uint)gen_fl2bits(fVar14);
        puVar5 = puVar5 + 0xc;
        pfVar4 = pfVar4 + 6;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
LAB_00498603: ;
      piVar3 = (int *)(param_1 + 0x32c);
      param_1 = (*(int *)(gen_frame + 0xc));
      if (*piVar3 != -1) goto LAB_00498650;
    }
    else {
LAB_00498a63: ;
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      pcVar10[4] = '\0';
      pcVar10[5] = '\0';
      pcVar10[6] = '\0';
      pcVar10[7] = '\0';
      pcVar10[8] = '\0';
      pcVar10[9] = '\0';
      pcVar10[10] = '\0';
      pcVar10[0xb] = '\0';
      pcVar10[0xc] = '\0';
      pcVar10[0xd] = '\0';
      pcVar10[0xe] = '\0';
      pcVar10[0xf] = '\0';
      pcVar10[0x10] = '\0';
      pcVar10[0x11] = '\0';
      pcVar10[0x12] = '\0';
      pcVar10[0x13] = '\0';
      pcVar10[0x14] = '\0';
      pcVar10[0x15] = '\0';
      pcVar10[0x16] = '\0';
      pcVar10[0x17] = '\0';
      pcVar10[0x18] = '\0';
      pcVar10[0x19] = '\0';
      pcVar10[0x1a] = '\0';
      pcVar10[0x1b] = '\0';
      pcVar10[0x1c] = '\0';
      pcVar10[0x1d] = '\0';
      pcVar10[0x1e] = '\0';
      pcVar10[0x1f] = '\0';
      pcVar10[0x20] = '\0';
      pcVar10[0x21] = '\0';
      pcVar10[0x1a0] = '\0';
      pcVar10[0x1a1] = '\0';
      pcVar10[0x1a2] = '\0';
      pcVar10[0x1a3] = '\0';
      pcVar10[0x1a4] = '\0';
      pcVar10[0x1a5] = '\0';
      pcVar10[0x1a6] = '\0';
      pcVar10[0x1a7] = '\0';
      pcVar10[0x1a8] = '\0';
      pcVar10[0x1a9] = '\0';
      pcVar10[0x1aa] = '\0';
      pcVar10[0x1ab] = '\0';
      pcVar10[0x1ac] = '\0';
      pcVar10[0x1ad] = '\0';
      pcVar10[0x1ae] = '\0';
      pcVar10[0x1af] = '\0';
      pcVar10[0x1b0] = '\0';
      pcVar10[0x1b1] = '\0';
      pcVar10[0x1b2] = '\0';
      pcVar10[0x1b3] = '\0';
      pcVar10[0x1b4] = '\0';
      pcVar10[0x1b5] = '\0';
      pcVar10[0x1b6] = '\0';
      pcVar10[0x1b7] = '\0';
      pcVar10[0x1b8] = '\0';
      pcVar10[0x1b9] = '\0';
      pcVar10[0x1ba] = '\0';
      pcVar10[0x1bb] = '\0';
      pcVar10[0x1bc] = '\0';
      pcVar10[0x1bd] = '\0';
      pcVar10[0x1be] = '\0';
      pcVar10[0x1bf] = '\0';
      pcVar10[0x1c0] = '\0';
      pcVar10[0x1c1] = '\0';
      pcVar10[0x1c2] = '\0';
      pcVar10[0x1c3] = '\0';
      pcVar10[0x1c4] = '\0';
      pcVar10[0x1c5] = '\0';
      pcVar10[0x1c6] = '\0';
      pcVar10[0x1c7] = '\0';
      pcVar10[0x1c8] = '\0';
      pcVar10[0x1c9] = '\0';
      pcVar10[0x1ca] = '\0';
      pcVar10[0x1cb] = '\0';
      pcVar10[0x1cc] = '\0';
      pcVar10[0x1cd] = '\0';
      pcVar10[0x1ce] = '\0';
      pcVar10[0x1cf] = '\0';
      pcVar10[0x1d0] = '\0';
      pcVar10[0x1d1] = '\0';
      pcVar10[0x1d2] = '\0';
      pcVar10[0x1d3] = '\0';
      pcVar10[0x1d4] = '\0';
      pcVar10[0x1d5] = '\0';
      pcVar10[0x1d6] = '\0';
      pcVar10[0x1d7] = '\0';
      pcVar10[0x1d8] = '\0';
      pcVar10[0x1d9] = '\0';
      pcVar10[0x1da] = '\0';
      pcVar10[0x1db] = '\0';
      pcVar10[0x1dc] = '\0';
      pcVar10[0x1dd] = '\0';
      pcVar10[0x1de] = '\0';
      pcVar10[0x1df] = '\0';
      pcVar10[0x1e0] = '\0';
      pcVar10[0x1e1] = '\0';
      pcVar10[0x1e2] = '\0';
      pcVar10[0x1e3] = '\0';
      pcVar10[0x1e4] = '\0';
      pcVar10[0x1e5] = '\0';
      pcVar10[0x1e6] = '\0';
      pcVar10[0x1e7] = '\0';
      pcVar10[0x1e8] = '\0';
      pcVar10[0x1e9] = '\0';
      pcVar10[0x1ea] = '\0';
      pcVar10[0x1eb] = '\0';
      pcVar10[0x1ec] = '\0';
      pcVar10[0x1ed] = '\0';
      pcVar10[0x1ee] = '\0';
      pcVar10[0x1ef] = '\0';
      pcVar10[0x1f0] = '\0';
      pcVar10[0x1f1] = '\0';
      pcVar10[0x1f2] = '\0';
      pcVar10[499] = '\0';
      pcVar10[500] = '\0';
      pcVar10[0x1f5] = '\0';
      pcVar10[0x1f6] = '\0';
      pcVar10[0x1f7] = '\0';
      pcVar10[0x1f8] = '\0';
      pcVar10[0x1f9] = '\0';
      pcVar10[0x1fa] = '\0';
      pcVar10[0x1fb] = '\0';
      pcVar10[0x1fc] = '\0';
      pcVar10[0x1fd] = '\0';
      pcVar10[0x1fe] = '\0';
      pcVar10[0x1ff] = '\0';
      pcVar10[0x200] = '\0';
      pcVar10[0x201] = '\0';
      pcVar10[0x202] = '\0';
      pcVar10[0x203] = '\0';
      pcVar10[0x204] = '\0';
      pcVar10[0x205] = '\0';
      pcVar10[0x206] = '\0';
      pcVar10[0x207] = '\0';
      pcVar10[0x208] = '\0';
      pcVar10[0x209] = '\0';
      pcVar10[0x20a] = '\0';
      pcVar10[0x20b] = '\0';
      pcVar10[0x20c] = '\0';
      pcVar10[0x20d] = '\0';
      pcVar10[0x20e] = '\0';
      pcVar10[0x20f] = '\0';
      pcVar10[0x210] = '\0';
      pcVar10[0x211] = '\0';
      pcVar10[0x212] = '\0';
      pcVar10[0x213] = '\0';
      pcVar10[0x214] = '\0';
      pcVar10[0x215] = '\0';
      pcVar10[0x216] = '\0';
      pcVar10[0x217] = '\0';
      pcVar10 = pcVar10 + 0x30;
      for (iVar6 = 0x5c; iVar6 != 0; iVar6 = iVar6 - 1) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10 = pcVar10 + 4;
      }
    }
  }
  *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + 1;
  if (299 < *(int *)(param_1 + 0x330)) {
    *(undefined4 *)(param_1 + 0x330) = 0;
    *(undefined1 *)(param_1 + 0x329) = 0;
    *(undefined4 *)(param_1 + 0x334) = 5;
    F_004cf9e0((undefined *)(param_1 + 0x18) GEN_EDX_ARG,0,0xfffffff1,0,0);
  }
LAB_00498650: ;
  uVar2 = F_00497800(param_1 GEN_EDX_ARG,param_2,0);
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00498b90 */
GEN_FRAME uint GEN_THISCALL F_00498b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x498b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppuVar3;
  byte * pbVar4;
  int iVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  byte * pbVar8;
  bool bVar9;
  ulonglong uVar10;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  puVar2 = (undefined4 *)F_00414500(*(undefined4 *)((int)this + 0x324) GEN_EDX_FWD,0x49);
  *(undefined4 *)(param_1 + 0x730) = *puVar2;
  puVar2 = (undefined4 *)F_00414500(*(undefined4 *)((int)this + 0x324) GEN_EDX_ARG,0x47);
  *(undefined4 *)(param_1 + 0x734) = *puVar2;
  puVar2 = (undefined4 *)F_00414500(*(undefined4 *)((int)this + 0x324) GEN_EDX_ARG,0x4a);
  *(undefined4 *)(param_1 + 0x750) = *puVar2;
  F_00413d50(((undefined1 *)(gen_frame + 0x10)),param_1 + 0x3b8);
  if (*(char *)(param_1 + 1) == '\x01') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"{34,35,32,33,39,38,36,37,43,42,40,41,9,7,6,8,4,45,2,5,47,3,0,1}",
                 REFG(undefined4, 0x108cc50));
    F_0049ac90(param_1 + 0x738,0x18,((undefined1 *)(gen_frame + 0x64)));
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"{34,35,32,33,39,38,36,37,43,42,40,41,9,7,6,8,4,45,2,5,47,3,0,1}",
                 REFG(undefined4, 0x108cc50));
    F_0049ac90(param_1 + 0x754,0x18,((undefined1 *)(gen_frame + 0x64)));
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  }
  else if (*(int *)(param_1 + 0x724) != 0) {
    (*(int *)(gen_frame + 0xc)) = 0;
    if (REFG(undefined * PTR32, 0x1300c40) != (undefined *)0x0) {
      ppuVar3 = &REFG(undefined * PTR32, 0x1300c40);
      do {
        pbVar8 = *ppuVar3;
        pbVar4 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00498cd0: ;
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00498cd5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00498cd0;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00498cd5: ;
        if (iVar5 == 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x1300c44))[(int)((*(int *)(gen_frame + 0xc)) * 2)],
                       REFG(undefined4, 0x108cc50));
          F_0049ac90(param_1 + 0x738,0x18,((undefined1 *)(gen_frame + 0x64)));
          F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
          F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x1300c44))[(int)((*(int *)(gen_frame + 0xc)) * 2)],
                       REFG(undefined4, 0x108cc50));
          F_0049ac90(param_1 + 0x754,0x18,((undefined1 *)(gen_frame + 0x64)));
          F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
          goto LAB_00498d1a;
        }
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        ppuVar3 = &REFG(undefined * PTR32, 0x1300c40) + (*(int *)(gen_frame + 0xc)) * 2;
      } while ((&REFG(undefined * PTR32, 0x1300c40))[(int)((*(int *)(gen_frame + 0xc)) * 2)] != (undefined *)0x0)
      ;
    }
    puVar7 = (undefined1 *)(param_1 + 0x754);
    puVar6 = &REFG(undefined1, 0x1091fc8);
    iVar5 = 0x18;
    do {
      puVar7[-0x1c] = *puVar6;
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 4;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
LAB_00498d1a: ;
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return (uint)uVar10;
}

/* ref: Client::System::Input::PadDevice::vf10 */
GEN_FRAME uint GEN_THISCALL F_00498db0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x498db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00498b90(this GEN_EDX_FWD,*(int *)(this + 0x32c) * 0x770 + *(int *)(this + 0x34));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,*(int *)(this + 0x32c) * 0x770 + 0x738 + *(int *)(this + 0x34),REFG(undefined4, 0x108cc50))
  ;
  F_0049ac90(this + 0x204,0x18,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00498e40 */
GEN_NOFRAME uint GEN_THISCALL F_00498e40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x498e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34)) / 0x770;
  if (0 < (int)uVar1) {
    iVar3 = 0;
    uVar2 = uVar1;
    do {
      uVar1 = F_00498b90(this GEN_EDX_FWD,*(int *)((int)this + 0x34) + iVar3);
      iVar3 = iVar3 + 0x770;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return uVar1;
}

/* ref: FUN_00498e80 */
GEN_FRAME uint GEN_THISCALL F_00498e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x498e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  HANDLE pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x109202c));
  F_00b10a80((undefined *)((int)this + 4) GEN_EDX_FWD);
  F_00b105f0((undefined *)((int)this + 8) GEN_EDX_ARG,0x10,1);
  F_004cefe0((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x109211c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1092110));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[1])REFP(0x1092108));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10920ec));
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  F_00976f30((undefined *)((int)this + 0x44) GEN_EDX_ARG);
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 800) = pvVar1;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined1 *)((int)this + 0x328) = 0;
  *(undefined1 *)((int)this + 0x329) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x334) = 5;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined1 *)((int)this + 0x33d) = 0;
  REFG(char * PTR32, 0x1372610) = "<GamePad Settings>";
  REFG(char * PTR32, 0x1372614) = "InstanceGuid";
  REFG(char * PTR32, 0x1372618) = "ProductGuid";
  REFG(char * PTR32, 0x137261c) = "AlwaysInput";
  REFG(char * PTR32, 0x1372620) = "DeadArea";
  REFG(char * PTR32, 0x1372624) = "Alias";
  REFG(char * PTR32, 0x1372628) = "ForceFeedBack";
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  return (uint)this;
}

/* ref: Client::System::Input::PadDevice::vf3 */
GEN_FRAME unsigned int GEN_THISCALL F_00498fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x498fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int local_8;
  
  local_8 = (*(int *)(this + 0x38) - *(int *)(this + 0x34)) / 0x770;
  if (local_8 != 0) {
    iVar2 = 0;
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x724 + *(int *)(this + 0x34))));
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_FWD);
        piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x724 + *(int *)(this + 0x34))));
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
          *((undefined4 *)GEN_TOP((iVar2 + 0x724 + *(int *)(this + 0x34)))) = 0;
        }
      }
      iVar2 = iVar2 + 0x770;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  if (*(int *)(this + 0x34) != *(int *)(this + 0x38)) {
    *(int *)(this + 0x38) = *(int *)(this + 0x34);
  }
  *(undefined4 *)(this + 0x32c) = 0xffffffff;
  return 0;
}

/* ref: FUN_00499070 */
GEN_FRAME uint GEN_THISCALL F_00499070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x499070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb70];
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  uint * puVar6;
  undefined4 * puVar7;
  uint * puVar8;
  
  ((uint *)(gen_frame + 0xb3c))[0xb] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb6c);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  ((bool *)(gen_frame + 0x4c))[0] = false;
  F_00c48350(((bool *)(gen_frame + 0x4c)) + 1,0,0x76f);
  (*(byte *)(gen_frame + 0x7b8)) = 0;
  bVar2 = F_004970c0(param_1 + 0x14);
  if ((bVar2 == 0) || (3 < REFG(undefined4, 0x137262c))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 0xc))))(REFG(int * PTR32, 0x14c0d40) GEN_EDX_ARG,param_1 + 4,&(*(int * PTR32 *)(gen_frame + 0x770)),0);
    if (((int)uVar3 < 0) ||
       (((uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0x34))
                            ((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x434) + 8))),9),
         (int)uVar3 < 0 ||
         (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0x2c))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG,&REFG(undefined, 0x10919f8)), (int)uVar3 < 0)) ||
        (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG,((code *)REFP(0x496d10)),((bool *)(gen_frame + 0x4c)),3),
        (int)uVar3 < 0)))) {
      if ((*(int * PTR32 *)(gen_frame + 0x770)) != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 8))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG);
      }
    }
    else {
      ((uint *)(gen_frame + 0xb3c))[0] = 0x2c;
      ((uint *)(gen_frame + 0xb3c))[1] = 0;
      ((uint *)(gen_frame + 0xb3c))[2] = 0;
      ((uint *)(gen_frame + 0xb3c))[3] = 0;
      ((uint *)(gen_frame + 0xb3c))[4] = 0;
      ((uint *)(gen_frame + 0xb3c))[5] = 0;
      ((uint *)(gen_frame + 0xb3c))[6] = 0;
      ((uint *)(gen_frame + 0xb3c))[7] = 0;
      ((uint *)(gen_frame + 0xb3c))[8] = 0;
      ((uint *)(gen_frame + 0xb3c))[9] = 0;
      ((uint *)(gen_frame + 0xb3c))[10] = 0;
      (*(undefined4 *)(gen_frame + 0x7bc)) = 0x244;
      F_00c48350(((undefined1 *)(gen_frame + 0x7c0)),0,0x240);
      (*(undefined4 *)(gen_frame + 0xa00)) = 0x13c;
      F_00c48350(((undefined1 *)(gen_frame + 0xa04)),0,0x138);
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0x3c))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x7bc)));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xa00)),0,0);
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG,((uint *)(gen_frame + 0xb3c)));
      pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x48));
      ((bool *)(gen_frame + 0x4c))[0] = (((uint *)(gen_frame + 0xb3c))[1] & 10) != 0;
      puVar5 = &(*(undefined4 *)(gen_frame + 0x7bc));
      puVar7 = ((undefined4 *)(gen_frame + 0x3f0));
      for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar5 = &(*(undefined4 *)(gen_frame + 0xa00));
      puVar7 = ((undefined4 *)(gen_frame + 0x634));
      for (iVar4 = 0x4f; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = ((uint *)(gen_frame + 0xb3c));
      puVar8 = ((uint *)(gen_frame + 0x3c4));
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      bVar2 = F_00496c40(((undefined1 *)(gen_frame + 0x7d0)));
      (*(byte *)(gen_frame + 0x7b8)) = bVar2;
      if ((*(int *)(gen_frame + 0x78)) != 0) {
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0x20;
        (*(undefined4 *)(gen_frame + 0x3c)) = 0x30;
        (*(undefined * PTR32 *)(gen_frame + 0x48)) = (undefined *)0x0;
        F_00c48350(&(*(undefined4 *)(gen_frame + 0x4)),0,0x34);
        (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x40));
        (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined * PTR32 *)(gen_frame + 0x48));
        (*(undefined4 *)(gen_frame + 0x0)) = 0x38;
        (*(undefined4 *)(gen_frame + 0x4)) = 0x12;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 10000;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x78));
        (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x38));
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 4;
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0x48))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG,&REFG(undefined, 0x10818f4),&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x774)),0);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG);
      F_0049b2e0((undefined *)((int)pvVar1 + 0x34) GEN_EDX_ARG,((bool *)(gen_frame + 0x4c)));
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 0xc))))(REFG(int * PTR32, 0x14c0d40) GEN_EDX_ARG,param_1 + 4,&(*(int * PTR32 *)(gen_frame + 0x770)),0);
    if (-1 < (int)uVar3) {
      ((uint *)(gen_frame + 0xb3c))[1] = 0;
      ((uint *)(gen_frame + 0xb3c))[2] = 0;
      ((uint *)(gen_frame + 0xb3c))[3] = 0;
      ((uint *)(gen_frame + 0xb3c))[4] = 0;
      ((uint *)(gen_frame + 0xb3c))[5] = 0;
      ((uint *)(gen_frame + 0xb3c))[6] = 0;
      ((uint *)(gen_frame + 0xb3c))[7] = 0;
      ((uint *)(gen_frame + 0xb3c))[8] = 0;
      ((uint *)(gen_frame + 0xb3c))[9] = 0;
      ((uint *)(gen_frame + 0xb3c))[10] = 0;
      ((uint *)(gen_frame + 0xb3c))[0] = 0x2c;
      (*(undefined4 *)(gen_frame + 0x7bc)) = 0x244;
      F_00c48350(((undefined1 *)(gen_frame + 0x7c0)),0,0x240);
      (*(undefined4 *)(gen_frame + 0xa00)) = 0x13c;
      F_00c48350(((undefined1 *)(gen_frame + 0xa04)),0,0x138);
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0x3c))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x7bc)));
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xa00)),0,0);
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG,((uint *)(gen_frame + 0xb3c)));
      puVar5 = &(*(undefined4 *)(gen_frame + 0x7bc));
      puVar7 = ((undefined4 *)(gen_frame + 0x3f0));
      for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar5 = &(*(undefined4 *)(gen_frame + 0xa00));
      puVar7 = ((undefined4 *)(gen_frame + 0x634));
      for (iVar4 = 0x4f; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = ((uint *)(gen_frame + 0xb3c));
      puVar8 = ((uint *)(gen_frame + 0x3c4));
      for (iVar4 = 0xb; this = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    if ((*(int * PTR32 *)(gen_frame + 0x770)) != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x770)) + 8))((*(int * PTR32 *)(gen_frame + 0x770)) GEN_EDX_ARG);
      (*(int * PTR32 *)(gen_frame + 0x770)) = (int *)0x0;
    }
    (*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x137262c);
    REFG(undefined4, 0x137262c) = REFG(undefined4, 0x137262c) + 1;
    ((bool *)(gen_frame + 0x4c))[1] = true;
    F_0049b2e0((undefined *)((int)this + 0x34) GEN_EDX_ARG,((bool *)(gen_frame + 0x4c)));
  }
  F_00c47745(((uint *)(gen_frame + 0xb3c))[0xb] ^ (uint)(uint)(gen_frame + 0xb6c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004994d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004994d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4994d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x109211c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1092110));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[1])REFP(0x1092108));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[6])REFP(0x10920ec));
  if ((*(char *)((int)this + 0x329) == '\0') && (*(int *)((int)this + 0x334) != 0)) {
    *(undefined1 *)((int)this + 0x2c) = 1;
    gen_imp_SetEvent(*(HANDLE *)((int)this + 800));
    F_004cf020((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  }
  F_00498fb0(this GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 800));
  iVar1 = *(int *)((int)this + 0x34);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x3c) - iVar1) / 0x770) * 0x770,0x12d);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  F_004cf880((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  F_00b105d0((undefined *)((int)this + 8) GEN_EDX_ARG);
  F_00b10af0((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x109202c));
  return;
}

/* ref: FUN_004995c0 */
GEN_FRAME uint GEN_THISCALL F_004995c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4995c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  uint * this_00;
  uint uVar1;
  
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (undefined4 *)0xc;
  (*(char * PTR32 *)(gen_frame + 0x4c)) = (char *)0x4995d6;
  this_00 = (uint *)F_00406b90(0xc,0,0);
  if (this_00 == (uint *)0x0) {
    this_00 = (uint *)0x0;
  }
  else {
    (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x131;
    (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (undefined4 *)0x28;
    this_00[1] = 0;
    (*(char * PTR32 *)(gen_frame + 0x4c)) = (char *)0x4995f4;
    uVar1 = F_004296a0(0x28,0,0x131);
    *this_00 = uVar1;
    *(uint *)uVar1 = uVar1;
    *(uint *)(*this_00 + 4) = *this_00;
  }
  (*(char * PTR32 *)(gen_frame + 0x58)) = "<GamePad Settings>";
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x499611;
  F_004147e0(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,"<GamePad Settings>");
  (*(char * PTR32 *)(gen_frame + 0x58)) = ((undefined1 *)(gen_frame + 0xbc));
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x49961c;
  F_00423530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xbc)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x499624;
  F_00415690(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0xffffffff;
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (undefined4 *)*param_1;
  (*(char * PTR32 *)(gen_frame + 0x4c)) = "PadGuid";
  (*(undefined4 *)(gen_frame + 0x48)) = 0x49963b;
  F_00414850(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,"PadGuid",*param_1,0,0xffffffff);
  (*(char * PTR32 *)(gen_frame + 0x58)) = ((undefined1 *)(gen_frame + 0xbc));
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x499646;
  F_00423530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xbc)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x49964e;
  F_00415690(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)(param_1 + 1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 *)(gen_frame + 0x68));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (undefined4 *)0x499661;
  F_00413d50(((undefined1 *)(gen_frame + 0x68)),param_1 + 1);
  F_0042cbc0((gen_frame + 0x8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x68)));
  F_00414960(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,"InstanceGuid",(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
               (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),
               (*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(char * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)),(*(undefined1 * PTR32 *)(gen_frame + 0x54)),(*(char * PTR32 *)(gen_frame + 0x58)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x499684;
  F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = ((undefined1 *)(gen_frame + 0xbc));
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x49968f;
  F_00423530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xbc)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x499697;
  F_00415690(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)(param_1 + 5);
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 *)(gen_frame + 0x68));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (undefined4 *)0x4996aa;
  F_00413d50(((undefined1 *)(gen_frame + 0x68)),param_1 + 5);
  F_0042cbc0((gen_frame + 0x8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x68)));
  F_00414960(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,"ProductGuid",(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
               (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),
               (*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(char * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)),(*(undefined1 * PTR32 *)(gen_frame + 0x54)),(*(char * PTR32 *)(gen_frame + 0x58)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x4996cd;
  F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = ((undefined1 *)(gen_frame + 0xbc));
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x4996d8;
  F_00423530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xbc)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x4996e0;
  F_00415690(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (undefined4 *)param_1[9];
  (*(char * PTR32 *)(gen_frame + 0x4c)) = "AlwaysInput";
  (*(undefined4 *)(gen_frame + 0x48)) = 0x4996f5;
  F_00414850(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,"AlwaysInput",param_1[9],0,1);
  (*(char * PTR32 *)(gen_frame + 0x58)) = ((undefined1 *)(gen_frame + 0xbc));
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x499700;
  F_00423530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xbc)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x499708;
  F_00415690(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = ((char *)(uintptr_t)gen_fl2bits((float)((float)(float10)1)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = ((undefined1 *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (undefined4 *)param_1[10];
  (*(char * PTR32 *)(gen_frame + 0x4c)) = "DeadArea";
  (*(undefined4 *)(gen_frame + 0x48)) = 0x49972a;
  F_004148d0(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,"DeadArea",GEN_TOF(gen_bits2f(param_1[10])),(float)(float10)0,(float)(float10)1);
  (*(char * PTR32 *)(gen_frame + 0x58)) = ((undefined1 *)(gen_frame + 0xbc));
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x499735;
  F_00423530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xbc)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x49973d;
  F_00415690(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = &REFG(undefined, 0x1091ed4);
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x18;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = param_1 + 0xb;
  (*(char * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)(gen_frame + 0x68));
  (*(undefined4 *)(gen_frame + 0x48)) = 0x499757;
  F_0049a760(((undefined1 *)(gen_frame + 0x68)),param_1 + 0xb,0x18,&REFG(undefined, 0x1091ed4));
  F_0042cbc0((gen_frame + 0x8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x68)));
  F_00414960(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,"Alias",(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
               (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),
               (*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(char * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x50)),(*(undefined1 * PTR32 *)(gen_frame + 0x54)),(*(char * PTR32 *)(gen_frame + 0x58)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x49977a;
  F_0042c880(((undefined1 *)(gen_frame + 0x68)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = ((undefined1 *)(gen_frame + 0xbc));
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x499785;
  F_00423530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xbc)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x49978d;
  F_00415690(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (undefined4 *)param_1[0x11];
  (*(char * PTR32 *)(gen_frame + 0x4c)) = "ForceFeedBack";
  (*(undefined4 *)(gen_frame + 0x48)) = 0x4997a2;
  F_00414850(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG,"ForceFeedBack",param_1[0x11],0,1);
  (*(char * PTR32 *)(gen_frame + 0x58)) = ((undefined1 *)(gen_frame + 0xbc));
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x4997ad;
  F_00423530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xbc)));
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)0x4997b5;
  F_00415690(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x58)) = (char *)this_00;
  (*(undefined1 * PTR32 *)(gen_frame + 0x54)) = (undefined1 *)0x4997c1;
  uVar1 = F_0041fa70(*(undefined * PTR32 *)((int)this + 0x324) GEN_EDX_ARG,this_00);
  return uVar1;
}

/* ref: FUN_004997d0 */
GEN_FRAME uint GEN_THISCALL F_004997d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4997d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code * pcVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int * piVar8;
  uint uVar9;
  byte * pbVar10;
  int iVar11;
  int iVar12;
  byte * pbVar13;
  byte * pbVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  ulonglong uVar18;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  uVar2 = *(undefined4 *)((int)this + 0x1e0);
  uVar3 = *(undefined4 *)((int)this + 0x1e4);
  iVar11 = *(int *)((int)this + 0x200);
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x1dc);
  (*(undefined4 *)(gen_frame + 0x28)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)((int)this + 0x1e8);
  uVar2 = *(undefined4 *)((int)this + 500);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x1ec);
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)((int)this + 0x1f8);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)((int)this + 0x1f0);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(int *)(gen_frame + 0x44)) = *(int *)((int)this + 0x1fc);
  (*(int *)(gen_frame + 0x48)) = iVar11;
  F_00c4d027(((undefined1 *)(gen_frame + 0x4c)),0x18,(undefined *)((int)this + 0x204),0x18);
  (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0x21c);
  F_00497de0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),1);
  puVar6 = (undefined4 *)F_00413d30(*(undefined4 *)((int)this + 0x324) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x10)) = 0;
  puVar7 = (undefined4 *)F_004296a0(0xc,0,0x131);
  *puVar7 = puVar7;
  puVar7[1] = puVar7;
  puVar6 = (undefined4 *)*puVar6;
  uVar2 = *puVar6;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar7;
  F_0049b1f0(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,*puVar7,uVar2,puVar6,(*(int * PTR32 *)(gen_frame + 0x1c)));
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  if ((*(int *)(gen_frame + 0x10)) != 0) {
    puVar7 = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar7;
    piVar8 = (int *)F_00414500(*(undefined4 *)((int)this + 0x324) GEN_EDX_ARG,0x49);
    (*(int *)(gen_frame + 0x44)) = *piVar8;
    piVar8 = (int *)F_00414500(*(undefined4 *)((int)this + 0x324) GEN_EDX_ARG,0x47);
    (*(int *)(gen_frame + 0x48)) = *piVar8;
    uVar9 = 0;
    do {
      ((undefined1 *)(gen_frame + 0x4c))[(int)(uVar9)] = (&REFG(undefined1, 0x1091fc8))[(int)(uVar9 * 4)];
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0x18);
    piVar8 = (int *)F_00414500(*(undefined4 *)((int)this + 0x324) GEN_EDX_ARG,0x4a);
    (*(int *)(gen_frame + 0x64)) = *piVar8;
    if (puVar7 != puVar6) {
      do {
        puVar6 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[2]));
        pbVar10 = (byte *)puVar6[5];
        pbVar13 = REFG(byte * PTR32, 0x1372610);
        do {
          bVar1 = *pbVar10;
          bVar17 = bVar1 < *pbVar13;
          if (bVar1 != *pbVar13) {
LAB_004999a7: ;
            iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_004999ac;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar17 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_004999a7;
          pbVar10 = pbVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar11 = 0;
LAB_004999ac: ;
        if (iVar11 == 0) {
          piVar8 = (int *)*puVar6;
          if (piVar8 != *(int * PTR32 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[2]) {
            do {
              pbVar10 = (byte *)piVar8[5];
              pbVar13 = pbVar10;
              pbVar14 = REFG(byte * PTR32, 0x1372614);
              do {
                bVar1 = *pbVar13;
                bVar17 = bVar1 < *pbVar14;
                if (bVar1 != *pbVar14) {
LAB_004999f0: ;
                  iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                  goto LAB_004999f5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar13[1];
                bVar17 = bVar1 < pbVar14[1];
                if (bVar1 != pbVar14[1]) goto LAB_004999f0;
                pbVar13 = pbVar13 + 2;
                pbVar14 = pbVar14 + 2;
              } while (bVar1 != 0);
              iVar11 = 0;
LAB_004999f5: ;
              pbVar13 = pbVar10;
              pbVar14 = REFG(byte * PTR32, 0x1372618);
              if (iVar11 == 0) {
                F_004204c0(&(*(undefined4 *)(gen_frame + 0x24)),piVar8[7]);
              }
              else {
                do {
                  bVar1 = *pbVar13;
                  bVar17 = bVar1 < *pbVar14;
                  if (bVar1 != *pbVar14) {
LAB_00499a40: ;
                    iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                    goto LAB_00499a45;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar13[1];
                  bVar17 = bVar1 < pbVar14[1];
                  if (bVar1 != pbVar14[1]) goto LAB_00499a40;
                  pbVar14 = pbVar14 + 2;
                  pbVar13 = pbVar13 + 2;
                } while (bVar1 != 0);
                iVar11 = 0;
LAB_00499a45: ;
                pbVar13 = pbVar10;
                pbVar14 = REFG(byte * PTR32, 0x137261c);
                if (iVar11 == 0) {
                  F_004204c0(&(*(undefined4 *)(gen_frame + 0x34)),piVar8[7]);
                }
                else {
                  do {
                    bVar1 = *pbVar13;
                    bVar17 = bVar1 < *pbVar14;
                    if (bVar1 != *pbVar14) {
LAB_00499a90: ;
                      iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_00499a95;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar13[1];
                    bVar17 = bVar1 < pbVar14[1];
                    if (bVar1 != pbVar14[1]) goto LAB_00499a90;
                    pbVar14 = pbVar14 + 2;
                    pbVar13 = pbVar13 + 2;
                  } while (bVar1 != 0);
                  iVar11 = 0;
LAB_00499a95: ;
                  pbVar13 = pbVar10;
                  pbVar14 = REFG(byte * PTR32, 0x1372620);
                  if (iVar11 == 0) {
                    (*(int *)(gen_frame + 0x44)) = piVar8[7];
                  }
                  else {
                    do {
                      bVar1 = *pbVar13;
                      bVar17 = bVar1 < *pbVar14;
                      if (bVar1 != *pbVar14) {
LAB_00499ad0: ;
                        iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                        goto LAB_00499ad5;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar13[1];
                      bVar17 = bVar1 < pbVar14[1];
                      if (bVar1 != pbVar14[1]) goto LAB_00499ad0;
                      pbVar14 = pbVar14 + 2;
                      pbVar13 = pbVar13 + 2;
                    } while (bVar1 != 0);
                    iVar11 = 0;
LAB_00499ad5: ;
                    pbVar13 = pbVar10;
                    pbVar14 = REFG(byte * PTR32, 0x1372624);
                    if (iVar11 == 0) {
                      (*(int *)(gen_frame + 0x48)) = piVar8[7];
                    }
                    else {
                      do {
                        bVar1 = *pbVar13;
                        bVar17 = bVar1 < *pbVar14;
                        if (bVar1 != *pbVar14) {
LAB_00499b13: ;
                          iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                          goto LAB_00499b18;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar13[1];
                        bVar17 = bVar1 < pbVar14[1];
                        if (bVar1 != pbVar14[1]) goto LAB_00499b13;
                        pbVar14 = pbVar14 + 2;
                        pbVar13 = pbVar13 + 2;
                      } while (bVar1 != 0);
                      iVar11 = 0;
LAB_00499b18: ;
                      pbVar13 = REFG(byte * PTR32, 0x1372628);
                      if (iVar11 == 0) {
                        F_0049ac90(((undefined1 *)(gen_frame + 0x4c)),0x18,piVar8[7]);
                      }
                      else {
                        do {
                          bVar1 = *pbVar10;
                          bVar17 = bVar1 < *pbVar13;
                          if (bVar1 != *pbVar13) {
LAB_00499b60: ;
                            iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                            goto LAB_00499b65;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar10[1];
                          bVar17 = bVar1 < pbVar13[1];
                          if (bVar1 != pbVar13[1]) goto LAB_00499b60;
                          pbVar10 = pbVar10 + 2;
                          pbVar13 = pbVar13 + 2;
                        } while (bVar1 != 0);
                        iVar11 = 0;
LAB_00499b65: ;
                        if (iVar11 == 0) {
                          (*(int *)(gen_frame + 0x64)) = piVar8[7];
                        }
                      }
                    }
                  }
                }
              }
              piVar8 = (int *)*piVar8;
            } while (piVar8 != *(int * PTR32 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[2]);
          }
          F_00497de0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),0);
        }
        puVar6 = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18));
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar6;
      } while (puVar6 != (*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  iVar11 = (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34)) / 0x770;
  if (0 < iVar11) {
    iVar16 = 0;
    do {
      iVar12 = (*(int * PTR32 *)(gen_frame + 0x1c))[0xd] + iVar16;
      if (*(char *)(iVar12 + 0x72c) == '\0') {
        (*(undefined4 *)(gen_frame + 0x20)) = 0x2011ff14;
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar12 + 0x3a8);
        (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(iVar12 + 0x3ac);
        (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(iVar12 + 0x3b0);
        (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar12 + 0x3b4);
        (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar12 + 0x3b8);
        (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar12 + 0x3bc);
        (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(iVar12 + 0x3c0);
        (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar12 + 0x3c4);
        (*(int *)(gen_frame + 0x44)) = *(int *)(iVar12 + 0x730);
        (*(int *)(gen_frame + 0x48)) = *(int *)(iVar12 + 0x734);
        iVar15 = 0;
        do {
          ((undefined1 *)(gen_frame + 0x4c))[(int)(iVar15)] = *(undefined1 *)(iVar12 + 0x738 + iVar15);
          iVar15 = iVar15 + 1;
        } while (iVar15 < 0x18);
        (*(int *)(gen_frame + 0x64)) = *(int *)(iVar12 + 0x750);
        F_004995c0((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)));
      }
      iVar16 = iVar16 + 0x770;
      iVar11 = iVar11 - 1;
    } while (iVar11 != 0);
  }
  piVar8 = (*(int * PTR32 *)(gen_frame + 0x1c));
  if ((*(int * PTR32 *)(gen_frame + 0x1c))[0xcb] == -1) {
    pcVar4 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x20);
    (*(int * PTR32 *)(gen_frame + 0x1c))[0xcb] = 0;
    (*pcVar4)((*(int * PTR32 *)(gen_frame + 0x1c)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x24))(piVar8 GEN_EDX_ARG);
  }
  puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  puVar6 = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  *(*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  while (puVar6 != puVar7) {
    puVar5 = (undefined4 *)*puVar6;
    F_00429760(puVar6,0xc,0x131);
    puVar6 = puVar5;
  }
  uVar18 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0xc,0x131);
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c) GEN_EDX_ARG);
  return (uint)uVar18;
}

/* ref: FUN_00499d40 */
GEN_FRAME uint GEN_STDCALL F_00499d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x499d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00499070(param_2 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00499d60 */
GEN_FRAME byte GEN_THISCALL F_00499d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x499d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  ((int *)(gen_frame + 0x18))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((int *)(gen_frame + 0x18))[1] = 0;
  ((int *)(gen_frame + 0x18))[2] = 0;
  ((int *)(gen_frame + 0x18))[3] = 0;
  piVar2 = ((int *)(gen_frame + 0x18));
  iVar4 = 0;
  ((int *)(gen_frame + 0x18))[0] = 0;
  uVar3 = 0x10;
  iVar1 = 0x1dc - (int)piVar2;
  do {
    if (*(int *)((int)this + iVar1 + (int)piVar2) != *piVar2) break;
    uVar3 = uVar3 - 4;
    piVar2 = piVar2 + 1;
  } while (3 < uVar3);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  gen_imp_XInputEnable(1);
  F_0049b030((undefined *)((int)this + 0x34) GEN_EDX_ARG,8);
  REFG(undefined4, 0x137262c) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0xffffffff;
  do {
    gen_imp_XInputGetState(iVar4,((undefined1 *)(gen_frame + 0x8)));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14c0d40) + 0x10))))(REFG(int * PTR32, 0x14c0d40) GEN_EDX_ARG,4,((code *)REFP(0x499d40)),this,1);
  if ((int)uVar3 < 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG);
  }
  if (*(int *)((int)this + 0x34) != *(int *)((int)this + 0x38)) {
    F_00498e40(this GEN_EDX_ARG);
    F_004997d0(this GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x329) = 1;
    F_00c47745(((int *)(gen_frame + 0x18))[4] ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 1;
  }
  *(undefined1 *)((int)this + 0x329) = 0;
  F_00c47745(((int *)(gen_frame + 0x18))[4] ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00499e50 */
GEN_FRAME uint GEN_THISCALL F_00499e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x499e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1f0];
  byte bVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  int iVar7;
  byte * pbVar8;
  byte * pbVar9;
  byte * pbVar10;
  byte * pbVar11;
  bool bVar12;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ec);
  (*(uint *)(gen_frame + 0x1e8)) = uVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = this;
  if (*(int *)((int)this + 0x32c) != -1) {
    (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)0x499e86;
    piVar5 = (int *)F_00413d30(*(undefined4 *)((int)this + 0x324) GEN_EDX_FWD);
    (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)0x131;
    (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = (undefined4 *)0x0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0xc;
    (*(int *)(gen_frame + 0x6c)) = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)0x499e9d;
    puVar6 = (undefined4 *)F_004296a0(0xc,0,0x131);
    *puVar6 = puVar6;
    puVar6[1] = puVar6;
    puVar2 = (undefined4 *)*piVar5;
    uVar3 = *puVar2;
    (*(byte * PTR32 *)(gen_frame + 0x58)) = (*(undefined * PTR32 *)(gen_frame + 0x78));
    (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = puVar2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = puVar6;
    (*(undefined4 *)(gen_frame + 0x50)) = uVar3;
    (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)*puVar6;
    (*(undefined4 *)(gen_frame + 0x48)) = 0x499ec6;
    F_0049b1f0(&(*(undefined4 * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,(undefined1 *)*puVar6,uVar3,puVar2,(*(undefined * PTR32 *)(gen_frame + 0x78)));
    if ((*(int *)(gen_frame + 0x6c)) != 0) {
      iVar7 = *(int *)((int)this + 0x32c) * 0x770 + *(int *)((int)this + 0x34);
      (*(undefined4 *)(gen_frame + 0x80)) = 0x2011ff14;
      (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(iVar7 + 0x3a8);
      (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(iVar7 + 0x3ac);
      (*(undefined4 *)(gen_frame + 0x8c)) = *(undefined4 *)(iVar7 + 0x3b0);
      (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)(iVar7 + 0x3b4);
      (*(undefined4 *)(gen_frame + 0x94)) = *(undefined4 *)(iVar7 + 0x3b8);
      (*(undefined4 *)(gen_frame + 0x98)) = *(undefined4 *)(iVar7 + 0x3bc);
      (*(undefined4 *)(gen_frame + 0x9c)) = *(undefined4 *)(iVar7 + 0x3c0);
      (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(iVar7 + 0x3c4);
      iVar7 = *(int *)((int)this + 0x32c) * 0x770 + *(int *)((int)this + 0x34);
      (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)0x18;
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = *(undefined4 * PTR32 *)(iVar7 + 0x730);
      (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = (undefined4 *)(iVar7 + 0x738);
      (*(undefined4 *)(gen_frame + 0x50)) = 0x18;
      (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = ((undefined1 *)(gen_frame + 0xac));
      (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = *(undefined4 * PTR32 *)(iVar7 + 0x734);
      (*(undefined4 *)(gen_frame + 0x48)) = 0x499f8c;
      F_00c4d027(((undefined1 *)(gen_frame + 0xac)),0x18,(undefined4 *)(iVar7 + 0x738),0x18);
      (*(undefined4 * PTR32 *)(gen_frame + 0xc4)) = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x32c) * 0x770 + 0x750 + *(int *)((int)this + 0x34))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != (*(undefined4 * PTR32 *)(gen_frame + 0x68))) {
        do {
          puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(*(undefined4 * PTR32 *)(gen_frame + 0x74))[2]));
          pbVar8 = (byte *)puVar2[5];
          (*(char *)(gen_frame + 0x7f)) = '\0';
          (*(char *)(gen_frame + 0x7e)) = '\0';
          pbVar9 = REFG(byte * PTR32, 0x1372610);
          do {
            bVar1 = *pbVar8;
            bVar12 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_0049a005: ;
              iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_0049a00a;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar12 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_0049a005;
            pbVar8 = pbVar8 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_0049a00a: ;
          if ((iVar7 == 0) && (piVar5 = (int *)*puVar2, piVar5 != *(int * PTR32 *)(*(undefined4 * PTR32 *)(gen_frame + 0x74))[2])) {
            do {
              if (((*(char *)(gen_frame + 0x7f)) == '\x01') && ((*(char *)(gen_frame + 0x7e)) == '\x01')) {
                pbVar8 = (byte *)piVar5[5];
                pbVar9 = pbVar8;
                pbVar10 = REFG(byte * PTR32, 0x137261c);
                do {
                  bVar1 = *pbVar9;
                  bVar12 = bVar1 < *pbVar10;
                  if (bVar1 != *pbVar10) {
LAB_0049a065: ;
                    iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                    goto LAB_0049a06a;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar9[1];
                  bVar12 = bVar1 < pbVar10[1];
                  if (bVar1 != pbVar10[1]) goto LAB_0049a065;
                  pbVar9 = pbVar9 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar1 != 0);
                iVar7 = 0;
LAB_0049a06a: ;
                pbVar9 = pbVar8;
                pbVar10 = REFG(byte * PTR32, 0x1372620);
                if (iVar7 == 0) {
                  (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)0x1;
                  (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = (*(undefined4 * PTR32 *)(gen_frame + 0xa4));
                  (*(undefined4 *)(gen_frame + 0x50)) = 0x49a07f;
                  F_00414a40(piVar5 + 2 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0xa4)),1);
                }
                else {
                  do {
                    bVar1 = *pbVar9;
                    bVar12 = bVar1 < *pbVar10;
                    if (bVar1 != *pbVar10) {
LAB_0049a0b0: ;
                      iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_0049a0b5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar9[1];
                    bVar12 = bVar1 < pbVar10[1];
                    if (bVar1 != pbVar10[1]) goto LAB_0049a0b0;
                    pbVar10 = pbVar10 + 2;
                    pbVar9 = pbVar9 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_0049a0b5: ;
                  pbVar9 = pbVar8;
                  pbVar11 = REFG(byte * PTR32, 0x1372624);
                  if (iVar7 == 0) {
                    (*(byte * PTR32 *)(gen_frame + 0x58)) = pbVar10;
                    (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)(*(undefined4 * PTR32 *)(gen_frame + 0xa8));
                    (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = (undefined4 *)0x49a0cb;
                    F_00414ad0(piVar5 + 2 GEN_EDX_ARG,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xa8))))));
                  }
                  else {
                    do {
                      bVar1 = *pbVar9;
                      bVar12 = bVar1 < *pbVar11;
                      if (bVar1 != *pbVar11) {
LAB_0049a0f8: ;
                        iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                        goto LAB_0049a0fd;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar9[1];
                      bVar12 = bVar1 < pbVar11[1];
                      if (bVar1 != pbVar11[1]) goto LAB_0049a0f8;
                      pbVar11 = pbVar11 + 2;
                      pbVar9 = pbVar9 + 2;
                    } while (bVar1 != 0);
                    iVar7 = 0;
LAB_0049a0fd: ;
                    pbVar9 = REFG(byte * PTR32, 0x1372628);
                    if (iVar7 == 0) {
                      F_0049a760((gen_frame + 0x8),((undefined1 *)(gen_frame + 0xac)),0x18,&REFG(undefined, 0x1091ef0));
                      F_00414b60(piVar5 + 2 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18))
                                   ,(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                                   (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44))
                                   ,(*(undefined4 *)(gen_frame + 0x48)),(*(undefined1 * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),(*(undefined4 * PTR32 *)(gen_frame + 0x54)),(*(byte * PTR32 *)(gen_frame + 0x58)));
                    }
                    else {
                      do {
                        bVar1 = *pbVar8;
                        bVar12 = bVar1 < *pbVar9;
                        if (bVar1 != *pbVar9) {
LAB_0049a160: ;
                          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_0049a165;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar8[1];
                        bVar12 = bVar1 < pbVar9[1];
                        if (bVar1 != pbVar9[1]) goto LAB_0049a160;
                        pbVar8 = pbVar8 + 2;
                        pbVar9 = pbVar9 + 2;
                      } while (bVar1 != 0);
                      iVar7 = 0;
LAB_0049a165: ;
                      if (iVar7 == 0) {
                        (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)0x1;
                        (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc4));
                        (*(undefined4 *)(gen_frame + 0x50)) = 0x49a17e;
                        F_00414a40(piVar5 + 2 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0xc4)),1);
                      }
                    }
                  }
                }
              }
              else {
                pbVar8 = (byte *)piVar5[5];
                pbVar9 = pbVar8;
                pbVar10 = REFG(byte * PTR32, 0x1372614);
                do {
                  bVar1 = *pbVar9;
                  bVar12 = bVar1 < *pbVar10;
                  if (bVar1 != *pbVar10) {
LAB_0049a1b0: ;
                    iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                    goto LAB_0049a1b5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar9[1];
                  bVar12 = bVar1 < pbVar10[1];
                  if (bVar1 != pbVar10[1]) goto LAB_0049a1b0;
                  pbVar9 = pbVar9 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar1 != 0);
                iVar7 = 0;
LAB_0049a1b5: ;
                pbVar9 = REFG(byte * PTR32, 0x1372618);
                if (iVar7 == 0) {
                  (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
                  (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
                  (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
                  iVar7 = piVar5[7];
                  (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)iVar7;
                  (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = &(*(undefined4 *)(gen_frame + 0x1d8));
                  (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
                  (*(undefined4 *)(gen_frame + 0x50)) = 0x49a1e0;
                  F_004204c0(&(*(undefined4 *)(gen_frame + 0x1d8)),iVar7);
                  (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)&(*(undefined4 *)(gen_frame + 0x1d8));
                  (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = &(*(undefined4 *)(gen_frame + 0x84));
                  (*(undefined4 *)(gen_frame + 0x50)) = 0x49a1f0;
                  uVar4 = F_004011f0(&(*(undefined4 *)(gen_frame + 0x84)),&(*(undefined4 *)(gen_frame + 0x1d8)));
                  if (uVar4 != 0) {
                    (*(char *)(gen_frame + 0x7f)) = '\x01';
                  }
                }
                else {
                  do {
                    bVar1 = *pbVar8;
                    bVar12 = bVar1 < *pbVar9;
                    if (bVar1 != *pbVar9) {
LAB_0049a230: ;
                      iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_0049a235;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar8[1];
                    bVar12 = bVar1 < pbVar9[1];
                    if (bVar1 != pbVar9[1]) goto LAB_0049a230;
                    pbVar8 = pbVar8 + 2;
                    pbVar9 = pbVar9 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_0049a235: ;
                  if (iVar7 == 0) {
                    iVar7 = piVar5[7];
                    (*(undefined4 *)(gen_frame + 0x1cc)) = 0;
                    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
                    (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
                    (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)iVar7;
                    (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = &(*(undefined4 *)(gen_frame + 0x1c8));
                    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
                    (*(undefined4 *)(gen_frame + 0x50)) = 0x49a260;
                    F_004204c0(&(*(undefined4 *)(gen_frame + 0x1c8)),iVar7);
                    (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)&(*(undefined4 *)(gen_frame + 0x1c8));
                    (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = &(*(undefined4 *)(gen_frame + 0x94));
                    (*(undefined4 *)(gen_frame + 0x50)) = 0x49a270;
                    uVar4 = F_004011f0(&(*(undefined4 *)(gen_frame + 0x94)),&(*(undefined4 *)(gen_frame + 0x1c8)));
                    if (uVar4 != 0) {
                      (*(char *)(gen_frame + 0x7e)) = '\x01';
                    }
                  }
                }
              }
              piVar5 = (int *)*piVar5;
            } while (piVar5 != *(int * PTR32 *)(*(undefined4 * PTR32 *)(gen_frame + 0x74))[2]);
            if (((*(char *)(gen_frame + 0x7f)) == '\x01') && ((*(char *)(gen_frame + 0x7e)) == '\x01')) break;
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x74));
        } while ((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != (*(undefined4 * PTR32 *)(gen_frame + 0x68)));
      }
    }
    (*(byte * PTR32 *)(gen_frame + 0x58)) = (byte *)0x49a2c8;
    uVar4 = F_00423420(&(*(undefined4 * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1e8)) ^ (uint)(uint)(gen_frame + 0x1ec) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_0049a2e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049a2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49a2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  HRESULT HVar2;
  undefined4 * puVar3;
  int iVar4;
  
  HVar2 = gen_imp_CoInitialize((LPVOID)0x0);
  if (-1 < HVar2) {
    *(undefined1 *)((int)this + 0x324) = 1;
  }
  F_004cee60(1000);
  F_00499d60((undefined *)((int)this - 0x18) GEN_EDX_ARG);
  cVar1 = *(char *)((int)this + 0x311);
  while (((cVar1 == '\0' && (*(int *)((int)this + 0x31c) != 0)) &&
         (gen_imp_WaitForSingleObject(*(undefined4 *)((int)this + 0x308),0xffffffff),
         *(char *)((int)this + 0x14) == '\0'))) {
    F_00499d60((undefined *)((int)this - 0x18) GEN_EDX_ARG);
    cVar1 = *(char *)((int)this + 0x311);
  }
  if (*(char *)((int)this + 0x324) != '\0') {
    gen_imp_CoUninitialize();
    *(undefined1 *)((int)this + 0x324) = 0;
  }
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined1 *)((int)this + 0x325) = 0;
  puVar3 = (undefined4 *)((int)this + 0x328);
  iVar4 = 4;
  do {
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(puVar3[1]);
    }
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: Client::System::Input::PadDevice::vf1 */
GEN_FRAME byte GEN_THISCALL F_0049a3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49a3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  byte bVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined * pPVar5;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  *(undefined4 *)(this + 0x324) = param_1;
  uVar2 = F_00414500(param_1 GEN_EDX_FWD,0x44);
  (*(int *)(gen_frame + 0x0)) = *(int *)(uVar2 + 0x14);
  uVar2 = F_00414500(param_1 GEN_EDX_ARG,0x45);
  F_004204c0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(uVar2 + 0x14));
  uVar2 = F_00414500(param_1 GEN_EDX_ARG,0x46);
  F_004204c0(((undefined1 *)(gen_frame + 0x14)),*(undefined4 *)(uVar2 + 0x14));
  uVar2 = F_00414500(param_1 GEN_EDX_ARG,0x49);
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(uVar2 + 0x14);
  uVar2 = F_00414500(param_1 GEN_EDX_ARG,0x47);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(uVar2 + 0x14);
  uVar2 = F_00414500(param_1 GEN_EDX_ARG,0x48);
  F_0049ac90(((undefined1 *)(gen_frame + 0x2c)),0x18,*(undefined4 *)(uVar2 + 0x14));
  uVar2 = F_00414500(param_1 GEN_EDX_ARG,0x4a);
  (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(uVar2 + 0x14);
  piVar4 = &(*(int *)(gen_frame + 0x0));
  pPVar5 = this + 0x1d8;
  for (iVar3 = 0x52; iVar3 != 0; iVar3 = iVar3 - 1) {
    *(int *)pPVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    pPVar5 = pPVar5 + 4;
  }
  *(undefined4 *)(this + 0x338) = *(undefined4 *)(this + 0x200);
  if (*(int *)(this + 0x1d8) == 0x2011ff14) {
    this[0x328] = (undefined1)0x0;
  }
  else {
    this[0x328] = (undefined1)0x1;
  }
  bVar1 = F_00499d60(this GEN_EDX_ARG);
  if (bVar1 == 0) {
    this[0x329] = (undefined1)0x1;
    F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c) GEN_EDX_ARG);
    return 0;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::System::Input::PadDevice::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_0049a4e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49a4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  uVar4 = F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_FWD,0x49);
  *(undefined4 *)(this + 0x1fc) = *(undefined4 *)(uVar4 + 0x14);
  uVar4 = F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_ARG,0x47);
  *(undefined4 *)(this + 0x200) = *(undefined4 *)(uVar4 + 0x14);
  uVar4 = F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_ARG,0x4a);
  *(undefined4 *)(this + 0x21c) = *(undefined4 *)(uVar4 + 0x14);
  uVar4 = F_00414500(*(undefined4 *)(this + 0x324) GEN_EDX_ARG,0x48);
  bVar3 = F_0049ac90(this + 0x204,0x18,*(undefined4 *)(uVar4 + 0x14));
  uVar4 = CONCAT31(extraout_var,bVar3);
  iVar1 = *(int *)(this + 0x32c);
  if (-1 < iVar1) {
    uVar4 = (*(int *)(this + 0x38) - *(int *)(this + 0x34)) / 0x770;
    if (iVar1 < (int)uVar4) {
      *((undefined4 *)GEN_TOP((iVar1 * 0x770 + 0x730 + *(int *)(this + 0x34)))) = *(undefined4 *)(this + 0x1fc)
      ;
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x32c) * 0x770 + 0x734 + *(int *)(this + 0x34)))) =
           *(undefined4 *)(this + 0x200);
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x32c) * 0x770 + 0x750 + *(int *)(this + 0x34)))) =
           *(undefined4 *)(this + 0x21c);
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x20);
      *(undefined4 *)(this + 0x338) = *(undefined4 *)(this + 0x200);
      (*pcVar2)(this);
      uVar4 = F_00499e50(this GEN_EDX_ARG);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_0049a630 */
GEN_FRAME uint GEN_THISCALL F_0049a630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49a630u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x770 + *in_ecx;
}

/* ref: FUN_0049a670 */
GEN_FRAME uint GEN_THISCALL F_0049a670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49a670u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0049a6d0 */
GEN_FRAME uint GEN_STDCALL F_0049a6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49a6d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x770,param_2,0x12d);
  return uVar1;
}

/* ref: FUN_0049a700 */
GEN_FRAME uint GEN_STDCALL F_0049a700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49a700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x770,0x12d);
  return (uint)uVar1;
}

/* ref: FUN_0049a760 */
GEN_FRAME uint GEN_STDCALL F_0049a760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49a760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(param_1 GEN_EDX_ARG);
  F_0042d4b0(param_1 GEN_EDX_ARG,0x400);
  F_0042e370(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092090));
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),param_4,(int)*(char *)(param_2 + uVar2));
      F_0042e360(param_1 GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      if (uVar2 < param_3 - 1) {
        F_0042e370(param_1 GEN_EDX_ARG,&REFG(undefined, 0x109208c));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  F_0042e370(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1092088));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_0049a810 */
GEN_FRAME uint F_0049a810(unsigned int gen_a0)
{
  GEN_ENTER(0x49a810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0049a820 */
GEN_FRAME uint F_0049a820(unsigned int gen_a0)
{
  GEN_ENTER(0x49a820u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0049a830 */
GEN_FRAME uint F_0049a830(unsigned int gen_a0)
{
  GEN_ENTER(0x49a830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0049a840 */
GEN_FRAME uint F_0049a840(unsigned int gen_a0)
{
  GEN_ENTER(0x49a840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0049a850 */
GEN_FRAME byte F_0049a850(void)
{
  GEN_ENTER(0x49a850u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0049a870 */
GEN_FRAME uint GEN_THISCALL F_0049a870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49a870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_0049a8a0 */
GEN_FRAME uint F_0049a8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x49a8a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0049a8c0 */
GEN_FRAME uint F_0049a8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x49a8c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0049a8e0 */
GEN_FRAME uint GEN_THISCALL F_0049a8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49a8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004147e0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_0049a900 */
GEN_FRAME uint GEN_THISCALL F_0049a900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x49a900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00414850(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return (uint)this;
}

/* ref: FUN_0049a930 */
GEN_FRAME uint GEN_THISCALL F_0049a930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x49a930u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  F_004148d0(param_1 GEN_EDX_FWD,param_2,param_3,param_4,param_5);
  return param_1;
}

/* ref: FUN_0049a960 */
GEN_FRAME uint GEN_THISCALL F_0049a960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22)
{
  GEN_ENTER(0x49a960u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[23];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  gen_args[22] = gen_a22;
  undefined1 gen_out[0x4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  F_0042cbc0((gen_out + 0x0) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[2]));
  F_00414960((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,
               uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,
               uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14,uStack_10);
  uStack_10 = 0x49a988;
  F_0042c880(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: Client::System::Input::PadDeviceInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_0049a9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49a9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x109202c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0049a9d0 */
GEN_FRAME unsigned int GEN_THISCALL F_0049a9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float local_8;
  
  uVar4 = param_3;
  uVar3 = param_2;
  local_8 = *(float *)(param_1 + 0x338);
  fVar7 = REFG(float, 0x10920a4);
  if (((GEN_ISNAN(local_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
       ((GEN_ISNAN(local_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || local_8 == *(float *)&REFG(undefined, 0x1088114))) ||
     (fVar7 = REFG(float, 0x10920a0),
     (GEN_ISNAN(local_8) || GEN_ISNAN(REFG(float, 0x1087f04))) !=
     ((GEN_ISNAN(local_8) || GEN_ISNAN(REFG(float, 0x1087f04))) || local_8 == REFG(float, 0x1087f04)))) {
    local_8 = fVar7;
  }
  fVar6 = ((float10)GEN_TOD(pow((float10)*(float *)param_3,(float10)*(double *)&REFG(undefined, 0x1092098))));
  fVar2 = ((float10)GEN_TOD(pow((float10)*(float *)param_2,(float10)*(double *)&REFG(undefined, 0x1092098))));
  fVar5 = (float10)((float)GEN_TOF(SQRT((float10)(float)((float10)(float)fVar2 + (float10)(float)fVar6))));
  if (!(fVar5 <= (float10)local_8)) {
    fVar5 = ((float10)GEN_TOD(GEN_X87MATH((float10)(float)((float10)*(float *)param_2 / fVar5),7)));
    param_2 = (uint)gen_fl2bits(((float)GEN_TOF((((float10)((float)GEN_TOF(SQRT((float10)(float)((float10)(float)fVar2
                                                                              + (float10)(float)
                                                  fVar6)))) - (float10)local_8) /
                                       ((float10)1 - (float10)local_8)))));
    if ((float10)1 < ((float10)GEN_TOD(gen_bits2f(param_2)))) {
      param_2 = (uint)gen_fl2bits(REFG(float, 0x1087f04));
    }
    fVar6 = ((float10)GEN_TOD(fcos((float10)(float)fVar5)));
    param_3 = (uint)gen_fl2bits(REFG(float, 0x1087f04));
    *(float *)uVar3 = (float)((float10)(float)fVar6 * ((float10)GEN_TOD(gen_bits2f(param_2))));
    if (!GEN_ISNAN(*(float *)uVar4) && (!(0.0 < *(float *)uVar4) && *(float *)uVar4 != 0.0)) {
      param_3 = (uint)gen_fl2bits((float)(REFG(float, 0x1090708)));
    }
    fVar6 = ((float10)GEN_TOD(fsin((float10)(float)fVar5)));
    *(float *)uVar4 =
         ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(param_3))) * ((float10)GEN_TOD(gen_bits2f(param_2)))) *
                (float10)(float)fVar6)));
    return 0;
  }
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)param_3 = 0;
  return 0;
}

/* ref: FUN_0049ab50 */
GEN_FRAME uint GEN_THISCALL F_0049ab50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ab50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x770;
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

/* ref: FUN_0049ab90 */
GEN_FRAME uint GEN_THISCALL F_0049ab90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ab90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0049aba0 */
GEN_FRAME byte GEN_THISCALL F_0049aba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49aba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0049abc0 */
GEN_FRAME unsigned int GEN_STDCALL F_0049abc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49abc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x1dc; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_0049abe0 */
GEN_FRAME unsigned int F_0049abe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49abe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0x1dc;
    puVar3 = puVar2 + 0x1dc;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x1dc; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0049ac30 */
GEN_FRAME unsigned int F_0049ac30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ac30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x1dc; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_0049ac60 */
GEN_FRAME uint GEN_THISCALL F_0049ac60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ac60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0049ac70 */
GEN_FRAME byte GEN_THISCALL F_0049ac70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ac70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0049ac90 */
GEN_FRAME byte GEN_STDCALL F_0049ac90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ac90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  undefined * this;
  int * in_ecx;
  uint uVar3;
  char * _String;
  double dVar4;
  
  uVar2 = F_00406bb0(param_2,0,0);
  this = (undefined *)F_00406b90(0x70,0,0);
  if (this == (undefined *)0x0) {
    in_ecx = (int *)0x0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = 100;
    in_ecx = (int *)F_004202a0(this GEN_EDX_ARG,param_3,&(*(undefined4 *)(gen_frame + 0x8)));
  }
  ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 4))(in_ecx GEN_EDX_ARG);
  uVar3 = F_00413d10(in_ecx GEN_EDX_ARG);
  if (uVar3 != param_2) {
    F_00406ad0(uVar2);
    ((GEN_TCODE *)*(gen_code32 *)*in_ecx)(in_ecx GEN_EDX_ARG,1);
    return 0;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = in_ecx[1];
      in_ecx[1] = iVar1 + 1;
      _String = (char *)F_0042a990(iVar1 * 0x54 + in_ecx[0x18] GEN_EDX_ARG);
      dVar4 = F_00c4acaa(_String);
      *(char *)(uVar3 + uVar2) = (char)(int)dVar4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  F_00c46aa0(param_1,uVar2,param_2);
  ((GEN_TCODE *)*(gen_code32 *)*in_ecx)(in_ecx GEN_EDX_ARG,1);
  F_00406ad0(uVar2);
  return 1;
}

/* ref: FUN_0049ad70 */
GEN_FRAME unsigned int F_0049ad70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ad70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x1dc; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_0049ad90 */
GEN_FRAME unsigned int F_0049ad90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ad90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x1dc; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_0049adb0 */
GEN_FRAME unsigned int F_0049adb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49adb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0x1dc;
    puVar3 = puVar2 + 0x1dc;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x1dc; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0049ae00 */
GEN_FRAME unsigned int F_0049ae00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ae00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0x1dc) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0x1dc; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0x1dc;
  }
  return 0;
}

/* ref: FUN_0049ae40 */
GEN_FRAME uint GEN_THISCALL F_0049ae40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ae40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0049ae50 */
GEN_FRAME uint GEN_THISCALL F_0049ae50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ae50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0049ae60 */
GEN_FRAME uint GEN_THISCALL F_0049ae60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ae60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0049ae70 */
GEN_FRAME uint GEN_THISCALL F_0049ae70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ae70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0049ae80 */
GEN_FRAME uint GEN_STDCALL F_0049ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49ae80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0049aea0 */
GEN_FRAME unsigned int F_0049aea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49aea0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x1dc; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x1dc;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0049aee0 */
GEN_FRAME uint GEN_STDCALL F_0049aee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49aee0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0049af00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049af00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49af00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x770) * 0x770,0x12d);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_0049af50 */
GEN_FRAME unsigned int GEN_STDCALL F_0049af50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49af50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x1dc; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x1dc;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0049af90 */
GEN_FRAME uint GEN_THISCALL F_0049af90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49af90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,0x131);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0049afe0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049afe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49afe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x770) * 0x770,0x12d);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_0049b030 */
GEN_FRAME uint GEN_THISCALL F_0049b030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x770;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x770,0,0x12d);
    F_0049af50(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x770) * 0x770,0x12d);
    }
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0x770) * 0x770 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x770 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0049b100 */
GEN_FRAME uint GEN_THISCALL F_0049b100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49b100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 0x1dc;
      puVar6 = puVar2 + 0x1dc;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 0x1dc; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0049b160 */
GEN_FRAME uint GEN_THISCALL F_0049b160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x770;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x770;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0049b030(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0049b030(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0049b1f0 */
GEN_FRAME unsigned int GEN_THISCALL F_0049b1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x49b1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  puVar2 = param_2;
  while( true ) {
    if (puVar2 == param_3) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 4);
    piVar3 = (int *)F_004296a0(0xc,0,0x131);
    *piVar3 = param_1;
    piVar3[1] = iVar1;
    if (piVar3 + 2 != (int *)0x0) {
      piVar3[2] = puVar2[2];
    }
    if (*(int *)((int)this + 4) == -2) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *(int * PTR32 *)(param_1 + 4) = piVar3;
    *(int * PTR32 *)piVar3[1] = piVar3;
    puVar2 = (undefined4 *)*puVar2;
  }
                    
  F_00c4579a("list<T> too long");
}

/* ref: FUN_0049b290 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049b290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49b290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x770) * 0x770,0x12d);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_0049b2e0 */
GEN_FRAME unsigned int GEN_THISCALL F_0049b2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0049b160(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x770) * 0x770 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0049b160(this GEN_EDX_ARG,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0x1dc; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x770;
  return;
}

/* ref: FUN_0049b350 */
GEN_FRAME unsigned int GEN_THISCALL F_0049b350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49b350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return;
}

/* ref: FUN_0049b3a0 */
GEN_FRAME unsigned int GEN_THISCALL F_0049b3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49b3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0049b1f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_3);
  return;
}

/* ref: FUN_0049b3c0 */
GEN_NOFRAME uint GEN_THISCALL F_0049b3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0049b4a0((undefined *)((int)this - 0x18) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0049b3d0 */
GEN_NOFRAME uint GEN_THISCALL F_0049b3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0049b4a0((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0049b3e0 */
GEN_NOFRAME uint GEN_THISCALL F_0049b3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0049b4a0((undefined *)((int)this - 8) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::System::Input::PadDevice::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_0049b3f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49b3f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x44;
}

/* ref: FUN_0049b400 */
GEN_FRAME uint GEN_THISCALL F_0049b400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004296a0(0xc,0,0x131);
  *(uint *)this = uVar1;
  *(uint *)uVar1 = uVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  F_0049b1f0(this GEN_EDX_ARG,**(undefined4 * PTR32 *)this,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  return (uint)this;
}

/* ref: FUN_0049b450 */
GEN_FRAME uint GEN_THISCALL F_0049b450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004296a0(0xc,0,0x131);
  *(uint *)this = uVar1;
  *(uint *)uVar1 = uVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  F_0049b1f0(this GEN_EDX_ARG,**(undefined4 * PTR32 *)this,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  return (uint)this;
}

/* ref: Client::System::Input::PadDevice::vf0 */
GEN_FRAME uint GEN_THISCALL F_0049b4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004994d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0049b4d0 */
GEN_FRAME float10 F_0049b4d0(float gen_a0)
{
  GEN_ENTER(0x49b4d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_0049b4f0 */
GEN_FRAME unsigned int GEN_THISCALL F_0049b4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x49b4f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = param_4;
  *(undefined4 *)(param_1 + 0x5c) = param_5;
  *(undefined4 *)(param_1 + 0x60) = param_6;
  *(undefined4 *)(param_1 + 100) = param_7;
  if (param_2 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - 1;
    if (0 < *(int *)(param_1 + 0x54)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x48);
    if (!((float10)param_3 < (float10)fVar3)) goto LAB_0049b559;
  }
  *(float *)(param_1 + 0x48) = param_3;
  fVar3 = param_3;
LAB_0049b559: ;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if ((char)param_8 == '\x01') {
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    if (param_2 == 0) {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
  }
  *(float *)(param_1 + 0x4c) = fVar3;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = uVar1;
  }
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  return;
}

/* ref: FUN_0049b5a0 */
GEN_NOFRAME byte GEN_THISCALL F_0049b5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49b5a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x50);
}

/* ref: FUN_0049b5b0 */
GEN_FRAME uint GEN_THISCALL F_0049b5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b5b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x68) = param_2;
  return param_2;
}

/* ref: FUN_0049b5c0 */
GEN_FRAME uint GEN_THISCALL F_0049b5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_0049b5d0 */
GEN_FRAME unsigned int GEN_THISCALL F_0049b5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49b5d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < 0x101) {
    if (param_2 == 0x100) {
      *(undefined4 *)(in_ecx + 0x6c) = 5;
      return 0;
    }
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      *(undefined4 *)(in_ecx + 0x6c) = 1;
      return 0;
    case 1: ;
    case 4: ;
      *(undefined4 *)(in_ecx + 0x6c) = 2;
      return 0;
    case 2: ;
      *(undefined4 *)(in_ecx + 0x6c) = 3;
      return 0;
    case 3: ;
      *(undefined4 *)(in_ecx + 0x6c) = 4;
      return 0;
    case -1: ;
      *(undefined4 *)(in_ecx + 0x6c) = 0xffffffff;
      return 0;
    }
  }
  else if (param_2 == 0x101) {
    *(undefined4 *)(in_ecx + 0x6c) = 0;
  }
  return 0;
}

/* ref: FUN_0049b660 */
GEN_FRAME uint GEN_THISCALL F_0049b660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x49b660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x604) * 0xc)));
  *puVar1 = param_1;
  *(undefined2 *)(puVar1 + 1) = (undefined2)param_2;
  *(undefined2 *)((int)puVar1 + 6) = (undefined2)param_3;
  *(undefined2 *)(puVar1 + 2) = (undefined2)param_4;
  uVar2 = *(int *)((int)this + 0x604) + 1U & 0x7f;
  *(uint *)((int)this + 0x604) = uVar2;
  return uVar2;
}

/* ref: FUN_0049b6c0 */
GEN_NOFRAME byte GEN_THISCALL F_0049b6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49b6c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return 0 < *(int *)(in_ecx + 0x678);
}

/* ref: FUN_0049b6d0 */
GEN_FRAME unsigned int GEN_STDCALL F_0049b6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49b6d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = gen_imp_GetSystemMetrics(0x4e);
  *param_1 = iVar1;
  iVar1 = gen_imp_GetSystemMetrics(0x4f);
  *param_2 = iVar1;
  return 0;
}

/* ref: FUN_0049b700 */
GEN_FRAME uint F_0049b700(unsigned int gen_a0)
{
  GEN_ENTER(0x49b700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0x4))[5] = uVar2;
  if (param_1 < 5) {
    ((uint *)(gen_frame + 0x4))[0] = 0x1a3;
    ((uint *)(gen_frame + 0x4))[1] = 0x1a4;
    ((uint *)(gen_frame + 0x4))[2] = 0x1a5;
    ((uint *)(gen_frame + 0x4))[3] = 0x1a6;
    ((uint *)(gen_frame + 0x4))[4] = 0x1a7;
    uVar1 = ((uint *)(gen_frame + 0x4))[(int)(param_1)];
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
    return uVar1;
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0049b780 */
GEN_FRAME uint GEN_STDCALL F_0049b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49b780u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x434);
  F_00429200(this GEN_EDX_ARG,0);
  uVar1 = F_00428ff0(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0049b7d0 */
GEN_FRAME unsigned int GEN_THISCALL F_0049b7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x49b7d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float fVar1;
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = param_4;
  *(undefined4 *)(param_1 + 0x5c) = param_5;
  *(undefined4 *)(param_1 + 0x60) = param_6;
  *(undefined4 *)(param_1 + 100) = param_7;
  if (param_2 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - 1;
    if (0 < *(int *)(param_1 + 0x54)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x48);
    if (!((float10)param_3 < (float10)fVar1)) goto LAB_0049b83d;
  }
  *(float *)(param_1 + 0x48) = param_3;
  fVar1 = param_3;
LAB_0049b83d: ;
  *(float *)(param_1 + 0x4c) = fVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x44) = GEN_FLT_TO(*(undefined4 *)(param_1 + 0x44), REFG(float, 0x1087f04));
  return;
}

/* ref: FUN_0049b870 */
GEN_FRAME uint GEN_STDCALL F_0049b870(unsigned int gen_a0)
{
  GEN_ENTER(0x49b870u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar3;
  
  iVar3 = (*(int *)&gen_args[0]);
  if ((*(int *)&gen_args[0]) == -1) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,4);
    iVar3 = *(int *)(uVar2 + 0x14);
  }
  this = (undefined *)F_00424810(REFG(int, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (this != (undefined *)0x0) {
    uVar2 = F_004142d0(&(*(int *)&gen_args[0]) GEN_EDX_ARG,iVar3);
    bVar1 = F_009755c0(this GEN_EDX_ARG,uVar2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_0049b8c0 */
GEN_FRAME byte GEN_STDCALL F_0049b8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x49b8c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,0x11);
  return *(int *)(uVar1 + 0x14) == param_1;
}

/* ref: FUN_0049b8f0 */
GEN_FRAME uint GEN_THISCALL F_0049b8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49b8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x674);
  piVar1 = ((int *)GEN_TOP(((int)this + (iVar3 - 1U & 0x7f) * 0xc + 0x70)));
  if ((*(int *)((int)this + 0x670) != iVar3) && (*piVar1 == 6)) {
    *(undefined2 *)(piVar1 + 1) = (undefined2)param_1;
    *(undefined2 *)((int)piVar1 + 6) = (undefined2)param_2;
    return (uint)piVar1;
  }
  puVar2 = (undefined4 *)((int)this + iVar3 * 0xc + 0x70);
  *(undefined2 *)(puVar2 + 1) = (undefined2)param_1;
  *(undefined2 *)((int)puVar2 + 6) = (undefined2)param_2;
  *puVar2 = 6;
  *(undefined2 *)(puVar2 + 2) = 0;
  uVar4 = *(int *)((int)this + 0x674) + 1U & 0x7f;
  *(uint *)((int)this + 0x674) = uVar4;
  return uVar4;
}

/* ref: FUN_0049b960 */
GEN_FRAME uint GEN_THISCALL F_0049b960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49b960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x674);
  piVar1 = ((int *)GEN_TOP(((int)this + (iVar3 - 1U & 0x7f) * 0xc + 0x70)));
  if ((*(int *)((int)this + 0x670) != iVar3) && (*piVar1 == 7)) {
    *(undefined2 *)(piVar1 + 1) = (undefined2)param_1;
    *(undefined2 *)((int)piVar1 + 6) = (undefined2)param_3;
    return (uint)piVar1;
  }
  puVar2 = (undefined4 *)((int)this + iVar3 * 0xc + 0x70);
  *(undefined2 *)(puVar2 + 1) = (undefined2)param_1;
  *(undefined2 *)((int)puVar2 + 6) = (undefined2)param_2;
  *puVar2 = 7;
  *(undefined2 *)(puVar2 + 2) = (undefined2)param_3;
  uVar4 = *(int *)((int)this + 0x674) + 1U & 0x7f;
  *(uint *)((int)this + 0x674) = uVar4;
  return uVar4;
}

/* ref: FUN_0049b9e0 */
GEN_FRAME uint GEN_STDCALL F_0049b9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49b9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 in_ecx;
  uint uVar1;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar1 = F_00414500(in_ecx GEN_EDX_ARG,0xd);
  *param_1 = *(undefined4 *)(uVar1 + 0x14);
  uVar1 = F_00414500(in_ecx GEN_EDX_ARG,0xe);
  *param_2 = *(undefined4 *)(uVar1 + 0x14);
  uVar1 = F_00414500(in_ecx GEN_EDX_ARG,0xf);
  *param_3 = *(undefined4 *)(uVar1 + 0x14);
  uVar1 = F_00414500(in_ecx GEN_EDX_ARG,0x10);
  *param_4 = *(undefined4 *)(uVar1 + 0x14);
  return uVar1;
}

/* ref: FUN_0049ba40 */
GEN_FRAME unsigned int GEN_STDCALL F_0049ba40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49ba40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  if ((*(int *)&gen_args[0]) == ((int)0x80000000)) {
    pvVar3 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x434);
    uVar2 = F_00414500(uVar4 GEN_EDX_ARG,0xd);
    iVar1 = *(int *)(uVar2 + 0x14);
    uVar2 = F_00414500(uVar4 GEN_EDX_ARG,0xe);
    (*(undefined4 *)&gen_args[1]) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(uVar4 GEN_EDX_ARG,0xf);
    (*(undefined4 *)&gen_args[2]) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(uVar4 GEN_EDX_ARG,0x10);
    if (iVar1 != ((int)0x80000000)) {
      F_00428de0(pvVar3 GEN_EDX_ARG,iVar1,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),*(undefined4 *)(uVar2 + 0x14));
      goto LAB_0049bb3d;
    }
    F_00428ff0(pvVar3 GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),*(undefined4 *)(uVar2 + 0x14));
    F_004290f0(pvVar3 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[1]));
    pvVar3 = (undefined *)F_00414500(uVar4 GEN_EDX_ARG,0xd);
    F_00414a40(pvVar3 GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),1);
    pvVar3 = (undefined *)F_00414500(uVar4 GEN_EDX_ARG,0xe);
    uVar4 = (*(undefined4 *)&gen_args[1]);
  }
  else {
    pvVar3 = (undefined *)F_00414500(uVar4 GEN_EDX_ARG,0xd);
    F_00414a40(pvVar3 GEN_EDX_ARG,(*(int *)&gen_args[0]),1);
    pvVar3 = (undefined *)F_00414500(uVar4 GEN_EDX_ARG,0xe);
    F_00414a40(pvVar3 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),1);
    pvVar3 = (undefined *)F_00414500(uVar4 GEN_EDX_ARG,0xf);
    F_00414a40(pvVar3 GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),1);
    pvVar3 = (undefined *)F_00414500(uVar4 GEN_EDX_ARG,0x10);
    uVar4 = (*(undefined4 *)&gen_args[3]);
  }
  F_00414a40(pvVar3 GEN_EDX_ARG,uVar4,1);
LAB_0049bb3d: ;
  return (uint)(gen_imp_ShowWindow(*((HWND *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x434) + 8))),5));
}

/* ref: FUN_0049bb60 */
GEN_NOFRAME uint F_0049bb60(void)
{
  GEN_ENTER(0x49bb60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,0x15);
  return *(uint *)(uVar1 + 0x14);
}

/* ref: FUN_0049bba0 */
GEN_FRAME uint F_0049bba0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x49bba0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint in_eax = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  if (in_eax < 5) {
    uVar1 = *(ushort *)(&REFG(undefined, 0x10928bc) + in_eax * 2);
    in_eax = (uint)uVar1;
    uVar2 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
    iVar4 = 0;
    uVar3 = in_eax;
    for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
      if ((uVar3 & 1) != 0) {
        in_eax = F_004e7920(uVar2 GEN_EDX_ARG,iVar4,param_2,100);
      }
      iVar4 = iVar4 + 1;
      local_8 = (uint)(uVar1 >> 1);
      uVar3 = local_8;
    }
  }
  return in_eax;
}

/* ref: FUN_0049bc00 */
GEN_FRAME uint GEN_STDCALL F_0049bc00(unsigned int gen_a0)
{
  GEN_ENTER(0x49bc00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  ((uint *)(gen_frame + 0x4))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 < 5) {
    ((uint *)(gen_frame + 0x4))[0] = 0x1a3;
    ((uint *)(gen_frame + 0x4))[1] = 0x1a4;
    ((uint *)(gen_frame + 0x4))[2] = 0x1a5;
    ((uint *)(gen_frame + 0x4))[3] = 0x1a6;
    ((uint *)(gen_frame + 0x4))[4] = 0x1a7;
    uVar1 = ((uint *)(gen_frame + 0x4))[(int)(param_1)];
  }
  else {
    uVar1 = 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,uVar1);
  uVar1 = *(uint *)(uVar1 + 0x14);
  F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0049bc90 */
GEN_NOFRAME uint F_0049bc90(void)
{
  GEN_ENTER(0x49bc90u, 0u, 0u, 0u, 0u);
  undefined4 in_ecx;
  undefined4 uVar1;
  uint uVar2;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  uVar2 = F_00414500(in_ecx GEN_EDX_ARG,0x1a8);
  F_004e77b0(uVar1 GEN_EDX_ARG,(uint)(*(int *)(uVar2 + 0x14) == 1));
  uVar2 = F_00414500(in_ecx GEN_EDX_ARG,0x1a9);
  F_004e8ae0(uVar1 GEN_EDX_ARG,(uint)(*(int *)(uVar2 + 0x14) == 1));
  uVar2 = F_00414500(in_ecx GEN_EDX_ARG,0x1aa);
  F_004e8c00(uVar1 GEN_EDX_ARG,(uint)(*(int *)(uVar2 + 0x14) == 1));
  uVar2 = F_00414500(in_ecx GEN_EDX_ARG,0x1ab);
  F_004e8d70(uVar1 GEN_EDX_ARG,(uint)(*(int *)(uVar2 + 0x14) == 1));
  uVar2 = F_00414500(in_ecx GEN_EDX_ARG,0x1ad);
  F_004e8de0(uVar1 GEN_EDX_ARG,(uint)(*(int *)(uVar2 + 0x14) == 1));
  uVar2 = F_00414500(in_ecx GEN_EDX_ARG,0x1ac);
  uVar2 = F_004e8e50(uVar1 GEN_EDX_ARG,(uint)(*(int *)(uVar2 + 0x14) == 1));
  return uVar2;
}

/* ref: FUN_0049bd60 */
GEN_FRAME byte GEN_STDCALL F_0049bd60(unsigned int gen_a0)
{
  GEN_ENTER(0x49bd60u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (REFG(int, 0x137104c) != 0) {
    piVar3 = (int *)F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG);
    if (piVar3 != (int *)0x0) {
      uVar5 = 0;
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
      uVar4 = F_00763050(uVar4 GEN_EDX_ARG,uVar5);
      if (uVar4 != 0) {
        iVar1 = *(int *)(uVar4 + 0x270);
        iVar2 = *(int *)(uVar4 + 0x274);
        if (iVar1 != 0 || iVar2 != 0) {
          param_1[4] = *(int *)(uVar4 + 0x26c);
          param_1[2] = uVar4 + 0x308;
          param_1[3] = uVar4 + 0x278;
          param_1[1] = iVar2;
          *param_1 = iVar1;
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0049bde0 */
GEN_FRAME uint GEN_THISCALL F_0049bde0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49bde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  
  F_004a0020(this GEN_EDX_FWD);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) =
       (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x44), REFG(float, 0x1087f04));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10928d8));
  *(undefined4 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[2])REFP(0x10928cc));
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined1 *)((int)this + 0x50) = 1;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302e44);
  *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302e48);
  *(undefined4 *)((int)this + 0x60) = REFG(undefined4, 0x1302e4c);
  *(undefined4 *)((int)this + 100) = REFG(undefined4, 0x1302e50);
  *(undefined4 *)((int)this + 0x68) = 0xffffffff;
  *(undefined4 *)((int)this + 0x6c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x670) = 0;
  *(undefined4 *)((int)this + 0x674) = 0;
  *(undefined4 *)((int)this + 0x678) = 0;
  iVar5 = REFG(int, 0x137104c);
  F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0) GEN_EDX_ARG,3,this);
  F_00415250(*(undefined * PTR32 *)(iVar5 + 0x10) GEN_EDX_ARG,(undefined4 *)((int)this + 0x28));
  uVar4 = REFG(undefined4, 0x1302e50);
  uVar3 = REFG(undefined4, 0x1302e4c);
  uVar2 = REFG(undefined4, 0x1302e48);
  uVar1 = REFG(undefined4, 0x1302e44);
  if (*(char *)((int)this + 0x34) != '\0') {
    return (uint)this;
  }
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
  *(undefined4 *)((int)this + 0x58) = uVar1;
  *(undefined4 *)((int)this + 0x5c) = uVar2;
  *(undefined4 *)((int)this + 0x60) = uVar3;
  *(undefined4 *)((int)this + 100) = uVar4;
  if (*(char *)((int)this + 0x50) == '\0') {
    *(undefined1 *)((int)this + 0x50) = 1;
  }
  else {
    fVar6 = *(float *)((int)this + 0x48);
    if (!(0.0 < fVar6)) goto LAB_0049befc;
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  fVar6 = 0.0;
LAB_0049befc: ;
  *(float *)((int)this + 0x4c) = fVar6;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x44) = 0;
  return (uint)this;
}

/* ref: FUN_0049bf20 */
GEN_NOFRAME byte GEN_THISCALL F_0049bf20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49bf20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  
  if (this == (undefined *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)this + 0x28;
  }
  F_00414620(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,iVar5);
  uVar4 = REFG(undefined4, 0x1302e50);
  uVar3 = REFG(undefined4, 0x1302e4c);
  uVar2 = REFG(undefined4, 0x1302e48);
  fVar1 = REFG(float, 0x1088068);
  if (*(char *)((int)this + 0x34) != '\0') {
    *(undefined1 *)((int)this + 0x34) = 1;
    return 1;
  }
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302e44);
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
  *(undefined4 *)((int)this + 0x5c) = uVar2;
  *(undefined4 *)((int)this + 0x60) = uVar3;
  *(undefined4 *)((int)this + 100) = uVar4;
  if (*(char *)((int)this + 0x50) == '\0') {
    *(undefined1 *)((int)this + 0x50) = 1;
  }
  else {
    fVar6 = *(float *)((int)this + 0x48);
    if (!(fVar1 < fVar6)) goto LAB_0049bf93;
  }
  *(float *)((int)this + 0x48) = fVar1;
  fVar6 = fVar1;
LAB_0049bf93: ;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x3c);
  *(float *)((int)this + 0x4c) = fVar6;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 1;
  return 1;
}

/* ref: FUN_0049bfc0 */
GEN_FRAME uint GEN_STDCALL F_0049bfc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49bfc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1370b90);
  if (REFG(int, 0x1370b90) != 0) {
    in_EAX = (*(int *)(REFG(int, 0x1370b90) + 0x74) - *(int *)(REFG(int, 0x1370b90) + 0x70)) / 0xc;
    uVar3 = 0;
    if (in_EAX != 0) {
      piVar2 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x70);
      while (((*piVar2 != param_1 || (piVar2[1] != param_2)) ||
             ((param_3 != 0 && (piVar2[2] != param_3))))) {
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 3;
        if (in_EAX <= uVar3) {
          return in_EAX;
        }
      }
      if (-1 < (int)uVar3) {
        if (*(char *)(REFG(int, 0x1370b90) + 0x4c) == '\0') {
          *(undefined1 *)(REFG(int, 0x1370b90) + 0x4d) = 1;
        }
        *(uint *)(iVar1 + 100) = uVar3;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_0049c040 */
GEN_FRAME byte F_0049c040(void)
{
  GEN_ENTER(0x49c040u, 0u, 0u, 0u, 0u);
  undefined4 in_ecx;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  undefined * pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar2 = F_00414500(in_ecx GEN_EDX_ARG,0x12);
  uVar2 = *(uint *)(uVar2 + 0x14);
  uVar3 = F_00414500(in_ecx GEN_EDX_ARG,0x13);
  if (REFG(int, 0x1370b90) != 0) {
    iVar6 = *(int *)(REFG(int, 0x1370b90) + 0x74) - *(int *)(REFG(int, 0x1370b90) + 0x70);
    iVar1 = iVar6 >> 0x1f;
    iVar6 = iVar6 / 0xc + iVar1;
    uVar7 = 0xffffffff;
    uVar8 = 0;
    if (iVar6 != iVar1) {
      puVar4 = *(uint * PTR32 *)(REFG(int, 0x1370b90) + 0x70);
      do {
        if ((((int)uVar7 < 0) && (0x3ff < *puVar4)) && (0x2cf < puVar4[1])) {
          uVar7 = uVar8;
        }
        if ((*puVar4 == uVar2) && (puVar4[1] == *(uint *)(uVar3 + 0x14))) {
          return 1;
        }
        uVar8 = uVar8 + 1;
        puVar4 = puVar4 + 3;
      } while (uVar8 < (uint)(iVar6 - iVar1));
      if (-1 < (int)uVar7) {
        puVar4 = *(uint * PTR32 *)(REFG(int, 0x1370b90) + 0x70) + uVar7 * 3;
        pvVar5 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x12);
        F_00414a40(pvVar5 GEN_EDX_ARG,*puVar4,1);
        pvVar5 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x13);
        F_00414a40(pvVar5 GEN_EDX_ARG,puVar4[1],1);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0049c120 */
GEN_NOFRAME uint GEN_THISCALL F_0049c120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49c120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ecx_00;
  uint uVar1;
  
  in_ecx_00 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar1 = *(uint *)(in_ecx + 0x68);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00414500(in_ecx_00 GEN_EDX_FWD,0x19e);
    uVar1 = *(uint *)(uVar1 + 0x14);
    if (uVar1 == 0xffffffff) {
      uVar1 = F_00414500(in_ecx_00 GEN_EDX_ARG,4);
      uVar1 = *(uint *)(uVar1 + 0x14);
    }
  }
  return uVar1;
}

/* ref: FUN_0049c160 */
GEN_NOFRAME uint GEN_THISCALL F_0049c160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49c160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ecx_00;
  uint uVar1;
  int iVar2;
  
  in_ecx_00 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  iVar2 = *(int *)(in_ecx + 0x6c);
  if (iVar2 == -1) {
    uVar1 = F_00414500(in_ecx_00 GEN_EDX_FWD,0x1a);
    iVar2 = *(int *)(uVar1 + 0x14);
  }
  switch((unsigned int)(uintptr_t)(iVar2)) {
  case 1: ;
    return 0;
  case 2: ;
    return 1;
  case 3: ;
    return 2;
  case 4: ;
    return 3;
  case 5: ;
    return 0x100;
  default: ;
    uVar1 = F_00414500(in_ecx_00 GEN_EDX_ARG,4);
    return *(uint *)(uVar1 + 0x14);
  }
}

/* ref: FUN_0049c1d0 */
GEN_NOFRAME uint F_0049c1d0(void)
{
  GEN_ENTER(0x49c1d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,0x11);
  return *(uint *)(uVar1 + 0x14);
}

/* ref: FUN_0049c1f0 */
GEN_FRAME uint GEN_THISCALL F_0049c1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49c1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined3 extraout_var = 0;
  
  uVar2 = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  if (param_1 == 3) {
    uVar7 = F_00414500(uVar2 GEN_EDX_FWD,0x11);
    iVar3 = *(int *)(uVar7 + 0x14);
    if (iVar3 == 0) {
      uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x10);
      uVar4 = *(undefined4 *)(uVar7 + 0x14);
      uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0xf);
      uVar2 = *(undefined4 *)(uVar7 + 0x14);
      pvVar8 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x434);
      F_00429200(pvVar8 GEN_EDX_ARG,0);
      uVar7 = F_00428ff0(pvVar8 GEN_EDX_ARG,uVar2,uVar4);
      return uVar7;
    }
    if (iVar3 != 1) {
      if (iVar3 - 2U != 0) {
        return iVar3 - 2U;
      }
      uVar7 = F_00429200(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x434) GEN_EDX_ARG,1);
      return uVar7;
    }
    bVar6 = F_0049c040();
    if (bVar6 == 0) {
      pvVar8 = (undefined *)F_00414500(uVar2 GEN_EDX_ARG,0x11);
      bVar6 = F_00414a40(pvVar8 GEN_EDX_ARG,0,1);
      return CONCAT31(extraout_var,bVar6);
    }
    uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x14);
    uVar4 = *(undefined4 *)(uVar7 + 0x14);
    uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x13);
    uVar5 = *(undefined4 *)(uVar7 + 0x14);
    uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x12);
    F_0049d670((undefined *)((int)this + 0x70) GEN_EDX_ARG,(uint)*(ushort *)(uVar7 + 0x14),uVar5,uVar4);
    F_0049d5b0((undefined *)((int)this + 0x70) GEN_EDX_ARG);
    uVar7 = F_0049d780(this GEN_EDX_ARG);
    return uVar7;
  }
  if (REFG(int, 0x1370b90) == 0) {
    return param_1;
  }
  if (param_1 == 0) {
    uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x10);
    uVar4 = *(undefined4 *)(uVar7 + 0x14);
    uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0xf);
    F_0049d630((undefined *)((int)this + 0x70) GEN_EDX_ARG,(uint)*(ushort *)(uVar7 + 0x14),uVar4);
    puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x674) * 0xc + 0x70)));
    *puVar1 = 8;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(uint *)((int)this + 0x674) = *(int *)((int)this + 0x674) + 1U & 0x7f;
    F_0049d780(this GEN_EDX_ARG);
    uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x10);
    uVar4 = *(undefined4 *)(uVar7 + 0x14);
    uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0xf);
    F_0049d570((undefined *)((int)this + 0x70) GEN_EDX_ARG,(uint)*(ushort *)(uVar7 + 0x14),uVar4);
  }
  else if (param_1 == 1) {
    uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x14);
    uVar4 = *(undefined4 *)(uVar7 + 0x14);
    uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x13);
    uVar5 = *(undefined4 *)(uVar7 + 0x14);
    uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x12);
    F_0049d670((undefined *)((int)this + 0x70) GEN_EDX_ARG,(uint)*(ushort *)(uVar7 + 0x14),uVar5,uVar4);
    F_0049d5b0((undefined *)((int)this + 0x70) GEN_EDX_ARG);
  }
  else {
    uVar7 = param_1 - 2;
    if (uVar7 != 0) goto LAB_0049c4a9;
    if (*(char *)(REFG(int, 0x1370b90) + 0x4c) != '\0') {
      uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x10);
      uVar4 = *(undefined4 *)(uVar7 + 0x14);
      uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0xf);
      F_0049d630((undefined *)((int)this + 0x70) GEN_EDX_ARG,(uint)*(ushort *)(uVar7 + 0x14),uVar4);
      puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x674) * 0xc + 0x70)));
      *puVar1 = 8;
      puVar1[1] = 0;
      *(undefined2 *)(puVar1 + 2) = 0;
      *(uint *)((int)this + 0x674) = *(int *)((int)this + 0x674) + 1U & 0x7f;
      F_0049d780(this GEN_EDX_ARG);
      uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0x10);
      uVar4 = *(undefined4 *)(uVar7 + 0x14);
      uVar7 = F_00414500(uVar2 GEN_EDX_ARG,0xf);
      F_0049d570((undefined *)((int)this + 0x70) GEN_EDX_ARG,(uint)*(ushort *)(uVar7 + 0x14),uVar4);
      F_0049d780(this GEN_EDX_ARG);
    }
    F_0049d5f0((undefined *)((int)this + 0x70) GEN_EDX_ARG);
    F_0049d780(this GEN_EDX_ARG);
    F_0049d630((undefined *)((int)this + 0x70) GEN_EDX_ARG,0xffff,0xffff);
  }
  F_0049d780(this GEN_EDX_ARG);
  uVar7 = F_0049d730(this GEN_EDX_ARG,4);
LAB_0049c4a9: ;
  *(int *)((int)this + 0x678) = *(int *)((int)this + 0x678) + 1;
  return uVar7;
}

/* ref: FUN_0049c4c0 */
GEN_FRAME uint GEN_STDCALL F_0049c4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x49c4c0u, gen_a0, 0u, 0u, 0u);
  if ((*(int *)&gen_a0) == 0) {
    *(undefined4 *)(REFG(int, 0x1370b90) + 0xa4) = 0;
    return 0;
  }
  if (((*(int *)&gen_a0) != 1) && ((*(int *)&gen_a0) == 2)) {
    *(undefined4 *)(REFG(int, 0x1370b90) + 0xa4) = 2;
    return 2;
  }
  *(undefined4 *)(REFG(int, 0x1370b90) + 0xa4) = 1;
  return 1;
}

/* ref: FUN_0049c510 */
GEN_FRAME uint GEN_STDCALL F_0049c510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49c510u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  float10 fVar4;
  undefined4 uVar5;
  
  iVar1 = REFG(int, 0x137104c);
  if (param_1 == 0xffffffff) {
    uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,0x1a2);
    fVar4 = (float10)*(int *)(uVar3 + 0x14);
    if (*(int *)(uVar3 + 0x14) < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar3 = F_004e7710(*(undefined4 *)(iVar1 + 0x25f8) GEN_EDX_ARG,
                         (float)(fVar4 * (float10)*(double *)&REFG(undefined, 0x10928e8)),100);
    return uVar3;
  }
  if (param_1 < 0x65) {
    fVar4 = (float10)(int)param_1;
    if ((int)param_1 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    in_EAX = F_004e7710(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8) GEN_EDX_ARG,
                          (float)(fVar4 * (float10)*(double *)&REFG(undefined, 0x10928e8)),100);
    if ((char)param_2 != '\0') {
      uVar5 = 1;
      this = (undefined *)F_00414500(*(undefined4 *)(iVar1 + 0x10) GEN_EDX_ARG,0x1a2);
      bVar2 = F_00414a40(this GEN_EDX_ARG,param_1,uVar5);
      in_EAX = CONCAT31(extraout_var,bVar2);
    }
  }
  return in_EAX;
}

/* ref: FUN_0049c5c0 */
GEN_FRAME uint GEN_STDCALL F_0049c5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49c5c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 in_ecx;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  float10 fVar4;
  undefined4 uVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0x4))[5] = uVar2;
  if (param_2 != 0xffffffff) {
    if (param_2 < 0x65) {
      fVar4 = (float10)(int)param_2;
      if ((int)param_2 < 0) {
        fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar2 = F_0049bba0(param_1,(float)(fVar4 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
      if ((char)param_3 != '\0') {
        in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
        uVar5 = 1;
        uVar2 = F_0049b700(param_1);
        this = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,uVar2);
        bVar1 = F_00414a40(this GEN_EDX_ARG,param_2,uVar5);
        uVar2 = CONCAT31(extraout_var,bVar1);
      }
    }
    F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
    return uVar2;
  }
  if (param_1 != 5) {
    uVar2 = F_0049bc00(param_1);
    fVar4 = (float10)(int)uVar2;
    if ((int)uVar2 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = F_0049bba0(param_1,(float)(fVar4 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
    F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
    return uVar2;
  }
  uVar2 = 0;
  do {
    ((uint *)(gen_frame + 0x4))[0] = 0x1a3;
    ((uint *)(gen_frame + 0x4))[1] = 0x1a4;
    ((uint *)(gen_frame + 0x4))[2] = 0x1a5;
    ((uint *)(gen_frame + 0x4))[3] = 0x1a6;
    ((uint *)(gen_frame + 0x4))[4] = 0x1a7;
    uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,((uint *)(gen_frame + 0x4))[(int)(uVar2)]);
    fVar4 = (float10)*(int *)(uVar3 + 0x14);
    if (*(int *)(uVar3 + 0x14) < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar3 = F_0049bba0(uVar2,(float)(fVar4 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0049c720 */
GEN_FRAME uint GEN_STDCALL F_0049c720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49c720u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  undefined * this;
  undefined3 extraout_var = 0;
  char cVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  if (param_1 == 0xffffffff) {
    in_EAX = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,0x1af);
    uVar3 = *(uint *)(in_EAX + 0x14);
    cVar2 = '\0';
  }
  else {
    uVar3 = param_1;
    cVar2 = (char)param_2;
  }
  if (uVar3 < 0x65) {
    fVar4 = (float10)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    F_004e7820(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8) GEN_EDX_ARG,
                 (float)(fVar4 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
    if (cVar2 != '\0') {
      uVar5 = 1;
      this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,0x1af);
      bVar1 = F_00414a40(this GEN_EDX_ARG,uVar3,uVar5);
      in_EAX = CONCAT31(extraout_var,bVar1);
    }
  }
  return in_EAX;
}

/* ref: FUN_0049c7b0 */
GEN_FRAME unsigned int F_0049c7b0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x49c7b0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[5];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  float10 fVar2;
  
  if ((!GEN_ISNAN(REFG(float, 0x1087f04)) && !GEN_ISNAN((*(float *)&gen_args[0]))) &&
      (!(REFG(float, 0x1087f04) < (*(float *)&gen_args[0])) && REFG(uint, 0x1087f04) != (*(float *)&gen_args[0]))) {
    iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x90);
    (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[1]);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)&gen_args[4]) - (float10)(*(float *)&gen_args[0]));
    fVar2 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
    (*(float *)(gen_frame + 0x20)) = (*(float *)&gen_args[2]);
    (*(float *)(gen_frame + 0x24)) = (*(float *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    if (iVar1 < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0x14)) = (float)fVar2;
    fVar2 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
    if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0x18)) = (float)fVar2;
    F_00413ab0(&(*(float *)&gen_args[0]) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x1c)));
    F_004134a0(*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a4))),
                 &(*(undefined4 *)(gen_frame + 0xc)),5,&(*(float *)&gen_args[0]),&(*(float *)&gen_args[0]),&(*(float *)&gen_args[0]),&(*(float *)&gen_args[0]),2,&REFG(undefined4, 0x1301dd0));
  }
  return;
}

/* ref: Client::System::Framework::EnvironmentManager::vf1 */
GEN_FRAME uint GEN_THISCALL F_0049c880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49c880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pEVar1;
  ushort uVar2;
  short sVar3;
  undefined4 in_ecx;
  undefined * this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (0.0 < *(float *)(this + 0x38)) {
    *(float *)(this + 0x38) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) - (float10)*param_1)));
  }
  else if (this[0x50] != (undefined1)0x0) {
    fVar8 = (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x48) - (float10)*param_1)));
    *(float *)(this + 0x48) = ((float)GEN_TOF(((float10)*(float *)(this + 0x48) - (float10)*param_1)));
    if (fVar8 <= (float10)0) {
      *(undefined4 *)(this + 0x48) = 0;
      fVar8 = (float10)*(float *)(this + 0x44);
      this[0x50] = (undefined1)0x0;
    }
    else {
      fVar8 = ((float10)1 - fVar8 / (float10)*(float *)(this + 0x4c)) *
              ((float10)*(float *)(this + 0x44) - (float10)*(float *)(this + 0x40)) +
              (float10)*(float *)(this + 0x40);
    }
    *(float *)(this + 0x3c) = (float)fVar8;
  }
  F_0049c7b0(*(float *)(this + 0x3c),*(float *)(this + 0x58),*(float *)(this + 0x5c),
               *(float *)(this + 0x60),*(float *)(this + 100));
  uVar6 = REFG(undefined4, 0x1370b90);
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x434);
  uVar7 = *(uint *)(this + 0x670);
  if (uVar7 != *(uint *)(this + 0x674)) {
    pEVar1 = this + uVar7 * 0xc + 0x70;
    uVar7 = *(int *)pEVar1 - 1;
    switch((unsigned int)(uintptr_t)(uVar7)) {
    case 0: ;
      pEVar1 = pEVar1 + 4;
      *(short *)pEVar1 = *(short *)pEVar1 - 1;
      if (*(short *)pEVar1 != 0) goto LAB_0049cafb;
      *(int *)(this + 0x678) = *(int *)(this + 0x678) - 1;
      break;
    case 1: ;
      if (*(char *)(REFG(undefined4, 0x1370b90) + 0x4c) != '\0') {
        *(undefined1 *)(REFG(undefined4, 0x1370b90) + 0x4d) = 0;
      }
      if (*(char *)((int)this_00 + 0x1d) != '\0') {
        F_00429200(this_00 GEN_EDX_ARG,0);
      }
      uVar7 = F_00414500(in_ecx GEN_EDX_ARG,0xd);
      iVar4 = *(int *)(uVar7 + 0x14);
      uVar7 = F_00414500(in_ecx GEN_EDX_ARG,0xe);
      iVar5 = *(int *)(uVar7 + 0x14);
      F_004291d0(this_00 GEN_EDX_ARG,iVar4,iVar5);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x8)) + 8)) = 0;
      (*(int *)(gen_frame + 0x14)) = 0;
      gen_imp_ClientToScreen(*(HWND *)((int)this_00 + 8),(LPPOINT)(((undefined1 *)(gen_frame + 0x8)) + 8));
      F_004291d0(this_00 GEN_EDX_ARG,iVar4 * 2 - (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x8)) + 8)),iVar5 * 2 - (*(int *)(gen_frame + 0x14)));
      uVar7 = F_0049b780((uint)*(ushort *)(pEVar1 + 4),(uint)*(ushort *)(pEVar1 + 6));
      *(int *)(this + 0x678) = *(int *)(this + 0x678) - 1;
      break;
    case 2: ;
      if (*(char *)((int)this_00 + 0x1d) != '\0') {
        uVar7 = F_00429200(this_00 GEN_EDX_ARG,0);
      }
      *(int *)(this + 0x678) = *(int *)(this + 0x678) - 1;
      break;
    case 3: ;
      if (*(char *)(REFG(undefined4, 0x1370b90) + 0x4c) != '\0') {
        *(undefined1 *)(REFG(undefined4, 0x1370b90) + 0x4d) = 0;
      }
      if (*(char *)((int)this_00 + 0x1d) == '\0') {
        uVar7 = F_00429200(this_00 GEN_EDX_ARG,1);
      }
      *(int *)(this + 0x678) = *(int *)(this + 0x678) - 1;
      break;
    case 4: ;
      if ((*(int *)(REFG(undefined4, 0x1370b90) + 0x38) != 1) && (*(int *)(REFG(undefined4, 0x1370b90) + 0x38) != 5))
      goto LAB_0049cafb;
      *(int *)(this + 0x678) = *(int *)(this + 0x678) - 1;
      break;
    case 5: ;
      if (*(ushort *)(pEVar1 + 4) == 0xffff) {
        gen_imp_GetClientRect(*(HWND *)((int)this_00 + 8),(LPRECT)((undefined1 *)(gen_frame + 0x8)));
        *(undefined4 *)(uVar6 + 0x68) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x8)) + 8)) - (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x8)) + 0));
        *(int *)(uVar6 + 0x6c) = (*(int *)(gen_frame + 0x14)) - (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x8)) + 4));
        uVar7 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x8)) + 8)) - (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x8)) + 0));
      }
      else {
        F_00428ff0(this_00 GEN_EDX_ARG,(uint)*(ushort *)(pEVar1 + 4),(uint)*(ushort *)(pEVar1 + 6));
        uVar2 = *(ushort *)(pEVar1 + 6);
        *(uint *)(uVar6 + 0x68) = (uint)*(ushort *)(pEVar1 + 4);
        *(uint *)(uVar6 + 0x6c) = (uint)uVar2;
        uVar7 = uVar6;
      }
      break;
    case 6: ;
      uVar7 = F_0049bfc0((uint)*(ushort *)(pEVar1 + 4),(uint)*(ushort *)(pEVar1 + 6),
                           (uint)*(ushort *)(pEVar1 + 8));
      break;
    case 7: ;
      sVar3 = *(short *)(pEVar1 + 4);
      *(bool *)(REFG(undefined4, 0x1370b90) + 0x4d) = sVar3 == 1;
      uVar7 = CONCAT31((int3)(uVar7 >> 8),sVar3 == 1);
    }
    *(uint *)(this + 0x670) = *(int *)(this + 0x670) + 1U & 0x7f;
  }
LAB_0049cafb: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_0049cb30 */
GEN_FRAME uint GEN_THISCALL F_0049cb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49cb30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined * pvVar2;
  undefined4 in_ecx;
  uint uVar3;
  undefined * pvVar4;
  undefined3 uVar6;
  uint uVar5;
  int * piVar7;
  char cVar8;
  bool bVar9;
  
  pvVar2 = REFG(void * PTR32, 0x1371278);
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  pvVar4 = REFG(void * PTR32, 0x137104c);
  uVar5 = *(uint *)(param_2 + 0x14);
  if (param_1 < 0x19f) {
    if (param_1 == 0x19e) {
      *(uint *)((int)this + 0x40) = uVar5;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_FWD);
      return (uint)pvVar4;
    }
    cVar8 = (char)uVar5;
    uVar6 = (undefined3)((uint)REFG(void * PTR32, 0x137104c) >> 8);
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0x15: ;
      if (uVar5 == 0) {
        *(undefined4 *)(REFG(int, 0x1370b90) + 0xa4) = 0;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return 0;
      }
      if ((uVar5 != 1) && (uVar5 == 2)) {
        *(undefined4 *)(REFG(int, 0x1370b90) + 0xa4) = 2;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return 2;
      }
      *(undefined4 *)(REFG(int, 0x1370b90) + 0xa4) = 1;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return 1;
    case 0x16: ;
      if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1e))) != cVar8) {
        *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1e))) = cVar8;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 10;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)pvVar4;
      }
      break;
    case 0x18: ;
      pvVar4 = (undefined *)F_00414500(*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))) GEN_EDX_ARG,0x11);
      iVar1 = REFG(int, 0x1370b90);
      if (*(int *)((int)pvVar4 + 0x14) != 0) {
        uVar5 = F_004292d0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x434))) GEN_EDX_ARG,(uint)(uVar5 == 1),1);
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return uVar5;
      }
      if ((REFG(int, 0x1370b90) != 0) && (*(char *)(REFG(int, 0x1370b90) + 0x4c) == '\0')) {
        pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x434)));
        F_004292d0(pvVar2 GEN_EDX_ARG,(uint)(uVar5 == 1),0);
        gen_imp_GetClientRect(*(HWND *)((int)pvVar2 + 8),(LPRECT)((byte *)(gen_frame + 0x8)));
        (*(undefined1 *)((char *)&uVar5 + 0)) = ((byte *)(gen_frame + 0x8))[8];
        (*(undefined1 *)((char *)&uVar5 + 1)) = ((byte *)(gen_frame + 0x8))[9];
        (*(undefined1 *)((char *)&uVar5 + 2)) = ((byte *)(gen_frame + 0x8))[10];
        (*(undefined1 *)((char *)&uVar5 + 3)) = ((byte *)(gen_frame + 0x8))[0xb];
        *(undefined4 *)(iVar1 + 0x68) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
        *(undefined4 *)(iVar1 + 0x6c) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return uVar5;
      }
      break;
    case 0x19: ;
      uVar5 = F_00424aa0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG,(uint)(uVar5 == 0));
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0x1a: ;
      *(uint *)((int)this + 0x44) = uVar5;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return (uint)pvVar4;
    case 0x1b: ;
      uVar5 = F_0049dca0(REFG(void * PTR32, 0x1371278) GEN_EDX_ARG,uVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0x1d: ;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x20))) = cVar8;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 4;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return (uint)pvVar4;
    case 0x1e: ;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x21))) = cVar8;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 4;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return (uint)pvVar4;
    case 0x1f: ;
      if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x17))) != cVar8) {
        *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x17))) = cVar8;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 2;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)pvVar4;
      }
      break;
    case 0x20: ;
      if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x18))) != cVar8) {
        *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x18))) = cVar8;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 2;
      }
      bVar9 = 1 < uVar5;
      pvVar4 = ((undefined *)GEN_TOP(CONCAT31(uVar6,bVar9)));
      if ((bool)*(char *)((int)pvVar2 + 0x19) != bVar9) {
        *(bool *)((int)pvVar2 + 0x19) = bVar9;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 2;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)pvVar4;
      }
      break;
    case 0x21: ;
      bVar9 = uVar5 != 0;
      pvVar4 = ((undefined *)GEN_TOP(CONCAT31(uVar6,bVar9)));
      if ((bool)*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1a))) != bVar9) {
        *((bool *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1a))) = bVar9;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 2;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)pvVar4;
      }
      break;
    case 0x22: ;
      bVar9 = uVar5 != 0;
      pvVar4 = ((undefined *)GEN_TOP(CONCAT31(uVar6,bVar9)));
      if ((bool)*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1b))) != bVar9) {
        *((bool *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1b))) = bVar9;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 2;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)pvVar4;
      }
      break;
    case 0x23: ;
      bVar9 = uVar5 != 0;
      pvVar4 = ((undefined *)GEN_TOP(CONCAT31(uVar6,bVar9)));
      if ((bool)*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1c))) != bVar9) {
        *((bool *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1c))) = bVar9;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 2;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)pvVar4;
      }
      break;
    case 0x24: ;
      bVar9 = uVar5 != 0;
      pvVar4 = ((undefined *)GEN_TOP(CONCAT31(uVar6,bVar9)));
      if ((bool)*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1d))) != bVar9) {
        *((bool *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1d))) = bVar9;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 2;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)pvVar4;
      }
      break;
    case 0x25: ;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x24))) = cVar8;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 0x10;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return (uint)pvVar4;
    case 0x26: ;
      uVar5 = F_0049dd90(REFG(void * PTR32, 0x1371278) GEN_EDX_ARG,uVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0x28: ;
      if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x26))) != cVar8) {
        *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x26))) = cVar8;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 0x20;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)pvVar4;
      }
      break;
    case 0x29: ;
      if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x27))) != cVar8) {
        *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x27))) = cVar8;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 0x20;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)pvVar4;
      }
      break;
    case 0x2a: ;
      if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x28))) != cVar8) {
        *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x28))) = cVar8;
        *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 0x20;
        F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)pvVar4;
      }
      break;
    case 0x2b: ;
      *((bool *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x13))) = uVar5 != 0;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 1;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return CONCAT31(uVar6,uVar5 != 0);
    case 0x2c: ;
      *((bool *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x14))) = uVar5 != 0;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 1;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return CONCAT31(uVar6,uVar5 != 0);
    case 0x2d: ;
      uVar5 = F_0049dd50(REFG(void * PTR32, 0x1371278) GEN_EDX_ARG,uVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0x2e: ;
      *((bool *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x16))) = uVar5 != 0;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 0x100;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return CONCAT31(uVar6,uVar5 != 0);
    case 0x2f: ;
      *((bool *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x15))) = uVar5 != 0;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 0x80;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return CONCAT31(uVar6,uVar5 != 0);
    case 0x35: ;
      uVar5 = F_0049ddf0(REFG(void * PTR32, 0x1371278) GEN_EDX_ARG,0,uVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0x36: ;
      uVar5 = F_0049ddf0(REFG(void * PTR32, 0x1371278) GEN_EDX_ARG,1,uVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0x37: ;
      uVar5 = F_0049ddf0(REFG(void * PTR32, 0x1371278) GEN_EDX_ARG,3,uVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0x38: ;
      uVar5 = F_0049ddf0(REFG(void * PTR32, 0x1371278) GEN_EDX_ARG,2,uVar5);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0x3d: ;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x1f))) = cVar8;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 0x400;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return (uint)pvVar4;
    case 0x41: ;
      in_ecx = *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8)));
      (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),uVar5 == 0);
      F_004e7660(in_ecx GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
      if (uVar5 == 0) {
        piVar7 = ((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x1274)));
        iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
        uVar5 = F_004e7680(in_ecx GEN_EDX_ARG,(uint)(iVar1 != 0),100);
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return uVar5;
      }
      piVar7 = ((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x1274)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
      uVar5 = F_004e7680(in_ecx GEN_EDX_ARG,(uint)(iVar1 == 0),100);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0xab: ;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x29))) = cVar8;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 0x40;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return (uint)pvVar4;
    case 0xac: ;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x2a))) = cVar8;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 0x40;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return (uint)pvVar4;
    case 0xad: ;
      *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1371278) + 0x2b))) = cVar8;
      *(uint *)((int)pvVar2 + 4) = *(uint *)((int)pvVar2 + 4) | 0x40;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return (uint)pvVar4;
    }
  }
  else {
    switch((unsigned int)(uintptr_t)(param_1 - 0x1a2)) {
    case 0: ;
      uVar5 = F_0049c510(uVar5,0);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 1: ;
      uVar5 = F_0049c5c0(0,uVar5,0);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 2: ;
      uVar5 = F_0049c5c0(1,uVar5,0);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 3: ;
      uVar5 = F_0049c5c0(2,uVar5,0);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 4: ;
      uVar5 = F_0049c5c0(3,uVar5,0);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 5: ;
      uVar5 = F_0049c5c0(4,uVar5,0);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 6: ;
      uVar5 = F_004e77b0(*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) GEN_EDX_ARG,
                           CONCAT31((int3)(param_1 - 0x1a2 >> 8),uVar5 != 0));
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 7: ;
      uVar5 = F_004e8ae0(*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) GEN_EDX_ARG,(uint)(uVar5 == 1));
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 8: ;
      uVar5 = F_004e8c00(*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) GEN_EDX_ARG,(uint)(uVar5 == 1));
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 9: ;
      uVar5 = F_004e8d70(*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) GEN_EDX_ARG,(uint)(uVar5 == 1));
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 10: ;
      uVar5 = F_004e8e50(*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) GEN_EDX_ARG,(uint)(uVar5 == 1));
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0xb: ;
      uVar5 = F_004e8de0(*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) GEN_EDX_ARG,(uint)(uVar5 == 1));
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar5;
    case 0xd: ;
      pvVar4 = (undefined *)F_0049c720(uVar5,0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return (uint)pvVar4;
}

/* ref: FUN_0049d4a0 */
GEN_FRAME uint GEN_THISCALL F_0049d4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49d4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0049d4b0 */
GEN_FRAME uint GEN_THISCALL F_0049d4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49d4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00414a40(*(undefined * PTR32 *)this GEN_EDX_FWD,param_1,1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0049d4d0 */
GEN_FRAME uint GEN_THISCALL F_0049d4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49d4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00414500(*in_ecx GEN_EDX_FWD,param_3);
  *param_2 = uVar1;
  return (uint)param_2;
}

/* ref: FUN_0049d4f0 */
GEN_FRAME byte GEN_THISCALL F_0049d4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49d4f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x4d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0049d500 */
GEN_FRAME uint GEN_THISCALL F_0049d500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49d500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 100) = param_2;
  return param_2;
}

/* ref: FUN_0049d510 */
GEN_FRAME uint GEN_THISCALL F_0049d510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49d510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa4) = param_2;
  return param_2;
}

/* ref: FUN_0049d570 */
GEN_FRAME uint GEN_THISCALL F_0049d570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49d570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x604) * 0xc)));
  *(undefined2 *)(puVar1 + 1) = (undefined2)param_1;
  *(undefined2 *)((int)puVar1 + 6) = (undefined2)param_2;
  *puVar1 = 2;
  *(undefined2 *)(puVar1 + 2) = 0;
  uVar2 = *(int *)((int)this + 0x604) + 1U & 0x7f;
  *(uint *)((int)this + 0x604) = uVar2;
  return uVar2;
}

/* ref: FUN_0049d5b0 */
GEN_NOFRAME uint GEN_THISCALL F_0049d5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49d5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x604) * 0xc)));
  *puVar1 = 3;
  *(undefined2 *)(puVar1 + 1) = 0;
  *(undefined2 *)((int)puVar1 + 6) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  uVar2 = *(int *)((int)this + 0x604) + 1U & 0x7f;
  *(uint *)((int)this + 0x604) = uVar2;
  return uVar2;
}

/* ref: FUN_0049d5f0 */
GEN_NOFRAME uint GEN_THISCALL F_0049d5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49d5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x604) * 0xc)));
  *puVar1 = 4;
  *(undefined2 *)(puVar1 + 1) = 0;
  *(undefined2 *)((int)puVar1 + 6) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  uVar2 = *(int *)((int)this + 0x604) + 1U & 0x7f;
  *(uint *)((int)this + 0x604) = uVar2;
  return uVar2;
}

/* ref: FUN_0049d630 */
GEN_FRAME uint GEN_THISCALL F_0049d630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49d630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x604) * 0xc)));
  *(undefined2 *)(puVar1 + 1) = (undefined2)param_1;
  *(undefined2 *)((int)puVar1 + 6) = (undefined2)param_2;
  *puVar1 = 6;
  *(undefined2 *)(puVar1 + 2) = 0;
  uVar2 = *(int *)((int)this + 0x604) + 1U & 0x7f;
  *(uint *)((int)this + 0x604) = uVar2;
  return uVar2;
}

/* ref: FUN_0049d670 */
GEN_FRAME uint GEN_THISCALL F_0049d670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49d670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x604) * 0xc)));
  *(undefined2 *)(puVar1 + 1) = (undefined2)param_1;
  *(undefined2 *)((int)puVar1 + 6) = (undefined2)param_2;
  *puVar1 = 7;
  *(undefined2 *)(puVar1 + 2) = (undefined2)param_3;
  uVar2 = *(int *)((int)this + 0x604) + 1U & 0x7f;
  *(uint *)((int)this + 0x604) = uVar2;
  return uVar2;
}

/* ref: FUN_0049d6c0 */
GEN_FRAME uint GEN_THISCALL F_0049d6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49d6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x604) * 0xc)));
  *puVar1 = 8;
  *(ushort *)(puVar1 + 1) = (ushort)((char)param_1 != '\0');
  *(undefined2 *)((int)puVar1 + 6) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  uVar2 = *(int *)((int)this + 0x604) + 1U & 0x7f;
  *(uint *)((int)this + 0x604) = uVar2;
  return uVar2;
}

/* ref: FUN_0049d730 */
GEN_FRAME uint GEN_THISCALL F_0049d730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49d730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x674) * 0xc + 0x70)));
  *(undefined2 *)(puVar1 + 1) = (undefined2)param_1;
  *puVar1 = 1;
  *(undefined2 *)((int)puVar1 + 6) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  uVar2 = *(int *)((int)this + 0x674) + 1U & 0x7f;
  *(uint *)((int)this + 0x674) = uVar2;
  *(int *)((int)this + 0x678) = *(int *)((int)this + 0x678) + 1;
  return uVar2;
}

/* ref: FUN_0049d780 */
GEN_NOFRAME uint GEN_THISCALL F_0049d780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49d780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x674) * 0xc + 0x70)));
  *puVar1 = 5;
  *(undefined2 *)(puVar1 + 1) = 0;
  *(undefined2 *)((int)puVar1 + 6) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  uVar2 = *(int *)((int)this + 0x674) + 1U & 0x7f;
  *(uint *)((int)this + 0x674) = uVar2;
  *(int *)((int)this + 0x678) = *(int *)((int)this + 0x678) + 1;
  return uVar2;
}

/* ref: FUN_0049d7c0 */
GEN_FRAME uint GEN_THISCALL F_0049d7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x49d7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)this = param_4;
  *(uint *)((int)this + 4) = param_5;
  return param_5;
}

/* ref: FUN_0049d810 */
GEN_FRAME uint GEN_THISCALL F_0049d810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49d810u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_0049d830 */
GEN_FRAME uint GEN_THISCALL F_0049d830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49d830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)this |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_0049d860 */
GEN_FRAME uint GEN_THISCALL F_0049d860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49d860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 4);
  **(uint * PTR32 *)this =
       ~(1 << (bVar1 & 0x1f)) & **(uint * PTR32 *)this | (uint)((char)param_1 != '\0') << (bVar1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_0049d890 */
GEN_FRAME uint F_0049d890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49d890u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  
  puVar1 = param_1;
  if (*param_2 <= *param_1) {
    puVar1 = param_2;
  }
  return (uint)puVar1;
}

/* ref: FUN_0049d8b0 */
GEN_FRAME uint F_0049d8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49d8b0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  
  puVar1 = param_1;
  if (*param_1 <= *param_2) {
    puVar1 = param_2;
  }
  return (uint)puVar1;
}

/* ref: FUN_0049d8d0 */
GEN_FRAME uint F_0049d8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49d8d0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * pbVar1;
  
  pbVar1 = param_1;
  if (*param_2 <= *param_1) {
    pbVar1 = param_2;
  }
  return (uint)pbVar1;
}

/* ref: FUN_0049d8f0 */
GEN_FRAME uint F_0049d8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49d8f0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * pbVar1;
  
  pbVar1 = param_1;
  if (*param_1 <= *param_2) {
    pbVar1 = param_2;
  }
  return (uint)pbVar1;
}

/* ref: FUN_0049d910 */
GEN_FRAME uint GEN_THISCALL F_0049d910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49d910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_0049d9d0 */
GEN_FRAME uint GEN_THISCALL F_0049d9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49d9d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x70) + param_2 * 0xc;
}

/* ref: FUN_0049d9f0 */
GEN_FRAME unsigned int GEN_THISCALL F_0049d9f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x49d9f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar3 = REFG(undefined4, 0x1302e50);
  uVar2 = REFG(undefined4, 0x1302e4c);
  uVar1 = REFG(undefined4, 0x1302e48);
  if (*(char *)(param_1 + 0x34) != '\0') {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x58) = REFG(undefined4, 0x1302e44);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x48);
    if (!((float10)param_2 < (float10)fVar4)) goto LAB_0049da53;
  }
  *(float *)(param_1 + 0x48) = param_2;
  fVar4 = param_2;
LAB_0049da53: ;
  *(float *)(param_1 + 0x4c) = fVar4;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = 0;
  return 0;
}

/* ref: FUN_0049da70 */
GEN_FRAME uint GEN_THISCALL F_0049da70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49da70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_2 = in_ecx;
  param_2[1] = param_3;
  return (uint)param_2;
}

/* ref: FUN_0049da90 */
GEN_FRAME uint F_0049da90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49da90u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint * puVar1;
  
  puVar1 = param_1;
  if (*param_3 <= *param_1) {
    puVar1 = param_3;
  }
  if (*puVar1 <= *param_2) {
    puVar1 = param_2;
  }
  return (uint)puVar1;
}

/* ref: FUN_0049dab0 */
GEN_FRAME uint F_0049dab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49dab0u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte * pbVar1;
  
  pbVar1 = param_1;
  if (*param_3 <= *param_1) {
    pbVar1 = param_3;
  }
  if (*pbVar1 <= *param_2) {
    pbVar1 = param_2;
  }
  return (uint)pbVar1;
}

/* ref: FUN_0049dad0 */
GEN_NOFRAME uint GEN_THISCALL F_0049dad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49dad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x28);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10928d8));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10928cc));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    F_00414620(*(undefined * PTR32 *)((int)this + 0x30) GEN_EDX_FWD,puVar1);
  }
  uVar2 = F_004a05c0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Framework::EnvironmentManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_0049db00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49db00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pEVar1;
  
  pEVar1 = this + 0x28;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10928d8));
  *(undefined * PTR32 * PTR32 *)pEVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10928cc));
  *(undefined * PTR32 * PTR32 *)pEVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    F_00414620(*(undefined * PTR32 *)(this + 0x30) GEN_EDX_FWD,pEVar1);
  }
  F_004a05c0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0049db50 */
GEN_NOFRAME uint GEN_THISCALL F_0049db50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49db50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0049db00((undefined *)((int)this - 0x28) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0049db60 */
GEN_FRAME uint GEN_THISCALL F_0049db60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49db60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 4) = ~uVar1 & *(uint *)((int)this + 4) | uVar1;
  return uVar1;
}

/* ref: FUN_0049db80 */
GEN_FRAME byte GEN_THISCALL F_0049db80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49db80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x17) != (byte)param_2) {
    *(byte *)(in_ecx + 0x17) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 2;
  }
  return (byte)param_2;
}

/* ref: FUN_0049dba0 */
GEN_FRAME byte GEN_THISCALL F_0049dba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x18) != (byte)param_2) {
    *(byte *)(in_ecx + 0x18) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 2;
  }
  return (byte)param_2;
}

/* ref: FUN_0049dbc0 */
GEN_FRAME byte GEN_THISCALL F_0049dbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dbc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x19) != (byte)param_2) {
    *(byte *)(in_ecx + 0x19) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 2;
  }
  return (byte)param_2;
}

/* ref: FUN_0049dbe0 */
GEN_FRAME byte GEN_THISCALL F_0049dbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dbe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x1a) != (byte)param_2) {
    *(byte *)(in_ecx + 0x1a) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 2;
  }
  return (byte)param_2;
}

/* ref: FUN_0049dc00 */
GEN_FRAME byte GEN_THISCALL F_0049dc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dc00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x1b) != (byte)param_2) {
    *(byte *)(in_ecx + 0x1b) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 2;
  }
  return (byte)param_2;
}

/* ref: FUN_0049dc20 */
GEN_FRAME byte GEN_THISCALL F_0049dc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dc20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x1c) != (byte)param_2) {
    *(byte *)(in_ecx + 0x1c) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 2;
  }
  return (byte)param_2;
}

/* ref: FUN_0049dc40 */
GEN_FRAME byte GEN_THISCALL F_0049dc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dc40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x1e) != (byte)param_2) {
    *(byte *)(in_ecx + 0x1e) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 10;
  }
  return (byte)param_2;
}

/* ref: FUN_0049dc60 */
GEN_FRAME byte GEN_THISCALL F_0049dc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dc60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x1d) != (byte)param_2) {
    *(byte *)(in_ecx + 0x1d) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 2;
  }
  return (byte)param_2;
}

/* ref: FUN_0049dc80 */
GEN_FRAME byte GEN_THISCALL F_0049dc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dc80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1f) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 0x400;
  return (byte)param_2;
}

/* ref: FUN_0049dca0 */
GEN_FRAME uint GEN_THISCALL F_0049dca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dca0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  float10 fVar3;
  
  ((uint *)(gen_frame + 0x4))[1] = 100;
  ((uint *)(gen_frame + 0x4))[0] = 0;
  if ((*(uint *)&gen_args[1]) < 100) {
    puVar2 = &(*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) == 0) {
      puVar2 = ((uint *)(gen_frame + 0x4));
    }
  }
  else {
    puVar2 = ((uint *)(gen_frame + 0x4)) + 1;
  }
  uVar1 = *puVar2;
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != uVar1) {
    fVar3 = (float10)(int)(100 - uVar1);
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar1;
    if ((int)(100 - uVar1) < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) =
         ((float)GEN_TOF(((fVar3 / (float10)*(double *)&REFG(undefined, 0x1088118)) * (float10)*(double *)&REFG(undefined, 0x10920a8) +
                (float10)*(double *)&REFG(undefined, 0x1090b18))));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) | 0x200;
  }
  return uVar1;
}

/* ref: FUN_0049dd10 */
GEN_FRAME byte GEN_THISCALL F_0049dd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dd10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 4;
  return (byte)param_2;
}

/* ref: FUN_0049dd30 */
GEN_FRAME byte GEN_THISCALL F_0049dd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dd30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x21) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 4;
  return (byte)param_2;
}

/* ref: FUN_0049dd50 */
GEN_FRAME uint GEN_THISCALL F_0049dd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint3 uVar2;
  char * pcVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  gen_piece_set(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)((uint3)this));
  uVar2 = (uint3)(*(undefined * PTR32 *)(gen_frame + 0x8));
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 1;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)) = 0;
  gen_piece_set(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)(uVar2 & 0xffff));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT13(1,(uint3)(*(undefined * PTR32 *)(gen_frame + 0x8)))));
  if ((char)param_1 == '\0') {
    pcVar3 = (char *)((int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2);
  }
  else {
    pcVar3 = (char *)((int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  }
  cVar1 = *pcVar3;
  if (*(char *)((int)this + 0x22) != cVar1) {
    *(char *)((int)this + 0x22) = cVar1;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 8;
  }
  return CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),cVar1);
}

/* ref: FUN_0049dd90 */
GEN_FRAME uint GEN_THISCALL F_0049dd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint3 uVar2;
  char * pcVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  gen_piece_set(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)((uint3)this));
  uVar2 = (uint3)(*(undefined * PTR32 *)(gen_frame + 0x8));
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 1;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2)) = 0;
  gen_piece_set(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)(uVar2 & 0xffff));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT13(1,(uint3)(*(undefined * PTR32 *)(gen_frame + 0x8)))));
  if ((char)param_1 == '\0') {
    pcVar3 = (char *)((int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 2);
  }
  else {
    pcVar3 = (char *)((int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  }
  cVar1 = *pcVar3;
  if (*(char *)((int)this + 0x23) != cVar1) {
    *(char *)((int)this + 0x23) = cVar1;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 8;
  }
  return CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),cVar1);
}

/* ref: FUN_0049ddd0 */
GEN_FRAME byte GEN_THISCALL F_0049ddd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ddd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x24) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 0x10;
  return (byte)param_2;
}

/* ref: FUN_0049ddf0 */
GEN_FRAME uint GEN_THISCALL F_0049ddf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ddf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ~(1 << ((byte)param_1 & 0x1f)) & (uint)*(byte *)((int)this + 0x25) |
          (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  if (*(byte *)((int)this + 0x25) != uVar1) {
    *(char *)((int)this + 0x25) = (char)uVar1;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x20;
  }
  return uVar1;
}

/* ref: FUN_0049de30 */
GEN_FRAME byte GEN_THISCALL F_0049de30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49de30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x26) != (byte)param_2) {
    *(byte *)(in_ecx + 0x26) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 0x20;
  }
  return (byte)param_2;
}

/* ref: FUN_0049de50 */
GEN_FRAME byte GEN_THISCALL F_0049de50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49de50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x27) != (byte)param_2) {
    *(byte *)(in_ecx + 0x27) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 0x20;
  }
  return (byte)param_2;
}

/* ref: FUN_0049de70 */
GEN_FRAME byte GEN_THISCALL F_0049de70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49de70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(byte *)(in_ecx + 0x28) != (byte)param_2) {
    *(byte *)(in_ecx + 0x28) = (byte)param_2;
    *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 0x20;
  }
  return (byte)param_2;
}

/* ref: FUN_0049de90 */
GEN_FRAME byte GEN_THISCALL F_0049de90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49de90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x29) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 0x40;
  return (byte)param_2;
}

/* ref: FUN_0049deb0 */
GEN_FRAME byte GEN_THISCALL F_0049deb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49deb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2a) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 0x40;
  return (byte)param_2;
}

/* ref: FUN_0049ded0 */
GEN_FRAME byte GEN_THISCALL F_0049ded0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ded0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2b) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 0x40;
  return (byte)param_2;
}

/* ref: FUN_0049def0 */
GEN_FRAME byte GEN_THISCALL F_0049def0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49def0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 1;
  return (byte)param_2;
}

/* ref: FUN_0049df10 */
GEN_FRAME byte GEN_THISCALL F_0049df10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49df10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x14) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 1;
  return (byte)param_2;
}

/* ref: FUN_0049df30 */
GEN_FRAME byte GEN_THISCALL F_0049df30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49df30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x15) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 0x80;
  return (byte)param_2;
}

/* ref: FUN_0049df50 */
GEN_FRAME byte GEN_THISCALL F_0049df50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49df50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x16) = (byte)param_2;
  *(uint *)(in_ecx + 4) = *(uint *)(in_ecx + 4) | 0x100;
  return (byte)param_2;
}

/* ref: Client::System::Input::TextServiceInterface::vf4 */
GEN_NOFRAME unsigned int F_0049df90(void)
{
  GEN_ENTER(0x49df90u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Input::TextServiceInterface::vf14 */
GEN_NOFRAME byte F_0049dfb0(void)
{
  GEN_ENTER(0x49dfb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Input::TextServiceInterface::vf16 */
GEN_NOFRAME uint GEN_THISCALL F_0049dfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::TextServiceInterface::vf17 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049dfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Input::TextServiceInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_0049dfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49dfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x10928f4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0049e040 */
GEN_NOFRAME uint F_0049e040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x49e040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  int * piVar1;
  int * in_EAX = 0;
  uint uVar2;
  
  if (REFG(int * PTR32, 0x1372640) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1372640) + 0x10))))(REFG(int * PTR32, 0x1372640) GEN_EDX_ARG);
    piVar1 = ((int *)GEN_TOP(REFG(int * PTR32, 0x1372640)[1]));
    in_EAX = REFG(int * PTR32, 0x1372640);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))
                        (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_0049e070 */
GEN_FRAME uint F_0049e070(unsigned int gen_a0)
{
  GEN_ENTER(0x49e070u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x1372640);
  if ((REFG(undefined4, 0x1372640) != 0) && (piVar1 = *(int * PTR32 *)(REFG(undefined4, 0x1372640) + 4), piVar1 != (int *)0x0)) {
    REFG(undefined4, 0x1301048) = param_1;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,&REFG(undefined4, 0x1372668),param_1);
  }
  return uVar2;
}

/* ref: FUN_0049e0a0 */
GEN_FRAME uint F_0049e0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49e0a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = REFG(int * PTR32, 0x1372640);
  if ((REFG(int * PTR32, 0x1372640) != (int *)0x0) && (piVar1 = ((int *)GEN_TOP(REFG(int * PTR32, 0x1372640)[1])), piVar1 != (int *)0x0)) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,&REFG(undefined4, 0x1372668),param_1)));
    if (REFG(int, 0x1301048) == param_1) {
      piVar2 = param_2;
      if (0 < (int)param_2) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1372640) + 0x18))))
                          (REFG(int * PTR32, 0x1372640) GEN_EDX_ARG,~-(uint)(param_1 != 0) & (uint)param_2);
        return uVar3;
      }
    }
    else {
      REFG(int, 0x1301048) = param_1;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_0049e100 */
GEN_FRAME uint F_0049e100(unsigned int gen_a0)
{
  GEN_ENTER(0x49e100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(undefined1, 0x1372644) = 0;
  F_0042cef0(&REFG(undefined, 0x13726d0) GEN_EDX_ARG,param_1);
  uVar2 = REFG(undefined4, 0x1372640);
  if ((REFG(undefined4, 0x1372640) != 0) && (piVar1 = *(int * PTR32 *)(REFG(undefined4, 0x1372640) + 4), piVar1 != (int *)0x0)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,&REFG(undefined, 0x13726d0));
  }
  return uVar2;
}

/* ref: FUN_0049e140 */
GEN_FRAME uint GEN_THISCALL F_0049e140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49e140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x1372640);
  if ((REFG(undefined4, 0x1372640) != 0) && (piVar1 = *(int * PTR32 *)(REFG(undefined4, 0x1372640) + 4), piVar1 != (int *)0x0)) {
    REFG(undefined4, 0x1301048) = param_1;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,&REFG(undefined4, 0x1372668),param_1);
  }
  return uVar2;
}

/* ref: FUN_0049e170 */
GEN_FRAME uint GEN_THISCALL F_0049e170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49e170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = REFG(int * PTR32, 0x1372640);
  if ((REFG(int * PTR32, 0x1372640) != (int *)0x0) && (piVar1 = ((int *)GEN_TOP(REFG(int * PTR32, 0x1372640)[1])), piVar1 != (int *)0x0)) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_FWD,&REFG(undefined4, 0x1372668),param_1)));
    if (REFG(int, 0x1301048) == param_1) {
      piVar2 = param_2;
      if (0 < (int)param_2) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1372640) + 0x18))))
                          (REFG(int * PTR32, 0x1372640) GEN_EDX_ARG,~-(uint)(param_1 != 0) & (uint)param_2);
        return uVar3;
      }
    }
    else {
      REFG(int, 0x1301048) = param_1;
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Input::TextService::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049e1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49e1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Input::TextService::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049e1e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49e1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0xc] != (undefined1)0x0) {
    F_00b11460(&REFG(undefined * PTR32, 0x130104c) GEN_EDX_FWD);
    if (REFG(undefined4, 0x1372654) != (HIMC)0x0) {
      gen_imp_ImmReleaseContext(REFG(undefined4, 0x1372650),REFG(undefined4, 0x1372654));
      REFG(undefined4, 0x1372654) = (HIMC)0x0;
    }
  }
  return;
}

/* ref: Client::System::Input::TextService::vf4 */
GEN_FRAME byte GEN_THISCALL F_0049e210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49e210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(uint *)(gen_frame + 0x98)) = uVar2;
  if (this[0xc] != (undefined1)0x0) {
    ((byte *)(gen_frame + 0x4))[0] = 0x94;
    ((byte *)(gen_frame + 0x4))[1] = 0;
    ((byte *)(gen_frame + 0x4))[2] = 0;
    ((byte *)(gen_frame + 0x4))[3] = 0;
    uVar2 = gen_imp_GetVersionExA((GEN_LPANY)((byte *)(gen_frame + 0x4)));
    if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) == 2) && (4 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)))) {
      bVar1 = F_00b11460(&REFG(undefined * PTR32, 0x130104c) GEN_EDX_ARG);
      if ((6 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4))) || (1 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)))) {
        bVar1 = F_00b114f0(&REFG(undefined * PTR32, 0x130104c) GEN_EDX_ARG,REFG(undefined4, 0x1372650),this + 8);
      }
      uVar2 = (uint)bVar1;
      ((char *)REFP(0x133a324))[0x16] = '\x01';
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return (byte)uVar2;
}

/* ref: Client::System::Input::TextService::vf5 */
GEN_NOFRAME byte F_0049e2a0(void)
{
  GEN_ENTER(0x49e2a0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  
  if (((-1 < REFG(int, 0x1301048)) && (REFG(int, 0x1372640) != 0)) &&
     (piVar1 = *(int * PTR32 *)(REFG(int, 0x1372640) + 4), piVar1 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,&REFG(undefined4, 0x1372668),REFG(int, 0x1301048));
    return 1;
  }
  return 0;
}

/* ref: Client::System::Input::TextService::vf6 */
GEN_FRAME uint GEN_THISCALL F_0049e2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49e2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD param_1 = (DWORD)gen_a1;
  DWORD DVar1;
  
  DVar1 = param_1;
  if (-1 < (int)param_1) {
    DVar1 = gen_imp_ImmNotifyIME(REFG(undefined4, 0x1372654),0x12,0,param_1);
  }
  return DVar1;
}

/* ref: Client::System::Input::TextService::vf7 */
GEN_NOFRAME uint F_0049e2f0(void)
{
  GEN_ENTER(0x49e2f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1301048);
}

/* ref: Client::System::Input::TextService::vf9 */
GEN_FRAME unsigned int GEN_THISCALL F_0049e300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49e300u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(undefined * PTR32 *)&gen_args[0])[0xc] != (undefined1)0x0) {
    if ((*(DWORD *)&gen_args[1]) != 0) {
      if ((*(DWORD *)&gen_args[1]) == 2) {
        BVar1 = gen_imp_ImmGetOpenStatus(REFG(undefined4, 0x1372654));
        if (BVar1 == 0) {
          gen_imp_ImmSetOpenStatus(REFG(undefined4, 0x1372654),1);
        }
        gen_imp_ImmGetConversionStatus(REFG(undefined4, 0x1372654),(LPDWORD)&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(DWORD *)&gen_args[1]));
        gen_imp_ImmSetConversionStatus(REFG(undefined4, 0x1372654),(uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xfffffffb | 0xb,(*(DWORD *)&gen_args[1]));
        return;
      }
      if ((*(DWORD *)&gen_args[1]) != 3) {
        BVar1 = gen_imp_ImmGetOpenStatus(REFG(undefined4, 0x1372654));
        if (BVar1 == 0) {
          gen_imp_ImmSetOpenStatus(REFG(undefined4, 0x1372654),1);
        }
        gen_imp_ImmGetConversionStatus(REFG(undefined4, 0x1372654),(LPDWORD)&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(DWORD *)&gen_args[1]));
        gen_imp_ImmSetConversionStatus(REFG(undefined4, 0x1372654),(uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xfffffff9 | 9,(*(DWORD *)&gen_args[1]));
        return;
      }
      BVar1 = gen_imp_ImmGetOpenStatus(REFG(undefined4, 0x1372654));
      if (BVar1 == 0) {
        gen_imp_ImmSetOpenStatus(REFG(undefined4, 0x1372654),1);
      }
      gen_imp_ImmGetConversionStatus(REFG(undefined4, 0x1372654),(LPDWORD)&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(DWORD *)&gen_args[1]));
      gen_imp_ImmSetConversionStatus(REFG(undefined4, 0x1372654),(uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xfffffff8 | 8,(*(DWORD *)&gen_args[1]));
      return;
    }
    BVar1 = gen_imp_ImmGetOpenStatus(REFG(undefined4, 0x1372654));
    if (BVar1 != 0) {
      gen_imp_ImmSetOpenStatus(REFG(undefined4, 0x1372654),0);
    }
  }
  return;
}

/* ref: Client::System::Input::TextService::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_0049e440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49e440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this[0xc] != (undefined1)0x0) {
    if ((char)param_1 != '\0') {
      gen_imp_ImmAssociateContext(REFG(undefined4, 0x1372650),(HIMC)0x0);
      return;
    }
    gen_imp_ImmAssociateContext(REFG(undefined4, 0x1372650),REFG(undefined4, 0x1372654));
  }
  return;
}

/* ref: Client::System::Input::TextService::vf10 */
GEN_FRAME uint F_0049e480(void)
{
  GEN_ENTER(0x49e480u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  
  BVar1 = gen_imp_ImmGetOpenStatus(REFG(undefined4, 0x1372654));
  if (BVar1 == 0) {
    return 0;
  }
  gen_imp_ImmGetConversionStatus(REFG(undefined4, 0x1372654),&(*(uint *)(gen_frame + 0x8)),&(*(DWORD *)(gen_frame + 0x4)));
  if (((*(uint *)(gen_frame + 0x8)) & 8) == 0) {
    gen_imp_ImmSetConversionStatus(REFG(undefined4, 0x1372654),(*(uint *)(gen_frame + 0x8)) & 0xfffffff9 | 9,(*(DWORD *)(gen_frame + 0x4)));
  }
  else {
    if (((*(uint *)(gen_frame + 0x8)) & 2) != 0) {
      return 2;
    }
    if (((*(uint *)(gen_frame + 0x8)) & 1) == 0) {
      return 3;
    }
  }
  return 1;
}

/* ref: Client::System::Input::TextService::vf12 */
GEN_FRAME unsigned int GEN_THISCALL F_0049e4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49e4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  DWORD DVar1;
  
  gen_imp_ImmGetConversionStatus(REFG(undefined4, 0x1372654),&(*(uint *)(gen_frame + 0x8)),&(*(DWORD *)(gen_frame + 0x4)));
  if (param_1 == 0) {
    if (((*(uint *)(gen_frame + 0x8)) & 0x10) != 0) {
      return;
    }
    DVar1 = (*(uint *)(gen_frame + 0x8)) | 0x10;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    if (((*(uint *)(gen_frame + 0x8)) & 0x10) == 0) {
      return;
    }
    DVar1 = (*(uint *)(gen_frame + 0x8)) & 0xffffffef;
  }
  gen_imp_ImmSetConversionStatus(REFG(undefined4, 0x1372654),DVar1,(*(DWORD *)(gen_frame + 0x4)));
  return;
}

/* ref: Client::System::Input::TextService::vf11 */
GEN_FRAME uint F_0049e550(void)
{
  GEN_ENTER(0x49e550u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_ImmGetConversionStatus(REFG(undefined4, 0x1372654),&(*(uint *)(gen_frame + 0x8)),&(*(DWORD *)(gen_frame + 0x4)));
  return (*(uint *)(gen_frame + 0x8)) & 0x10;
}

/* ref: Client::System::Input::TextService::vf13 */
GEN_FRAME uint GEN_THISCALL F_0049e580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49e580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = gen_imp_ImmNotifyIME(REFG(undefined4, 0x1372654),0x15,1,0);
  }
  else if (param_1 == 1) {
    gen_imp_ImmNotifyIME(REFG(undefined4, 0x1372654),0x11,0,0);
    gen_imp_ImmNotifyIME(REFG(undefined4, 0x1372654),0x15,2,0);
    uVar1 = gen_imp_ImmNotifyIME(REFG(undefined4, 0x1372654),0x15,3,0);
    if (uVar1 == 0) {
      uVar1 = gen_imp_ImmNotifyIME(REFG(undefined4, 0x1372654),0x15,4,0);
      return uVar1;
    }
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      gen_imp_ImmNotifyIME(REFG(undefined4, 0x1372654),0x11,0,0);
      uVar1 = gen_imp_ImmNotifyIME(REFG(undefined4, 0x1372654),0x15,4,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::System::Input::TextService::vf15 */
GEN_NOFRAME byte F_0049e620(void)
{
  GEN_ENTER(0x49e620u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x1372644);
}

/* ref: FUN_0049e630 */
GEN_FRAME uint F_0049e630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x49e630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00b127f0(param_1,REFG(undefined4, 0x1372654),param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_0049e660 */
GEN_NOFRAME unsigned int F_0049e660(void)
{
  GEN_ENTER(0x49e660u, 0u, 0u, 0u, 0u);
  int * piVar1;
  
  if (((REFG(char, 0x1372644) != '\0') && (REFG(int, 0x1372640) != 0)) &&
     (piVar1 = *(int * PTR32 *)(REFG(int, 0x1372640) + 4), piVar1 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG,&REFG(undefined, 0x1372678),REFG(undefined4, 0x1372724),REFG(undefined4, 0x1372648),REFG(undefined4, 0x137264c));
  }
  return;
}

/* ref: FUN_0049e6a0 */
GEN_FRAME uint GEN_THISCALL F_0049e6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49e6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x1092948));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x109297c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x1092960));
  *(char *)((int)this + 0xc) = (char)param_2;
  if ((char)param_2 != '\0') {
    REFG(undefined4, 0x1372650) = *(undefined4 *)(param_1 + 8);
    REFG(void * PTR32, 0x1372640) = this;
  }
  return (uint)this;
}

/* ref: FUN_0049e6e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049e6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49e6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x109297c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x1092960));
  if (*(char *)((int)this + 0xc) != '\0') {
    F_00b11460(&REFG(undefined * PTR32, 0x130104c) GEN_EDX_FWD);
    if (REFG(undefined4, 0x1372654) != (HIMC)0x0) {
      gen_imp_ImmReleaseContext(REFG(undefined4, 0x1372650),REFG(undefined4, 0x1372654));
      REFG(undefined4, 0x1372654) = (HIMC)0x0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x10928f4));
  return;
}

/* ref: Client::System::Input::TextService::vf16 */
GEN_FRAME uint GEN_THISCALL F_0049e730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49e730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  UINT UVar2;
  uint uCode;
  
  bVar1 = (byte)param_1;
  if ((byte)((byte)param_1 + 0x80) < 0x20) {
    bVar1 = ((char *)REFP(0x133a3ad))[(byte)param_1 + 3];
  }
  uCode = (uint)bVar1;
  UVar2 = gen_imp_MapVirtualKeyA(uCode,0);
  UVar2 = UVar2 << 0x10;
  switch((unsigned int)(uintptr_t)(uCode)) {
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
  case 0x27: ;
  case 0x28: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x6f: ;
  case 0x90: ;
    UVar2 = UVar2 | 0x1000000;
  }
  gen_imp_GetKeyNameTextA(UVar2,&REFG(char, 0x1372878),0x20);
  if ((('`' < REFG(char, 0x1372878)) && (REFG(char, 0x1372878) < '{')) || (REFG(char, 0x1372878) < '\0')) {
    gen_imp_GetKeyboardState(&REFG(undefined, 0x1372778));
    *(undefined2 *)&REFG(undefined, 0x1372789) = 0;
    REFG(undefined4, 0x1372788) = 0;
    gen_imp_ToUnicode(uCode,UVar2,&REFG(undefined, 0x1372778),(LPWSTR)&REFG(undefined, 0x1372738),0x20,0);
    gen_imp_WideCharToMultiByte(0xfde9,0,(LPCWSTR)&REFG(undefined, 0x1372738),-1,&REFG(char, 0x1372878),0x20,(LPCSTR)0x0,
                        (LPBOOL)0x0);
  }
  return 0x1372878;
}

/* ref: Client::System::Input::TextService::vf17 */
GEN_FRAME uint GEN_THISCALL F_0049e880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49e880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint * puVar3;
  char cVar4;
  
  puVar3 = (uint *)F_00424cd0();
  piVar1 = (int *)puVar3[2];
  if (piVar1 != (int *)0x0) {
    puVar3 = (uint *)F_00a1b070(param_1 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)) + 4,1);
    uVar2 = *puVar3;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = puVar3[1];
    cVar4 = (char)uVar2;
    while (cVar4 != '\0') {
      if ((char)uVar2 == '\x01') {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,uVar2 >> 8,0);
      }
      puVar3 = (uint *)F_00a1b070(param_1 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)) + 4,1);
      uVar2 = *puVar3;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = puVar3[1];
      cVar4 = (char)uVar2;
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_0049e8f0 */
GEN_FRAME uint F_0049e8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x49e8f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  F_00487650(&REFG(undefined4, 0x1372658) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),REFG(undefined4, 0x1372658),REFG(undefined4, 0x137265c));
  iVar1 = REFG(int, 0x1372668);
  if (REFG(int, 0x1372668) != REFG(int, 0x137266c)) {
    F_00c46e20(REFG(int, 0x1372668),REFG(int, 0x137266c),0);
    REFG(int, 0x137266c) = iVar1;
  }
  F_00487da0(&REFG(undefined4, 0x1372658) GEN_EDX_ARG,param_1);
  uVar2 = F_0049f580(&REFG(int, 0x1372668) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_0049e960 */
GEN_FRAME uint F_0049e960(unsigned int gen_a0)
{
  GEN_ENTER(0x49e960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0042e170(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1);
  F_0049f6d0(&REFG(undefined4, 0x1372658) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar1 = F_0042a990(REFG(int, 0x137265c) - 0x54 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x0)) = uVar1;
  uVar1 = F_0049f750(&REFG(undefined4, 0x1372668) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0049e9c0 */
GEN_FRAME uint F_0049e9c0(void)
{
  GEN_ENTER(0x49e9c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if ((REFG(int, 0x1372640) != 0) && (piVar1 = *(int * PTR32 *)(REFG(int, 0x1372640) + 4), piVar1 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG);
  }
  F_00487650(&REFG(undefined4, 0x1372658) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),REFG(undefined4, 0x1372658),REFG(undefined4, 0x137265c));
  uVar2 = REFG(undefined4, 0x1372668);
  uVar3 = REFG(undefined4, 0x1372668);
  if (REFG(undefined4, 0x1372668) != REFG(undefined4, 0x137266c)) {
    uVar3 = F_00c46e20(REFG(undefined4, 0x1372668),REFG(undefined4, 0x137266c),0);
    REFG(undefined4, 0x137266c) = uVar2;
  }
  REFG(undefined4, 0x1301048) = 0xffffffff;
  return uVar3;
}

/* ref: FUN_0049ea30 */
GEN_FRAME uint GEN_THISCALL F_0049ea30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00487650(&REFG(undefined4, 0x1372658) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(undefined4, 0x1372658),REFG(undefined4, 0x137265c));
  iVar1 = REFG(int, 0x1372668);
  if (REFG(int, 0x1372668) != REFG(int, 0x137266c)) {
    F_00c46e20(REFG(int, 0x1372668),REFG(int, 0x137266c),0);
    REFG(int, 0x137266c) = iVar1;
  }
  F_00487da0(&REFG(undefined4, 0x1372658) GEN_EDX_ARG,param_1);
  uVar2 = F_0049f580(&REFG(int, 0x1372668) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_0049eaa0 */
GEN_FRAME uint GEN_THISCALL F_0049eaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49eaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0042e170(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,param_1);
  F_0049f6d0(&REFG(undefined4, 0x1372658) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar1 = F_0042a990(REFG(int, 0x137265c) - 0x54 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x0)) = uVar1;
  uVar1 = F_0049f750(&REFG(undefined4, 0x1372668) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0049eb10 */
GEN_FRAME uint F_0049eb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49eb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  REFG(undefined1, 0x1372644) = 1;
  F_0042cef0(&REFG(undefined, 0x1372678) GEN_EDX_ARG,param_1);
  iVar4 = REFG(int, 0x1372724);
  if (REFG(int, 0x1372724) != REFG(int, 0x1372728)) {
    F_00c46e20(REFG(int, 0x1372724),REFG(int, 0x1372728),0);
    REFG(int, 0x1372728) = iVar4;
  }
  uVar2 = (*(uint *)(gen_frame + 0x8));
  uVar3 = param_3 + 1;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = uVar2 & 0xffffff00;
  if ((uint)(REFG(int, 0x1372728) - REFG(int, 0x1372724)) < uVar3) {
    F_0049f7c0(&REFG(int, 0x1372724) GEN_EDX_ARG,REFG(int, 0x1372728),(REFG(int, 0x1372724) - REFG(int, 0x1372728)) + uVar3,&(*(uint *)(gen_frame + 0x8)));
  }
  else if ((uVar3 < (uint)(REFG(int, 0x1372728) - REFG(int, 0x1372724))) &&
          (iVar4 = REFG(int, 0x1372724) + uVar3, iVar4 != REFG(int, 0x1372728))) {
    F_00c46e20(iVar4,REFG(int, 0x1372728),0);
    REFG(int, 0x1372728) = iVar4;
  }
  uVar3 = 0;
  REFG(undefined4, 0x1372648) = param_3;
  REFG(undefined4, 0x137264c) = param_4;
  iVar4 = REFG(int, 0x1372724);
  if (param_3 != 0) {
    do {
      if ((*(char *)(uVar3 + param_2) == '\x01') || (*(char *)(uVar3 + param_2) == '\x03')) {
        *(undefined1 *)(iVar4 + uVar3) = 1;
        iVar4 = REFG(int, 0x1372724);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  *(undefined1 *)(iVar4 + uVar3) = 0;
  uVar3 = REFG(undefined4, 0x1372640);
  if ((REFG(undefined4, 0x1372640) != 0) && (piVar1 = *(int * PTR32 *)(REFG(undefined4, 0x1372640) + 4), piVar1 != (int *)0x0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG,&REFG(undefined, 0x1372678),REFG(int, 0x1372724),param_3,param_4);
  }
  return uVar3;
}

/* ref: Client::System::Input::TextService::vf1 */
GEN_FRAME byte GEN_THISCALL F_0049ec10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49ec10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  bool bVar1;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  if (this[0xc] != (undefined1)0x0) {
    ((byte *)(gen_frame + 0x4))[0] = 0x94;
    ((byte *)(gen_frame + 0x4))[1] = 0;
    ((byte *)(gen_frame + 0x4))[2] = 0;
    ((byte *)(gen_frame + 0x4))[3] = 0;
    gen_imp_GetVersionExA((GEN_LPANY)((byte *)(gen_frame + 0x4)));
    if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) == 2) && (4 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)))) {
      REFG(undefined * PTR32, 0x14c0d48) = ((code *)REFP(0x49e040));
      REFG(undefined * PTR32, 0x14c0d4c) = ((code *)REFP(0x49eb10));
      REFG(undefined * PTR32, 0x14c0d50) = ((code *)REFP(0x49e100));
      REFG(undefined * PTR32, 0x14c0d54) = ((code *)REFP(0x49e8f0));
      REFG(undefined * PTR32, 0x14c0d58) = ((code *)REFP(0x49e960));
      REFG(undefined * PTR32, 0x14c0d5c) = ((code *)REFP(0x49e070));
      REFG(undefined * PTR32, 0x14c0d60) = ((code *)REFP(0x49e0a0));
      REFG(undefined * PTR32, 0x14c0d64) = ((code *)REFP(0x49e9c0));
      REFG(undefined4, 0x1372654) = gen_imp_ImmGetContext(REFG(undefined4, 0x1372650));
      if ((6 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4))) || (1 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)))) {
        F_00b114f0(&REFG(undefined * PTR32, 0x130104c) GEN_EDX_ARG,REFG(undefined4, 0x1372650),this + 8);
      }
      bVar1 = REFG(undefined4, 0x1372654) != (HIMC)0x0;
      ((char *)REFP(0x133a324))[0x16] = '\x01';
      F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
      return bVar1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0049ed50 */
GEN_FRAME uint GEN_THISCALL F_0049ed50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ed50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0049edb0 */
GEN_FRAME uint GEN_STDCALL F_0049edb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49edb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_0049ede0 */
GEN_FRAME uint GEN_STDCALL F_0049ede0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49ede0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_0049ee50 */
GEN_FRAME uint GEN_THISCALL F_0049ee50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49ee50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x54;
  return (uint)in_ecx;
}

/* ref: FUN_0049ee80 */
GEN_FRAME uint F_0049ee80(unsigned int gen_a0)
{
  GEN_ENTER(0x49ee80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0049ee90 */
GEN_FRAME uint F_0049ee90(unsigned int gen_a0)
{
  GEN_ENTER(0x49ee90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0049eea0 */
GEN_FRAME uint F_0049eea0(unsigned int gen_a0)
{
  GEN_ENTER(0x49eea0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0049eeb0 */
GEN_FRAME uint F_0049eeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x49eeb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0049eec0 */
GEN_FRAME byte F_0049eec0(void)
{
  GEN_ENTER(0x49eec0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0049eed0 */
GEN_FRAME uint F_0049eed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49eed0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0049ef10 */
GEN_FRAME unsigned int F_0049ef10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ef10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_0049ef30 */
GEN_FRAME uint F_0049ef30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ef30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_3 - (param_2 - param_1);
  F_00c46e20(uVar1,param_1,param_2 - param_1);
  return uVar1;
}

/* ref: FUN_0049ef80 */
GEN_FRAME uint GEN_THISCALL F_0049ef80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49ef80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  return (uint)this;
}

/* ref: FUN_0049efb0 */
GEN_FRAME uint F_0049efb0(unsigned int gen_a0)
{
  GEN_ENTER(0x49efb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((byte)((byte)param_1 + 0x80) < 0x20) {
    return (uint)(byte)((char *)REFP(0x133a3ad))[(byte)param_1 + 3];
  }
  return (uint)(byte)param_1;
}

/* ref: FUN_0049eff0 */
GEN_FRAME uint F_0049eff0(unsigned int gen_a0)
{
  GEN_ENTER(0x49eff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Client::System::Input::Cicero::vf0 */
GEN_FRAME uint GEN_THISCALL F_0049f000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1092940));
  F_00b11460(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0049f070 */
GEN_FRAME uint GEN_THISCALL F_0049f070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f070u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0049f0a0 */
GEN_FRAME uint GEN_THISCALL F_0049f0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f0a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x54;
  return (uint)in_ecx;
}

/* ref: FUN_0049f0c0 */
GEN_FRAME uint GEN_THISCALL F_0049f0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0049f0d0 */
GEN_FRAME byte GEN_THISCALL F_0049f0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0049f0f0 */
GEN_FRAME uint F_0049f0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f0f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0049f130 */
GEN_FRAME uint F_0049f130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_0049f150 */
GEN_FRAME uint F_0049f150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f150u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_3 - (param_2 - param_1);
  F_00c46e20(uVar1,param_1,param_2 - param_1);
  return uVar1;
}

/* ref: FUN_0049f180 */
GEN_FRAME uint GEN_STDCALL F_0049f180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49f180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: Client::System::Input::TextService::vf0 */
GEN_FRAME uint GEN_THISCALL F_0049f1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x109297c));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x1092960));
  if (this[0xc] != (undefined1)0x0) {
    F_00b11460(&REFG(undefined * PTR32, 0x130104c) GEN_EDX_FWD);
    if (REFG(undefined4, 0x1372654) != (HIMC)0x0) {
      gen_imp_ImmReleaseContext(REFG(undefined4, 0x1372650),REFG(undefined4, 0x1372654));
      REFG(undefined4, 0x1372654) = (HIMC)0x0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x10928f4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0049f230 */
GEN_NOFRAME uint GEN_THISCALL F_0049f230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49f230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0049f270 */
GEN_FRAME uint GEN_THISCALL F_0049f270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f270u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -0x54;
  return (uint)in_ecx;
}

/* ref: FUN_0049f290 */
GEN_FRAME uint GEN_THISCALL F_0049f290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0049f2a0 */
GEN_FRAME byte GEN_THISCALL F_0049f2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0049f2c0 */
GEN_FRAME uint F_0049f2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0049f2e0 */
GEN_FRAME unsigned int F_0049f2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f2e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0049f310 */
GEN_FRAME uint F_0049f310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0049f330 */
GEN_NOFRAME uint GEN_THISCALL F_0049f330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49f330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0049f370 */
GEN_FRAME uint GEN_THISCALL F_0049f370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0049f380 */
GEN_FRAME uint GEN_THISCALL F_0049f380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0049f390 */
GEN_FRAME uint GEN_THISCALL F_0049f390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f390u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3 * -0x54;
  return (uint)param_2;
}

/* ref: FUN_0049f3b0 */
GEN_FRAME uint GEN_STDCALL F_0049f3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x49f3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0049f3c0 */
GEN_FRAME unsigned int F_0049f3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f3c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0049f3f0 */
GEN_FRAME unsigned int F_0049f3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_0049f420 */
GEN_FRAME uint GEN_THISCALL F_0049f420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49f420u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_0049f480 */
GEN_FRAME unsigned int F_0049f480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f480u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0049f4b0 */
GEN_FRAME unsigned int F_0049f4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0049f4d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049f4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49f4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_0049f530 */
GEN_FRAME unsigned int GEN_STDCALL F_0049f530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f530u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0049f560 */
GEN_FRAME unsigned int F_0049f560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0049f580 */
GEN_FRAME uint GEN_THISCALL F_0049f580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x2be);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x2be);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_0049f630 */
GEN_FRAME uint GEN_THISCALL F_0049f630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f630u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_0049f580(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0049f580(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0049f6a0 */
GEN_FRAME uint GEN_STDCALL F_0049f6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  return (uint)(param_1 + param_2);
}

/* ref: FUN_0049f6d0 */
GEN_FRAME unsigned int GEN_THISCALL F_0049f6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00488ca0(this GEN_EDX_FWD,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00488ca0(this GEN_EDX_ARG,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return;
}

/* ref: FUN_0049f750 */
GEN_FRAME uint GEN_THISCALL F_0049f750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49f750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0049f630(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0049f630(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0049f7c0 */
GEN_FRAME uint GEN_THISCALL F_0049f7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49f7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined1 uVar1;
  int iVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 * puVar10;
  
  uVar7 = (*(uint *)&gen_args[2]);
  if ((*(uint *)&gen_args[2]) != 0) {
    iVar8 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    if ((iVar8 - iVar2) - 1U < (*(uint *)&gen_args[2])) {
                    
      F_00c4579a("vector<T> too long");
    }
    uVar9 = (iVar2 - iVar8) + (*(uint *)&gen_args[2]);
    uVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - iVar8;
    if (uVar3 < uVar9) {
      if (-(uVar3 >> 1) - 1 < uVar3) {
        (*(uint *)&gen_args[2]) = 0;
      }
      else {
        (*(uint *)&gen_args[2]) = uVar3 + (uVar3 >> 1);
      }
      if ((*(uint *)&gen_args[2]) < uVar9) {
        (*(uint *)&gen_args[2]) = uVar9;
      }
      puVar4 = (undefined1 *)F_004296a0((*(uint *)&gen_args[2]),0,0x12d);
      iVar8 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
      F_0049f6a0(puVar4 + ((int)(*(undefined1 * PTR32 *)&gen_args[1]) - iVar8),uVar7,(*(undefined1 * PTR32 *)&gen_args[3]));
      puVar10 = puVar4;
      for (puVar5 = *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]); puVar5 != (*(undefined1 * PTR32 *)&gen_args[1]); puVar5 = puVar5 + 1) {
        if (puVar10 != (undefined1 *)0x0) {
          *puVar10 = *puVar5;
        }
        puVar10 = puVar10 + 1;
      }
      puVar5 = *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      puVar10 = puVar4 + ((int)(*(undefined1 * PTR32 *)&gen_args[1]) - iVar8) + uVar7;
      for (puVar6 = (*(undefined1 * PTR32 *)&gen_args[1]); puVar6 != puVar5; puVar6 = puVar6 + 1) {
        if (puVar10 != (undefined1 *)0x0) {
          *puVar10 = *puVar6;
        }
        puVar10 = puVar10 + 1;
      }
      iVar8 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
      iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      if (iVar8 != 0) {
        F_00429760(iVar8,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - iVar8,0x12d);
      }
      *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = puVar4 + (*(uint *)&gen_args[2]);
      *((undefined1 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar4 + uVar7 + (iVar2 - iVar8);
      *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = puVar4;
      return (uint)puVar4;
    }
    uVar1 = *(*(undefined1 * PTR32 *)&gen_args[3]);
    (*(undefined1 * PTR32 *)&gen_args[3]) = ((undefined1 *)GEN_TOP(CONCAT13(uVar1,GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[3]), 0, 3))));
    if ((uint)(iVar2 - (int)(*(undefined1 * PTR32 *)&gen_args[1])) < (*(uint *)&gen_args[2])) {
      F_004236d0((*(undefined1 * PTR32 *)&gen_args[1]),iVar2,(*(undefined1 * PTR32 *)&gen_args[1]) + (*(uint *)&gen_args[2]));
      F_0049f6a0(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(*(undefined1 * PTR32 *)&gen_args[1]) + ((*(uint *)&gen_args[2]) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))),
                   (int)&(*(undefined1 * PTR32 *)&gen_args[3]) + 3);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (*(uint *)&gen_args[2]);
      uVar7 = F_0049f130((*(undefined1 * PTR32 *)&gen_args[1]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - (*(uint *)&gen_args[2]),(int)&(*(undefined1 * PTR32 *)&gen_args[3]) + 3);
      return uVar7;
    }
    uVar7 = F_004236d0(iVar2 - (*(uint *)&gen_args[2]),iVar2,iVar2);
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar7;
    iVar8 = (iVar2 - (int)(*(undefined1 * PTR32 *)&gen_args[1])) - (*(uint *)&gen_args[2]);
    F_00c46e20(iVar2 - iVar8,(*(undefined1 * PTR32 *)&gen_args[1]),iVar8);
    in_EAX = F_0049f130((*(undefined1 * PTR32 *)&gen_args[1]),(*(undefined1 * PTR32 *)&gen_args[1]) + (*(uint *)&gen_args[2]),(int)&(*(undefined1 * PTR32 *)&gen_args[3]) + 3);
  }
  return in_EAX;
}

/* ref: FUN_0049f970 */
GEN_FRAME uint GEN_THISCALL F_0049f970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49f970u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar2 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
  if ((*(uint *)&gen_args[1]) <= uVar3 - iVar2) {
    if (((*(uint *)&gen_args[1]) < uVar3 - iVar2) && (uVar1 = iVar2 + (*(uint *)&gen_args[1]), uVar1 != uVar3)) {
      uVar3 = F_00c46e20(uVar1,uVar3,0);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar1;
    }
    return uVar3;
  }
  uVar3 = F_0049f7c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar3,(iVar2 - uVar3) + (*(uint *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_0049f9d0 */
GEN_FRAME uint F_0049f9d0(void)
{
  GEN_ENTER(0x49f9d0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0c);
  (*(uint *)(gen_frame + 0xc08)) = uVar2;
  if (REFG(char, 0x13728a4) == '\0') {
    *(int *)&REFG(undefined, 0x13728a0) = 1;
    REFG(int, 0x137289c) = 1;
    REFG(undefined4, 0x1372898) = 1;
    (*(uint * PTR32 *)(gen_frame + 0x4)) = (uint *)0x0;
    uVar2 = gen_imp_GetLogicalProcessorInformation(0,&(*(uint * PTR32 *)(gen_frame + 0x4)));
    if ((*(uint * PTR32 *)(gen_frame + 0x4)) < (uint *)0xc01) {
      gen_imp_GetLogicalProcessorInformation(((uint *)(gen_frame + 0x8)),&(*(uint * PTR32 *)(gen_frame + 0x4)));
      (*(uint *)(gen_frame + 0x0)) = (uint)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x4))) / 0x18;
      *(int *)&REFG(undefined, 0x13728a0) = 0;
      iVar7 = REFG(int, 0x137289c);
      if ((*(uint *)(gen_frame + 0x0)) != 0) {
        puVar4 = ((uint *)(gen_frame + 0x8));
        (*(uint * PTR32 *)(gen_frame + 0x4)) = puVar4;
        do {
          if (puVar4[1] == 0) {
            *(int *)&REFG(undefined, 0x13728a0) = *(int *)&REFG(undefined, 0x13728a0) + 1;
            iVar6 = -1;
            uVar2 = *puVar4;
            uVar3 = 1;
            iVar7 = 0;
            iVar5 = 2;
            do {
              if ((uVar3 & uVar2) != 0) {
                if (iVar6 == -1) {
                  iVar6 = iVar5 - 2;
                }
                iVar7 = iVar7 + 1;
              }
              uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
              if ((uVar3 & uVar2) != 0) {
                if (iVar6 == -1) {
                  iVar6 = iVar5 - 1;
                }
                iVar7 = iVar7 + 1;
              }
              uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
              if ((uVar3 & uVar2) != 0) {
                if (iVar6 == -1) {
                  iVar6 = iVar5;
                }
                iVar7 = iVar7 + 1;
              }
              uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
              if ((uVar3 & uVar2) != 0) {
                if (iVar6 == -1) {
                  iVar6 = iVar5 + 1;
                }
                iVar7 = iVar7 + 1;
              }
              iVar1 = iVar5 + 2;
              uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
              iVar5 = iVar5 + 4;
              REFG(int, 0x137289c) = iVar7;
            } while (iVar1 < 0x20);
          }
          puVar4 = puVar4 + 6;
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
          (*(uint * PTR32 *)(gen_frame + 0x4)) = puVar4;
        } while ((*(uint *)(gen_frame + 0x0)) != 0);
      }
      uVar2 = iVar7 * *(int *)&REFG(undefined, 0x13728a0);
      REFG(undefined4, 0x1372898) = uVar2;
    }
    REFG(char, 0x13728a4) = '\x01';
  }
  F_00c47745((*(uint *)(gen_frame + 0xc08)) ^ (uint)(uint)(gen_frame + 0xc0c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Framework::Task::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049fb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49fb30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: FUN_0049fb40 */
GEN_FRAME unsigned int GEN_THISCALL F_0049fb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49fb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x58) = param_1;
  if (*(int *)((int)this + 0x54) != 0) {
    iVar1 = 0;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x50) + iVar1))) + 4))))
                (*(int *)((int)this + 0x50) + iVar1,param_1);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x58;
    } while (uVar2 < *(uint *)((int)this + 0x54));
  }
  return 0;
}

/* ref: FUN_0049fb90 */
GEN_FRAME uint GEN_THISCALL F_0049fb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49fb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)this = param_1;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 4))), (long)(0));
  return param_1;
}

/* ref: FUN_0049fbc0 */
GEN_FRAME unsigned int GEN_THISCALL F_0049fbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x49fbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 4);
  if ((char)param_1 != '\0') {
    _InterlockedExchange((volatile long *)(piVar1), (long)(0));
    return (uint)(gen_imp_SetEvent(*(HANDLE *)((int)this + 8)));
  }
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
  if (iVar2 == 1) {
    if (*(int *)((int)this + 0x14) != 0) {
      ((code *)*(gen_code32 *)((int)this + 0x10))(*(undefined4 *)((int)this + 0x14),(int)this + 0x18,this);
    }
    gen_imp_SetEvent(*(HANDLE *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_0049fc30 */
GEN_FRAME uint GEN_THISCALL F_0049fc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49fc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)((int)this + 0x58);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (uVar2 == 0xffffffff) {
    uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  iVar3 = (*(int *)((int)this + 0x54) - uVar2) - 1;
  *param_2 = iVar3;
  if (iVar3 < 0) {
    *param_2 = 0;
  }
  if (*(uint *)((int)this + 0x54) <= uVar2) {
    return 0;
  }
  *param_1 = *(int *)((int)this + 0x50) + uVar2 * 4;
  return (int)this + 0x28;
}

/* ref: FUN_0049fc90 */
GEN_FRAME unsigned int GEN_THISCALL F_0049fc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49fc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  int iVar2;
  
  ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD,param_1);
  piVar1 = (int *)((int)this - 0x1c);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
  if (iVar2 == 1) {
    if (*(int *)((int)this - 0xc) != 0) {
      ((code *)*(gen_code32 *)((int)this - 0x10))
                (*(undefined4 *)((int)this - 0xc),(int)this - 8,(int)this - 0x20);
    }
    gen_imp_SetEvent(*(HANDLE *)((int)this - 0x18));
  }
  return 0;
}

/* ref: Client::System::Framework::JobListTaskPtrArray::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049fce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49fce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)(gen_imp_WaitForSingleObject(*(HANDLE *)(this + 0x10),0xffffffff));
}

/* ref: FUN_0049fcf0 */
GEN_FRAME uint GEN_THISCALL F_0049fcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49fcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)((int)this + 0x58);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (uVar2 == 0xffffffff) {
    uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  iVar3 = (*(int *)((int)this + 0x54) - uVar2) - 1;
  *param_2 = iVar3;
  if (iVar3 < 0) {
    *param_2 = 0;
  }
  if (*(uint *)((int)this + 0x54) <= uVar2) {
    return 0;
  }
  *param_1 = *(int *)((int)this + 0x50) + uVar2 * 4;
  return (int)this + 0x28;
}

/* ref: FUN_0049fd50 */
GEN_FRAME uint GEN_THISCALL F_0049fd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49fd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_3;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xc))), (long)(0));
  *(undefined4 *)((int)this + 0x60) = *param_1;
  *(undefined4 *)((int)this + 100) = param_1[1];
  *(undefined4 *)((int)this + 0x68) = param_1[2];
  *(undefined4 *)((int)this + 0x6c) = param_1[3];
  *(uint *)((int)this + 0x50) = param_2;
  *(undefined4 *)((int)this + 0x54) = param_3;
  return param_2;
}

/* ref: FUN_0049fd90 */
GEN_FRAME unsigned int GEN_THISCALL F_0049fd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49fd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  
  ((code *)*(gen_code32 *)((int)this + 0x38))(*(undefined4 *)((int)this + 0x3c),(int)this + 0x40,param_2);
  piVar1 = (int *)((int)this - 0x1c);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
  if (iVar2 == 1) {
    if (*(int *)((int)this - 0xc) != 0) {
      ((code *)*(gen_code32 *)((int)this - 0x10))
                (*(undefined4 *)((int)this - 0xc),(int)this - 8,(int)this - 0x20);
    }
    gen_imp_SetEvent(*(HANDLE *)((int)this - 0x18));
  }
  return 0;
}

/* ref: Client::System::Framework::JobListArgArray::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049fdf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49fdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)(gen_imp_WaitForSingleObject(*(HANDLE *)(this + 0x10),0xffffffff));
}

/* ref: FUN_0049fe00 */
GEN_FRAME uint GEN_THISCALL F_0049fe00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49fe00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)((int)this + 0x58);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (uVar2 == 0xffffffff) {
    uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  iVar3 = (*(int *)((int)this + 0x54) - uVar2) - 1;
  *param_2 = iVar3;
  if (iVar3 < 0) {
    *param_2 = 0;
  }
  if (*(uint *)((int)this + 0x54) <= uVar2) {
    return 0;
  }
  *param_1 = (int)this + 0x50;
  return (int)this + 0x28;
}

/* ref: FUN_0049fe50 */
GEN_FRAME unsigned int GEN_THISCALL F_0049fe50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49fe50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0x48);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(1));
  ((code *)*(gen_code32 *)((int)this + 0x38))(*(undefined4 *)((int)this + 0x3c),(int)this + 0x40,param_2,iVar2);
  piVar1 = (int *)((int)this - 0x1c);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
  if (iVar2 == 1) {
    if (*(int *)((int)this - 0xc) != 0) {
      ((code *)*(gen_code32 *)((int)this - 0x10))
                (*(undefined4 *)((int)this - 0xc),(int)this - 8,(int)this - 0x20);
    }
    gen_imp_SetEvent(*(HANDLE *)((int)this - 0x18));
  }
  return 0;
}

/* ref: FUN_0049feb0 */
GEN_FRAME uint GEN_THISCALL F_0049feb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x49feb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_3;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xc))), (long)(0));
  *(undefined4 *)((int)this + 0x60) = *param_1;
  *(undefined4 *)((int)this + 100) = param_1[1];
  *(undefined4 *)((int)this + 0x68) = param_1[2];
  *(undefined4 *)((int)this + 0x6c) = param_1[3];
  *(uint *)((int)this + 0x50) = param_2;
  *(undefined4 *)((int)this + 0x54) = param_3;
  return param_2;
}

/* ref: Client::System::Framework::JobListArgArrayAndIndex::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049fef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49fef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)(gen_imp_WaitForSingleObject(*(HANDLE *)(this + 0x10),0xffffffff));
}

/* ref: FUN_0049ff00 */
GEN_FRAME uint GEN_THISCALL F_0049ff00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ff00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)((int)this + 0x54);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (uVar2 == 0xffffffff) {
    uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  iVar3 = (*(int *)((int)this + 0x50) - uVar2) - 1;
  *param_2 = iVar3;
  if (iVar3 < 0) {
    *param_2 = 0;
  }
  if (*(uint *)((int)this + 0x50) <= uVar2) {
    return 0;
  }
  *param_1 = &REFG(undefined, 0x13754d8);
  return (int)this + 0x28;
}

/* ref: FUN_0049ff50 */
GEN_FRAME uint GEN_THISCALL F_0049ff50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ff50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = param_2;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xc))), (long)(0));
  *(undefined4 *)((int)this + 0x58) = *param_1;
  *(undefined4 *)((int)this + 0x5c) = param_1[1];
  *(undefined4 *)((int)this + 0x60) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 100) = uVar1;
  *(undefined4 *)((int)this + 0x50) = param_2;
  return uVar1;
}

/* ref: FUN_0049ff90 */
GEN_FRAME unsigned int GEN_THISCALL F_0049ff90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x49ff90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  
  ((code *)*(gen_code32 *)((int)this + 0x30))(*(undefined4 *)((int)this + 0x34),(int)this + 0x38,param_2);
  piVar1 = (int *)((int)this - 0x1c);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-1));
  if (iVar2 == 1) {
    if (*(int *)((int)this - 0xc) != 0) {
      ((code *)*(gen_code32 *)((int)this - 0x10))
                (*(undefined4 *)((int)this - 0xc),(int)this - 8,(int)this - 0x20);
    }
    gen_imp_SetEvent(*(HANDLE *)((int)this - 0x18));
  }
  return 0;
}

/* ref: Client::System::Framework::JobListNoArg::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0049fff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x49fff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)(gen_imp_WaitForSingleObject(*(HANDLE *)(this + 0x10),0xffffffff));
}

/* ref: FUN_004a0020 */
GEN_NOFRAME uint GEN_THISCALL F_004a0020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4a0020u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = in_ecx;
  return (uint)in_ecx;
}

/* ref: FUN_004a0050 */
GEN_FRAME uint GEN_THISCALL F_004a0050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4a0050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(char * PTR32 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(char * PTR32 *)((int)this + 0x24) = param_1;
    return (uint)this;
  }
  *(undefined * PTR32 *)((int)this + 0x24) = this;
  return (uint)this;
}

/* ref: Client::System::Framework::Task::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_004a0090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4a0090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)(this + 0xc) != 0) {
    ((code *)*(gen_code32 *)(this + 8))(*(undefined4 *)(this + 0xc),this + 0x10,param_1);
  }
  return;
}

/* ref: FUN_004a00c0 */
GEN_FRAME uint GEN_THISCALL F_004a00c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4a00c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  *(undefined * PTR32 *)(param_1 + 0x20) = this;
  if (uVar1 != 0) {
    *(undefined * PTR32 *)(uVar1 + 0x1c) = this;
  }
  *(uint *)((int)this + 0x20) = uVar1;
  *(int *)((int)this + 0x1c) = param_1;
  return uVar1;
}

/* ref: FUN_004a00e0 */
GEN_NOFRAME uint GEN_THISCALL F_004a00e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4a00e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x1c) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x20))) = *(undefined4 *)((int)this + 0x20);
  }
  uVar1 = *(uint *)((int)this + 0x20);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  }
  return uVar1;
}

/* ref: FUN_004a0100 */
GEN_FRAME uint GEN_THISCALL F_004a0100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a0100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 * 0x58 + *(int *)((int)this + 0x50);
  iVar1 = *(int *)(uVar2 + 0x20);
  *(int *)(uVar2 + 0x20) = param_2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x1c) = param_2;
  }
  *(int *)(param_2 + 0x20) = iVar1;
  *(uint *)(param_2 + 0x1c) = uVar2;
  return uVar2;
}

/* ref: FUN_004a0160 */
GEN_FRAME uint GEN_THISCALL F_004a0160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4a0160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x48);
  *(uint *)((int)this + 0x48) = param_1;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = param_1;
  }
  *(int *)(param_1 + 0x20) = iVar1;
  *(int *)(param_1 + 0x1c) = (int)this + 0x28;
  return param_1;
}

/* ref: Client::System::Framework::TaskManager::RootTask::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_004a0180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4a0180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(this + 0x20);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[8];
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_FWD,param_1);
    piVar2 = piVar1;
  }
  return;
}

/* ref: FUN_004a01b0 */
GEN_NOFRAME uint GEN_THISCALL F_004a01b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a01b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x50);
  if (uVar1 != 0) {
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(uVar1 + 0x20);
  }
  return uVar1;
}

/* ref: FUN_004a01c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004a01c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4a01c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  uint uVar3;
  int * piVar4;
  
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x24),0xffffffff);
  while( true ) {
    uVar3 = 0;
    bVar2 = false;
    if (*(int *)((int)this + 8) == 0) {
      return 0;
    }
    do {
      piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) + 0x28)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
      if (iVar1 != 0) {
        bVar2 = true;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 8));
    if (!bVar2) break;
    F_004cee80();
  }
  return 0;
}

/* ref: FUN_004a0210 */
GEN_FRAME uint GEN_THISCALL F_004a0210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4a0210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(uint *)&gen_a1) < *(uint *)((int)this + 8)) && ((*(uint *)&gen_a1) != 0)) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + (*(uint *)&gen_a1) * 4))) + 0x21))) = 1;
  }
  return (*(uint *)&gen_a1);
}

/* ref: FUN_004a0230 */
GEN_FRAME uint GEN_THISCALL F_004a0230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4a0230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(uint *)&gen_a1) < *(uint *)((int)this + 8)) && ((*(uint *)&gen_a1) != 0)) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + (*(uint *)&gen_a1) * 4))) + 0x21))) = 0;
  }
  return (*(uint *)&gen_a1);
}

/* ref: FUN_004a0250 */
GEN_FRAME uint GEN_THISCALL F_004a0250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a0250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if (((*(uint *)&gen_a1) < *(uint *)((int)this + 8)) && ((*(uint *)&gen_a1) != 0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 4) + (*(uint *)&gen_a1) * 4)));
    if ((char)param_2 != '\0') {
      *(undefined1 *)(iVar1 + 0x21) = 1;
      return (*(uint *)&gen_a1);
    }
    *(undefined1 *)(iVar1 + 0x21) = 0;
  }
  return (*(uint *)&gen_a1);
}

/* ref: FUN_004a0280 */
GEN_FRAME byte GEN_THISCALL F_004a0280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4a0280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < *(uint *)((int)this + 8)) {
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) + 0x21)));
  }
  return 0;
}

/* ref: FUN_004a02a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004a02a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4a02a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10929f0));
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x24));
  F_004cf880(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_004a02e0 */
GEN_NOFRAME uint GEN_THISCALL F_004a02e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4a02e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  *(undefined1 *)((int)this + 0x20) = 1;
  *(undefined1 *)((int)this + 0x21) = 0;
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x28)));
  _InterlockedExchangeAdd((volatile long *)(piVar2), (long)(1));
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0x24));
  uVar1 = F_004cf020(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004a0310 */
GEN_FRAME uint GEN_THISCALL F_004a0310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4a0310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  HANDLE pvVar1;
  
  *(undefined4 *)this = param_1;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 4))), (long)(0));
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,1,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 8) = pvVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return (uint)this;
}

/* ref: FUN_004a0350 */
GEN_FRAME uint GEN_THISCALL F_004a0350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a0350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  HANDLE pvVar1;
  
  *(undefined4 *)this = param_1;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 4))), (long)(0));
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,1,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 8) = pvVar1;
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = param_2[1];
  *(undefined4 *)((int)this + 0x18) = param_2[2];
  *(undefined4 *)((int)this + 0x1c) = param_2[3];
  return (uint)this;
}

/* ref: FUN_004a03a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004a03a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4a03a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 8),0xffffffff);
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 4))), (long)(*(undefined4 *)this));
  return (uint)(gen_imp_ResetEvent(*(HANDLE *)((int)this + 8)));
}

