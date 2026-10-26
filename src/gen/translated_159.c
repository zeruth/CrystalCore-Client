#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ce2310 */
uint F_00ce2310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce2310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IStreamReadThreadEventReceiver::vf0 */
uint F_00ce2b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce2b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce2b80 */
unsigned int F_00ce2b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce2b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((int)this + 0x28) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  if (*(char *)((int)this + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf1 */
uint F_00ce2bc0(void)
{
  GEN_ENTER(0xce2bc0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf29 */
uint F_00ce2bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xce2bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x7c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf31 */
uint F_00ce2be0(unsigned int gen_a0)
{
  GEN_ENTER(0xce2be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x68);
}

/* ref: FUN_00ce2bf0 */
uint F_00ce2bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce2bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ce2c00((undefined *)((int)this + -100),param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf0 */
uint F_00ce2c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce2c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ce2210(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce2c30 */
unsigned int F_00ce2c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce2c30u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00ce2c50 */
uint F_00ce2c50(unsigned int gen_a0)
{
  GEN_ENTER(0xce2c50u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *param_1;
  *(undefined2 *)(uVar1 + 2) = 0;
  *(uint *)(uVar1 + 4) = (param_1[1] - uVar1) + -0x10;
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00ce2c80 */
unsigned int F_00ce2c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce2c80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar1;
    return 0;
  }
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_00ce2cb0 */
unsigned int F_00ce2cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce2cb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  *(int *)(param_3 + 8) = param_2;
  if (param_2 == 0) {
    iVar1 = *param_1;
    *param_1 = param_3;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xc);
    *(int *)(param_2 + 0xc) = param_3;
  }
  *(int *)(param_3 + 0xc) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = param_3;
    return 0;
  }
  param_1[1] = param_3;
  return 0;
}

/* ref: FUN_00ce2d10 */
uint F_00ce2d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce2d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  
  local_c = param_1 - (uint)*(ushort *)(param_1 + 2);
  iVar4 = *(int *)(param_1 + 4) + 0x10 + param_1;
  iVar1 = param_2 + param_3;
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar5 = param_2 - 0x10;
  if (iVar3 == 0) {
    *(int *)this = iVar2;
  }
  else {
    *(int *)(iVar3 + 0xc) = iVar2;
  }
  if (iVar2 == 0) {
    *(int *)((int)this + 4) = iVar3;
  }
  else {
    *(int *)(iVar2 + 8) = iVar3;
  }
  if ((0x13 < (uint)(iVar5 - local_c)) && ((char)param_4 == '\0')) {
    *(uint *)(local_c + 4) = (iVar5 - local_c) - 0x10;
    *(undefined2 *)(local_c + 2) = 0;
    *(undefined4 *)(local_c + 0xc) = 0;
    *(int *)(local_c + 8) = iVar3;
    if (iVar3 == 0) {
      iVar2 = *(int *)this;
      *(int *)this = local_c;
    }
    else {
      iVar2 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0xc) = local_c;
    }
    *(int *)(local_c + 0xc) = iVar2;
    iVar3 = local_c;
    if (iVar2 == 0) {
      *(int *)((int)this + 4) = local_c;
      local_c = iVar5;
    }
    else {
      *(int *)(iVar2 + 8) = local_c;
      local_c = iVar5;
    }
  }
  if ((0x13 < (uint)(iVar4 - iVar1)) && ((char)param_4 != '\0')) {
    *(undefined2 *)(iVar1 + 2) = 0;
    *(uint *)(iVar1 + 4) = (iVar4 - iVar1) - 0x10;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 8) = iVar3;
    if (iVar3 == 0) {
      iVar2 = *(int *)this;
      *(int *)this = iVar1;
    }
    else {
      iVar2 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0xc) = iVar1;
    }
    *(int *)(iVar1 + 0xc) = iVar2;
    iVar4 = iVar1;
    if (iVar2 == 0) {
      *(int *)((int)this + 4) = iVar1;
    }
    else {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  *(undefined4 *)(param_2 - 8) = 0;
  *(int *)(param_2 - 0xc) = (iVar4 - iVar5) + -0x10;
  *(undefined4 *)(param_2 - 4) = 0;
  *(short *)(param_2 - 0xe) = (short)iVar5 - (short)local_c;
  iVar1 = *(int *)((int)this + 0xc);
  *(int *)(param_2 - 8) = iVar1;
  if (iVar1 == 0) {
    iVar4 = *(int *)((int)this + 8);
    *(int *)((int)this + 8) = iVar5;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 0xc) = iVar5;
  }
  *(int *)(param_2 - 4) = iVar4;
  if (iVar4 == 0) {
    *(int *)((int)this + 0xc) = iVar5;
    return param_2;
  }
  *(int *)(iVar4 + 8) = iVar5;
  return param_2;
}

/* ref: FUN_00ce2e50 */
uint F_00ce2e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce2e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_c;
  int local_8;
  
  iVar3 = *(int *)this;
  uVar4 = 0xffffffff;
  local_8 = 0;
  local_c = 0;
  if (iVar3 != 0) {
    do {
      uVar1 = *(uint *)(iVar3 + 4);
      uVar2 = (param_2 - 1U) + iVar3 + 0x10 & ~(param_2 - 1U);
      if ((((uVar2 - (iVar3 + 0x10)) + param_1 <= uVar1) && (uVar1 < uVar4)) &&
         ((iVar5 = iVar3, local_c = uVar2, *(char *)((int)this + 0x10) != '\0' ||
          (uVar4 = uVar1, local_8 = iVar3, uVar1 == param_1)))) break;
      iVar3 = *(int *)(iVar3 + 0xc);
      iVar5 = local_8;
    } while (iVar3 != 0);
    if (iVar5 != 0) {
      uVar4 = F_00ce2d10(this,iVar5,local_c,param_1,1);
      return uVar4;
    }
  }
  return 0;
}

/* ref: FUN_00ce2ef0 */
uint F_00ce2ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce2ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_c;
  int local_8;
  
  uVar6 = 0xffffffff;
  local_8 = 0;
  local_c = 0;
  if (*(int *)((int)this + 4) != 0) {
    iVar3 = *(int *)((int)this + 4);
    do {
      iVar5 = iVar3;
      uVar2 = *(uint *)(iVar5 + 4);
      uVar4 = (uVar2 - param_1) + iVar5 + 0x10 & ~(param_2 - 1U);
      if (((-1 < (int)(uVar4 - (iVar5 + 0x10))) && (uVar2 < uVar6)) &&
         ((local_c = uVar4, *(char *)((int)this + 0x10) != '\0' ||
          (uVar6 = uVar2, local_8 = iVar5, uVar2 == param_1)))) break;
      piVar1 = (int *)(iVar5 + 8);
      iVar5 = local_8;
      iVar3 = *piVar1;
    } while (*piVar1 != 0);
    if (iVar5 != 0) {
      uVar6 = F_00ce2d10(this,iVar5,local_c,param_1,0);
      return uVar6;
    }
  }
  return 0;
}

/* ref: FUN_00ce2f80 */
uint F_00ce2f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce2f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *param_1;
  uVar5 = param_1[1];
  uVar6 = 0;
  uVar3 = *(uint *)this;
  if (*(uint *)this != 0) {
    do {
      uVar4 = uVar3;
      if (uVar8 <= uVar4) {
        uVar7 = uVar6;
        if (uVar4 == uVar5) {
          iVar2 = *(int *)(uVar4 + 8);
          uVar5 = *(int *)(uVar4 + 4) + 0x10 + uVar4;
          iVar1 = *(int *)(uVar4 + 0xc);
          if (iVar2 == 0) {
            *(int *)this = iVar1;
          }
          else {
            *(int *)(iVar2 + 0xc) = iVar1;
          }
          if (iVar1 == 0) {
            *(int *)((int)this + 4) = iVar2;
          }
          else {
            *(int *)(iVar1 + 8) = iVar2;
          }
        }
        break;
      }
      uVar3 = *(uint *)(uVar4 + 0xc);
      uVar6 = uVar4;
      uVar7 = uVar4;
    } while (*(uint *)(uVar4 + 0xc) != 0);
    uVar6 = uVar7;
    if ((uVar7 != 0) && (*(int *)(uVar7 + 4) + 0x10 + uVar7 == *param_1)) {
      uVar6 = *(uint *)(uVar7 + 8);
      iVar2 = *(int *)(uVar7 + 0xc);
      if (uVar6 == 0) {
        *(int *)this = iVar2;
      }
      else {
        *(int *)(uVar6 + 0xc) = iVar2;
      }
      uVar8 = uVar7;
      if (iVar2 == 0) {
        *(uint *)((int)this + 4) = uVar6;
      }
      else {
        *(uint *)(iVar2 + 8) = uVar6;
      }
    }
  }
  *(undefined2 *)(uVar8 + 2) = 0;
  *(uint *)(uVar8 + 4) = (uVar5 - uVar8) + -0x10;
  *(undefined4 *)(uVar8 + 0xc) = 0;
  *(uint *)(uVar8 + 8) = uVar6;
  if (uVar6 == 0) {
    uVar5 = *(uint *)this;
    *(uint *)this = uVar8;
  }
  else {
    uVar5 = *(uint *)(uVar6 + 0xc);
    *(uint *)(uVar6 + 0xc) = uVar8;
  }
  *(uint *)(uVar8 + 0xc) = uVar5;
  if (uVar5 == 0) {
    *(uint *)((int)this + 4) = uVar8;
    return 0;
  }
  *(uint *)(uVar5 + 8) = uVar8;
  return uVar5;
}

/* ref: FUN_00ce3060 */
uint F_00ce3060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce3060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = param_1 + 3U & 0xfffffffc;
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x11);
  if (*(char *)((int)this + 0x11) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  if ((char)param_3 != '\0') {
    uVar1 = F_00ce2e50(this,uVar1,param_2);
    return uVar1;
  }
  uVar1 = F_00ce2ef0(this,uVar1,-param_2);
  return uVar1;
}

/* ref: FUN_00ce30d0 */
unsigned int F_00ce30d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce30d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(char *)((int)this + 0x30) = *(char *)((int)this + 0x11);
    if (*(char *)((int)this + 0x11) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    }
    if (*(char *)((int)this + 0x30) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    }
    iVar1 = *(int *)(param_1 + -4);
    iVar2 = *(int *)(param_1 + -8);
    (*(int *)(gen_frame + 0x4)) = (param_1 + -0x10) - (uint)*(ushort *)(param_1 + -0xe);
    (*(int *)(gen_frame + 0x8)) = *(int *)(param_1 + -0xc) + param_1;
    if (iVar2 == 0) {
      *(int *)((int)this + 8) = iVar1;
    }
    else {
      *(int *)(iVar2 + 0xc) = iVar1;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
      F_00ce2f80(this,&(*(int *)(gen_frame + 0x4)));
      return 0;
    }
    *(int *)((int)this + 0xc) = iVar2;
    F_00ce2f80(this,&(*(int *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_00ce3160 */
uint F_00ce3160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce3160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00ce3200 */
uint F_00ce3200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce3200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce3160));
    }
    ((code *)REFG(gen_code32, 0x15d861c))((*(undefined * PTR32 (*)[1])REFP(0x112f428)),"","..\\SdHeap.cpp",0x14,
                    "SQEX::CDev::Engine::Sd::SdHeap::CreateSdHeap");
  }
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_3;
  *(char *)((int)this + 0x11) = (char)param_4;
  *(char *)((int)this + 0x30) = (char)param_4;
  if ((char)param_4 != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  uVar1 = param_1 + 3U & 0xfffffffc;
  *(undefined2 *)(uVar1 + 2) = 0;
  *(uint *)(uVar1 + 4) = ((param_1 + param_2 & 0xfffffffcU) - uVar1) + -0x10;
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0xc) = 0;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00ce32b0 */
uint F_00ce32b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce32b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00ce32c0 */
uint F_00ce32c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce32c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 - param_2;
}

/* ref: FUN_00ce32d0 */
uint F_00ce32d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce32d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 - param_2;
}

/* ref: FUN_00ce32e0 */
uint F_00ce32e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce32e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00ce3300 */
uint F_00ce3300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3300u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00ce3320 */
uint F_00ce3320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3320u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ~((*(int *)&gen_args[1]) - 1U) & (*(uint *)&gen_args[0]);
}

/* ref: FUN_00ce3330 */
uint F_00ce3330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3330u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ~((*(int *)&gen_args[1]) - 1U) & (*(uint *)&gen_args[0]);
}

/* ref: FUN_00ce3340 */
uint F_00ce3340(unsigned int gen_a0)
{
  GEN_ENTER(0xce3340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00ce3350 */
uint F_00ce3350(unsigned int gen_a0)
{
  GEN_ENTER(0xce3350u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x10;
}

/* ref: FUN_00ce3360 */
uint F_00ce3360(unsigned int gen_a0)
{
  GEN_ENTER(0xce3360u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(int *)(param_1 + 4) + 0x10 + param_1;
}

/* ref: FUN_00ce3380 */
uint F_00ce3380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3380u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  *param_1 = param_2 - (uint)*(ushort *)(param_2 + 2);
  uVar1 = *(int *)(param_2 + 4) + 0x10 + param_2;
  param_1[1] = uVar1;
  return uVar1;
}

/* ref: FUN_00ce33b0 */
uint F_00ce33b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce33b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1;
}

/* ref: FUN_00ce33c0 */
unsigned int F_00ce33c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce33c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  *(int *)(param_2 + 8) = iVar1;
  if (iVar1 == 0) {
    iVar2 = *param_1;
    *param_1 = param_2;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 0xc) = param_2;
  }
  *(int *)(param_2 + 0xc) = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = param_2;
    return 0;
  }
  param_1[1] = param_2;
  return 0;
}

/* ref: FUN_00ce3410 */
unsigned int F_00ce3410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3410u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00ce3430 */
byte F_00ce3430(unsigned int gen_a0)
{
  GEN_ENTER(0xce3430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int iVar2;
  
  bVar1 = 1;
  if (((param_1 != 0) &&
      (iVar2 = ((param_1 >> 0x18) - 1) * *(int *)(REFG(int, 0x15d8c04) + 0x14) +
               *(int *)(REFG(int, 0x15d8c04) + 0x10), iVar2 != 0)) && (*(uint *)(iVar2 + 0x10) == param_1))
  {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00ce3460 */
byte F_00ce3460(unsigned int gen_a0)
{
  GEN_ENTER(0xce3460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  uVar2 = F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c,0);
  while( true ) {
    if (uVar2 == 0) {
      if ((*(int *)(REFG(int, 0x15d8c04) + 0x50) != 0) &&
         (*((int *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0x14))) == param_1)) {
        if (*((int *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0xc))) == 1) {
          bVar3 = true;
        }
        else {
          piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0x30)));
          uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
          bVar3 = (char)uVar2 == '\0';
        }
      }
      if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      return bVar3;
    }
    if (*(int *)(uVar2 + 0x14) == param_1) break;
    uVar2 = F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c,uVar2);
  }
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  return 1;
}

/* ref: FUN_00ce3530 */
uint F_00ce3530(void)
{
  GEN_ENTER(0xce3530u, 0u, 0u, 0u, 0u);
  char * pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  undefined4 * puVar4;
  
  uVar3 = 0;
  if (REFG(undefined4 * PTR32, 0x15d8c04) != (undefined4 *)0x0) {
    if (*((char *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04) + 0x1b))) != '\0') {
      gen_imp_EnterCriticalSection(REFG(undefined4 * PTR32, 0x15d8c04) + 0x15);
    }
    *((undefined1 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04) + 0x13))) = 1;
    puVar2 = REFG(undefined4 * PTR32, 0x15d8c04);
    puVar4 = REFG(undefined4 * PTR32, 0x15d8c04) + 0x1c;
    gen_imp_EnterCriticalSection(puVar4);
    if (0 < (int)puVar2[0x24]) {
      gen_imp_SetEvent((HANDLE)puVar2[0x23]);
      puVar2[0x25] = puVar2[0x24];
      puVar2[0x26] = puVar2[0x26] + 1;
    }
    gen_imp_LeaveCriticalSection(puVar4);
    if (*((char *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04) + 0x1b))) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8c04) + 0x15);
    }
    puVar2 = REFG(undefined4 * PTR32, 0x15d8c04);
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04)[0x28] + 4))))(REFG(undefined4 * PTR32, 0x15d8c04) + 0x28);
    F_004cf020(puVar2 + 0x28);
    puVar2[0x2e] = 0;
    puVar2 = REFG(undefined4 * PTR32, 0x15d8c04);
    pcVar1 = ((char *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04) + 7)));
    lpCriticalSection = (LPCRITICAL_SECTION)(REFG(undefined4 * PTR32, 0x15d8c04) + 8);
    *((char *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04) + 0xe))) = *pcVar1;
    if (*pcVar1 != '\0') {
      gen_imp_EnterCriticalSection(lpCriticalSection);
    }
    uVar3 = 0;
    if (puVar2[2] != 0) {
      uVar3 = F_00406810(puVar2[2]);
      puVar2[2] = 0;
    }
    puVar2[3] = 0;
    if (*(char *)(puVar2 + 0xe) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      uVar3 = extraout_EAX;
    }
    if (REFG(undefined4 * PTR32, 0x15d8c04) != (undefined4 *)0x0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8c04))))(REFG(undefined4 * PTR32, 0x15d8c04),1);
    }
    REFG(undefined4 * PTR32, 0x15d8c04) = (undefined4 *)0x0;
  }
  return uVar3;
}

/* ref: FUN_00ce3950 */
byte F_00ce3950(unsigned int gen_a0)
{
  GEN_ENTER(0xce3950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char * pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  bool local_5;
  
  local_5 = true;
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  puVar4 = (undefined4 *)F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c,0);
  while (puVar4 != (undefined4 *)0x0) {
    if (puVar4[5] == param_1) {
      puVar5 = (undefined4 *)F_00d2ff30((undefined *)(REFG(int, 0x15d8c04) + 0x3c),puVar4);
      puVar4[4] = 0xffffffff;
      iVar3 = REFG(int, 0x15d8c04);
      pcVar1 = (char *)(REFG(int, 0x15d8c04) + 0x1c);
      lpCriticalSection = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
      *(char *)(REFG(int, 0x15d8c04) + 0x38) = *pcVar1;
      if (*pcVar1 != '\0') {
        gen_imp_EnterCriticalSection(lpCriticalSection);
      }
      *puVar4 = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 * PTR32 *)(iVar3 + 0xc) = puVar4;
      puVar4 = puVar5;
      if (*(char *)(iVar3 + 0x38) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
    }
    else {
      puVar4 = (undefined4 *)F_00d2ff90((undefined *)(REFG(int, 0x15d8c04) + 0x3c),puVar4);
    }
  }
  if ((*(int *)(REFG(int, 0x15d8c04) + 0x50) != 0) &&
     (*((int *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0x14))) == param_1)) {
    *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0x18))) = 1;
    if ((*((int *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0xc))) == 1) ||
       (*((int *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0xc))) != 0)) {
      local_5 = false;
    }
    else {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0x30)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      local_5 = (char)uVar6 != '\0';
    }
  }
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  return local_5;
}

/* ref: FUN_00ce3a80 */
unsigned int F_00ce3a80(unsigned int gen_a0)
{
  GEN_ENTER(0xce3a80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  
  if (param_1 != 0) {
    if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
    }
    iVar1 = ((param_1 >> 0x18) - 1) * *(int *)(REFG(int, 0x15d8c04) + 0x14) + *(int *)(REFG(int, 0x15d8c04) + 0x10);
    if ((iVar1 != 0) && (*(uint *)(iVar1 + 0x10) == param_1)) {
      *(undefined4 *)(iVar1 + 0x18) = 1;
      if (*(int *)(REFG(int, 0x15d8c04) + 0x50) != iVar1) {
        F_00d2ff30((undefined *)(REFG(int, 0x15d8c04) + 0x3c),iVar1);
        *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
        F_00cc6810((undefined *)(REFG(int, 0x15d8c04) + 8),iVar1);
      }
    }
    if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
    }
  }
  return 0;
}

/* ref: FUN_00ce3b10 */
uint F_00ce3b10(unsigned int gen_a0)
{
  GEN_ENTER(0xce3b10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char * pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar2;
  bool bVar3;
  undefined4 * puVar4;
  uint uVar5;
  int local_c;
  
  bVar3 = false;
  local_c = 0;
  if (*(char *)(REFG(undefined4, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(undefined4, 0x15d8c04) + 0x54));
  }
  puVar4 = (undefined4 *)F_00d2ff90(REFG(undefined4, 0x15d8c04) + 0x3c,0);
  while (puVar4 != (undefined4 *)0x0) {
    F_00d2ff30((undefined *)(REFG(undefined4, 0x15d8c04) + 0x3c),puVar4);
    puVar4[4] = 0xffffffff;
    uVar5 = REFG(undefined4, 0x15d8c04);
    pcVar1 = (char *)(REFG(undefined4, 0x15d8c04) + 0x1c);
    lpCriticalSection = (LPCRITICAL_SECTION)(REFG(undefined4, 0x15d8c04) + 0x20);
    *(char *)(REFG(undefined4, 0x15d8c04) + 0x38) = *pcVar1;
    if (*pcVar1 != '\0') {
      gen_imp_EnterCriticalSection(lpCriticalSection);
    }
    *puVar4 = *(undefined4 *)(uVar5 + 0xc);
    *(undefined4 * PTR32 *)(uVar5 + 0xc) = puVar4;
    if (*(char *)(uVar5 + 0x38) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    puVar4 = (undefined4 *)F_00d2ff90(REFG(undefined4, 0x15d8c04) + 0x3c,0);
  }
  if (*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) + 0x18))) = 1;
    if (*((int *)GEN_TOP((*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) + 0xc))) == 1) {
      local_c = *(int *)(REFG(undefined4, 0x15d8c04) + 0x50);
      bVar3 = true;
    }
    else if ((*((int *)GEN_TOP((*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) + 0xc))) == 0) &&
            (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) + 0x30))),
            uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), (char)uVar5 == '\0')) {
      local_c = *(int *)(REFG(undefined4, 0x15d8c04) + 0x50);
      bVar3 = true;
    }
  }
  if (*(char *)(REFG(undefined4, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_LeaveCriticalSection(REFG(undefined4, 0x15d8c04) + 0x54);
  }
  uVar5 = REFG(undefined4, 0x15d8c04);
  if ((bVar3) && ((char)param_1 != '\0')) {
    while( true ) {
      if (*(char *)(REFG(undefined4, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_EnterCriticalSection(REFG(undefined4, 0x15d8c04) + 0x54);
      }
      if (*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) != local_c) break;
      if (*(char *)(REFG(undefined4, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_LeaveCriticalSection(REFG(undefined4, 0x15d8c04) + 0x54);
      }
      F_004cee60(4);
    }
    uVar5 = REFG(undefined4, 0x15d8c04) + 0x54;
    if (*(char *)(REFG(undefined4, 0x15d8c04) + 0x6c) != '\0') {
      uVar5 = gen_imp_LeaveCriticalSection(uVar5);
    }
  }
  return uVar5;
}

/* ref: FUN_00ce3c90 */
uint F_00ce3c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce3c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00ce3d30 */
unsigned int F_00ce3d30(unsigned int gen_a0)
{
  GEN_ENTER(0xce3d30u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  char * pcVar3;
  uint uVar4;
  
  if (REFG(undefined4, 0x15d8c04) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0xd0,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar2 == (undefined *)0x0) {
      REFG(undefined4, 0x15d8c04) = 0;
    }
    else {
      REFG(undefined4, 0x15d8c04) = F_00ce4370(pvVar2);
    }
    (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
    (*(undefined4 *)(gen_frame + 0x8)) = 0x10;
    F_00cc6930((undefined *)(REFG(undefined4, 0x15d8c04) + 8),0x48,0x14,&(*(char * PTR32 *)(gen_frame + 0x4)),8,1);
    F_00d2fdb0(REFG(undefined4, 0x15d8c04) + 0x3c,0);
    *(undefined1 *)(REFG(undefined4, 0x15d8c04) + 0x4c) = 0;
    *(undefined4 *)(REFG(undefined4, 0x15d8c04) + 0x50) = 0;
    uVar1 = REFG(undefined4, 0x15d8c04);
    pvVar2 = (undefined *)(REFG(undefined4, 0x15d8c04) + 0xa0);
    *(gen_code32 *)(REFG(undefined4, 0x15d8c04) + 0xc0) = ((code *)REFP(0xce42b0));
    *(uint *)(uVar1 + 0xc4) = uVar1;
    *(gen_code32 *)(uVar1 + 200) = ((code *)REFP(0xce3620));
    *(undefined4 *)(uVar1 + 0xcc) = 0;
    pcVar3 = (char *)*param_1;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "sound";
    }
    uVar4 = F_004cf9e0(pvVar2,0,param_1[2],param_1[1],pcVar3);
    *(uint *)(uVar1 + 0xb8) = uVar4;
  }
  return 0;
}

/* ref: FUN_00ce3e30 */
uint F_00ce3e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xce3e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  LPCRITICAL_SECTION p_Var4;
  uint uVar5;
  
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  iVar2 = REFG(int, 0x15d8c04);
  pcVar1 = (char *)(REFG(int, 0x15d8c04) + 0x1c);
  p_Var4 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
  *(char *)(REFG(int, 0x15d8c04) + 0x38) = *pcVar1;
  if (*pcVar1 != '\0') {
    gen_imp_EnterCriticalSection(p_Var4);
  }
  puVar3 = *(undefined4 * PTR32 *)(iVar2 + 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    if (*(char *)(iVar2 + 0x38) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var4);
    }
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 *)(iVar2 + 0xc) = *puVar3;
    if (*(char *)(iVar2 + 0x38) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var4);
    }
    if (puVar3 != (undefined4 *)0x0) goto LAB_00ce3ed0;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce3c90));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112f534),"","StreamReadThread.cpp",0xee,
                  "SQEX::CDev::Engine::Sd::Driver::StreamReadThread::AddQueue");
LAB_00ce3ed0: ;
  puVar3[0xc] = param_1;
  puVar3[0xd] = param_2;
  puVar3[10] = param_3;
  puVar3[0xb] = param_4;
  puVar3[8] = param_5;
  puVar3[9] = param_6;
  puVar3[3] = 0;
  puVar3[5] = param_7;
  puVar3[6] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = param_8;
  REFG(undefined4, 0x15d8c08) = REFG(undefined4, 0x15d8c08) + 1;
  uVar5 = ((uint)((int)puVar3 - *(int *)(REFG(int, 0x15d8c04) + 0x10)) / *(uint *)(REFG(int, 0x15d8c04) + 0x14) + 1)
          * 0x1000000 ^ REFG(undefined4, 0x15d8c08) & 0xffffff;
  puVar3[4] = uVar5;
  F_00d2fe00((undefined *)(REFG(int, 0x15d8c04) + 0x3c),puVar3);
  iVar2 = REFG(int, 0x15d8c04);
  p_Var4 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x70);
  gen_imp_EnterCriticalSection(p_Var4);
  if (0 < *(int *)(iVar2 + 0x90)) {
    gen_imp_SetEvent(*(HANDLE *)(iVar2 + 0x8c));
    *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
    *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 1;
  }
  gen_imp_LeaveCriticalSection(p_Var4);
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_LeaveCriticalSection(REFG(int, 0x15d8c04) + 0x54);
  }
  return uVar5;
}

/* ref: FUN_00ce3fa0 */
uint F_00ce3fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  LPCRITICAL_SECTION p_Var6;
  
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  iVar2 = REFG(int, 0x15d8c04);
  pcVar1 = (char *)(REFG(int, 0x15d8c04) + 0x1c);
  p_Var6 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
  *(char *)(REFG(int, 0x15d8c04) + 0x38) = *pcVar1;
  if (*pcVar1 != '\0') {
    gen_imp_EnterCriticalSection(p_Var6);
  }
  puVar5 = *(undefined4 * PTR32 *)(iVar2 + 0xc);
  if (puVar5 == (undefined4 *)0x0) {
    if (*(char *)(iVar2 + 0x38) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var6);
    }
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 *)(iVar2 + 0xc) = *puVar5;
    if (*(char *)(iVar2 + 0x38) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var6);
    }
    if (puVar5 != (undefined4 *)0x0) goto LAB_00ce4040;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce3c90));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112f600),&REFG(undefined, 0x112f4ab),"StreamReadThread.cpp",0x114,
                  "SQEX::CDev::Engine::Sd::Driver::StreamReadThread::AddQueueEx");
LAB_00ce4040: ;
  REFG(undefined4, 0x15d8c08) = REFG(undefined4, 0x15d8c08) + 1;
  iVar2 = *(int *)(REFG(int, 0x15d8c04) + 0x10);
  uVar3 = *(uint *)(REFG(int, 0x15d8c04) + 0x14);
  uVar4 = REFG(undefined4, 0x15d8c08) & 0xffffff;
  puVar5[3] = 1;
  puVar5[8] = param_2;
  uVar4 = ((uint)((int)puVar5 - iVar2) / uVar3 + 1) * 0x1000000 ^ uVar4;
  puVar5[5] = param_1;
  puVar5[4] = uVar4;
  puVar5[6] = 0;
  F_00d2fe00((undefined *)(REFG(int, 0x15d8c04) + 0x3c),puVar5);
  iVar2 = REFG(int, 0x15d8c04);
  p_Var6 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x70);
  gen_imp_EnterCriticalSection(p_Var6);
  if (0 < *(int *)(iVar2 + 0x90)) {
    gen_imp_SetEvent(*(HANDLE *)(iVar2 + 0x8c));
    *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
    *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 1;
  }
  gen_imp_LeaveCriticalSection(p_Var6);
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_LeaveCriticalSection(REFG(int, 0x15d8c04) + 0x54);
  }
  return uVar4;
}

/* ref: FUN_00ce4100 */
uint F_00ce4100(unsigned int gen_a0)
{
  GEN_ENTER(0xce4100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  uVar1 = F_004cf020(this);
  *(undefined4 *)((int)this + 0x18) = 0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Common::Threading::Thread::vf0 */
uint F_00ce4120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce4120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  F_004cf880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce4150 */
uint F_00ce4150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce4150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  HANDLE pvVar1;
  
  gen_imp_InitializeCriticalSection(this);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x1c) = pvVar1;
  return (uint)this;
}

/* ref: FUN_00ce4190 */
unsigned int F_00ce4190(unsigned int gen_a0)
{
  GEN_ENTER(0xce4190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x1c));
  gen_imp_DeleteCriticalSection(this);
  return 0;
}

/* ref: FUN_00ce41b0 */
unsigned int F_00ce41b0(unsigned int gen_a0)
{
  GEN_ENTER(0xce41b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  bool bVar3;
  
  gen_imp_EnterCriticalSection(this);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  iVar2 = *(int *)((int)this + 0x28);
  gen_imp_LeaveCriticalSection(this);
  gen_imp_LeaveCriticalSection(*(undefined4 *)((int)this + 0x18));
  do {
    gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x1c),0xffffffff);
    gen_imp_EnterCriticalSection(this);
    if ((*(int *)((int)this + 0x24) < 1) || (*(int *)((int)this + 0x28) == iVar2)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    gen_imp_LeaveCriticalSection(this);
  } while (!bVar3);
  gen_imp_EnterCriticalSection(*(undefined4 *)((int)this + 0x18));
  gen_imp_EnterCriticalSection(this);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + -1;
  piVar1 = (int *)((int)this + 0x24);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  gen_imp_LeaveCriticalSection(this);
  if (iVar2 == 0) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0x1c));
  }
  return 0;
}

/* ref: FUN_00ce4250 */
unsigned int F_00ce4250(unsigned int gen_a0)
{
  GEN_ENTER(0xce4250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection(this);
  if (0 < *(int *)((int)this + 0x20)) {
    gen_imp_SetEvent(*(HANDLE *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x20);
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
  }
  gen_imp_LeaveCriticalSection(this);
  return 0;
}

/* ref: FUN_00ce42b0 */
uint F_00ce42b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xce42b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_2[1] + param_1,param_1,param_2,param_3,param_4,param_5,param_6,
                              param_7,param_8);
  return uVar1;
}

/* ref: FUN_00ce42d0 */
uint F_00ce42d0(unsigned int gen_a0)
{
  GEN_ENTER(0xce42d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004cefe0(this);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Common::Threading::Thread::vf5 */
unsigned int F_00ce4300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce4300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 TVar1;
  
  TVar1 = this[0x14];
  while (TVar1 == (undefined1)0x0) {
    if (*(int *)(this + 0x24) != 0) {
      ((code *)*(gen_code32 *)(this + 0x20))(*(undefined4 *)(this + 0x24),this + 0x28);
    }
    TVar1 = this[0x14];
  }
  return 0;
}

/* ref: FUN_00ce4340 */
uint F_00ce4340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce4340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xce42b0));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_00ce4370 */
uint F_00ce4370(unsigned int gen_a0)
{
  GEN_ENTER(0xce4370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112f69c));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  *(undefined1 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x54));
  *(undefined1 *)((int)this + 0x6c) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x70));
  *(int *)((int)this + 0x88) = (int)this + 0x54;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x8c) = pvVar1;
  F_004cefe0((undefined *)((int)this + 0xa0));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  return (uint)this;
}

/* ref: FUN_00ce4420 */
unsigned int F_00ce4420(unsigned int gen_a0)
{
  GEN_ENTER(0xce4420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112f69c));
  *(undefined4 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  F_004cf880((undefined4 *)((int)this + 0xa0));
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x8c));
  gen_imp_DeleteCriticalSection((int)this + 0x70);
  gen_imp_DeleteCriticalSection((int)this + 0x54);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x20);
  *(char *)((int)this + 0x38) = *(char *)((int)this + 0x1c);
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)((int)this + 8) != 0) {
    F_00406810(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(char *)((int)this + 0x38) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamReadThread::vf0 */
uint F_00ce44b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce44b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ce4420(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce44e0 */
uint F_00ce44e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce44e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char * pcVar1;
  uint uVar2;
  
  *(gen_code32 *)((int)this + 0x20) = ((code *)REFP(0xce42b0));
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = param_3;
  pcVar1 = (char *)*param_4;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "sound";
  }
  uVar2 = F_004cf9e0(this,0,param_4[2],param_4[1],pcVar1);
  *(uint *)((int)this + 0x18) = uVar2;
  return uVar2;
}

/* ref: FUN_00ce4530 */
uint F_00ce4530(unsigned int gen_a0)
{
  GEN_ENTER(0xce4530u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c),param_1,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00ce4580 */
uint F_00ce4580(unsigned int gen_a0)
{
  GEN_ENTER(0xce4580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00ce45a0 */
uint F_00ce45a0(void)
{
  GEN_ENTER(0xce45a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00cef840(((code *)REFP(0xce4530)));
  uVar1 = F_00cef860(((code *)REFP(0xce4580)));
  return uVar1;
}

/* ref: FUN_00ce45c0 */
unsigned int F_00ce45c0(void)
{
  GEN_ENTER(0xce45c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ce45d0 */
uint F_00ce45d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce45d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(byte *)(in_ecx + 1) = (byte)in_ecx[1] | 1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00ce45e0 */
uint F_00ce45e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce45e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint _MaxCount;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (((int)param_3 < 0) || (bVar1 = *(byte *)(param_1 + 4), (bVar1 & 4) != 0)) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
    return 0;
  }
  if ((bVar1 & 1) != 0) {
    *(byte *)(param_1 + 4) = bVar1 | 2;
    return 0;
  }
  uVar3 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 0x14);
  _MaxCount = param_3;
  if (uVar3 < param_3) {
    _MaxCount = uVar3;
  }
  if (_MaxCount == 0) {
    return 0;
  }
  F_00c4d027(param_2,param_3,((undefined *)GEN_TOP((*(int *)(iVar2 + 4) + *(int *)(iVar2 + 0x14)))),_MaxCount);
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + _MaxCount;
  return _MaxCount;
}

/* ref: FUN_00ce4660 */
uint F_00ce4660(unsigned int gen_a0)
{
  GEN_ENTER(0xce4660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  REFG(int, 0x15d8c0c) = REFG(int, 0x15d8c0c) + 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  }
  return (uint)this;
}

/* ref: FUN_00ce46b0 */
uint F_00ce46b0(unsigned int gen_a0)
{
  GEN_ENTER(0xce46b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_00cf3530(*(int *)((int)this + 8));
  }
  REFG(int, 0x15d8c0c) = REFG(int, 0x15d8c0c) + -1;
  *(undefined4 *)((int)this + 8) = 0;
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ce4700 */
uint F_00ce4700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce4700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x430];
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short * psVar8;
  short * psVar9;
  short * psVar10;
  undefined1 * puVar11;
  undefined * puVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x428)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x42c);
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  param_1[5] = 0;
  if ((char)param_2 == '\0') {
    param_1[4] = 0;
  }
  *(int * PTR32 *)((int)this + 0xc) = param_1;
  if (*(int *)((int)this + 8) == 0) {
    uVar3 = F_00cf3470(this,((code *)REFP(0xce45e0)),param_1[6]);
    *(uint *)((int)this + 8) = uVar3;
    if ((uVar3 == 0) && (REFG(undefined * PTR32, 0x15d938c) != (code *)0x0)) {
      F_00c48350(((undefined1 *)(gen_frame + 0x28)),0,0x100);
      (*(undefined4 *)(gen_frame + 0x24)) = 3;
      uVar13 = REFG(undefined4, 0x15d8c0c);
      uVar3 = F_00cef8b0(REFG(undefined4, 0x15d8c0c));
      puVar11 = ((undefined1 *)(gen_frame + 0x28));
      puVar12 = &REFG(undefined, 0x112f6d0);
      F_00c4720f(puVar11,&REFG(undefined, 0x112f6d0),uVar3);
      ((code *)REFG(gen_code32, 0x15d938c))(&(*(undefined4 *)(gen_frame + 0x24)),puVar11,puVar12,uVar3,uVar13);
    }
    if (*(int *)((int)this + 8) != 0) goto LAB_00ce47eb;
  }
  else {
LAB_00ce47eb: ;
    bVar1 = *(byte *)((int)this + 4);
    while ((bVar1 & 4) == 0) {
      uVar3 = param_1[4];
      if (((uint)param_1[2] <= uVar3) ||
         (uVar3 = F_00cf31e0(*(undefined4 *)((int)this + 8),*param_1 + uVar3,param_1[2] - uVar3),
         (int)uVar3 < 1)) break;
      param_1[4] = param_1[4] + uVar3;
      bVar1 = *(byte *)((int)this + 4);
    }
    if ((*(byte *)((int)this + 4) & 4) == 0) {
      if ((*(byte *)((int)this + 4) & 2) == 0) {
LAB_00ce4c0e: ;
        uVar4 = param_1[5];
        uVar3 = param_1[3];
        if (REFG(char, 0x15d8c28) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
        }
        F_00c47745((*(uint *)(gen_frame + 0x428)) ^ (uint)(uint)(gen_frame + 0x42c));
        return (uint)(uVar4 < uVar3);
      }
      *(undefined1 *)((int)this + 4) = 0;
      F_00cef900(*(undefined4 *)((int)this + 8));
      uVar3 = F_00cef8d0(*(undefined4 *)((int)this + 8),0);
      uVar4 = F_00cef8d0(*(undefined4 *)((int)this + 8),1);
      uVar4 = ((int)uVar4 >> 3) * uVar3;
      if ((uint)param_1[4] < (uint)param_1[2]) {
        if ((*(byte *)((int)this + 4) & 4) == 0) {
          do {
            uVar5 = param_1[4];
            if (((uint)param_1[2] <= uVar5) ||
               (uVar5 = F_00cf31e0(*(undefined4 *)((int)this + 8),*param_1 + uVar5,
                                     param_1[2] - uVar5), (int)uVar5 < 1)) break;
            if (((*(byte *)((int)this + 4) & 1) == 0) && (0 < *(int *)this)) {
              uVar5 = (int)uVar5 / (int)uVar4;
              uVar7 = param_1[4];
              (*(uint *)(gen_frame + 0x1c)) = 0x40;
              uVar6 = uVar7 / uVar4;
              if ((int)uVar5 < (int)uVar6) {
                uVar6 = uVar5;
              }
              if ((int)uVar6 < 0x40) {
                (*(uint *)(gen_frame + 0x1c)) = uVar6;
              }
              iVar2 = *param_1;
              psVar9 = ((short *)GEN_TOP(((iVar2 - (*(uint *)(gen_frame + 0x1c)) * uVar4) + uVar7)));
              (*(int *)(gen_frame + 0x18)) = 0;
              if (0 < (int)(*(uint *)(gen_frame + 0x1c))) {
                psVar8 = psVar9;
                do {
                  if (0 < (int)uVar3) {
                    psVar10 = psVar8;
                    (*(uint *)(gen_frame + 0xc)) = uVar3;
                    do {
                      *psVar10 = (short)(int)((float10)(int)*psVar10 *
                                              (float10)((float)GEN_TOF(((float10)1 -
                                                              (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                                              (float10)(int)
                                                  (*(uint *)(gen_frame + 0x1c)))))) +
                                             (float10)(int)*((short *)GEN_TOP((((iVar2 + uVar7) - (int)psVar9
                                                                      ) + (int)psVar10))) *
                                             (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                             (float10)(int)(*(uint *)(gen_frame + 0x1c))));
                      psVar10 = psVar10 + 1;
                      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
                    } while ((*(uint *)(gen_frame + 0xc)) != 0);
                  }
                  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
                  psVar8 = psVar8 + uVar3;
                } while ((*(int *)(gen_frame + 0x18)) < (int)(*(uint *)(gen_frame + 0x1c)));
              }
              uVar5 = (uVar5 - (*(uint *)(gen_frame + 0x1c))) * uVar4;
              if (0 < (int)uVar5) {
                F_01051df1(*param_1 + param_1[4],uVar5,(*(uint *)(gen_frame + 0x1c)) * uVar4 + *param_1 + param_1[4],
                           uVar5);
              }
              *(undefined4 *)this = 0;
            }
            param_1[4] = param_1[4] + uVar5;
          } while ((*(byte *)((int)this + 4) & 4) == 0);
          if ((*(byte *)((int)this + 4) & 4) == 0) goto LAB_00ce4c0e;
        }
      }
      else {
        uVar5 = F_00cf31e0(*(undefined4 *)((int)this + 8),((short *)(gen_frame + 0x128)),0x300);
        if ((*(byte *)((int)this + 4) & 4) == 0) {
          if (0 < (int)uVar5) {
            uVar5 = (int)uVar5 / (int)uVar4;
            (*(uint *)(gen_frame + 0x1c)) = 0x40;
            uVar7 = (uint)param_1[4] / uVar4;
            if ((int)uVar5 < (int)uVar7) {
              if ((int)uVar5 < 0x40) {
                (*(uint *)(gen_frame + 0x1c)) = uVar5;
              }
            }
            else if ((int)uVar7 < 0x40) {
              (*(uint *)(gen_frame + 0x1c)) = uVar7;
            }
            psVar9 = ((short *)GEN_TOP(((param_1[4] - (*(uint *)(gen_frame + 0x1c)) * uVar4) + *param_1)));
            (*(int *)(gen_frame + 0x18)) = 0;
            if (0 < (int)(*(uint *)(gen_frame + 0x1c))) {
              psVar8 = psVar9;
              do {
                if (0 < (int)uVar3) {
                  psVar10 = psVar8;
                  (*(uint *)(gen_frame + 0x0)) = uVar3;
                  do {
                    *psVar10 = (short)(int)((float10)(int)*psVar10 *
                                            (float10)((float)GEN_TOF(((float10)1 -
                                                            (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                                            (float10)(int)(*(uint *)(gen_frame + 0x1c)))
                                                            ))) +
                                           (float10)(int)*((short *)GEN_TOP(((int)psVar10 +
                                                                   ((int)((short *)(gen_frame + 0x128)) - (int)psVar9)))) *
                                           (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                           (float10)(int)(*(uint *)(gen_frame + 0x1c))));
                    psVar10 = psVar10 + 1;
                    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
                  } while ((*(uint *)(gen_frame + 0x0)) != 0);
                }
                psVar8 = psVar8 + uVar3;
                (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
              } while ((*(int *)(gen_frame + 0x18)) < (int)(*(uint *)(gen_frame + 0x1c)));
            }
            *(undefined4 *)this = 0;
          }
          goto LAB_00ce4c0e;
        }
      }
      if (REFG(char, 0x15d8c28) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
        F_00c47745((*(uint *)(gen_frame + 0x428)) ^ (uint)(uint)(gen_frame + 0x42c));
        return 0xffffffff;
      }
      goto LAB_00ce47d5;
    }
  }
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  }
LAB_00ce47d5: ;
  F_00c47745((*(uint *)(gen_frame + 0x428)) ^ (uint)(uint)(gen_frame + 0x42c));
  return 0xffffffff;
}

/* ref: FUN_00ce4c50 */
uint F_00ce4c50(unsigned int gen_a0)
{
  GEN_ENTER(0xce4c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_00cf3530(*(int *)((int)this + 8));
  }
  REFG(int, 0x15d8c0c) = REFG(int, 0x15d8c0c) + -1;
  *(undefined4 *)((int)this + 8) = 0;
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ce4ca0 */
unsigned int F_00ce4ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce4ca0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00ce4cd0 */
uint F_00ce4cd0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce4cd0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_3 & 3;
  iVar1 = (int)param_3 >> 2;
  if (uVar3 == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(iVar1,(undefined4)gen_fl2bits(param_2),param_4);
  }
  else {
    if (uVar3 == 1) {
      uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))(iVar1,(undefined4)gen_fl2bits(param_2),param_4);
      return uVar3;
    }
    uVar2 = param_3;
    if (uVar3 == 2) {
      uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x30))(iVar1,(undefined4)gen_fl2bits(param_2),param_4);
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_00ce4d40 */
unsigned int F_00ce4d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce4d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + *(int *)((int)this + 8)))) + 0xc))))
                        (iVar2 + *(int *)((int)this + 8));
      bVar3 = (char)uVar1 != '\0';
      if (bVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + iVar2))) + 8))))
                  (*(int *)((int)this + 8) + iVar2,param_1);
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2))) + 0xc))))
                        (*(int *)((int)this + 0xc) + iVar2);
      bVar4 = (char)uVar1 != '\0';
      if (bVar4) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2))) + 8))))
                  (*(int *)((int)this + 0xc) + iVar2,param_1);
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + *(int *)((int)this + 0x10)))) + 0xc))))
                        (iVar2 + *(int *)((int)this + 0x10));
      if ((char)uVar1 == '\0') {
        if (bVar4 || bVar3) goto LAB_00ce4dcb;
      }
      else {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2))) + 8))))
                  (*(int *)((int)this + 0x10) + iVar2,param_1);
LAB_00ce4dcb: ;
        ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,local_8);
      }
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0x24;
    } while (local_8 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00ce4e90 */
unsigned int F_00ce4e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce4e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  longlong lVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  int iVar7;
  
  *(uint *)((int)this + 4) = param_1;
  if (*(int *)((int)this + 8) == 0) {
    if (param_1 == 0) {
      puVar2 = (uint *)F_00406a50(4);
    }
    else {
      uVar3 = -(uint)((int)((ulonglong)param_1 * 0x24 >> 0x20) != 0) |
              (uint)((ulonglong)param_1 * 0x24);
      puVar2 = (uint *)F_00ce52b0(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    }
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
    }
    else {
      *puVar2 = param_1;
      puVar2 = puVar2 + 1;
      puVar6 = puVar2;
      uVar3 = param_1;
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        F_00cccb10(puVar6,(float)(float10)0);
        puVar6 = puVar6 + 9;
      }
    }
    *(uint * PTR32 *)((int)this + 8) = puVar2;
  }
  if (*(int *)((int)this + 0xc) == 0) {
    uVar3 = *(uint *)((int)this + 4);
    if (uVar3 == 0) {
      puVar2 = (uint *)F_00406a50(4);
    }
    else {
      uVar4 = -(uint)((int)((ulonglong)uVar3 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x24)
      ;
      puVar2 = (uint *)F_00ce52b0(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    }
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
    }
    else {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
      puVar6 = puVar2;
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        F_00cccb10(puVar6,(float)(float10)0);
        puVar6 = puVar6 + 9;
      }
    }
    *(uint * PTR32 *)((int)this + 0xc) = puVar2;
  }
  if (*(int *)((int)this + 0x10) == 0) {
    uVar3 = *(uint *)((int)this + 4);
    if (uVar3 == 0) {
      puVar2 = (uint *)F_00406a50(4);
    }
    else {
      uVar4 = -(uint)((int)((ulonglong)uVar3 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x24)
      ;
      puVar2 = (uint *)F_00ce52b0(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    }
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
    }
    else {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
      puVar6 = puVar2;
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        F_00cccb10(puVar6,(float)(float10)0);
        puVar6 = puVar6 + 9;
      }
    }
    *(uint * PTR32 *)((int)this + 0x10) = puVar2;
  }
  if (*(int *)((int)this + 0x14) == 0) {
    lVar1 = (ulonglong)*(uint *)((int)this + 4) * 4;
    uVar3 = F_00406a50(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(uint *)((int)this + 0x14) = uVar3;
  }
  iVar5 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar7 = 0;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + iVar7))) + 4))))(REFG(float, 0x1094808));
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar7))) + 4))))(*(undefined4 *)&REFG(undefined, 0x112f71c));
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + iVar7))) + 4))))
                ((undefined4)gen_fl2bits((float)(float10)1));
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x24;
    } while (iVar5 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00ce5070 */
uint F_00ce5070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce5070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00ce52b0 */
uint F_00ce52b0(unsigned int gen_a0)
{
  GEN_ENTER(0xce52b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),param_1,"CDev.Engine.Sd",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00ce5300 */
uint F_00ce5300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce5300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf0 */
uint F_00ce5330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce5330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pDVar1;
  int iVar2;
  undefined * in_ecx;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar2 = *(int *)pDVar1;
    in_ecx = this + iVar2 * 0x24;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      in_ecx = in_ecx + -0x24;
      F_00cccb40(in_ecx);
    }
    if (((param_1 & 1) != 0) && (pDVar1 != (undefined *)0x0)) {
      F_00406810(pDVar1);
    }
    return (uint)pDVar1;
  }
  F_00cccb40(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce53a0 */
uint F_00ce53a0(unsigned int gen_a0)
{
  GEN_ENTER(0xce53a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf506d(this,&REFG(undefined, 0x134d3a0));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fa8c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOAudioBounce::vf8 */
uint F_00ce53e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce53e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x2a) = *puVar1;
  *(undefined4 *)(param_1 + 0x2e) = puVar1[1];
  *(undefined4 *)(param_1 + 0x32) = puVar1[2];
  *(undefined4 *)(param_1 + 0x36) = puVar1[3];
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x3c) = *puVar1;
  *(undefined4 *)(param_1 + 0x40) = puVar1[1];
  *(undefined4 *)(param_1 + 0x44) = puVar1[2];
  *(undefined4 *)(param_1 + 0x48) = puVar1[3];
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOAudioBounce::vf10 */
uint F_00ce5450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xce5450u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar1 = (*(int *)&gen_args[1]);
  pfVar4 = ((float *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3])));
  F_00c46aa0(*(undefined4 *)(*(uint *)&gen_args[5]),pfVar4,(uint)*(ushort *)((*(int *)&gen_args[1]) + 0x3e) * (*(undefined4 * PTR32 *)&gen_args[3])[2] * 4);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = '\x01';
  if (((*(float *)&gen_args[6]) == 0.0) || (*(int *)(iVar1 + 0x24) == 0)) goto LAB_00ce55c7;
  if ((*(undefined4 * PTR32 *)&gen_args[3])[1] != 1) {
    if (*(int *)(iVar1 + 0x20) < 1) goto LAB_00ce55c7;
    if ((*(undefined4 * PTR32 *)&gen_args[3])[1] != 1) {
      (*(float *)&gen_args[6]) = 0.0;
      puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
      if (0 < (int)(*(undefined4 * PTR32 *)&gen_args[3])[2]) {
        do {
          iVar3 = 0;
          if (*(short *)(iVar1 + 0x3e) != 0) {
            do {
              if (iVar3 < 2) {
                *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
                (*(uint *)(gen_frame + 0x8)) = 0;
                F_00c4922b(&(*(uint *)(gen_frame + 0x8)),2,1,*(undefined * PTR32 *)(iVar1 + 0x24));
              }
              iVar3 = iVar3 + 1;
              puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
            } while (iVar3 < (int)(uint)*(ushort *)(iVar1 + 0x3e));
          }
          (*(float *)&gen_args[6]) = gen_bits2f((int)gen_fl2bits((*(float *)&gen_args[6])) + 1);
        } while ((int)gen_fl2bits((*(float *)&gen_args[6])) < (int)puVar2[2]);
      }
      goto LAB_00ce55c7;
    }
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (0 < (int)(*(undefined4 * PTR32 *)&gen_args[3])[2]) {
    fVar5 = (float10)REFG(float, 0x1090708);
    do {
      iVar3 = 0;
      if (*(short *)(iVar1 + 0x3e) != 0) {
        do {
          fVar7 = (float10)1;
          if (iVar3 < 2) {
            *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
            (*(float *)&gen_args[6]) = *pfVar4;
            fVar6 = (float10)(*(float *)&gen_args[6]);
            if (!(fVar7 <= fVar6) || ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) || fVar6 == fVar7)) {
              if (fVar6 <= fVar5 && ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar6)) && fVar5 != fVar6)) {
                (*(float *)&gen_args[6]) = (float)fVar5;
              }
            }
            else {
              (*(float *)&gen_args[6]) = (float)fVar7;
            }
            (*(uint *)(gen_frame + 0x8)) = (int)((double)(*(float *)&gen_args[6]) * *(double *)&REFG(undefined, 0x10920e0)) & 0xffff;
            F_00c4922b(&(*(uint *)(gen_frame + 0x8)),2,1,*(undefined * PTR32 *)(iVar1 + 0x24));
            if ((short)(*(uint *)(gen_frame + 0x8)) != 0) {
              (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = '\0';
            }
          }
          pfVar4 = pfVar4 + 1;
          fVar5 = (float10)REFG(float, 0x1090708);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)*(ushort *)(iVar1 + 0x3e));
      }
      iVar3 = (*(int *)(gen_frame + 0x4)) + 1;
      (*(int *)(gen_frame + 0x4)) = iVar3;
    } while (iVar3 < (int)(*(undefined4 * PTR32 *)&gen_args[3])[2]);
  }
LAB_00ce55c7: ;
  if ((*(char *)(iVar1 + 0x29) != '\0') ||
     ((*(char *)(iVar1 + 0x28) != '\0' && ((*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != '\0')))) {
    *(undefined2 *)(iVar1 + 0x28) = 0;
    if (*(undefined * PTR32 *)(iVar1 + 0x24) != (undefined *)0x0) {
      F_00c4bbff(*(undefined * PTR32 *)(iVar1 + 0x24),0,0);
      (*(int *)(gen_frame + 0x4)) = *(int *)(iVar1 + 0x20) * 2 + 0x24;
      (*(int *)&gen_args[1]) = 0;
      (*(float *)&gen_args[6]) = 0.0;
      F_00c4922b(&REFG(undefined, 0x112fa68),1,4,*(undefined * PTR32 *)(iVar1 + 0x24));
      F_00c4922b(&(*(int *)(gen_frame + 0x4)),4,1,*(undefined * PTR32 *)(iVar1 + 0x24));
      F_00c4922b(&REFG(undefined, 0x112fa70),1,4,*(undefined * PTR32 *)(iVar1 + 0x24));
      F_00c4922b(&REFG(undefined, 0x112fa78),1,4,*(undefined * PTR32 *)(iVar1 + 0x24));
      (*(int *)(gen_frame + 0x4)) = 0x10;
      F_00c4922b(&(*(int *)(gen_frame + 0x4)),4,1,*(undefined * PTR32 *)(iVar1 + 0x24));
      (*(int *)&gen_args[1]) = 1;
      F_00c4922b(&(*(int *)&gen_args[1]),2,1,*(undefined * PTR32 *)(iVar1 + 0x24));
      (*(int *)&gen_args[1]) = 2;
      F_00c4922b(&(*(int *)&gen_args[1]),2,1,*(undefined * PTR32 *)(iVar1 + 0x24));
      (*(float *)&gen_args[6]) = gen_bits2f(REFG(int, 0x134c7e8));
      F_00c4922b(&(*(float *)&gen_args[6]),4,1,*(undefined * PTR32 *)(iVar1 + 0x24));
      (*(float *)&gen_args[6]) = gen_bits2f(REFG(int, 0x134c7e8) * 4);
      F_00c4922b(&(*(float *)&gen_args[6]),4,1,*(undefined * PTR32 *)(iVar1 + 0x24));
      (*(int *)&gen_args[1]) = 4;
      F_00c4922b(&(*(int *)&gen_args[1]),2,1,*(undefined * PTR32 *)(iVar1 + 0x24));
      (*(int *)&gen_args[1]) = 0x10;
      F_00c4922b(&(*(int *)&gen_args[1]),2,1,*(undefined * PTR32 *)(iVar1 + 0x24));
      F_00c4922b(&REFG(undefined, 0x112fa80),1,4,*(undefined * PTR32 *)(iVar1 + 0x24));
      (*(float *)&gen_args[6]) = gen_bits2f(*(int *)(iVar1 + 0x20) * 2);
      F_00c4922b(&(*(float *)&gen_args[6]),4,1,*(undefined * PTR32 *)(iVar1 + 0x24));
      F_00c49312(*(undefined * PTR32 *)(iVar1 + 0x24));
      *(undefined4 *)(iVar1 + 0x20) = 0;
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
  }
  *(undefined4 *)((*(uint *)&gen_args[5]) + 8) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
  *(undefined4 *)((*(uint *)&gen_args[5]) + 4) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
  return (*(uint *)&gen_args[5]);
}

/* ref: FUN_00ce5770 */
uint F_00ce5770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce5770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined * pFVar1;
  uint uVar2;
  int iVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00c49312(*(undefined * PTR32 *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  pFVar1 = F_00c495d8(param_1,"wb+");
  *(undefined * PTR32 *)((int)this + 0x24) = pFVar1;
  *(undefined2 *)((int)this + 0x28) = 0;
  iVar3 = 0x2c;
  do {
    F_00c50a15(0x20,*(undefined * PTR32 *)((int)this + 0x24));
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar2 = F_00c50ee3(*(undefined * PTR32 *)((int)this + 0x24));
  return uVar2;
}

/* ref: FUN_00ce5800 */
uint F_00ce5800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce5800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x112fac8));
  if (uVar1 != 0) {
    *param_3 = param_1;
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    return 0;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x112b570));
  if (uVar1 != 0) {
    *param_3 = param_1;
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}

/* ref: FUN_00ce5870 */
unsigned int F_00ce5870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce5870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x1c));
  return 0;
}

/* ref: FUN_00ce5890 */
uint F_00ce5890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce5890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 7);
  if ((uVar1 == 0) && (param_1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1,1);
  }
  return uVar1;
}

/* ref: FUN_00ce58c0 */
uint F_00ce58c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce58c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00ce58d0 */
unsigned int F_00ce58d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce58d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00ce58e0 */
uint F_00ce58e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce58e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  return param_2;
}

/* ref: FUN_00ce58f0 */
uint F_00ce58f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce58f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOAudioBounce::vf14 */
uint F_00ce5900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce5900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fa8c));
  F_00cf3b1e(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce5930 */
uint F_00ce5930(unsigned int gen_a0)
{
  GEN_ENTER(0xce5930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf506d(this,&REFG(undefined, 0x134d818));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fb9c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf8 */
uint F_00ce5960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce5960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x20) = *puVar1;
  *(undefined4 *)(param_1 + 0x24) = puVar1[1];
  *(undefined4 *)(param_1 + 0x28) = puVar1[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar1[3];
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x32) = *puVar1;
  *(undefined4 *)(param_1 + 0x36) = puVar1[1];
  *(undefined4 *)(param_1 + 0x3a) = puVar1[2];
  *(undefined4 *)(param_1 + 0x3e) = puVar1[3];
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf10 */
uint F_00ce59d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xce59d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  uint param_6 = (uint)gen_a6;
  float * pfVar1;
  ushort uVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  float * pfVar8;
  
  iVar6 = param_1;
  if (param_3[1] == 1) {
    if (param_6 == 0) {
      uVar2 = *(ushort *)(param_1 + 0x34);
      if (*(ushort *)(param_1 + 0x22) <= *(ushort *)(param_1 + 0x34)) {
        uVar2 = *(ushort *)(param_1 + 0x22);
      }
      iVar4 = *param_3;
      iVar6 = *param_5;
      param_6 = 0;
      if (param_3[2] != 0) {
        do {
          F_00c46aa0(iVar6,iVar4,(uint)uVar2 * 4);
          iVar6 = iVar6 + (uint)*(ushort *)(param_1 + 0x34) * 4;
          param_6 = param_6 + 1;
          iVar4 = iVar4 + (uint)*(ushort *)(param_1 + 0x22) * 4;
        } while (param_6 < (uint)param_3[2]);
      }
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x34);
      pfVar5 = (float *)*param_5;
      pfVar8 = (float *)*param_3;
      pfVar3 = pfVar5 + 1;
      param_1 = 0;
      if (uVar2 == 2) {
        if (param_3[2] != 0) {
          do {
            *pfVar5 = (float)(float10)0;
            *pfVar3 = (float)(float10)0;
            iVar4 = 0;
            pfVar7 = pfVar8;
            if (*(short *)(iVar6 + 0x22) != 0) {
              do {
                pfVar1 = (float *)(&REFG(float, 0x112fae4) + iVar4);
                iVar4 = iVar4 + 1;
                pfVar8 = pfVar7 + 1;
                *pfVar5 = (float)((float10)*pfVar1 * (float10)*pfVar7 + (float10)*pfVar5);
                *pfVar3 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x112faf8) + iVar4 * 4) * (float10)*pfVar7
                                 + (float10)*pfVar3)));
                pfVar7 = pfVar8;
              } while (iVar4 < (int)(uint)*(ushort *)(iVar6 + 0x22));
            }
            param_1 = param_1 + 1;
            pfVar5 = pfVar5 + 2;
            pfVar3 = pfVar3 + 2;
          } while (param_1 < (uint)param_3[2]);
        }
      }
      else if (param_3[2] != 0) {
        do {
          *pfVar5 = (float)(float10)0;
          iVar4 = 0;
          *pfVar3 = (float)(float10)0;
          pfVar7 = pfVar8;
          if (*(short *)(iVar6 + 0x22) != 0) {
            do {
              pfVar1 = (float *)(&REFG(float, 0x112fae4) + iVar4);
              iVar4 = iVar4 + 1;
              pfVar8 = pfVar7 + 1;
              *pfVar5 = (float)((float10)*pfVar1 * (float10)*pfVar7 + (float10)*pfVar5);
              *pfVar3 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x112faf8) + iVar4 * 4) * (float10)*pfVar7 +
                               (float10)*pfVar3)));
              pfVar7 = pfVar8;
            } while (iVar4 < (int)(uint)*(ushort *)(iVar6 + 0x22));
          }
          F_00c48350(pfVar5 + 2,0,(uint)uVar2 * 4 - 8);
          pfVar5 = pfVar5 + *(ushort *)(iVar6 + 0x34);
          param_1 = param_1 + 1;
          pfVar3 = pfVar5 + 1;
        } while (param_1 < (uint)param_3[2]);
      }
    }
  }
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return (uint)param_5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf14 */
uint F_00ce5b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce5b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fb9c));
  F_00cf3b1e(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce5b90 */
uint F_00ce5b90(unsigned int gen_a0)
{
  GEN_ENTER(0xce5b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf506d(this,&REFG(undefined, 0x134dc90));
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  return (uint)this;
}

/* ref: _AFX_RICHEDIT_STATE::~_AFX_RICHEDIT_STATE */
unsigned int F_00ce5bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xce5bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  if (*(int *)(this + 0x48) != 0) {
    gen_imp_CoTaskMemFree(*(int *)(this + 0x48));
  }
  if (*(int *)(this + 0x4c) != 0) {
    gen_imp_CoTaskMemFree(*(int *)(this + 0x4c));
  }
  F_00cf3b1e(this);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOPrologicIIz::vf8 */
uint F_00ce5bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce5bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  SIZE_T cb;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x20) = *puVar1;
  *(undefined4 *)(param_1 + 0x24) = puVar1[1];
  *(undefined4 *)(param_1 + 0x28) = puVar1[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar1[3];
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x32) = *puVar1;
  *(undefined4 *)(param_1 + 0x36) = puVar1[1];
  *(undefined4 *)(param_1 + 0x3a) = puVar1[2];
  *(undefined4 *)(param_1 + 0x3e) = puVar1[3];
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(puVar1 + 4);
  uVar3 = (uint)(*(int *)(param_1 + 0x24) * 10) / 1000;
  *(uint *)(param_1 + 0x44) = uVar3;
  if (uVar3 != 0) {
    cb = (*(ushort *)(param_1 + 0x2e) >> 3) * uVar3;
    pvVar2 = gen_imp_CoTaskMemAlloc(cb);
    *(LPVOID *)(param_1 + 0x48) = pvVar2;
    pvVar2 = gen_imp_CoTaskMemAlloc(cb);
    *(LPVOID *)(param_1 + 0x4c) = pvVar2;
    F_00c48350(*(undefined * PTR32 *)(param_1 + 0x48),0,cb);
    F_00c48350(*(undefined * PTR32 *)(param_1 + 0x4c),0,cb);
  }
  uVar3 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOPrologicIIz::vf10 */
uint F_00ce5cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xce5cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  uint local_14;
  
  piVar6 = param_4;
  if (param_4[1] == 1) {
    iVar3 = *param_4;
    iVar9 = *(int *)param_6;
    uVar7 = (uint)(*(ushort *)(param_2 + 0x2e) >> 3);
    iVar11 = uVar7 * 5;
    iVar4 = uVar7 * 6;
    iVar5 = uVar7 * 7;
    if (param_7 == 0) {
      piVar1 = param_4 + 2;
      param_4 = (int *)0x0;
      if (*piVar1 != 0) {
        do {
          F_00c46aa0((uint)*(ushort *)(param_2 + 0x3e) * (int)param_4 + iVar9,
                     (uint)*(ushort *)(param_2 + 0x2c) * (int)param_4 + iVar3,
                     (uint)*(ushort *)(param_2 + 0x3e));
          param_4 = (int *)((int)param_4 + 1);
        } while (param_4 < (uint)piVar6[2]);
      }
    }
    else {
      uVar10 = *(uint *)(param_2 + 0x44);
      if (uVar10 == 0) {
        if (param_4[2] != 0) {
          iVar2 = iVar9 + uVar7 * 4;
          uVar7 = 0;
          do {
            iVar8 = *(ushort *)(param_2 + 0x2c) * uVar7;
            iVar12 = *(ushort *)(param_2 + 0x3e) * uVar7;
            F_00c46aa0(iVar12 + iVar9,iVar8 + iVar3,(uint)*(ushort *)(param_2 + 0x3e));
            fVar13 = (float10)*(float *)(iVar4 + iVar3 + iVar8);
            fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
            fVar15 = (float10)*(float *)(iVar5 + iVar3 + iVar8);
            fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
            *(float *)(iVar2 + iVar12) =
                 ((float)GEN_TOF((((float10)*(float *)(iVar2 + iVar12) + fVar13 * fVar14) + fVar15 * fVar16)));
            *(float *)(iVar11 + iVar9 + iVar12) =
                 ((float)GEN_TOF((((float10)*(float *)(iVar11 + iVar9 + iVar12) - fVar15 * fVar14) -
                        fVar13 * fVar16)));
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)param_4[2]);
        }
      }
      else {
        param_7 = 0;
        if (uVar10 < (uint)param_4[2]) {
          if (uVar10 != 0) {
            do {
              iVar12 = *(ushort *)(param_2 + 0x3e) * param_7;
              F_00c46aa0(iVar12 + iVar9,*(ushort *)(param_2 + 0x2c) * param_7 + iVar3,
                         (uint)*(ushort *)(param_2 + 0x3e));
              iVar2 = param_7 * 4;
              param_7 = param_7 + 1;
              iVar8 = iVar9 + uVar7 * 4;
              fVar13 = (float10)*((float *)GEN_TOP((*(int *)(param_2 + 0x48) + iVar2)));
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*((float *)GEN_TOP((*(int *)(param_2 + 0x4c) + -4 + param_7 * 4)));
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *(float *)(iVar8 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar8 + iVar12) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *(float *)(iVar11 + iVar9 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar11 + iVar9 + iVar12) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (param_7 < *(uint *)(param_2 + 0x44));
          }
          local_14 = 0;
          if (param_4[2] != *(int *)(param_2 + 0x44)) {
            iVar2 = iVar9 + uVar7 * 4;
            do {
              iVar8 = local_14 + *(int *)(param_2 + 0x44);
              iVar12 = (uint)*(ushort *)(param_2 + 0x3e) * iVar8;
              F_00c46aa0(iVar12 + iVar9,(uint)*(ushort *)(param_2 + 0x2c) * iVar8 + iVar3,
                         (uint)*(ushort *)(param_2 + 0x3e));
              iVar8 = *(ushort *)(param_2 + 0x2c) * local_14;
              local_14 = local_14 + 1;
              fVar13 = (float10)*(float *)(iVar4 + iVar3 + iVar8);
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*(float *)(iVar5 + iVar3 + iVar8);
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *(float *)(iVar2 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar2 + iVar12) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *(float *)(iVar11 + iVar9 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar11 + iVar9 + iVar12) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (local_14 < (uint)(param_4[2] - *(int *)(param_2 + 0x44)));
          }
          uVar7 = *(uint *)(param_2 + 0x44);
          uVar10 = 0;
          if (uVar7 != 0) {
            do {
              iVar9 = uVar10 - uVar7;
              uVar10 = uVar10 + 1;
              iVar9 = (iVar9 + param_4[2]) * (uint)*(ushort *)(param_2 + 0x2c);
              *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x48) + -4 + uVar10 * 4))) =
                   *(undefined4 *)(iVar4 + iVar3 + iVar9);
              *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x4c) + -4 + uVar10 * 4))) =
                   *(undefined4 *)(iVar5 + iVar3 + iVar9);
              uVar7 = *(uint *)(param_2 + 0x44);
            } while (uVar10 < uVar7);
          }
        }
        else {
          if (param_4[2] != 0) {
            do {
              iVar12 = *(ushort *)(param_2 + 0x3e) * param_7;
              F_00c46aa0(iVar12 + iVar9,*(ushort *)(param_2 + 0x2c) * param_7 + iVar3,
                         (uint)*(ushort *)(param_2 + 0x3e));
              iVar2 = param_7 * 4;
              param_7 = param_7 + 1;
              iVar8 = iVar9 + uVar7 * 4;
              fVar13 = (float10)*((float *)GEN_TOP((*(int *)(param_2 + 0x48) + iVar2)));
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*((float *)GEN_TOP((*(int *)(param_2 + 0x4c) + -4 + param_7 * 4)));
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *(float *)(iVar8 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar8 + iVar12) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *(float *)(iVar11 + iVar9 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar11 + iVar9 + iVar12) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (param_7 < (uint)param_4[2]);
          }
          iVar11 = *(int *)(param_2 + 0x44) * uVar7;
          iVar9 = iVar11 - param_4[2] * uVar7;
          F_01051df1(*(int *)(param_2 + 0x48),iVar11,*(int *)(param_2 + 0x48) + -4 + param_4[2] * 4,
                     iVar9);
          F_01051df1(*(int *)(param_2 + 0x4c),iVar11,*(int *)(param_2 + 0x4c) + -4 + param_4[2] * 4,
                     iVar9);
          uVar7 = param_4[2];
          param_4 = (int *)0x0;
          if (uVar7 != 0) {
            do {
              iVar11 = (uint)*(ushort *)(param_2 + 0x2c) * (int)param_4;
              iVar9 = (*(int *)(param_2 + 0x44) - uVar7) + (int)param_4;
              *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x48) + iVar9 * 4))) =
                   *(undefined4 *)(iVar4 + iVar3 + iVar11);
              *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x4c) + iVar9 * 4))) =
                   *(undefined4 *)(iVar5 + iVar3 + iVar11);
              uVar7 = piVar6[2];
              param_4 = (int *)((int)param_4 + 1);
            } while (param_4 < uVar7);
          }
        }
      }
    }
  }
  *(int *)(param_6 + 8) = piVar6[2];
  *(int *)(param_6 + 4) = piVar6[1];
  return param_6;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOPrologicIIz::vf14 */
uint F_00ce6130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce6130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  if (*(int *)(this + 0x48) != 0) {
    gen_imp_CoTaskMemFree(*(int *)(this + 0x48));
  }
  if (*(int *)(this + 0x4c) != 0) {
    gen_imp_CoTaskMemFree(*(int *)(this + 0x4c));
  }
  F_00cf3b1e(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf9 */
float10 F_00ce6180(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce6180u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (param_3 != 0) {
    *(int *)(param_1 + 4) = param_3;
    F_00cccd90(param_1 + 8,param_2,param_3);
    return extraout_ST0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  fVar1 = F_00cccbd0(param_1 + 8,param_2);
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf11 */
float10 F_00ce61c0(unsigned int gen_a0)
{
  GEN_ENTER(0xce61c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x34);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf10 */
unsigned int F_00ce61d0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xce61d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x2c) = param_2;
  *(float *)(in_ecx + 0x30) = param_3;
  return 0;
}

/* ref: FUN_00ce62e0 */
uint F_00ce62e0(unsigned int gen_a0)
{
  GEN_ENTER(0xce62e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  in_ecx[1] = 0;
  F_00cccb10(in_ecx + 2,(float)(float10)1);
  in_ecx[0xb] = (undefined4)gen_fl2bits((float)(float10)1);
  in_ecx[0xc] = (undefined4)gen_fl2bits((float)(float10)0);
  in_ecx[0xd] = (undefined4)gen_fl2bits((float)(float10)1);
  return (uint)in_ecx;
}

/* ref: FUN_00ce6310 */
uint F_00ce6310(unsigned int gen_a0)
{
  GEN_ENTER(0xce6310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf53e0(this,&REFG(undefined, 0x134e150),(int)this + 0xe4,0x14,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112fd7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x112fd64));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf8 */
uint F_00ce6360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce6360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0xc0) = *puVar1;
  *(undefined4 *)(param_1 + 0xc4) = puVar1[1];
  *(undefined4 *)(param_1 + 200) = puVar1[2];
  *(undefined4 *)(param_1 + 0xcc) = puVar1[3];
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0xd2) = *puVar1;
  *(undefined4 *)(param_1 + 0xd6) = puVar1[1];
  *(undefined4 *)(param_1 + 0xda) = puVar1[2];
  *(undefined4 *)(param_1 + 0xde) = puVar1[3];
  *(undefined2 *)(param_1 + 0xe2) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf10 */
unsigned int F_00ce63f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xce63f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  float * param_6 = (float *)(uintptr_t)gen_a6;
  float * pfVar1;
  float * in_eax;
  int iVar2;
  int iVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  if (param_3[1] != 1) {
    param_5[1] = 0;
    return 0;
  }
  if (param_6 == (float *)0x0) {
    F_00c46aa0(*param_5,*param_3,(uint)*(ushort *)(param_1 + 0xde) * param_3[2]);
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    return 0;
  }
  pfVar6 = (float *)*param_5;
  pfVar8 = (float *)*param_3;
  uVar4 = (uint)*(ushort *)(param_1 + 0xc2);
  pfVar1 = (float *)F_00cf3d40(param_5,param_1);
  in_eax = (float *)param_3[2];
  if (0 < (int)in_eax) {
    fVar9 = (float10)*pfVar1;
    fVar10 = (float10)pfVar1[1];
    fVar11 = (float10)pfVar1[2];
    fVar12 = (float10)pfVar1[3];
    fVar13 = (float10)pfVar1[4];
    param_6 = in_eax;
    do {
      in_eax = (float *)(param_1 + 0x40);
      iVar3 = 0;
      if (3 < uVar4) {
        iVar2 = (uVar4 - 4 >> 2) + 1;
        iVar3 = iVar2 * 4;
        pfVar1 = in_eax;
        pfVar5 = pfVar6;
        pfVar7 = pfVar8;
        do {
          *pfVar5 = ((float)GEN_TOF(((float10)pfVar1[3] * fVar13 +
                           ((float10)pfVar1[2] * fVar12 +
                           (fVar11 * (float10)pfVar1[1] +
                           ((float10)*pfVar7 * fVar9 + (float10)*pfVar1 * fVar10))))));
          pfVar1[3] = pfVar1[2];
          pfVar1[2] = *pfVar5;
          pfVar1[1] = *pfVar1;
          *pfVar1 = *pfVar7;
          pfVar5[1] = ((float)GEN_TOF(((float10)pfVar1[7] * fVar13 +
                             ((float10)pfVar1[6] * fVar12 +
                             ((float10)pfVar1[5] * fVar11 +
                             (fVar10 * (float10)pfVar1[4] + (float10)pfVar7[1] * fVar9))))));
          pfVar1[7] = pfVar1[6];
          pfVar1[6] = pfVar5[1];
          pfVar1[5] = pfVar1[4];
          pfVar1[4] = pfVar7[1];
          pfVar5[2] = ((float)GEN_TOF((fVar13 * (float10)pfVar1[0xb] +
                             ((float10)pfVar1[10] * fVar12 +
                             (fVar11 * (float10)pfVar1[9] +
                             ((float10)pfVar1[8] * fVar10 + (float10)pfVar7[2] * fVar9))))));
          pfVar1[0xb] = pfVar1[10];
          pfVar1[10] = pfVar5[2];
          pfVar1[9] = pfVar1[8];
          pfVar1[8] = pfVar7[2];
          pfVar6 = pfVar5 + 4;
          pfVar8 = pfVar7 + 4;
          in_eax = pfVar1 + 0x10;
          iVar2 = iVar2 + -1;
          pfVar5[3] = ((float)GEN_TOF(((float10)pfVar1[0xf] * fVar13 +
                             ((float10)pfVar1[0xe] * fVar12 +
                             ((float10)pfVar1[0xd] * fVar11 +
                             ((float10)pfVar1[0xc] * fVar10 + (float10)pfVar7[3] * fVar9))))));
          pfVar1[0xf] = pfVar1[0xe];
          pfVar1[0xe] = pfVar5[3];
          pfVar1[0xd] = pfVar1[0xc];
          pfVar1[0xc] = pfVar7[3];
          pfVar1 = in_eax;
          pfVar5 = pfVar6;
          pfVar7 = pfVar8;
        } while (iVar2 != 0);
      }
      if (iVar3 < (int)uVar4) {
        iVar3 = uVar4 - iVar3;
        pfVar1 = in_eax + 2;
        pfVar5 = pfVar6;
        pfVar7 = pfVar8;
        do {
          pfVar6 = pfVar5 + 1;
          pfVar8 = pfVar7 + 1;
          in_eax = pfVar1 + 4;
          iVar3 = iVar3 + -1;
          *pfVar5 = ((float)GEN_TOF((fVar13 * (float10)pfVar1[1] +
                           ((float10)*pfVar1 * fVar12 +
                           ((float10)pfVar1[-1] * fVar11 +
                           ((float10)*pfVar7 * fVar9 + (float10)pfVar1[-2] * fVar10))))));
          pfVar1[1] = *pfVar1;
          *pfVar1 = *pfVar5;
          pfVar1[-1] = pfVar1[-2];
          pfVar1[-2] = *pfVar7;
          pfVar1 = in_eax;
          pfVar5 = pfVar6;
          pfVar7 = pfVar8;
        } while (iVar3 != 0);
      }
      param_6 = (float *)((int)param_6 + -1);
    } while (param_6 != (float *)0x0);
  }
  F_00cf3d90(in_eax,param_1);
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return 0;
}

/* ref: FUN_00ce6650 */
unsigned int F_00ce6650(unsigned int gen_a0)
{
  GEN_ENTER(0xce6650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)0;
  *(float *)(in_ecx + 0x40) = (float)fVar1;
  *(float *)(in_ecx + 0x44) = (float)fVar1;
  *(float *)(in_ecx + 0x48) = (float)fVar1;
  *(float *)(in_ecx + 0x4c) = (float)fVar1;
  *(float *)(in_ecx + 0x50) = (float)fVar1;
  *(float *)(in_ecx + 0x54) = (float)fVar1;
  *(float *)(in_ecx + 0x58) = (float)fVar1;
  *(float *)(in_ecx + 0x5c) = (float)fVar1;
  *(float *)(in_ecx + 0x60) = (float)fVar1;
  *(float *)(in_ecx + 100) = (float)fVar1;
  *(float *)(in_ecx + 0x68) = (float)fVar1;
  *(float *)(in_ecx + 0x6c) = (float)fVar1;
  *(float *)(in_ecx + 0x70) = (float)fVar1;
  *(float *)(in_ecx + 0x74) = (float)fVar1;
  *(float *)(in_ecx + 0x78) = (float)fVar1;
  *(float *)(in_ecx + 0x7c) = (float)fVar1;
  *(float *)(in_ecx + 0x80) = (float)fVar1;
  *(float *)(in_ecx + 0x84) = (float)fVar1;
  *(float *)(in_ecx + 0x88) = (float)fVar1;
  *(float *)(in_ecx + 0x8c) = (float)fVar1;
  *(float *)(in_ecx + 0x90) = (float)fVar1;
  *(float *)(in_ecx + 0x94) = (float)fVar1;
  *(float *)(in_ecx + 0x98) = (float)fVar1;
  *(float *)(in_ecx + 0x9c) = (float)fVar1;
  *(float *)(in_ecx + 0xa0) = (float)fVar1;
  *(float *)(in_ecx + 0xa4) = (float)fVar1;
  *(float *)(in_ecx + 0xa8) = (float)fVar1;
  *(float *)(in_ecx + 0xac) = (float)fVar1;
  *(float *)(in_ecx + 0xb0) = (float)fVar1;
  *(float *)(in_ecx + 0xb4) = (float)fVar1;
  *(float *)(in_ecx + 0xb8) = (float)fVar1;
  *(float *)(in_ecx + 0xbc) = (float)fVar1;
  return 0;
}

/* ref: FUN_00ce66f0 */
uint F_00ce66f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce66f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x112fdbc));
  if (uVar1 != 0) {
    if (param_1 == (undefined *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)param_1 + 0x20;
    }
    *param_3 = iVar2;
    gen_imp_InterlockedIncrement((LONG *)((int)param_1 + 0x1c));
    return 0;
  }
  uVar1 = F_00ce5800(param_1,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce6750 */
unsigned int F_00ce6750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce6750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x1c));
  return 0;
}

/* ref: FUN_00ce6770 */
uint F_00ce6770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce6770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 7);
  if ((uVar1 == 0) && (param_1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1,1);
  }
  return uVar1;
}

/* ref: FUN_00ce67a0 */
unsigned int F_00ce67a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce67a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00ce67b0 */
unsigned int F_00ce67b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce67b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00ce6750(this,param_1 + -0x20);
  return 0;
}

/* ref: FUN_00ce67c0 */
uint F_00ce67c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce67c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ce66f0(this,param_1 + -0x20,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce67d0 */
uint F_00ce67d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce67d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ce6770(this,param_1 + -0x20);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf14 */
uint F_00ce67e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce67e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112fd7c));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x112fd64));
  F_00cf3c40(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce6810 */
uint F_00ce6810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce6810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cca0a0(this,REFG(undefined4, 0x112a808),param_1);
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  return (uint)this;
}

/* ref: FUN_00ce6850 */
uint F_00ce6850(unsigned int gen_a0)
{
  GEN_ENTER(0xce6850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  uVar1 = F_00cc9f30(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf4 */
unsigned int F_00ce6930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce6930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf5 */
unsigned int F_00ce6970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce6970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf6 */
unsigned int F_00ce69c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce69c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf2 */
unsigned int F_00ce6a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce6a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf0 */
uint F_00ce6a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce6a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  F_00cc9f30(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf3 */
uint F_00ce6a40(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce6a40u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  code * pcVar2;
  
  if (param_3 == 0) {
    pcVar2 = *(gen_code32 *)(*param_1 + 0x28);
  }
  else {
    if (param_3 != 1) goto LAB_00ce6a6c;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x2c);
  }
  (*pcVar2)(param_1,(undefined4)gen_fl2bits(param_2),param_4);
LAB_00ce6a6c: ;
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf4 */
uint F_00ce6a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce6a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  bool bVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4,param_1);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28);
  if ((char)uVar1 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28,param_1);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    return uVar1;
  }
  if (bVar2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf10 */
float10 F_00ce6af0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce6af0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (param_3 != 0) {
    F_00cccd90(param_1 + 4,param_2,param_3);
    return extraout_ST0;
  }
  fVar1 = F_00cccbd0(param_1 + 4,param_2);
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf11 */
float10 F_00ce6b20(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce6b20u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  float10 extraout_ST0;
  
  fVar1 = (float10)param_2 / (float10)*(float *)(param_1 + 0x4c);
  if (param_3 != 0) {
    F_00cccd90(param_1 + 0x28,(float)fVar1,param_3);
    return extraout_ST0;
  }
  fVar1 = F_00cccbd0(param_1 + 0x28,(float)fVar1);
  return fVar1;
}

/* ref: FUN_00ce6b60 */
uint F_00ce6b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce6b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb10(param_1 + 1,(float)(float10)1);
  F_00cccb10(param_1 + 10,*(float *)&REFG(undefined, 0x112fe48));
  param_1[0x13] = *(undefined4 *)&REFG(undefined, 0x112fe44);
  if (param_2 != 0) {
    ((code *)*(gen_code32 *)(param_1[1] + 4))(param_1 + 1,*(undefined4 *)(param_2 + 0x10));
    ((code *)*(gen_code32 *)(param_1[10] + 4))
              (param_1 + 10,
               (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(param_2 + 0x14) /
                                  ((float10)GEN_TOD(gen_bits2f(param_1[0x13]))))))));
  }
  return (uint)param_1;
}

/* ref: FUN_00ce6be0 */
uint F_00ce6be0(unsigned int gen_a0)
{
  GEN_ENTER(0xce6be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf53e0(this,&REFG(undefined, 0x134e5e0),(int)this + 100,8,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112ff04));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x112feec));
  F_00c48350((undefined *)((int)this + 0x7c),0,0x70800);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf8 */
uint F_00ce6c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce6c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined2 uVar1;
  undefined4 * puVar2;
  float10 fVar3;
  uint uVar4;
  
  fVar3 = (float10)0;
  puVar2 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x40) = *puVar2;
  *(undefined4 *)(param_1 + 0x44) = puVar2[1];
  *(undefined4 *)(param_1 + 0x48) = puVar2[2];
  *(undefined4 *)(param_1 + 0x4c) = puVar2[3];
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(puVar2 + 4);
  puVar2 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x52) = *puVar2;
  *(undefined4 *)(param_1 + 0x56) = puVar2[1];
  *(undefined4 *)(param_1 + 0x5a) = puVar2[2];
  *(undefined4 *)(param_1 + 0x5e) = puVar2[3];
  uVar1 = *(undefined2 *)(puVar2 + 4);
  *(float *)(param_1 + 0x70880) = (float)fVar3;
  *(float *)(param_1 + 0x70888) = (float)fVar3;
  *(undefined2 *)(param_1 + 0x62) = uVar1;
  *(float *)(param_1 + 0x70884) = (float)fVar3;
  *(float *)(param_1 + 0x70890) = (float)fVar3;
  *(float *)(param_1 + 0x7088c) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x7087c) = 0;
  uVar4 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf10 */
unsigned int F_00ce6cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xce6cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  float * param_6 = (float *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float * pfVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int in_ecx;
  float * pfVar5;
  int in_eax;
  float * pfVar6;
  int iVar7;
  float * pfVar8;
  float * pfVar9;
  undefined4 * puVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  in_ecx = (int)param_1;
  if (param_3[1] != 1) {
    param_5[1] = 0;
    return 0;
  }
  if (param_6 == (float *)0x0) {
    F_00c46aa0(*param_5,*param_3,(uint)*(ushort *)((int)param_1 + 0x5e) * param_3[2]);
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    return 0;
  }
  param_6 = (float *)*param_5;
  puVar10 = (undefined4 *)*param_3;
  (*(int *)(gen_frame + 0x20)) = param_3[2];
  (*(uint *)(gen_frame + 0x44)) = (uint)*(ushort *)((int)param_1 + 0x54);
  pfVar5 = (float *)F_00cf3d40((uint)*(ushort *)((int)param_1 + 0x54),param_1);
  (*(float *)(gen_frame + 0x2c)) = pfVar5[1];
  (*(float *)(gen_frame + 0x30)) = (float)((float10)1 / (float10)pfVar5[1]);
  (*(float *)(gen_frame + 0x34)) = *pfVar5;
  in_eax = (*(int *)(gen_frame + 0x20));
  if (0 < (*(int *)(gen_frame + 0x20))) {
    do {
      fVar14 = (float10)REFG(float, 0x1094808);
      fVar12 = (float10)1;
      fVar16 = (float10)(*(float *)(gen_frame + 0x34));
      fVar15 = (float10)1;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70880) + (float10)(*(float *)(gen_frame + 0x2c)))));
      fVar11 = (float10)fVar2;
      *(float *)(in_ecx + 0x70880) = fVar2;
      if (fVar15 <= fVar11 && ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar15)) && fVar11 != fVar15)) {
        *(float *)(in_ecx + 0x70880) = (float)(fVar11 - fVar12);
      }
      fVar11 = (float10)*(float *)(in_ecx + 0x70880);
      if (!(fVar11 <= fVar14) || ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar11)) || fVar14 == fVar11)) {
        if (*(char *)(in_ecx + 0x70894) == '\0') goto LAB_00ce6daf;
      }
      else {
        *(undefined2 *)(in_ecx + 0x70894) = 0;
LAB_00ce6daf: ;
        if (!((float10)*(float *)(in_ecx + 0x70880) <= fVar14) !=
            (GEN_ISNAN(fVar14) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x70880)))) {
          if ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 < fVar15 == (fVar16 == fVar15)) {
            *(undefined1 *)(in_ecx + 0x70894) = 1;
            *(float *)(in_ecx + 0x7088c) = (float)(fVar12 - fVar16);
            *(float *)(in_ecx + 0x70884) =
                 ((float)GEN_TOF((-(float10)(float)(fVar12 - fVar16) * (float10)(*(float *)(gen_frame + 0x30)))));
          }
          else {
            *(undefined1 *)(in_ecx + 0x70894) = 1;
            *(float *)(in_ecx + 0x70884) = (float)(float10)0;
            *(float *)(in_ecx + 0x7088c) = (float)(fVar12 - fVar16);
          }
        }
      }
      if ((*(char *)(in_ecx + 0x70895) == '\0') &&
         (!((float10)*(float *)(in_ecx + 0x70880) <= (float10)REFG(float, 0x1088138)) !=
          (GEN_ISNAN((float10)REFG(float, 0x1088138)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x70880))))) {
        if (fVar16 <= fVar15) {
          *(undefined1 *)(in_ecx + 0x70895) = 1;
          *(float *)(in_ecx + 0x70888) = (float)(float10)0;
          *(float *)(in_ecx + 0x70890) = (float)(fVar12 - fVar16);
        }
        else {
          *(undefined1 *)(in_ecx + 0x70895) = 1;
          *(float *)(in_ecx + 0x70890) = (float)(fVar12 - fVar16);
          *(float *)(in_ecx + 0x70888) =
               ((float)GEN_TOF((-(float10)(float)(fVar12 - fVar16) * (float10)(*(float *)(gen_frame + 0x30)))));
        }
      }
      fVar2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70884) + (float10)*(float *)(in_ecx + 0x7088c))))
      ;
      *(float *)(in_ecx + 0x70884) = fVar2;
      *(float *)(in_ecx + 0x70888) =
           ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70890) + (float10)*(float *)(in_ecx + 0x70888))));
      dVar4 = (double)fVar2;
      fVar11 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),&(*(double *)(gen_frame + 0xc)));
      (*(float * PTR32 *)(gen_frame + 0x48)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar11)));
      (*(int *)(gen_frame + 0x38)) = *(int *)(in_ecx + 0x7087c) + (int)(*(double *)(gen_frame + 0xc)) * -8;
      if ((*(int *)(gen_frame + 0x38)) < 0) {
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 0x1c200;
      }
      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x38)) + -8;
      if ((*(int *)(gen_frame + 0x38)) + -8 < 0) {
        (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x38)) + 0x1c1f8;
      }
      fVar11 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)*(float *)(in_ecx + 0x70888)),
                            (int)((ulonglong)gen_d2bits((double)*(float *)(in_ecx + 0x70888)) >>
                                 0x20),&(*(double *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x1c)) = (float)fVar11;
      iVar7 = *(int *)(in_ecx + 0x7087c) + (int)(*(double *)(gen_frame + 0x4)) * -8;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)) = iVar7;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x1c200;
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)) = iVar7;
      }
      (*(double *)(gen_frame + 0x24)) = gen_bits2d(CONCAT44(iVar7,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 0))));
      (*(float * PTR32 *)(gen_frame + 0x40)) = (float *)(iVar7 + -8);
      if (iVar7 + -8 < 0) {
        (*(float * PTR32 *)(gen_frame + 0x40)) = (float *)(iVar7 + 0x1c1f8);
      }
      fVar15 = ((float10)GEN_TOD(fsin(
                             (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70880) *
                                             (float10)*(double *)&REFG(undefined, 0x112ff48)))))));
      in_eax = 0;
      fVar14 = (float10)1;
      fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x48)))));
      fVar11 = (float10)(float)fVar11;
      fVar15 = (float10)((float)GEN_TOF((((float10)(float)fVar15 + fVar14) * (float10)REFG(double, 0x1088108))));
      if (3 < (int)(*(uint *)(gen_frame + 0x44))) {
        fVar12 = fVar14 - fVar16;
        param_1 = (float *)(in_ecx + 0x80 + iVar7 * 4);
        fVar13 = fVar14 - fVar15;
        (*(float * PTR32 *)(gen_frame + 0x48)) = (float *)(in_ecx + 0x80 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x40))) * 4);
        dVar4 = (double)(fVar14 - fVar11);
        (*(double *)(gen_frame + 0x14)) = dVar4;
        pfVar5 = (float *)(in_ecx + 0x80 + (*(int *)(gen_frame + 0x38)) * 4);
        pfVar6 = (float *)(in_ecx + 0x80 + (*(int *)(gen_frame + 0x3c)) * 4);
        do {
          *((undefined4 *)GEN_TOP((in_ecx + 0x7c + (*(int *)(in_ecx + 0x7087c) + in_eax) * 4))) = *puVar10;
          fVar2 = (float)((float10)param_1[-1] * (float10)dVar4 + (float10)(*(float * PTR32 *)(gen_frame + 0x48))[-1] * fVar11);
          (*(float *)(gen_frame + 0x1c)) = fVar2;
          fVar3 = (float)((float10)pfVar5[-1] * fVar12 + (float10)pfVar6[-1] * fVar16);
          (*(float *)(gen_frame + 0x1c)) = fVar3;
          *param_6 = (float)((float10)fVar3 * fVar13 + (float10)fVar2 * fVar15);
          *((undefined4 *)GEN_TOP((in_ecx + 0x80 + (*(int *)(in_ecx + 0x7087c) + in_eax) * 4))) = puVar10[1];
          fVar2 = (float)((float10)*param_1 * (float10)dVar4 + fVar11 * (float10)*(*(float * PTR32 *)(gen_frame + 0x48)));
          (*(float *)(gen_frame + 0x1c)) = fVar2;
          fVar3 = (float)((float10)*pfVar5 * fVar12 + fVar16 * (float10)*pfVar6);
          (*(float *)(gen_frame + 0x1c)) = fVar3;
          param_6[1] = (float)((float10)fVar3 * fVar13 + (float10)fVar2 * fVar15);
          *((undefined4 *)GEN_TOP((in_ecx + 0x84 + (*(int *)(in_ecx + 0x7087c) + in_eax) * 4))) = puVar10[2];
          fVar2 = (float)((float10)param_1[1] * (float10)dVar4 + (float10)(*(float * PTR32 *)(gen_frame + 0x48))[1] * fVar11);
          (*(float *)(gen_frame + 0x1c)) = fVar2;
          fVar3 = (float)((float10)pfVar5[1] * fVar12 + (float10)pfVar6[1] * fVar16);
          (*(float *)(gen_frame + 0x1c)) = fVar3;
          param_6[2] = (float)((float10)fVar3 * fVar13 + (float10)fVar2 * fVar15);
          *((undefined4 *)GEN_TOP((in_ecx + 0x88 + (*(int *)(in_ecx + 0x7087c) + in_eax) * 4))) = puVar10[3];
          pfVar9 = (*(float * PTR32 *)(gen_frame + 0x48)) + 2;
          pfVar1 = param_1 + 2;
          param_1 = param_1 + 4;
          (*(float * PTR32 *)(gen_frame + 0x48)) = (*(float * PTR32 *)(gen_frame + 0x48)) + 4;
          pfVar8 = param_6 + 4;
          in_eax = in_eax + 4;
          puVar10 = puVar10 + 4;
          fVar2 = (float)((float10)*pfVar1 * (float10)dVar4 + (float10)*pfVar9 * fVar11);
          (*(float *)(gen_frame + 0x1c)) = fVar2;
          fVar3 = (float)((float10)pfVar5[2] * fVar12 + (float10)pfVar6[2] * fVar16);
          (*(float *)(gen_frame + 0x1c)) = fVar3;
          param_6[3] = (float)((float10)fVar3 * fVar13 + (float10)fVar2 * fVar15);
          pfVar5 = pfVar5 + 4;
          pfVar6 = pfVar6 + 4;
          param_6 = pfVar8;
        } while (in_eax < (int)((*(uint *)(gen_frame + 0x44)) - 3));
      }
      fVar14 = (float10)1;
      if (in_eax < (int)(*(uint *)(gen_frame + 0x44))) {
        (*(float * PTR32 *)(gen_frame + 0x40)) = ((float *)GEN_TOP((in_ecx + 0x7c + (in_eax + (int)(*(float * PTR32 *)(gen_frame + 0x40))) * 4)));
        (*(double *)(gen_frame + 0x24)) = (double)(fVar14 - fVar15);
        (*(double *)(gen_frame + 0x14)) = (double)(fVar14 - fVar11);
        pfVar5 = ((float *)GEN_TOP((in_ecx + 0x7c + ((*(int *)(gen_frame + 0x38)) + in_eax) * 4)));
        pfVar6 = ((float *)GEN_TOP((in_ecx + 0x7c + (in_eax + (*(int *)(gen_frame + 0x3c))) * 4)));
        param_1 = ((float *)GEN_TOP((in_ecx + 0x7c + (in_eax + iVar7) * 4)));
        do {
          *((undefined4 *)GEN_TOP((in_ecx + 0x7c + (*(int *)(in_ecx + 0x7087c) + in_eax) * 4))) = *puVar10;
          fVar2 = *(*(float * PTR32 *)(gen_frame + 0x40));
          (*(float * PTR32 *)(gen_frame + 0x40)) = (*(float * PTR32 *)(gen_frame + 0x40)) + 1;
          pfVar9 = param_6 + 1;
          in_eax = in_eax + 1;
          puVar10 = puVar10 + 1;
          fVar2 = ((float)GEN_TOF(((float10)*param_1 * (float10)(double)(fVar14 - fVar11) +
                         (float10)fVar2 * fVar11)));
          (*(float *)(gen_frame + 0x1c)) = fVar2;
          fVar3 = ((float)GEN_TOF(((float10)*pfVar5 * (fVar14 - fVar16) + (float10)*pfVar6 * fVar16)));
          (*(float *)(gen_frame + 0x1c)) = fVar3;
          *param_6 = ((float)GEN_TOF(((float10)fVar3 * (float10)(double)(fVar14 - fVar15) +
                            (float10)fVar2 * fVar15)));
          pfVar5 = pfVar5 + 1;
          pfVar6 = pfVar6 + 1;
          param_1 = param_1 + 1;
          param_6 = pfVar9;
        } while (in_eax < (int)(*(uint *)(gen_frame + 0x44)));
      }
      *(int *)(in_ecx + 0x7087c) = *(int *)(in_ecx + 0x7087c) + 8;
      if (*(int *)(in_ecx + 0x7087c) == 0x1c200) {
        *(undefined4 *)(in_ecx + 0x7087c) = 0;
      }
      iVar7 = (*(int *)(gen_frame + 0x20)) + -1;
      (*(int *)(gen_frame + 0x20)) = iVar7;
    } while (iVar7 != 0);
  }
  F_00cf3d90(in_eax,in_ecx);
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf14 */
uint F_00ce7270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce7270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112ff04));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x112feec));
  F_00cf3c40(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf3 */
uint F_00ce72a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce72a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_3 == 0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,(undefined4)gen_fl2bits(param_2),param_4);
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1);
    return uVar1;
  }
  ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1,(undefined4)gen_fl2bits(param_2),param_4);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1);
  return uVar1;
}

/* ref: FUN_00ce7460 */
uint F_00ce7460(unsigned int gen_a0)
{
  GEN_ENTER(0xce7460u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb10(in_ecx + 1,(float)(float10)1);
  F_00cccb10(in_ecx + 10,(float)(float10)1);
  return (uint)in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularSynthesizer::vf8 */
uint F_00ce7490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce7490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x20) = *puVar1;
  *(undefined4 *)(param_1 + 0x24) = puVar1[1];
  *(undefined4 *)(param_1 + 0x28) = puVar1[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar1[3];
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x32) = *puVar1;
  *(undefined4 *)(param_1 + 0x36) = puVar1[1];
  *(undefined4 *)(param_1 + 0x3a) = puVar1[2];
  *(undefined4 *)(param_1 + 0x3e) = puVar1[3];
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularSynthesizer::vf10 */
unsigned int F_00ce7500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xce7500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_6 == 0) {
    if (param_3[1] == 1) {
      iVar1 = *param_5;
      iVar2 = *param_3;
      uVar3 = 0;
      if (param_3[2] != 0) {
        do {
          F_00c46aa0(*(ushort *)(param_1 + 0x3e) * uVar3 + iVar1,
                     *(ushort *)(param_1 + 0x2c) * uVar3 + iVar2,(uint)*(ushort *)(param_1 + 0x3e));
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_3[2]);
      }
      param_5[2] = param_3[2];
      param_5[1] = param_3[1];
    }
    return 0;
  }
  iVar1 = *param_5;
  if (param_3[1] == 1) {
    F_00ce79c0(param_1 + 0x48,*param_3,(uint)*(ushort *)(param_1 + 0x34),
                 (uint)*(ushort *)(param_3 + 2));
  }
  else if ((*(short *)(param_1 + 0x44) == 0) && (*(char *)(param_1 + 0x4e) == '\0')) {
    F_00ce7a80(param_1 + 0x48,(uint)*(ushort *)(param_1 + 0x34),(uint)*(ushort *)(param_5 + 2));
  }
  if (*(ushort *)(param_1 + 0x5c) <= *(ushort *)(param_1 + 0x68)) {
    do {
      if (0x2000 < (uint)*(ushort *)(param_1 + 0x74) + (uint)*(ushort *)(param_1 + 0x5c)) break;
      F_00ce7be0(param_1 + 0x48,(uint)*(ushort *)(param_1 + 0x34));
    } while (*(ushort *)(param_1 + 0x5c) <= *(ushort *)(param_1 + 0x68));
  }
  if ((uint)*(ushort *)(param_1 + 0x74) < (uint)param_5[2]) {
    param_5[1] = 0;
  }
  else {
    F_00ce7b10(param_1 + 0x48,iVar1,(uint)*(ushort *)(param_1 + 0x34),
                 (uint)*(ushort *)(param_5 + 2));
    param_5[1] = 1;
  }
  if ((*(short *)(param_1 + 0x4a) != *(short *)(param_1 + 0x4c)) &&
     (0xfff < *(ushort *)(param_1 + 0x68))) {
    *(undefined1 *)(param_1 + 0x4e) = 1;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x4e) = 0;
  return 0;
}

/* ref: FUN_00ce7660 */
uint F_00ce7660(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xce7660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined2 local_8;
  
  local_8 = (undefined2)(int)TRUNC((float10)*(ushort *)(param_1 + 0x48) * (float10)param_2);
  *(undefined2 *)(param_1 + 0x4a) = local_8;
  return ((undefined2)0x27f) | 0xc00;
}

/* ref: FUN_00ce76a0 */
uint F_00ce76a0(unsigned int gen_a0)
{
  GEN_ENTER(0xce76a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x4a);
}

/* ref: FUN_00ce76c0 */
unsigned int F_00ce76c0(unsigned int gen_a0)
{
  GEN_ENTER(0xce76c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(short *)(in_ecx + 0x44) = *(short *)(in_ecx + 0x44) + 1;
  return 0;
}

/* ref: FUN_00ce76d0 */
uint F_00ce76d0(unsigned int gen_a0)
{
  GEN_ENTER(0xce76d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(short *)(in_ecx + 0x44) = *(short *)(in_ecx + 0x44) + -1;
  return 0xffff;
}

/* ref: FUN_00ce76e0 */
byte F_00ce76e0(unsigned int gen_a0)
{
  GEN_ENTER(0xce76e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x4e) != '\0') {
    *(undefined1 *)(in_ecx + 0x4f) = 0;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0x4f) = 1;
  return 1;
}

/* ref: FUN_00ce77e0 */
uint F_00ce77e0(unsigned int gen_a0)
{
  GEN_ENTER(0xce77e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * _Dst;
  
  *(undefined2 *)this = 0x960;
  *(undefined4 *)((int)this + 2) = 0x9600960;
  *(undefined2 *)((int)this + 6) = 0x100;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),0x1e00,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 8) = uVar1;
  F_00ce7700((int)this + 8,0x3c0,0x5a0,0x3c0);
  *(undefined2 *)((int)this + 0x14) = 0xd20;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),0x40000,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),0x40000,"CDev.Engine.Sd",0,0,0x10)));
  *(undefined * PTR32 *)((int)this + 0x24) = _Dst;
  F_00c48350(_Dst,0,0x40000);
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return (uint)this;
}

/* ref: FUN_00ce7900 */
uint F_00ce7900(unsigned int gen_a0)
{
  GEN_ENTER(0xce7900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    F_00406810(*(int *)((int)this + 0x18));
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x24));
  }
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 8));
  }
  return uVar1;
}

/* ref: FUN_00ce7940 */
uint F_00ce7940(unsigned int gen_a0)
{
  GEN_ENTER(0xce7940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf506d(this,&REFG(undefined, 0x134ea68));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x113003c));
  *(undefined2 *)((int)this + 0x44) = 0;
  F_00ce77e0((undefined *)((int)this + 0x48));
  return (uint)this;
}

/* ref: FUN_00ce7970 */
unsigned int F_00ce7970(unsigned int gen_a0)
{
  GEN_ENTER(0xce7970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x113003c));
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406810(*(int *)((int)this + 0x60));
  }
  if (*(int *)((int)this + 0x6c) != 0) {
    F_00406810(*(int *)((int)this + 0x6c));
  }
  if (*(int *)((int)this + 0x50) != 0) {
    F_00406810(*(int *)((int)this + 0x50));
  }
  F_00cf3b1e(this);
  return 0;
}

/* ref: FUN_00ce79c0 */
uint F_00ce79c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce79c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar2 = (*(int *)&gen_args[0]);
  iVar1 = *(int *)((*(int *)&gen_args[0]) + 0x18) + (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x1e) * (*(int *)&gen_args[2]) * 4;
  *(short *)((*(int *)&gen_args[0]) + 0x20) = *(short *)((*(int *)&gen_args[0]) + 0x20) + (short)(*(uint *)&gen_args[3]);
  iVar4 = *(ushort *)((*(int *)&gen_args[0]) + 0x1e) + (*(uint *)&gen_args[3]);
  uVar3 = (ushort)iVar4;
  *(ushort *)((*(int *)&gen_args[0]) + 0x1e) = uVar3;
  if (uVar3 < 0x2000) {
    uVar7 = F_00c46aa0(iVar1,(*(int *)&gen_args[1]),((*(uint *)&gen_args[3]) & 0xffff) * (*(int *)&gen_args[2]) * 4);
    return (uint)uVar7;
  }
  uVar5 = iVar4 - 0x2000;
  uVar6 = uVar5 & 0xffff;
  iVar4 = ((*(uint *)&gen_args[3]) & 0xffff) - uVar6;
  F_00c46aa0(iVar1,(*(int *)&gen_args[1]),iVar4 * (*(int *)&gen_args[2]) * 4);
  uVar7 = F_00c46aa0(*(undefined4 *)((*(int *)&gen_args[0]) + 0x18),(*(int *)&gen_args[1]) + iVar4 * (*(int *)&gen_args[2]) * 4,
                     uVar6 * (*(int *)&gen_args[2]) * 4);
  (*(undefined2 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (undefined2)uVar5;
  *(undefined2 *)(iVar2 + 0x1e) = (undefined2)(*(int *)&gen_args[0]);
  return (uint)uVar7;
}

/* ref: FUN_00ce7a80 */
uint F_00ce7a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce7a80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = (*(int *)&gen_args[0]);
  pvVar5 = ((undefined *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x18) + (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x1e) * (*(int *)&gen_args[1]) * 4)));
  *(short *)((*(int *)&gen_args[0]) + 0x20) = *(short *)((*(int *)&gen_args[0]) + 0x20) + (short)(*(uint *)&gen_args[2]);
  iVar4 = *(ushort *)((*(int *)&gen_args[0]) + 0x1e) + (*(uint *)&gen_args[2]);
  iVar1 = (*(int *)&gen_args[1]) * 4;
  uVar3 = (ushort)iVar4;
  *(ushort *)((*(int *)&gen_args[0]) + 0x1e) = uVar3;
  if (uVar3 < 0x2000) {
    pvVar5 = F_00c48350(pvVar5,0,((*(uint *)&gen_args[2]) & 0xffff) * iVar1);
    return (uint)pvVar5;
  }
  uVar6 = iVar4 - 0x2000;
  uVar7 = uVar6 & 0xffff;
  F_00c48350(pvVar5,0,(((*(uint *)&gen_args[2]) & 0xffff) - uVar7) * iVar1);
  pvVar5 = F_00c48350(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x18),0,uVar7 * iVar1);
  (*(undefined2 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (undefined2)uVar6;
  *(undefined2 *)(iVar2 + 0x1e) = (undefined2)(*(int *)&gen_args[0]);
  return CONCAT22((short)((uint)((int)(uintptr_t)pvVar5) >> 0x10),(undefined2)(*(int *)&gen_args[0]));
}

/* ref: FUN_00ce7b10 */
uint F_00ce7b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce7b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  ushort uVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  gen_size32 sVar6;
  
  pvVar3 = ((undefined *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x24) + (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x28) * (*(int *)&gen_args[2]) * 4)));
  *(short *)((*(int *)&gen_args[0]) + 0x2c) = *(short *)((*(int *)&gen_args[0]) + 0x2c) - (short)(*(uint *)&gen_args[3]);
  iVar2 = *(ushort *)((*(int *)&gen_args[0]) + 0x28) + (*(uint *)&gen_args[3]);
  uVar1 = (ushort)iVar2;
  *(ushort *)((*(int *)&gen_args[0]) + 0x28) = uVar1;
  if (uVar1 < 0x2000) {
    sVar6 = ((*(uint *)&gen_args[3]) & 0xffff) * (*(int *)&gen_args[2]) * 4;
    F_00c46aa0((*(int *)&gen_args[1]),pvVar3,sVar6);
    pvVar3 = F_00c48350(pvVar3,0,sVar6);
    return (uint)pvVar3;
  }
  uVar4 = iVar2 - 0x2000;
  uVar5 = uVar4 & 0xffff;
  iVar2 = ((*(uint *)&gen_args[3]) & 0xffff) - uVar5;
  sVar6 = iVar2 * (*(int *)&gen_args[2]) * 4;
  F_00c46aa0((*(int *)&gen_args[1]),pvVar3,sVar6);
  F_00c48350(pvVar3,0,sVar6);
  sVar6 = uVar5 * (*(int *)&gen_args[2]) * 4;
  F_00c46aa0((*(int *)&gen_args[1]) + iVar2 * (*(int *)&gen_args[2]) * 4,*(undefined4 *)((*(int *)&gen_args[0]) + 0x24),sVar6)
  ;
  pvVar3 = F_00c48350(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x24),0,sVar6);
  (*(undefined2 *)((char *)&(*(uint *)&gen_args[3]) + 0)) = (undefined2)uVar4;
  *(undefined2 *)((*(int *)&gen_args[0]) + 0x28) = (undefined2)(*(uint *)&gen_args[3]);
  return (uint)pvVar3;
}

/* ref: FUN_00ce7be0 */
uint F_00ce7be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce7be0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float fVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xe);
  uVar5 = (uint)*(ushort *)(param_1 + 0x10);
  pfVar4 = ((float *)GEN_TOP((*(int *)(param_1 + 0x24) + (uint)*(ushort *)(param_1 + 0x2a) * param_2 * 4)));
  pfVar8 = *(float * PTR32 *)(param_1 + 8);
  pfVar7 = ((float *)GEN_TOP((*(int *)(param_1 + 0x18) + (uint)*(ushort *)(param_1 + 0x1c) * param_2 * 4)));
  sVar12 = *(short *)(param_1 + 0x1c);
  sVar13 = *(short *)(param_1 + 0x2a);
  for (uVar9 = (uint)*(ushort *)(param_1 + 0xc); uVar9 != 0; uVar9 = uVar9 - 1) {
    iVar10 = 0;
    if (3 < param_2) {
      iVar11 = (param_2 - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar3 = pfVar4;
      pfVar6 = pfVar7;
      do {
        pfVar4 = pfVar3 + 4;
        pfVar7 = pfVar6 + 4;
        iVar11 = iVar11 + -1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)*pfVar6 + (float10)*pfVar3);
        pfVar3[1] = (float)((float10)pfVar6[1] * (float10)*pfVar8 + (float10)pfVar3[1]);
        pfVar3[2] = (float)((float10)pfVar6[2] * (float10)*pfVar8 + (float10)pfVar3[2]);
        pfVar3[3] = (float)((float10)pfVar6[3] * (float10)*pfVar8 + (float10)pfVar3[3]);
        pfVar3 = pfVar4;
        pfVar6 = pfVar7;
      } while (iVar11 != 0);
    }
    if (iVar10 < param_2) {
      iVar10 = param_2 - iVar10;
      pfVar3 = pfVar4;
      do {
        pfVar4 = pfVar3 + 1;
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 + -1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)fVar1 + (float10)*pfVar3);
        pfVar3 = pfVar4;
      } while (iVar10 != 0);
    }
    sVar12 = sVar12 + 1;
    pfVar8 = pfVar8 + 1;
    if (sVar12 == 0x2000) {
      pfVar7 = *(float * PTR32 *)(param_1 + 0x18);
      sVar12 = 0;
    }
    sVar13 = sVar13 + 1;
    if (sVar13 == 0x2000) {
      pfVar4 = *(float * PTR32 *)(param_1 + 0x24);
      sVar13 = 0;
    }
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    iVar10 = 0;
    if (3 < param_2) {
      iVar11 = (param_2 - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar3 = pfVar4;
      pfVar6 = pfVar7;
      do {
        pfVar4 = pfVar3 + 4;
        pfVar7 = pfVar6 + 4;
        iVar11 = iVar11 + -1;
        *pfVar3 = (float)((float10)*pfVar3 + (float10)*pfVar6);
        pfVar3[1] = (float)((float10)pfVar6[1] + (float10)pfVar3[1]);
        pfVar3[2] = (float)((float10)pfVar6[2] + (float10)pfVar3[2]);
        pfVar3[3] = (float)((float10)pfVar6[3] + (float10)pfVar3[3]);
        pfVar3 = pfVar4;
        pfVar6 = pfVar7;
      } while (iVar11 != 0);
    }
    if (iVar10 < param_2) {
      iVar10 = param_2 - iVar10;
      pfVar3 = pfVar4;
      do {
        pfVar4 = pfVar3 + 1;
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 + -1;
        *pfVar3 = (float)((float10)*pfVar3 + (float10)fVar1);
        pfVar3 = pfVar4;
      } while (iVar10 != 0);
    }
    sVar12 = sVar12 + 1;
    if (sVar12 == 0x2000) {
      pfVar7 = *(float * PTR32 *)(param_1 + 0x18);
      sVar12 = 0;
    }
    sVar13 = sVar13 + 1;
    if (sVar13 == 0x2000) {
      pfVar4 = *(float * PTR32 *)(param_1 + 0x24);
      sVar13 = 0;
    }
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    iVar10 = 0;
    if (3 < param_2) {
      iVar11 = (param_2 - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar3 = pfVar4;
      pfVar6 = pfVar7;
      do {
        pfVar4 = pfVar3 + 4;
        pfVar7 = pfVar6 + 4;
        iVar11 = iVar11 + -1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)*pfVar6 + (float10)*pfVar3);
        pfVar3[1] = (float)((float10)pfVar6[1] * (float10)*pfVar8 + (float10)pfVar3[1]);
        pfVar3[2] = (float)((float10)pfVar6[2] * (float10)*pfVar8 + (float10)pfVar3[2]);
        pfVar3[3] = (float)((float10)pfVar6[3] * (float10)*pfVar8 + (float10)pfVar3[3]);
        pfVar3 = pfVar4;
        pfVar6 = pfVar7;
      } while (iVar11 != 0);
    }
    if (iVar10 < param_2) {
      iVar10 = param_2 - iVar10;
      pfVar3 = pfVar4;
      do {
        pfVar4 = pfVar3 + 1;
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 + -1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)fVar1 + (float10)*pfVar3);
        pfVar3 = pfVar4;
      } while (iVar10 != 0);
    }
    sVar12 = sVar12 + 1;
    pfVar8 = pfVar8 + 1;
    if (sVar12 == 0x2000) {
      pfVar7 = *(float * PTR32 *)(param_1 + 0x18);
      sVar12 = 0;
    }
    sVar13 = sVar13 + 1;
    if (sVar13 == 0x2000) {
      pfVar4 = *(float * PTR32 *)(param_1 + 0x24);
      sVar13 = 0;
    }
  }
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + *(short *)(param_1 + 4);
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + *(short *)(param_1 + 4);
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + *(short *)(param_1 + 2);
  *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) - *(short *)(param_1 + 2);
  if (0x1fff < *(ushort *)(param_1 + 0x2a)) {
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) + 0xe000;
  }
  if (0x1fff < *(ushort *)(param_1 + 0x1c)) {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) + 0xe000;
  }
  return 0x2000;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularSynthesizer::vf14 */
uint F_00ce7ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce7ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x113003c));
  if (*(int *)(this + 0x60) != 0) {
    F_00406810(*(int *)(this + 0x60));
  }
  if (*(int *)(this + 0x6c) != 0) {
    F_00406810(*(int *)(this + 0x6c));
  }
  if (*(int *)(this + 0x50) != 0) {
    F_00406810(*(int *)(this + 0x50));
  }
  F_00cf3b1e(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf3 */
uint F_00ce7f00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce7f00u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  code * pcVar2;
  
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x28);
    break;
  case 1: ;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x30);
    break;
  case 2: ;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x34);
    break;
  case 3: ;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x3c);
    break;
  case 4: ;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x40);
    break;
  default: ;
    goto switchD_00ce7f0e_default;
  }
  (*pcVar2)(param_1,(undefined4)gen_fl2bits(param_2),param_4);
switchD_00ce7f0e_default: ;
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf4 */
uint F_00ce7f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce7f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pCVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  pCVar1 = this + 4;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(pCVar1);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    ((code *)*(gen_code32 *)(*(int *)pCVar1 + 8))(pCVar1,param_1);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28);
  bVar4 = (char)uVar2 != '\0';
  if (bVar4) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28,param_1);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 0xc))))(this + 0x4c);
  bVar5 = (char)uVar2 != '\0';
  if (bVar5) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 8))))(this + 0x4c,param_1);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 0xc))))(this + 0x70);
  bVar6 = (char)uVar2 != '\0';
  if (bVar6) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 8))))(this + 0x70,param_1);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x94) + 0xc))))(this + 0x94);
  if ((char)uVar2 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x94) + 8))))(this + 0x94,param_1);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    return uVar2;
  }
  if (bVar6 || (bVar5 || (bVar4 || bVar3))) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  }
  return uVar2;
}

/* ref: FUN_00ce8520 */
uint F_00ce8520(unsigned int gen_a0)
{
  GEN_ENTER(0xce8520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  F_00cf53e0(this,&REFG(undefined, 0x134eee0),(int)this + 100,0x14,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130144));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x1130128));
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),0x20,"CDev.Engine.Sd",0,0,0x10)));
  uVar1 = *(undefined4 *)&REFG(undefined, 0x113009c);
  *(undefined4 * PTR32 *)((int)this + 0xa0) = puVar2;
  *puVar2 = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 4))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 8))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0xc))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x10))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x18))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x1c))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ce85d0 */
unsigned int F_00ce85d0(unsigned int gen_a0)
{
  GEN_ENTER(0xce85d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130144));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x1130128));
  if (*(int *)((int)this + 0xa0) != 0) {
    F_00406810(*(int *)((int)this + 0xa0));
  }
  F_00cf3c40(this);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOCompressor::vf8 */
uint F_00ce8600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce8600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x40) = *puVar1;
  *(undefined4 *)(param_1 + 0x44) = puVar1[1];
  *(undefined4 *)(param_1 + 0x48) = puVar1[2];
  *(undefined4 *)(param_1 + 0x4c) = puVar1[3];
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x52) = *puVar1;
  *(undefined4 *)(param_1 + 0x56) = puVar1[1];
  *(undefined4 *)(param_1 + 0x5a) = puVar1[2];
  *(undefined4 *)(param_1 + 0x5e) = puVar1[3];
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOCompressor::vf10 */
unsigned int F_00ce8670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xce8670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  float param_7 = (float)gen_a6;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float * pfVar8;
  float * pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float in_XMM2_Da = 0;
  int local_18;
  float local_c;
  int local_8;
  
  if (param_4[1] != 1) {
    *(undefined4 *)(param_6 + 4) = 0;
    return 0;
  }
  local_8 = *param_4;
  if (param_7 == 0.0) {
    F_00c46aa0(*(undefined4 *)param_6,local_8,(uint)*(ushort *)(param_2 + 0x5e) * param_4[2]);
    *(int *)(param_6 + 8) = param_4[2];
    *(int *)(param_6 + 4) = param_4[1];
    return 0;
  }
  local_18 = param_4[2];
  uVar10 = (uint)*(ushort *)(param_2 + 0x54);
  iVar12 = *(int *)param_6;
  pfVar8 = (float *)F_00cf3d40(param_6,param_2);
  fVar1 = pfVar8[2];
  fVar2 = pfVar8[1];
  fVar3 = *pfVar8;
  fVar4 = pfVar8[3];
  fVar5 = pfVar8[4];
  if (0 < local_18) {
    do {
      fVar13 = (float10)*(double *)&REFG(undefined, 0x1130198);
      iVar11 = 0;
      local_c = (float)(float10)0;
      if (uVar10 != 0) {
        dVar7 = (double)fVar2 - REFG(double, 0x1088130);
        do {
          fVar13 = F_00c4d440(in_XMM2_Da,
                                (float10)((float)GEN_TOF((fVar13 + (float10)((float)GEN_TOF(ABS((float10)*(float *)(
                                                  local_8 + iVar11 * 4))))))));
          param_7 = ((float)GEN_TOF(((float10)(float)((float10)(float)fVar13 *
                                            (float10)*(double *)&REFG(undefined, 0x1130188)) - (float10)fVar3)));
          fVar14 = (float10)0;
          fVar13 = (float10)param_7;
          if (fVar13 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar13)) && fVar14 != fVar13)) {
            param_7 = (float)fVar14;
          }
          fVar13 = (float10)*(double *)&REFG(undefined, 0x1130198);
          fVar14 = (float10)(float)((float10)param_7 + fVar13);
          fVar15 = (float10)*((float *)GEN_TOP((*(int *)(param_2 + 0xa0) + iVar11 * 4)));
          if (!(fVar14 <= fVar15) == (GEN_ISNAN(fVar15) || GEN_ISNAN(fVar14))) {
            pfVar8 = ((float *)GEN_TOP((*(int *)(param_2 + 0xa0) + iVar11 * 4)));
            fVar15 = ((float10)*((float *)GEN_TOP((*(int *)(param_2 + 0xa0) + iVar11 * 4))) - fVar14) *
                     (float10)fVar5;
          }
          else {
            pfVar8 = ((float *)GEN_TOP((*(int *)(param_2 + 0xa0) + iVar11 * 4)));
            fVar15 = ((float10)*((float *)GEN_TOP((*(int *)(param_2 + 0xa0) + iVar11 * 4))) - fVar14) *
                     (float10)fVar4;
          }
          *pfVar8 = (float)(fVar15 + fVar14);
          fVar6 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)(param_2 + 0xa0) + iVar11 * 4))) - fVar13) *
                         (float10)dVar7)));
          if (iVar11 == 3) {
            fVar13 = F_00c4d24c((float10)((float)GEN_TOF(((float10)(float)((float10)fVar6 + (float10)fVar1)
                                                  * (float10)*(double *)&REFG(undefined, 0x1130190)))));
            *(float *)(iVar12 + 0xc) =
                 ((float)GEN_TOF(((float10)(float)fVar13 * (float10)*(float *)(local_8 + 0xc))));
            fVar13 = (float10)*(double *)&REFG(undefined, 0x1130198);
          }
          else if (!((float10)local_c <= (float10)fVar6) !=
                   (GEN_ISNAN((float10)fVar6) || GEN_ISNAN((float10)local_c))) {
            local_c = fVar6;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)uVar10);
      }
      fVar13 = F_00c4d24c((float10)((float)GEN_TOF(((float10)(float)((float10)local_c + (float10)fVar1) *
                                            (float10)*(double *)&REFG(undefined, 0x1130190)))));
      iVar11 = 0;
      fVar13 = (float10)(float)fVar13;
      if (3 < uVar10) {
        pfVar8 = (float *)(iVar12 + 4);
        pfVar9 = (float *)(local_8 + 0xc);
        do {
          if (iVar11 != 3) {
            pfVar8[-1] = (float)((float10)pfVar9[-3] * fVar13);
          }
          if (iVar11 != 2) {
            *pfVar8 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((local_8 - iVar12) + (int)pfVar8))) * fVar13)));
          }
          if (iVar11 != 1) {
            pfVar8[1] = (float)((float10)pfVar9[-1] * fVar13);
          }
          if (iVar11 != 0) {
            pfVar8[2] = (float)((float10)*pfVar9 * fVar13);
          }
          iVar11 = iVar11 + 4;
          pfVar8 = pfVar8 + 4;
          pfVar9 = pfVar9 + 4;
        } while (iVar11 < (int)(uVar10 - 3));
      }
      if (iVar11 < (int)uVar10) {
        pfVar8 = (float *)(iVar12 + iVar11 * 4);
        do {
          if (iVar11 != 3) {
            *pfVar8 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((local_8 - iVar12) + (int)pfVar8))) * fVar13)));
          }
          iVar11 = iVar11 + 1;
          pfVar8 = pfVar8 + 1;
        } while (iVar11 < (int)uVar10);
      }
      pfVar8 = (float *)(uVar10 * 4);
      local_8 = local_8 + (int)pfVar8;
      iVar12 = iVar12 + (int)pfVar8;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  F_00cf3d90(pfVar8,param_2);
  *(int *)(param_6 + 8) = param_4[2];
  *(int *)(param_6 + 4) = param_4[1];
  return 0;
}

/* ref: FUN_00ce8930 */
float10 F_00ce8930(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xce8930u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float in_xmm2 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00c4d440(in_xmm2,(float10)param_2);
  return (float10)(float)((float10)(float)fVar1 * (float10)*(double *)&REFG(undefined, 0x1130188));
}

/* ref: FUN_00ce8960 */
float10 F_00ce8960(float gen_a0)
{
  GEN_ENTER(0xce8960u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c4d24c((float10)(float)((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1130190)));
  return (float10)(float)fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOCompressor::vf14 */
uint F_00ce8990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce8990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130144));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x1130128));
  if (*(int *)(this + 0xa0) != 0) {
    F_00406810(*(int *)(this + 0xa0));
  }
  F_00cf3c40(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf3 */
unsigned int F_00ce89e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce89e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_3 == 0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,(undefined4)gen_fl2bits(param_2),param_4);
    ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf4 */
uint F_00ce8a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce8a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4);
  if ((char)uVar1 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4,param_1);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf10 */
float10 F_00ce8a50(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce8a50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (param_3 != 0) {
    F_00cccd90(param_1 + 4,param_2,param_3);
    return extraout_ST0;
  }
  fVar1 = F_00cccbd0(param_1 + 4,param_2);
  return fVar1;
}

/* ref: FUN_00ce8a80 */
uint F_00ce8a80(unsigned int gen_a0)
{
  GEN_ENTER(0xce8a80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb10(in_ecx + 1,(float)(float10)1);
  return (uint)in_ecx;
}

/* ref: FUN_00ce8aa0 */
uint F_00ce8aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xce8aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf53e0(this,&REFG(undefined, 0x134f368),(int)this + 100,4,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130264));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x113024c));
  F_00c48350((undefined *)((int)this + 0x70),0,0x20000);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStringendoEffect::vf8 */
uint F_00ce8b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce8b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined2 uVar1;
  undefined4 * puVar2;
  float10 fVar3;
  uint uVar4;
  
  fVar3 = (float10)0;
  puVar2 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x40) = *puVar2;
  *(undefined4 *)(param_1 + 0x44) = puVar2[1];
  *(undefined4 *)(param_1 + 0x48) = puVar2[2];
  *(undefined4 *)(param_1 + 0x4c) = puVar2[3];
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(puVar2 + 4);
  puVar2 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x52) = *puVar2;
  *(undefined4 *)(param_1 + 0x56) = puVar2[1];
  *(undefined4 *)(param_1 + 0x5a) = puVar2[2];
  *(undefined4 *)(param_1 + 0x5e) = puVar2[3];
  uVar1 = *(undefined2 *)(puVar2 + 4);
  *(float *)(param_1 + 0x20074) = (float)fVar3;
  *(float *)(param_1 + 0x2007c) = (float)fVar3;
  *(undefined2 *)(param_1 + 0x62) = uVar1;
  *(float *)(param_1 + 0x20078) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x20070) = 0;
  uVar4 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStringendoEffect::vf10 */
uint F_00ce8b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xce8b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  uint param_7 = (uint)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined4 in_eax_00;
  uint uVar6;
  float * pfVar7;
  float * pfVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float * pfVar12;
  float * pfVar13;
  int iVar14;
  undefined4 * puVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  
  uVar10 = param_2;
  if (param_4[1] != 1) {
    param_4 = (undefined4 *)param_4[2];
    fVar17 = (float10)0;
    *(float *)(param_2 + 0x20074) = (float)fVar17;
    uVar10 = (uint)*(ushort *)(param_2 + 0x54);
    if (0 < (int)param_4) {
      do {
        iVar9 = 0;
        if (3 < uVar10) {
          do {
            *((float *)GEN_TOP((param_2 + 0x70 + (*(int *)(param_2 + 0x20070) + iVar9) * 4))) = (float)fVar17;
            *((float *)GEN_TOP((param_2 + 0x74 + (*(int *)(param_2 + 0x20070) + iVar9) * 4))) = (float)fVar17;
            *((float *)GEN_TOP((param_2 + 0x78 + (*(int *)(param_2 + 0x20070) + iVar9) * 4))) = (float)fVar17;
            iVar14 = *(int *)(param_2 + 0x20070) + iVar9;
            iVar9 = iVar9 + 4;
            *(float *)(param_2 + 0x7c + iVar14 * 4) = (float)fVar17;
          } while (iVar9 < (int)(uVar10 - 3));
        }
        for (; iVar9 < (int)uVar10; iVar9 = iVar9 + 1) {
          *((float *)GEN_TOP((param_2 + 0x70 + (*(int *)(param_2 + 0x20070) + iVar9) * 4))) = (float)fVar17;
        }
        *(int *)(param_2 + 0x20070) = *(int *)(param_2 + 0x20070) + 8;
        if (*(int *)(param_2 + 0x20070) == 0x8000) {
          *(undefined4 *)(param_2 + 0x20070) = 0;
        }
        param_4 = (undefined4 *)((int)param_4 + -1);
      } while (param_4 != (undefined4 *)0x0);
    }
    param_6[1] = 0;
    return (uint)param_6;
  }
  pfVar8 = (float *)F_00cf3d40(in_eax,param_2);
  pfVar13 = (float *)*param_6;
  puVar15 = (undefined4 *)*param_4;
  if (param_7 != 0) {
    fVar17 = (float10)*pfVar8;
    bVar16 = GEN_ISNAN((float10)1) || GEN_ISNAN(fVar17);
    if (bVar16 != (bVar16 || (float10)1 == fVar17)) {
      fVar18 = (float10)REFG(float, 0x10920a4);
      fVar21 = (float10)*(float *)(param_2 + 0x20074);
      if (fVar21 <= fVar18 && ((!GEN_ISNAN(fVar18) && !GEN_ISNAN(fVar21)) && fVar18 != fVar21))
      goto LAB_00ce90ed;
    }
    (*(uint *)(gen_frame + 0x34)) = (uint)*(ushort *)(param_2 + 0x54);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)1 - fVar17);
    if (0 < (int)param_4[2]) {
      (*(int *)(gen_frame + 0x1c)) = param_4[2];
      do {
        fVar21 = (float10)REFG(float, 0x1094808);
        fVar3 = ((float)GEN_TOF(((float10)*(float *)(uVar10 + 0x20074) + (float10)*(double *)&REFG(undefined, 0x11302a8))));
        fVar17 = (float10)fVar3;
        *(float *)(uVar10 + 0x20074) = fVar3;
        if (!(fVar17 <= (float10)1) != (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar17))) {
          *(float *)(uVar10 + 0x20074) = (float)(fVar17 - (float10)REFG(double, 0x1088130));
        }
        fVar17 = (float10)*(float *)(uVar10 + 0x20074);
        if (!(fVar17 <= fVar21) || ((GEN_ISNAN(fVar21) || GEN_ISNAN(fVar17)) || fVar21 == fVar17)) {
          if (*(char *)(uVar10 + 0x20080) == '\0') goto LAB_00ce8c83;
        }
        else {
          *(undefined2 *)(uVar10 + 0x20080) = 0;
LAB_00ce8c83: ;
          if (!((float10)*(float *)(uVar10 + 0x20074) <= fVar21) !=
              (GEN_ISNAN(fVar21) || GEN_ISNAN((float10)*(float *)(uVar10 + 0x20074)))) {
            *(float *)(uVar10 + 0x20078) = (float)(float10)0;
            *(undefined1 *)(uVar10 + 0x20080) = 1;
          }
        }
        if ((*(char *)(uVar10 + 0x20081) == '\0') &&
           (!((float10)*(float *)(uVar10 + 0x20074) <= (float10)REFG(float, 0x1088138)) !=
            (GEN_ISNAN((float10)REFG(float, 0x1088138)) || GEN_ISNAN((float10)*(float *)(uVar10 + 0x20074))))) {
          *(float *)(uVar10 + 0x2007c) = (float)(float10)0;
          *(undefined1 *)(uVar10 + 0x20081) = 1;
        }
        fVar3 = ((float)GEN_TOF(((float10)*(float *)(uVar10 + 0x20078) + (float10)(*(float *)(gen_frame + 0x20)))));
        *(float *)(uVar10 + 0x20078) = fVar3;
        *(float *)(uVar10 + 0x2007c) =
             ((float)GEN_TOF(((float10)*(float *)(uVar10 + 0x2007c) + (float10)(*(float *)(gen_frame + 0x20)))));
        dVar5 = (double)fVar3;
        fVar17 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar5),
                              (int)((ulonglong)gen_d2bits(dVar5) >> 0x20),&(*(double *)(gen_frame + 0x8)));
        (*(int *)(gen_frame + 0x2c)) = *(int *)(uVar10 + 0x20070) + (int)(*(double *)(gen_frame + 0x8)) * -8;
        if ((*(int *)(gen_frame + 0x2c)) < 0) {
          (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 0x8000;
        }
        (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x2c)) + -8;
        if ((*(int *)(gen_frame + 0x2c)) + -8 < 0) {
          (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x2c)) + 0x7ff8;
        }
        fVar21 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)*(float *)(uVar10 + 0x2007c)),
                              (int)((ulonglong)gen_d2bits((double)*(float *)(uVar10 + 0x2007c)) >>
                                   0x20),&(*(double *)(gen_frame + 0x0)));
        (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar21)));
        (*(int *)(gen_frame + 0x24)) = *(int *)(uVar10 + 0x20070) + (int)(*(double *)(gen_frame + 0x0)) * -8;
        if ((*(int *)(gen_frame + 0x24)) < 0) {
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 0x8000;
        }
        (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((*(int *)(gen_frame + 0x24)) + -8);
        if ((*(int *)(gen_frame + 0x24)) + -8 < 0) {
          (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((*(int *)(gen_frame + 0x24)) + 0x7ff8);
        }
        fVar19 = (float10)((float)GEN_TOF(((float10)*(float *)(uVar10 + 0x20074) -
                                 (float10)*(double *)&REFG(undefined, 0x1094878))));
        fVar18 = (float10)1;
        fVar3 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar18 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar18 - 
                                                  (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar18 - (
                                                  float10)((float)GEN_TOF(ABS((float10)(float)(fVar19 + 
                                                  fVar19))))))))))))))))))))));
        (*(float *)(gen_frame + 0x18)) = fVar3;
        fVar19 = (float10)((float)GEN_TOF(((float10)*(float *)(uVar10 + 0x20074) +
                                 (float10)*(double *)&REFG(undefined, 0x1094878))));
        fVar18 = (float10)1;
        iVar9 = 0;
        fVar17 = (float10)(float)fVar17;
        fVar21 = (float10)(float)fVar21;
        fVar20 = (float10)fVar3;
        fVar18 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar18 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar18 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((
                                                  fVar18 - (float10)((float)GEN_TOF(ABS((float10)(float)(
                                                  fVar19 + fVar19))))))))))))))))))))));
        if (3 < (int)(*(uint *)(gen_frame + 0x34))) {
          param_7 = uVar10 + 0x74 + (*(int *)(gen_frame + 0x30)) * 4;
          fVar19 = (float10)1 - fVar21;
          param_2 = uVar10 + 0x74 + (*(int *)(gen_frame + 0x2c)) * 4;
          (*(float * PTR32 *)(gen_frame + 0x38)) = (float *)(uVar10 + 0x74 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x28))) * 4);
          dVar5 = (double)((float10)1 - fVar17);
          (*(double *)(gen_frame + 0x10)) = dVar5;
          pfVar8 = (float *)(uVar10 + 0x74 + (*(int *)(gen_frame + 0x24)) * 4);
          pfVar12 = pfVar13;
          do {
            pfVar7 = (*(float * PTR32 *)(gen_frame + 0x38));
            *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = *puVar15;
            fVar3 = ((float)GEN_TOF(((float10)*(float *)(param_2 - 4) * (float10)dVar5 +
                           (float10)*(float *)(param_7 - 4) * fVar17)));
            (*(float *)(gen_frame + 0x18)) = fVar3;
            fVar4 = (float)((float10)pfVar8[-1] * fVar19 + (float10)(*(float * PTR32 *)(gen_frame + 0x38))[-1] * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            *pfVar12 = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            *((undefined4 *)GEN_TOP((uVar10 + 0x74 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = puVar15[1];
            fVar3 = (float)((float10)*(float *)param_2 * (float10)dVar5 +
                           (float10)*(float *)param_7 * fVar17);
            (*(float *)(gen_frame + 0x18)) = fVar3;
            fVar4 = (float)((float10)*pfVar8 * fVar19 + (float10)*(*(float * PTR32 *)(gen_frame + 0x38)) * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            pfVar12[1] = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            *((undefined4 *)GEN_TOP((uVar10 + 0x78 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = puVar15[2];
            fVar3 = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * (float10)dVar5 +
                           (float10)*(float *)(param_7 + 4) * fVar17)));
            (*(float *)(gen_frame + 0x18)) = fVar3;
            fVar4 = (float)((float10)pfVar8[1] * fVar19 + (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1] * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            pfVar12[2] = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            *((undefined4 *)GEN_TOP((uVar10 + 0x7c + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = puVar15[3];
            pfVar1 = (float *)(param_7 + 8);
            pfVar2 = (float *)(param_2 + 8);
            param_2 = param_2 + 0x10;
            param_7 = param_7 + 0x10;
            (*(float * PTR32 *)(gen_frame + 0x38)) = (*(float * PTR32 *)(gen_frame + 0x38)) + 4;
            iVar9 = iVar9 + 4;
            pfVar13 = pfVar12 + 4;
            fVar3 = (float)((float10)*pfVar2 * (float10)dVar5 + (float10)*pfVar1 * fVar17);
            (*(float *)(gen_frame + 0x18)) = fVar3;
            puVar15 = puVar15 + 4;
            fVar4 = (float)((float10)pfVar8[2] * fVar19 + (float10)pfVar7[2] * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            pfVar12[3] = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            pfVar8 = pfVar8 + 4;
            pfVar12 = pfVar13;
          } while (iVar9 < (int)((*(uint *)(gen_frame + 0x34)) - 3));
        }
        if (iVar9 < (int)(*(uint *)(gen_frame + 0x34))) {
          param_2 = uVar10 + 0x70 + (iVar9 + (*(int *)(gen_frame + 0x2c))) * 4;
          dVar5 = (double)((float10)1 - fVar17);
          (*(double *)(gen_frame + 0x10)) = dVar5;
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((uVar10 + 0x70 + (iVar9 + (int)(*(float * PTR32 *)(gen_frame + 0x28))) * 4)));
          pfVar8 = ((float *)GEN_TOP((uVar10 + 0x70 + (iVar9 + (*(int *)(gen_frame + 0x24))) * 4)));
          pfVar12 = pfVar13;
          param_7 = uVar10 + 0x70 + (iVar9 + (*(int *)(gen_frame + 0x30))) * 4;
          do {
            pfVar1 = (*(float * PTR32 *)(gen_frame + 0x28));
            *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = *puVar15;
            fVar3 = *(float *)param_2;
            param_2 = param_2 + 4;
            iVar9 = iVar9 + 1;
            pfVar13 = pfVar12 + 1;
            puVar15 = puVar15 + 1;
            fVar3 = (float)((float10)fVar3 * (float10)dVar5 + fVar17 * (float10)*(float *)param_7);
            (*(float *)(gen_frame + 0x18)) = fVar3;
            (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) + 1;
            fVar4 = ((float)GEN_TOF(((float10)*pfVar8 * ((float10)1 - fVar21) + fVar21 * (float10)*pfVar1)));
            (*(float *)(gen_frame + 0x18)) = fVar4;
            *pfVar12 = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            pfVar8 = pfVar8 + 1;
            pfVar12 = pfVar13;
            param_7 = param_7 + 4;
          } while (iVar9 < (int)(*(uint *)(gen_frame + 0x34)));
        }
        *(int *)(uVar10 + 0x20070) = *(int *)(uVar10 + 0x20070) + 8;
        if (*(int *)(uVar10 + 0x20070) == 0x8000) {
          *(undefined4 *)(uVar10 + 0x20070) = 0;
        }
        iVar9 = (*(int *)(gen_frame + 0x1c)) + -1;
        (*(int *)(gen_frame + 0x1c)) = iVar9;
      } while (iVar9 != 0);
    }
    param_6[2] = param_4[2];
    in_eax_00 = param_4[1];
    param_6[1] = in_eax_00;
    uVar10 = F_00cf3d90(in_eax_00,uVar10);
    return uVar10;
  }
LAB_00ce90ed: ;
  F_00c46aa0(pfVar13,puVar15,(uint)*(ushort *)(param_2 + 0x5e) * param_4[2]);
  uVar6 = param_4[2];
  uVar11 = (uint)*(ushort *)(param_2 + 0x54);
  *(float *)(param_2 + 0x20074) = (float)(float10)0;
  param_2 = uVar6;
  if (0 < (int)uVar6) {
    do {
      iVar9 = 0;
      if (3 < uVar11) {
        do {
          *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = *puVar15;
          *((undefined4 *)GEN_TOP((uVar10 + 0x74 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = puVar15[1];
          *((undefined4 *)GEN_TOP((uVar10 + 0x78 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = puVar15[2];
          iVar14 = *(int *)(uVar10 + 0x20070) + iVar9;
          iVar9 = iVar9 + 4;
          *(undefined4 *)(uVar10 + 0x7c + iVar14 * 4) = puVar15[3];
          puVar15 = puVar15 + 4;
        } while (iVar9 < (int)(uVar11 - 3));
      }
      for (; iVar9 < (int)uVar11; iVar9 = iVar9 + 1) {
        *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = *puVar15;
        puVar15 = puVar15 + 1;
      }
      *(int *)(uVar10 + 0x20070) = *(int *)(uVar10 + 0x20070) + 8;
      if (*(int *)(uVar10 + 0x20070) == 0x8000) {
        *(undefined4 *)(uVar10 + 0x20070) = 0;
      }
      uVar6 = param_2 - 1;
      param_2 = uVar6;
    } while (uVar6 != 0);
  }
  param_6[2] = param_4[2];
  param_6[1] = param_4[1];
  uVar10 = F_00cf3d90(param_6,uVar10);
  return uVar10;
}

/* ref: FUN_00ce9280 */
float10 F_00ce9280(float gen_a0)
{
  GEN_ENTER(0xce9280u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)1;
  return (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar1 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar1 - 
                                                  (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar1 - (
                                                  float10)((float)GEN_TOF(ABS((float10)(float)((float10)
                                                  param_1 + (float10)param_1))))))))))))))))))))));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStringendoEffect::vf14 */
uint F_00ce92e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce92e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130264));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x113024c));
  F_00cf3c40(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce9310 */
unsigned int F_00ce9310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9310u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00ce9330 */
byte F_00ce9330(unsigned int gen_a0)
{
  GEN_ENTER(0xce9330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (byte)((uint)*(undefined4 *)(param_1 + 4) >> 8) & 1;
}

/* ref: FUN_00ce9350 */
byte F_00ce9350(unsigned int gen_a0)
{
  GEN_ENTER(0xce9350u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (byte)(*(uint *)(param_1 + 4) >> 10) & 1;
}

/* ref: FUN_00ce9370 */
uint F_00ce9370(unsigned int gen_a0)
{
  GEN_ENTER(0xce9370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 4) >> 0xb & 1;
}

/* ref: FUN_00ce9390 */
byte F_00ce9390(unsigned int gen_a0)
{
  GEN_ENTER(0xce9390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (byte)(*(uint *)(param_1 + 4) >> 0xf) & 1;
}

/* ref: FUN_00ce93b0 */
uint F_00ce93b0(unsigned int gen_a0)
{
  GEN_ENTER(0xce93b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4) >> 0xd & 1;
}

/* ref: FUN_00ce93d0 */
uint F_00ce93d0(unsigned int gen_a0)
{
  GEN_ENTER(0xce93d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)this + (uint)*(byte *)((int)this + 4) * -0x10) - 0x10;
}

/* ref: FUN_00ce93e0 */
uint F_00ce93e0(unsigned int gen_a0)
{
  GEN_ENTER(0xce93e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return *(int *)(param_1 + 0x24) + 0x20;
  }
  return 0x20;
}

/* ref: FUN_00ce9400 */
uint F_00ce9400(unsigned int gen_a0)
{
  GEN_ENTER(0xce9400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return param_1 + 0x20;
  }
  return 0;
}

/* ref: FUN_00ce9420 */
uint F_00ce9420(unsigned int gen_a0)
{
  GEN_ENTER(0xce9420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(byte *)(param_1 + 0x1f);
}

/* ref: FUN_00ce9430 */
uint F_00ce9430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce9430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00ce94d0 */
uint F_00ce94d0(unsigned int gen_a0)
{
  GEN_ENTER(0xce94d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 == 1) {
    return 0x10;
  }
  if ((1 < param_1) && (param_1 < 4)) {
    return 0x20;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce9430));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("false","[sd][Driver] Error: SCD Version","SSCF.cpp",0x20,
                  "SQEX::CDev::Engine::Sd::Driver::ScdHeader::GetScdHeaderSize");
  return 0;
}

/* ref: FUN_00ce9530 */
uint F_00ce9530(unsigned int gen_a0)
{
  GEN_ENTER(0xce9530u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 == 1) {
    return 8;
  }
  if ((1 < param_1) && (param_1 < 4)) {
    return 0x10;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce9430));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("false","[sd][Driver] Error: SCD Version","SSCF.cpp",0x3f,
                  "SQEX::CDev::Engine::Sd::Driver::SoundBasicDesc::GetSoundBasicDescSize");
  return 0;
}

/* ref: FUN_00ce9590 */
uint F_00ce9590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
    uVar1 = F_00ce9530(param_2);
    return uVar1 + param_1;
  }
  return 0;
}

/* ref: FUN_00ce95c0 */
uint F_00ce95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce95c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
    uVar1 = F_00ce9530(param_2);
    if (uVar1 + param_1 != 0) {
      return uVar1 + param_1 + 0x10;
    }
  }
  return 0;
}

/* ref: FUN_00ce95f0 */
uint F_00ce95f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce95f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 4) >> 10 & 1) != 0) {
    uVar1 = F_00ce9530(param_2);
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if ((int *)(uVar2 + param_1) != (int *)0x0) {
        uVar1 = uVar1 + *(int *)(uVar2 + param_1);
      }
    }
    return uVar1 + param_1;
  }
  return 0;
}

/* ref: FUN_00ce9640 */
uint F_00ce9640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9640u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1;
  if ((param_1 != 0) && ((*(uint *)(param_1 + 4) >> 0xb & 1) != 0)) {
    uVar2 = F_00ce9530(param_2);
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((int *)(uVar3 + param_1) != (int *)0x0) {
        uVar2 = uVar2 + *(int *)(uVar3 + param_1);
      }
    }
    param_1 = uVar2;
    if ((*(uint *)(iVar1 + 4) >> 10 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if ((*(uint *)(iVar1 + 4) >> 8 & 1) != 0) {
        uVar3 = F_00ce9530(param_2);
        if ((int *)(uVar3 + iVar1) != (int *)0x0) {
          uVar2 = uVar2 + *(int *)(uVar3 + iVar1);
        }
      }
      if ((byte *)(uVar2 + iVar1) != (byte *)0x0) {
        param_1 = param_1 + *(byte *)(uVar2 + iVar1);
      }
    }
    return param_1 + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce96e0 */
uint F_00ce96e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce96e0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1;
  if ((*(uint *)(param_1 + 4) >> 0xf & 1) != 0) {
    uVar2 = F_00ce9530(param_2);
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((int *)(uVar3 + param_1) != (int *)0x0) {
        uVar2 = uVar2 + *(int *)(uVar3 + param_1);
      }
    }
    param_1 = uVar2;
    uVar2 = param_1;
    if ((*(uint *)(iVar1 + 4) >> 10 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((*(uint *)(iVar1 + 4) >> 8 & 1) != 0) {
        uVar4 = F_00ce9530(param_2);
        if ((int *)(uVar4 + iVar1) != (int *)0x0) {
          uVar3 = uVar3 + *(int *)(uVar4 + iVar1);
        }
      }
      if ((byte *)(uVar3 + iVar1) != (byte *)0x0) {
        uVar2 = param_1 + *(byte *)(uVar3 + iVar1);
      }
    }
    uVar3 = F_00ce9640(iVar1,param_2);
    if (uVar3 != 0) {
      uVar2 = uVar2 + *(byte *)(uVar3 + 1);
    }
    return uVar2 + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce9790 */
uint F_00ce9790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9790u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1;
  if ((*(uint *)(param_1 + 4) >> 0xd & 1) != 0) {
    uVar2 = F_00ce9530(param_2);
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((int *)(uVar3 + param_1) != (int *)0x0) {
        uVar2 = uVar2 + *(int *)(uVar3 + param_1);
      }
    }
    param_1 = uVar2;
    uVar2 = param_1;
    if ((*(uint *)(iVar1 + 4) >> 10 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((*(uint *)(iVar1 + 4) >> 8 & 1) != 0) {
        uVar4 = F_00ce9530(param_2);
        if ((int *)(uVar4 + iVar1) != (int *)0x0) {
          uVar3 = uVar3 + *(int *)(uVar4 + iVar1);
        }
      }
      if ((byte *)(uVar3 + iVar1) != (byte *)0x0) {
        uVar2 = param_1 + *(byte *)(uVar3 + iVar1);
      }
    }
    uVar3 = F_00ce9640(iVar1,param_2);
    if (uVar3 != 0) {
      uVar2 = uVar2 + *(byte *)(uVar3 + 1);
    }
    uVar3 = F_00ce96e0(iVar1,param_2);
    if (uVar3 != 0) {
      uVar2 = uVar2 + *(ushort *)(uVar3 + 2);
    }
    return uVar2 + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce9850 */
uint F_00ce9850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9850u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  pbVar1 = param_1;
  if (param_1[3] == 4) {
    uVar2 = F_00ce9530(param_2);
    iVar4 = uVar2 + (uint)*param_1 * 8;
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if (param_1 + uVar2 != (byte *)0x0) {
        iVar4 = iVar4 + *(int *)(param_1 + uVar2);
      }
    }
    param_1 = (byte *)iVar4;
    iVar4 = (int)param_1;
    if ((*(uint *)(pbVar1 + 4) >> 10 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if ((*(uint *)(pbVar1 + 4) >> 8 & 1) != 0) {
        uVar3 = F_00ce9530(param_2);
        if (pbVar1 + uVar3 != (byte *)0x0) {
          uVar2 = uVar2 + *(int *)(pbVar1 + uVar3);
        }
      }
      if (pbVar1 + uVar2 != (byte *)0x0) {
        iVar4 = (int)param_1 + (uint)pbVar1[uVar2];
      }
    }
    uVar2 = F_00ce9640(pbVar1,param_2);
    if (uVar2 != 0) {
      iVar4 = iVar4 + (uint)*(byte *)(uVar2 + 1);
    }
    uVar2 = F_00ce96e0(pbVar1,param_2);
    if (uVar2 != 0) {
      iVar4 = iVar4 + (uint)*(ushort *)(uVar2 + 2);
    }
    uVar2 = F_00ce9790(pbVar1,param_2);
    if (uVar2 != 0) {
      iVar4 = iVar4 + (uint)*(ushort *)(uVar2 + 2);
    }
    return (uint)(pbVar1 + iVar4);
  }
  return 0;
}

/* ref: FUN_00ce9920 */
uint F_00ce9920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce9920u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  
  if ((*param_1 == 0) || (*param_1 <= (byte)param_2)) {
    return 0;
  }
  uVar2 = F_00ce9530(param_3);
  if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
    uVar3 = F_00ce9530(param_3);
    if (param_1 + uVar3 != (byte *)0x0) {
      uVar2 = uVar2 + *(int *)(param_1 + uVar3);
    }
  }
  pbVar4 = (byte *)F_00ce95f0(param_1,param_3);
  if (pbVar4 != (byte *)0x0) {
    uVar2 = uVar2 + *pbVar4;
  }
  uVar3 = F_00ce9640(param_1,param_3);
  if (uVar3 != 0) {
    uVar2 = uVar2 + *(byte *)(uVar3 + 1);
  }
  uVar3 = F_00ce96e0(param_1,param_3);
  if (uVar3 != 0) {
    uVar2 = uVar2 + *(ushort *)(uVar3 + 2);
  }
  uVar3 = F_00ce9790(param_1,param_3);
  if (uVar3 != 0) {
    uVar2 = uVar2 + *(ushort *)(uVar3 + 2);
  }
  bVar1 = param_1[3];
  if (((bVar1 != 2) && (bVar1 != 4)) && (bVar1 != 0xc)) {
    return (uint)(param_1 + (uint)(byte)param_2 * 4 + uVar2);
  }
  return (uint)(param_1 + (uint)(byte)param_2 * 8 + uVar2);
}

/* ref: FUN_00ce9a00 */
unsigned int F_00ce9a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9a00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x14) = *(uint *)(in_ecx + 0x14) | 8;
    return 0;
  }
  *(uint *)(in_ecx + 0x14) = *(uint *)(in_ecx + 0x14) & 0xfffffff7;
  return 0;
}

/* ref: FUN_00ce9a20 */
uint F_00ce9a20(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce9a20u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  *(float *)(in_ecx + 0x15c) = param_2;
  *(uint *)(in_ecx + 0x160) = param_3;
  return param_3;
}

/* ref: FUN_00ce9a40 */
uint F_00ce9a40(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce9a40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x58,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce9a60 */
uint F_00ce9a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9a60u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if ((2 < (uint)param_1[3]) && ((*(byte *)(param_2 + 4) & 0x80) == 0)) {
    if ((*(byte *)(param_1 + 0x12) & 8) == 0) {
      iVar2 = param_1[1];
    }
    else {
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
      if (uVar1 != 3) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x35) & 2) == 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
        return 0;
      }
      iVar2 = param_1[0x26];
    }
    if (iVar2 != 0) {
      return *((int *)GEN_TOP((*((int *)GEN_TOP((*(ushort *)(iVar2 + 0xe) + 0x18 + iVar2))) +
                      (uint)*(ushort *)(param_2 + 6) * 4 + iVar2))) + iVar2;
    }
  }
  return 0;
}

/* ref: FUN_00ce9ad0 */
byte F_00ce9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  switch((unsigned int)(uintptr_t)(param_1 & 0xf0)) {
  case 0: ;
    return param_3 <= param_2;
  case 0x10: ;
    return param_3 < param_2;
  case 0x20: ;
    return param_2 < param_3;
  case 0x30: ;
    return param_2 <= param_3;
  case 0x40: ;
    return param_2 == param_3;
  case 0x50: ;
    return param_2 != param_3;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ce9bb0 */
byte F_00ce9bb0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xce9bb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  
  switch((unsigned int)(uintptr_t)(param_1 & 0xf0)) {
  case 0: ;
    fVar2 = (float10)param_2;
    fVar3 = (float10)param_3;
    if (!(fVar2 <= fVar3) != ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      return 1;
    }
    break;
  case 0x10: ;
    if (!((float10)param_2 <= (float10)param_3) != (GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)param_2)))
    {
      return 1;
    }
    break;
  case 0x20: ;
    fVar2 = (float10)param_2;
    fVar3 = (float10)param_3;
    if (fVar2 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar2)) && fVar3 != fVar2)) {
      return 1;
    }
    break;
  case 0x30: ;
    if ((float10)param_2 <= (float10)param_3) {
      return 1;
    }
    break;
  case 0x40: ;
    bVar1 = GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)param_2);
    if (bVar1 != (bVar1 || (float10)param_3 == (float10)param_2)) {
      return 1;
    }
    break;
  case 0x50: ;
    bVar1 = GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)param_2);
    if (bVar1 == (bVar1 || (float10)param_3 == (float10)param_2)) {
      return 1;
    }
    break;
  default: ;
    return 0;
  }
  return 0;
}

/* ref: FUN_00ce9cd0 */
uint F_00ce9cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce9cd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float10 fVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  
  puVar4 = (undefined1 *)param_2;
  if ((param_2 != 0) && (param_1 != 0)) {
    if ((param_3 != (int *)0x0) && (param_2 - 1 < 5)) {
      if (param_2 == 1) {
        puVar4 = (undefined1 *)(param_1 + 0x10);
      }
      else {
        puVar4 = (undefined1 *)(param_1 + -8 + param_2 * 0x18);
      }
      if (puVar4 != (undefined1 *)0x0) {
        switch((unsigned int)(uintptr_t)(*puVar4)) {
        case 1: ;
          uVar2 = *(uint *)(puVar4 + 4);
          param_3[0x57] = (int)gen_fl2bits((float)(float10)1);
          param_3[0x58] = uVar2;
          return uVar2;
        case 2: ;
          uVar2 = F_00cc6660(param_3,*(undefined4 *)(puVar4 + 4));
          return uVar2;
        case 3: ;
          uVar2 = ((code *)*(gen_code32 *)(*param_3 + 0x54))(param_3,*(undefined4 *)(puVar4 + 4),0);
          param_3[5] = param_3[5] | 8;
          return uVar2;
        case 5: ;
          uVar2 = ((code *)*(gen_code32 *)(*param_3 + 0x54))(param_3,*(undefined4 *)(puVar4 + 4),0);
          return uVar2;
        case 10: ;
          uVar2 = ((code *)*(gen_code32 *)(*param_3 + 0x40))(param_3,*(undefined4 *)(puVar4 + 4),0);
          return uVar2;
        case 0xc: ;
          uVar2 = *(uint *)(puVar4 + 4);
          fVar1 = (float10)*(double *)&REFG(undefined, 0x10928e8);
          uVar3 = F_00cbf660(uVar2 >> 7 & 0x7f);
          puVar4 = (undefined1 *)0x0;
          if (uVar3 != 0) {
            puVar4 = (undefined1 *)
                     F_00cccd90(uVar3 + 0x58,((float)GEN_TOF(((float10)(uVar2 & 0x7f) * fVar1))),uVar2 >> 0xe
                                 );
          }
        }
      }
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00ce9e10 */
unsigned int F_00ce9e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9e10u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00ce9e30 */
uint F_00ce9e30(unsigned int gen_a0)
{
  GEN_ENTER(0xce9e30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00c4720f(((char *)(gen_frame + 0x8)),"[Voice]\n");
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar7 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = ((char *)(gen_frame + 0x8));
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  F_00c4720f(((char *)(gen_frame + 0x8)),"UseVoice = ");
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar7 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = ((char *)(gen_frame + 0x8));
  for (uVar5 = uVar3 >> 2; iVar4 = REFG(int, 0x15d8c2c), uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  iVar6 = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  if (0 < iVar4) {
    (*(int *)(gen_frame + 0x0)) = 0;
    do {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x0)) + REFG(int, 0x15d8c34)) + 0x98))))
                        ((int *)((*(int *)(gen_frame + 0x0)) + REFG(int, 0x15d8c34)));
      if ((char)uVar3 == '\0') {
        F_00c4720f(((char *)(gen_frame + 0x8)),&REFG(undefined, 0x11304ec),iVar6);
        pcVar2 = ((char *)(gen_frame + 0x8));
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
        pcVar2 = (char *)(param_1 + -1);
        do {
          pcVar7 = pcVar2 + 1;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar7 != '\0');
        pcVar7 = ((char *)(gen_frame + 0x8));
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar2 = pcVar2 + 4;
        }
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar2 = pcVar2 + 1;
        }
      }
      iVar6 = iVar6 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x250;
      iVar4 = REFG(int, 0x15d8c2c);
    } while (iVar6 < REFG(int, 0x15d8c2c));
  }
  F_00c4720f(((char *)(gen_frame + 0x8)),"\nVoiceCount = %d/%d\n",(*(int *)(gen_frame + 0x4)),iVar4);
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar7 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = ((char *)(gen_frame + 0x8));
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_00ce9fe0 */
uint F_00ce9fe0(void)
{
  GEN_ENTER(0xce9fe0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint extraout_EAX = 0;
  
  REFG(undefined4, 0x15d8c2c) = 0;
  if (REFG(undefined4 * PTR32, 0x15d8c34) != (undefined4 *)0x0) {
    if (REFG(undefined4 * PTR32, 0x15d8c34)[-1] == 0) {
      F_00406b30(REFG(undefined4 * PTR32, 0x15d8c34) + -1);
    }
    else {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8c34))))(REFG(undefined4 * PTR32, 0x15d8c34),3);
    }
  }
  if (REFG(int, 0x15d8c38) != 0) {
    F_00406810(REFG(int, 0x15d8c38));
  }
  REFG(char, 0x15d8ca0) = REFG(char, 0x15d8c84);
  if (REFG(char, 0x15d8c84) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
  }
  uVar1 = 0;
  if (REFG(int, 0x15d8c70) != 0) {
    uVar1 = F_00406810(REFG(int, 0x15d8c70));
    REFG(int, 0x15d8c70) = 0;
  }
  REFG(undefined4, 0x15d8c74) = 0;
  if (REFG(char, 0x15d8ca0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
    uVar1 = extraout_EAX;
  }
  REFG(int, 0x15d8c38) = 0;
  REFG(undefined4 * PTR32, 0x15d8c34) = (undefined4 *)0x0;
  return uVar1;
}

/* ref: FUN_00cea080 */
uint F_00cea080(void)
{
  GEN_ENTER(0xcea080u, 0u, 0u, 0u, 0u);
  int * piVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  REFG(char, 0x15d8cf0) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8cd8));
  puVar3 = REFG(undefined4 * PTR32, 0x15d8c44);
  if (REFG(int, 0x15d8c30) < REFG(int, 0x15d8c2c)) {
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d8c38) + REFG(int, 0x15d8c30) * 4);
    *(undefined4 *)(REFG(int, 0x15d8c38) + REFG(int, 0x15d8c30) * 4) = 0;
    REFG(int, 0x15d8c30) = REFG(int, 0x15d8c30) + 1;
    ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
    if (REFG(char, 0x15d8cf0) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
    }
    return (uint)piVar1;
  }
  if (REFG(undefined4 * PTR32, 0x15d8c44) != (undefined4 *)&REFG(undefined, 0x15d8ca4)) {
    piVar1 = ((int *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8c44)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1);
    ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
    uVar2 = puVar3[1];
    *(undefined4 *)(puVar3[2] + 4) = uVar2;
    *(undefined4 *)(puVar3[1] + 8) = puVar3[2];
    REFG(char, 0x15d8ca0) = REFG(char, 0x15d8c84);
    if (REFG(char, 0x15d8c84) != '\0') {
      gen_imp_EnterCriticalSection(uVar2,&REFG(undefined, 0x15d8c88));
    }
    *puVar3 = REFG(undefined4 * PTR32, 0x15d8c74);
    REFG(undefined4 * PTR32, 0x15d8c74) = puVar3;
    if (REFG(char, 0x15d8ca0) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8c88));
    }
    if (REFG(char, 0x15d8cf0) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8cd8));
    }
    return (uint)piVar1;
  }
  if (REFG(char, 0x15d8cf0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  }
  return 0;
}

/* ref: FUN_00cea270 */
byte F_00cea270(unsigned int gen_a0)
{
  GEN_ENTER(0xcea270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  REFG(char, 0x15d8cf0) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  puVar2 = REFG(undefined4 * PTR32, 0x15d8ca8);
  if (REFG(undefined4 * PTR32, 0x15d8ca8) != (undefined4 *)&REFG(undefined, 0x15d8c3c)) {
    do {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x14))((int *)*puVar2);
      if (uVar1 == param_1) {
        if (REFG(char, 0x15d8cf0) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
        }
        return 1;
      }
      puVar2 = (undefined4 *)puVar2[1];
    } while (puVar2 != (undefined4 *)&REFG(undefined, 0x15d8c3c));
  }
  if (REFG(char, 0x15d8cf0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  }
  return 0;
}

/* ref: FUN_00cea440 */
uint F_00cea440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcea440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00cea4e0 */
uint F_00cea4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcea4e0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  uint * this;
  
  F_00ce9fe0();
  uVar1 = *param_1;
  if (0 < (int)uVar1) {
    REFG(undefined4, 0x15d8c30) = 0;
    REFG(undefined4, 0x15d8c2c) = uVar1;
    if (uVar1 == 0) {
      puVar2 = (uint *)F_00406a50(4);
    }
    else {
      (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
      (*(undefined4 *)(gen_frame + 0x8)) = 0x10;
      uVar3 = -(uint)((int)((ulonglong)uVar1 * 0x250 >> 0x20) != 0) |
              (uint)((ulonglong)uVar1 * 0x250);
      puVar2 = (uint *)F_00cc64a0(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,&(*(char * PTR32 *)(gen_frame + 0x4)));
    }
    if (puVar2 == (uint *)0x0) {
      REFG(uint * PTR32, 0x15d8c34) = (uint *)0x0;
      F_00ce9fe0();
      return 0xffffffff;
    }
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    this = puVar2;
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      F_00cf7030(this);
      this = this + 0x94;
    }
    REFG(uint * PTR32, 0x15d8c34) = puVar2;
    if (puVar2 != (uint *)0x0) {
      uVar3 = F_00cc1020(REFG(undefined4, 0x15d8c2c) * 4);
      uVar1 = REFG(undefined4, 0x15d8c2c);
      iVar4 = 0;
      puVar2 = REFG(uint * PTR32, 0x15d8c34);
      REFG(undefined4, 0x15d8c38) = uVar3;
      if (0 < (int)REFG(undefined4, 0x15d8c2c)) {
        do {
          *(uint * PTR32 *)(uVar3 + iVar4 * 4) = puVar2;
          iVar4 = iVar4 + 1;
          puVar2 = puVar2 + 0x94;
        } while (iVar4 < (int)uVar1);
      }
      (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
      (*(undefined4 *)(gen_frame + 0x8)) = 0x10;
      F_00cc6930(&REFG(undefined4, 0x15d8c70),0x34,uVar1,&(*(char * PTR32 *)(gen_frame + 0x4)),0x10,1);
      F_00c48350(&REFG(undefined, 0x15d8ca4),0,0x34);
      F_00c48350(&REFG(undefined, 0x15d8c3c),0,0x34);
      REFG(undefined * PTR32, 0x15d8ca8) = &REFG(undefined, 0x15d8c3c);
      REFG(undefined * PTR32, 0x15d8c44) = &REFG(undefined, 0x15d8ca4);
      return 0;
    }
  }
  F_00ce9fe0();
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf0 */
uint F_00cea670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcea670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pVVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) == 0) {
    F_00cf7ed0(this);
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      F_00406810(this);
    }
  }
  else {
    pVVar1 = this + -4;
    iVar2 = *(int *)pVVar1;
    this_00 = this + iVar2 * 0x250;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = this_00 + -0x250;
      F_00cf7ed0(this_00);
    }
    this = pVVar1;
    if (((param_1 & 1) != 0) && (pVVar1 != (undefined *)0x0)) {
      F_00406810(pVVar1);
      return (uint)pVVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00cea700 */
uint F_00cea700(unsigned int gen_a0)
{
  GEN_ENTER(0xcea700u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  *in_ecx = (float)(float10)0;
  F_00cccb10(in_ecx + 1,(float)(float10)0);
  F_00cccb10(in_ecx + 10,(float)(float10)0);
  in_ecx[0x13] = (float)(float10)0;
  in_ecx[0x14] = 0.0;
  return (uint)in_ecx;
}

/* ref: FUN_00cea740 */
uint F_00cea740(unsigned int gen_a0)
{
  GEN_ENTER(0xcea740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  *(undefined4 *)((int)this + 0x50) = 0;
  (*pcVar1)((undefined4)gen_fl2bits((float)(float10)0));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x28) + 4))))((undefined4)gen_fl2bits((float)(float10)0));
  *(undefined1 *)((int)this + 0x26) = 1;
  *(float *)((int)this + 0x4c) = (float)(float10)0;
  *(float *)this = (float)(float10)0;
  return uVar2;
}

/* ref: FUN_00cea9b0 */
byte F_00cea9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcea9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x50) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4);
    if ((char)uVar1 == '\0') {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x28) + 0xc))))((int)this + 0x28);
      if ((char)uVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_00ceaa80 */
float10 F_00ceaa80(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xceaa80u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (param_3 != 0) {
    F_00cccd90(param_1 + 4,param_2,param_3);
    return extraout_ST0;
  }
  fVar1 = F_00cccbd0(param_1 + 4,param_2);
  return fVar1;
}

/* ref: FUN_00ceaab0 */
unsigned int F_00ceaab0(unsigned int gen_a0)
{
  GEN_ENTER(0xceaab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))))((int)this + 4);
  return 0;
}

/* ref: FUN_00ceaac0 */
float10 F_00ceaac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xceaac0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float10 fVar1;
  float10 extraout_ST0;
  
  fVar1 = (float10)(int)param_2;
  if (param_3 != 0) {
    if ((int)param_2 < 0) {
      fVar1 = fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    F_00cccd90(param_1 + 0x28,(float)fVar1,param_3);
    return extraout_ST0;
  }
  if ((int)param_2 < 0) {
    fVar1 = fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(param_1 + 0x4c) = (float)((float10)1 / (float10)(float)fVar1);
  fVar1 = F_00cccbd0(param_1 + 0x28,(float)fVar1);
  return fVar1;
}

/* ref: FUN_00ceab50 */
unsigned int F_00ceab50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xceab50u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  float10 fVar2;
  int local_c;
  
  if (param_1[0x14] != 0.0) {
    fVar1 = (float10)(int)param_2;
    if ((int)param_2 < 0) {
      fVar1 = fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar1 = (float10)(float)(fVar1 * (float10)param_1[0x13] + (float10)*param_1);
    local_c = (int)(longlong)TRUNC(fVar1);
    fVar2 = (float10)local_c;
    if (local_c < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *param_1 = (float)(fVar1 - fVar2);
  }
  return 0;
}

/* ref: FUN_00ceabb0 */
float10 F_00ceabb0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xceabb0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  int param_2 = (int)gen_a1;
  double dVar1;
  
  dVar1 = F_00c52a5e((double)param_1,param_2);
  return (float10)(float)dVar1;
}

/* ref: FUN_00ceabd0 */
float10 F_00ceabd0(float gen_a0)
{
  GEN_ENTER(0xceabd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c4d24c((float10)param_1);
  return (float10)(float)fVar1;
}

/* ref: FUN_00ceabf0 */
float10 F_00ceabf0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xceabf0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  int param_2 = (int)gen_a1;
  double dVar1;
  
  dVar1 = F_00c52a5e((double)param_1,param_2);
  return (float10)(float)dVar1;
}

/* ref: FUN_00ceac10 */
float10 F_00ceac10(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xceac10u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float in_xmm2 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00c4d440(in_xmm2,(float10)param_2);
  return (float10)(float)fVar1;
}

/* ref: FUN_00ceac70 */
unsigned int F_00ceac70(void)
{
  GEN_ENTER(0xceac70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = (iVar2 << 0x18) >> 0x1f & 0x4c11db7U ^ iVar2 << 0x19;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    (&REFG(undefined4, 0x15d8df8))[iVar2] = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return 0;
}

/* ref: FUN_00ceadd0 */
unsigned int F_00ceadd0(void)
{
  GEN_ENTER(0xceadd0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = (uVar2 >> 1 ^ uVar2 * 2) & 0x55555555 ^ uVar2 * 2;
    uVar1 = (uVar1 >> 2 ^ uVar1 * 4) & 0x33333333 ^ uVar1 * 4;
    (&REFG(undefined1, 0x15d8cf8))[uVar2] = (byte)(uVar1 >> 4) & 0xf ^ (byte)(uVar1 << 4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return 0;
}

/* ref: FUN_00ceae50 */
unsigned int F_00ceae50(float gen_a0)
{
  GEN_ENTER(0xceae50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00ceae60 */
float10 F_00ceae60(unsigned int gen_a0)
{
  GEN_ENTER(0xceae60u, gen_a0, 0u, 0u, 0u);
  uint in_edx = (uint)gen_a0;
  float10 fVar1;
  double dVar2;
  
  if ((int)in_edx < 0) {
    fVar1 = -(float10)(in_edx & 0x1fffff);
  }
  else {
    fVar1 = (float10)(in_edx & 0x1fffff);
  }
  dVar2 = F_00c52a5e((double)(float)fVar1,(in_edx >> 0x15 & 0x3ff) - 0x314);
  return (float10)(float)dVar2;
}

/* ref: FUN_00ceaed0 */
uint F_00ceaed0(unsigned int gen_a0)
{
  GEN_ENTER(0xceaed0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar1 + 4;
  *(undefined4 *)(param_1 + 0x2c + iVar1 * 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30 + iVar1 * 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34 + iVar1 * 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38 + iVar1 * 4) = 0xffffffff;
  return iVar1 + 0x80000000;
}

/* ref: FUN_00ceaf00 */
uint F_00ceaf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xceaf00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 <= *(int *)(param_1 + 0x28) - 4U) {
    return (uint)(*(int *)(param_1 + 0x2c + param_2 * 4) == -1);
  }
  return 1;
}

/* ref: FUN_00ceaf30 */
unsigned int F_00ceaf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xceaf30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  uint in_ecx = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_8;
  
  iVar6 = in_ecx * 0x4000000 + param_4;
  if (8 < in_ecx) {
    iVar3 = *(int *)(in_eax + 0x28);
    uVar5 = param_3 & 0xff;
    if ((iVar3 - 4U < uVar5) || (*(int *)(in_eax + 0x2c + uVar5 * 4) == -1)) {
      *(int *)(in_eax + 0x28) = iVar3 + 4;
      *(undefined4 *)(in_eax + 0x2c + iVar3 * 4) = 0xffffffff;
      *(undefined4 *)(in_eax + 0x30 + iVar3 * 4) = 0xffffffff;
      *(undefined4 *)(in_eax + 0x34 + iVar3 * 4) = 0xffffffff;
      *(undefined4 *)(in_eax + 0x38 + iVar3 * 4) = 0xffffffff;
      *(int *)(in_eax + 0x2c + uVar5 * 4) = iVar3 + ((int)0x80000000);
    }
    iVar3 = in_ecx - 8;
    iVar7 = in_eax + 0x2c + *(int *)(in_eax + 0x2c + uVar5 * 4) * 4;
    uVar5 = param_3 >> 8;
    if (2 < iVar3) {
      local_8 = (in_ecx - 0xb >> 1) + 1;
      iVar3 = iVar3 + local_8 * -2;
      do {
        uVar8 = uVar5 & 3;
        iVar1 = *(int *)(in_eax + 0x28);
        uVar4 = (int)(((uVar8 * 4 + -0x2c) - in_eax) + iVar7) >> 2;
        if ((iVar1 - 4U < uVar4) || (*(int *)(in_eax + 0x2c + uVar4 * 4) == -1)) {
          *(int *)(in_eax + 0x28) = iVar1 + 4;
          *(undefined4 *)(in_eax + 0x2c + iVar1 * 4) = 0xffffffff;
          *(undefined4 *)(in_eax + 0x30 + iVar1 * 4) = 0xffffffff;
          *(undefined4 *)(in_eax + 0x34 + iVar1 * 4) = 0xffffffff;
          *(undefined4 *)(in_eax + 0x38 + iVar1 * 4) = 0xffffffff;
          *(int *)(iVar7 + uVar8 * 4) = iVar1 + ((int)0x80000000);
        }
        iVar7 = in_eax + 0x2c + *(int *)(iVar7 + uVar8 * 4) * 4;
        uVar5 = uVar5 >> 2;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    do {
      *(int *)(iVar7 + uVar5 * 4) = iVar6;
      uVar5 = uVar5 + (1 << ((byte)iVar3 & 0x1f));
    } while (uVar5 < 4);
    return 0;
  }
  iVar3 = 1 << ((byte)in_ecx & 0x1f);
  piVar2 = (int *)(in_eax + 0x2c + param_3 * 4);
  uVar5 = param_3;
  do {
    *piVar2 = iVar6;
    uVar5 = uVar5 + iVar3;
    piVar2 = piVar2 + iVar3;
  } while (uVar5 < 0x100);
  return 0;
}

/* ref: FUN_00ceb070 */
uint F_00ceb070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xceb070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_00c48350(((uint *)(gen_frame + 0x8)),0,0x80);
  iVar13 = 0;
  if (0 < param_2) {
    do {
      if (*(char *)((int)this + iVar13) != -1) break;
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_2);
  }
  if (iVar13 != param_2) {
    *(undefined4 *)(param_1 + 0x28) = 0x100;
    F_00c48350((undefined *)(param_1 + 0x2c),0xff,0x400);
    F_00ceaf30(param_1,(uint)*(byte *)((int)this + iVar13),0,iVar13);
    bVar10 = *(byte *)((int)this + iVar13);
    if (bVar10 != 0) {
      bVar9 = 0x1f;
      iVar12 = 1;
      do {
        bVar6 = bVar9 & 0x1f;
        iVar7 = iVar12 + 1;
        bVar9 = bVar9 - 1;
        ((uint *)(gen_frame + 0x8))[(int)(iVar12)] = 1 << bVar6;
        iVar12 = iVar7;
      } while (iVar7 <= (int)(uint)bVar10);
    }
    while (iVar13 = iVar13 + 1, iVar13 < param_2) {
      uVar11 = (uint)*(byte *)((int)this + iVar13);
      if (uVar11 != 0xff) {
        bVar15 = uVar11 == 0;
        uVar14 = uVar11;
        if (!bVar15) {
          do {
            if (((uint *)(gen_frame + 0x8))[(int)(uVar14)] != 0) break;
            uVar14 = uVar14 - 1;
          } while (0 < (int)uVar14);
          bVar15 = uVar14 == 0;
        }
        if (bVar15) {
          F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
          return 0;
        }
        uVar5 = ((uint *)(gen_frame + 0x8))[(int)(uVar14)];
        uVar1 = (&REFG(undefined1, 0x15d8cf8))[uVar5 >> 8 & 0xff];
        uVar2 = (&REFG(undefined1, 0x15d8cf8))[uVar5 & 0xff];
        uVar3 = (&REFG(undefined1, 0x15d8cf8))[uVar5 >> 0x10 & 0xff];
        uVar4 = (&REFG(undefined1, 0x15d8cf8))[uVar5 >> 0x18];
        ((uint *)(gen_frame + 0x8))[(int)(uVar14)] = 0;
        F_00ceaf30(param_1,uVar11,CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4),iVar13);
        uVar11 = (uint)*(byte *)((int)this + iVar13);
        if ((int)uVar14 < (int)uVar11) {
          iVar12 = 0x20 - uVar11;
          do {
            bVar10 = (byte)iVar12;
            uVar8 = uVar11 - 1;
            iVar12 = iVar12 + 1;
            ((uint *)(gen_frame + 0x8))[(int)(uVar11)] = (1 << (bVar10 & 0x1f)) + uVar5;
            uVar11 = uVar8;
          } while ((int)uVar14 < (int)uVar8);
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 1;
}

/* ref: FUN_00ceb260 */
uint F_00ceb260(unsigned int gen_a0)
{
  GEN_ENTER(0xceb260u, gen_a0, 0u, 0u, 0u);
  byte * in_edx = (byte *)(uintptr_t)gen_a0;
  int iVar1;
  byte * pbVar2;
  uint uVar3;
  
  uVar3 = 6;
  pbVar2 = &REFG(undefined1, 0x134fbc0);
  if (*(int *)in_edx == *(int *)&REFG(undefined1, 0x134fbc0)) {
    uVar3 = 2;
    pbVar2 = &REFG(undefined1, 0x134fbc4);
    in_edx = in_edx + 4;
  }
  iVar1 = (uint)*in_edx - (uint)*pbVar2;
  if ((iVar1 == 0) && (iVar1 = (uint)in_edx[1] - (uint)pbVar2[1], iVar1 == 0)) {
    if (uVar3 < 3) {
      return 1;
    }
    iVar1 = (uint)in_edx[2] - (uint)pbVar2[2];
    if (iVar1 == 0) {
      iVar1 = (uint)in_edx[3] - (uint)pbVar2[3];
    }
  }
  return (uint)((iVar1 >> 0x1f | 1U) == 0);
}

/* ref: FUN_00ceb4d0 */
unsigned int F_00ceb4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xceb4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = 0xffffffff;
  iVar1 = 0;
  local_8 = 0x10000;
  if (0 < param_2) {
    do {
      uVar2 = *(ushort *)(in_esi + iVar1 * 2);
      uVar3 = (uint)uVar2;
      if (((int)uVar4 < (int)uVar3) && (uVar2 < *(ushort *)(in_esi + param_2 * 2))) {
        *param_3 = iVar1;
        uVar2 = *(ushort *)(in_esi + iVar1 * 2);
        uVar3 = (uint)uVar2;
        uVar4 = uVar3;
      }
      if ((uVar3 < local_8) && (*(ushort *)(in_esi + param_2 * 2) < uVar2)) {
        *param_4 = iVar1;
        local_8 = (uint)*(ushort *)(in_esi + iVar1 * 2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00ceb540 */
uint F_00ceb540(unsigned int gen_a0)
{
  GEN_ENTER(0xceb540u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  uint uVar1;
  
  uVar1 = (uint)(0x200000 / (ulonglong)(*(uint *)&gen_args[0]));
  if (((*(uint *)&gen_args[0]) & (*(uint *)&gen_args[0]) - 1) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00ceb570 */
uint F_00ceb570(unsigned int gen_a0)
{
  GEN_ENTER(0xceb570u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 * puVar5;
  
  puVar5 = *(undefined1 * PTR32 *)(in_eax + 0x10);
  uVar1 = *puVar5;
  *(undefined1 * PTR32 *)(in_eax + 0x10) = puVar5 + 1;
  uVar2 = puVar5[1];
  *(undefined1 * PTR32 *)(in_eax + 0x10) = puVar5 + 2;
  uVar3 = puVar5[2];
  *(undefined1 * PTR32 *)(in_eax + 0x10) = puVar5 + 3;
  uVar4 = puVar5[3];
  *(undefined1 * PTR32 *)(in_eax + 0x10) = puVar5 + 4;
  return CONCAT31(CONCAT21(CONCAT11(uVar4,uVar3),uVar2),uVar1);
}

/* ref: FUN_00ceb5c0 */
uint F_00ceb5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xceb5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_edx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_edi = (int)gen_a2;
  if (*(uint *)(in_esi + 0x18) < (uint)(*(int *)(in_esi + 0x10) + in_edi)) {
    *(undefined4 *)(in_esi + 0x34) = 1;
    return 0;
  }
  F_00c46aa0(in_edx,*(int *)(in_esi + 0x10),in_edi);
  *(int *)(in_esi + 0x10) = *(int *)(in_esi + 0x10) + in_edi;
  return 1;
}

/* ref: FUN_00ceb650 */
uint F_00ceb650(unsigned int gen_a0)
{
  GEN_ENTER(0xceb650u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  char * pcVar10;
  uint uVar11;
  int iVar12;
  
  pcVar10 = *(char * PTR32 *)(in_esi + 0x10);
  cVar1 = *pcVar10;
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 1;
  if (cVar1 != '\0') {
    *(undefined4 *)(in_esi + 0x38) = 0x1f;
    if (*(int *)(in_esi + 0x34) == 0) {
      *(undefined4 *)(in_esi + 0x38) = 0x1f;
    }
    return 0;
  }
  *(char *)(in_esi + 0x533) = pcVar10[1];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 2;
  cVar1 = pcVar10[2];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 3;
  cVar2 = pcVar10[3];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 4;
  cVar3 = pcVar10[4];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 5;
  cVar4 = pcVar10[5];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 6;
  iVar12 = CONCAT31(CONCAT21(CONCAT11(cVar4,cVar3),cVar2),cVar1);
  cVar1 = pcVar10[6];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 7;
  cVar2 = pcVar10[7];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 8;
  cVar3 = pcVar10[8];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 9;
  cVar4 = pcVar10[9];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 0xe;
  cVar5 = pcVar10[0xe];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 0xf;
  cVar6 = pcVar10[0xf];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 0x10;
  cVar7 = pcVar10[0x10];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 0x11;
  cVar8 = pcVar10[0x11];
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10 + 0x16;
  *(uint *)(in_esi + 0x42c) = CONCAT31(CONCAT21(CONCAT11(cVar8,cVar7),cVar6),cVar5);
  uVar11 = (uint)(byte)pcVar10[0x16];
  pcVar10 = pcVar10 + 0x17;
  *(char * PTR32 *)(in_esi + 0x10) = pcVar10;
  *(uint *)(in_esi + 0x430) = uVar11;
  if (*(int *)(in_esi + 0x34) == 0) {
    if (pcVar10 + uVar11 <= *(char * PTR32 *)(in_esi + 0x18)) {
      F_00c46aa0(in_esi + 0x434,pcVar10,uVar11);
      *(int *)(in_esi + 0x10) = *(int *)(in_esi + 0x10) + uVar11;
      *(undefined4 *)(in_esi + 0x550) = 0xfffffffe;
      if ((iVar12 != -1) || ((int)CONCAT31(CONCAT21(CONCAT11(cVar4,cVar3),cVar2),cVar1) != -1)) {
        iVar9 = *(int *)(in_esi + 0x430);
        do {
          iVar9 = iVar9 + -1;
          if (iVar9 < 0) goto LAB_00ceb7c4;
        } while (*(char *)(in_esi + 0x434 + iVar9) == -1);
        if (-1 < iVar9) {
          *(int *)(in_esi + 0x550) = iVar9;
          *(int *)(in_esi + 0x554) = iVar12;
        }
      }
LAB_00ceb7c4: ;
      *(undefined4 *)(in_esi + 0x538) = 0;
      return 1;
    }
    *(undefined4 *)(in_esi + 0x34) = 1;
  }
  *(undefined4 *)(in_esi + 0x38) = 10;
  return 0;
}

/* ref: FUN_00ceb7e0 */
uint F_00ceb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xceb7e0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = *(char * PTR32 *)(in_eax + 0x10);
  cVar1 = *pcVar2;
  *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 1;
  if (cVar1 == 'O') {
    cVar1 = pcVar2[1];
    *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 2;
    if (cVar1 == 'g') {
      cVar1 = pcVar2[2];
      *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 3;
      if ((cVar1 == 'g') &&
         (cVar1 = pcVar2[3], *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 4, cVar1 == 'S')) {
        uVar3 = F_00ceb650(in_eax);
        return uVar3;
      }
    }
  }
  *(undefined4 *)(in_eax + 0x38) = 0x1e;
  if (*(int *)(in_eax + 0x34) == 0) {
    *(undefined4 *)(in_eax + 0x38) = 0x1e;
  }
  return 0;
}

/* ref: FUN_00ceb830 */
uint F_00ceb830(unsigned int gen_a0)
{
  GEN_ENTER(0xceb830u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(in_eax + 0x538);
  while( true ) {
    if (iVar2 != -1) {
      *(undefined4 *)(in_eax + 0x53c) = 0;
      *(undefined4 *)(in_eax + 0x548) = 0;
      *(undefined4 *)(in_eax + 0x544) = 0;
      *(undefined1 *)(in_eax + 0x534) = 0;
      return 1;
    }
    pcVar3 = *(char * PTR32 *)(in_eax + 0x10);
    cVar1 = *pcVar3;
    *(char * PTR32 *)(in_eax + 0x10) = pcVar3 + 1;
    if (cVar1 != 'O') break;
    cVar1 = pcVar3[1];
    *(char * PTR32 *)(in_eax + 0x10) = pcVar3 + 2;
    if (cVar1 != 'g') break;
    cVar1 = pcVar3[2];
    *(char * PTR32 *)(in_eax + 0x10) = pcVar3 + 3;
    if ((cVar1 != 'g') || (cVar1 = pcVar3[3], *(char * PTR32 *)(in_eax + 0x10) = pcVar3 + 4, cVar1 != 'S'))
    break;
    uVar4 = F_00ceb650(in_eax);
    if (uVar4 == 0) {
      return 0;
    }
    if ((*(byte *)(in_eax + 0x533) & 1) != 0) {
      uVar5 = 0x20;
      goto LAB_00ceb8af;
    }
    iVar2 = *(int *)(in_eax + 0x538);
  }
  uVar5 = 0x1e;
LAB_00ceb8af: ;
  *(undefined4 *)(in_eax + 0x38) = uVar5;
  if (*(int *)(in_eax + 0x34) == 0) {
    *(undefined4 *)(in_eax + 0x38) = uVar5;
  }
  return 0;
}

/* ref: FUN_00ceb8d0 */
uint F_00ceb8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xceb8d0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  if (*(int *)(in_eax + 0x538) != -1) {
LAB_00ceb954: ;
    uVar3 = F_00ceb830(in_eax);
    return uVar3;
  }
  pcVar2 = *(char * PTR32 *)(in_eax + 0x10);
  cVar1 = *pcVar2;
  *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 1;
  if (*(int *)(in_eax + 0x34) == 0) {
    if (cVar1 == 'O') {
      cVar1 = pcVar2[1];
      *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 2;
      if (cVar1 == 'g') {
        cVar1 = pcVar2[2];
        *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 3;
        if ((cVar1 == 'g') &&
           (cVar1 = pcVar2[3], *(char * PTR32 *)(in_eax + 0x10) = pcVar2 + 4, cVar1 == 'S')) {
          uVar3 = F_00ceb650(in_eax);
          if (uVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(in_eax + 0x533) & 1) != 0) {
            *(undefined4 *)(in_eax + 0x53c) = 0;
            *(undefined1 *)(in_eax + 0x534) = 0;
            *(undefined4 *)(in_eax + 0x38) = 0x20;
            if (*(int *)(in_eax + 0x34) != 0) {
              return 0;
            }
            *(undefined4 *)(in_eax + 0x38) = 0x20;
            return 0;
          }
          goto LAB_00ceb954;
        }
      }
    }
    *(undefined4 *)(in_eax + 0x38) = 0x1e;
  }
  return 0;
}

/* ref: FUN_00ceb960 */
uint F_00ceb960(unsigned int gen_a0)
{
  GEN_ENTER(0xceb960u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(in_esi + 0x53c) != 0) {
    return 0;
  }
  if (*(int *)(in_esi + 0x538) == -1) {
    *(int *)(in_esi + 0x540) = *(int *)(in_esi + 0x430) + -1;
    uVar3 = F_00ceb7e0(in_esi);
    if (uVar3 == 0) {
      *(undefined4 *)(in_esi + 0x53c) = 1;
      return 0;
    }
    if ((*(byte *)(in_esi + 0x533) & 1) == 0) {
      *(undefined4 *)(in_esi + 0x38) = 0x20;
      if (*(int *)(in_esi + 0x34) == 0) {
        *(undefined4 *)(in_esi + 0x38) = 0x20;
      }
      return 0;
    }
  }
  iVar2 = *(int *)(in_esi + 0x538);
  bVar1 = *(byte *)(iVar2 + 0x434 + in_esi);
  *(int *)(in_esi + 0x538) = iVar2 + 1;
  if (bVar1 < 0xff) {
    *(undefined4 *)(in_esi + 0x53c) = 1;
    *(int *)(in_esi + 0x540) = iVar2;
  }
  if (*(int *)(in_esi + 0x430) <= iVar2 + 1) {
    *(undefined4 *)(in_esi + 0x538) = 0xffffffff;
  }
  *(byte *)(in_esi + 0x534) = bVar1;
  return (uint)bVar1;
}

/* ref: FUN_00ceba40 */
uint F_00ceba40(unsigned int gen_a0)
{
  GEN_ENTER(0xceba40u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)(in_eax + 0x534) == '\0') {
    if (*(int *)(in_eax + 0x53c) == 0) {
      uVar2 = F_00ceb960(in_eax);
      if (uVar2 != 0) goto LAB_00ceba63;
    }
    uVar2 = 0xffffffff;
  }
  else {
LAB_00ceba63: ;
    *(char *)(in_eax + 0x534) = *(char *)(in_eax + 0x534) + -1;
    bVar1 = **(byte * PTR32 *)(in_eax + 0x10);
    *(byte * PTR32 *)(in_eax + 0x10) = *(byte * PTR32 *)(in_eax + 0x10) + 1;
    uVar2 = (uint)bVar1;
  }
  *(undefined4 *)(in_eax + 0x548) = 0;
  *(undefined4 *)(in_eax + 0x544) = 0;
  return uVar2;
}

/* ref: FUN_00ceba90 */
uint F_00ceba90(unsigned int gen_a0)
{
  GEN_ENTER(0xceba90u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = in_eax;
  do {
    if (*(char *)(in_eax + 0x534) == '\0') {
      if (*(int *)(in_eax + 0x53c) != 0) {
        return uVar2;
      }
      uVar2 = F_00ceb960(in_eax);
      if (uVar2 == 0) {
        return 0;
      }
    }
    *(char *)(in_eax + 0x534) = *(char *)(in_eax + 0x534) + -1;
    bVar1 = **(byte * PTR32 *)(in_eax + 0x10);
    *(byte * PTR32 *)(in_eax + 0x10) = *(byte * PTR32 *)(in_eax + 0x10) + 1;
    uVar2 = (uint)bVar1;
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
  } while( true );
}

/* ref: FUN_00cebad0 */
uint F_00cebad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcebad0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x548);
  if (iVar2 < 0) {
    return 0;
  }
  if (iVar2 < param_2) {
    if (0x18 < param_2) {
      uVar3 = F_00cebad0(param_1,0x18);
      uVar4 = F_00cebad0(param_1,param_2 + -0x18);
      return uVar4 << 0x18 | uVar3;
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x544) = 0;
    }
    do {
      if ((*(char *)(param_1 + 0x534) == '\0') &&
         ((*(int *)(param_1 + 0x53c) != 0 || (uVar3 = F_00ceb960(param_1), uVar3 == 0)))) {
LAB_00cebb9e: ;
        *(undefined4 *)(param_1 + 0x548) = 0xffffffff;
        return 0;
      }
      *(char *)(param_1 + 0x534) = *(char *)(param_1 + 0x534) + -1;
      bVar1 = **(byte * PTR32 *)(param_1 + 0x10);
      *(byte * PTR32 *)(param_1 + 0x10) = *(byte * PTR32 *)(param_1 + 0x10) + 1;
      uVar3 = (uint)bVar1;
      if (uVar3 == 0xffffffff) goto LAB_00cebb9e;
      iVar2 = *(int *)(param_1 + 0x548);
      iVar5 = iVar2 + 8;
      *(int *)(param_1 + 0x548) = iVar5;
      *(uint *)(param_1 + 0x544) = *(uint *)(param_1 + 0x544) | uVar3 << ((byte)iVar2 & 0x1f);
    } while (iVar5 < param_2);
  }
  if (*(int *)(param_1 + 0x548) < 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x544);
  *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) - param_2;
  *(uint *)(param_1 + 0x544) = uVar3 >> ((byte)param_2 & 0x1f);
  return (1 << ((byte)param_2 & 0x1f)) - 1U & uVar3;
}

/* ref: FUN_00cebbb0 */
uint F_00cebbb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcebbb0u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = in_eax;
  do {
    if (*(char *)(in_eax + 0x534) == '\0') {
      if (*(int *)(in_eax + 0x53c) != 0) {
        return uVar2;
      }
      uVar2 = F_00ceb960(in_eax);
      if (uVar2 == 0) {
        return 0;
      }
    }
    *(char *)(in_eax + 0x534) = *(char *)(in_eax + 0x534) + -1;
    bVar1 = **(byte * PTR32 *)(in_eax + 0x10);
    *(byte * PTR32 *)(in_eax + 0x10) = *(byte * PTR32 *)(in_eax + 0x10) + 1;
    uVar2 = (uint)bVar1;
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    *(uint *)(in_eax + 0x544) =
         *(uint *)(in_eax + 0x544) | uVar2 << ((byte)*(int *)(in_eax + 0x548) & 0x1f);
    uVar2 = *(int *)(in_eax + 0x548) + 8;
    *(uint *)(in_eax + 0x548) = uVar2;
  } while ((int)uVar2 < 0x19);
  return uVar2;
}

/* ref: FUN_00cebc10 */
uint F_00cebc10(unsigned int gen_a0)
{
  GEN_ENTER(0xcebc10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  if (param_1 != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cebc20 */
uint F_00cebc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcebc20u, gen_a0, gen_a1, 0u, 0u);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  if (*(char *)(param_2 + 0x25) != '\0') {
    if (*(int *)(in_edi + 0x548) < 8) {
      F_00cebbb0(in_edi);
    }
    uVar3 = *(uint *)(in_edi + 0x544);
    uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar3 & 0xff) * 4)));
    if ((int)uVar4 < 0) {
      if (*(int *)(in_edi + 0x548) < 0x19) {
        F_00cebbb0(in_edi);
      }
      uVar3 = *(uint *)(in_edi + 0x544);
      uVar2 = uVar3 >> 8;
      do {
        uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar2 & 3) + 0x80000000 + uVar4) * 4)));
        uVar2 = uVar2 >> 2;
      } while ((int)uVar4 < 0);
    }
    piVar1 = (int *)(in_edi + 0x548);
    *piVar1 = *piVar1 - ((int)uVar4 >> 0x1a);
    *(uint *)(in_edi + 0x544) = uVar3 >> ((byte)((int)uVar4 >> 0x1a) & 0x1f);
    if (*piVar1 < 0) {
      *(undefined4 *)(in_edi + 0x548) = 0;
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = uVar4 & 0x3ffffff;
      if (uVar4 != 0xffffffff) {
        return uVar4;
      }
    }
    if ((*(char *)(in_edi + 0x534) == '\0') && (*(int *)(in_edi + 0x53c) != 0)) {
      return 0xffffffff;
    }
  }
  *(undefined4 *)(in_edi + 0x38) = 0x15;
  if (*(int *)(in_edi + 0x34) == 0) {
    *(undefined4 *)(in_edi + 0x38) = 0x15;
  }
  return uVar4;
}

/* ref: FUN_00cebd00 */
uint F_00cebd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcebd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * piVar1;
  float * pfVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  float local_8;
  
  if (*(char *)(in_esi + 0x25) == '\0') {
    *(undefined4 *)(param_2 + 0x38) = 0x15;
    if (*(int *)(param_2 + 0x34) != 0) {
      return 0;
    }
    *(undefined4 *)(param_2 + 0x38) = 0x15;
    return 0;
  }
  if (*(int *)(param_2 + 0x548) < 8) {
    F_00cebbb0(param_2);
  }
  uVar7 = *(uint *)(param_2 + 0x544);
  uVar9 = *((uint *)GEN_TOP((in_esi + 0x2c + (uVar7 & 0xff) * 4)));
  if ((int)uVar9 < 0) {
    if (*(int *)(param_2 + 0x548) < 0x19) {
      F_00cebbb0(param_2);
    }
    uVar7 = *(uint *)(param_2 + 0x544);
    uVar3 = uVar7 >> 8;
    do {
      uVar9 = *((uint *)GEN_TOP((in_esi + 0x2c + ((uVar3 & 3) + 0x80000000 + uVar9) * 4)));
      uVar3 = uVar3 >> 2;
    } while ((int)uVar9 < 0);
  }
  piVar1 = (int *)(param_2 + 0x548);
  *piVar1 = *piVar1 - ((int)uVar9 >> 0x1a);
  *(uint *)(param_2 + 0x544) = uVar7 >> ((byte)((int)uVar9 >> 0x1a) & 0x1f);
  if (*piVar1 < 0) {
    *(undefined4 *)(param_2 + 0x548) = 0;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = uVar9 & 0x3ffffff;
    if (uVar9 != 0xffffffff) goto LAB_00cebdd9;
  }
  if ((*(char *)(param_2 + 0x534) == '\0') && (*(int *)(param_2 + 0x53c) != 0)) {
    return 0;
  }
  *(undefined4 *)(param_2 + 0x38) = 0x15;
  if (*(int *)(param_2 + 0x34) == 0) {
    *(undefined4 *)(param_2 + 0x38) = 0x15;
  }
LAB_00cebdd9: ;
  if ((int)uVar9 < 0) {
    return 0;
  }
  iVar4 = *(int *)(in_esi + 8);
  if (iVar4 < param_4) {
    param_4 = iVar4;
  }
  iVar4 = iVar4 * uVar9;
  iVar6 = 0;
  if (*(char *)(in_esi + 0x26) == '\0') {
    fVar11 = (float10)0;
    if (3 < param_4) {
      iVar8 = iVar4 * 4;
      iVar10 = (param_4 - 4U >> 2) + 1;
      iVar6 = iVar10 * 4;
      pfVar5 = (float *)(param_3 + 8);
      do {
        pfVar2 = ((float *)GEN_TOP((*(int *)(in_esi + 4) + iVar8)));
        iVar8 = iVar8 + 0x10;
        iVar10 = iVar10 + -1;
        pfVar5[-2] = ((float)GEN_TOF((((float10)*pfVar2 + fVar11) + (float10)pfVar5[-2])));
        pfVar5[-1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) + -0xc + iVar8))) + fVar11) +
                            (float10)pfVar5[-1])));
        *pfVar5 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) + -8 + iVar8))) + fVar11) +
                         (float10)*pfVar5)));
        pfVar5[1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) + -4 + iVar8))) + fVar11) +
                           (float10)pfVar5[1])));
        pfVar5 = pfVar5 + 4;
      } while (iVar10 != 0);
    }
    if (iVar6 < param_4) {
      iVar4 = (iVar4 + iVar6) * 4;
      do {
        pfVar5 = ((float *)GEN_TOP((iVar4 + *(int *)(in_esi + 4))));
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
        *(float *)(param_3 + -4 + iVar6 * 4) =
             ((float)GEN_TOF((((float10)*pfVar5 + fVar11) + (float10)*(float *)(param_3 + -4 + iVar6 * 4))));
      } while (iVar6 < param_4);
    }
  }
  else {
    local_8 = (float)(float10)0;
    if (3 < param_4) {
      iVar8 = iVar4 * 4;
      iVar10 = (param_4 - 4U >> 2) + 1;
      iVar6 = iVar10 * 4;
      pfVar5 = (float *)(param_3 + 8);
      do {
        pfVar2 = ((float *)GEN_TOP((*(int *)(in_esi + 4) + iVar8)));
        iVar8 = iVar8 + 0x10;
        iVar10 = iVar10 + -1;
        fVar11 = (float10)(float)((float10)*pfVar2 + (float10)local_8);
        pfVar5[-2] = (float)(fVar11 + (float10)pfVar5[-2]);
        fVar11 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)*(float *)(in_esi + 0x1c)))) +
                                 (float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) + -0xc + iVar8))))));
        pfVar5[-1] = (float)(fVar11 + (float10)pfVar5[-1]);
        fVar11 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)*(float *)(in_esi + 0x1c)))) +
                                 (float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) + -8 + iVar8))))));
        *pfVar5 = (float)(fVar11 + (float10)*pfVar5);
        fVar11 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)*(float *)(in_esi + 0x1c)))) +
                                 (float10)*((float *)GEN_TOP((*(int *)(in_esi + 4) + -4 + iVar8))))));
        pfVar5[1] = (float)(fVar11 + (float10)pfVar5[1]);
        local_8 = ((float)GEN_TOF((fVar11 + (float10)*(float *)(in_esi + 0x1c))));
        pfVar5 = pfVar5 + 4;
      } while (iVar10 != 0);
    }
    if (iVar6 < param_4) {
      iVar4 = (iVar4 + iVar6) * 4;
      do {
        pfVar5 = ((float *)GEN_TOP((*(int *)(in_esi + 4) + iVar4)));
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
        fVar11 = (float10)(float)((float10)*pfVar5 + (float10)local_8);
        *(float *)(param_3 + -4 + iVar6 * 4) =
             ((float)GEN_TOF((fVar11 + (float10)*(float *)(param_3 + -4 + iVar6 * 4))));
        local_8 = ((float)GEN_TOF((fVar11 + (float10)*(float *)(in_esi + 0x1c))));
      } while (iVar6 < param_4);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00cebfc0 */
uint F_00cebfc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcebfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float * pfVar8;
  int iVar9;
  uint uVar10;
  float * local_1c;
  float * local_18;
  float * local_14;
  float * local_10;
  float local_8;
  
  uVar10 = 0xffffffff;
  if (*(char *)(in_edi + 0x25) != '\0') {
    if (*(int *)(param_2 + 0x548) < 8) {
      F_00cebbb0(param_2);
    }
    uVar6 = *(uint *)(param_2 + 0x544);
    uVar10 = *((uint *)GEN_TOP((in_edi + 0x2c + (uVar6 & 0xff) * 4)));
    if ((int)uVar10 < 0) {
      if (*(int *)(param_2 + 0x548) < 0x19) {
        F_00cebbb0(param_2);
      }
      uVar6 = *(uint *)(param_2 + 0x544);
      uVar3 = uVar6 >> 8;
      do {
        uVar10 = *((uint *)GEN_TOP((in_edi + 0x2c + ((uVar3 & 3) + 0x80000000 + uVar10) * 4)));
        uVar3 = uVar3 >> 2;
      } while ((int)uVar10 < 0);
    }
    piVar1 = (int *)(param_2 + 0x548);
    *piVar1 = *piVar1 - ((int)uVar10 >> 0x1a);
    *(uint *)(param_2 + 0x544) = uVar6 >> ((byte)((int)uVar10 >> 0x1a) & 0x1f);
    if (*piVar1 < 0) {
      *(undefined4 *)(param_2 + 0x548) = 0;
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = uVar10 & 0x3ffffff;
      if (uVar10 != 0xffffffff) goto LAB_00cec08e;
    }
    if ((*(char *)(param_2 + 0x534) == '\0') && (*(int *)(param_2 + 0x53c) != 0)) {
      uVar10 = 0xffffffff;
      goto LAB_00cec08e;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0x15;
  if (*(int *)(param_2 + 0x34) == 0) {
    *(undefined4 *)(param_2 + 0x38) = 0x15;
  }
LAB_00cec08e: ;
  local_8 = (float)(float10)0;
  if (-1 < (int)uVar10) {
    iVar4 = *(int *)(in_edi + 8);
    if (iVar4 < param_4) {
      param_4 = iVar4;
    }
    iVar9 = 0;
    if (3 < param_4) {
      local_1c = param_3 + param_5 * 3;
      local_10 = param_3;
      local_18 = param_3 + param_5 * 2;
      local_14 = param_3 + param_5;
      iVar7 = iVar4 * uVar10 * 4;
      iVar5 = (param_4 - 4U >> 2) + 1;
      iVar9 = iVar5 * 4;
      do {
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + *(int *)(in_edi + 4)))) + (float10)local_8)));
        *local_10 = (float)((float10)fVar2 + (float10)*local_10);
        if (*(char *)(in_edi + 0x26) != '\0') {
          local_8 = fVar2;
        }
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 4 + *(int *)(in_edi + 4)))) + (float10)local_8)));
        *local_14 = (float)((float10)fVar2 + (float10)*local_14);
        if (*(char *)(in_edi + 0x26) != '\0') {
          local_8 = fVar2;
        }
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 8 + *(int *)(in_edi + 4)))) + (float10)local_8)));
        *local_18 = (float)((float10)fVar2 + (float10)*local_18);
        if (*(char *)(in_edi + 0x26) != '\0') {
          local_8 = fVar2;
        }
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 0xc + *(int *)(in_edi + 4)))) + (float10)local_8)));
        *local_1c = (float)((float10)fVar2 + (float10)*local_1c);
        if (*(char *)(in_edi + 0x26) != '\0') {
          local_8 = fVar2;
        }
        local_10 = local_10 + param_5 * 4;
        local_14 = local_14 + param_5 * 4;
        local_18 = local_18 + param_5 * 4;
        local_1c = local_1c + param_5 * 4;
        iVar7 = iVar7 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (iVar9 < param_4) {
      iVar4 = (iVar4 * uVar10 + iVar9) * 4;
      pfVar8 = param_3 + iVar9 * param_5;
      iVar9 = param_4 - iVar9;
      do {
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(in_edi + 4) + iVar4))) + (float10)local_8)));
        *pfVar8 = (float)((float10)fVar2 + (float10)*pfVar8);
        if (*(char *)(in_edi + 0x26) != '\0') {
          local_8 = fVar2;
        }
        pfVar8 = pfVar8 + param_5;
        iVar4 = iVar4 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cec220 */
uint F_00cec220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcec220u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  int * piVar1;
  float * pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float local_c;
  int local_8;
  
  local_8 = *param_6;
  iVar8 = *param_5;
  iVar3 = *(int *)(param_2 + 8);
  if (*(char *)(param_2 + 0x25) == '\0') {
    *(undefined4 *)(param_1 + 0x38) = 0x15;
    if (*(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0x15;
    }
    return 0;
  }
  iVar5 = param_8;
  if (*(char *)(param_2 + 0x26) == '\0') {
    for (; 0 < iVar5; iVar5 = iVar5 - iVar3) {
      if (*(int *)(param_1 + 0x548) < 8) {
        F_00cebbb0(param_1);
      }
      uVar6 = *(uint *)(param_1 + 0x544);
      uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar6 & 0xff) * 4)));
      if ((int)uVar9 < 0) {
        if (*(int *)(param_1 + 0x548) < 0x19) {
          F_00cebbb0(param_1);
        }
        uVar6 = *(uint *)(param_1 + 0x544);
        uVar4 = uVar6 >> 8;
        do {
          uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar4 & 3) + 0x80000000 + uVar9) * 4)));
          uVar4 = uVar4 >> 2;
        } while ((int)uVar9 < 0);
      }
      piVar1 = (int *)(param_1 + 0x548);
      *piVar1 = *piVar1 - ((int)uVar9 >> 0x1a);
      *(uint *)(param_1 + 0x544) = uVar6 >> ((byte)((int)uVar9 >> 0x1a) & 0x1f);
      if (*piVar1 < 0) {
        *(undefined4 *)(param_1 + 0x548) = 0;
LAB_00cec4c2: ;
        if ((*(char *)(param_1 + 0x534) == '\0') && (*(int *)(param_1 + 0x53c) != 0)) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x38) = 0x15;
        if (*(int *)(param_1 + 0x34) != 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x38) = 0x15;
        return 0;
      }
      if ((uVar9 & 0x3ffffff) == 0xffffffff) goto LAB_00cec4c2;
      local_c = 0.0;
      if (0 < iVar3) {
        iVar10 = (uVar9 & 0x3ffffff) * iVar3 * 4;
        do {
          pfVar2 = ((float *)GEN_TOP((*(int *)(param_3 + iVar8 * 4) + local_8 * 4)));
          iVar8 = iVar8 + 1;
          *pfVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 + *(int *)(param_2 + 4)))) +
                                            (float10)*(double *)&REFG(undefined, 0x108bec8)))) + (float10)*pfVar2)));
          if (iVar8 == param_4) {
            local_8 = local_8 + 1;
            iVar8 = 0;
            if (param_7 <= local_8) goto LAB_00cec4f0;
          }
          local_c = gen_bits2f((int)gen_fl2bits(local_c) + 1);
          iVar10 = iVar10 + 4;
        } while ((int)gen_fl2bits(local_c) < iVar3);
      }
    }
  }
  else {
    for (; 0 < iVar5; iVar5 = iVar5 - iVar3) {
      local_c = (float)(float10)0;
      if (*(int *)(param_1 + 0x548) < 8) {
        F_00cebbb0(param_1);
      }
      uVar6 = *(uint *)(param_1 + 0x544);
      uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar6 & 0xff) * 4)));
      if ((int)uVar9 < 0) {
        if (*(int *)(param_1 + 0x548) < 0x19) {
          F_00cebbb0(param_1);
        }
        uVar6 = *(uint *)(param_1 + 0x544);
        uVar4 = uVar6 >> 8;
        do {
          uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar4 & 3) + 0x80000000 + uVar9) * 4)));
          uVar4 = uVar4 >> 2;
        } while ((int)uVar9 < 0);
      }
      piVar1 = (int *)(param_1 + 0x548);
      *piVar1 = *piVar1 - ((int)uVar9 >> 0x1a);
      *(uint *)(param_1 + 0x544) = uVar6 >> ((byte)((int)uVar9 >> 0x1a) & 0x1f);
      if (*piVar1 < 0) {
        *(undefined4 *)(param_1 + 0x548) = 0;
LAB_00cec389: ;
        if ((*(char *)(param_1 + 0x534) == '\0') && (*(int *)(param_1 + 0x53c) != 0)) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x38) = 0x15;
        if (*(int *)(param_1 + 0x34) == 0) {
          *(undefined4 *)(param_1 + 0x38) = 0x15;
        }
        return 0;
      }
      if ((uVar9 & 0x3ffffff) == 0xffffffff) goto LAB_00cec389;
      iVar10 = 0;
      if (0 < iVar3) {
        iVar7 = (uVar9 & 0x3ffffff) * iVar3 * 4;
        do {
          pfVar2 = ((float *)GEN_TOP((*(int *)(param_3 + iVar8 * 4) + local_8 * 4)));
          local_c = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + *(int *)(param_2 + 4)))) + (float10)local_c)));
          iVar8 = iVar8 + 1;
          *pfVar2 = (float)((float10)local_c + (float10)*pfVar2);
          if (iVar8 == param_4) {
            local_8 = local_8 + 1;
            iVar8 = 0;
            if (param_7 <= local_8) goto LAB_00cec4f0;
          }
          iVar10 = iVar10 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar10 < iVar3);
      }
    }
  }
LAB_00cec4f0: ;
  *param_5 = iVar8;
  *param_6 = local_8;
  return 1;
}

/* ref: FUN_00cec510 */
uint F_00cec510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcec510u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = param_3;
  iVar2 = *(int *)(param_3 + 8);
  if (*(char *)(param_3 + 0x25) == '\0') {
    *(undefined4 *)(param_2 + 0x38) = 0x15;
    if (*(int *)(param_2 + 0x34) == 0) {
      *(undefined4 *)(param_2 + 0x38) = 0x15;
    }
    return 0;
  }
  if (*(char *)(param_3 + 0x26) == '\0') {
    if (param_6 < 1) {
      return 1;
    }
    while( true ) {
      if (*(int *)(param_2 + 0x548) < 8) {
        F_00cebbb0(param_2);
      }
      uVar7 = *(uint *)(param_2 + 0x544);
      uVar6 = *((uint *)GEN_TOP((param_3 + 0x2c + (uVar7 & 0xff) * 4)));
      if ((int)uVar6 < 0) {
        if (*(int *)(param_2 + 0x548) < 0x19) {
          F_00cebbb0(param_2);
        }
        uVar7 = *(uint *)(param_2 + 0x544);
        uVar5 = uVar7 >> 8;
        do {
          uVar6 = *((uint *)GEN_TOP((param_3 + 0x2c + ((uVar5 & 3) + 0x80000000 + uVar6) * 4)));
          uVar5 = uVar5 >> 2;
        } while ((int)uVar6 < 0);
      }
      piVar1 = (int *)(param_2 + 0x548);
      *piVar1 = *piVar1 - ((int)uVar6 >> 0x1a);
      *(uint *)(param_2 + 0x544) = uVar7 >> ((byte)((int)uVar6 >> 0x1a) & 0x1f);
      if (*piVar1 < 0) break;
      if ((uVar6 & 0x3ffffff) == 0xffffffff) goto LAB_00cec781;
      if (0 < iVar2) {
        iVar8 = (uVar6 & 0x3ffffff) * iVar2 * 4;
        iVar4 = 0;
        do {
          in_eax = in_eax + 1;
          *(float *)(param_4 + -4 + in_eax * 4) =
               ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar8 + *(int *)(param_3 + 4)))) +
                                       (float10)*(double *)&REFG(undefined, 0x108bec8)))) +
                      (float10)*(float *)(param_4 + -4 + in_eax * 4))));
          if (param_5 <= in_eax) {
            return 1;
          }
          iVar4 = iVar4 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar4 < iVar2);
      }
      param_6 = param_6 - iVar2;
      if (param_6 < 1) {
        return 1;
      }
    }
    *(undefined4 *)(param_2 + 0x548) = 0;
LAB_00cec781: ;
    if ((*(char *)(param_2 + 0x534) == '\0') && (*(int *)(param_2 + 0x53c) != 0)) {
      return 0;
    }
  }
  else {
    if (param_6 < 1) {
      return 1;
    }
    while( true ) {
      param_3 = (uint)gen_fl2bits((float)(float10)0);
      if (*(int *)(param_2 + 0x548) < 8) {
        F_00cebbb0(param_2);
      }
      uVar6 = *(uint *)(param_2 + 0x544);
      uVar5 = *((uint *)GEN_TOP((uVar7 + 0x2c + (uVar6 & 0xff) * 4)));
      if ((int)uVar5 < 0) {
        if (*(int *)(param_2 + 0x548) < 0x19) {
          F_00cebbb0(param_2);
        }
        uVar6 = *(uint *)(param_2 + 0x544);
        uVar3 = uVar6 >> 8;
        do {
          uVar5 = *((uint *)GEN_TOP((uVar7 + 0x2c + ((uVar3 & 3) + 0x80000000 + uVar5) * 4)));
          uVar3 = uVar3 >> 2;
        } while ((int)uVar5 < 0);
      }
      piVar1 = (int *)(param_2 + 0x548);
      *piVar1 = *piVar1 - ((int)uVar5 >> 0x1a);
      *(uint *)(param_2 + 0x544) = uVar6 >> ((byte)((int)uVar5 >> 0x1a) & 0x1f);
      if (*piVar1 < 0) break;
      if ((uVar5 & 0x3ffffff) == 0xffffffff) goto LAB_00cec65b;
      iVar8 = 0;
      if (0 < iVar2) {
        iVar4 = (uVar5 & 0x3ffffff) * iVar2 * 4;
        do {
          in_eax = in_eax + 1;
          param_3 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar4 + *(int *)(uVar7 + 4)))) +
                                             ((float10)GEN_TOD(gen_bits2f(param_3)))))));
          *(float *)(param_4 + -4 + in_eax * 4) =
               ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)*(float *)(param_4 + -4 + in_eax * 4)
                      )));
          if (param_5 <= in_eax) {
            return 1;
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar8 < iVar2);
      }
      param_6 = param_6 - iVar2;
      if (param_6 < 1) {
        return 1;
      }
    }
    *(undefined4 *)(param_2 + 0x548) = 0;
LAB_00cec65b: ;
    if ((*(char *)(param_2 + 0x534) == '\0') && (*(int *)(param_2 + 0x53c) != 0)) {
      return 0;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 0x15;
  if (*(int *)(param_2 + 0x34) == 0) {
    *(undefined4 *)(param_2 + 0x38) = 0x15;
  }
  return 0;
}

/* ref: FUN_00cec7c0 */
uint F_00cec7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcec7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int in_edi = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  
  uVar1 = in_ecx - in_edi >> 0x1f;
  return ((((in_ecx - in_edi ^ uVar1) - uVar1) * (in_eax - param_4) * param_5 >> 0x15 ^ uVar1) -
         uVar1) + in_edi;
}

/* ref: FUN_00cec7f0 */
unsigned int F_00cec7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcec7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  uint uVar8;
  
  uVar8 = param_5 - param_3;
  iVar2 = in_eax - param_4;
  if (iVar2 < 0) {
    uVar3 = (uint)(iVar2 * -0x1000000) / uVar8;
    uVar5 = param_4 * -0x1000000;
    if ((uVar8 & uVar8 - 1) != 0) {
      uVar3 = uVar3 + 1;
    }
    iVar2 = param_3 + 1;
    *(float *)(param_2 + -4 + iVar2 * 4) =
         ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + param_4 * 4) *
                (float10)*(float *)(param_2 + param_3 * 4))));
    if (iVar2 < param_5) {
      if (3 < param_5 - iVar2) {
        iVar1 = iVar2 * 4;
        param_4 = ((param_5 - iVar2) - 4U >> 2) + 1;
        iVar2 = iVar2 + param_4 * 4;
        pfVar7 = (float *)(param_2 + 8 + iVar1);
        do {
          uVar8 = uVar5 + uVar3 + uVar3;
          pfVar7[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar5 + uVar3 >> 0x18) * -4) *
                              (float10)pfVar7[-2])));
          uVar6 = uVar8 + uVar3;
          pfVar7[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar8 >> 0x18) * -4) *
                              (float10)pfVar7[-1])));
          uVar5 = uVar6 + uVar3;
          *pfVar7 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar6 >> 0x18) * -4) *
                           (float10)*pfVar7)));
          param_4 = param_4 + -1;
          pfVar7[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar5 >> 0x18) * -4) *
                             (float10)pfVar7[1])));
          pfVar7 = pfVar7 + 4;
        } while (param_4 != 0);
      }
      if (iVar2 < param_5) {
        do {
          uVar5 = uVar5 + uVar3;
          iVar2 = iVar2 + 1;
          *(float *)(param_2 + -4 + iVar2 * 4) =
               ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar5 >> 0x18) * -4) *
                      (float10)*(float *)(param_2 + -4 + iVar2 * 4))));
        } while (iVar2 < param_5);
        return 0;
      }
    }
  }
  else {
    uVar5 = (uint)(iVar2 * 0x1000000) / uVar8;
    uVar3 = param_4 << 0x18;
    if ((uVar8 & uVar8 - 1) != 0) {
      uVar5 = uVar5 + 1;
    }
    iVar2 = param_3 + 1;
    *(float *)(param_2 + -4 + iVar2 * 4) =
         ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + param_4 * 4) *
                (float10)*(float *)(param_2 + param_3 * 4))));
    if (iVar2 < param_5) {
      if (3 < param_5 - iVar2) {
        iVar4 = ((param_5 - iVar2) - 4U >> 2) + 1;
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + iVar4 * 4;
        pfVar7 = (float *)(param_2 + 8 + iVar1);
        do {
          uVar8 = uVar3 + uVar5 + uVar5;
          uVar6 = uVar8 + uVar5;
          pfVar7[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar3 + uVar5 >> 0x18) * 4) *
                              (float10)pfVar7[-2])));
          uVar3 = uVar6 + uVar5;
          pfVar7[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar8 >> 0x18) * 4) *
                              (float10)pfVar7[-1])));
          iVar4 = iVar4 + -1;
          *pfVar7 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar6 >> 0x18) * 4) *
                           (float10)*pfVar7)));
          pfVar7[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar3 >> 0x18) * 4) *
                             (float10)pfVar7[1])));
          pfVar7 = pfVar7 + 4;
        } while (iVar4 != 0);
      }
      while (iVar2 < param_5) {
        uVar3 = uVar3 + uVar5;
        iVar2 = iVar2 + 1;
        *(float *)(param_2 + -4 + iVar2 * 4) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar3 >> 0x18) * 4) *
                    (float10)*(float *)(param_2 + -4 + iVar2 * 4))));
      }
    }
  }
  return 0;
}

/* ref: FUN_00cec9f0 */
uint F_00cec9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcec9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint param_6 = (uint)gen_a5;
  int * piVar1;
  float * pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float * pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float10 fVar12;
  int local_8;
  
  local_8 = 0;
  if (param_6 == 0) {
    uVar10 = (uint)(*(int *)(in_eax + 0xc) * param_5) >> 0x15;
    if (uVar10 != 0) {
      param_6 = param_5 - param_4;
      iVar9 = param_3 + param_4 * 4;
      do {
        uVar3 = F_00cebfc0(in_eax,param_2,iVar9,param_6,uVar10);
        if (uVar3 == 0) {
          return 0;
        }
        param_6 = param_6 - 1;
        local_8 = local_8 + 1;
        iVar9 = iVar9 + 4;
      } while (local_8 < (int)uVar10);
      return 1;
    }
  }
  else if (0 < param_5) {
    do {
      iVar4 = param_5 - local_8;
      iVar9 = param_3 + param_4 * 4;
      if (*(char *)(in_eax + 0x25) == '\0') {
        *(undefined4 *)(param_2 + 0x38) = 0x15;
        if (*(int *)(param_2 + 0x34) != 0) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0x38) = 0x15;
        return 0;
      }
      if (*(int *)(param_2 + 0x548) < 8) {
        F_00cebbb0(param_2);
      }
      uVar10 = *(uint *)(param_2 + 0x544);
      uVar3 = *((uint *)GEN_TOP((in_eax + 0x2c + (uVar10 & 0xff) * 4)));
      if ((int)uVar3 < 0) {
        if (*(int *)(param_2 + 0x548) < 0x19) {
          F_00cebbb0(param_2);
        }
        uVar10 = *(uint *)(param_2 + 0x544) >> 8;
        do {
          uVar3 = *((uint *)GEN_TOP((in_eax + 0x2c + ((uVar10 & 3) + 0x80000000 + uVar3) * 4)));
          uVar10 = uVar10 >> 2;
        } while ((int)uVar3 < 0);
        uVar10 = *(uint *)(param_2 + 0x544);
      }
      fVar12 = (float10)0;
      piVar1 = (int *)(param_2 + 0x548);
      *piVar1 = *piVar1 - ((int)uVar3 >> 0x1a);
      *(uint *)(param_2 + 0x544) = uVar10 >> ((byte)((int)uVar3 >> 0x1a) & 0x1f);
      if (*piVar1 < 0) {
        *(undefined4 *)(param_2 + 0x548) = 0;
        uVar3 = 0xffffffff;
LAB_00cecb2a: ;
        if ((*(char *)(param_2 + 0x534) == '\0') && (*(int *)(param_2 + 0x53c) != 0)) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0x38) = 0x15;
        if (*(int *)(param_2 + 0x34) == 0) {
          *(undefined4 *)(param_2 + 0x38) = 0x15;
        }
      }
      else {
        uVar3 = uVar3 & 0x3ffffff;
        if (uVar3 == 0xffffffff) goto LAB_00cecb2a;
      }
      if ((int)uVar3 < 0) {
        return 0;
      }
      iVar5 = *(int *)(in_eax + 8);
      if (iVar5 < iVar4) {
        iVar4 = iVar5;
      }
      iVar5 = iVar5 * uVar3;
      iVar8 = 0;
      if (*(char *)(in_eax + 0x26) == '\0') {
        if (3 < iVar4) {
          iVar11 = (iVar4 - 4U >> 2) + 1;
          iVar8 = iVar11 * 4;
          pfVar6 = (float *)(iVar9 + 8);
          iVar7 = iVar5 * 4;
          do {
            iVar11 = iVar11 + -1;
            pfVar6[-2] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + *(int *)(in_eax + 4)))) + fVar12) +
                                (float10)pfVar6[-2])));
            pfVar6[-1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + 4 + *(int *)(in_eax + 4)))) + fVar12) +
                                (float10)pfVar6[-1])));
            *pfVar6 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + 8 + *(int *)(in_eax + 4)))) + fVar12) +
                             (float10)*pfVar6)));
            pfVar6[1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + 0xc + *(int *)(in_eax + 4)))) + fVar12) +
                               (float10)pfVar6[1])));
            pfVar6 = pfVar6 + 4;
            iVar7 = iVar7 + 0x10;
          } while (iVar11 != 0);
        }
        if (iVar8 < iVar4) {
          iVar5 = (iVar5 + iVar8) * 4;
          do {
            pfVar6 = ((float *)GEN_TOP((*(int *)(in_eax + 4) + iVar5)));
            iVar8 = iVar8 + 1;
            iVar5 = iVar5 + 4;
            *(float *)(iVar9 + -4 + iVar8 * 4) =
                 ((float)GEN_TOF((((float10)*pfVar6 + (float10)0) +
                        (float10)*(float *)(iVar9 + -4 + iVar8 * 4))));
          } while (iVar8 < iVar4);
        }
      }
      else {
        param_6 = (uint)gen_fl2bits((float)(float10)0);
        if (3 < iVar4) {
          iVar11 = (iVar4 - 4U >> 2) + 1;
          iVar7 = iVar5 * 4;
          iVar8 = iVar11 * 4;
          pfVar6 = (float *)(iVar9 + 8);
          do {
            pfVar2 = ((float *)GEN_TOP((*(int *)(in_eax + 4) + iVar7)));
            iVar7 = iVar7 + 0x10;
            iVar11 = iVar11 + -1;
            fVar12 = (float10)(float)((float10)*pfVar2 + ((float10)GEN_TOD(gen_bits2f(param_6))));
            pfVar6[-2] = (float)(fVar12 + (float10)pfVar6[-2]);
            fVar12 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)*(float *)(in_eax + 0x1c))))
                                     + (float10)*((float *)GEN_TOP((*(int *)(in_eax + 4) + -0xc + iVar7))))));
            pfVar6[-1] = (float)(fVar12 + (float10)pfVar6[-1]);
            fVar12 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)*(float *)(in_eax + 0x1c))))
                                     + (float10)*((float *)GEN_TOP((*(int *)(in_eax + 4) + -8 + iVar7))))));
            *pfVar6 = (float)(fVar12 + (float10)*pfVar6);
            fVar12 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)*(float *)(in_eax + 0x1c))))
                                     + (float10)*((float *)GEN_TOP((*(int *)(in_eax + 4) + -4 + iVar7))))));
            pfVar6[1] = (float)(fVar12 + (float10)pfVar6[1]);
            param_6 = (uint)gen_fl2bits(((float)GEN_TOF((fVar12 + (float10)*(float *)(in_eax + 0x1c)))));
            pfVar6 = pfVar6 + 4;
          } while (iVar11 != 0);
        }
        if (iVar8 < iVar4) {
          iVar5 = (iVar5 + iVar8) * 4;
          do {
            pfVar6 = ((float *)GEN_TOP((iVar5 + *(int *)(in_eax + 4))));
            iVar8 = iVar8 + 1;
            iVar5 = iVar5 + 4;
            fVar12 = (float10)(float)((float10)*pfVar6 + ((float10)GEN_TOD(gen_bits2f(param_6))));
            *(float *)(iVar9 + -4 + iVar8 * 4) =
                 ((float)GEN_TOF((fVar12 + (float10)*(float *)(iVar9 + -4 + iVar8 * 4))));
            param_6 = (uint)gen_fl2bits(((float)GEN_TOF((fVar12 + (float10)*(float *)(in_eax + 0x1c)))));
          } while (iVar8 < iVar4);
        }
      }
      param_4 = param_4 + *(int *)(in_eax + 8);
      local_8 = local_8 + *(int *)(in_eax + 8);
    } while (local_8 < param_5);
  }
  return 1;
}

/* ref: FUN_00cecd50 */
uint F_00cecd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcecd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_edi = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x12090];
  int * piVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 * puVar12;
  int iVar13;
  undefined4 * puVar14;
  int iVar15;
  undefined1 * puVar16;
  uint uVar17;
  int iVar18;
  undefined4 * puVar19;
  
  (*(uint *)(gen_frame + 0x1207c)) = 0xcecd70;
  (*(uint *)(gen_frame + 0x1207c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12080);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10044)) = param_2;
  (*(uint *)(gen_frame + 0x10040)) = (uint)*(ushort *)(in_edi + 0xd8 + param_5 * 2);
  piVar2 = ((int *)GEN_TOP((*(int *)(in_edi + 0x158) + param_5 * 0x1c)));
  (*(int *)(gen_frame + 0x10048)) = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_edi + 0x48) + (uint)*(byte *)((int)piVar2 + 0x11) * 4)))
                       + 8)));
  puVar14 = *(undefined4 * PTR32 *)(in_edi + 8);
  puVar12 = ((undefined4 *)GEN_TOP(((uint)((piVar2[1] - *piVar2) * piVar2[3]) >> 0x15)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x10050)) = puVar12;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = puVar14;
  ((int *)(gen_frame + 0x1000c))[8] = 0xcecde4;
  iVar5 = -(((int)((int)(uintptr_t)puVar12) * 4 + 4) * (int)puVar14);
  iVar13 = 0;
  (*(int * PTR32 *)(gen_frame + 0x1004c)) = ((int *)GEN_TOP((((undefined1 *)GP((uint)(uintptr_t)(gen_frame + 0x10030) + (iVar5))))));
  puVar16 = ((undefined1 *)GP((uint)(uintptr_t)(gen_frame + 0x10030) + ((int)((int)(uintptr_t)puVar14) * 4 + iVar5)));
  if (0 < (int)puVar14) {
    do {
      *((undefined1 * PTR32 *)GEN_TOP((((undefined1 *)GP((uint)(uintptr_t)(gen_frame + 0x10030) + (iVar13 * 4 + iVar5)))))) = puVar16;
      iVar13 = iVar13 + 1;
      puVar16 = puVar16 + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10050))) * 4;
    } while (iVar13 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)));
  }
  if (((*(uint *)(gen_frame + 0x10040)) == 2) && (param_3 != (undefined4 *)0x1)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (undefined4 *)((int)((int)(uintptr_t)param_3) * param_4);
    puVar14 = (undefined4 *)0x0;
    if (0 < (int)param_3) {
      do {
        if (*(char *)((int)puVar14 + param_6) == '\0') break;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      } while ((int)puVar14 < (int)param_3);
    }
    if (puVar14 != param_3) {
      if ((param_3 == (undefined4 *)0x2) && (param_4 < 0x401)) {
        *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = (int)((int)(uintptr_t)param_3) * param_4 * 4;
        *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c) = 0;
        *(undefined4 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18) = ((undefined4 *)(gen_frame + 0x10070));
        *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x14) = 0xcece88;
        F_00c48350(*(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18),
                *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c),
                *(gen_size32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = (undefined4 *)0x0;
        do {
          iVar13 = 0;
          (*(int *)(gen_frame + 0x10064)) = 0;
          if (0 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = (undefined4 *)0x0;
            do {
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) == (undefined4 *)0x0) {
                (*(int *)(gen_frame + 0x10054)) = *((int *)GEN_TOP((*(int *)(in_edi + 0x48) +
                                     (uint)*(byte *)((int)piVar2 + 0x11) * 4)));
                if (*(int *)(in_edi + 0x548) < 8) {
                  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = 0xcecee7;
                  F_00cebbb0(in_edi);
                }
                uVar17 = *(uint *)(in_edi + 0x544);
                puVar14 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10054)) + 0x2c + (uVar17 & 0xff) * 4)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = puVar14;
                if ((int)puVar14 < 0) {
                  if (*(int *)(in_edi + 0x548) < 0x19) {
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = 0xcecf18;
                    F_00cebbb0(in_edi);
                    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10058));
                  }
                  uVar17 = *(uint *)(in_edi + 0x544) >> 8;
                  do {
                    puVar14 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10054)) + 0x2c + ((uVar17 & 3) + 0x80000000 + (int)puVar14) * 4)));
                    uVar17 = uVar17 >> 2;
                  } while ((int)puVar14 < 0);
                  uVar17 = *(uint *)(in_edi + 0x544);
                }
                piVar1 = (int *)(in_edi + 0x548);
                *piVar1 = *piVar1 - ((int)((int)(uintptr_t)puVar14) >> 0x1a);
                (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = (undefined4 *)((int)((int)(uintptr_t)puVar14) >> 0x1a);
                *(uint *)(in_edi + 0x544) = uVar17 >> ((byte)((int)((int)(uintptr_t)puVar14) >> 0x1a) & 0x1f);
                if (*piVar1 < 0) {
                  *(undefined4 *)(in_edi + 0x548) = 0;
                  goto LAB_00ced077;
                }
                if (((uint)puVar14 & 0x3ffffff) == 0xffffffff) goto LAB_00ced077;
                *(undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) + *(*(int * PTR32 *)(gen_frame + 0x1004c))) =
                     *((undefined4 *)GEN_TOP((piVar2[5] + ((uint)puVar14 & 0x3ffffff) * 4)));
                iVar13 = (*(int *)(gen_frame + 0x10064));
              }
              (*(int *)(gen_frame + 0x1006c)) = 0;
              if (0 < (*(int *)(gen_frame + 0x10048))) {
                do {
                  if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)) <= iVar13) break;
                  iVar15 = piVar2[2];
                  iVar3 = *piVar2;
                  iVar18 = (int)*((short *)GEN_TOP((piVar2[6] +
                                          (int)((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) +
                                               (uint)*((byte *)GEN_TOP((*(int *)(*(*(int * PTR32 *)(gen_frame + 0x1004c)) +
                                                                       (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060))) + (*(int *)(gen_frame + 0x1006c))
                                                              ))) * 2) * 2)));
                  if (-1 < iVar18) {
                    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar18 * 4)));
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = piVar2[2];
                    *(undefined4 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c) = (*(undefined4 * PTR32 *)(gen_frame + 0x10068));
                    *(undefined4 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18) = ((undefined4 *)(gen_frame + 0x10070));
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x14) = uVar4;
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x10) = in_edi;
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0xc) = 0xced016;
                    uVar17 = F_00cec510(iVar15 * iVar13 + iVar3,
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x10),
                                          *(uint *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x14),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20));
                    if (uVar17 == 0) goto LAB_00ced077;
                  }
                  iVar13 = (*(int *)(gen_frame + 0x10064)) + 1;
                  (*(int *)(gen_frame + 0x10064)) = iVar13;
                  iVar15 = (*(int *)(gen_frame + 0x1006c)) + 1;
                  (*(int *)(gen_frame + 0x1006c)) = iVar15;
                  iVar13 = (*(int *)(gen_frame + 0x10064));
                } while (iVar15 < (*(int *)(gen_frame + 0x10048)));
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) + 1;
            } while (iVar13 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)));
          }
          puVar14 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) + 1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = puVar14;
        } while ((int)puVar14 < 8);
LAB_00ced077: ;
        puVar12 = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10044));
        puVar19 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x10044))[1];
        puVar14 = (undefined4 *)0x0;
        if (0 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068))) {
          do {
            uVar4 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 1)];
            uVar6 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 2)];
            uVar7 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 3)];
            uVar8 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)(puVar14 + 1))];
            uVar9 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 5)];
            uVar10 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 6)];
            uVar11 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14 + 7)];
            *puVar12 = ((undefined4 *)(gen_frame + 0x10070))[(int)((int)puVar14)];
            puVar12[1] = uVar6;
            puVar12[2] = uVar8;
            puVar12[3] = uVar10;
            *puVar19 = uVar4;
            puVar19[1] = uVar7;
            puVar19[2] = uVar9;
            puVar19[3] = uVar11;
            puVar14 = puVar14 + 2;
            puVar12 = puVar12 + 4;
            puVar19 = puVar19 + 4;
          } while ((int)puVar14 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)));
        }
      }
      else {
        (*(int *)(gen_frame + 0x1006c)) = 0;
        if (0 < (int)param_3) {
          do {
            iVar13 = (*(int *)(gen_frame + 0x1006c));
            puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10044));
            if (*(char *)((*(int *)(gen_frame + 0x1006c)) + param_6) == '\0') {
              *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = param_4 * 4;
              uVar4 = puVar14[iVar13];
              *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c) = 0;
              *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18) = uVar4;
              *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x14) = 0xced10b;
              F_00c48350(*(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18),
                      *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c),
                      *(gen_size32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20));
              iVar13 = (*(int *)(gen_frame + 0x1006c));
            }
            (*(int *)(gen_frame + 0x1006c)) = iVar13 + 1;
          } while (iVar13 + 1 < (int)param_3);
        }
        iVar13 = (int)(0x200000 / ZEXT48(param_3));
        (*(int *)(gen_frame + 0x10054)) = iVar13;
        if (((uint)param_3 & (int)param_3 - 1U) != 0) {
          (*(int *)(gen_frame + 0x10054)) = iVar13 + 1;
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = (undefined4 *)0x0;
        do {
          iVar13 = 0;
          (*(int *)(gen_frame + 0x10064)) = 0;
          if (0 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (undefined4 *)0x0;
            do {
              iVar15 = piVar2[2] * iVar13 + *piVar2;
              uVar17 = (uint)((*(int *)(gen_frame + 0x10054)) * iVar15) >> 0x15;
              (*(uint *)(gen_frame + 0x10040)) = uVar17;
              (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = (undefined4 *)(iVar15 - uVar17 * (int)param_3);
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) == (undefined4 *)0x0) {
                (*(int *)(gen_frame + 0x1003c)) = *((int *)GEN_TOP((*(int *)(in_edi + 0x48) +
                                     (uint)*(byte *)((int)piVar2 + 0x11) * 4)));
                if (*(int *)(in_edi + 0x548) < 8) {
                  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = 0xced1c3;
                  F_00cebbb0(in_edi);
                }
                uVar17 = *(uint *)(in_edi + 0x544);
                (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x1003c)) + 0x2c + (uVar17 & 0xff) * 4)));
                if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) < 0) {
                  if (*(int *)(in_edi + 0x548) < 0x19) {
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = 0xced1f4;
                    F_00cebbb0(in_edi);
                  }
                  uVar17 = *(uint *)(in_edi + 0x544) >> 8;
                  do {
                    (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x1003c)) + 0x2c +
                                  ((uVar17 & 3) + 0x80000000 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060))) * 4)));
                    uVar17 = uVar17 >> 2;
                  } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) < 0);
                  uVar17 = *(uint *)(in_edi + 0x544);
                }
                piVar1 = (int *)(in_edi + 0x548);
                *piVar1 = *piVar1 - ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10060))) >> 0x1a);
                *(uint *)(in_edi + 0x544) = uVar17 >> ((byte)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10060))) >> 0x1a) & 0x1f);
                puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10060));
                if (*piVar1 < 0) goto LAB_00ced672;
                puVar14 = (undefined4 *)((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) & 0x3ffffff);
                if (puVar14 == (undefined4 *)0xffffffff) goto LAB_00ced67c;
                *(undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)) + *(*(int * PTR32 *)(gen_frame + 0x1004c))) =
                     *(undefined4 *)(piVar2[5] + (int)((int)(uintptr_t)puVar14) * 4);
                iVar13 = (*(int *)(gen_frame + 0x10064));
              }
              (*(int *)(gen_frame + 0x1006c)) = 0;
              if (0 < (*(int *)(gen_frame + 0x10048))) {
                do {
                  if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)) <= iVar13) break;
                  iVar15 = (int)*((short *)GEN_TOP((piVar2[6] +
                                          (int)((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) +
                                               (uint)*((byte *)GEN_TOP((*(int *)(*(*(int * PTR32 *)(gen_frame + 0x1004c)) +
                                                                       (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068))) + (*(int *)(gen_frame + 0x1006c))
                                                              ))) * 2) * 2)));
                  if (iVar15 < 0) {
                    iVar13 = piVar2[2] * iVar13 + *piVar2 + piVar2[2];
                    uVar17 = (uint)((*(int *)(gen_frame + 0x10054)) * iVar13) >> 0x15;
                    (*(uint *)(gen_frame + 0x10040)) = uVar17;
                    (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = (undefined4 *)(iVar13 - uVar17 * (int)param_3);
                  }
                  else {
                    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar15 * 4)));
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = piVar2[2];
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c) = param_4;
                    *(uint * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18) = &(*(uint *)(gen_frame + 0x10040));
                    *(undefined4 * PTR32 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x14) = &(*(undefined4 * PTR32 *)(gen_frame + 0x10058));
                    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10044));
                    *(undefined4 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x10) = param_3;
                    *(undefined4 * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0xc) = puVar14;
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 8) = uVar4;
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 4) = in_edi;
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5) = 0xced302;
                    uVar17 = F_00cec220(*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 4),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 8),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0xc),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x10),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x14),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20));
                    puVar14 = (undefined4 *)0x0;
                    if (uVar17 == 0) goto LAB_00ced67c;
                  }
                  iVar13 = (*(int *)(gen_frame + 0x10064)) + 1;
                  (*(int *)(gen_frame + 0x10064)) = iVar13;
                  iVar15 = (*(int *)(gen_frame + 0x1006c)) + 1;
                  (*(int *)(gen_frame + 0x1006c)) = iVar15;
                  iVar13 = (*(int *)(gen_frame + 0x10064));
                } while (iVar15 < (*(int *)(gen_frame + 0x10048)));
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) + 1;
            } while (iVar13 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)));
          }
          puVar14 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) + 1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = puVar14;
        } while ((int)puVar14 < 8);
      }
    }
  }
  else {
    (*(int *)(gen_frame + 0x1006c)) = 0;
    if (0 < (int)param_3) {
      do {
        iVar13 = (*(int *)(gen_frame + 0x1006c));
        puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10044));
        if (*(char *)((*(int *)(gen_frame + 0x1006c)) + param_6) == '\0') {
          *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = param_4 * 4;
          uVar4 = puVar14[iVar13];
          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c) = 0;
          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18) = uVar4;
          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x14) = 0xced3bb;
          F_00c48350(*(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18),
                  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c),
                  *(gen_size32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20));
          iVar13 = (*(int *)(gen_frame + 0x1006c));
        }
        (*(int *)(gen_frame + 0x1006c)) = iVar13 + 1;
      } while (iVar13 + 1 < (int)param_3);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = (undefined4 *)0x0;
    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10050));
    do {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = (undefined4 *)0x0;
      if (0 < (int)puVar14) {
        (*(int *)(gen_frame + 0x10054)) = 0;
        do {
          if (((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) == (undefined4 *)0x0) && ((*(int *)(gen_frame + 0x10064)) = 0, 0 < (int)param_3)) {
            do {
              iVar13 = (*(int *)(gen_frame + 0x10064));
              if (*(char *)((*(int *)(gen_frame + 0x10064)) + param_6) == '\0') {
                (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(in_edi + 0x48) + (uint)*(byte *)((int)piVar2 + 0x11) * 4)));
                if (*(int *)(in_edi + 0x548) < 8) {
                  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = 0xced44d;
                  F_00cebbb0(in_edi);
                }
                uVar17 = *(uint *)(in_edi + 0x544);
                (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x10058))[(uVar17 & 0xff) + 0xb];
                if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)) < 0) {
                  if (*(int *)(in_edi + 0x548) < 0x19) {
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = 0xced47e;
                    F_00cebbb0(in_edi);
                  }
                  uVar17 = *(uint *)(in_edi + 0x544) >> 8;
                  do {
                    (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (undefined4 *)
                                 (*(undefined4 * PTR32 *)(gen_frame + 0x10058))[(int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)) + (uVar17 & 3) + 0x8000000b];
                    uVar17 = uVar17 >> 2;
                  } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)) < 0);
                  uVar17 = *(uint *)(in_edi + 0x544);
                }
                piVar1 = (int *)(in_edi + 0x548);
                *piVar1 = *piVar1 - ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10068))) >> 0x1a);
                *(uint *)(in_edi + 0x544) = uVar17 >> ((byte)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10068))) >> 0x1a) & 0x1f);
                puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10068));
                if (*piVar1 < 0) goto LAB_00ced672;
                puVar14 = (undefined4 *)((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x10068)) & 0x3ffffff);
                (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = puVar14;
                if (puVar14 == (undefined4 *)0xffffffff) goto LAB_00ced67c;
                *(undefined4 *)((*(int *)(gen_frame + 0x10054)) + (*(int * PTR32 *)(gen_frame + 0x1004c))[(*(int *)(gen_frame + 0x10064))]) =
                     *(undefined4 *)(piVar2[5] + (int)((int)(uintptr_t)puVar14) * 4);
                iVar13 = (*(int *)(gen_frame + 0x10064));
              }
              (*(int *)(gen_frame + 0x10064)) = iVar13 + 1;
            } while (iVar13 + 1 < (int)param_3);
          }
          (*(int *)(gen_frame + 0x1006c)) = 0;
          if (0 < (*(int *)(gen_frame + 0x10048))) {
            do {
              if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)) <= (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060))) break;
              (*(int *)(gen_frame + 0x10064)) = 0;
              if (0 < (int)param_3) {
                (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10044));
                (*(undefined4 * PTR32 *)(gen_frame + 0x10058)) = (undefined4 *)((int)(*(int * PTR32 *)(gen_frame + 0x1004c)) - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10044)));
                do {
                  if ((*(char *)((*(int *)(gen_frame + 0x10064)) + param_6) == '\0') &&
                     (iVar13 = (int)*((short *)GEN_TOP((piVar2[6] +
                                              (int)((*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) +
                                                   (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10058))
                                                                                    + (int)
                                                  (*(undefined4 * PTR32 *)(gen_frame + 0x10068))) + (*(int *)(gen_frame + 0x10054))))) + (*(int *)(gen_frame + 0x1006c))))) * 2) * 2))),
                     -1 < iVar13)) {
                    iVar15 = piVar2[2] * (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060));
                    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar13 * 4)));
                    iVar13 = *piVar2;
                    *(uint *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20) = (*(uint *)(gen_frame + 0x10040));
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c) = piVar2[2];
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18) = iVar15 + iVar13;
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x14) = *(*(undefined4 * PTR32 *)(gen_frame + 0x10068));
                    *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x10) = in_edi;
                    *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0xc) = 0xced5f7;
                    uVar17 = F_00cec9f0(uVar4,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x10),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x14),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x18),
                                          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x1c),
                                          *(uint *)((int)((int *)(gen_frame + 0x1000c)) + iVar5 + 0x20));
                    puVar14 = (undefined4 *)0x0;
                    if (uVar17 == 0) goto LAB_00ced67c;
                  }
                  (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10068)) + 1;
                  iVar13 = (*(int *)(gen_frame + 0x10064)) + 1;
                  (*(int *)(gen_frame + 0x10064)) = iVar13;
                } while (iVar13 < (int)param_3);
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x10060)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) + 1);
              iVar13 = (*(int *)(gen_frame + 0x1006c)) + 1;
              (*(int *)(gen_frame + 0x1006c)) = iVar13;
            } while (iVar13 < (*(int *)(gen_frame + 0x10048)));
          }
          (*(int *)(gen_frame + 0x10054)) = (*(int *)(gen_frame + 0x10054)) + 4;
          puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x10050));
        } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10060)) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10050)));
      }
      puVar12 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) + 1);
      (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = puVar12;
    } while ((int)puVar12 < 8);
  }
LAB_00ced67c: ;
  F_00c47745((*(uint *)(gen_frame + 0x1207c)) ^ (uint)(uint)(gen_frame + 0x12080));
  return (uint)puVar14;
LAB_00ced672: ;
  *(undefined4 *)(in_edi + 0x548) = 0;
  goto LAB_00ced67c;
}

/* ref: FUN_00ced6a0 */
unsigned int F_00ced6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xced6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined8 * param_6 = (undefined8 *)(uintptr_t)gen_a5;
  undefined8 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float * pfVar11;
  float * pfVar12;
  float * pfVar13;
  float * pfVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_18;
  undefined8 * local_14;
  
  uVar10 = *(uint *)&REFG(undefined, 0x113056c);
  uVar9 = *(uint *)&REFG(undefined, 0x1130568);
  uVar8 = *(uint *)&REFG(undefined, 0x1130564);
  uVar7 = *(uint *)&REFG(undefined, 0x1130560);
  pfVar11 = (float *)(in_ecx + -0xc + in_eax * 4);
  pfVar12 = pfVar11 + param_4;
  local_18 = param_3 >> 2;
  if (0 < local_18) {
    pfVar14 = pfVar12 + param_5;
    pfVar13 = pfVar11 + param_5;
    local_14 = param_6 + 4;
    do {
      fVar4 = pfVar12[1];
      fVar5 = pfVar12[2];
      fVar6 = pfVar12[3];
      uVar2 = *param_6;
      uVar3 = *local_14;
      puVar1 = param_6 + 8;
      fVar19 = *pfVar11 - *pfVar12;
      fVar20 = pfVar11[1] - fVar4;
      fVar21 = pfVar11[2] - fVar5;
      fVar22 = pfVar11[3] - fVar6;
      *pfVar11 = *pfVar12 + *pfVar11;
      pfVar11[1] = fVar4 + pfVar11[1];
      pfVar11[2] = fVar5 + pfVar11[2];
      pfVar11[3] = fVar6 + pfVar11[3];
      fVar17 = gen_bits2f((uint)uVar3);
      uVar18 = (uint)((ulonglong)uVar3 >> 0x20);
      fVar15 = gen_bits2f((uint)uVar2);
      uVar16 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar23 = gen_bits2f(uVar18 ^ uVar7);
      fVar24 = gen_bits2f(uVar18 ^ uVar8);
      fVar25 = gen_bits2f(uVar16 ^ uVar9);
      fVar26 = gen_bits2f(uVar16 ^ uVar10);
      *pfVar12 = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar12[1] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar12[2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar12[3] = fVar21 * fVar26 + fVar22 * fVar15;
      fVar4 = pfVar14[1];
      fVar5 = pfVar14[2];
      fVar6 = pfVar14[3];
      param_6 = param_6 + 0x10;
      fVar19 = *pfVar13 - *pfVar14;
      fVar20 = pfVar13[1] - fVar4;
      fVar21 = pfVar13[2] - fVar5;
      fVar22 = pfVar13[3] - fVar6;
      *pfVar13 = *pfVar14 + *pfVar13;
      pfVar13[1] = fVar4 + pfVar13[1];
      pfVar13[2] = fVar5 + pfVar13[2];
      pfVar13[3] = fVar6 + pfVar13[3];
      *pfVar14 = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar14[1] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar14[2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar14[3] = fVar21 * fVar26 + fVar22 * fVar15;
      uVar2 = *puVar1;
      fVar4 = pfVar12[-3];
      fVar5 = pfVar12[-2];
      fVar6 = pfVar12[-1];
      uVar3 = local_14[8];
      local_14 = local_14 + 0x10;
      fVar19 = pfVar11[-4] - pfVar12[-4];
      fVar20 = pfVar11[-3] - fVar4;
      fVar21 = pfVar11[-2] - fVar5;
      fVar22 = pfVar11[-1] - fVar6;
      pfVar11[-4] = pfVar12[-4] + pfVar11[-4];
      pfVar11[-3] = fVar4 + pfVar11[-3];
      pfVar11[-2] = fVar5 + pfVar11[-2];
      pfVar11[-1] = fVar6 + pfVar11[-1];
      fVar17 = gen_bits2f((uint)uVar3);
      uVar18 = (uint)((ulonglong)uVar3 >> 0x20);
      fVar15 = gen_bits2f((uint)uVar2);
      uVar16 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar23 = gen_bits2f(uVar18 ^ uVar7);
      fVar24 = gen_bits2f(uVar18 ^ uVar8);
      fVar25 = gen_bits2f(uVar16 ^ uVar9);
      fVar26 = gen_bits2f(uVar16 ^ uVar10);
      pfVar12[-4] = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar12[-3] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar12[-2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar12[-1] = fVar21 * fVar26 + fVar22 * fVar15;
      fVar4 = pfVar14[-3];
      fVar5 = pfVar14[-2];
      fVar6 = pfVar14[-1];
      fVar19 = pfVar13[-4] - pfVar14[-4];
      fVar20 = pfVar13[-3] - fVar4;
      fVar21 = pfVar13[-2] - fVar5;
      fVar22 = pfVar13[-1] - fVar6;
      pfVar13[-4] = pfVar14[-4] + pfVar13[-4];
      pfVar13[-3] = fVar4 + pfVar13[-3];
      pfVar13[-2] = fVar5 + pfVar13[-2];
      pfVar13[-1] = fVar6 + pfVar13[-1];
      local_18 = local_18 + -1;
      pfVar14[-4] = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar14[-3] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar14[-2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar14[-1] = fVar21 * fVar26 + fVar22 * fVar15;
      pfVar11 = pfVar11 + -8;
      pfVar13 = pfVar13 + -8;
      pfVar12 = pfVar12 + -8;
      pfVar14 = pfVar14 + -8;
    } while (0 < local_18);
  }
  return 0;
}

/* ref: FUN_00ced810 */
unsigned int F_00ced810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xced810u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  float * pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float * pfVar11;
  float * pfVar12;
  undefined8 * puVar13;
  float * pfVar14;
  float * pfVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_14;
  
  uVar10 = *(uint *)&REFG(undefined, 0x113056c);
  uVar9 = *(uint *)&REFG(undefined, 0x1130568);
  uVar8 = *(uint *)&REFG(undefined, 0x1130564);
  uVar7 = *(uint *)&REFG(undefined, 0x1130560);
  pfVar11 = (float *)(param_1 + -0x1c + param_4 * 4);
  local_14 = param_3 >> 2;
  pfVar12 = pfVar11 + param_5;
  if (0 < local_14) {
    puVar13 = (undefined8 *)((int)param_2 + param_7 * 4);
    do {
      uVar2 = *param_2;
      uVar3 = *puVar13;
      fVar4 = pfVar12[5];
      fVar5 = pfVar12[6];
      fVar6 = pfVar12[7];
      pfVar14 = pfVar11 + param_6 + 4;
      fVar20 = pfVar11[4] - pfVar12[4];
      fVar21 = pfVar11[5] - fVar4;
      fVar22 = pfVar11[6] - fVar5;
      fVar23 = pfVar11[7] - fVar6;
      pfVar11[4] = pfVar12[4] + pfVar11[4];
      pfVar11[5] = fVar4 + pfVar11[5];
      pfVar11[6] = fVar5 + pfVar11[6];
      pfVar11[7] = fVar6 + pfVar11[7];
      fVar18 = gen_bits2f((uint)uVar3);
      uVar19 = (uint)((ulonglong)uVar3 >> 0x20);
      fVar16 = gen_bits2f((uint)uVar2);
      uVar17 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar24 = gen_bits2f(uVar19 ^ uVar7);
      fVar25 = gen_bits2f(uVar19 ^ uVar8);
      fVar26 = gen_bits2f(uVar17 ^ uVar9);
      fVar27 = gen_bits2f(uVar17 ^ uVar10);
      pfVar12[4] = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar12[5] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar12[6] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar12[7] = fVar22 * fVar27 + fVar23 * fVar16;
      pfVar1 = pfVar12 + param_6 + 4;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar15 = pfVar12 + param_6 + 4;
      fVar20 = *pfVar14 - *pfVar1;
      fVar21 = pfVar14[1] - fVar4;
      fVar22 = pfVar14[2] - fVar5;
      fVar23 = pfVar14[3] - fVar6;
      *pfVar14 = *pfVar1 + *pfVar14;
      pfVar14[1] = fVar4 + pfVar14[1];
      pfVar14[2] = fVar5 + pfVar14[2];
      pfVar14[3] = fVar6 + pfVar14[3];
      *pfVar15 = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar15[1] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar15[2] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar15[3] = fVar22 * fVar27 + fVar23 * fVar16;
      fVar4 = pfVar12[1];
      fVar5 = pfVar12[2];
      fVar6 = pfVar12[3];
      uVar2 = param_2[param_7];
      uVar3 = puVar13[param_7];
      param_2 = param_2 + param_7 * 2;
      puVar13 = puVar13 + param_7 * 2;
      fVar20 = *pfVar11 - *pfVar12;
      fVar21 = pfVar11[1] - fVar4;
      fVar22 = pfVar11[2] - fVar5;
      fVar23 = pfVar11[3] - fVar6;
      *pfVar11 = *pfVar12 + *pfVar11;
      pfVar11[1] = fVar4 + pfVar11[1];
      pfVar11[2] = fVar5 + pfVar11[2];
      pfVar11[3] = fVar6 + pfVar11[3];
      fVar18 = gen_bits2f((uint)uVar3);
      uVar19 = (uint)((ulonglong)uVar3 >> 0x20);
      pfVar1 = pfVar11 + param_6;
      fVar16 = gen_bits2f((uint)uVar2);
      uVar17 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar24 = gen_bits2f(uVar19 ^ uVar7);
      fVar25 = gen_bits2f(uVar19 ^ uVar8);
      fVar26 = gen_bits2f(uVar17 ^ uVar9);
      fVar27 = gen_bits2f(uVar17 ^ uVar10);
      *pfVar12 = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar12[1] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar12[2] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar12[3] = fVar22 * fVar27 + fVar23 * fVar16;
      pfVar14 = pfVar12 + param_6;
      fVar4 = pfVar14[1];
      fVar5 = pfVar14[2];
      fVar6 = pfVar14[3];
      pfVar15 = pfVar12 + param_6;
      fVar20 = *pfVar1 - *pfVar14;
      fVar21 = pfVar1[1] - fVar4;
      fVar22 = pfVar1[2] - fVar5;
      fVar23 = pfVar1[3] - fVar6;
      *pfVar1 = *pfVar14 + *pfVar1;
      pfVar1[1] = fVar4 + pfVar1[1];
      pfVar1[2] = fVar5 + pfVar1[2];
      pfVar1[3] = fVar6 + pfVar1[3];
      local_14 = local_14 + -1;
      *pfVar15 = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar15[1] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar15[2] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar15[3] = fVar22 * fVar27 + fVar23 * fVar16;
      pfVar11 = pfVar11 + -8;
      pfVar12 = pfVar12 + -8;
    } while (0 < local_14);
  }
  return 0;
}

/* ref: FUN_00ced9b0 */
unsigned int F_00ced9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xced9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  float * pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar1 = *(undefined8 *)((int)in_ecx + in_eax * 4);
  fVar15 = gen_bits2f((uint)uVar1);
  uVar18 = (uint)((ulonglong)uVar1 >> 0x20);
  fVar8 = gen_bits2f((uint)*in_ecx);
  uVar11 = (uint)((ulonglong)*in_ecx >> 0x20);
  fVar22 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130560));
  fVar23 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130564));
  fVar24 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x1130568));
  fVar25 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x113056c));
  uVar1 = *(undefined8 *)((int)in_ecx + in_eax * 0xc);
  fVar16 = gen_bits2f((uint)uVar1);
  uVar18 = (uint)((ulonglong)uVar1 >> 0x20);
  pfVar5 = (float *)(param_4 + -0x1c + param_5 * 4);
  fVar9 = gen_bits2f((uint)in_ecx[in_eax]);
  uVar11 = (uint)((ulonglong)in_ecx[in_eax] >> 0x20);
  fVar17 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130560));
  fVar19 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130564));
  fVar20 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x1130568));
  fVar21 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x113056c));
  pfVar6 = pfVar5 + param_6;
  for (iVar7 = param_3; 0 < iVar7; iVar7 = iVar7 + -1) {
    fVar2 = pfVar6[5];
    fVar3 = pfVar6[6];
    fVar4 = pfVar6[7];
    fVar10 = pfVar5[4] - pfVar6[4];
    fVar12 = pfVar5[5] - fVar2;
    fVar13 = pfVar5[6] - fVar3;
    fVar14 = pfVar5[7] - fVar4;
    pfVar5[4] = pfVar6[4] + pfVar5[4];
    pfVar5[5] = fVar2 + pfVar5[5];
    pfVar5[6] = fVar3 + pfVar5[6];
    pfVar5[7] = fVar4 + pfVar5[7];
    pfVar6[4] = fVar12 * fVar22 + fVar10 * fVar15;
    pfVar6[5] = fVar10 * fVar23 + fVar12 * fVar15;
    pfVar6[6] = fVar14 * fVar24 + fVar13 * fVar8;
    pfVar6[7] = fVar13 * fVar25 + fVar14 * fVar8;
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    fVar4 = pfVar6[3];
    fVar10 = *pfVar5 - *pfVar6;
    fVar12 = pfVar5[1] - fVar2;
    fVar13 = pfVar5[2] - fVar3;
    fVar14 = pfVar5[3] - fVar4;
    *pfVar5 = *pfVar6 + *pfVar5;
    pfVar5[1] = fVar2 + pfVar5[1];
    pfVar5[2] = fVar3 + pfVar5[2];
    pfVar5[3] = fVar4 + pfVar5[3];
    *pfVar6 = fVar12 * fVar17 + fVar10 * fVar16;
    pfVar6[1] = fVar10 * fVar19 + fVar12 * fVar16;
    pfVar6[2] = fVar14 * fVar20 + fVar13 * fVar9;
    pfVar6[3] = fVar13 * fVar21 + fVar14 * fVar9;
    pfVar5 = pfVar5 - param_7;
    pfVar6 = pfVar6 - param_7;
  }
  return 0;
}

/* ref: FUN_00cedaa0 */
unsigned int F_00cedaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcedaa0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
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
  
  fVar1 = *param_3 + *in_ecx;
  fVar3 = param_3[1] + in_ecx[1];
  fVar5 = param_3[2] + in_ecx[2];
  fVar6 = param_3[3] + in_ecx[3];
  fVar7 = *in_ecx - *param_3;
  fVar8 = in_ecx[1] - param_3[1];
  fVar9 = in_ecx[2] - param_3[2];
  fVar10 = in_ecx[3] - param_3[3];
  fVar11 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ *(uint *)&REFG(undefined, 0x1130584));
  fVar12 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ *(uint *)&REFG(undefined, 0x1130588));
  fVar3 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ *(uint *)&REFG(undefined, 0x113058c));
  fVar2 = gen_bits2f((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x1130570));
  fVar4 = gen_bits2f((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x1130574));
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x1130578));
  fVar7 = gen_bits2f((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x113057c));
  in_eax[-3] = gen_bits2f((uint)gen_fl2bits(fVar1) ^ *(uint *)&REFG(undefined, 0x1130580)) + fVar5;
  in_eax[-2] = fVar11 + fVar6;
  in_eax[-1] = fVar12 + fVar5;
  *in_eax = fVar3 + fVar6;
  in_eax[-7] = fVar2 + fVar9;
  in_eax[-6] = fVar4 + fVar10;
  in_eax[-5] = fVar8 + fVar9;
  in_eax[-4] = fVar7 + fVar10;
  return 0;
}

/* ref: FUN_00cedaf0 */
unsigned int F_00cedaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcedaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar4 = *(float *)&REFG(undefined, 0x11305a0);
  uVar1 = param_3 + param_4 * 4;
  uVar7 = uVar1 + in_edx * -0x40;
  fVar2 = *((float *)GEN_TOP((param_5 + (in_eax >> 3) * 4)));
  if (uVar7 < uVar1) {
    pfVar5 = (float *)(uVar1 - 0x3c);
    iVar6 = ((uVar1 - uVar7) - 1 >> 6) + 1;
    do {
      fVar9 = pfVar5[0xe];
      fVar10 = pfVar5[0xf];
      fVar26 = pfVar5[0xc] - pfVar5[4];
      fVar27 = pfVar5[0xd] - pfVar5[5];
      fVar14 = pfVar5[4] + pfVar5[0xc];
      fVar16 = pfVar5[5] + pfVar5[0xd];
      fVar18 = pfVar5[6] + fVar9;
      fVar20 = pfVar5[7] + fVar10;
      uVar8 = (uint)gen_fl2bits(pfVar5[8] - *pfVar5) ^ *(uint *)&REFG(undefined, 0x1130560);
      fVar11 = gen_bits2f((uint)gen_fl2bits(pfVar5[9] - pfVar5[1]) ^ *(uint *)&REFG(undefined, 0x1130564));
      fVar12 = gen_bits2f((uint)gen_fl2bits(pfVar5[10] - pfVar5[2]) ^ *(uint *)&REFG(undefined, 0x1130568));
      fVar13 = gen_bits2f((uint)gen_fl2bits(pfVar5[0xb] - pfVar5[3]) ^ *(uint *)&REFG(undefined, 0x113056c));
      fVar22 = *pfVar5 + pfVar5[8];
      fVar23 = pfVar5[1] + pfVar5[9];
      fVar24 = pfVar5[2] + pfVar5[10];
      fVar25 = pfVar5[3] + pfVar5[0xb];
      fVar15 = fVar22 + fVar14;
      fVar17 = fVar23 + fVar16;
      fVar19 = fVar24 + fVar18;
      fVar21 = fVar25 + fVar20;
      fVar14 = fVar14 - fVar22;
      fVar16 = fVar16 - fVar23;
      fVar18 = fVar18 - fVar24;
      fVar20 = fVar20 - fVar25;
      fVar24 = gen_bits2f((uint)gen_fl2bits(fVar17) ^ *(uint *)&REFG(undefined, 0x1130584));
      fVar25 = gen_bits2f((uint)gen_fl2bits(fVar15) ^ *(uint *)&REFG(undefined, 0x1130588));
      fVar17 = gen_bits2f((uint)gen_fl2bits(fVar17) ^ *(uint *)&REFG(undefined, 0x113058c));
      fVar22 = gen_bits2f((uint)gen_fl2bits(fVar16) ^ *(uint *)&REFG(undefined, 0x1130570));
      fVar23 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x1130574));
      fVar16 = gen_bits2f((uint)gen_fl2bits(fVar16) ^ *(uint *)&REFG(undefined, 0x1130578));
      fVar14 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x113057c));
      pfVar5[0xc] = gen_bits2f((uint)gen_fl2bits(fVar15) ^ *(uint *)&REFG(undefined, 0x1130580)) + fVar19;
      pfVar5[0xd] = fVar24 + fVar21;
      pfVar5[0xe] = fVar25 + fVar19;
      pfVar5[0xf] = fVar17 + fVar21;
      uVar3 = *(uint *)&REFG(undefined, 0x113059c);
      uVar7 = *(uint *)&REFG(undefined, 0x1130598);
      uVar1 = *(uint *)&REFG(undefined, 0x1130590);
      pfVar5[8] = fVar22 + fVar18;
      pfVar5[9] = fVar23 + fVar20;
      pfVar5[10] = fVar16 + fVar18;
      pfVar5[0xb] = fVar14 + fVar20;
      fVar23 = (gen_bits2f(uVar8 ^ *(uint *)&REFG(undefined, 0x1130550)) + fVar11) * fVar2;
      fVar18 = (gen_bits2f(uVar8 ^ *(uint *)&REFG(undefined, 0x1130554)) + fVar11) * fVar2;
      fVar19 = (gen_bits2f(uVar1 ^ *(uint *)&REFG(undefined, 0x1130558)) + fVar13) * fVar4;
      fVar12 = (gen_bits2f(uVar1 ^ *(uint *)&REFG(undefined, 0x113055c)) + fVar12) * fVar4;
      fVar22 = (gen_bits2f((uint)gen_fl2bits(fVar27) ^ *(uint *)&REFG(undefined, 0x1130550)) + fVar26) * fVar2;
      fVar14 = (gen_bits2f((uint)gen_fl2bits(fVar26) ^ *(uint *)&REFG(undefined, 0x1130554)) + fVar27) * fVar2;
      fVar16 = (gen_bits2f(uVar3 ^ *(uint *)&REFG(undefined, 0x1130558)) + (fVar9 - pfVar5[6])) * fVar4;
      fVar17 = (gen_bits2f(uVar7 ^ *(uint *)&REFG(undefined, 0x113055c)) + (fVar10 - pfVar5[7])) * fVar4;
      fVar9 = fVar23 + fVar22;
      fVar11 = fVar18 + fVar14;
      fVar13 = fVar19 + fVar16;
      fVar15 = fVar12 + fVar17;
      fVar22 = fVar22 - fVar23;
      fVar14 = fVar14 - fVar18;
      fVar16 = fVar16 - fVar19;
      fVar17 = fVar17 - fVar12;
      fVar23 = gen_bits2f((uint)gen_fl2bits(fVar11) ^ *(uint *)&REFG(undefined, 0x1130584));
      fVar18 = gen_bits2f((uint)gen_fl2bits(fVar9) ^ *(uint *)&REFG(undefined, 0x1130588));
      fVar11 = gen_bits2f((uint)gen_fl2bits(fVar11) ^ *(uint *)&REFG(undefined, 0x113058c));
      fVar10 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x1130570));
      fVar12 = gen_bits2f((uint)gen_fl2bits(fVar22) ^ *(uint *)&REFG(undefined, 0x1130574));
      fVar14 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x1130578));
      fVar22 = gen_bits2f((uint)gen_fl2bits(fVar22) ^ *(uint *)&REFG(undefined, 0x113057c));
      pfVar5[4] = gen_bits2f((uint)gen_fl2bits(fVar9) ^ *(uint *)&REFG(undefined, 0x1130580)) + fVar13;
      pfVar5[5] = fVar23 + fVar15;
      pfVar5[6] = fVar18 + fVar13;
      pfVar5[7] = fVar11 + fVar15;
      *pfVar5 = fVar10 + fVar16;
      pfVar5[1] = fVar12 + fVar17;
      pfVar5[2] = fVar14 + fVar16;
      pfVar5[3] = fVar22 + fVar17;
      pfVar5 = pfVar5 + -0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: FUN_00cedc20 */
uint F_00cedc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcedc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x100a0];
  float * pfVar1;
  float * pfVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint * puVar5;
  float * pfVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  float * pfVar16;
  float * pfVar17;
  int iVar18;
  float * pfVar19;
  float * pfVar20;
  uint uVar21;
  ushort * puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint * puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  uint uVar44;
  float fVar45;
  uint uVar46;
  float fVar47;
  uint uVar48;
  
  uVar48 = *(uint *)&REFG(undefined, 0x113059c);
  uVar46 = *(uint *)&REFG(undefined, 0x1130598);
  uVar44 = *(uint *)&REFG(undefined, 0x1130594);
  uVar42 = *(uint *)&REFG(undefined, 0x1130590);
  uVar15 = *(uint *)&REFG(undefined, 0x113056c);
  uVar14 = *(uint *)&REFG(undefined, 0x1130568);
  uVar24 = *(uint *)&REFG(undefined, 0x1130564);
  uVar21 = *(uint *)&REFG(undefined, 0x1130560);
  (*(uint *)(gen_frame + 0x10098)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  iVar26 = (int)param_1 >> 1;
  iVar18 = (int)param_1 >> 2;
  (*(uint *)(gen_frame + 0x10084)) = (int)param_1 >> 3;
  (*(int *)(gen_frame + 0x10058)) = iVar26;
  (*(float * PTR32 *)(gen_frame + 0x10074)) = (float *)iVar18;
  ((int *)(gen_frame + 0x1000c))[0xe] = 0xcedc58;
  iVar25 = -(iVar26 * 4 + 0xf);
  pfVar6 = *(float * PTR32 *)(param_2 + 0x400 + param_3 * 4);
  (*(float * PTR32 *)(gen_frame + 0x10070)) = pfVar6;
  (*(float * PTR32 *)(gen_frame + 0x10090)) = pfVar6;
  pfVar17 = (float *)((int)this + iVar26 * 4);
  (*(float * PTR32 *)(gen_frame + 0x10060)) = pfVar17;
  pfVar16 = (float *)((int)&(*(int *)(gen_frame + 0x10054)) + iVar25 + 3 & 0xfffffff0);
  pfVar19 = pfVar16 + iVar26 + -4;
  iVar23 = (int)pfVar6 + ((iVar26 * 4 + -0x10) - (int)pfVar19);
  (*(float * PTR32 *)(gen_frame + 0x10064)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0x1005c)) = pfVar19;
  (*(float * PTR32 *)(gen_frame + 0x1008c)) = pfVar19;
  (*(float * PTR32 *)(gen_frame + 0x10088)) = this;
  (*(float * PTR32 *)(gen_frame + 0x10094)) = pfVar16;
  (*(int *)(gen_frame + 0x10078)) = iVar23;
  do {
    fVar29 = *(*(float * PTR32 *)(gen_frame + 0x10090));
    fVar32 = (*(float * PTR32 *)(gen_frame + 0x10090))[1];
    fVar35 = (*(float * PTR32 *)(gen_frame + 0x10090))[2];
    fVar38 = (*(float * PTR32 *)(gen_frame + 0x10090))[3];
    pfVar19 = (float *)(iVar23 + (int)(*(float * PTR32 *)(gen_frame + 0x1008c)));
    fVar40 = *pfVar19;
    fVar41 = pfVar19[1];
    fVar43 = pfVar19[2];
    fVar45 = pfVar19[3];
    fVar47 = (*(float * PTR32 *)(gen_frame + 0x10088))[4];
    fVar8 = (*(float * PTR32 *)(gen_frame + 0x10088))[5];
    fVar28 = (*(float * PTR32 *)(gen_frame + 0x10088))[6];
    fVar31 = (*(float * PTR32 *)(gen_frame + 0x10088))[7];
    fVar34 = *(*(float * PTR32 *)(gen_frame + 0x10088));
    fVar37 = (*(float * PTR32 *)(gen_frame + 0x10088))[1];
    fVar9 = (*(float * PTR32 *)(gen_frame + 0x10088))[2];
    fVar10 = (*(float * PTR32 *)(gen_frame + 0x10088))[3];
    (*(float * PTR32 *)(gen_frame + 0x10090)) = (*(float * PTR32 *)(gen_frame + 0x10090)) + 4;
    *(*(float * PTR32 *)(gen_frame + 0x1008c)) = gen_bits2f((uint)gen_fl2bits(fVar35) ^ uVar21) * fVar28 + fVar47 * fVar38;
    (*(float * PTR32 *)(gen_frame + 0x1008c))[1] = gen_bits2f((uint)gen_fl2bits(fVar38) ^ uVar24) * fVar28 + fVar47 * fVar35;
    (*(float * PTR32 *)(gen_frame + 0x1008c))[2] = gen_bits2f((uint)gen_fl2bits(fVar29) ^ uVar14) * fVar9 + fVar34 * fVar32;
    (*(float * PTR32 *)(gen_frame + 0x1008c))[3] = gen_bits2f((uint)gen_fl2bits(fVar32) ^ uVar15) * fVar9 + fVar34 * fVar29;
    (*(float * PTR32 *)(gen_frame + 0x1008c)) = (*(float * PTR32 *)(gen_frame + 0x1008c)) + -4;
    pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10088)) + 8;
    *(*(float * PTR32 *)(gen_frame + 0x10094)) = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar43) ^ uVar21) * fVar37
                                            + fVar10 * fVar45) ^ uVar42);
    (*(float * PTR32 *)(gen_frame + 0x10094))[1] = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar45) ^ uVar24) *
                                              fVar37 + fVar10 * fVar43) ^ uVar44);
    (*(float * PTR32 *)(gen_frame + 0x10094))[2] = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar40) ^ uVar14) * fVar8
                                              + fVar31 * fVar41) ^ uVar46);
    (*(float * PTR32 *)(gen_frame + 0x10094))[3] = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar41) ^ uVar15) * fVar8
                                              + fVar31 * fVar40) ^ uVar48);
    (*(float * PTR32 *)(gen_frame + 0x10094)) = (*(float * PTR32 *)(gen_frame + 0x10094)) + 4;
    (*(float * PTR32 *)(gen_frame + 0x10088)) = pfVar19;
  } while (pfVar19 != pfVar17);
  pfVar17 = pfVar6 + iVar26 + -8;
  (*(float * PTR32 *)(gen_frame + 0x10094)) = pfVar17;
  (*(int *)(gen_frame + 0x10078)) = iVar18 * 4;
  (*(float * PTR32 *)(gen_frame + 0x1007c)) = pfVar16 + iVar18;
  pfVar19 = (float *)(iVar18 * 4 + (int)this);
  (*(float * PTR32 *)(gen_frame + 0x10090)) = pfVar19;
  if (pfVar6 <= pfVar17) {
    (*(float * PTR32 *)(gen_frame + 0x10088)) = (float *)((int)pfVar16 - (int)this);
    pfVar20 = pfVar19 - iVar18;
    iVar18 = (int)(pfVar16 + iVar18) - (int)pfVar19;
    (*(int *)(gen_frame + 0x10078)) = iVar18;
    do {
      fVar29 = *pfVar17;
      fVar32 = pfVar17[1];
      fVar35 = pfVar17[4];
      fVar38 = pfVar17[5];
      pfVar1 = (float *)(iVar18 + (int)pfVar19);
      fVar40 = pfVar1[1];
      fVar41 = pfVar1[2];
      fVar43 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP((((int)pfVar16 - (int)this) + (int)pfVar20)));
      fVar45 = pfVar2[1];
      fVar47 = pfVar2[2];
      fVar8 = pfVar2[3];
      fVar28 = *pfVar1 - *pfVar2;
      fVar31 = fVar40 - fVar45;
      fVar34 = fVar41 - fVar47;
      fVar37 = fVar43 - fVar8;
      *pfVar19 = *pfVar2 + *pfVar1;
      pfVar19[1] = fVar45 + fVar40;
      pfVar19[2] = fVar47 + fVar41;
      pfVar19[3] = fVar8 + fVar43;
      pfVar19 = pfVar19 + 4;
      pfVar17 = pfVar17 + -8;
      (*(float * PTR32 *)(gen_frame + 0x10090)) = pfVar19;
      *pfVar20 = fVar31 * gen_bits2f((uint)gen_fl2bits(fVar38) ^ uVar21) + fVar28 * fVar35;
      pfVar20[1] = fVar28 * gen_bits2f((uint)gen_fl2bits(fVar38) ^ uVar24) + fVar31 * fVar35;
      pfVar20[2] = fVar37 * gen_bits2f((uint)gen_fl2bits(fVar32) ^ uVar14) + fVar34 * fVar29;
      pfVar20[3] = fVar34 * gen_bits2f((uint)gen_fl2bits(fVar32) ^ uVar15) + fVar37 * fVar29;
      pfVar20 = pfVar20 + 4;
      (*(float * PTR32 *)(gen_frame + 0x10094)) = pfVar17;
    } while (pfVar6 <= pfVar17);
  }
  iVar18 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar18 == 0; iVar18 = iVar18 + -1) {
    }
  }
  (*(float * PTR32 *)(gen_frame + 0x10090)) = (float *)iVar18;
  if (param_1 != 0) {
    (*(float * PTR32 *)(gen_frame + 0x10090)) = (float *)(iVar18 + 1);
  }
  *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38) = pfVar6;
  uVar21 = -((int)param_1 >> 3);
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34) = -(int)(*(float * PTR32 *)(gen_frame + 0x10074));
  *(uint *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30) = uVar21;
  (*(float * PTR32 *)(gen_frame + 0x10088)) = (float *)uVar21;
  (*(int *)(gen_frame + 0x10078)) = (int)param_1 >> 4;
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c) = (int)param_1 >> 4;
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28) = 0xcede05;
  F_00ced6a0(iVar26 + -1,this,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10088));
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28) = 0x10;
  *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x24) = pfVar17;
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10070));
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x20) = -(*(int *)(gen_frame + 0x10078));
  (*(float * PTR32 *)(gen_frame + 0x1007c)) = ((float *)GEN_TOP(-(*(int *)(gen_frame + 0x10078))));
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x1c) = iVar26 + -1;
  (*(int *)(gen_frame + 0x10078)) = (int)param_1 >> 5;
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x18) = (int)param_1 >> 5;
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x14) = 0xcede2c;
  F_00ced810(this,pfVar17,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x18),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x1c),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x20),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x24),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28));
  pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10088));
  uVar21 = (*(uint *)(gen_frame + 0x10084));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x1007c));
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x14) = 0x10;
  *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x10) = pfVar19;
  *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0xc) = pfVar17;
  iVar18 = (*(int *)(gen_frame + 0x10078));
  *(uint *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 8) = iVar26 + uVar21 * -2 + -1;
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 4) = iVar18;
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10070));
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25) = 0xcede50;
  F_00ced810(this,pfVar17,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 4),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 8),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0xc),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x10),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x14));
  iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x10090)) + -4 >> 1;
  (*(float * PTR32 *)(gen_frame + 0x10094)) = (float *)0x2;
  (*(int *)(gen_frame + 0x10080)) = iVar18;
  uVar21 = 4;
  if (2 < iVar18) {
    do {
      bVar7 = (byte)(*(float * PTR32 *)(gen_frame + 0x10094));
      iVar18 = (int)param_1 >> (bVar7 + 2 & 0x1f);
      uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
      (*(uint *)(gen_frame + 0x10084)) = uVar21;
      (*(float * PTR32 *)(gen_frame + 0x1007c)) = (float *)(iVar18 >> 1);
      uVar24 = 1 << (bVar7 & 0x1f) | 1U >> 0x20 - (bVar7 & 0x1f);
      (*(undefined * PTR32 *)(gen_frame + 0x1006c)) = (undefined *)uVar24;
      if (0 < (int)uVar21) {
        (*(int *)(gen_frame + 0x10050)) = -iVar18;
        (*(int *)(gen_frame + 0x10068)) = iVar18 * -2;
        (*(float * PTR32 *)(gen_frame + 0x1008c)) = (float *)(iVar26 - 1);
        (*(int *)(gen_frame + 0x10054)) = -(iVar18 >> 1);
        (*(float * PTR32 *)(gen_frame + 0x10088)) = (float *)(uVar24 << 3 | uVar24 >> 0x1d);
        (*(uint *)(gen_frame + 0x10084)) = (uVar21 - 1 >> 1) + 1;
        (*(float * PTR32 *)(gen_frame + 0x1007c)) = ((float *)GEN_TOP(((int)param_1 >> (bVar7 + 4 & 0x1f))));
        do {
          pfVar17 = (*(float * PTR32 *)(gen_frame + 0x1007c));
          iVar18 = (*(int *)(gen_frame + 0x10050));
          *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38) = (*(float * PTR32 *)(gen_frame + 0x10088));
          iVar23 = (*(int *)(gen_frame + 0x10054));
          *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34) = iVar18;
          pfVar19 = (*(float * PTR32 *)(gen_frame + 0x1008c));
          *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30) = iVar23;
          *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c) = pfVar19;
          *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28) = pfVar17;
          pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10070));
          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x24) = 0xcedefe;
          F_00ced810(this,pfVar17,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38));
          (*(float * PTR32 *)(gen_frame + 0x1008c)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x1008c)) + (*(int *)(gen_frame + 0x10068)));
          uVar21 = (*(uint *)(gen_frame + 0x10084)) - 1;
          (*(uint *)(gen_frame + 0x10084)) = uVar21;
        } while (uVar21 != 0);
      }
      iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x10094)) + 1;
      uVar21 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x1006c))) << 1 | (uint)((int)(*(undefined * PTR32 *)(gen_frame + 0x1006c)) < 0);
      (*(float * PTR32 *)(gen_frame + 0x10094)) = (float *)iVar18;
    } while (iVar18 < (*(int *)(gen_frame + 0x10080)));
  }
  iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x10090)) + -7;
  bVar7 = (byte)(*(float * PTR32 *)(gen_frame + 0x10094)) & 0x1f;
  pfVar17 = (float *)(1 << bVar7 | 1U >> 0x20 - bVar7);
  if ((int)(*(float * PTR32 *)(gen_frame + 0x10094)) < iVar18) {
    (*(float * PTR32 *)(gen_frame + 0x10090)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x10094)) + 6);
    (*(float * PTR32 *)(gen_frame + 0x1007c)) = (float *)(iVar18 - (int)(*(float * PTR32 *)(gen_frame + 0x10094)));
    do {
      uVar24 = (int)param_1 >> ((byte)(*(float * PTR32 *)(gen_frame + 0x10090)) - 4 & 0x1f);
      uVar21 = (int)((int)(uintptr_t)pfVar17) << 3 | (uint)((int)(uintptr_t)pfVar17) >> 0x1d;
      (*(uint *)(gen_frame + 0x10084)) = uVar21;
      iVar18 = (int)uVar24 >> 1;
      (*(float * PTR32 *)(gen_frame + 0x10094)) = (float *)(iVar26 + -1);
      (*(int *)(gen_frame + 0x10080)) = iVar18;
      iVar26 = (int)param_1 >> ((byte)(*(float * PTR32 *)(gen_frame + 0x10090)) & 0x1f);
      (*(float * PTR32 *)(gen_frame + 0x10088)) = (float *)((int)((int)(uintptr_t)pfVar17) << 1 | (uint)((int)pfVar17 < 0));
      (*(undefined * PTR32 *)(gen_frame + 0x1006c)) = (undefined *)uVar24;
      (*(float * PTR32 *)(gen_frame + 0x1008c)) = (*(float * PTR32 *)(gen_frame + 0x10070));
      if (0 < iVar26) {
        (*(int *)(gen_frame + 0x10080)) = -iVar18;
        (*(int *)(gen_frame + 0x10068)) = uVar21 << 4;
        do {
          pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10094));
          iVar18 = (*(int *)(gen_frame + 0x10080));
          *(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38) = (*(undefined * PTR32 *)(gen_frame + 0x1006c));
          pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10088));
          *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34) = iVar18;
          uVar21 = (*(uint *)(gen_frame + 0x10084));
          *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30) = pfVar19;
          pfVar19 = (*(float * PTR32 *)(gen_frame + 0x1008c));
          *(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c) = this;
          *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28) = pfVar17;
          *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x24) = 0xcedfac;
          F_00ced9b0(uVar21,pfVar19,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x28),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34),
                       *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38));
          (*(float * PTR32 *)(gen_frame + 0x1008c)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x1008c)) + (*(int *)(gen_frame + 0x10068)));
          (*(float * PTR32 *)(gen_frame + 0x10094)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x10094)) + -8);
          iVar26 = iVar26 + -1;
        } while (0 < iVar26);
      }
      (*(float * PTR32 *)(gen_frame + 0x10090)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x10090)) + 1);
      iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x1007c)) + -1;
      (*(float * PTR32 *)(gen_frame + 0x1007c)) = (float *)iVar18;
      pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10088));
      iVar26 = (*(int *)(gen_frame + 0x10058));
    } while (iVar18 != 0);
  }
  iVar18 = (*(int *)(gen_frame + 0x10078));
  *(float * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38) = (*(float * PTR32 *)(gen_frame + 0x10070));
  *(int *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34) = iVar26 + -1;
  *(undefined * PTR32 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30) = this;
  *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x2c) = 0xcedfe9;
  F_00cedaf0(param_1,iVar18,*(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x30),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x34),
               *(undefined4 *)((int)((int *)(gen_frame + 0x1000c)) + iVar25 + 0x38));
  puVar22 = *(ushort * PTR32 *)(param_2 + 0x420 + param_3 * 4);
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10064)) + (int)(*(float * PTR32 *)(gen_frame + 0x10074)) + -4;
  if ((*(float * PTR32 *)(gen_frame + 0x10064)) <= pfVar17) {
    iVar25 = (int)(*(float * PTR32 *)(gen_frame + 0x1005c)) - (int)pfVar17;
    (*(int *)(gen_frame + 0x10080)) = iVar25;
    do {
      puVar3 = (undefined4 *)((int)this + (uint)*puVar22 * 4);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      fVar29 = gen_bits2f(puVar3[2]);
      fVar32 = gen_bits2f(puVar3[3]);
      puVar3 = (undefined4 *)((int)this + (uint)puVar22[1] * 4);
      uVar13 = *puVar3;
      fVar35 = gen_bits2f(puVar3[2]);
      fVar38 = gen_bits2f(puVar3[3]);
      puVar4 = (undefined4 *)(iVar25 + (int)pfVar17);
      *puVar4 = puVar3[1];
      puVar4[1] = uVar13;
      puVar4[2] = uVar12;
      puVar4[3] = uVar11;
      *pfVar17 = fVar38;
      pfVar17[1] = fVar35;
      pfVar17[2] = fVar32;
      pfVar17[3] = fVar29;
      pfVar17 = pfVar17 + -4;
      puVar22 = puVar22 + 2;
    } while ((*(float * PTR32 *)(gen_frame + 0x10064)) <= pfVar17);
  }
  uVar15 = *(uint *)&REFG(undefined, 0x113056c);
  uVar14 = *(uint *)&REFG(undefined, 0x1130568);
  uVar24 = *(uint *)&REFG(undefined, 0x1130564);
  uVar21 = *(uint *)&REFG(undefined, 0x1130560);
  (*(float * PTR32 *)(gen_frame + 0x1008c)) = (float *)*(uint * PTR32 *)(param_2 + 0x410 + param_3 * 4);
  (*(float * PTR32 *)(gen_frame + 0x10074)) = (*(float * PTR32 *)(gen_frame + 0x10064));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x1005c));
  if ((*(float * PTR32 *)(gen_frame + 0x10064)) < (*(float * PTR32 *)(gen_frame + 0x1005c))) {
    do {
      uVar42 = (uint)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x1008c)));
      pfVar19 = (*(float * PTR32 *)(gen_frame + 0x1008c)) + 1;
      puVar27 = (uint *)((*(float * PTR32 *)(gen_frame + 0x1008c)) + 2);
      pfVar6 = (*(float * PTR32 *)(gen_frame + 0x1008c)) + 3;
      (*(float * PTR32 *)(gen_frame + 0x1008c)) = (*(float * PTR32 *)(gen_frame + 0x1008c)) + 4;
      fVar41 = *(*(float * PTR32 *)(gen_frame + 0x10074)) + gen_bits2f((uint)gen_fl2bits(pfVar17[2]) ^ uVar21);
      fVar43 = (*(float * PTR32 *)(gen_frame + 0x10074))[1] + gen_bits2f((uint)gen_fl2bits(pfVar17[3]) ^ uVar24);
      fVar45 = (*(float * PTR32 *)(gen_frame + 0x10074))[2] + gen_bits2f((uint)gen_fl2bits(*pfVar17) ^ uVar14);
      fVar47 = (*(float * PTR32 *)(gen_frame + 0x10074))[3] + gen_bits2f((uint)gen_fl2bits(pfVar17[1]) ^ uVar15);
      fVar29 = *(*(float * PTR32 *)(gen_frame + 0x10074)) - gen_bits2f((uint)gen_fl2bits(pfVar17[2]) ^ uVar21);
      fVar32 = (*(float * PTR32 *)(gen_frame + 0x10074))[1] - gen_bits2f((uint)gen_fl2bits(pfVar17[3]) ^ uVar24);
      fVar35 = (*(float * PTR32 *)(gen_frame + 0x10074))[2] - gen_bits2f((uint)gen_fl2bits(*pfVar17) ^ uVar14);
      fVar38 = (*(float * PTR32 *)(gen_frame + 0x10074))[3] - gen_bits2f((uint)gen_fl2bits(pfVar17[1]) ^ uVar15);
      fVar40 = fVar32 * gen_bits2f(uVar42 ^ uVar21) + fVar29 * *pfVar19;
      fVar29 = fVar29 * gen_bits2f(uVar42 ^ uVar24) + fVar32 * *pfVar19;
      fVar32 = fVar38 * gen_bits2f(*puVar27 ^ uVar14) + fVar35 * *pfVar6;
      fVar35 = fVar35 * gen_bits2f(*puVar27 ^ uVar15) + fVar38 * *pfVar6;
      *(*(float * PTR32 *)(gen_frame + 0x10074)) = fVar40 + fVar41;
      (*(float * PTR32 *)(gen_frame + 0x10074))[1] = fVar29 + fVar43;
      (*(float * PTR32 *)(gen_frame + 0x10074))[2] = fVar32 + fVar45;
      (*(float * PTR32 *)(gen_frame + 0x10074))[3] = fVar35 + fVar47;
      *pfVar17 = gen_bits2f((uint)gen_fl2bits(fVar45 - fVar32) ^ uVar14);
      pfVar17[1] = gen_bits2f((uint)gen_fl2bits(fVar47 - fVar35) ^ uVar15);
      pfVar17[2] = gen_bits2f((uint)gen_fl2bits(fVar41 - fVar40) ^ uVar21);
      pfVar17[3] = gen_bits2f((uint)gen_fl2bits(fVar43 - fVar29) ^ uVar24);
      pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10074)) + 4;
      pfVar17 = pfVar17 + -4;
      (*(float * PTR32 *)(gen_frame + 0x10074)) = pfVar19;
    } while (pfVar19 < pfVar17);
  }
  uVar15 = *(uint *)&REFG(undefined, 0x113059c);
  uVar14 = *(uint *)&REFG(undefined, 0x1130598);
  uVar24 = *(uint *)&REFG(undefined, 0x1130594);
  uVar21 = *(uint *)&REFG(undefined, 0x1130590);
  pfVar19 = ((float *)GEN_TOP((*(int *)(param_2 + 0x408 + param_3 * 4) + iVar26 * 4 + -0x20)));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10064)) + iVar26 + -8;
  iVar25 = (int)this + param_1 * 4 + -0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x1006c)) = this;
  puVar27 = (uint *)((int)this + iVar26 * 4 + -0x10);
  (*(int *)(gen_frame + 0x10080)) = iVar25;
  if ((*(float * PTR32 *)(gen_frame + 0x10064)) <= pfVar17) {
    iVar26 = (int)(*(float * PTR32 *)(gen_frame + 0x10060)) - (int)this;
    iVar25 = iVar25 - (int)puVar27;
    (*(int *)(gen_frame + 0x10080)) = iVar25;
    (*(int *)(gen_frame + 0x10068)) = iVar26;
    do {
      fVar29 = *pfVar19;
      fVar32 = pfVar19[1];
      fVar35 = pfVar19[2];
      fVar38 = pfVar19[3];
      fVar40 = pfVar19[4];
      fVar41 = pfVar19[5];
      fVar43 = pfVar19[6];
      fVar45 = pfVar19[7];
      fVar47 = pfVar17[4];
      fVar8 = pfVar17[5];
      fVar28 = pfVar17[6];
      fVar31 = pfVar17[7];
      fVar34 = *pfVar17;
      fVar37 = pfVar17[1];
      fVar9 = pfVar17[2];
      fVar10 = pfVar17[3];
      fVar30 = fVar28 * fVar45 - fVar31 * fVar43;
      fVar33 = fVar47 * fVar41 - fVar8 * fVar40;
      fVar36 = fVar9 * fVar38 - fVar10 * fVar35;
      fVar39 = fVar34 * fVar32 - fVar37 * fVar29;
      *(float *)this = fVar30;
      *(float *)((int)this + 4) = fVar33;
      *(float *)((int)this + 8) = fVar36;
      *(float *)((int)this + 0xc) = fVar39;
      uVar42 = (uint)gen_fl2bits(fVar28 * fVar43 + fVar31 * fVar45) ^ uVar21;
      uVar44 = (uint)gen_fl2bits(fVar47 * fVar40 + fVar8 * fVar41) ^ uVar24;
      uVar46 = (uint)gen_fl2bits(fVar9 * fVar35 + fVar10 * fVar38) ^ uVar14;
      uVar48 = (uint)gen_fl2bits(fVar34 * fVar29 + fVar37 * fVar32) ^ uVar15;
      *puVar27 = (uint)gen_fl2bits(fVar39) ^ uVar15;
      puVar27[1] = (uint)gen_fl2bits(fVar36) ^ uVar14;
      puVar27[2] = (uint)gen_fl2bits(fVar33) ^ uVar24;
      puVar27[3] = (uint)gen_fl2bits(fVar30) ^ uVar21;
      puVar5 = (uint *)(iVar26 + (int)this);
      *puVar5 = uVar42;
      puVar5[1] = uVar44;
      puVar5[2] = uVar46;
      puVar5[3] = uVar48;
      puVar5 = (uint *)(iVar25 + (int)puVar27);
      *puVar5 = uVar48;
      puVar5[1] = uVar46;
      puVar5[2] = uVar44;
      puVar5[3] = uVar42;
      pfVar17 = pfVar17 + -8;
      pfVar19 = pfVar19 + -8;
      this = (undefined *)((int)this + 0x10);
      puVar27 = puVar27 + -4;
    } while ((*(float * PTR32 *)(gen_frame + 0x10064)) <= pfVar17);
  }
  F_00c47745((*(uint *)(gen_frame + 0x10098)) ^ (uint)(uint)(gen_frame + 0x0));
  return (uint)pfVar17;
}

/* ref: FUN_00cee1d0 */
uint F_00cee1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcee1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  short * param_6 = (short *)(uintptr_t)gen_a5;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float * pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_8;
  
  iVar1 = in_eax >> 1;
  uVar2 = (uint)*((byte *)GEN_TOP((*((byte *)GEN_TOP((*(int *)(param_3 + 4) + 2 + param_4 * 3))) + 9 + param_3)));
  if (*(short *)(in_ecx + 0x50 + uVar2 * 2) == 0) {
    *(undefined4 *)(in_ecx + 0x38) = 0x15;
    if (*(int *)(in_ecx + 0x34) == 0) {
      *(undefined4 *)(in_ecx + 0x38) = 0x15;
    }
    return 0;
  }
  iVar3 = uVar2 * 0xa24 + *(int *)(in_ecx + 0xd0);
  iVar10 = (int)*param_6 * (uint)*(byte *)(iVar3 + 0xa1c);
  uVar2 = 0;
  param_3 = 0;
  local_8 = 1;
  uVar9 = uVar2;
  iVar11 = iVar10;
  if (1 < *(int *)(iVar3 + 0xa20)) {
    do {
      uVar12 = (uint)*(byte *)(iVar3 + 0x346 + local_8);
      uVar2 = uVar9;
      iVar10 = iVar11;
      if (-1 < param_6[uVar12]) {
        uVar2 = (uint)*(ushort *)(iVar3 + 0x152 + uVar12 * 2);
        iVar10 = (int)param_6[uVar12] * (uint)*(byte *)(iVar3 + 0xa1c);
        uVar9 = uVar2 - uVar9;
        iVar4 = iVar10 - iVar11;
        if (iVar4 < 0) {
          uVar5 = (uint)(iVar4 * -0x1000000) / uVar9;
          uVar12 = iVar11 * -0x1000000;
          if ((uVar9 & uVar9 - 1) != 0) {
            uVar5 = uVar5 + 1;
          }
          uVar9 = param_3 + 1;
          *(float *)(param_5 + -4 + uVar9 * 4) =
               ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar11 * 4) *
                      (float10)*(float *)(param_5 + param_3 * 4))));
          param_3 = uVar2;
          if (uVar9 < uVar2) {
            if (3 < (int)(uVar2 - uVar9)) {
              param_4 = ((uVar2 - uVar9) - 4 >> 2) + 1;
              iVar11 = uVar9 * 4;
              uVar9 = uVar9 + param_4 * 4;
              pfVar6 = (float *)(param_5 + 8 + iVar11);
              do {
                uVar7 = uVar12 + uVar5 + uVar5;
                pfVar6[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) +
                                                        (uVar12 + uVar5 >> 0x18) * -4) *
                                    (float10)pfVar6[-2])));
                uVar8 = uVar7 + uVar5;
                pfVar6[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar7 >> 0x18) * -4) *
                                    (float10)pfVar6[-1])));
                uVar12 = uVar8 + uVar5;
                *pfVar6 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar8 >> 0x18) * -4) *
                                 (float10)*pfVar6)));
                param_4 = param_4 + -1;
                pfVar6[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar12 >> 0x18) * -4) *
                                   (float10)pfVar6[1])));
                pfVar6 = pfVar6 + 4;
              } while (param_4 != 0);
            }
            while ((int)uVar9 < (int)uVar2) {
              uVar12 = uVar12 + uVar5;
              iVar11 = uVar9 * 4;
              uVar9 = uVar9 + 1;
              *(float *)(param_5 + -4 + uVar9 * 4) =
                   ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (uVar12 >> 0x18) * -4) *
                          (float10)*(float *)(param_5 + iVar11))));
            }
          }
        }
        else {
          uVar5 = (uint)(iVar4 * 0x1000000) / uVar9;
          uVar12 = iVar11 << 0x18;
          if ((uVar9 & uVar9 - 1) != 0) {
            uVar5 = uVar5 + 1;
          }
          uVar9 = param_3 + 1;
          *(float *)(param_5 + -4 + uVar9 * 4) =
               ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar11 * 4) *
                      (float10)*(float *)(param_5 + param_3 * 4))));
          param_3 = uVar2;
          if (uVar9 < uVar2) {
            if (3 < (int)(uVar2 - uVar9)) {
              iVar4 = ((uVar2 - uVar9) - 4 >> 2) + 1;
              iVar11 = uVar9 * 4;
              uVar9 = uVar9 + iVar4 * 4;
              pfVar6 = (float *)(param_5 + 8 + iVar11);
              do {
                uVar7 = uVar12 + uVar5 + uVar5;
                uVar8 = uVar7 + uVar5;
                pfVar6[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) +
                                                        (uVar12 + uVar5 >> 0x18) * 4) *
                                    (float10)pfVar6[-2])));
                uVar12 = uVar8 + uVar5;
                pfVar6[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar7 >> 0x18) * 4) *
                                    (float10)pfVar6[-1])));
                iVar4 = iVar4 + -1;
                *pfVar6 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar8 >> 0x18) * 4) *
                                 (float10)*pfVar6)));
                pfVar6[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar12 >> 0x18) * 4) *
                                   (float10)pfVar6[1])));
                pfVar6 = pfVar6 + 4;
              } while (iVar4 != 0);
            }
            while ((int)uVar9 < (int)uVar2) {
              uVar12 = uVar12 + uVar5;
              uVar9 = uVar9 + 1;
              *(float *)(param_5 + -4 + uVar9 * 4) =
                   ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar12 >> 0x18) * 4) *
                          (float10)*(float *)(param_5 + -4 + uVar9 * 4))));
            }
          }
        }
      }
      local_8 = local_8 + 1;
      uVar9 = uVar2;
      iVar11 = iVar10;
    } while (local_8 < *(int *)(iVar3 + 0xa20));
  }
  if ((int)uVar2 < iVar1) {
    if (3 < (int)(iVar1 - uVar2)) {
      iVar3 = ((iVar1 - uVar2) - 4 >> 2) + 1;
      iVar11 = uVar2 * 4;
      uVar2 = uVar2 + iVar3 * 4;
      pfVar6 = (float *)(param_5 + 8 + iVar11);
      do {
        iVar3 = iVar3 + -1;
        pfVar6[-2] = ((float)GEN_TOF(((float10)pfVar6[-2] * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        pfVar6[-1] = ((float)GEN_TOF(((float10)pfVar6[-1] * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        *pfVar6 = ((float)GEN_TOF(((float10)*pfVar6 * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        pfVar6[1] = ((float)GEN_TOF(((float10)pfVar6[1] * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        pfVar6 = pfVar6 + 4;
      } while (iVar3 != 0);
    }
    while ((int)uVar2 < iVar1) {
      iVar11 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(float *)(param_5 + -4 + uVar2 * 4) =
           ((float)GEN_TOF(((float10)*(float *)(param_5 + iVar11) *
                  (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
    }
  }
  return 1;
}

/* ref: FUN_00cee500 */
uint F_00cee500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcee500u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x9b0];
  int * piVar1;
  float * pfVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort * puVar12;
  uint uVar13;
  int iVar14;
  byte * pbVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  byte * pbVar19;
  float * pfVar20;
  byte * pbVar21;
  byte * pbVar22;
  undefined2 uVar23;
  undefined2 * puVar24;
  undefined4 * puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  
  (*(uint *)(gen_frame + 0x9a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9ac);
  (*(int * PTR32 *)(gen_frame + 0x54)) = param_4;
  (*(int * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x80)) = param_2;
  *(undefined4 *)(param_3 + 0x5b8) = 0;
  *(undefined4 *)(param_3 + 0x5b4) = 0;
  if ((*(int *)(param_3 + 0x34) != 0) || (uVar13 = F_00ceb8d0(param_3), uVar13 == 0)) {
LAB_00cee56a: ;
    F_00c47745((*(uint *)(gen_frame + 0x9a8)) ^ (uint)(uint)(gen_frame + 0x9ac));
    return 0;
  }
  uVar13 = F_00cebad0(param_3,1);
  if (uVar13 != 0) {
    *(undefined4 *)(param_3 + 0x38) = 0x23;
    if (*(int *)(param_3 + 0x34) == 0) {
      *(undefined4 *)(param_3 + 0x38) = 0x23;
    }
    goto LAB_00cee56a;
  }
  uVar13 = *(int *)(param_3 + 0x164) - 1;
  iVar14 = 0x1f;
  if (uVar13 != 0) {
    for (; uVar13 >> iVar14 == 0; iVar14 = iVar14 + -1) {
    }
  }
  if (uVar13 != 0) {
    iVar14 = iVar14 + 1;
  }
  uVar13 = F_00cebad0(param_3,iVar14);
  if ((uVar13 == 0xffffffff) || (*(int *)(param_3 + 0x164) <= (int)uVar13)) goto LAB_00cee56a;
  iVar14 = uVar13 * 3 + 0xb4;
  (*(byte * PTR32 *)(gen_frame + 0x5c)) = (byte *)(param_3 + iVar14 * 2);
  if (*(char *)(param_3 + iVar14 * 2) == '\0') {
    iVar14 = *(int *)(param_3 + 0x3c);
    pbVar15 = (byte *)0x0;
    (*(uint *)(gen_frame + 0x7c)) = 0;
    (*(int *)(gen_frame + 0x74)) = iVar14;
  }
  else {
    iVar14 = *(int *)(param_3 + 0x40);
    (*(int *)(gen_frame + 0x74)) = iVar14;
    pbVar15 = (byte *)F_00cebad0(param_3,1);
    (*(byte * PTR32 *)(gen_frame + 0x84)) = pbVar15;
    uVar13 = F_00cebad0(param_3,1);
    (*(uint *)(gen_frame + 0x7c)) = uVar13;
    pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x84));
  }
  iVar16 = iVar14 >> 1;
  (*(int *)(gen_frame + 0x78)) = iVar16;
  if ((*(*(byte * PTR32 *)(gen_frame + 0x5c)) == 0) || (pbVar15 != (byte *)0x0)) {
    (*(int *)(gen_frame + 0x64)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x64)) = iVar14 - *(int *)(param_3 + 0x3c) >> 2;
  }
  if ((*(*(byte * PTR32 *)(gen_frame + 0x5c)) == 0) || ((*(uint *)(gen_frame + 0x7c)) != 0)) {
    (*(uint *)(gen_frame + 0x7c)) = iVar16;
    (*(int *)(gen_frame + 0x60)) = iVar14;
  }
  else {
    iVar16 = iVar14 * 3 - *(int *)(param_3 + 0x3c) >> 2;
    (*(uint *)(gen_frame + 0x7c)) = iVar16;
    (*(int *)(gen_frame + 0x60)) = *(int *)(param_3 + 0x3c) + iVar14 * 3 >> 2;
  }
  *(*(int * PTR32 *)(gen_frame + 0x80)) = iVar16;
  *(*(int * PTR32 *)(gen_frame + 0x50)) = (*(int *)(gen_frame + 0x64));
  (*(ushort * PTR32 *)(gen_frame + 0x94)) = ((ushort *)GEN_TOP((*(int *)(param_3 + 0x160) + (uint)(*(byte * PTR32 *)(gen_frame + 0x5c))[1] * 0x28)));
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(uint *)(gen_frame + 0x7c)) = iVar16;
  if (0 < *(int *)(param_3 + 8)) {
    (*(int *)(gen_frame + 0x58)) = 0;
    (*(int * PTR32 *)(gen_frame + 0xa0)) = (int *)(param_3 + 0x3b0);
    do {
      ((int *)(gen_frame + 0x4a8))[(int)((*(uint *)(gen_frame + 0xa4)))] = 0;
      uVar13 = (uint)*((byte *)GEN_TOP((*((byte *)GEN_TOP((*(int *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 2) + 2 + (*(int *)(gen_frame + 0x58))))) + 9 +
                              (int)(*(ushort * PTR32 *)(gen_frame + 0x94)))));
      if (*(short *)(param_3 + 0x50 + uVar13 * 2) == 0) {
        *(undefined4 *)(param_3 + 0x38) = 0x15;
        if (*(int *)(param_3 + 0x34) == 0) {
          *(undefined4 *)(param_3 + 0x38) = 0x15;
        }
        F_00c47745((*(uint *)(gen_frame + 0x9a8)) ^ (uint)(uint)(gen_frame + 0x9ac));
        return 0;
      }
      (*(byte * PTR32 *)(gen_frame + 0x8c)) = ((byte *)GEN_TOP((uVar13 * 0xa24 + *(int *)(param_3 + 0xd0))));
      uVar13 = F_00cebad0(param_3,1);
      if (uVar13 == 0) {
LAB_00ceeb8c: ;
        ((int *)(gen_frame + 0x4a8))[(int)((*(uint *)(gen_frame + 0xa4)))] = 1;
      }
      else {
        pbVar15 = *(byte * PTR32 *)(&REFG(undefined1, 0x134fbc4) + (uint)(*(byte * PTR32 *)(gen_frame + 0x8c))[0xa1c] * 4);
        puVar24 = (undefined2 *)*(*(int * PTR32 *)(gen_frame + 0xa0));
        (*(byte * PTR32 *)(gen_frame + 0x84)) = pbVar15;
        iVar14 = 0x1f;
        if (pbVar15 != (byte *)0x0) {
          for (; (uint)((int)(uintptr_t)pbVar15) >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x80)) = (int *)0x2;
        (*(undefined2 * PTR32 *)(gen_frame + 0x88)) = puVar24;
        if (pbVar15 != (byte *)0x0) {
          iVar14 = iVar14 + 1;
        }
        uVar13 = F_00cebad0(param_3,iVar14 + -1);
        *puVar24 = (short)uVar13;
        iVar14 = 0x1f;
        if ((*(byte * PTR32 *)(gen_frame + 0x84)) != (byte *)0x0) {
          for (; (uint)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0x84))) >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        if ((*(byte * PTR32 *)(gen_frame + 0x84)) != (byte *)0x0) {
          iVar14 = iVar14 + 1;
        }
        uVar13 = F_00cebad0(param_3,iVar14 + -1);
        puVar24[1] = (short)uVar13;
        (*(int *)(gen_frame + 0x9c)) = 0;
        if (*(*(byte * PTR32 *)(gen_frame + 0x8c)) != 0) {
          do {
            uVar13 = (uint)(*(byte * PTR32 *)(gen_frame + 0x8c))[(*(int *)(gen_frame + 0x9c)) + 1];
            bVar3 = (*(byte * PTR32 *)(gen_frame + 0x8c))[uVar13 + 0x31];
            (*(byte * PTR32 *)(gen_frame + 0x70)) = (byte *)(uint)(*(byte * PTR32 *)(gen_frame + 0x8c))[uVar13 + 0x21];
            (*(uint *)(gen_frame + 0x68)) = uVar13;
            (*(uint *)(gen_frame + 0x4c)) = (uint)bVar3;
            (*(byte * PTR32 *)(gen_frame + 0x90)) = (byte *)0x0;
            (*(uint *)(gen_frame + 0x6c)) = (1 << (bVar3 & 0x1f)) - 1;
            if (bVar3 != 0) {
              (*(byte * PTR32 *)(gen_frame + 0x98)) = *((byte * PTR32 *)GEN_TOP((*(int *)(param_3 + 0x48) + (uint)(*(byte * PTR32 *)(gen_frame + 0x8c))[uVar13 + 0x41] * 4)));
              if (*(int *)(param_3 + 0x548) < 8) {
                F_00cebbb0(param_3);
              }
              uVar13 = *(uint *)(param_3 + 0x544);
              uVar18 = *((uint *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x98)) + (uVar13 & 0xff) * 4 + 0x2c)));
              if ((int)uVar18 < 0) {
                if (*(int *)(param_3 + 0x548) < 0x19) {
                  F_00cebbb0(param_3);
                }
                uVar13 = *(uint *)(param_3 + 0x544);
                uVar17 = uVar13 >> 8;
                do {
                  uVar18 = *((uint *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x98)) + ((uVar17 & 3) + 0x80000000 + uVar18) * 4 + 0x2c)));
                  uVar17 = uVar17 >> 2;
                } while ((int)uVar18 < 0);
              }
              piVar1 = (int *)(param_3 + 0x548);
              *piVar1 = *piVar1 - ((int)uVar18 >> 0x1a);
              *(uint *)(param_3 + 0x544) = uVar13 >> ((byte)((int)uVar18 >> 0x1a) & 0x1f);
              if (*piVar1 < 0) {
                *(undefined4 *)(param_3 + 0x548) = 0;
                (*(byte * PTR32 *)(gen_frame + 0x90)) = (byte *)0xffffffff;
              }
              else {
                (*(byte * PTR32 *)(gen_frame + 0x90)) = (byte *)(uVar18 & 0x3ffffff);
              }
            }
            pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x70));
            if (0 < (int)(*(byte * PTR32 *)(gen_frame + 0x70))) {
              (*(byte * PTR32 *)(gen_frame + 0x70)) = (byte *)((*(uint *)(gen_frame + 0x68)) * 8);
              (*(byte * PTR32 *)(gen_frame + 0x98)) = pbVar15;
              do {
                uVar13 = (uint)(*(byte * PTR32 *)(gen_frame + 0x90)) & (*(uint *)(gen_frame + 0x6c));
                uVar23 = 0;
                (*(byte * PTR32 *)(gen_frame + 0x90)) = ((byte *)GEN_TOP(((int)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0x90))) >> ((byte)(*(uint *)(gen_frame + 0x4c)) & 0x1f))));
                if (-1 < *((short *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x8c)) + (int)((*(byte * PTR32 *)(gen_frame + 0x70)) + uVar13) * 2 + 0x52)))) {
                  (*(uint *)(gen_frame + 0x68)) = *((uint *)GEN_TOP((*(int *)(param_3 + 0x48) +
                                       *((short *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x8c)) + (int)((*(byte * PTR32 *)(gen_frame + 0x70)) + uVar13) * 2 + 0x52)))
                                       * 4)));
                  if (*(int *)(param_3 + 0x548) < 8) {
                    F_00cebbb0(param_3);
                  }
                  uVar13 = *(uint *)(param_3 + 0x544);
                  iVar14 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x68)) + 0x2c + (uVar13 & 0xff) * 4)));
                  if (iVar14 < 0) {
                    if (*(int *)(param_3 + 0x548) < 0x19) {
                      F_00cebbb0(param_3);
                    }
                    uVar13 = *(uint *)(param_3 + 0x544);
                    uVar18 = uVar13 >> 8;
                    do {
                      iVar14 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x68)) + 0x2c + ((uVar18 & 3) + 0x80000000 + iVar14) * 4)))
                      ;
                      uVar18 = uVar18 >> 2;
                    } while (iVar14 < 0);
                  }
                  piVar1 = (int *)(param_3 + 0x548);
                  *piVar1 = *piVar1 - (iVar14 >> 0x1a);
                  *(uint *)(param_3 + 0x544) = uVar13 >> ((byte)(iVar14 >> 0x1a) & 0x1f);
                  if (*piVar1 < 0) {
                    *(undefined4 *)(param_3 + 0x548) = 0;
                    uVar23 = 0xffff;
                  }
                  else {
                    uVar23 = (undefined2)iVar14;
                  }
                }
                (*(undefined2 * PTR32 *)(gen_frame + 0x88))[(int)(*(int * PTR32 *)(gen_frame + 0x80))] = uVar23;
                pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x98)) + -1;
                (*(byte * PTR32 *)(gen_frame + 0x98)) = pbVar15;
                (*(int * PTR32 *)(gen_frame + 0x80)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x80)) + 1);
              } while (pbVar15 != (byte *)0x0);
            }
            iVar14 = (*(int *)(gen_frame + 0x9c)) + 1;
            (*(int *)(gen_frame + 0x9c)) = iVar14;
            puVar24 = (*(undefined2 * PTR32 *)(gen_frame + 0x88));
          } while (iVar14 < (int)(uint)*(*(byte * PTR32 *)(gen_frame + 0x8c)));
        }
        if (*(int *)(param_3 + 0x548) == -1) goto LAB_00ceeb8c;
        ((char *)(gen_frame + 0x8a8))[0] = '\x01';
        ((char *)(gen_frame + 0x8a8))[1] = '\x01';
        (*(int *)(gen_frame + 0x9c)) = 2;
        if (2 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x8c)) + 0xa20)) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x8c)) + 0x445;
          (*(byte * PTR32 *)(gen_frame + 0x98)) = (*(byte * PTR32 *)(gen_frame + 0x8c)) + 0x63c;
          (*(byte * PTR32 *)(gen_frame + 0x90)) = pbVar15;
          do {
            uVar13 = (uint)pbVar15[-1];
            pbVar22 = (byte *)(int)(short)puVar24[uVar13];
            (*(uint *)(gen_frame + 0x6c)) = uVar13;
            (*(byte * PTR32 *)(gen_frame + 0x70)) = pbVar22;
            uVar18 = (int)(short)puVar24[*pbVar15] - (int)((int)(uintptr_t)pbVar22) >> 0x1f;
            pbVar22 = pbVar22 + (((((int)(short)puVar24[*pbVar15] - (int)pbVar22 ^ uVar18) - uVar18)
                                  * ((uint)*(ushort *)(pbVar15 + -0x2ef) -
                                    (uint)*(ushort *)((*(byte * PTR32 *)(gen_frame + 0x8c)) + uVar13 * 2 + 0x152)) *
                                  *(int *)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0x98))) >> 0x15 ^ uVar18) - uVar18);
            pbVar21 = (byte *)(int)(short)(*(undefined2 * PTR32 *)(gen_frame + 0x88))[(*(int *)(gen_frame + 0x9c))];
            ((char *)(gen_frame + 0x8a8))[(int)((*(int *)(gen_frame + 0x9c)))] = '\0';
            pbVar19 = pbVar22;
            if (pbVar21 != (byte *)0x0) {
              ((char *)(gen_frame + 0x8a8))[(int)((*(int *)(gen_frame + 0x9c)))] = '\x01';
              ((char *)(gen_frame + 0x8a8))[(int)(*pbVar15)] = '\x01';
              ((char *)(gen_frame + 0x8a8))[(int)(pbVar15[-1])] = '\x01';
              uVar13 = (int)(*(byte * PTR32 *)(gen_frame + 0x84)) - (int)pbVar22;
              (*(uint *)(gen_frame + 0x6c)) = uVar13;
              if ((int)pbVar22 < (int)uVar13) {
                pbVar19 = pbVar21;
                if ((int)pbVar21 < (int)((int)(uintptr_t)pbVar22) * 2) {
LAB_00ceeaf4: ;
                  pbVar19 = pbVar22 + (-((uint)pbVar21 & 1) ^ (int)((int)(uintptr_t)pbVar21) >> 1);
                }
              }
              else {
                if ((int)pbVar21 < (int)(uVar13 * 2)) goto LAB_00ceeaf4;
                pbVar19 = pbVar22 + (uVar13 - (int)pbVar21) + -1;
              }
            }
            (*(byte * PTR32 *)(gen_frame + 0x98)) = (*(byte * PTR32 *)(gen_frame + 0x98)) + 4;
            (*(undefined2 * PTR32 *)(gen_frame + 0x88))[(*(int *)(gen_frame + 0x9c))] = (short)pbVar19;
            iVar14 = (*(int *)(gen_frame + 0x9c)) + 1;
            pbVar15 = pbVar15 + 2;
            (*(int *)(gen_frame + 0x9c)) = iVar14;
            (*(byte * PTR32 *)(gen_frame + 0x90)) = pbVar15;
            puVar24 = (*(undefined2 * PTR32 *)(gen_frame + 0x88));
          } while (iVar14 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x8c)) + 0xa20));
        }
        iVar14 = 0;
        if (0 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x8c)) + 0xa20)) {
          do {
            if (((char *)(gen_frame + 0x8a8))[(int)(iVar14)] == '\0') {
              puVar24[iVar14] = 0xffff;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x8c)) + 0xa20));
        }
      }
      (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 3;
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)(gen_frame + 0xa0)) + 1;
      iVar14 = (*(uint *)(gen_frame + 0xa4)) + 1;
      (*(uint *)(gen_frame + 0xa4)) = iVar14;
    } while (iVar14 < *(int *)(param_3 + 8));
  }
  puVar12 = (*(ushort * PTR32 *)(gen_frame + 0x94));
  F_00c46aa0(((int *)(gen_frame + 0xa8)),((int *)(gen_frame + 0x4a8)),*(int *)(param_3 + 8) * 4);
  if ((int *)(uint)*puVar12 != (int *)0x0) {
    iVar14 = 0;
    pbVar15 = ((byte *)GEN_TOP((*(int *)(puVar12 + 2) + 1)));
    (*(byte * PTR32 *)(gen_frame + 0x84)) = pbVar15;
    (*(int * PTR32 *)(gen_frame + 0x80)) = (int *)(uint)*puVar12;
    do {
      if ((((int *)(gen_frame + 0x4a8))[(int)(*((byte *)GEN_TOP((*(int *)(puVar12 + 2) + iVar14))))] == 0) || (((int *)(gen_frame + 0x4a8))[(int)(*pbVar15)] == 0))
      {
        bVar3 = *((byte *)GEN_TOP((*(int *)(puVar12 + 2) + iVar14)));
        ((int *)(gen_frame + 0x4a8))[(int)(*((byte *)GEN_TOP((*(int *)(puVar12 + 2) + 1 + iVar14))))] = 0;
        ((int *)(gen_frame + 0x4a8))[(int)(bVar3)] = 0;
      }
      pbVar15 = pbVar15 + 3;
      iVar14 = iVar14 + 3;
      piVar1 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x80)) + -1);
      (*(int * PTR32 *)(gen_frame + 0x80)) = piVar1;
      (*(byte * PTR32 *)(gen_frame + 0x84)) = pbVar15;
    } while (piVar1 != (int *)0x0);
  }
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if ((char)(*(ushort * PTR32 *)(gen_frame + 0x94))[4] != '\0') {
    do {
      iVar14 = 0;
      (*(int *)(gen_frame + 0x9c)) = 0;
      if (0 < *(int *)(param_3 + 8)) {
        (*(int * PTR32 *)(gen_frame + 0xa0)) = (int *)(param_3 + 0x2ec);
        pbVar15 = ((byte *)GEN_TOP((*(int *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 2) + 2)));
        do {
          if (*pbVar15 == (*(uint *)(gen_frame + 0xa4))) {
            iVar16 = 0;
            if (((int *)(gen_frame + 0x4a8))[(int)((*(int *)(gen_frame + 0x9c)))] == 0) {
              ((char *)(gen_frame + 0x8a8))[(int)(iVar14)] = '\0';
              iVar16 = *(*(int * PTR32 *)(gen_frame + 0xa0));
            }
            else {
              ((char *)(gen_frame + 0x8a8))[(int)(iVar14)] = '\x01';
            }
            ((int *)(gen_frame + 0xc))[(int)(iVar14)] = iVar16;
            iVar14 = iVar14 + 1;
          }
          (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)(gen_frame + 0xa0)) + 1;
          iVar16 = (*(int *)(gen_frame + 0x9c)) + 1;
          pbVar15 = pbVar15 + 3;
          (*(int *)(gen_frame + 0x9c)) = iVar16;
        } while (iVar16 < *(int *)(param_3 + 8));
      }
      uVar13 = (*(uint *)(gen_frame + 0xa4));
      F_00cecd50(param_3,((int *)(gen_frame + 0xc)),iVar14,(*(int *)(gen_frame + 0x78)),
                   (uint)*(byte *)((int)(*(ushort * PTR32 *)(gen_frame + 0x94)) + (*(uint *)(gen_frame + 0xa4)) + 0x18),((char *)(gen_frame + 0x8a8)));
      (*(uint *)(gen_frame + 0xa4)) = uVar13 + 1;
    } while ((int)(uVar13 + 1) < (int)(uint)(byte)(*(ushort * PTR32 *)(gen_frame + 0x94))[4]);
  }
  fVar11 = *(float *)&REFG(undefined, 0x113059c);
  fVar10 = *(float *)&REFG(undefined, 0x1130598);
  fVar9 = *(float *)&REFG(undefined, 0x1130594);
  fVar8 = *(float *)&REFG(undefined, 0x1130590);
  iVar14 = *(*(ushort * PTR32 *)(gen_frame + 0x94)) - 1;
  (*(uint *)(gen_frame + 0xa4)) = iVar14;
  if (-1 < iVar14) {
    (*(int * PTR32 *)(gen_frame + 0xa0)) = (int *)(iVar14 * 3);
    do {
      pfVar20 = *((float * PTR32 *)GEN_TOP((param_3 + 0x2ec + (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xa0)) + *(int *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 2)))) * 4)));
      if (0 < (*(int *)(gen_frame + 0x78))) {
        iVar16 = *((int *)GEN_TOP((param_3 + 0x2ec +
                         (uint)(((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xa0)) + *(int *)((*(ushort * PTR32 *)(gen_frame + 0x94)) + 2)))))[1] * 4))) -
                 (int)pfVar20;
        iVar14 = ((*(int *)(gen_frame + 0x78)) - 1U >> 2) + 1;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          fVar6 = pfVar20[2];
          fVar7 = pfVar20[3];
          pfVar2 = (float *)(iVar16 + (int)pfVar20);
          uVar13 = -(uint)(fVar8 < *pfVar2);
          uVar18 = -(uint)(fVar9 < pfVar2[1]);
          uVar17 = -(uint)(fVar10 < pfVar2[2]);
          uVar26 = -(uint)(fVar11 < pfVar2[3]);
          uVar27 = -(uint)(fVar8 < fVar4) & (uint)gen_fl2bits(fVar8) ^ (uint)gen_fl2bits(*pfVar2);
          uVar28 = -(uint)(fVar9 < fVar5) & (uint)gen_fl2bits(fVar9) ^ (uint)gen_fl2bits(pfVar2[1]);
          uVar29 = -(uint)(fVar10 < fVar6) & (uint)gen_fl2bits(fVar10) ^
                   (uint)gen_fl2bits(pfVar2[2]);
          uVar30 = -(uint)(fVar11 < fVar7) & (uint)gen_fl2bits(fVar11) ^
                   (uint)gen_fl2bits(pfVar2[3]);
          pfVar2 = (float *)(iVar16 + (int)pfVar20);
          *pfVar2 = gen_bits2f(uVar13 & uVar27) + fVar4;
          pfVar2[1] = gen_bits2f(uVar18 & uVar28) + fVar5;
          pfVar2[2] = gen_bits2f(uVar17 & uVar29) + fVar6;
          pfVar2[3] = gen_bits2f(uVar26 & uVar30) + fVar7;
          *pfVar20 = fVar4 - gen_bits2f(~uVar13 & uVar27);
          pfVar20[1] = fVar5 - gen_bits2f(~uVar18 & uVar28);
          pfVar20[2] = fVar6 - gen_bits2f(~uVar17 & uVar29);
          pfVar20[3] = fVar7 - gen_bits2f(~uVar26 & uVar30);
          pfVar20 = pfVar20 + 4;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xa0)) + -3);
      iVar14 = (*(uint *)(gen_frame + 0xa4)) + -1;
      (*(uint *)(gen_frame + 0xa4)) = iVar14;
    } while (-1 < iVar14);
  }
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if (0 < *(int *)(param_3 + 8)) {
    puVar25 = (undefined4 *)(param_3 + 0x2ec);
    do {
      if (((int *)(gen_frame + 0xa8))[(int)((*(uint *)(gen_frame + 0xa4)))] == 0) {
        F_00cee1d0((*(int *)(gen_frame + 0x74)),param_3,(*(ushort * PTR32 *)(gen_frame + 0x94)),(*(uint *)(gen_frame + 0xa4)),*puVar25,puVar25[0x31]);
      }
      else {
        F_00c48350((undefined *)*puVar25,0,(*(int *)(gen_frame + 0x78)) * 4);
      }
      iVar14 = (*(uint *)(gen_frame + 0xa4)) + 1;
      puVar25 = puVar25 + 1;
      (*(uint *)(gen_frame + 0xa4)) = iVar14;
    } while (iVar14 < *(int *)(param_3 + 8));
  }
  iVar14 = 0;
  if (0 < *(int *)(param_3 + 8)) {
    (*(int * PTR32 *)(gen_frame + 0xa0)) = (int *)(param_3 + 0x2ec);
    do {
      F_00cedc20((undefined *)*(*(int * PTR32 *)(gen_frame + 0xa0)),(*(int *)(gen_frame + 0x74)),param_3,(uint)*(*(byte * PTR32 *)(gen_frame + 0x5c)));
      (*(int * PTR32 *)(gen_frame + 0xa0)) = (*(int * PTR32 *)(gen_frame + 0xa0)) + 1;
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_3 + 8));
  }
  do {
    if ((*(char *)(param_3 + 0x534) == '\0') &&
       ((*(int *)(param_3 + 0x53c) != 0 || (uVar13 = F_00ceb960(param_3), uVar13 == 0)))) break;
    *(char *)(param_3 + 0x534) = *(char *)(param_3 + 0x534) + -1;
    bVar3 = **(byte * PTR32 *)(param_3 + 0x10);
    *(byte * PTR32 *)(param_3 + 0x10) = *(byte * PTR32 *)(param_3 + 0x10) + 1;
  } while (bVar3 != 0xffffffff);
  iVar14 = (*(int *)(gen_frame + 0x64));
  if (*(char *)(param_3 + 0x535) == '\0') {
    if (*(int *)(param_3 + 0x558) != 0) {
      iVar14 = (*(int *)(gen_frame + 0x64)) + *(int *)(param_3 + 0x558);
      *(*(int * PTR32 *)(gen_frame + 0x50)) = iVar14;
      *(undefined4 *)(param_3 + 0x558) = 0;
    }
  }
  else {
    *(int *)(param_3 + 0x3f0) = -(*(int *)(gen_frame + 0x78));
    *(int *)(param_3 + 0x558) = (*(int *)(gen_frame + 0x74)) - (*(int *)(gen_frame + 0x60));
    *(undefined4 *)(param_3 + 0x3f4) = 1;
    *(undefined1 *)(param_3 + 0x535) = 0;
  }
  if (*(int *)(param_3 + 0x540) == *(int *)(param_3 + 0x550)) {
    if ((*(int *)(param_3 + 0x3f4) != 0) && ((*(byte *)(param_3 + 0x533) & 4) != 0)) {
      uVar13 = *(uint *)(param_3 + 0x3f0);
      uVar18 = (*(int *)(param_3 + 0x554) - (*(int *)(gen_frame + 0x74))) + (*(int *)(gen_frame + 0x60));
      if (uVar18 < (*(int *)(gen_frame + 0x60)) + uVar13) {
        if (uVar18 < uVar13) {
          *(*(int * PTR32 *)(gen_frame + 0x54)) = 0;
          *(*(int * PTR32 *)(gen_frame + 0x54)) = *(*(int * PTR32 *)(gen_frame + 0x54)) + iVar14;
          *(int *)(param_3 + 0x3f0) = *(int *)(param_3 + 0x3f0) + *(*(int * PTR32 *)(gen_frame + 0x54));
        }
        else {
          *(*(int * PTR32 *)(gen_frame + 0x54)) = uVar18 - uVar13;
          *(*(int * PTR32 *)(gen_frame + 0x54)) = *(*(int * PTR32 *)(gen_frame + 0x54)) + iVar14;
          *(int *)(param_3 + 0x3f0) = *(int *)(param_3 + 0x3f0) + *(*(int * PTR32 *)(gen_frame + 0x54));
        }
        goto LAB_00cef029;
      }
    }
    *(undefined4 *)(param_3 + 0x3f4) = 1;
    *(int *)(param_3 + 0x3f0) = (*(int *)(param_3 + 0x554) - (*(int *)(gen_frame + 0x78))) + iVar14;
  }
  if (*(int *)(param_3 + 0x3f4) != 0) {
    *(int *)(param_3 + 0x3f0) = *(int *)(param_3 + 0x3f0) + ((*(uint *)(gen_frame + 0x7c)) - iVar14);
  }
  *(*(int * PTR32 *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x60));
LAB_00cef029: ;
  F_00c47745((*(uint *)(gen_frame + 0x9a8)) ^ (uint)(uint)(gen_frame + 0x9ac));
  return 1;
}

/* ref: FUN_00cef040 */
uint F_00cef040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcef040u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * pfVar1;
  float * pfVar2;
  undefined4 * puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int iVar29;
  float * pfVar30;
  undefined4 * puVar31;
  int iVar32;
  undefined4 * puVar33;
  int * piVar34;
  float * pfVar35;
  int iVar36;
  int iVar37;
  int local_c;
  int local_8;
  
  iVar37 = param_4;
  iVar4 = *(int *)(param_1 + 0x3ac);
  if (iVar4 != 0) {
    if (iVar4 * 2 == *(int *)(param_1 + 0x3c)) {
      local_8 = *(int *)(param_1 + 0x418);
    }
    else if (iVar4 * 2 == *(int *)(param_1 + 0x40)) {
      local_8 = *(int *)(param_1 + 0x41c);
    }
    else {
      local_8 = 0;
    }
    local_c = 0;
    if (0 < *(int *)(param_1 + 8)) {
      piVar34 = (int *)(param_1 + 0x2ec);
      do {
        pfVar30 = (float *)(*piVar34 + param_3 * 4);
        if (0 < iVar4) {
          pfVar35 = (float *)(local_8 + -0x10 + iVar4 * 4);
          iVar29 = local_8 - (int)pfVar30;
          iVar36 = piVar34[0x20] - (int)pfVar30;
          iVar32 = (iVar4 - 1U >> 2) + 1;
          do {
            fVar5 = *pfVar35;
            fVar6 = pfVar35[1];
            fVar7 = pfVar35[2];
            pfVar1 = (float *)(iVar36 + (int)pfVar30);
            fVar8 = pfVar1[1];
            fVar9 = pfVar1[2];
            fVar10 = pfVar1[3];
            pfVar2 = (float *)(iVar29 + (int)pfVar30);
            fVar11 = pfVar2[1];
            fVar12 = pfVar2[2];
            fVar13 = pfVar2[3];
            *pfVar30 = *pfVar1 * pfVar35[3] + *pfVar2 * *pfVar30;
            pfVar30[1] = fVar8 * fVar7 + fVar11 * pfVar30[1];
            pfVar30[2] = fVar9 * fVar6 + fVar12 * pfVar30[2];
            pfVar30[3] = fVar10 * fVar5 + fVar13 * pfVar30[3];
            pfVar35 = pfVar35 + -4;
            pfVar30 = pfVar30 + 4;
            iVar32 = iVar32 + -1;
          } while (iVar32 != 0);
        }
        local_c = local_c + 1;
        piVar34 = piVar34 + 1;
      } while (local_c < *(int *)(param_1 + 8));
    }
  }
  iVar4 = *(int *)(param_1 + 0x3ac);
  *(int *)(param_1 + 0x3ac) = param_2 - param_4;
  param_4 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar34 = (int *)(param_1 + 0x2ec);
    do {
      iVar29 = piVar34[0x20];
      iVar32 = *piVar34 + iVar37 * 4;
      if (iVar37 < param_2) {
        puVar33 = (undefined4 *)(iVar29 + 0x30);
        puVar31 = (undefined4 *)(iVar32 + 0x20);
        iVar36 = iVar37;
        do {
          uVar14 = puVar31[-4];
          uVar15 = puVar31[-3];
          uVar16 = puVar31[-2];
          uVar17 = puVar31[-1];
          uVar18 = *puVar31;
          uVar19 = puVar31[1];
          uVar20 = puVar31[2];
          uVar21 = puVar31[3];
          uVar22 = puVar31[4];
          uVar23 = puVar31[5];
          uVar24 = puVar31[6];
          uVar25 = puVar31[7];
          uVar26 = puVar31[-7];
          uVar27 = puVar31[-6];
          uVar28 = puVar31[-5];
          puVar33[-0xc] = puVar31[-8];
          puVar33[-0xb] = uVar26;
          puVar33[-10] = uVar27;
          puVar33[-9] = uVar28;
          puVar33[-8] = uVar14;
          puVar33[-7] = uVar15;
          puVar33[-6] = uVar16;
          puVar33[-5] = uVar17;
          puVar3 = ((undefined4 *)GEN_TOP(((iVar29 - iVar32) + (int)puVar31)));
          *puVar3 = uVar18;
          puVar3[1] = uVar19;
          puVar3[2] = uVar20;
          puVar3[3] = uVar21;
          *puVar33 = uVar22;
          puVar33[1] = uVar23;
          puVar33[2] = uVar24;
          puVar33[3] = uVar25;
          iVar36 = iVar36 + 0x10;
          puVar31 = puVar31 + 0x10;
          puVar33 = puVar33 + 0x10;
        } while (iVar36 < param_2);
      }
      param_4 = param_4 + 1;
      piVar34 = piVar34 + 1;
    } while (param_4 < *(int *)(param_1 + 8));
  }
  if (iVar4 != 0) {
    if (param_2 < iVar37) {
      iVar37 = param_2;
    }
    *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + (iVar37 - param_3);
    return iVar37 - param_3;
  }
  return 0;
}

/* ref: FUN_00cef1d0 */
uint F_00cef1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcef1d0u, gen_a0, gen_a1, 0u, 0u);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte * pbVar7;
  byte * pbVar8;
  byte * pbVar9;
  
  iVar5 = *(int *)(in_edi + 0x538);
  pbVar8 = *(byte * PTR32 *)(in_edi + 0x10);
  bVar3 = true;
  if (iVar5 != -1) {
    iVar2 = *(int *)(in_edi + 0x430);
    for (; (iVar5 < iVar2 &&
           (bVar1 = *(byte *)(in_edi + 0x434 + iVar5), pbVar8 = pbVar8 + bVar1, bVar1 == 0xff));
        iVar5 = iVar5 + 1) {
    }
    if ((param_2 != 0) && (iVar5 < iVar2 + -1)) {
LAB_00cef222: ;
      *(undefined4 *)(in_edi + 0x38) = 0x15;
      if (*(int *)(in_edi + 0x34) == 0) {
        *(undefined4 *)(in_edi + 0x38) = 0x15;
      }
      return 0;
    }
    if (iVar5 == iVar2) {
      iVar5 = -1;
    }
    bVar3 = false;
    if (*(byte * PTR32 *)(in_edi + 0x18) < pbVar8) {
LAB_00cef249: ;
      *(undefined4 *)(in_edi + 0x38) = 1;
      return 0;
    }
    if (iVar5 != -1) {
      return 1;
    }
  }
  pbVar7 = *(byte * PTR32 *)(in_edi + 0x18);
  do {
    if (pbVar7 <= pbVar8 + 0x1a) {
LAB_00cef2fe: ;
      *(undefined4 *)(in_edi + 0x38) = 1;
      return 0;
    }
    if ((*(int *)pbVar8 != REFG(int, 0x134f7b8)) || (pbVar8[4] != 0)) goto LAB_00cef222;
    if (bVar3) {
      if ((*(int *)(in_edi + 0x3ac) != 0) && ((pbVar8[5] & 1) != 0)) goto LAB_00cef222;
    }
    else if ((pbVar8[5] & 1) == 0) goto LAB_00cef222;
    uVar4 = (uint)pbVar8[0x1a];
    pbVar9 = pbVar8 + uVar4 + 0x1b;
    if (pbVar7 <= pbVar9) goto LAB_00cef2fe;
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        pbVar9 = pbVar9 + pbVar8[uVar6 + 0x1b];
        if (pbVar8[uVar6 + 0x1b] != 0xff) break;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar4);
      pbVar7 = *(byte * PTR32 *)(in_edi + 0x18);
    }
    if ((param_2 != 0) && ((int)uVar6 < (int)(uVar4 - 1))) goto LAB_00cef222;
    if (uVar6 == uVar4) {
      uVar6 = 0xffffffff;
    }
    bVar3 = false;
    if (pbVar7 < pbVar9) goto LAB_00cef249;
    pbVar8 = pbVar9;
    if (uVar6 != 0xffffffff) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00cef340 */
uint F_00cef340(unsigned int gen_a0)
{
  GEN_ENTER(0xcef340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (*(int *)(param_1 + 0x3f4) != 0) {
    return *(uint *)(param_1 + 0x3f0);
  }
  return 0xffffffff;
}

/* ref: FUN_00cef360 */
uint F_00cef360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcef360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  param_1[2] = param_2[2];
  *param_1 = *param_2;
  iVar1 = param_2[0x10];
  param_1[1] = param_2[1];
  param_1[3] = iVar1 >> 1;
  return (uint)param_1;
}

/* ref: FUN_00cef390 */
uint F_00cef390(unsigned int gen_a0)
{
  GEN_ENTER(0xcef390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return uVar1;
}

/* ref: FUN_00cef3b0 */
uint F_00cef3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcef3b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined1 *)(param_1 + 0x535) = 0;
  *(undefined4 *)(param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0x5b4) = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  return param_1;
}

/* ref: FUN_00cef3f0 */
uint F_00cef3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcef3f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte * pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  int * piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x560)) {
    puVar7 = (undefined4 *)(param_1 + 0x570);
    do {
      *puVar7 = 0;
      iVar3 = iVar3 + 1;
      puVar7 = puVar7 + 5;
    } while (iVar3 < *(int *)(param_1 + 0x560));
  }
  local_c = *(int *)(param_1 + 0x560);
  if (local_c < 4) {
    if ((int)param_3 < 4) {
      return 0;
    }
    uVar4 = param_3 - 3;
    uVar11 = 0;
    param_3 = uVar4;
    if (0 < (int)uVar4) {
      uVar5 = REFG(undefined4, 0x134f7b8);
      do {
        pbVar1 = (byte *)(param_2 + 3 + uVar11);
        if ((*(char *)(param_2 + uVar11) == 'O') &&
           (((*(uint *)(pbVar1 + -3) == uVar5 ||
             ((((iVar3 = (uint)pbVar1[-3] - (uVar5 & 0xff), iVar3 == 0 &&
                (iVar3 = (uint)pbVar1[-2] - (uVar5 >> 8 & 0xff), iVar3 == 0)) &&
               (iVar3 = (uint)pbVar1[-1] - (REFG(undefined4, 0x134f7b8) >> 0x10 & 0xff), iVar3 == 0)) &&
              (iVar3 = (uint)*pbVar1 - (REFG(undefined4, 0x134f7b8) >> 0x18), iVar3 == 0)))) ||
            ((iVar3 >> 0x1f | 1U) == 0)))) {
          param_3 = uVar11;
          if (((int)uVar4 <= (int)(pbVar1 + (0x17 - param_2))) ||
             (uVar5 = (uint)*(byte *)(uVar11 + 0x1a + param_2),
             (int)uVar4 <= (int)(uVar5 + 0x1b + uVar11))) break;
          local_8 = uVar5 + 0x1b;
          iVar9 = 0;
          iVar10 = 0;
          iVar3 = 0;
          if (1 < uVar5) {
            do {
              iVar9 = iVar9 + (uint)pbVar1[iVar3 + 0x18];
              iVar6 = iVar3 + 0x19;
              iVar3 = iVar3 + 2;
              iVar10 = iVar10 + (uint)pbVar1[iVar6];
            } while (iVar3 < (int)(uVar5 - 1));
          }
          if (iVar3 < (int)(uint)*(byte *)(uVar11 + 0x1a + param_2)) {
            local_8 = local_8 + (uint)*(byte *)(iVar3 + uVar11 + 0x1b + param_2);
          }
          uVar5 = 0;
          iVar3 = 0;
          do {
            uVar5 = uVar5 << 8 ^ (&REFG(undefined4, 0x15d8df8))[(uint)pbVar1[iVar3 + -3] ^ uVar5 >> 0x18];
            uVar5 = uVar5 << 8 ^ (&REFG(undefined4, 0x15d8df8))[(uint)pbVar1[iVar3 + -2] ^ uVar5 >> 0x18];
            iVar3 = iVar3 + 2;
          } while (iVar3 < 0x16);
          if (iVar3 < 0x1a) {
            iVar6 = 0x1a - iVar3;
            iVar3 = iVar3 + iVar6;
            do {
              uVar5 = uVar5 << 8 ^ (&REFG(undefined4, 0x15d8df8))[uVar5 >> 0x18];
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          *(int *)(param_1 + 0x560) = local_c + 1;
          iVar6 = param_1 + local_c * 0x14;
          *(int *)(iVar6 + 0x568) = (local_8 + iVar10 + iVar9) - iVar3;
          *(uint *)(iVar6 + 0x56c) = uVar5;
          *((uint *)GEN_TOP((param_1 + (local_c * 5 + 0x159) * 4))) =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar11 + 0x19 + param_2),
                                          *(undefined1 *)(uVar11 + 0x18 + param_2)),
                                 *(undefined1 *)(uVar11 + 0x17 + param_2)),
                        *(undefined1 *)(uVar11 + 0x16 + param_2));
          if (*((char *)GEN_TOP((*(byte *)(uVar11 + 0x1a + param_2) + uVar11 + 0x1a + param_2))) == -1) {
            *(undefined4 *)(iVar6 + 0x574) = 0xffffffff;
          }
          else {
            *(uint *)(iVar6 + 0x574) =
                 CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar11 + 9 + param_2),
                                            *(undefined1 *)(uVar11 + 8 + param_2)),
                                   *(undefined1 *)(uVar11 + 7 + param_2)),
                          *(undefined1 *)(uVar11 + 6 + param_2));
          }
          *(uint *)(iVar6 + 0x570) = iVar3 + uVar11;
          local_c = *(int *)(param_1 + 0x560);
          uVar5 = REFG(undefined4, 0x134f7b8);
          param_3 = uVar4;
          if (local_c == 4) break;
        }
        uVar11 = uVar11 + 1;
        param_3 = uVar4;
      } while ((int)uVar11 < (int)uVar4);
    }
  }
  piVar8 = (int *)(param_1 + 0x560);
  param_1 = 0;
  if (0 < *piVar8) {
    piVar8 = (int *)(iVar2 + 0x568);
    do {
      iVar3 = piVar8[2];
      iVar9 = *piVar8;
      if ((int)(param_3 - iVar3) < *piVar8) {
        iVar9 = param_3 - iVar3;
      }
      uVar4 = piVar8[1];
      local_c = 0;
      if (0 < iVar9) {
        do {
          uVar4 = uVar4 << 8 ^
                  (&REFG(undefined4, 0x15d8df8))[(uint)*(byte *)(iVar3 + param_2 + local_c) ^ uVar4 >> 0x18];
          local_c = local_c + 1;
        } while (local_c < iVar9);
      }
      iVar10 = *piVar8;
      *piVar8 = iVar10 - iVar9;
      piVar8[1] = uVar4;
      if (iVar10 - iVar9 == 0) {
        if (uVar4 == piVar8[-1]) {
          *(undefined4 *)(iVar2 + 0x560) = 0xffffffff;
          *(undefined4 *)(iVar2 + 0x3ac) = 0;
          *(undefined4 *)(iVar2 + 0x538) = 0xffffffff;
          iVar10 = *(int *)(iVar2 + 0x574 + param_1 * 0x14);
          *(int *)(iVar2 + 0x3f0) = iVar10;
          *(uint *)(iVar2 + 0x3f4) = (uint)(iVar10 != -1);
          return iVar9 + iVar3;
        }
        *(int *)(iVar2 + 0x560) = *(int *)(iVar2 + 0x560) + -1;
        iVar9 = *(int *)(iVar2 + 0x560) * 5 + 0x159;
        iVar3 = iVar2 + iVar9 * 4;
        piVar8[-1] = *(int *)(iVar2 + iVar9 * 4);
        *piVar8 = *(int *)(iVar3 + 4);
        piVar8[1] = *(int *)(iVar3 + 8);
        piVar8[2] = *(int *)(iVar3 + 0xc);
        piVar8[3] = *(int *)(iVar3 + 0x10);
      }
      else {
        param_1 = param_1 + 1;
        piVar8 = piVar8 + 5;
      }
    } while (param_1 < *(int *)(iVar2 + 0x560));
  }
  return param_3;
}

/* ref: FUN_00cef770 */
unsigned int F_00cef770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xcef770u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * in_eax = (float *)(uintptr_t)gen_a0;
  uint in_edx = (uint)gen_a1;
  gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  gen_v16 * pauVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  pauVar1 = param_3;
  for (uVar2 = in_edx >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    (*(undefined4 *)((char *)&auVar3 + 0)) = (int)(*in_eax * param_4);
    (*(undefined4 *)((char *)&auVar3 + 4)) = (int)(in_eax[1] * param_4);
    (*(undefined4 *)((char *)&auVar3 + 8)) = (int)(in_eax[2] * param_4);
    (*(undefined4 *)((char *)&auVar3 + 12)) = (int)(in_eax[3] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 4)) = (int)(in_eax[5] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 0)) = (int)(in_eax[4] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 8)) = (int)(in_eax[6] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 12)) = (int)(in_eax[7] * param_4);
    gen_packssdw(&(auVar4), &(auVar3), &(auVar4));
    memcpy(&(*pauVar1), &(auVar4), sizeof(auVar4) < sizeof(*pauVar1) ? sizeof(auVar4) : sizeof(*pauVar1));
    in_eax = in_eax + 8;
    pauVar1 = pauVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00cef7d0 */
unsigned int F_00cef7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xcef7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float * pfVar1;
  undefined1 auVar2 [16];
  float * pfVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar4 = param_1 >> 2;
  if (uVar4 != 0) {
    pfVar3 = param_4;
    do {
      pfVar1 = ((float *)GEN_TOP(((int)pfVar3 + (param_2 - (int)param_4))));
      (*(undefined4 *)((char *)&auVar5 + 0)) = (int)(*pfVar1 * param_5);
      (*(undefined4 *)((char *)&auVar5 + 4)) = (int)(pfVar1[1] * param_5);
      (*(undefined4 *)((char *)&auVar5 + 8)) = (int)(pfVar1[2] * param_5);
      (*(undefined4 *)((char *)&auVar5 + 12)) = (int)(pfVar1[3] * param_5);
      (*(undefined4 *)((char *)&auVar6 + 4)) = (int)(pfVar3[1] * param_5);
      (*(undefined4 *)((char *)&auVar6 + 0)) = (int)(*pfVar3 * param_5);
      (*(undefined4 *)((char *)&auVar6 + 8)) = (int)(pfVar3[2] * param_5);
      (*(undefined4 *)((char *)&auVar6 + 12)) = (int)(pfVar3[3] * param_5);
      gen_packssdw(&(auVar7), &(auVar6), &(auVar5));
      (*(undefined4 *)((char *)&auVar2 + 4)) = (int)(pfVar3[1] * param_5);
      (*(undefined4 *)((char *)&auVar2 + 0)) = (int)(*pfVar3 * param_5);
      (*(undefined4 *)((char *)&auVar2 + 8)) = (int)(pfVar3[2] * param_5);
      (*(undefined4 *)((char *)&auVar2 + 12)) = (int)(pfVar3[3] * param_5);
      gen_packssdw(&(auVar6), &(auVar5), &(auVar2));
      gen_piece_set(&auVar11, 0, 12, (unsigned long long)(GEN_PIECE(&auVar7, 0, 12)));
      (*(undefined2 *)((char *)&auVar11 + 12)) = (*(undefined2 *)((char *)&auVar7 + 6));
      (*(undefined2 *)((char *)&auVar11 + 14)) = (*(undefined2 *)((char *)&auVar6 + 6));
      (*(undefined4 *)((char *)&auVar10 + 12)) = (*(undefined4 *)((char *)&auVar11 + 12));
      gen_piece_set(&auVar10, 0, 10, (unsigned long long)(GEN_PIECE(&auVar7, 0, 10)));
      (*(undefined2 *)((char *)&auVar10 + 10)) = (*(undefined2 *)((char *)&auVar6 + 4));
      gen_piece_set(&auVar9, 10, 6, (unsigned long long)(GEN_PIECE(&auVar10, 10, 6)));
      (*(undefined8 *)((char *)&auVar9 + 0)) = (*(undefined8 *)((char *)&auVar7 + 0));
      (*(undefined2 *)((char *)&auVar9 + 8)) = (*(undefined2 *)((char *)&auVar7 + 4));
      (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar9 + 8));
      (*(undefined2 *)((char *)&auVar8 + 6)) = (*(undefined2 *)((char *)&auVar6 + 2));
      (*(undefined2 *)((char *)&auVar8 + 4)) = (*(undefined2 *)((char *)&auVar7 + 2));
      (*(undefined2 *)((char *)&auVar8 + 0)) = (*(undefined2 *)((char *)&auVar7 + 0));
      (*(undefined2 *)((char *)&auVar8 + 2)) = (*(undefined2 *)((char *)&auVar6 + 0));
      memcpy(&(*((gen_v16 *)GEN_TOP(((param_3 - (int)param_4) + (int)pfVar3)))), &(auVar8), sizeof(auVar8) < sizeof(*((gen_v16 *)GEN_TOP(((param_3 - (int)param_4) + (int)pfVar3)))) ? sizeof(auVar8) : sizeof(*((gen_v16 *)GEN_TOP(((param_3 - (int)param_4) + (int)pfVar3)))));
      pfVar3 = pfVar3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 0;
}

/* ref: FUN_00cef840 */
uint F_00cef840(unsigned int gen_a0)
{
  GEN_ENTER(0xcef840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d92f8) = param_1;
  return param_1;
}

/* ref: FUN_00cef860 */
uint F_00cef860(unsigned int gen_a0)
{
  GEN_ENTER(0xcef860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d92fc) = param_1;
  return param_1;
}

/* ref: FUN_00cef8b0 */
uint F_00cef8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcef8b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return -(uint)(REFG(char, 0x15d91f8) != '\0') & 0x15d91f8;
}

/* ref: FUN_00cef8d0 */
uint F_00cef8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcef8d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return *(uint *)(param_1 + 0x1c);
  }
  if (param_2 != 1) {
    return 0;
  }
  return 0x10;
}

/* ref: FUN_00cef900 */
uint F_00cef900(unsigned int gen_a0)
{
  GEN_ENTER(0xcef900u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)*param_1;
  *(undefined4 *)(uVar1 + 0x3ac) = 0;
  *(undefined4 *)(uVar1 + 0x560) = 0;
  *(undefined4 *)(uVar1 + 0x558) = 0;
  *(undefined4 *)(uVar1 + 0x3f4) = 0;
  *(undefined1 *)(uVar1 + 0x535) = 0;
  *(undefined4 *)(uVar1 + 0x55c) = 0;
  *(undefined4 *)(uVar1 + 0x5b4) = 0;
  *(undefined4 *)(uVar1 + 0x5b8) = 0;
  return uVar1;
}

/* ref: FUN_00cefa40 */
uint F_00cefa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcefa40u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = in_eax + 3U & 0xfffffffc;
  if (*(int *)(in_ecx + 0x24) == 0) {
    *(int *)(in_ecx + 0x30) = *(int *)(in_ecx + 0x30) + uVar2;
    uVar2 = ((code *)REFG(gen_code32, 0x15d92f8))(uVar2);
    return uVar2;
  }
  iVar1 = *(int *)(in_ecx + 0x2c);
  uVar2 = iVar1 + uVar2;
  if (*(uint *)(in_ecx + 0x28) < uVar2) {
    return 0;
  }
  *(uint *)(in_ecx + 0x2c) = uVar2;
  return iVar1 + *(int *)(in_ecx + 0x24);
}

/* ref: FUN_00cefa80 */
uint F_00cefa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcefa80u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = in_eax + 3U & 0xfffffffc;
  if (*(int *)(in_ecx + 0x24) == 0) {
    *(int *)(in_ecx + 0x30) = *(int *)(in_ecx + 0x30) + uVar2;
    uVar2 = ((code *)REFG(gen_code32, 0x15d92f8))(uVar2);
    return uVar2;
  }
  iVar1 = *(int *)(in_ecx + 0x2c);
  uVar2 = iVar1 + uVar2;
  if (*(uint *)(in_ecx + 0x28) < uVar2) {
    return 0;
  }
  *(uint *)(in_ecx + 0x2c) = uVar2;
  return iVar1 + *(int *)(in_ecx + 0x24);
}

/* ref: FUN_00cefae0 */
uint F_00cefae0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcefae0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  float in_xmm2 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = F_00c4d440(in_xmm2,(float10)(int)param_2);
  fVar3 = F_00c4d24c((float10)(float)((float10)(float)fVar3 / (float10)(int)param_3));
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits((double)(float)fVar3),
                       (int)((ulonglong)gen_d2bits((double)(float)fVar3) >> 0x20));
  uVar1 = (uint)fVar3;
  fVar3 = (float10)F_00cf3600((float)((float10)(int)uVar1 + (float10)REFG(double, 0x1088130)),param_3);
  uVar2 = uVar1 + 1;
  if (!(fVar3 <= (float10)(int)param_2)) {
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00cefb60 */
unsigned int F_00cefb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcefb60u, gen_a0, gen_a1, 0u, 0u);
  uint in_edx = (uint)gen_a0;
  int in_edi = (int)gen_a1;
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = 0x1f;
  if (in_edx != 0) {
    for (; in_edx >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  cVar2 = (char)iVar1;
  if (in_edx != 0) {
    cVar2 = cVar2 + '\x01';
  }
  uVar3 = 0;
  if (0 < (int)in_edx >> 3) {
    do {
      uVar7 = uVar3 >> 8;
      uVar4 = uVar3 & 0xff;
      uVar5 = uVar3 >> 0x10;
      uVar6 = uVar3 >> 0x18;
      uVar3 = uVar3 + 1;
      *(short *)(in_edi + -2 + uVar3 * 2) =
           (short)(CONCAT31(CONCAT21(CONCAT11((&REFG(undefined1, 0x15d8cf8))[uVar4],(&REFG(undefined1, 0x15d8cf8))[uVar7 & 0xff]),
                                     (&REFG(undefined1, 0x15d8cf8))[uVar5 & 0xff]),(&REFG(undefined1, 0x15d8cf8))[uVar6]) >>
                  (0x23U - (cVar2 + -1) & 0x1f)) * 4;
    } while ((int)uVar3 < (int)in_edx >> 3);
  }
  return 0;
}

/* ref: FUN_00cefbf0 */
uint F_00cefbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcefbf0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = ((param_3 >> 1) + (param_3 >> 2) + param_3) * 4 + 0x10;
  if (*(int *)(in_esi + 0x24) == 0) {
    *(int *)(in_esi + 0x30) = *(int *)(in_esi + 0x30) + iVar2;
    uVar3 = ((code *)REFG(gen_code32, 0x15d92f8))(iVar2);
  }
  else {
    uVar4 = *(int *)(in_esi + 0x2c) + iVar2;
    if (*(uint *)(in_esi + 0x28) < uVar4) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(in_esi + 0x2c) + *(int *)(in_esi + 0x24);
      *(uint *)(in_esi + 0x2c) = uVar4;
    }
  }
  *(uint *)(in_esi + 0x3f8 + param_2 * 4) = uVar3;
  if (uVar3 != 0) {
    uVar4 = uVar3 + 0xf & 0xfffffff0;
    iVar2 = uVar4 + (param_3 >> 1) * 4;
    iVar1 = uVar4 + param_3 * 4;
    *(uint *)(in_esi + 0x400 + param_2 * 4) = uVar4;
    *(int *)(in_esi + 0x408 + param_2 * 4) = iVar2;
    *(int *)(in_esi + 0x410 + param_2 * 4) = iVar1;
    F_00ceb2e0(iVar2,uVar4,param_3,iVar1);
    iVar2 = uVar4 + ((param_3 >> 2) + param_3) * 4;
    *(int *)(in_esi + 0x418 + param_2 * 4) = iVar2;
    if (iVar2 != 0) {
      F_00ceb430(param_3,iVar2);
      uVar4 = (param_3 >> 3) * 2 + 3U & 0xfffffffc;
      if (*(int *)(in_esi + 0x24) == 0) {
        *(int *)(in_esi + 0x30) = *(int *)(in_esi + 0x30) + uVar4;
        uVar3 = ((code *)REFG(gen_code32, 0x15d92f8))(uVar4);
      }
      else {
        uVar4 = uVar4 + *(int *)(in_esi + 0x2c);
        if (*(uint *)(in_esi + 0x28) < uVar4) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(int *)(in_esi + 0x24) + *(int *)(in_esi + 0x2c);
          *(uint *)(in_esi + 0x2c) = uVar4;
        }
      }
      *(uint *)(in_esi + 0x420 + param_2 * 4) = uVar3;
      if (uVar3 != 0) {
        F_00cefb60(param_3,uVar3);
        return 1;
      }
    }
  }
  *(undefined4 *)(in_esi + 0x38) = 3;
  if (*(int *)(in_esi + 0x34) == 0) {
    *(undefined4 *)(in_esi + 0x38) = 3;
  }
  return 0;
}

/* ref: FUN_00cefd20 */
uint F_00cefd20(unsigned int gen_a0)
{
  GEN_ENTER(0xcefd20u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x770];
  ushort uVar1;
  char * pcVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  undefined * pvVar11;
  float * pfVar12;
  uint uVar13;
  int iVar14;
  float * pfVar15;
  float fVar16;
  byte * pbVar17;
  float * pfVar18;
  float * pfVar19;
  int iVar20;
  byte * pbVar21;
  float * pfVar22;
  uint * puVar23;
  ushort * puVar24;
  short * psVar25;
  float * pfVar26;
  float * pfVar27;
  bool bVar28;
  float10 fVar29;
  float in_XMM2_Da = 0;
  
  (*(uint *)(gen_frame + 0x768)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x76c);
  pcVar2 = (char *)param_1[4];
  cVar5 = *pcVar2;
  bVar6 = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  param_1[4] = (uint)(pcVar2 + 1);
  if (cVar5 == 'O') {
    cVar5 = pcVar2[1];
    param_1[4] = (uint)(pcVar2 + 2);
    if (cVar5 != 'g') goto LAB_00cefd76;
    cVar5 = pcVar2[2];
    param_1[4] = (uint)(pcVar2 + 3);
    if ((cVar5 != 'g') || (cVar5 = pcVar2[3], param_1[4] = (uint)(pcVar2 + 4), cVar5 != 'S'))
    goto LAB_00cefd76;
    uVar9 = F_00ceb650(param_1);
    if (uVar9 == 0) goto LAB_00cf088d;
    bVar4 = *(byte *)((int)param_1 + 0x533);
    if ((bVar4 & 2) == 0) {
      bVar28 = param_1[0xd] == 0;
      uVar9 = 0x22;
    }
    else if ((bVar4 & 4) == 0) {
      if ((bVar4 & 1) == 0) {
        if (param_1[0x10c] == 1) {
          if ((char)param_1[0x10d] == '\x1e') {
            cVar5 = *(char *)param_1[4];
            param_1[4] = (uint)((char *)param_1[4] + 1);
            if (cVar5 == '\x01') {
              uVar9 = F_00ceb5c0(((byte * PTR32 *)(gen_frame + 0x760)),param_1,6);
              if (uVar9 == 0) {
                uVar9 = 10;
              }
              else {
                uVar9 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x760)));
                if (uVar9 == 0) {
                  uVar9 = 0x22;
                }
                else {
                  uVar9 = F_00ceb570(param_1);
                  if (uVar9 == 0) {
                    bVar4 = *(byte *)param_1[4];
                    uVar9 = (uint)bVar4;
                    param_1[4] = (uint)((byte *)param_1[4] + 1);
                    param_1[2] = uVar9;
                    if (bVar4 == 0) {
                      uVar9 = 0x22;
                    }
                    else {
                      uVar10 = F_00ceb540(uVar9);
                      param_1[3] = uVar10;
                      if (uVar9 < 0x11) {
                        uVar9 = F_00ceb570(param_1);
                        *param_1 = uVar9;
                        if (uVar9 == 0) {
                          uVar9 = 0x22;
                        }
                        else {
                          F_00ceb570(param_1);
                          uVar9 = F_00ceb570(param_1);
                          param_1[1] = uVar9;
                          F_00ceb570(param_1);
                          pbVar21 = (byte *)param_1[4];
                          bVar4 = *pbVar21 >> 4;
                          uVar9 = *pbVar21 & 0xf;
                          param_1[4] = (uint)(pbVar21 + 1);
                          param_1[0xf] = 1 << (sbyte)uVar9;
                          param_1[0x10] = 1 << bVar4;
                          if (((uVar9 - 6 < 8) && (bVar4 - 6 < 8)) && (uVar9 <= bVar4)) {
                            bVar4 = pbVar21[1];
                            param_1[4] = (uint)(pbVar21 + 2);
                            if ((bVar4 & 1) == 0) {
                              uVar9 = 0x22;
                              goto LAB_00cf0881;
                            }
                            uVar9 = F_00ceb7e0(param_1);
                            if ((uVar9 == 0) || (uVar9 = F_00ceb830(param_1), uVar9 == 0))
                            goto LAB_00cf088d;
                            do {
                              uVar9 = F_00ceb960(param_1);
                              param_1[4] = param_1[4] + uVar9;
                              if (param_1[6] <= param_1[4]) {
                                param_1[0xd] = 1;
                              }
                              *(undefined1 *)(param_1 + 0x14d) = 0;
                            } while (uVar9 != 0);
                            uVar9 = F_00ceb830(param_1);
                            if (uVar9 == 0) goto LAB_00cf088d;
                            uVar9 = F_00cef1d0(param_1,1);
                            if (uVar9 == 0) {
                              if (param_1[0xe] == 0x15) {
                                param_1[0xe] = 0x14;
                                F_00c47745((*(uint *)(gen_frame + 0x768)) ^ (uint)(uint)(gen_frame + 0x76c));
                                return 0;
                              }
                              goto LAB_00cf088d;
                            }
                            F_00ceac70();
                            F_00ceadd0();
                            uVar9 = F_00ceba40(param_1);
                            if (uVar9 == 5) {
                              iVar20 = 0;
                              do {
                                uVar9 = F_00ceba40(param_1);
                                *(char *)((int)((byte * PTR32 *)(gen_frame + 0x760)) + iVar20) = (char)uVar9;
                                iVar20 = iVar20 + 1;
                              } while (iVar20 < 6);
                              uVar9 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x760)));
                              if (uVar9 == 0) {
                                bVar28 = param_1[0xd] == 0;
                                uVar9 = 0x14;
                              }
                              else {
                                uVar9 = F_00cebad0(param_1,8);
                                param_1[0x11] = uVar9 + 1;
                                pvVar11 = (undefined *)F_00cefa40((uVar9 + 1) * 4,param_1);
                                param_1[0x12] = (uint)pvVar11;
                                if (pvVar11 != (undefined *)0x0) {
                                  F_00c48350(pvVar11,0,param_1[0x11] * 4);
                                  (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)0x0;
                                  if (param_1[9] == 0) {
                                    pfVar12 = ((float *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x2002c)));
                                    (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar12;
                                  }
                                  (*(int *)(gen_frame + 0x10)) = 0;
                                  if (0 < (int)param_1[0x11]) {
                                    do {
                                      (*(float *)(gen_frame + 0x738)) = 0.0;
                                      (*(float * PTR32 *)(gen_frame + 0x73c)) = (float *)0x0;
                                      (*(float * PTR32 *)(gen_frame + 0x740)) = (float *)0x0;
                                      (*(uint *)(gen_frame + 0x744)) = 0;
                                      (*(uint *)(gen_frame + 0x748)) = 0;
                                      (*(undefined4 *)(gen_frame + 0x74c)) = 0;
                                      (*(uint *)(gen_frame + 0x750)) = 0;
                                      (*(float *)(gen_frame + 0x754)) = 0.0;
                                      (*(float *)(gen_frame + 0x758)) = 0.0;
                                      (*(uint *)(gen_frame + 0x75c)) = 0;
                                      uVar9 = F_00cebad0(param_1,8);
                                      pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                      if ((((char)uVar9 != 'B') ||
                                          (uVar9 = F_00cebad0(param_1,8), pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34)),
                                          (char)uVar9 != 'C')) ||
                                         (uVar9 = F_00cebad0(param_1,8), pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34)),
                                         (char)uVar9 != 'V')) {
override_prt_cf0873_1085496d: ;
                                        ((code *)REFG(gen_code32, 0x15d92fc))(pfVar12);
                                        goto LAB_00cf087c;
                                      }
                                      uVar9 = F_00cebad0(param_1,8);
                                      (*(byte *)(gen_frame + 0x27)) = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      pfVar12 = (float *)(uVar9 * 0x100 + (uint)(*(byte *)(gen_frame + 0x27)));
                                      (*(float * PTR32 *)(gen_frame + 0x740)) = pfVar12;
                                      uVar9 = F_00ceb540(pfVar12);
                                      (*(uint *)(gen_frame + 0x744)) = uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      (*(byte *)(gen_frame + 0x27)) = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      (*(byte *)(gen_frame + 0x1b)) = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      uVar10 = (uVar9 * 0x100 + (uint)(*(byte *)(gen_frame + 0x1b))) * 0x100 +
                                               (uint)(*(byte *)(gen_frame + 0x27));
                                      (*(uint *)(gen_frame + 0x748)) = uVar10;
                                      uVar9 = F_00cebad0(param_1,1);
                                      if (uVar9 == 0) {
                                        pfVar12 = (float *)F_00cebad0(param_1,1);
                                        (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar12;
                                      }
                                      else {
                                        (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
                                      }
                                      pfVar12 = (float *)F_00cefa80(uVar10,param_1);
                                      (*(float * PTR32 *)(gen_frame + 0x2c)) = pfVar12;
                                      if (pfVar12 == (float *)0x0) {
                                        ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x34)));
                                        goto LAB_00cf08b0;
                                      }
                                      if (uVar9 == 0) {
                                        iVar20 = 0;
                                        if (0 < (int)uVar10) {
                                          do {
                                            if (((*(float * PTR32 *)(gen_frame + 0x28)) == (float *)0x0) ||
                                               (uVar9 = F_00cebad0(param_1,1), uVar9 != 0)) {
                                              uVar9 = F_00cebad0(param_1,5);
                                              *(char *)(iVar20 + (int)(*(float * PTR32 *)(gen_frame + 0x2c))) =
                                                   (char)uVar9 + '\x01';
                                            }
                                            else {
                                              *(undefined1 *)(iVar20 + (int)(*(float * PTR32 *)(gen_frame + 0x2c))) = 0xff;
                                            }
                                            iVar20 = iVar20 + 1;
                                          } while (iVar20 < (int)uVar10);
                                        }
                                      }
                                      else {
                                        pfVar12 = (float *)0x0;
                                        uVar9 = F_00cebad0(param_1,5);
                                        (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)(uVar9 + 1);
                                        if (0 < (int)uVar10) {
                                          do {
                                            uVar9 = uVar10 - (int)pfVar12;
                                            iVar20 = 0x1f;
                                            if (uVar9 != 0) {
                                              for (; uVar9 >> iVar20 == 0; iVar20 = iVar20 + -1) {
                                              }
                                            }
                                            if (uVar9 != 0) {
                                              iVar20 = iVar20 + 1;
                                            }
                                            uVar9 = F_00cebad0(param_1,iVar20);
                                            (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)(uVar9 + (int)pfVar12);
                                            if ((int)uVar10 < (int)(uVar9 + (int)pfVar12)) {
                                              ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x34)));
                                              pfVar12 = (*(float * PTR32 *)(gen_frame + 0x2c));
                                              if (param_1[9] == 0)
                                              goto override_prt_cf0873_1085496d;
                                              goto LAB_00cf087c;
                                            }
                                            F_00c48350((undefined1 *)((int)pfVar12 + (int)(*(float * PTR32 *)(gen_frame + 0x2c))),
                                                    (int)(*(float * PTR32 *)(gen_frame + 0x28)),uVar9);
                                            (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 1);
                                            pfVar12 = (*(float * PTR32 *)(gen_frame + 0x14));
                                          } while ((int)(*(float * PTR32 *)(gen_frame + 0x14)) < (int)uVar10);
                                        }
                                      }
                                      uVar9 = F_00cebad0(param_1,4);
                                      bVar4 = (byte)uVar9;
                                      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 1)) = bVar4;
                                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 0)) = CONCAT11(bVar4,(char)(*(uint *)(gen_frame + 0x75c)));
                                      pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                      if (2 < bVar4) goto override_prt_cf0873_1085496d;
                                      if (bVar4 != 0) {
                                        uVar9 = F_00cebad0(param_1,0x20);
                                        fVar29 = F_00ceae60(uVar9);
                                        (*(float *)(gen_frame + 0x754)) = (float)fVar29;
                                        uVar9 = F_00cebad0(param_1,0x20);
                                        fVar29 = F_00ceae60(uVar9);
                                        (*(float *)(gen_frame + 0x758)) = (float)fVar29;
                                        uVar9 = F_00cebad0(param_1,4);
                                        cVar5 = (char)uVar9 + '\x01';
                                        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 0)) = cVar5;
                                        (*(uint *)(gen_frame + 0x75c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x75c)), 1, 3),cVar5);
                                        uVar9 = F_00cebad0(param_1,1);
                                        bVar28 = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 1)) == '\x01';
                                        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 2)) = (char)uVar9;
                                        gen_piece_set(&(*(uint *)(gen_frame + 0x75c)), 0, 3, (unsigned long long)(CONCAT12((char)uVar9,(ushort)(*(uint *)(gen_frame + 0x75c)))));
                                        if (bVar28) {
                                          uVar9 = F_00cefae0(in_XMM2_Da,uVar10,(uint)(*(float * PTR32 *)(gen_frame + 0x740)));
                                        }
                                        else {
                                          uVar9 = uVar10 * (int)(*(float * PTR32 *)(gen_frame + 0x740));
                                        }
                                        (*(uint *)(gen_frame + 0x750)) = uVar9;
                                        pfVar12 = (float *)F_00cefa80(uVar9 * 2,param_1);
                                        (*(float * PTR32 *)(gen_frame + 0x20)) = pfVar12;
                                        if (pfVar12 == (float *)0x0) {
                                          ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x34)));
                                          uVar9 = 3;
                                        }
                                        else {
                                          (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x0;
                                          if (0 < (int)uVar9) {
                                            do {
                                              uVar13 = F_00cebad0(param_1,(*(uint *)(gen_frame + 0x75c)) & 0xff);
                                              if (uVar13 == 0xffffffff) {
                                                pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                                if (param_1[9] == 0) {
                                                  ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x20)));
                                                  pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                                }
                                                goto override_prt_cf0873_1085496d;
                                              }
                                              *(short *)((int)(*(float * PTR32 *)(gen_frame + 0x20)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x30))) * 2) =
                                                   (short)uVar13;
                                              uVar13 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
                                              (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar13;
                                            } while ((int)uVar13 < (int)uVar9);
                                          }
                                          if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 1)) != '\x01') {
                                            pfVar12 = (float *)F_00cefa40(uVar9 * 4,param_1);
                                            (*(float * PTR32 *)(gen_frame + 0x73c)) = pfVar12;
                                            if (0 < (int)uVar9) {
                                              iVar20 = 0;
                                              do {
                                                pfVar26 = (float *)(uint)*(ushort *)
                                                                          ((int)(*(float * PTR32 *)(gen_frame + 0x20)) +
                                                                          iVar20 * 2);
                                                (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar26;
                                                iVar14 = iVar20 + 1;
                                                pfVar12[iVar20] =
                                                     (float)((float10)(int)((int)(uintptr_t)pfVar26) * (float10)(*(float *)(gen_frame + 0x758)) + (float10)(*(float *)(gen_frame + 0x754)));
                                                iVar20 = iVar14;
                                              } while (iVar14 < (int)uVar9);
                                            }
                                            if (param_1[9] == 0) {
                                              ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x20)));
                                            }
                                            if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 1)) != '\x02') goto LAB_00cf0448;
LAB_00cf0425: ;
                                            if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 2)) != '\0') {
                                              iVar20 = 1;
                                              if (1 < (int)uVar9) {
                                                do {
                                                  iVar14 = iVar20 + 1;
                                                  (*(float * PTR32 *)(gen_frame + 0x73c))[iVar20] = (*(float * PTR32 *)(gen_frame + 0x73c))[iVar20 + -1];
                                                  iVar20 = iVar14;
                                                } while (iVar14 < (int)uVar9);
                                              }
                                              (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 2)) = 0;
                                              gen_piece_set(&(*(uint *)(gen_frame + 0x75c)), 0, 3, (unsigned long long)((uint3)(ushort)(*(uint *)(gen_frame + 0x75c))));
                                            }
                                            goto LAB_00cf0448;
                                          }
                                          pfVar12 = (float *)F_00cefa40(uVar10 * (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x740))) * 4
                                                                          ,param_1);
                                          (*(float * PTR32 *)(gen_frame + 0x73c)) = pfVar12;
                                          if (pfVar12 != (float *)0x0) {
                                            (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x0;
                                            if (0 < (int)uVar10) {
                                              (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar12;
                                              do {
                                                iVar20 = 1;
                                                if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x740))) {
                                                  (*(float * PTR32 *)(gen_frame + 0x14)) = (*(float * PTR32 *)(gen_frame + 0x740));
                                                  pfVar12 = (*(float * PTR32 *)(gen_frame + 0x28));
                                                  do {
                                                    lVar3 = (longlong)iVar20;
                                                    iVar20 = iVar20 * uVar9;
                                                    pfVar26 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x14)) + -1);
                                                    (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar26;
                                                    pfVar19 = (float *)(uint)*((ushort *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x20)) +
                                                                              (int)(((longlong)
                                                                                     (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x30))) / lVar3 &
                                                                                    0xffffffffU) %
                                                                                   (ulonglong)uVar9)
                                                                              * 2)));
                                                    (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar19;
                                                    *pfVar12 = (float)((float10)(int)((int)(uintptr_t)pfVar19) * (float10)(*(float *)(gen_frame + 0x758)) +
                                                                      (float10)(*(float *)(gen_frame + 0x754)));
                                                    pfVar12 = pfVar12 + 1;
                                                  } while (pfVar26 != (float *)0x0);
                                                }
                                                (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) + (int)(*(float * PTR32 *)(gen_frame + 0x740));
                                                uVar10 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
                                                (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar10;
                                              } while ((int)uVar10 < (int)(*(uint *)(gen_frame + 0x748)));
                                            }
                                            if (param_1[9] == 0) {
                                              ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x20)));
                                            }
                                            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 1)) = 2;
                                            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x75c)) + 0)) = CONCAT11(2,(char)(*(uint *)(gen_frame + 0x75c)));
                                            goto LAB_00cf0425;
                                          }
                                          if (param_1[9] == 0) {
                                            ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x20)));
                                          }
LAB_00cf0924: ;
                                          ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x34)));
                                          uVar9 = 3;
                                        }
                                        goto LAB_00cf0881;
                                      }
LAB_00cf0448: ;
                                      (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x34));
                                      if (param_1[9] != 0) {
                                        (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)(param_1[0xb] + param_1[9]);
                                      }
                                      pfVar12 = &(*(float *)(gen_frame + 0x738));
                                      pfVar26 = (*(float * PTR32 *)(gen_frame + 0x28));
                                      for (iVar20 = 10; iVar20 != 0; iVar20 = iVar20 + -1) {
                                        *pfVar26 = *pfVar12;
                                        pfVar12 = pfVar12 + 1;
                                        pfVar26 = pfVar26 + 1;
                                      }
                                      uVar9 = F_00ceb070((*(float * PTR32 *)(gen_frame + 0x2c)),(*(float * PTR32 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x748)));
                                      if (uVar9 == 0) {
                                        pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                        if (param_1[9] == 0) {
                                          ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x2c)));
                                          pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34));
                                        }
                                        goto override_prt_cf0873_1085496d;
                                      }
                                      if (param_1[9] == 0) {
                                        ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x2c)));
                                      }
                                      iVar20 = (int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x28))[10]) * 4 + 0x2c;
                                      uVar9 = F_00cefa40(iVar20,param_1);
                                      *(uint *)(param_1[0x12] + (*(int *)(gen_frame + 0x10)) * 4) = uVar9;
                                      if (*(int *)(param_1[0x12] + (*(int *)(gen_frame + 0x10)) * 4) == 0)
                                      goto LAB_00cf0924;
                                      if (param_1[9] == 0) {
                                        F_00c46aa0(*(undefined4 *)(param_1[0x12] + (*(int *)(gen_frame + 0x10)) * 4),
                                                   (*(float * PTR32 *)(gen_frame + 0x34)),iVar20);
                                      }
                                      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
                                    } while ((*(int *)(gen_frame + 0x10)) < (int)param_1[0x11]);
                                  }
                                  ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x34)));
                                  iVar20 = 0;
                                  uVar9 = F_00cebad0(param_1,6);
                                  uVar9 = (uint)(byte)((char)uVar9 + 1);
                                  if (uVar9 != 0) {
                                    do {
                                      uVar10 = F_00cebad0(param_1,0x10);
                                      if (uVar10 != 0) goto LAB_00cf087c;
                                      iVar20 = iVar20 + 1;
                                    } while (iVar20 < (int)uVar9);
                                  }
                                  uVar9 = F_00cebad0(param_1,6);
                                  param_1[0x13] = uVar9 + 1;
                                  uVar9 = F_00cefa40((uVar9 + 1) * 0xa24,param_1);
                                  param_1[0x34] = uVar9;
                                  (*(int *)(gen_frame + 0x10)) = 0;
                                  if (0 < (int)param_1[0x13]) {
LAB_00cf0580: ;
                                    uVar9 = F_00cebad0(param_1,0x10);
                                    uVar8 = (ushort)uVar9;
                                    *(ushort *)((int)param_1 + (*(int *)(gen_frame + 0x10)) * 2 + 0x50) = uVar8;
                                    if (uVar8 < 2) {
                                      pbVar21 = (byte *)((*(int *)(gen_frame + 0x10)) * 0xa24 + param_1[0x34]);
                                      if (uVar8 != 0) goto code_r0x00cf05af;
                                      uVar9 = F_00cebad0(param_1,8);
                                      *pbVar21 = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      *(short *)(pbVar21 + 2) = (short)uVar9;
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      *(short *)(pbVar21 + 4) = (short)uVar9;
                                      uVar9 = F_00cebad0(param_1,6);
                                      pbVar21[6] = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      pbVar21[7] = (byte)uVar9;
                                      uVar9 = F_00cebad0(param_1,4);
                                      bVar6 = (char)uVar9 + 1;
                                      pbVar21[8] = bVar6;
                                      iVar20 = 0;
                                      if (bVar6 != 0) {
                                        do {
                                          uVar9 = F_00cebad0(param_1,8);
                                          pbVar21[iVar20 + 9] = (byte)uVar9;
                                          iVar20 = iVar20 + 1;
                                        } while (iVar20 < (int)(uint)pbVar21[8]);
                                      }
                                      uVar9 = 4;
                                      goto LAB_00cf0881;
                                    }
                                    goto LAB_00cf087c;
                                  }
LAB_00cf0dc5: ;
                                  uVar9 = F_00cebad0(param_1,6);
                                  param_1[0x35] = uVar9 + 1;
                                  uVar9 = F_00cefa40((uVar9 + 1) * 0x1c,param_1);
                                  param_1[0x56] = uVar9;
                                  (*(int *)(gen_frame + 0x10)) = 0;
                                  if (0 < (int)param_1[0x35]) {
                                    (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)0x0;
                                    (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)(param_1 + 0x36);
                                    do {
                                      puVar23 = (uint *)(param_1[0x56] + (int)(*(float * PTR32 *)(gen_frame + 0x2c)));
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      *(ushort *)(*(float * PTR32 *)(gen_frame + 0x28)) = (ushort)uVar9;
                                      if (2 < (ushort)uVar9) goto LAB_00cf087c;
                                      uVar9 = F_00cebad0(param_1,0x18);
                                      *puVar23 = uVar9;
                                      uVar9 = F_00cebad0(param_1,0x18);
                                      puVar23[1] = uVar9;
                                      uVar9 = F_00cebad0(param_1,0x18);
                                      puVar23[2] = uVar9 + 1;
                                      uVar9 = F_00ceb540(uVar9 + 1);
                                      puVar23[3] = uVar9;
                                      uVar9 = F_00cebad0(param_1,6);
                                      *(char *)(puVar23 + 4) = (char)uVar9 + '\x01';
                                      uVar9 = F_00cebad0(param_1,8);
                                      iVar20 = 0;
                                      *(char *)((int)puVar23 + 0x11) = (char)uVar9;
                                      if ((char)puVar23[4] != '\0') {
                                        do {
                                          (*(byte *)(gen_frame + 0x27)) = 0;
                                          uVar9 = F_00cebad0(param_1,3);
                                          (*(byte *)(gen_frame + 0x1b)) = (byte)uVar9;
                                          uVar9 = F_00cebad0(param_1,1);
                                          if (uVar9 != 0) {
                                            uVar9 = F_00cebad0(param_1,5);
                                            (*(byte *)(gen_frame + 0x27)) = (byte)uVar9;
                                          }
                                          iVar14 = iVar20 + 1;
                                          ((byte *)(gen_frame + 0x720))[(int)(iVar20)] = (*(byte *)(gen_frame + 0x27)) * '\b' + (*(byte *)(gen_frame + 0x1b));
                                          iVar20 = iVar14;
                                        } while (iVar14 < (int)(uint)(byte)puVar23[4]);
                                      }
                                      uVar9 = F_00cefa40((uint)(byte)puVar23[4] << 4,param_1);
                                      puVar23[6] = uVar9;
                                      (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x0;
                                      if ((char)puVar23[4] != '\0') {
                                        do {
                                          (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)0x0;
                                          ((byte * PTR32 *)(gen_frame + 0x760))[0] = (byte *)(uint)((byte *)(gen_frame + 0x720))[(int)((int)(*(float * PTR32 *)(gen_frame + 0x30)))];
                                          do {
                                            if (((uint)((byte * PTR32 *)(gen_frame + 0x760))[0] & 1 << ((byte)(*(float * PTR32 *)(gen_frame + 0x34)) & 0x1f))
                                                == 0) {
                                              *((undefined2 *)GEN_TOP((puVar23[6] +
                                               (int)((*(float * PTR32 *)(gen_frame + 0x34)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x30))) * 2) * 2))) = 0xffff;
                                            }
                                            else {
                                              pfVar12 = (*(float * PTR32 *)(gen_frame + 0x34)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x30))) * 2;
                                              uVar9 = F_00cebad0(param_1,8);
                                              *(short *)((int)((int)(uintptr_t)pfVar12) * 2 + puVar23[6]) =
                                                   (short)uVar9;
                                              if ((int)param_1[0x11] <=
                                                  (int)*(short *)((int)((int)(uintptr_t)pfVar12) * 2 + puVar23[6]))
                                              goto LAB_00cf087c;
                                            }
                                            pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x34)) + 1);
                                            (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar12;
                                          } while ((int)pfVar12 < 8);
                                          uVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
                                          (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar9;
                                        } while ((int)uVar9 < (int)(uint)(byte)puVar23[4]);
                                      }
                                      pvVar11 = (undefined *)F_00cefa40(*((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12]
                                                                                      + (uint)*((byte *)GEN_TOP(((
                                                  int)puVar23 + 0x11))) * 4))) + 0x10))) * 4,param_1);
                                      puVar23[5] = (uint)pvVar11;
                                      if (pvVar11 == (undefined *)0x0) goto LAB_00cf08b0;
                                      F_00c48350(pvVar11,0,
                                              *((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                               (uint)*(byte *)((int)puVar23 + 0x11)
                                                               * 4))) + 0x10))) * 4);
                                      (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x0;
                                      if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                               (uint)*(byte *)((int)puVar23 + 0x11)
                                                               * 4))) + 0x10)))) {
                                        do {
                                          pfVar12 = (*(float * PTR32 *)(gen_frame + 0x30));
                                          pbVar21 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                                       (uint)*(byte *)((int)puVar23
                                                                                      + 0x11) * 4))) +
                                                              8)));
                                          ((byte * PTR32 *)(gen_frame + 0x760))[0] = pbVar21;
                                          uVar9 = F_00cefa40(pbVar21,param_1);
                                          *(uint *)(puVar23[5] + (int)((int)(uintptr_t)pfVar12) * 4) = uVar9;
                                          (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)(((byte * PTR32 *)(gen_frame + 0x760))[0] + -1);
                                          if (-1 < (int)(((byte * PTR32 *)(gen_frame + 0x760))[0] + -1)) {
                                            uVar9 = (uint)(byte)puVar23[4];
                                            do {
                                              *((char *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x34)) +
                                                       *(int *)(puVar23[5] + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x30))) * 4)))) =
                                                   (char)((int)((int)(uintptr_t)pfVar12) % (int)uVar9);
                                              uVar9 = (uint)(byte)puVar23[4];
                                              pfVar12 = (float *)((int)((int)(uintptr_t)pfVar12) / (int)uVar9);
                                              pfVar26 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x34)) + -1);
                                              (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar26;
                                            } while (-1 < (int)pfVar26);
                                          }
                                          uVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
                                          (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar9;
                                        } while ((int)uVar9 <
                                                 *((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                                  (uint)*(byte *)((int)puVar23 +
                                                                                 0x11) * 4))) + 0x10))))
                                        ;
                                      }
                                      (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 2);
                                      (*(float * PTR32 *)(gen_frame + 0x2c)) = (*(float * PTR32 *)(gen_frame + 0x2c)) + 7;
                                      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
                                    } while ((*(int *)(gen_frame + 0x10)) < (int)param_1[0x35]);
                                  }
                                  uVar9 = F_00cebad0(param_1,6);
                                  param_1[0x57] = uVar9 + 1;
                                  uVar9 = F_00cefa40((uVar9 + 1) * 0x28,param_1);
                                  param_1[0x58] = uVar9;
                                  (*(int *)(gen_frame + 0x10)) = 0;
                                  if (0 < (int)param_1[0x57]) {
                                    (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
                                    do {
                                      puVar24 = (ushort *)(param_1[0x58] + (int)(*(float * PTR32 *)(gen_frame + 0x28)));
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      if (uVar9 != 0) goto LAB_00cf087c;
                                      uVar9 = F_00cefa40(param_1[2] * 3,param_1);
                                      *(uint *)(puVar24 + 2) = uVar9;
                                      uVar9 = F_00cebad0(param_1,1);
                                      if (uVar9 == 0) {
                                        *(undefined1 *)(puVar24 + 4) = 1;
                                      }
                                      else {
                                        uVar9 = F_00cebad0(param_1,4);
                                        *(char *)(puVar24 + 4) = (char)uVar9;
                                      }
                                      if (bVar6 < (byte)puVar24[4]) {
                                        bVar6 = (byte)puVar24[4];
                                      }
                                      uVar9 = F_00cebad0(param_1,1);
                                      if (uVar9 == 0) {
                                        *puVar24 = 0;
                                      }
                                      else {
                                        uVar9 = F_00cebad0(param_1,8);
                                        uVar8 = (short)uVar9 + 1;
                                        *puVar24 = uVar8;
                                        (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)0x0;
                                        if (uVar8 != 0) {
                                          uVar9 = param_1[2];
                                          iVar20 = 0;
                                          do {
                                            iVar14 = 0x1f;
                                            if (uVar9 != 0) {
                                              for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
                                              }
                                            }
                                            if (uVar9 != 0) {
                                              iVar14 = iVar14 + 1;
                                            }
                                            uVar9 = F_00cebad0(param_1,iVar14 + -1);
                                            *((char *)GEN_TOP((iVar20 + *(int *)(puVar24 + 2)))) = (char)uVar9;
                                            iVar14 = 0x1f;
                                            bVar28 = param_1[2] != 0;
                                            if (bVar28) {
                                              for (; param_1[2] >> iVar14 == 0; iVar14 = iVar14 + -1
                                                  ) {
                                              }
                                            }
                                            if (bVar28) {
                                              iVar14 = iVar14 + 1;
                                            }
                                            uVar9 = F_00cebad0(param_1,iVar14 + -1);
                                            *((char *)GEN_TOP((iVar20 + 1 + *(int *)(puVar24 + 2)))) =
                                                 (char)uVar9;
                                            uVar9 = param_1[2];
                                            pbVar21 = ((byte *)GEN_TOP((iVar20 + *(int *)(puVar24 + 2))));
                                            if ((((int)uVar9 <= (int)(uint)*pbVar21) ||
                                                ((int)uVar9 <= (int)(uint)pbVar21[1])) ||
                                               (*pbVar21 == pbVar21[1])) goto LAB_00cf087c;
                                            pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x34)) + 1);
                                            iVar20 = iVar20 + 3;
                                            (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar12;
                                          } while ((int)pfVar12 < (int)(uint)*puVar24);
                                        }
                                      }
                                      uVar9 = F_00cebad0(param_1,2);
                                      if (uVar9 != 0) goto LAB_00cf087c;
                                      if ((byte)puVar24[4] < 2) {
                                        iVar20 = 0;
                                        if (0 < (int)param_1[2]) {
                                          iVar14 = 0;
                                          do {
                                            *((undefined1 *)GEN_TOP((iVar14 + 2 + *(int *)(puVar24 + 2)))) = 0;
                                            iVar20 = iVar20 + 1;
                                            iVar14 = iVar14 + 3;
                                          } while (iVar20 < (int)param_1[2]);
                                        }
                                      }
                                      else {
                                        (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar9;
                                        if (0 < (int)param_1[2]) {
                                          iVar20 = 0;
                                          do {
                                            uVar9 = F_00cebad0(param_1,4);
                                            *((char *)GEN_TOP((iVar20 + 2 + *(int *)(puVar24 + 2)))) =
                                                 (char)uVar9;
                                            if ((byte)puVar24[4] <=
                                                *((byte *)GEN_TOP((iVar20 + 2 + *(int *)(puVar24 + 2)))))
                                            goto LAB_00cf087c;
                                            uVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
                                            iVar20 = iVar20 + 3;
                                            (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar9;
                                          } while ((int)uVar9 < (int)param_1[2]);
                                        }
                                      }
                                      if ((char)puVar24[4] != '\0') {
                                        pbVar21 = (byte *)((int)puVar24 + 9);
                                        ((byte * PTR32 *)(gen_frame + 0x760))[0] = (byte *)(-9 - (int)puVar24);
                                        do {
                                          F_00cebad0(param_1,8);
                                          uVar9 = F_00cebad0(param_1,8);
                                          *pbVar21 = (byte)uVar9;
                                          uVar9 = F_00cebad0(param_1,8);
                                          pbVar21[0xf] = (byte)uVar9;
                                          if (((int)param_1[0x13] <= (int)(uint)*pbVar21) ||
                                             ((int)param_1[0x35] <= (int)(uVar9 & 0xff)))
                                          goto LAB_00cf087c;
                                          pbVar21 = pbVar21 + 1;
                                        } while ((int)(((byte * PTR32 *)(gen_frame + 0x760))[0] + (int)pbVar21) <
                                                 (int)(uint)(byte)puVar24[4]);
                                      }
                                      (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) + 10;
                                      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
                                    } while ((*(int *)(gen_frame + 0x10)) < (int)param_1[0x57]);
                                  }
                                  uVar9 = F_00cebad0(param_1,6);
                                  iVar20 = 0;
                                  param_1[0x59] = uVar9 + 1;
                                  if (0 < (int)(uVar9 + 1)) {
                                    psVar25 = (short *)((int)param_1 + 0x16a);
                                    do {
                                      uVar9 = F_00cebad0(param_1,1);
                                      *(char *)(psVar25 + -1) = (char)uVar9;
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      *psVar25 = (short)uVar9;
                                      uVar9 = F_00cebad0(param_1,0x10);
                                      psVar25[1] = (short)uVar9;
                                      uVar9 = F_00cebad0(param_1,8);
                                      *(char *)((int)psVar25 + -1) = (char)uVar9;
                                      if (((*psVar25 != 0) || (psVar25[1] != 0)) ||
                                         ((int)param_1[0x57] <= (int)(uVar9 & 0xff)))
                                      goto LAB_00cf087c;
                                      iVar20 = iVar20 + 1;
                                      psVar25 = psVar25 + 3;
                                    } while (iVar20 < (int)param_1[0x59]);
                                  }
                                  F_00ceba90(param_1);
                                  param_1[0xeb] = 0;
                                  uVar9 = F_00cefa40(param_1[2] *
                                                       (((param_1[0x10] & 0x3fffffff) * 2 + 0xf +
                                                         ((*(int *)(gen_frame + 0xc)) + param_1[0x10] * 2) * 2 &
                                                        0xfffffff0) + 0x180) + 0xf,param_1);
                                  param_1[0xba] = uVar9;
                                  iVar20 = 0;
                                  uVar9 = uVar9 + 0xf & 0xfffffff0;
                                  if (0 < (int)param_1[2]) {
                                    puVar23 = param_1 + 0xbb;
                                    do {
                                      *puVar23 = uVar9;
                                      iVar20 = iVar20 + 1;
                                      puVar23 = puVar23 + 1;
                                      uVar9 = uVar9 + 0x80 + param_1[0x10] * 4;
                                    } while (iVar20 < (int)param_1[2]);
                                  }
                                  iVar20 = 0;
                                  if (0 < (int)param_1[2]) {
                                    puVar23 = param_1 + 0xdb;
                                    do {
                                      *puVar23 = uVar9;
                                      iVar20 = iVar20 + 1;
                                      puVar23 = puVar23 + 1;
                                      uVar9 = uVar9 + 0x80 + (param_1[0x10] & 0x3fffffff) * 2;
                                    } while (iVar20 < (int)param_1[2]);
                                  }
                                  iVar20 = 0;
                                  if (0 < (int)param_1[2]) {
                                    puVar23 = param_1 + 0xec;
                                    do {
                                      *puVar23 = uVar9;
                                      iVar20 = iVar20 + 1;
                                      uVar9 = uVar9 + ((*(int *)(gen_frame + 0xc)) * 2 + 0xfU & 0xfffffff0) + 0x80;
                                      puVar23 = puVar23 + 1;
                                    } while (iVar20 < (int)param_1[2]);
                                  }
                                  uVar9 = F_00cefbf0(param_1,0,param_1[0xf]);
                                  if ((uVar9 != 0) &&
                                     (uVar9 = F_00cefbf0(param_1,1,param_1[0x10]), uVar9 != 0)) {
                                    *(undefined1 *)((int)param_1 + 0x535) = 1;
                                    F_00c47745((*(uint *)(gen_frame + 0x768)) ^ (uint)(uint)(gen_frame + 0x76c));
                                    return 1;
                                  }
                                  goto LAB_00cf088d;
                                }
                                bVar28 = param_1[0xd] == 0;
                                uVar9 = 3;
                              }
                              goto LAB_00cf0885;
                            }
                          }
LAB_00cf087c: ;
                          uVar9 = 0x14;
                        }
                      }
                      else {
                        uVar9 = 5;
                      }
                    }
                  }
                  else {
                    uVar9 = 0x22;
                  }
                }
              }
LAB_00cf0881: ;
              bVar28 = param_1[0xd] == 0;
            }
            else {
              bVar28 = param_1[0xd] == 0;
              uVar9 = 0x22;
            }
          }
          else {
            bVar28 = param_1[0xd] == 0;
            uVar9 = 0x22;
          }
        }
        else {
          bVar28 = param_1[0xd] == 0;
          uVar9 = 0x22;
        }
      }
      else {
        bVar28 = param_1[0xd] == 0;
        uVar9 = 0x22;
      }
    }
    else {
      bVar28 = param_1[0xd] == 0;
      uVar9 = 0x22;
    }
  }
  else {
LAB_00cefd76: ;
    bVar28 = param_1[0xd] == 0;
    uVar9 = 0x1e;
  }
LAB_00cf0885: ;
  param_1[0xe] = uVar9;
  if (bVar28) {
    param_1[0xe] = uVar9;
  }
LAB_00cf088d: ;
  F_00c47745((*(uint *)(gen_frame + 0x768)) ^ (uint)(uint)(gen_frame + 0x76c));
  return 0;
code_r0x00cf05af: ;
  ((byte * PTR32 *)(gen_frame + 0x760))[0] = pbVar21;
  (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)0xffffffff;
  uVar9 = F_00cebad0(param_1,5);
  iVar20 = 0;
  *pbVar21 = (byte)uVar9;
  if ((byte)uVar9 != 0) {
    do {
      uVar9 = F_00cebad0(param_1,4);
      pbVar21[iVar20 + 1] = (byte)uVar9;
      if ((int)(*(float * PTR32 *)(gen_frame + 0x2c)) < (int)(uVar9 & 0xff)) {
        (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(uVar9 & 0xff);
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < (int)(uint)*pbVar21);
  }
  iVar20 = 0;
  if (-1 < (int)(*(float * PTR32 *)(gen_frame + 0x2c))) {
    (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)(pbVar21 + 0x52);
    do {
      uVar9 = F_00cebad0(param_1,3);
      pbVar21[iVar20 + 0x21] = (char)uVar9 + 1;
      uVar9 = F_00cebad0(param_1,2);
      pbVar21[iVar20 + 0x31] = (byte)uVar9;
      if ((byte)uVar9 != 0) {
        uVar9 = F_00cebad0(param_1,8);
        pbVar21[iVar20 + 0x41] = (byte)uVar9;
        if ((int)param_1[0x11] <= (int)(uVar9 & 0xff)) goto LAB_00cf087c;
      }
      (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)0x0;
      if (0 < 1 << (pbVar21[iVar20 + 0x31] & 0x1f)) {
        (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x20));
        do {
          uVar9 = F_00cebad0(param_1,8);
          sVar7 = (short)uVar9 + -1;
          *(short *)(*(float * PTR32 *)(gen_frame + 0x28)) = sVar7;
          if ((int)param_1[0x11] <= (int)sVar7) goto LAB_00cf087c;
          (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 2);
          pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x34)) + 1);
          (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar12;
        } while ((int)pfVar12 < 1 << (pbVar21[iVar20 + 0x31] & 0x1f));
      }
      (*(float * PTR32 *)(gen_frame + 0x20)) = (*(float * PTR32 *)(gen_frame + 0x20)) + 4;
      iVar20 = iVar20 + 1;
    } while (iVar20 <= (int)(*(float * PTR32 *)(gen_frame + 0x2c)));
  }
  uVar9 = F_00cebad0(param_1,2);
  pbVar21[0xa1c] = (char)uVar9 + 1;
  uVar9 = F_00cebad0(param_1,4);
  pbVar21[0x152] = 0;
  pbVar21[0x153] = 0;
  pbVar21[0xa1d] = (byte)uVar9;
  *(short *)(pbVar21 + 0x154) = 1 << ((byte)uVar9 & 0x1f);
  pbVar21[0xa20] = 2;
  pbVar21[0xa21] = 0;
  pbVar21[0xa22] = 0;
  pbVar21[0xa23] = 0;
  (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x0;
  if (*pbVar21 != 0) {
    do {
      iVar20 = 0;
      (*(float * PTR32 *)(gen_frame + 0x1c)) = (float *)(uint)pbVar21[(int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1];
      if ((pbVar21 + 0x21)[(int)(uint)pbVar21[(int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1]] != 0) {
        do {
          uVar9 = F_00cebad0(param_1,(uint)pbVar21[0xa1d]);
          *((short *)GEN_TOP((pbVar21 + *(int *)(pbVar21 + 0xa20) * 2 + 0x152))) = (short)uVar9;
          *(int *)(pbVar21 + 0xa20) = *(int *)(pbVar21 + 0xa20) + 1;
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)(uint)pbVar21[(int)((int)(*(float * PTR32 *)(gen_frame + 0x1c)) + 0x21)]);
      }
      iVar20 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)iVar20;
    } while (iVar20 < (int)(uint)*pbVar21);
  }
  iVar20 = 0;
  if (0 < *(int *)(pbVar21 + 0xa20)) {
    pbVar17 = pbVar21 + 0x152;
    do {
      *(undefined2 *)(&(*(undefined4 *)(gen_frame + 0x338)) + iVar20) = *(undefined2 *)pbVar17;
      *(short *)((int)&(*(undefined4 *)(gen_frame + 0x338)) + iVar20 * 4 + 2) = (short)iVar20;
      iVar20 = iVar20 + 1;
      pbVar17 = pbVar17 + 2;
    } while (iVar20 < *(int *)(pbVar21 + 0xa20));
  }
  pfVar19 = *(float * PTR32 *)(pbVar21 + 0xa20);
  (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)&(*(undefined4 *)(gen_frame + 0x338));
  pfVar12 = (float *)&(*(undefined4 *)(gen_frame + 0x338));
  pfVar26 = &(*(float *)(gen_frame + 0x334)) + (int)pfVar19;
  pfVar22 = pfVar19;
  do {
    pfVar18 = (*(float * PTR32 *)(gen_frame + 0x34));
    (*(float * PTR32 *)(gen_frame + 0x34)) = (*(float * PTR32 *)(gen_frame + 0x34)) + -3;
    pfVar22 = ((float *)GEN_TOP((((uint)((int)(uintptr_t)pfVar22) >> 1) + ((uint)((int)(uintptr_t)pfVar22) >> 2))));
  } while (pfVar22 != (float *)0x0);
  pfVar18[-4] = 0.0;
  pbVar21 = ((byte * PTR32 *)(gen_frame + 0x760))[0];
  while (pfVar22 = (*(float * PTR32 *)(gen_frame + 0x34)), ((byte * PTR32 *)(gen_frame + 0x760))[0] = pbVar21, pfVar19 != (float *)0x0) {
    while ((float *)0x1 < pfVar19) {
      if (pfVar19 == (float *)0x2) {
        if (*(ushort *)pfVar26 < *(ushort *)pfVar12) {
          fVar16 = *pfVar12;
          *pfVar12 = *pfVar26;
          *pfVar26 = fVar16;
        }
        break;
      }
      pfVar18 = pfVar12 + ((uint)((int)(uintptr_t)pfVar19) >> 1);
      (*(float * PTR32 *)(gen_frame + 0x2c)) = pfVar18;
      uVar8 = *(ushort *)pfVar18;
      uVar1 = *(ushort *)pfVar26;
      if (uVar8 < *(ushort *)pfVar12) {
        if (uVar8 < uVar1) {
          if (*(ushort *)pfVar12 < uVar1) {
            pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar12)));
            (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar15;
            *pfVar12 = *pfVar18;
            *pfVar18 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
          }
          else {
            pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar26)));
            (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar15;
            *pfVar26 = *pfVar12;
            *pfVar12 = *pfVar18;
            *pfVar18 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
          }
        }
        else {
          fVar16 = *pfVar12;
          *pfVar12 = *pfVar26;
          *pfVar26 = fVar16;
        }
      }
      else if (uVar1 < uVar8) {
        if (*(ushort *)pfVar12 < uVar1) {
          pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar18)));
          (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar15;
          *pfVar18 = *pfVar26;
          *pfVar26 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
        }
        else {
          pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar26)));
          (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar15;
          *pfVar26 = *pfVar18;
          *pfVar18 = *pfVar12;
          *pfVar12 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
        }
      }
      if (pfVar19 < &REFG(undefined, 0x5)) {
        if (pfVar19 != (float *)0x3) {
          uVar8 = *(ushort *)(pfVar12 + 1);
          if (*(ushort *)pfVar18 < uVar8) {
            if (uVar8 < *(ushort *)pfVar26) {
              fVar16 = pfVar12[1];
              pfVar12[1] = *pfVar18;
              *pfVar18 = fVar16;
            }
            else {
              fVar16 = *pfVar26;
              *pfVar26 = pfVar12[1];
              pfVar12[1] = *pfVar18;
              *pfVar18 = fVar16;
            }
          }
          else if (uVar8 < *(ushort *)pfVar12) {
            fVar16 = *pfVar12;
            *pfVar12 = pfVar12[1];
            pfVar12[1] = fVar16;
          }
        }
        break;
      }
      if (pfVar22 == (float *)&(*(undefined4 *)(gen_frame + 0x338))) {
        pfVar18 = pfVar12 + ((uint)((int)(uintptr_t)pfVar19) >> 1);
        uVar9 = (uint)((int)(uintptr_t)pfVar19) >> 1;
LAB_00cf0b35: ;
        uVar10 = uVar9 - 1;
        pfVar18 = pfVar18 + -1;
        (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar18;
        (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)(uVar9 + uVar10);
LAB_00cf0b60: ;
        pfVar15 = pfVar12 + (int)(*(float * PTR32 *)(gen_frame + 0x20));
        (*(float * PTR32 *)(gen_frame + 0x30)) = pfVar15;
        pfVar27 = pfVar15 + 1;
        (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar27;
        uVar8 = *(ushort *)pfVar15;
        (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(uint)uVar8;
        if ((pfVar27 <= pfVar26) && (uVar8 < *(ushort *)pfVar27)) {
          (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x20)) + 1);
          (*(float * PTR32 *)(gen_frame + 0x30)) = pfVar27;
          uVar8 = *(ushort *)pfVar27;
        }
        if (*(ushort *)(*(float * PTR32 *)(gen_frame + 0x28)) < uVar8) goto code_r0x00cf0bc0;
        goto LAB_00cf0bfe;
      }
      uVar8 = *(ushort *)pfVar18;
      (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(uint)uVar8;
      fVar16 = *pfVar18;
      (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar16)));
      *pfVar18 = *pfVar12;
      *pfVar12 = fVar16;
      (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar26;
      pfVar19 = pfVar26;
      pfVar18 = pfVar12;
      while( true ) {
        do {
          pfVar19 = pfVar19 + -1;
        } while (uVar8 < *(ushort *)pfVar19);
        pfVar15 = pfVar18;
        if (pfVar19 <= pfVar18) break;
        do {
          pfVar18 = pfVar15;
          pfVar15 = pfVar18 + 1;
        } while (*(ushort *)pfVar15 < uVar8);
        if (pfVar19 <= pfVar15) break;
        fVar16 = *pfVar15;
        (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar16)));
        *pfVar15 = *pfVar19;
        *pfVar19 = fVar16;
        pfVar18 = pfVar15;
      }
      uVar8 = *(ushort *)pfVar12;
      (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(uint)uVar8;
      fVar16 = *pfVar12;
      *pfVar12 = *pfVar18;
      *pfVar18 = fVar16;
      (*(float * PTR32 *)(gen_frame + 0x20)) = pfVar18;
      pfVar15 = pfVar18;
      do {
        pfVar15 = pfVar15 + 1;
        if (pfVar26 <= pfVar15) break;
      } while (*(ushort *)pfVar15 <= uVar8);
      pfVar18 = pfVar18 + -1;
      (*(float * PTR32 *)(gen_frame + 0x20)) = pfVar15;
      (*(float * PTR32 *)(gen_frame + 0x30)) = pfVar18;
      if (pfVar12 < pfVar18) {
        do {
          if (*(ushort *)pfVar18 < uVar8) break;
          pfVar18 = pfVar18 + -1;
        } while (pfVar12 < pfVar18);
        (*(float * PTR32 *)(gen_frame + 0x30)) = pfVar18;
      }
      pfVar27 = ((float *)GEN_TOP((((int)pfVar18 - (int)((int)(uintptr_t)pfVar12) >> 2) + 1)));
      pfVar19 = ((float *)GEN_TOP((((int)pfVar26 - (int)((int)(uintptr_t)pfVar15) >> 2) + 1)));
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar27;
      if (pfVar19 < pfVar27) {
        pfVar22[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar26)));
        pfVar22[2] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
        *pfVar22 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
        pfVar15 = pfVar12;
        pfVar19 = pfVar27;
        pfVar26 = pfVar18;
      }
      else {
        *pfVar22 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12)));
        pfVar22[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18)));
        pfVar22[2] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar27)));
      }
      pfVar22 = pfVar22 + 3;
      (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar22;
      pfVar12 = pfVar15;
    }
LAB_00cf0c92: ;
    pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar22[-1])));
    pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar22[-3])));
    pfVar26 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar22[-2])));
    (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar22 + -3;
    pbVar21 = ((byte * PTR32 *)(gen_frame + 0x760))[0];
  }
  iVar20 = 0;
  if (0 < *(int *)(pbVar21 + 0xa20)) {
    do {
      pbVar21[iVar20 + 0x346] = *(byte *)((int)&(*(undefined4 *)(gen_frame + 0x338)) + iVar20 * 4 + 2);
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(pbVar21 + 0xa20));
  }
  (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)0x2;
  if (2 < *(int *)(pbVar21 + 0xa20)) {
    (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(pbVar21 + 0x63c);
    (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)(pbVar21 + 0x445);
    do {
      (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)0x0;
      (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
      F_00ceb4d0(pbVar21 + 0x152,(*(float * PTR32 *)(gen_frame + 0x30)),&(*(float * PTR32 *)(gen_frame + 0x14)),&(*(float * PTR32 *)(gen_frame + 0x28)));
      pfVar12 = (*(float * PTR32 *)(gen_frame + 0x20));
      *(char *)(*(float * PTR32 *)(gen_frame + 0x20)) = (char)(*(float * PTR32 *)(gen_frame + 0x28));
      *(char *)((int)(*(float * PTR32 *)(gen_frame + 0x20)) + -1) = (char)(*(float * PTR32 *)(gen_frame + 0x14));
      fVar16 = gen_bits2f(F_00ceb540((uint)*(ushort *)(pbVar21 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x28))) * 2 + 0x152) -
                                       (uint)*(ushort *)(pbVar21 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x14))) * 2 + 0x152)));
      *(*(float * PTR32 *)(gen_frame + 0x2c)) = fVar16;
      uVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x30)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x30)) = (float *)uVar9;
      (*(float * PTR32 *)(gen_frame + 0x2c)) = (*(float * PTR32 *)(gen_frame + 0x2c)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)((int)pfVar12 + 2);
    } while ((int)uVar9 < *(int *)(pbVar21 + 0xa20));
  }
  if ((*(int *)(gen_frame + 0xc)) < *(int *)(pbVar21 + 0xa20)) {
    (*(int *)(gen_frame + 0xc)) = *(int *)(pbVar21 + 0xa20);
  }
  (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
  if ((int)param_1[0x13] <= (*(int *)(gen_frame + 0x10))) goto LAB_00cf0dc5;
  goto LAB_00cf0580;
code_r0x00cf0bc0: ;
  pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(*(*(float * PTR32 *)(gen_frame + 0x28)))));
  (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar15;
  *(*(float * PTR32 *)(gen_frame + 0x28)) = *(*(float * PTR32 *)(gen_frame + 0x30));
  *(*(float * PTR32 *)(gen_frame + 0x30)) = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
  pfVar15 = (float *)((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x20))) * 2 + 1);
  (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x30));
  (*(float * PTR32 *)(gen_frame + 0x20)) = pfVar15;
  if (pfVar19 <= pfVar15) {
LAB_00cf0bfe: ;
    uVar9 = uVar10;
    if (uVar10 == 0) {
      fVar16 = *pfVar12;
      *pfVar12 = *pfVar26;
      *pfVar26 = fVar16;
      pfVar19 = (float *)((int)pfVar19 + -1);
      pfVar26 = pfVar26 + -1;
      (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar12;
      (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)0x1;
      if (pfVar19 < (float *)0x2) goto LAB_00cf0c92;
      goto LAB_00cf0b60;
    }
    goto LAB_00cf0b35;
  }
  goto LAB_00cf0b60;
LAB_00cf08b0: ;
  uVar9 = 3;
  goto LAB_00cf0881;
}

/* ref: FUN_00cf1530 */
unsigned int F_00cf1530(unsigned int gen_a0)
{
  GEN_ENTER(0xcf1530u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (0 < *(int *)(in_esi + 0xd4)) {
    local_8 = 0;
    do {
      iVar2 = *(int *)(in_esi + 0x158) + local_8;
      if (*(int *)(iVar2 + 0x14) == 0) {
LAB_00cf15a9: ;
        if (*(int *)(in_esi + 0x24) == 0) {
          ((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(iVar2 + 0x18));
        }
      }
      else {
        iVar1 = 0;
        if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_esi + 0x48) + (uint)*(byte *)(iVar2 + 0x11) * 4))) +
                        0x10)))) {
          do {
            if (*(int *)(in_esi + 0x24) == 0) {
              ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x14) + iVar1 * 4))));
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_esi + 0x48) +
                                            (uint)*(byte *)(iVar2 + 0x11) * 4))) + 0x10))));
        }
        if (*(int *)(in_esi + 0x24) == 0) {
          ((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(iVar2 + 0x14));
          goto LAB_00cf15a9;
        }
      }
      local_8 = local_8 + 0x1c;
      local_c = local_c + 1;
    } while (local_c < *(int *)(in_esi + 0xd4));
  }
  if (*(int *)(in_esi + 0x48) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(in_esi + 0x44)) {
      do {
        iVar1 = *((int *)GEN_TOP((*(int *)(in_esi + 0x48) + iVar2 * 4)));
        if ((*(int *)(in_esi + 0x24) == 0) &&
           (((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(iVar1 + 4)), *(int *)(in_esi + 0x24) == 0)) {
          ((code *)REFG(gen_code32, 0x15d92fc))(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_esi + 0x44));
    }
    if (*(int *)(in_esi + 0x24) != 0) goto LAB_00cf167a;
    ((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x48));
  }
  if ((((*(int *)(in_esi + 0x24) == 0) &&
       (((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x420)), *(int *)(in_esi + 0x24) == 0)) &&
      (((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x424)), *(int *)(in_esi + 0x24) == 0)) &&
     (((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0xd0)), *(int *)(in_esi + 0x24) == 0)) {
    ((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x158));
  }
LAB_00cf167a: ;
  iVar2 = 0;
  if (0 < *(int *)(in_esi + 0x15c)) {
    iVar1 = 0;
    do {
      if (*(int *)(in_esi + 0x24) == 0) {
        ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((*(int *)(in_esi + 0x160) + 4 + iVar1))));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < *(int *)(in_esi + 0x15c));
  }
  if ((*(int *)(in_esi + 0x24) == 0) &&
     (((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x160)), *(int *)(in_esi + 0x24) == 0)) {
    ((code *)REFG(gen_code32, 0x15d92fc))(*(undefined4 *)(in_esi + 0x2e8));
  }
  puVar3 = (undefined4 *)(in_esi + 0x3f8);
  iVar2 = 2;
  do {
    if (*(int *)(in_esi + 0x24) == 0) {
      ((code *)REFG(gen_code32, 0x15d92fc))(*puVar3);
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00cf1710 */
unsigned int F_00cf1710(unsigned int gen_a0)
{
  GEN_ENTER(0xcf1710u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    F_00cf1530(param_1);
  }
  return 0;
}

/* ref: FUN_00cf1770 */
uint F_00cf1770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcf1770u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int in_edi;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  in_edi = (*(int *)&gen_args[0]);
  if ((*(int *)((*(int *)&gen_args[0]) + 0x14) == *(int *)((*(int *)&gen_args[0]) + 0x10)) &&
     (uVar2 = F_00cefd20((*(int *)&gen_args[0])), uVar2 == 0)) {
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    return 0;
  }
  if (-1 < *(int *)(in_edi + 0x560)) {
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    uVar2 = F_00cef3f0(in_edi,(*(int *)&gen_args[1]),(*(int *)&gen_args[2]));
    return uVar2;
  }
  *(int *)(in_edi + 0x10) = (*(int *)&gen_args[1]);
  *(int *)(in_edi + 0x18) = (*(int *)&gen_args[1]) + (*(int *)&gen_args[2]);
  *(undefined4 *)(in_edi + 0x38) = 0;
  uVar2 = F_00cef1d0(in_edi,0);
  if (uVar2 == 0) {
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    return 0;
  }
  uVar2 = F_00cee500(&(*(int *)(gen_frame + 0x8)),&(*(int *)&gen_args[0]),in_edi,&(*(undefined4 *)(gen_frame + 0x4)));
  if (uVar2 != 0) {
    uVar2 = F_00cef040(in_edi,(*(undefined4 *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0x8)),(*(int *)&gen_args[0]));
    iVar4 = 0;
    if (0 < *(int *)(in_edi + 8)) {
      piVar3 = (int *)(in_edi + 0x32c);
      do {
        *piVar3 = piVar3[-0x10] + (*(int *)(gen_frame + 0x8)) * 4;
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < *(int *)(in_edi + 8));
    }
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)&gen_args[3]) = *(undefined4 *)(in_edi + 8);
    }
    *(*(uint * PTR32 *)&gen_args[5]) = uVar2;
    *(*(int * PTR32 *)&gen_args[4]) = in_edi + 0x32c;
    return *(int *)(in_edi + 0x10) - (*(int *)&gen_args[1]);
  }
  iVar4 = *(int *)(in_edi + 0x38);
  if (iVar4 != 0x23) {
    if ((iVar4 == 0x20) && (*(int *)(in_edi + 0x3ac) == 0)) {
      *(undefined4 *)(in_edi + 0x38) = 0;
      uVar2 = F_00ceba40(in_edi);
      while ((uVar2 != 0xffffffff && (*(int *)(in_edi + 0x34) == 0))) {
        uVar2 = F_00ceba40(in_edi);
      }
      *(*(uint * PTR32 *)&gen_args[5]) = 0;
      return *(int *)(in_edi + 0x10) - (*(int *)&gen_args[1]);
    }
    F_00cef3b0(in_edi);
    *(int *)(in_edi + 0x38) = iVar4;
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    return 1;
  }
  *(undefined4 *)(in_edi + 0x38) = 0;
  do {
    if (*(char *)(in_edi + 0x534) == '\0') {
      if (*(int *)(in_edi + 0x53c) == 0) {
        uVar2 = F_00ceb960(in_edi);
        if (uVar2 != 0) goto LAB_00cf1836;
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
LAB_00cf1836: ;
      *(char *)(in_edi + 0x534) = *(char *)(in_edi + 0x534) + -1;
      bVar1 = **(byte * PTR32 *)(in_edi + 0x10);
      *(byte * PTR32 *)(in_edi + 0x10) = *(byte * PTR32 *)(in_edi + 0x10) + 1;
      uVar2 = (uint)bVar1;
    }
    *(undefined4 *)(in_edi + 0x548) = 0;
    *(undefined4 *)(in_edi + 0x544) = 0;
    if ((uVar2 == 0xffffffff) || (*(int *)(in_edi + 0x34) != 0)) {
      *(*(uint * PTR32 *)&gen_args[5]) = 0;
      return *(int *)(in_edi + 0x10) - (*(int *)&gen_args[1]);
    }
  } while( true );
}

/* ref: FUN_00cf1940 */
uint F_00cf1940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf1940u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x5d0];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  byte * pbVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x5c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5cc);
  F_00c48350(((byte *)(gen_frame + 0xc)),0,0x5bc);
  (*(int *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  ((byte *)(gen_frame + 0xc))[0x1c] = 0;
  ((byte *)(gen_frame + 0xc))[0x1d] = 0;
  ((byte *)(gen_frame + 0xc))[0x1e] = 0;
  ((byte *)(gen_frame + 0xc))[0x1f] = 0;
  (*(undefined4 *)(gen_frame + 0x56c)) = 0xffffffff;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) = param_2 + param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) = param_1;
  ((byte *)(gen_frame + 0xc))[0x20] = 1;
  uVar1 = F_00cefd20(((byte *)(gen_frame + 0xc)));
  if (uVar1 == 0) {
    if ((*(int *)(gen_frame + 0x40)) != 0) {
      *param_4 = 1;
      F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc));
      return 0;
    }
    *param_4 = (*(undefined4 *)(gen_frame + 0x44));
    F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc));
    return 0;
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)) == 0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 48)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 48)) + 0x5bc;
    puVar2 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x5bc)));
  }
  else {
    if ((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)) < (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) + 0x5bc) goto LAB_00cf1a87;
    puVar2 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)))));
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) + 0x5bc;
  }
  if (puVar2 != (undefined4 *)0x0) {
    pbVar4 = ((byte *)(gen_frame + 0xc));
    puVar5 = puVar2;
    for (iVar3 = 0x16f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *(undefined4 *)pbVar4;
      pbVar4 = pbVar4 + 4;
      puVar5 = puVar5 + 1;
    }
    *param_3 = puVar2[4] - param_1;
    *param_4 = 0;
    F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc));
    return (uint)puVar2;
  }
LAB_00cf1a87: ;
  F_00cf1530(((byte *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc));
  return 0;
}

/* ref: FUN_00cf1ab0 */
uint F_00cf1ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf1ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x5c0];
  undefined4 * puVar1;
  int iVar2;
  byte * pbVar3;
  undefined4 * puVar4;
  
  F_00c48350(((byte *)(gen_frame + 0x0)),0,0x5bc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  (*(undefined4 *)(gen_frame + 0x560)) = 0xffffffff;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) = param_1 + param_2;
  ((byte *)(gen_frame + 0x0))[0x20] = 1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) = param_3;
  ((byte *)(gen_frame + 0x0))[0x2c] = 0;
  ((byte *)(gen_frame + 0x0))[0x2d] = 0;
  ((byte *)(gen_frame + 0x0))[0x2e] = 0;
  ((byte *)(gen_frame + 0x0))[0x2f] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = param_4;
  if (param_3 == (undefined4 *)0x0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) + 0x5bc;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x5bc)));
  }
  else {
    if (param_4 < 0x5bc) {
      return 0;
    }
    ((byte *)(gen_frame + 0x0))[0x2c] = 0xbc;
    ((byte *)(gen_frame + 0x0))[0x2d] = 5;
    ((byte *)(gen_frame + 0x0))[0x2e] = 0;
    ((byte *)(gen_frame + 0x0))[0x2f] = 0;
    puVar1 = param_3;
  }
  if (puVar1 != (undefined4 *)0x0) {
    pbVar3 = ((byte *)(gen_frame + 0x0));
    puVar4 = puVar1;
    for (iVar2 = 0x16f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      puVar4 = puVar4 + 1;
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00cf1b70 */
uint F_00cf1b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf1b70u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x11320];
  char * pcVar1;
  byte * pbVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  short * psVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  float in_XMM2_Da = 0;
  
  (*(uint *)(gen_frame + 0x11318)) = 0xcf1b7d;
  (*(uint *)(gen_frame + 0x11318)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  pcVar1 = (char *)param_2[4];
  cVar4 = *pcVar1;
  (*(int *)(gen_frame + 0x10018)) = 0;
  (*(uint *)(gen_frame + 0x10008)) = 0;
  (*(int *)(gen_frame + 0x1000c)) = 0;
  param_2[4] = (uint)(pcVar1 + 1);
  if (cVar4 == 'O') {
    cVar4 = pcVar1[1];
    param_2[4] = (uint)(pcVar1 + 2);
    if (cVar4 != 'g') goto LAB_00cf1bdd;
    cVar4 = pcVar1[2];
    param_2[4] = (uint)(pcVar1 + 3);
    if ((cVar4 != 'g') || (cVar4 = pcVar1[3], param_2[4] = (uint)(pcVar1 + 4), cVar4 != 'S'))
    goto LAB_00cf1bdd;
    uVar6 = F_00ceb650(param_2);
    if (uVar6 == 0) goto LAB_00cf1c07;
    bVar11 = *(byte *)((int)param_2 + 0x533);
    if (((((bVar11 & 2) != 0) && ((bVar11 & 4) == 0)) && ((bVar11 & 1) == 0)) &&
       (((param_2[0x10c] == 1 && ((char)param_2[0x10d] == '\x1e')) &&
        (cVar4 = *(char *)param_2[4], param_2[4] = (uint)((char *)param_2[4] + 1), cVar4 == '\x01'))
       )) {
      uVar6 = F_00ceb5c0(((byte * PTR32 *)(gen_frame + 0x11310)),param_2,6);
      if (uVar6 == 0) {
        bVar15 = param_2[0xd] == 0;
        uVar6 = 10;
      }
      else {
        uVar6 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x11310)));
        if (uVar6 == 0) {
          bVar15 = param_2[0xd] == 0;
          uVar6 = 0x22;
        }
        else {
          uVar6 = F_00ceb570(param_2);
          if (uVar6 == 0) {
            bVar11 = *(byte *)param_2[4];
            param_2[4] = (uint)((byte *)param_2[4] + 1);
            uVar6 = (uint)bVar11;
            param_2[2] = uVar6;
            if (uVar6 == 0) {
              bVar15 = param_2[0xd] == 0;
              uVar6 = 0x22;
            }
            else if (uVar6 < 0x11) {
              uVar6 = F_00ceb570(param_2);
              *param_2 = uVar6;
              if (uVar6 == 0) {
                bVar15 = param_2[0xd] == 0;
                uVar6 = 0x22;
              }
              else {
                F_00ceb570(param_2);
                uVar6 = F_00ceb570(param_2);
                param_2[1] = uVar6;
                F_00ceb570(param_2);
                pbVar2 = (byte *)param_2[4];
                bVar11 = *pbVar2 >> 4;
                uVar6 = *pbVar2 & 0xf;
                param_2[4] = (uint)(pbVar2 + 1);
                param_2[0xf] = 1 << (sbyte)uVar6;
                param_2[0x10] = 1 << bVar11;
                if (((uVar6 - 6 < 8) && (bVar11 - 6 < 8)) && (uVar6 <= bVar11)) {
                  bVar11 = pbVar2[1];
                  param_2[4] = (uint)(pbVar2 + 2);
                  if ((bVar11 & 1) != 0) {
                    uVar6 = F_00ceb7e0(param_2);
                    if ((uVar6 == 0) || (uVar6 = F_00ceb830(param_2), uVar6 == 0))
                    goto LAB_00cf2ae2;
                    do {
                      uVar6 = F_00ceb960(param_2);
                      param_2[4] = param_2[4] + uVar6;
                      if (param_2[6] <= param_2[4]) {
                        param_2[0xd] = 1;
                      }
                      *(undefined1 *)(param_2 + 0x14d) = 0;
                    } while (uVar6 != 0);
                    uVar6 = F_00ceb830(param_2);
                    if (uVar6 == 0) goto LAB_00cf2ae2;
                    uVar6 = F_00cef1d0(param_2,1);
                    if (uVar6 == 0) {
                      if (param_2[0xe] == 0x15) {
                        param_2[0xe] = 0x14;
                        F_00c47745((*(uint *)(gen_frame + 0x11318)) ^ (uint)(uint)(gen_frame + 0x0));
                        return 0;
                      }
                      goto LAB_00cf2ae2;
                    }
                    uVar6 = F_00ceba40(param_2);
                    if (uVar6 == 5) {
                      iVar14 = 0;
                      do {
                        uVar6 = F_00ceba40(param_2);
                        *(char *)((int)((byte * PTR32 *)(gen_frame + 0x11310)) + iVar14) = (char)uVar6;
                        iVar14 = iVar14 + 1;
                      } while (iVar14 < 6);
                      uVar6 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x11310)));
                      if (uVar6 != 0) {
                        uVar6 = F_00cebad0(param_2,8);
                        uVar6 = uVar6 + 1;
                        (*(int *)(gen_frame + 0x10038)) = uVar6 * 4;
                        param_2[0x11] = uVar6;
                        (*(int *)(gen_frame + 0x10034)) = 0;
                        if (0 < (int)uVar6) {
                          do {
                            uVar6 = F_00cebad0(param_2,8);
                            if ((((char)uVar6 != 'B') ||
                                (uVar6 = F_00cebad0(param_2,8), (char)uVar6 != 'C')) ||
                               (uVar6 = F_00cebad0(param_2,8), (char)uVar6 != 'V'))
                            goto LAB_00cf2ad1;
                            uVar6 = F_00cebad0(param_2,8);
                            uVar7 = F_00cebad0(param_2,8);
                            uVar6 = uVar7 * 0x100 + (uVar6 & 0xff);
                            uVar7 = F_00cebad0(param_2,8);
                            uVar8 = F_00cebad0(param_2,8);
                            uVar9 = F_00cebad0(param_2,8);
                            uVar7 = (uVar9 * 0x100 + (uVar8 & 0xff)) * 0x100 + (uVar7 & 0xff);
                            uVar8 = F_00cebad0(param_2,1);
                            if (uVar8 == 0) {
                              (*(uint *)(gen_frame + 0x10030)) = F_00cebad0(param_2,1);
                            }
                            else {
                              (*(uint *)(gen_frame + 0x10030)) = 0;
                            }
                            (*(int *)(gen_frame + 0x10018)) = (*(int *)(gen_frame + 0x10018)) + (uVar7 + 3 & 0xfffffffc);
                            ((uint *)(gen_frame + 0x10e90))[(int)((*(int *)(gen_frame + 0x10034)))] = uVar7;
                            ((uint *)(gen_frame + 0x10a90))[(int)((*(int *)(gen_frame + 0x10034)))] = uVar6;
                            (*(int *)(gen_frame + 0x1002c)) = 0;
                            F_00c48350(((int *)(gen_frame + 0x11290)),0,0x80);
                            bVar15 = false;
                            (*(int *)(gen_frame + 0x1003c)) = 0;
                            if (uVar8 == 0) {
                              if (0 < (int)uVar7) {
                                do {
                                  if (((*(uint *)(gen_frame + 0x10030)) == 0) ||
                                     (uVar8 = F_00cebad0(param_2,1), uVar8 != 0)) {
                                    uVar9 = F_00cebad0(param_2,5);
                                    uVar9 = uVar9 + 1;
                                    uVar8 = uVar9;
                                    if (bVar15) {
                                      for (; (0 < (int)uVar8 && (((int *)(gen_frame + 0x11290))[(int)(uVar8)] == 0));
                                          uVar8 = uVar8 - 1) {
                                      }
                                      if (uVar8 == 0) goto LAB_00cf2ad1;
                                      ((byte * PTR32 *)(gen_frame + 0x11310))[0] = (byte *)((int *)(gen_frame + 0x11290))[(int)(uVar8)];
                                      ((int *)(gen_frame + 0x11290))[(int)(uVar8)] = 0;
                                      if ((int)uVar8 < (int)uVar9) {
                                        iVar14 = 0x20 - uVar9;
                                        do {
                                          if ((8 < (int)uVar9) && ((uVar9 & 1) != 0)) {
                                            (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 4;
                                          }
                                          bVar11 = (byte)iVar14;
                                          uVar10 = uVar9 - 1;
                                          iVar14 = iVar14 + 1;
                                          ((int *)(gen_frame + 0x11290))[(int)(uVar9)] =
                                               (int)(((byte * PTR32 *)(gen_frame + 0x11310))[0] + (1 << (bVar11 & 0x1f)));
                                          uVar9 = uVar10;
                                        } while ((int)uVar8 < (int)uVar10);
                                      }
                                    }
                                    else {
                                      uVar8 = 1;
                                      bVar15 = true;
                                      (*(int *)(gen_frame + 0x1002c)) = 0x100;
                                      if (0 < (int)uVar9) {
                                        bVar11 = 0x1f;
                                        do {
                                          ((int *)(gen_frame + 0x11290))[(int)(uVar8)] = 1 << (bVar11 & 0x1f);
                                          if ((8 < (int)uVar8) && ((uVar8 & 1) != 0)) {
                                            (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 4;
                                          }
                                          uVar8 = uVar8 + 1;
                                          bVar11 = bVar11 - 1;
                                        } while ((int)uVar8 <= (int)uVar9);
                                      }
                                    }
                                  }
                                  (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                                } while ((*(int *)(gen_frame + 0x1003c)) < (int)uVar7);
                              }
                            }
                            else {
                              uVar8 = F_00cebad0(param_2,5);
                              uVar8 = uVar8 + 1;
                              if (0 < (int)uVar7) {
                                (*(short * PTR32 *)(gen_frame + 0x10028)) = (short *)(0x20 - uVar8);
                                do {
                                  uVar9 = uVar7 - (*(int *)(gen_frame + 0x1003c));
                                  iVar14 = 0x1f;
                                  if (uVar9 != 0) {
                                    for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
                                    }
                                  }
                                  if (uVar9 != 0) {
                                    iVar14 = iVar14 + 1;
                                  }
                                  uVar9 = F_00cebad0(param_2,iVar14);
                                  if ((int)uVar7 < (int)(uVar9 + (*(int *)(gen_frame + 0x1003c)))) goto LAB_00cf2ad1;
                                  if (uVar9 == 0xff) {
                                    (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 0xff;
                                  }
                                  else {
                                    if (!bVar15) {
                                      uVar10 = 1;
                                      bVar15 = true;
                                      (*(int *)(gen_frame + 0x1002c)) = 0x100;
                                      if (0 < (int)uVar8) {
                                        bVar11 = 0x1f;
                                        do {
                                          ((int *)(gen_frame + 0x11290))[(int)(uVar10)] = 1 << (bVar11 & 0x1f);
                                          if ((8 < (int)uVar10) && ((uVar10 & 1) != 0)) {
                                            (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 4;
                                          }
                                          uVar10 = uVar10 + 1;
                                          bVar11 = bVar11 - 1;
                                        } while ((int)uVar10 <= (int)uVar8);
                                      }
                                      (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                                      uVar9 = uVar9 - 1;
                                    }
                                    (*(int *)(gen_frame + 0x1001c)) = 0;
                                    if (0 < (int)uVar9) {
                                      do {
                                        (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                                        for (uVar10 = uVar8;
                                            (0 < (int)uVar10 && (((int *)(gen_frame + 0x11290))[(int)(uVar10)] == 0));
                                            uVar10 = uVar10 - 1) {
                                        }
                                        if (uVar10 == 0) goto LAB_00cf2ad1;
                                        ((byte * PTR32 *)(gen_frame + 0x11310))[0] = (byte *)((int *)(gen_frame + 0x11290))[(int)(uVar10)];
                                        ((int *)(gen_frame + 0x11290))[(int)(uVar10)] = 0;
                                        uVar3 = uVar8;
                                        psVar12 = (*(short * PTR32 *)(gen_frame + 0x10028));
                                        if (uVar8 != uVar10) {
                                          for (; (int)uVar10 < (int)uVar3; uVar3 = uVar3 - 1) {
                                            if ((8 < (int)uVar3) && ((uVar3 & 1) != 0)) {
                                              (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 4;
                                            }
                                            bVar11 = (byte)psVar12;
                                            psVar12 = (short *)((int)psVar12 + 1);
                                            ((int *)(gen_frame + 0x11290))[(int)(uVar3)] =
                                                 (int)(((byte * PTR32 *)(gen_frame + 0x11310))[0] + (1 << (bVar11 & 0x1f)));
                                          }
                                        }
                                        (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + 1;
                                      } while ((*(int *)(gen_frame + 0x1001c)) < (int)uVar9);
                                    }
                                  }
                                  (*(short * PTR32 *)(gen_frame + 0x10028)) = (short *)((int)(*(short * PTR32 *)(gen_frame + 0x10028)) + -1);
                                  uVar8 = uVar8 + 1;
                                } while ((*(int *)(gen_frame + 0x1003c)) < (int)uVar7);
                              }
                            }
                            uVar8 = F_00cebad0(param_2,4);
                            cVar4 = (char)uVar8;
                            if ('\x02' < cVar4) goto LAB_00cf2ad1;
                            if ('\0' < cVar4) {
                              F_00cebad0(param_2,0x20);
                              F_00cebad0(param_2,0x20);
                              uVar8 = F_00cebad0(param_2,4);
                              F_00cebad0(param_2,1);
                              if (cVar4 == '\x01') {
                                uVar9 = F_00cefae0(in_XMM2_Da,uVar7,uVar6);
                              }
                              else {
                                uVar9 = uVar7 * uVar6;
                              }
                              (*(int *)(gen_frame + 0x10018)) = (*(int *)(gen_frame + 0x10018)) + (uVar9 * 2 + 3 & 0xfffffffc);
                              (*(int *)(gen_frame + 0x1003c)) = 0;
                              if (0 < (int)uVar9) {
                                do {
                                  uVar10 = F_00cebad0(param_2,uVar8 + 1);
                                  if (uVar10 == 0xffffffff) goto LAB_00cf2ad1;
                                  (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                                } while ((*(int *)(gen_frame + 0x1003c)) < (int)uVar9);
                              }
                              if (cVar4 == '\x01') {
                                (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + uVar7 * uVar6 * 4;
                              }
                              else {
                                (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + uVar9 * 4;
                              }
                            }
                            (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + (*(int *)(gen_frame + 0x1002c)) * 4 + 0x2c;
                            (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                          } while ((*(int *)(gen_frame + 0x10034)) < (int)param_2[0x11]);
                        }
                        uVar6 = F_00cebad0(param_2,6);
                        uVar6 = (uint)(byte)((char)uVar6 + 1);
                        if (uVar6 != 0) {
                          iVar14 = 0;
                          do {
                            uVar7 = F_00cebad0(param_2,0x10);
                            if (uVar7 != 0) goto LAB_00cf2ad1;
                            iVar14 = iVar14 + 1;
                          } while (iVar14 < (int)uVar6);
                        }
                        uVar6 = F_00cebad0(param_2,6);
                        uVar6 = uVar6 + 1;
                        param_2[0x13] = uVar6;
                        (*(int *)(gen_frame + 0x10034)) = 0;
                        if (0 < (int)uVar6) {
                          do {
                            uVar7 = F_00cebad0(param_2,0x10);
                            if (1 < uVar7) goto LAB_00cf2ad1;
                            if (uVar7 == 0) {
                              uVar6 = 4;
                              goto LAB_00cf2ad6;
                            }
                            uVar8 = F_00cebad0(param_2,5);
                            uVar7 = 0xffffffff;
                            iVar14 = 0;
                            (*(uint *)(gen_frame + 0x10030)) = 0xffffffff;
                            if ((char)uVar8 != '\0') {
                              do {
                                uVar9 = F_00cebad0(param_2,4);
                                ((byte *)(gen_frame + 0x10045))[(int)(iVar14)] = (byte)uVar9;
                                if ((int)uVar7 < (int)(uVar9 & 0xff)) {
                                  uVar7 = uVar9 & 0xff;
                                }
                                iVar14 = iVar14 + 1;
                                (*(uint *)(gen_frame + 0x10030)) = uVar7;
                              } while (iVar14 < (int)(uVar8 & 0xff));
                            }
                            (*(int *)(gen_frame + 0x1003c)) = 0;
                            if (-1 < (int)(*(uint *)(gen_frame + 0x10030))) {
                              (*(short * PTR32 *)(gen_frame + 0x10028)) = ((short *)(gen_frame + 0x10096));
                              do {
                                uVar7 = F_00cebad0(param_2,3);
                                ((byte *)(gen_frame + 0x10065))[(int)((*(int *)(gen_frame + 0x1003c)))] = (char)uVar7 + 1;
                                uVar7 = F_00cebad0(param_2,2);
                                bVar11 = (byte)uVar7;
                                ((byte *)(gen_frame + 0x10075))[(int)((*(int *)(gen_frame + 0x1003c)))] = bVar11;
                                if (bVar11 != 0) {
                                  uVar7 = F_00cebad0(param_2,8);
                                  ((undefined1 *)(gen_frame + 0x10085))[(int)((*(int *)(gen_frame + 0x1003c)))] = (char)uVar7;
                                  if ((int)param_2[0x11] <= (int)(uVar7 & 0xff)) goto LAB_00cf2ad1;
                                }
                                iVar14 = 0;
                                psVar12 = (*(short * PTR32 *)(gen_frame + 0x10028));
                                if (0 < 1 << (bVar11 & 0x1f)) {
                                  do {
                                    uVar7 = F_00cebad0(param_2,8);
                                    sVar5 = (short)uVar7 + -1;
                                    *psVar12 = sVar5;
                                    if ((int)param_2[0x11] <= (int)sVar5) goto LAB_00cf2ad1;
                                    iVar14 = iVar14 + 1;
                                    psVar12 = psVar12 + 1;
                                  } while (iVar14 < 1 << (((byte *)(gen_frame + 0x10075))[(int)((*(int *)(gen_frame + 0x1003c)))] & 0x1f));
                                }
                                (*(short * PTR32 *)(gen_frame + 0x10028)) = (*(short * PTR32 *)(gen_frame + 0x10028)) + 8;
                                (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                              } while ((*(int *)(gen_frame + 0x1003c)) <= (int)(*(uint *)(gen_frame + 0x10030)));
                            }
                            uVar7 = F_00cebad0(param_2,2);
                            (*(char *)(gen_frame + 0x10a60)) = (char)uVar7 + '\x01';
                            uVar7 = F_00cebad0(param_2,4);
                            ((short *)(gen_frame + 0x10196))[0] = 0;
                            iVar14 = 2;
                            (*(byte *)(gen_frame + 0x10a61)) = (byte)uVar7;
                            ((short *)(gen_frame + 0x10196))[1] = 1 << ((byte)uVar7 & 0x1f);
                            (*(int *)(gen_frame + 0x10a64)) = 2;
                            (*(int *)(gen_frame + 0x1003c)) = 0;
                            if ((char)uVar8 != '\0') {
                              do {
                                iVar13 = 0;
                                if (((byte *)(gen_frame + 0x10065))[(int)(((byte *)(gen_frame + 0x10045))[(int)((int)((*(int *)(gen_frame + 0x1003c))))])] != 0) {
                                  ((byte * PTR32 *)(gen_frame + 0x11310))[0] = ((byte *)(gen_frame + 0x10065)) + ((byte *)(gen_frame + 0x10045))[(int)((*(int *)(gen_frame + 0x1003c)))];
                                  do {
                                    uVar7 = F_00cebad0(param_2,(uint)(*(byte *)(gen_frame + 0x10a61)));
                                    ((short *)(gen_frame + 0x10196))[(int)(iVar14)] = (short)uVar7;
                                    iVar14 = (*(int *)(gen_frame + 0x10a64)) + 1;
                                    (*(int *)(gen_frame + 0x10a64)) = iVar14;
                                    iVar13 = iVar13 + 1;
                                  } while (iVar13 < (int)(uint)*((byte * PTR32 *)(gen_frame + 0x11310))[0]);
                                }
                                (*(int *)(gen_frame + 0x1003c)) = (*(int *)(gen_frame + 0x1003c)) + 1;
                              } while ((*(int *)(gen_frame + 0x1003c)) < (int)(uVar8 & 0xff));
                            }
                            if ((*(int *)(gen_frame + 0x1000c)) < iVar14) {
                              (*(int *)(gen_frame + 0x1000c)) = iVar14;
                            }
                            (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                          } while ((*(int *)(gen_frame + 0x10034)) < (int)uVar6);
                        }
                        uVar7 = F_00cebad0(param_2,6);
                        uVar7 = uVar7 + 1;
                        (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + uVar6 * 0xa24 + uVar7 * 0x1c;
                        param_2[0x35] = uVar7;
                        (*(int *)(gen_frame + 0x10034)) = 0;
                        if (0 < (int)uVar7) {
                          (*(uint * PTR32 *)(gen_frame + 0x10020)) = param_2 + 0x36;
                          do {
                            uVar6 = F_00cebad0(param_2,0x10);
                            *(ushort *)(*(uint * PTR32 *)(gen_frame + 0x10020)) = (ushort)uVar6;
                            if (2 < (ushort)uVar6) goto LAB_00cf2ad1;
                            F_00cebad0(param_2,0x18);
                            F_00cebad0(param_2,0x18);
                            F_00cebad0(param_2,0x18);
                            uVar6 = F_00cebad0(param_2,6);
                            uVar7 = F_00cebad0(param_2,8);
                            (*(byte *)(gen_frame + 0x10a85)) = (byte)uVar7;
                            uVar6 = uVar6 + 1 & 0xff;
                            iVar14 = 0;
                            if (uVar6 != 0) {
                              do {
                                cVar4 = '\0';
                                uVar7 = F_00cebad0(param_2,3);
                                uVar8 = F_00cebad0(param_2,1);
                                if (uVar8 != 0) {
                                  uVar8 = F_00cebad0(param_2,5);
                                  cVar4 = (char)uVar8;
                                }
                                iVar13 = iVar14 + 1;
                                ((byte *)(gen_frame + 0x112d0))[(int)(iVar14)] = cVar4 * '\b' + (char)uVar7;
                                iVar14 = iVar13;
                              } while (iVar13 < (int)uVar6);
                            }
                            iVar14 = 0;
                            if (uVar6 != 0) {
                              do {
                                iVar13 = 0;
                                do {
                                  if ((((uint)((byte *)(gen_frame + 0x112d0))[(int)(iVar14)] & 1 << ((byte)iVar13 & 0x1f)) != 0)
                                     && (uVar7 = F_00cebad0(param_2,8),
                                        (int)param_2[0x11] <= (int)uVar7)) goto LAB_00cf2ad1;
                                  iVar13 = iVar13 + 1;
                                } while (iVar13 < 8);
                                iVar14 = iVar14 + 1;
                              } while (iVar14 < (int)uVar6);
                            }
                            uVar7 = ((uint *)(gen_frame + 0x10e90))[(int)((*(byte *)(gen_frame + 0x10a85)))];
                            (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + uVar6 * 0x10 + uVar7 * 4;
                            if (0 < (int)uVar7) {
                              (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) +
                                           (((uint *)(gen_frame + 0x10a90))[(int)((*(byte *)(gen_frame + 0x10a85)))] + 3 & 0xfffffffc) * uVar7;
                            }
                            (*(uint * PTR32 *)(gen_frame + 0x10020)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x10020)) + 2);
                            (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                          } while ((*(int *)(gen_frame + 0x10034)) < (int)param_2[0x35]);
                        }
                        uVar6 = F_00cebad0(param_2,6);
                        uVar6 = uVar6 + 1;
                        (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + uVar6 * 0x28;
                        param_2[0x57] = uVar6;
                        (*(int *)(gen_frame + 0x10034)) = 0;
                        if (0 < (int)uVar6) {
                          do {
                            uVar6 = F_00cebad0(param_2,0x10);
                            if (uVar6 != 0) goto LAB_00cf2ad1;
                            (*(int *)(gen_frame + 0x10038)) = (*(int *)(gen_frame + 0x10038)) + (param_2[2] * 3 + 3 & 0xfffffffc);
                            uVar6 = F_00cebad0(param_2,1);
                            if (uVar6 == 0) {
                              (*(byte *)(gen_frame + 0x10a70)) = 1;
                            }
                            else {
                              uVar6 = F_00cebad0(param_2,4);
                              (*(byte *)(gen_frame + 0x10a70)) = (byte)uVar6;
                            }
                            uVar6 = (uint)(*(byte *)(gen_frame + 0x10a70));
                            if ((*(uint *)(gen_frame + 0x10008)) < uVar6) {
                              (*(uint *)(gen_frame + 0x10008)) = uVar6;
                            }
                            uVar7 = F_00cebad0(param_2,1);
                            if (uVar7 != 0) {
                              uVar7 = F_00cebad0(param_2,8);
                              uVar7 = uVar7 + 1 & 0xffff;
                              (*(uint *)(gen_frame + 0x10030)) = 0;
                              if (uVar7 != 0) {
                                uVar8 = param_2[2];
                                do {
                                  iVar14 = 0x1f;
                                  if (uVar8 != 0) {
                                    for (; uVar8 >> iVar14 == 0; iVar14 = iVar14 + -1) {
                                    }
                                  }
                                  if (uVar8 != 0) {
                                    iVar14 = iVar14 + 1;
                                  }
                                  uVar9 = F_00cebad0(param_2,iVar14 + -1);
                                  iVar14 = 0x1f;
                                  bVar15 = param_2[2] != 0;
                                  if (bVar15) {
                                    for (; param_2[2] >> iVar14 == 0; iVar14 = iVar14 + -1) {
                                    }
                                  }
                                  if (bVar15) {
                                    iVar14 = iVar14 + 1;
                                  }
                                  uVar10 = F_00cebad0(param_2,iVar14 + -1);
                                  uVar8 = param_2[2];
                                  if ((((int)uVar8 <= (int)uVar9) || ((int)uVar8 <= (int)uVar10)) ||
                                     (uVar9 == uVar10)) goto LAB_00cf2ad1;
                                  (*(uint *)(gen_frame + 0x10030)) = (*(uint *)(gen_frame + 0x10030)) + 1;
                                } while ((int)(*(uint *)(gen_frame + 0x10030)) < (int)uVar7);
                              }
                            }
                            uVar7 = F_00cebad0(param_2,2);
                            if (uVar7 != 0) goto LAB_00cf2ad1;
                            if ((1 < (*(byte *)(gen_frame + 0x10a70))) && (iVar14 = 0, 0 < (int)param_2[2])) {
                              do {
                                uVar7 = F_00cebad0(param_2,4);
                                if ((int)uVar6 <= (int)uVar7) goto LAB_00cf2ad1;
                                iVar14 = iVar14 + 1;
                              } while (iVar14 < (int)param_2[2]);
                            }
                            iVar14 = 0;
                            if (uVar6 != 0) {
                              do {
                                F_00cebad0(param_2,8);
                                uVar6 = F_00cebad0(param_2,8);
                                ((undefined1 *)(gen_frame + 0x10a71))[(int)(iVar14)] = (char)uVar6;
                                uVar7 = F_00cebad0(param_2,8);
                                ((undefined1 *)(gen_frame + 0x10a80))[(int)(iVar14)] = (char)uVar7;
                                if (((int)param_2[0x13] <= (int)(uVar6 & 0xff)) ||
                                   ((int)param_2[0x35] <= (int)(uVar7 & 0xff))) goto LAB_00cf2ad1;
                                iVar14 = iVar14 + 1;
                              } while (iVar14 < (int)(uint)(*(byte *)(gen_frame + 0x10a70)));
                            }
                            (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                          } while ((*(int *)(gen_frame + 0x10034)) < (int)param_2[0x57]);
                        }
                        uVar6 = F_00cebad0(param_2,6);
                        iVar14 = 0;
                        param_2[0x59] = uVar6 + 1;
                        if (0 < (int)(uVar6 + 1)) {
                          psVar12 = (short *)((int)param_2 + 0x16a);
                          do {
                            uVar6 = F_00cebad0(param_2,1);
                            *(char *)(psVar12 + -1) = (char)uVar6;
                            uVar6 = F_00cebad0(param_2,0x10);
                            *psVar12 = (short)uVar6;
                            uVar6 = F_00cebad0(param_2,0x10);
                            psVar12[1] = (short)uVar6;
                            uVar6 = F_00cebad0(param_2,8);
                            *(char *)((int)psVar12 + -1) = (char)uVar6;
                            if (((*psVar12 != 0) || (psVar12[1] != 0)) ||
                               ((int)param_2[0x57] <= (int)(uVar6 & 0xff))) goto LAB_00cf2ad1;
                            iVar14 = iVar14 + 1;
                            psVar12 = psVar12 + 3;
                          } while (iVar14 < (int)param_2[0x59]);
                        }
                        F_00ceba90(param_2);
                        uVar6 = param_2[0x10];
                        uVar7 = param_2[0xf];
                        param_2[0xeb] = 0;
                        *param_1 = (((int)uVar6 >> 3) * 2 + 3U & 0xfffffffc) +
                                   (((int)uVar7 >> 3) * 2 + 3U & 0xfffffffc) + (*(int *)(gen_frame + 0x10038)) +
                                   (((uVar6 & 0x3fffffff) * 2 + 0xf + ((*(int *)(gen_frame + 0x1000c)) + uVar6 * 2) * 2 &
                                    0xfffffff0) + 0x180) * param_2[2] +
                                   (((int)uVar7 >> 1) + ((int)uVar7 >> 2) + uVar7) * 4 +
                                   (((int)uVar6 >> 1) + ((int)uVar6 >> 2) + uVar6) * 4 + 0x5ec;
                        *param_3 = (*(int *)(gen_frame + 0x10018));
                        F_00c47745((*(uint *)(gen_frame + 0x11318)) ^ (uint)(uint)(gen_frame + 0x0));
                        return 1;
                      }
                    }
                    goto LAB_00cf2ad1;
                  }
                  uVar6 = 0x22;
                }
                else {
LAB_00cf2ad1: ;
                  uVar6 = 0x14;
                }
LAB_00cf2ad6: ;
                bVar15 = param_2[0xd] == 0;
              }
            }
            else {
              bVar15 = param_2[0xd] == 0;
              uVar6 = 5;
            }
          }
          else {
            bVar15 = param_2[0xd] == 0;
            uVar6 = 0x22;
          }
        }
      }
      param_2[0xe] = uVar6;
      if (bVar15) {
        param_2[0xe] = uVar6;
      }
LAB_00cf2ae2: ;
      F_00c47745((*(uint *)(gen_frame + 0x11318)) ^ (uint)(uint)(gen_frame + 0x0));
      return 0;
    }
    uVar6 = 0x22;
  }
  else {
LAB_00cf1bdd: ;
    uVar6 = 0x1e;
  }
  param_2[0xe] = uVar6;
  if (param_2[0xd] == 0) {
    param_2[0xe] = uVar6;
  }
LAB_00cf1c07: ;
  F_00c47745((*(uint *)(gen_frame + 0x11318)) ^ (uint)(uint)(gen_frame + 0x0));
  return 0;
}

/* ref: FUN_00cf2b00 */
unsigned int F_00cf2b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf2b00u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  F_00cef7d0(param_5,param_3,in_ecx,in_eax,param_4);
  return 0;
}

/* ref: FUN_00cf2b20 */
unsigned int F_00cf2b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xcf2b20u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  F_00cef770(param_3,in_edx,in_eax,param_4);
  return 0;
}

/* ref: FUN_00cf2b40 */
uint F_00cf2b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf2b40u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (param_2 == -2) {
    iVar1 = -1;
  }
  else {
    param_1[0x4013] = 0;
    param_1[0x4012] = 0;
    iVar1 = param_2;
  }
  param_1[0xb] = iVar1;
  if (iVar1 != -1) {
    param_1[10] = iVar1;
  }
  iVar1 = *(int *)*param_1;
  *(undefined4 *)(iVar1 + 0x3ac) = 0;
  *(undefined4 *)(iVar1 + 0x560) = 0;
  *(undefined4 *)(iVar1 + 0x558) = 0;
  *(undefined4 *)(iVar1 + 0x3f4) = 0;
  *(undefined1 *)(iVar1 + 0x535) = 0;
  *(undefined4 *)(iVar1 + 0x55c) = 0;
  *(undefined4 *)(iVar1 + 0x5b4) = 0;
  *(undefined4 *)(iVar1 + 0x5b8) = 0;
  *(undefined4 *)(*param_1 + 0x28) = 0;
  *(undefined4 *)(*param_1 + 0x24) = 0;
  return 0;
}

/* ref: FUN_00cf2c00 */
uint F_00cf2c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcf2c00u, gen_a0, 0u, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(*in_esi + 0x14) = 0;
  *(undefined4 *)(*in_esi + 0x18) = 0;
  *(undefined4 *)(*in_esi + 0xc) = 0;
  puVar1 = (undefined4 *)*in_esi;
  uVar3 = F_00cf1770(*puVar1,in_esi[0x10] + puVar1[10],puVar1[9] - puVar1[10],puVar1 + 2,
                       puVar1 + 4,puVar1 + 3);
  *(int *)(*in_esi + 0x28) = *(int *)(*in_esi + 0x28) + uVar3;
  iVar2 = *(int *)(*in_esi + 0xc);
  while( true ) {
    if (0 < iVar2) {
      *(int *)(*in_esi + 0x14) = *(int *)(*in_esi + 0xc) * in_esi[8];
      return 1;
    }
    iVar2 = *in_esi;
    if (*(int *)(iVar2 + 0x20) < *(int *)(iVar2 + 0x24) + 0x400) {
      iVar5 = in_esi[0x10] + *(int *)(iVar2 + 0x28);
      F_00c46e20(iVar5 + -0x400,iVar5,*(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x28));
      *(int *)(*in_esi + 0x24) = *(int *)(*in_esi + 0x24) + -0x400;
      *(int *)(*in_esi + 0x28) = *(int *)(*in_esi + 0x28) + -0x400;
    }
    uVar4 = (*(code *)in_esi[2])
                      (in_esi[1],*(int *)(*in_esi + 0x24) + in_esi[0x10],0x400,in_esi[0xb]);
    in_esi[10] = in_esi[10] + uVar4;
    in_esi[0xb] = -1;
    *(int *)(*in_esi + 0x24) = *(int *)(*in_esi + 0x24) + uVar4;
    if ((uVar4 == 0) && (uVar3 == 0)) break;
    *(undefined4 *)(*in_esi + 0xc) = 0;
    puVar1 = (undefined4 *)*in_esi;
    uVar3 = F_00cf1770(*puVar1,in_esi[0x10] + puVar1[10],puVar1[9] - puVar1[10],puVar1 + 2,
                         puVar1 + 4,puVar1 + 3);
    *(int *)(*in_esi + 0x28) = *(int *)(*in_esi + 0x28) + uVar3;
    iVar2 = *(int *)(*in_esi + 0xc);
  }
  return 1;
}

/* ref: FUN_00cf2d10 */
uint F_00cf2d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf2d10u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  double dVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 * puVar6;
  uint uVar7;
  int iVar8;
  undefined2 * puVar9;
  float10 fVar10;
  int local_c;
  
  dVar2 = *(double *)&REFG(undefined, 0x10920e0);
  uVar7 = *(uint *)(*param_1 + 0x14);
  if ((int)uVar7 < (int)param_2) {
    param_2 = uVar7;
  }
  iVar4 = *(int *)(*param_1 + 0x18) / param_1[8];
  iVar1 = iVar4 + (int)param_2 / param_1[8];
  iVar8 = param_1[7];
  if (iVar8 == 1) {
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10920e0);
    uVar7 = (int)param_3 - ((uint)param_3 & 0xfffffff0);
    puVar9 = param_3;
    for (; ((uVar7 != 0 && (uVar7 < 0x10)) && (iVar4 < iVar1)); iVar4 = iVar4 + 1) {
      iVar8 = (int)((float10)*((float *)GEN_TOP((**(int * PTR32 *)(*param_1 + 0x10) + iVar4 * 4))) * fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 + 2;
    }
    uVar7 = iVar1 - iVar4 & 0xfffffff8;
    if (uVar7 != 0) {
      fVar10 = (float10)F_00cef770(**(int * PTR32 *)(*param_1 + 0x10) + iVar4 * 4,uVar7,puVar9,
                                     *(float *)&REFG(undefined, 0x1130ad0));
    }
    puVar9 = puVar9 + uVar7;
    for (iVar4 = iVar4 + uVar7; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar8 = (int)((float10)*((float *)GEN_TOP((**(int * PTR32 *)(*param_1 + 0x10) + iVar4 * 4))) * fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
    }
  }
  else if (iVar8 == 2) {
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10920e0);
    uVar7 = (int)param_3 - ((uint)param_3 & 0xfffffff0);
    puVar9 = param_3;
    for (; ((uVar7 != 0 && (uVar7 < 0x10)) && (iVar4 < iVar1)); iVar4 = iVar4 + 1) {
      iVar8 = (int)((float10)*((float *)GEN_TOP((**(int * PTR32 *)(*param_1 + 0x10) + iVar4 * 4))) * fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *puVar9 = uVar3;
      iVar8 = (int)((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*param_1 + 0x10) + 4))) + iVar4 * 4))) *
                   fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      puVar9[1] = uVar3;
      puVar9 = puVar9 + 2;
      uVar7 = uVar7 + 4;
    }
    uVar7 = iVar1 - iVar4 & 0xfffffffc;
    if (uVar7 != 0) {
      fVar10 = (float10)F_00cef7d0(uVar7,(*(int * PTR32 *)(*param_1 + 0x10))[1] + iVar4 * 4,puVar9,
                                     **(int * PTR32 *)(*param_1 + 0x10) + iVar4 * 4,*(float *)&REFG(undefined, 0x1130ad0)
                                    );
    }
    puVar9 = puVar9 + uVar7 * 2;
    local_c = 0;
    iVar8 = uVar7 + iVar4;
    puVar6 = puVar9;
    do {
      for (; iVar8 < iVar1; iVar8 = iVar8 + 1) {
        iVar5 = (int)((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*param_1 + 0x10) + local_c))) + iVar8 * 4)))
                     * fVar10);
        if (iVar5 < 0x7fff) {
          if (iVar5 < -0x7fff) {
            uVar3 = 0x8000;
          }
          else {
            uVar3 = (undefined2)iVar5;
          }
        }
        else {
          uVar3 = 0x7fff;
        }
        *puVar9 = uVar3;
        puVar9 = puVar9 + 2;
      }
      local_c = local_c + 4;
      puVar9 = puVar6 + 1;
      iVar8 = uVar7 + iVar4;
      puVar6 = puVar9;
    } while (local_c < 8);
  }
  else {
    local_c = 0;
    if (0 < iVar8) {
      do {
        iVar5 = local_c;
        if (iVar8 < 7) {
          iVar5 = *(int *)(&REFG(undefined, 0x1130598) + (local_c + iVar8 * 6) * 4);
        }
        puVar9 = param_3 + iVar5;
        for (iVar8 = iVar4; iVar8 < iVar1; iVar8 = iVar8 + 1) {
          iVar5 = (int)((double)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*param_1 + 0x10) + local_c * 4))) +
                                          iVar8 * 4))) * dVar2);
          if (iVar5 < 0x7fff) {
            if (iVar5 < -0x7fff) {
              uVar3 = 0x8000;
            }
            else {
              uVar3 = (undefined2)iVar5;
            }
          }
          else {
            uVar3 = 0x7fff;
          }
          *puVar9 = uVar3;
          puVar9 = puVar9 + param_1[7];
        }
        iVar8 = param_1[7];
        local_c = local_c + 1;
      } while (local_c < iVar8);
    }
  }
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) - param_2;
  *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + param_2;
  return param_2;
}

/* ref: FUN_00cf3040 */
uint F_00cf3040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3040u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x5d0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x5c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5cc);
  (*(int *)(gen_frame + 0x8)) = param_2;
  param_3[4] = 0;
  F_00c48350(&(*(undefined4 *)(gen_frame + 0xc)),0,0x5bc);
  (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x8)) + param_1;
  (*(int *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x56c)) = 0xffffffff;
  (*(int *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x20)) = param_1;
  (*(undefined1 *)(gen_frame + 0x2c)) = 1;
  uVar1 = F_00cf1b70(&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x8)));
  if (uVar1 != 0) {
    param_3[3] = (*(int *)(gen_frame + 0x8)) + (*(int *)(gen_frame + 0x4));
    param_3[1] = (*(undefined4 *)(gen_frame + 0x14));
    param_3[2] = (*(undefined4 *)(gen_frame + 0x10));
    *param_3 = (*(undefined4 *)(gen_frame + 0xc));
    F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc));
    return 1;
  }
  if ((*(int *)(gen_frame + 0x40)) != 0) {
    param_3[4] = 1;
    F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc));
    return 0;
  }
  param_3[4] = (*(undefined4 *)(gen_frame + 0x44));
  F_00c47745((*(uint *)(gen_frame + 0x5c8)) ^ (uint)(uint)(gen_frame + 0x5cc));
  return 0;
}

/* ref: FUN_00cf3160 */
uint F_00cf3160(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3160u, gen_a0, 0u, 0u, 0u);
  int * in_edi = (int *)(uintptr_t)gen_a0;
  int in_esi;
  code * pcVar1;
  uint uVar2;
  
  in_edi[0xc] = in_edi[0xc] + 1;
  if (in_edi[0xc] != 1) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  if (*in_edi != 0) {
    if (in_edi[0x10] != 0) {
      ((code *)REFG(gen_code32, 0x15d92fc))(in_edi[0x10]);
    }
    if (*(int *)*in_edi != 0) {
      in_esi = *(int *)*in_edi;
      if (in_esi != 0) {
        F_00cf1530(in_esi);
      }
      *(undefined4 *)*in_edi = 0;
    }
    if (*(int *)(*in_edi + 4) != 0) {
      ((code *)REFG(gen_code32, 0x15d92fc))(*(int *)(*in_edi + 4));
    }
    ((code *)REFG(gen_code32, 0x15d92fc))(*in_edi);
    *in_edi = 0;
  }
  in_edi[0xc] = in_edi[0xc] + -1;
  ((code *)REFG(gen_code32, 0x15d92fc))(in_edi);
  return 0;
}

/* ref: FUN_00cf31e0 */
uint F_00cf31e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf31e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  code * pcVar1;
  int * in_esi;
  gen_size32 sVar2;
  uint uVar3;
  int iVar4;
  gen_size32 sVar5;
  gen_size32 sVar6;
  
  sVar2 = param_3;
  in_esi = param_1;
  param_1[0xc] = param_1[0xc] + 1;
  if (param_1[0xc] != 1) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  param_1 = (int *)0x0;
  while( true ) {
    sVar5 = in_esi[0x4013];
    if (0 < (int)sVar5) {
      if ((int)param_3 < (int)sVar5) {
        sVar5 = param_3;
      }
      F_00c46aa0((int)param_1 + param_2,(int)in_esi + in_esi[0x4012] + 0x48,sVar5);
      in_esi[0x4012] = in_esi[0x4012] + sVar5;
      in_esi[0x4013] = in_esi[0x4013] - sVar5;
      param_1 = (int *)((int)param_1 + sVar5);
      param_3 = param_3 - sVar5;
    }
    if (param_3 == 0) goto LAB_00cf32d4;
    in_esi[0x4012] = 0;
    uVar3 = F_00cf2c00(in_esi);
    if (uVar3 == 0) {
      pcVar1 = ((code *)GEN_TOP(swi(3)));
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    sVar5 = *(gen_size32 *)(*in_esi + 0x14);
    if (sVar5 == 0) break;
    if (0 < (int)sVar5) {
      sVar6 = param_3;
      if ((int)sVar5 < (int)param_3) {
        sVar6 = sVar5;
      }
      F_00cf2d10(in_esi,sVar6,(int)param_1 + param_2);
      param_1 = (int *)((int)param_1 + sVar6);
      param_3 = param_3 - sVar6;
      iVar4 = sVar5 - sVar6;
      if (0 < iVar4) {
        F_00cf2d10(in_esi,iVar4,in_esi[0x4013] + 0x48 + (int)in_esi);
        in_esi[0x4013] = in_esi[0x4013] + iVar4;
      }
    }
  }
  if (0 < (int)param_3) {
    F_00c48350((undefined *)((int)param_1 + param_2),0,param_3);
  }
LAB_00cf32d4: ;
  if ((in_esi[4] <= in_esi[10]) && (param_3 == sVar2)) {
    (*(code *)in_esi[2])(in_esi[1],0,0,in_esi[0xb]);
  }
  in_esi[0xc] = in_esi[0xc] + -1;
  return sVar2 - param_3;
}

/* ref: FUN_00cf3310 */
uint F_00cf3310(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3310u, gen_a0, 0u, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  undefined4 * puVar6;
  
  *(undefined4 *)(*in_eax + 4) = 0;
  *(undefined4 *)(*in_eax + 0x28) = 0;
  *(undefined4 *)(*in_eax + 0x24) = 0;
  *(undefined4 *)(*in_eax + 0x20) = 0x10000;
  uVar2 = ((code *)REFG(gen_code32, 0x15d92f8))(*(undefined4 *)(*in_eax + 0x20));
  in_eax[0x10] = uVar2;
  if (uVar2 == 0) {
    pcVar5 = "ASI_stream_open() failed -- out of memory";
    puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    return 0;
  }
  uVar2 = (*(code *)in_eax[2])(in_eax[1],uVar2,0x2000,0);
  if (uVar2 == 0) {
    pcVar5 = "ASI_stream_open() failed -- truncated file";
    puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar3 = F_00cf3040(in_eax[0x10],uVar2,&(*(int *)(gen_frame + 0x8)));
  uVar1 = (*(undefined4 *)(gen_frame + 0x14));
  in_eax[6] = (*(int *)(gen_frame + 0x8));
  in_eax[7] = (*(int *)(gen_frame + 0xc));
  in_eax[9] = (*(int *)(gen_frame + 0x10));
  if (uVar3 != 0) {
    uVar3 = ((code *)REFG(gen_code32, 0x15d92f8))((*(undefined4 *)(gen_frame + 0x14)));
    *(uint *)(*in_eax + 4) = uVar3;
    if (*(int *)(*in_eax + 4) == 0) {
      pcVar5 = "ASI_stream_open() failed -- out of memory";
      puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
      return 0;
    }
    uVar3 = F_00cf1ab0(in_eax[0x10],uVar2,*(int *)(*in_eax + 4),uVar1);
    *(uint *)*in_eax = uVar3;
  }
  if (*(int *)*in_eax == 0) {
    pcVar5 = "ASI_stream_open() failed -- could not initialize Vorbis decoder";
    puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    return 0;
  }
  if (in_eax[9] == 0) {
    in_eax[9] = 320000;
  }
  ((int *)*in_eax)[9] = uVar2;
  *(undefined4 *)(*in_eax + 0x28) = 0;
  in_eax[10] = uVar2;
  in_eax[0xb] = -1;
  return 1;
}

/* ref: FUN_00cf3470 */
uint F_00cf3470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined * _Dst;
  uint uVar2;
  int iVar3;
  char * pcVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x10050)));
  if (puVar1 == (undefined4 *)0x0) {
    pcVar4 = "ASI_stream_open() failed -- out of memory";
    puVar1 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = *(undefined2 *)pcVar4;
    return 0;
  }
  uVar7 = 0x10050;
  uVar6 = 0;
  puVar5 = puVar1;
  F_00c48350(puVar1,0,0x10050);
  puVar1[0xd] = 0xffffffff;
  puVar1[0xe] = 0xffffffff;
  puVar1[0xf] = 0xffffffff;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  _Dst = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x10034,puVar5,uVar6,uVar7)));
  *puVar1 = _Dst;
  if (_Dst == (undefined *)0x0) {
    pcVar4 = "ASI_stream_open() failed -- out of memory";
    puVar1 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = *(undefined2 *)pcVar4;
    return 0;
  }
  F_00c48350(_Dst,0,0x10034);
  uVar2 = F_00cf3310(puVar1);
  if (uVar2 == 0) {
    F_00cf3160(puVar1);
    return 0;
  }
  puVar1[8] = puVar1[7] * 2;
  return (uint)puVar1;
}

/* ref: FUN_00cf3530 */
uint F_00cf3530(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3530u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cf3160(param_1);
  return uVar1;
}

/* ref: FUN_00cf3550 */
uint F_00cf3550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3550u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(param_1 * param_2) >> 0x15;
}

/* ref: FUN_00cf3560 */
uint F_00cf3560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3560u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x548) < 8) {
    F_00cebbb0(param_1);
  }
  uVar3 = *(uint *)(param_1 + 0x544);
  uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar3 & 0xff) * 4)));
  if ((int)uVar4 < 0) {
    if (*(int *)(param_1 + 0x548) < 0x19) {
      F_00cebbb0(param_1);
    }
    uVar3 = *(uint *)(param_1 + 0x544);
    uVar2 = uVar3 >> 8;
    do {
      uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar2 & 3) + 0x80000000 + uVar4) * 4)));
      uVar2 = uVar2 >> 2;
    } while ((int)uVar4 < 0);
  }
  piVar1 = (int *)(param_1 + 0x548);
  *piVar1 = *piVar1 - ((int)uVar4 >> 0x1a);
  *(uint *)(param_1 + 0x544) = uVar3 >> ((byte)((int)uVar4 >> 0x1a) & 0x1f);
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0x548) = 0;
    return 0xffffffff;
  }
  return uVar4 & 0x3ffffff;
}

/* ref: FUN_00cf3600 */
float10 F_00cf3600(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3600u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar1 = param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  param_2 = (uint)gen_fl2bits((float)(float10)1);
  while( true ) {
    fVar3 = (float10)param_1;
    if ((uVar2 & 1) != 0) {
      param_2 = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_2))) * fVar3));
    }
    uVar2 = uVar2 >> 1;
    if (uVar2 == 0) break;
    param_1 = (float)(fVar3 * fVar3);
  }
  fVar3 = ((float10)GEN_TOD(gen_bits2f(param_2)));
  if ((int)uVar1 < 0) {
    fVar3 = (float10)1 / fVar3;
  }
  return (float10)(float)fVar3;
}

/* ref: FUN_00cf3650 */
unsigned int F_00cf3650(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3650u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_00cf3600(param_1,param_2);
  return 0;
}

/* ref: FUN_00cf3668 */
uint F_00cf3668(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3668u, gen_a0, 0u, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  uint unaff_ECX;
  
  LOCK();
  UNLOCK();
  return unaff_ECX;
}

/* ref: FUN_00cf3673 */
unsigned int F_00cf3673(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3673u, gen_a0, gen_a1, gen_a2, 0u);
  LONG * param_1 = (LONG *)(uintptr_t)gen_a0;
  LONG param_2 = (LONG)gen_a1;
  LONG param_3 = (LONG)gen_a2;
  gen_imp_InterlockedCompareExchange(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00cf36bc */
uint F_00cf36bc(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf36bcu, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if ((in_ecx == 0) || (param_2 < in_ecx)) {
    uVar1 = 0x80070057;
  }
  return uVar1;
}

/* ref: FUN_00cf36d5 */
uint F_00cf36d5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf36d5u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_edi = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = in_eax - 1;
  uVar3 = 0;
  uVar2 = (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x12b57b8))[0])))(in_edi,uVar1,param_4,param_5);
  if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
    *(undefined1 *)(uVar1 + in_edi) = 0;
    uVar3 = 0x8007007a;
    uVar2 = uVar1;
  }
  else if (uVar2 == uVar1) {
    *(undefined1 *)(uVar1 + in_edi) = 0;
    uVar2 = uVar1;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  return uVar3;
}

/* ref: XAPOBaseWaveHlpNameSpace::GuidFromWaveFormatTag */
undefined * F_00cf371c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf371cu, gen_a0, gen_a1, 0u, 0u);
  undefined * __return_storage_ptr__ = (undefined *)(uintptr_t)gen_a0;
  ushort param_1 = (ushort)gen_a1;
  undefined2 uVar1;
  
  (*(ulong *)((char *)(__return_storage_ptr__))) = REFG(undefined4, 0x1130ad4);
  uVar1 = (*(undefined2 *)((char *)&REFG(undefined4, 0x1130ad8) + 2));
  (*(ushort *)(((char *)(__return_storage_ptr__) + 4))) = (undefined2)REFG(undefined4, 0x1130ad8);
  (*(ushort *)(((char *)(__return_storage_ptr__) + 6))) = uVar1;
  *(undefined4 *)((uchar *)(((char *)(__return_storage_ptr__) + 8))) = REFG(undefined4, 0x1130adc);
  *((undefined4 *)GEN_TOP((((uchar *)(((char *)(__return_storage_ptr__) + 8))) + 4))) = REFG(undefined4, 0x1130ae0);
  (*(ulong *)((char *)(__return_storage_ptr__))) = (uint)param_1;
  return __return_storage_ptr__;
}

/* ref: FUN_00cf373d */
uint F_00cf373d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf373du, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  
  iVar1 = F_00c61f68((undefined *)(param_3 + in_eax),(undefined *)(param_4 + in_eax),in_ecx - in_eax);
  return (uint)(iVar1 == 0);
}

/* ref: FUN_00cf3762 */
uint F_00cf3762(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3762u, gen_a0, gen_a1, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*param_1 == 0x165) {
    uVar1 = 0x20;
  }
  else if (*param_1 == 1) {
    uVar1 = (uint)(param_2 != 0) * 2 + 0x10;
  }
  else {
    uVar1 = (ushort)param_1[8] + 0x12;
  }
  return uVar1;
}

/* ref: FUN_00cf379a */
uint F_00cf379a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf379au, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar1 = (undefined *)*param_3;
  pvVar2 = (undefined *)F_00cf3762(param_1,1);
  *param_3 = (uint)pvVar2;
  if (pvVar2 <= pvVar1) {
    uVar3 = F_00cf3762(param_1,0);
    F_00c46aa0(param_2,param_1,uVar3);
    pvVar2 = F_00c48350((undefined *)(uVar3 + param_2),0,(int)pvVar1 - uVar3);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00cf37e7 */
uint F_00cf37e7(unsigned int gen_a0)
{
  GEN_ENTER(0xcf37e7u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00cf3762(param_1,0);
  uVar2 = F_00cf3762(param_1,1);
  uVar3 = F_004069f0(uVar2);
  if (uVar3 != 0) {
    F_00c46aa0(uVar3,param_1,uVar1);
    F_00c48350((undefined *)(uVar3 + uVar1),0,uVar2 - uVar1);
  }
  return uVar3;
}

/* ref: FUN_00cf3838 */
ushort F_00cf3838(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3838u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 0xfffe) {
    iVar2 = F_00c61f68(param_1 + 0xe,&REFG(undefined4, 0x1130ad8),0xc);
    if (iVar2 == 0) {
      uVar1 = param_1[0xc];
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00cf3872 */
uint F_00cf3872(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3872u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  
  if (*param_2 == 0xfffe) {
    puVar1 = (uint *)(param_2 + 0xc);
  }
  else {
    (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x1130ad4);
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1130ad8);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1130adc);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1130ae0);
    (*(uint *)(gen_frame + 0xc)) = (uint)*param_2;
    puVar1 = &(*(uint *)(gen_frame + 0xc));
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return (uint)param_1;
}

/* ref: FUN_00cf38b4 */
uint F_00cf38b4(unsigned int gen_a0)
{
  GEN_ENTER(0xcf38b4u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 8) {
    uVar1 = *(uint *)(&REFG(undefined, 0x134fbd4) + param_1 * 4);
  }
  return uVar1;
}

/* ref: FUN_00cf38d1 */
uint F_00cf38d1(unsigned int gen_a0)
{
  GEN_ENTER(0xcf38d1u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(ushort *)((int)this + 0xe);
  uVar4 = 1;
  if ((((uVar3 != 8) && (uVar3 != 0x10)) && (uVar3 != 0x18)) && (uVar3 != 0x20)) {
    uVar4 = 0;
  }
  if (*(short *)this == -2) {
    uVar1 = *(ushort *)((int)this + 0x12);
    if ((((uVar1 != 0) && (uVar1 != 8)) && ((uVar1 != 0x10 && ((uVar1 != 0x14 && (uVar1 != 0x18)))))
        ) && (uVar1 != 0x20)) {
      uVar4 = 0;
    }
    if (*(ushort *)((int)this + 0xe) < uVar1) {
      uVar4 = 0;
    }
  }
  iVar2 = *(ushort *)((int)this + 2) * uVar3;
  if ((uint)*(ushort *)((int)this + 0xc) != (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) {
    uVar4 = 0;
  }
  if (*(int *)((int)this + 8) != *(int *)((int)this + 4) * (uint)*(ushort *)((int)this + 0xc)) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00cf3951 */
uint F_00cf3951(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3951u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(ushort *)((int)this + 0xe) == 0x20);
  if (((*(short *)this == -2) && (*(short *)((int)this + 0x12) != 0x20)) &&
     (*(short *)((int)this + 0x12) != 0)) {
    uVar2 = 0;
  }
  iVar1 = (uint)*(ushort *)((int)this + 2) * (uint)*(ushort *)((int)this + 0xe);
  if ((uint)*(ushort *)((int)this + 0xc) != (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) {
    uVar2 = 0;
  }
  if (*(int *)((int)this + 8) != *(int *)((int)this + 4) * (uint)*(ushort *)((int)this + 0xc)) {
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00cf39a7 */
uint F_00cf39a7(unsigned int gen_a0)
{
  GEN_ENTER(0xcf39a7u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  short * psVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if ((*(short *)(in_eax + 2) != 1) && (*(short *)(in_eax + 2) != 2)) {
    uVar3 = 0;
  }
  if (*(short *)(in_eax + 0xe) != 4) {
    uVar3 = 0;
  }
  if (*(short *)(in_eax + 0x10) != 0x20) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    if (*(short *)(in_eax + 0x14) == 7) {
      psVar1 = (short *)(in_eax + 0x18);
      iVar2 = 0;
      do {
        if (psVar1[-1] != *(short *)((int)&REFG(undefined2, 0x1130ae4) + iVar2)) {
          uVar3 = 0;
        }
        if (*psVar1 != *(short *)((int)&REFG(undefined2, 0x1130af4) + iVar2)) {
          uVar3 = 0;
        }
        iVar2 = iVar2 + 2;
        psVar1 = psVar1 + 2;
      } while (iVar2 < 0xe);
    }
    else {
      uVar3 = 0;
    }
    if ((uint)*(ushort *)(in_eax + 0x12) !=
        (int)(((uint)*(ushort *)(in_eax + 0xc) + (uint)*(ushort *)(in_eax + 2) * -7) * 8) /
        (int)((uint)*(ushort *)(in_eax + 2) << 2) + 2U) {
      uVar3 = 0;
    }
    if (*(ushort *)(in_eax + 0x12) == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

/* ref: XAPOBaseWaveHlpNameSpace::WaveFillSilence */
unsigned int F_00cf3a6c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3a6cu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  ushort uVar1;
  uint _Val;
  
  uVar1 = F_00cf3838(param_3);
  if (uVar1 != 1) {
    uVar1 = F_00cf3838(param_3);
    if (uVar1 != 3) {
      _Val = 0;
      goto LAB_00cf3aa8;
    }
  }
  _Val = (*(short *)(param_3 + 0xe) != 8) - 1 & 0x80;
LAB_00cf3aa8: ;
  F_00c48350(param_1,_Val,param_2);
  return 0;
}

/* ref: FUN_00cf3ae6 */
float10 F_00cf3ae6(float gen_a0)
{
  GEN_ENTER(0xcf3ae6u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00cf3ab8((float)((float10)param_1 / (float10)*(double *)&REFG(undefined, 0x10920b0)));
  return (float10)(float)((float10)param_1 - fVar1 * (float10)*(double *)&REFG(undefined, 0x10920b0));
}

/* ref: FUN_00cf3b1e */
unsigned int F_00cf3b1e(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3b1eu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(LPVOID *)((int)this + 0xc) != (LPVOID)0x0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_00cf3b37 */
uint F_00cf3b37(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf3b37u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_CoTaskMemAlloc(0x42c);
  uVar2 = (-(uint)(pvVar1 != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  if (-1 < (int)uVar2) {
    F_00c46aa0(pvVar1,*(undefined4 *)(param_1 + 4),0x42c);
    *param_2 = pvVar1;
  }
  return uVar2;
}

/* ref: FUN_00cf3b7f */
unsigned int F_00cf3b7f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3b7fu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(LPVOID *)(param_1 + 0xc) != (LPVOID)0x0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 7;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return 0;
}

/* ref: FUN_00cf3bb5 */
unsigned int F_00cf3bb5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcf3bb5u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * puVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) != (*(uint *)&gen_args[2])) {
    puVar2 = &(*(uint *)&gen_args[1]);
    if (*(uint * PTR32 *)((*(int *)&gen_args[0]) + 0xc) != (uint *)0x0) {
      puVar2 = *(uint * PTR32 *)((*(int *)&gen_args[0]) + 0xc);
    }
    ((byte *)(gen_frame + 0x4))[0xc] = 0;
    ((byte *)(gen_frame + 0x4))[0xd] = 0;
    ((byte *)(gen_frame + 0x4))[0xe] = 0;
    ((byte *)(gen_frame + 0x4))[0xf] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = puVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x10);
    (*(uint *)(gen_frame + 0x1c)) = (*(uint *)&gen_args[4]) & 0xffff;
    (*(uint *)(gen_frame + 0x20)) = (*(uint *)&gen_args[5]) & 0xffff;
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)&gen_args[6]);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x14);
    (*(uint *)&gen_args[1]) = REFG(float, 0x1087f04);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = uVar1;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = (*(uint *)&gen_args[2]);
    (*(int *)(gen_frame + 0x18)) = ((*(uint *)&gen_args[4]) & 0xffff) * (*(int *)&gen_args[3]);
    ((code *)*(gen_code32 *)((*(int *)&gen_args[0]) + 8))(((byte *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_00cf3c40 */
unsigned int F_00cf3c40(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(LPVOID *)((int)this + 0xc) != (LPVOID)0x0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_00cf3c60 */
uint F_00cf3c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf3c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LONG LVar1;
  ulonglong uVar2;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -0x20) + 0x3c))))(param_1 + -0x20,param_2,param_3);
  if (*(int *)(param_1 + 0xc) == 0) {
    LVar1 = gen_imp_InterlockedExchange((LONG *)(param_1 + 8),-1);
    *(LONG *)(param_1 + 0xc) = LVar1;
  }
  F_00c46aa0(*(undefined4 *)(param_1 + 0xc),param_2,param_3);
  uVar2 = F_00c46aa0(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x14) * 2,param_2,param_3);
  return (uint)uVar2;
}

/* ref: FUN_00cf3cc0 */
uint F_00cf3cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf3cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LONG LVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    do {
      LVar1 = gen_imp_InterlockedCompareExchange((LONG *)(param_1 + 8),
                         (*(uint *)(param_1 + 0x10) ^ 1) * *(int *)(param_1 + 0x14) +
                         *(int *)(param_1 + 4),
                         *(uint *)(param_1 + 0x10) * *(int *)(param_1 + 0x14) +
                         *(int *)(param_1 + 4));
    } while (LVar1 == -1);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) ^ 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar2 = F_00c46aa0(param_2,(*(uint *)(param_1 + 0x10) ^ 1) * *(int *)(param_1 + 0x14) +
                             *(int *)(param_1 + 4),param_3);
  return (uint)uVar2;
}

/* ref: FUN_00cf3d40 */
uint F_00cf3d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  int in_ecx = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x3c) != 0) {
    uVar1 = gen_imp_InterlockedExchange((LONG *)(in_ecx + 0x28),-1);
    *(uint *)(in_ecx + 0x2c) = uVar1;
    return uVar1;
  }
  if (*(int *)(in_ecx + 0x2c) != 0) {
    LOCK();
    UNLOCK();
    *(undefined4 *)(in_ecx + 0x28) = *(undefined4 *)(in_ecx + 0x2c);
    *(undefined4 *)(in_ecx + 0x38) = 1;
    *(undefined4 *)(in_ecx + 0x2c) = 0;
  }
  return *(int *)(in_ecx + 0x24) + *(int *)(in_ecx + 0x34) * 2;
}

/* ref: CXAPOParametersBase::EndProcess */
uint F_00cf3d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf3d90u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  if (*(int *)(in_ecx + 0x3c) != 0) {
    LOCK();
    UNLOCK();
    in_eax = *(uint *)(in_ecx + 0x2c);
    *(uint *)(in_ecx + 0x28) = in_eax;
    *(undefined4 *)(in_ecx + 0x38) = 1;
    *(undefined4 *)(in_ecx + 0x2c) = 0;
  }
  return in_eax;
}

/* ref: FUN_00cf3db7 */
ushort F_00cf3db7(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3db7u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  for (uVar2 = (ushort)param_1; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cf3dd2 */
ushort F_00cf3dd2(unsigned int gen_a0)
{
  GEN_ENTER(0xcf3dd2u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0;
  for (uVar2 = param_1; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cf3e04 */
uint F_00cf3e04(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xcf3e04u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((param_2 == 0) || (0x7fffffff < param_2)) {
    uVar2 = 0x80070057;
  }
  if (-1 < (int)uVar2) {
    uVar1 = param_2 - 1;
    uVar2 = 0;
    uVar3 = (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x12b57b8))[0])))(param_1,uVar1,param_3,((undefined *)&gen_args[3]));
    if (((int)uVar3 < 0) || (uVar1 < uVar3)) {
      *(undefined1 *)(uVar1 + param_1) = 0;
      uVar2 = 0x8007007a;
    }
    else if (uVar3 == uVar1) {
      *(undefined1 *)(uVar1 + param_1) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00cf3e5e */
uint F_00cf3e5e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf3e5eu, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint param_8 = (uint)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  ushort * puVar6;
  int iVar7;
  uint uVar8;
  
  if ((ushort)param_6 == 0) {
    if ((ushort)param_3 == 2) {
      param_6 = 4;
    }
    else {
      param_6 = ((ushort)param_3 != 3) - 1 & 0x20;
    }
  }
  else {
    param_6 = (uint)(ushort)param_6;
  }
  param_1[8] = (short)param_2 - 0x12;
  param_1[1] = (ushort)param_4;
  *(int *)(param_1 + 2) = param_5;
  param_1[7] = (ushort)param_6;
  uVar8 = (uint)(ushort)param_4;
  if ((ushort)param_3 == 2) {
    iVar7 = ((ushort)param_9 - 2) * uVar8 * 4;
    uVar4 = (short)((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3) + (ushort)param_4 * 7;
    param_1[6] = uVar4;
    iVar7 = 0;
    *(uint *)(param_1 + 4) = ((uint)uVar4 * param_5) / (uint)(ushort)param_9;
    param_1[9] = (ushort)param_9;
    param_1[10] = 7;
    puVar6 = param_1 + 0xc;
    do {
      puVar6[-1] = *(ushort *)((int)&REFG(undefined2, 0x1130ae4) + iVar7);
      *puVar6 = *(ushort *)((int)&REFG(undefined2, 0x1130af4) + iVar7);
      iVar7 = iVar7 + 2;
      puVar6 = puVar6 + 2;
    } while (iVar7 < 0xe);
  }
  else {
    uVar5 = (int)(param_6 * uVar8 + ((int)(param_6 * uVar8) >> 0x1f & 7U)) >> 3;
    param_1[6] = (ushort)uVar5;
    puVar6 = ((ushort *)GEN_TOP(((uVar5 & 0xffff) * param_5)));
    *(ushort * PTR32 *)(param_1 + 4) = puVar6;
  }
  if (param_2 == 0x28) {
    *param_1 = 0xfffe;
    uVar3 = REFG(undefined4, 0x1130ae0);
    uVar2 = REFG(undefined4, 0x1130adc);
    uVar1 = REFG(undefined4, 0x1130ad8);
    *(uint *)(param_1 + 0xc) = (uint)(ushort)param_3;
    *(undefined4 *)(param_1 + 0xe) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x12) = uVar3;
    uVar4 = (ushort)param_7;
    if ((ushort)param_7 == 0) {
      uVar4 = (ushort)param_6;
    }
    param_1[9] = uVar4;
    uVar5 = param_8;
    if (param_8 == 0xffffffff) {
      uVar5 = F_00cf38b4(uVar8);
    }
    *(uint *)(param_1 + 10) = uVar5;
  }
  else {
    uVar5 = CONCAT22((short)((uint)((int)(uintptr_t)puVar6) >> 0x10),(ushort)param_3);
    *param_1 = (ushort)param_3;
  }
  return uVar5;
}

/* ref: FUN_00cf3fa0 */
uint F_00cf3fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcf3fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  int iVar2;
  
  if ((short)param_2 == 2) {
    iVar2 = 0x32;
  }
  else {
    iVar2 = param_1;
    if (param_1 == 0) {
      iVar2 = 0x12;
    }
    if (((ushort)param_3 < 3) && (param_7 == 0)) {
      if ((((ushort)param_6 == 0) || ((ushort)param_6 == (ushort)param_5)) &&
         (((short)param_2 != 1 || ((ushort)param_5 < 0x11)))) goto LAB_00cf3fe9;
    }
    iVar2 = 0x28;
  }
LAB_00cf3fe9: ;
  uVar1 = F_004069f0(iVar2);
  if (uVar1 != 0) {
    F_00cf3e5e(uVar1,iVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return uVar1;
}

/* ref: FUN_00cf4019 */
uint F_00cf4019(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf4019u, gen_a0, gen_a1, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  short sVar1;
  uint uVar2;
  ushort * puVar3;
  uint uVar4;
  
  sVar1 = *param_1;
  uVar2 = 0;
  if (sVar1 == 0x165) {
    uVar4 = (uint)(ushort)param_1[4];
    if (uVar4 != 0) {
      puVar3 = (ushort *)(param_1 + 0xf);
      do {
        uVar2 = uVar2 | *puVar3 & 0xff | (uint)(*puVar3 >> 8);
        puVar3 = puVar3 + 10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if ((sVar1 == 0x166) || (sVar1 == -2)) {
    uVar2 = *(uint *)(param_1 + 10);
  }
  else {
    uVar4 = (uint)(ushort)param_1[1];
    if (uVar4 == 1) {
      uVar2 = 4;
    }
    else if (uVar4 == 2) {
      uVar2 = 3;
    }
    else if (param_2 != 0) {
      uVar2 = F_00cf38b4(uVar4);
    }
  }
  return uVar2;
}

/* ref: FUN_00cf4093 */
uint F_00cf4093(unsigned int gen_a0)
{
  GEN_ENTER(0xcf4093u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  byte bVar1;
  int iVar2;
  ushort uVar3;
  byte * pbVar4;
  uint uVar5;
  uint local_8;
  
  if (*(ushort *)(in_eax + 0x10) < 0x20) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(*(short *)(in_eax + 2) == 0x10);
    if (*(char *)(in_eax + 0xb) != '\x02') {
      uVar5 = 0;
    }
    local_8 = (uint)*(ushort *)(in_eax + 8);
    if (*(ushort *)(in_eax + 8) == 0) {
      uVar5 = 0;
    }
    iVar2 = *(int *)(in_eax + 0x10);
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    if (local_8 != 0) {
      pbVar4 = (byte *)(in_eax + 0x1c);
      do {
        if (*(int *)(pbVar4 + -0xc) != iVar2) {
          uVar5 = 0;
        }
        if (4 < (*pbVar4 & 0xf)) {
          uVar5 = 0;
        }
        if (0x30 < (*pbVar4 & 0xf0)) {
          uVar5 = 0;
        }
        bVar1 = pbVar4[1];
        if ((bVar1 != 1) && (bVar1 != 2)) {
          uVar5 = 0;
        }
        if ((*(ushort *)(pbVar4 + 2) != 0) &&
           (uVar3 = F_00cf3db7((uint)*(ushort *)(pbVar4 + 2)), uVar3 != bVar1)) {
          uVar5 = 0;
        }
        pbVar4 = pbVar4 + 0x14;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return uVar5;
}

/* ref: FUN_00cf4139 */
uint F_00cf4139(unsigned int gen_a0)
{
  GEN_ENTER(0xcf4139u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(in_esi + 2);
  uVar3 = (uint)((uint)*(ushort *)(in_esi + 0xc) == (uint)uVar1 * 2);
  if (*(short *)(in_esi + 0xe) != 0x10) {
    uVar3 = 0;
  }
  if (*(short *)(in_esi + 0x10) == 0x22) {
    if (*(byte *)(in_esi + 0x31) < 3) {
      uVar3 = 0;
    }
    if (*(short *)(in_esi + 0x32) == 0) {
      uVar3 = 0;
    }
    if ((*(uint *)(in_esi + 0x1c) == 0) || (0x7ff800 < *(uint *)(in_esi + 0x1c))) {
      uVar3 = 0;
    }
    if ((*(int *)(in_esi + 0x14) != 0) &&
       (uVar2 = F_00cf3dd2(*(int *)(in_esi + 0x14)), uVar2 != *(ushort *)(in_esi + 2))) {
      uVar3 = 0;
    }
    if ((uint)*(ushort *)(in_esi + 0x12) != (uVar1 + 1) / 2) {
      uVar3 = 0;
    }
    if (*(uint *)(in_esi + 0x18) < (uint)(*(int *)(in_esi + 0x24) + *(int *)(in_esi + 0x20))) {
      uVar3 = 0;
    }
    if ((uint)(*(int *)(in_esi + 0x2c) + *(int *)(in_esi + 0x28)) <= *(uint *)(in_esi + 0x18)) {
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00cf41f0 */
uint F_00cf41f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf41f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  uVar2 = F_00cf3838(param_1);
  if (uVar2 == 0x165) {
    uVar3 = F_00cf3e04(param_2,param_3,&REFG(undefined, 0x1130bd4));
  }
  else {
    sVar1 = *(short *)(param_1 + 2);
    if (sVar1 == 1) {
      pcVar5 = "Mono";
    }
    else if (sVar1 == 2) {
      pcVar5 = "Stereo";
    }
    else if (sVar1 == 3) {
      pcVar5 = "2.1";
    }
    else if (sVar1 == 4) {
      pcVar5 = "Quad";
    }
    else if (sVar1 == 5) {
      pcVar5 = "4.1";
    }
    else if (sVar1 == 6) {
      pcVar5 = "5.1";
    }
    else if (sVar1 == 7) {
      pcVar5 = "6.1";
    }
    else {
      pcVar5 = "7.1";
      if (sVar1 != 8) {
        pcVar5 = "ManyChannels";
      }
    }
    if (uVar2 == 3) {
      pcVar4 = "Float";
    }
    else if (uVar2 == 2) {
      pcVar4 = "Adpcm";
    }
    else if (uVar2 == 0x166) {
      pcVar4 = "XMA2";
    }
    else if (uVar2 == 0x161) {
      pcVar4 = "WMAStd";
    }
    else if (uVar2 == 0x162) {
      pcVar4 = "WMAPro";
    }
    else if (uVar2 == 0x164) {
      pcVar4 = "WMASpdif";
    }
    else if (uVar2 == 0x92) {
      pcVar4 = "AC3Spdif";
    }
    else if (uVar2 == 1) {
      sVar1 = *(short *)(param_1 + 0xe);
      if (sVar1 == 8) {
        pcVar4 = "Pcm8Bit";
      }
      else if (sVar1 == 0x10) {
        pcVar4 = "Pcm16Bit";
      }
      else if (sVar1 == 0x18) {
        pcVar4 = "Pcm24Bit";
      }
      else {
        pcVar4 = "Pcm32Bit";
        if (sVar1 != 0x20) {
          pcVar4 = "BadBitsPerSample";
        }
      }
    }
    else {
      pcVar4 = "Unknown";
    }
    uVar3 = F_00cf3e04(param_2,param_3,"%luk%s%s",*(uint *)(param_1 + 4) / 1000,pcVar4,pcVar5);
  }
  return uVar3;
}

/* ref: FUN_00cf436b */
unsigned int F_00cf436b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf436bu, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  float fVar2;
  undefined4 uVar3;
  float * pfVar4;
  bool bVar5;
  float * pfVar6;
  int iVar7;
  
  do {
    iVar7 = 0;
    bVar5 = false;
    if (in_eax + -1 < 1) {
      return 0;
    }
    pfVar4 = param_2;
    do {
      pfVar6 = pfVar4 + 1;
      if ((float10)*pfVar6 < (float10)*pfVar4) {
        fVar2 = *pfVar4;
        *pfVar4 = *pfVar6;
        *pfVar6 = fVar2;
        puVar1 = (undefined4 *)(param_3 + iVar7 * 4);
        uVar3 = *puVar1;
        *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar6)));
        *((undefined4 *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar6))) = uVar3;
        bVar5 = true;
      }
      iVar7 = iVar7 + 1;
      pfVar4 = pfVar6;
    } while (iVar7 < in_eax + -1);
  } while (bVar5);
  return 0;
}

/* ref: FUN_00cf43cb */
uint F_00cf43cb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf43cbu, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float fVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  HANDLE pvVar5;
  LPVOID pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float * pfVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int * piVar14;
  int iVar15;
  int iVar16;
  code * pcVar17;
  int * piVar18;
  undefined4 * puVar19;
  int iVar20;
  float10 fVar21;
  float10 fVar22;
  float fVar23;
  longlong lVar24;
  undefined4 uVar25;
  uint local_24;
  uint local_20;
  undefined4 * puStack_14;
  LPVOID local_10;
  LPVOID local_c;
  uint local_8;
  
  uVar4 = param_2;
  uVar3 = param_1;
  pcVar17 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
  lVar24 = (ulonglong)(param_1 << 2) << 0x20;
  local_20 = 0;
  local_c = (LPVOID)0x0;
  local_10 = (LPVOID)0x0;
  pvVar5 = gen_imp_GetProcessHeap();
  pvVar6 = gen_imp_HeapAlloc(pvVar5,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
  if (pvVar6 != (LPVOID)0x0) {
    lVar24 = (ulonglong)(param_2 << 2) << 0x20;
    pvVar5 = gen_imp_GetProcessHeap();
    local_c = gen_imp_HeapAlloc(pvVar5,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
    if (local_c != (LPVOID)0x0) {
      lVar24 = (ulonglong)(param_2 << 2) << 0x20;
      pvVar5 = gen_imp_GetProcessHeap();
      local_10 = gen_imp_HeapAlloc(pvVar5,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
      if (local_10 != (LPVOID)0x0) {
        iVar7 = 0;
        if (0 < (int)param_1) {
          do {
            *(int *)((int)pvVar6 + iVar7 * 4) = iVar7;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)param_1);
        }
        iVar7 = 0;
        if (0 < (int)param_2) {
          do {
            *(int *)((int)local_c + iVar7 * 4) = iVar7;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)param_2);
        }
        F_00cf436b(param_1,param_3,pvVar6);
        F_00cf436b(param_2,param_4,local_c);
        uVar8 = 0;
        local_24 = param_1;
        local_8 = param_2;
        uVar12 = local_24;
        if (0 < (int)param_1) {
          do {
            fVar23 = *(float *)(param_3 + uVar8 * 4);
            uVar12 = uVar8;
            if (!GEN_ISNAN(fVar23) && !(fVar23 < 0.0)) break;
            uVar8 = uVar8 + 1;
            uVar12 = local_24;
          } while ((int)uVar8 < (int)param_1);
        }
        local_24 = uVar12;
        uVar8 = 0;
        uVar12 = local_8;
        if (0 < (int)param_2) {
          do {
            fVar23 = *(float *)(param_4 + uVar8 * 4);
            uVar12 = uVar8;
            if (!GEN_ISNAN(fVar23) && !(fVar23 < 0.0)) break;
            uVar8 = uVar8 + 1;
            uVar12 = local_8;
          } while ((int)uVar8 < (int)param_2);
        }
        local_8 = uVar12;
        iVar7 = param_2 - local_8;
        iVar15 = 0;
        if (0 < (int)param_2) {
          puStack_14 = param_5;
          do {
            *(undefined4 *)((int)local_10 + iVar15 * 4) = 0;
            uVar12 = param_1;
            puVar19 = puStack_14;
            if (0 < (int)param_1) {
              for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + 1;
              }
            }
            puStack_14 = puStack_14 + param_1;
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)param_2);
        }
        if (0 < iVar7) {
          if ((int)local_24 < (int)param_1) {
            piVar18 = (int *)((int)pvVar6 + local_24 * 4);
            iVar15 = param_3 - (int)pvVar6;
            do {
              uVar12 = local_8;
              if ((int)local_8 < (int)param_2) {
                do {
                  fVar21 = (float10)*(float *)(iVar15 + (int)piVar18);
                  fVar22 = (float10)*(float *)(param_4 + uVar12 * 4);
                  if ((!GEN_ISNAN(fVar22) && !GEN_ISNAN(fVar21)) && !(fVar22 < fVar21)) break;
                  uVar12 = uVar12 + 1;
                } while ((int)uVar12 < (int)param_2);
              }
              iVar20 = (int)(uVar12 - local_8) % iVar7 + local_8;
              iVar9 = iVar20 * 4;
              iVar16 = (int)((uVar12 - local_8) + -1 + iVar7) % iVar7 + local_8;
              iVar13 = iVar16 * 4;
              fVar21 = F_00cf3ae6(((float)GEN_TOF(((float10)*(float *)(iVar9 + param_4) -
                                           (float10)*(float *)(iVar13 + param_4)))));
              fVar23 = (float)fVar21;
              fVar21 = F_00cf3ae6(((float)GEN_TOF(((float10)*(float *)(iVar15 + (int)piVar18) -
                                           (float10)*(float *)(iVar13 + param_4)))));
              if (iVar16 == iVar20) {
                param_5[*(int *)(iVar13 + (int)local_c) * param_1 + *piVar18] =
                     (undefined4)gen_fl2bits(REFG(float, 0x1087f04));
                pfVar10 = ((float *)GEN_TOP(((int)local_10 + *(int *)(iVar13 + (int)local_c) * 4)));
                fVar21 = (float10)*pfVar10 + (float10)REFG(double, 0x1088130);
              }
              else {
                if ((GEN_ISNAN(fVar23) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
                    ((GEN_ISNAN(fVar23) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
                    fVar23 == *(float *)&REFG(undefined, 0x1088114))) {
                  local_20 = 0x80070057;
                  pcVar17 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
                  goto LAB_00cf4772;
                }
                dVar2 = ((double)GEN_TOD(((((float10)(float)fVar21 / (float10)fVar23) *
                                 (float10)*(double *)&REFG(undefined, 0x1130be0)) * (float10)REFG(double, 0x1088108))));
                uVar11 = (undefined4)(ulonglong)gen_d2bits(dVar2);
                uVar25 = (undefined4)((ulonglong)gen_d2bits(dVar2) >> 0x20);
                fVar21 = F_00c4c9e0(fVar23,uVar11,uVar25);
                param_3 = (uint)gen_fl2bits((float)fVar21);
                if (((float10)GEN_TOD(gen_bits2f(param_3))) < (float10)0) {
                  fVar23 = 0.0;
                  param_3 = 0;
                }
                fVar21 = F_00c4cda0(fVar23,uVar11,uVar25);
                puStack_14 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)fVar21)));
                if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puStack_14))) < (float10)0) {
                  puStack_14 = (undefined4 *)0x0;
                }
                if (param_2 == 1) {
                  puStack_14 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
                  param_3 = (uint)gen_fl2bits(REFG(float, 0x1087f04));
                }
                piVar14 = (int *)((int)local_c + iVar9);
                param_5[*(int *)(iVar13 + (int)local_c) * param_1 + *piVar18] = param_3;
                param_5[*piVar14 * param_1 + *piVar18] = puStack_14;
                pfVar10 = ((float *)GEN_TOP(((int)local_10 + *(int *)(iVar13 + (int)local_c) * 4)));
                *pfVar10 = (float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)*pfVar10);
                pfVar10 = (float *)((int)local_10 + *piVar14 * 4);
                fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puStack_14))) + (float10)*pfVar10;
              }
              local_24 = local_24 + 1;
              *pfVar10 = (float)fVar21;
              piVar18 = piVar18 + 1;
              pcVar17 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
            } while ((int)local_24 < (int)param_1);
          }
          iVar7 = 0;
          fVar23 = 0.0;
          param_2 = 0;
          if (0 < (int)uVar4) {
            do {
              fVar1 = *(float *)((int)local_10 + iVar7 * 4);
              if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)fVar1) {
                fVar23 = fVar1;
                param_2 = (uint)gen_fl2bits(fVar1);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)uVar4);
            if (GEN_ISNAN(fVar23) == (GEN_ISNAN(fVar23) || fVar23 == 0.0)) {
              fVar21 = (float10)*(double *)&REFG(undefined, 0x10912a8);
              param_1 = (uint)param_5;
              param_5 = (undefined4 *)uVar4;
              do {
                if (0 < (int)uVar3) {
                  param_4 = uVar3;
                  pfVar10 = (float *)param_1;
                  do {
                    *pfVar10 = ((float)GEN_TOF(((float10)(int)((float10)(float)((float10)*pfVar10 /
                                                                      ((float10)GEN_TOD(gen_bits2f(param_2))))
                                                      * fVar21 + (float10)REFG(double, 0x1088108)) / fVar21)));
                    pfVar10 = pfVar10 + 1;
                    param_4 = param_4 - 1;
                  } while (param_4 != 0);
                }
                param_1 = param_1 + uVar3 * 4;
                param_5 = (undefined4 *)((int)param_5 - 1);
              } while (param_5 != (undefined4 *)0x0);
            }
          }
        }
        goto LAB_00cf4772;
      }
    }
  }
  local_20 = 0x8007000e;
LAB_00cf4772: ;
  lVar24 = ZEXT48(pvVar6) << 0x20;
  uVar11 = (*pcVar17)();
  gen_imp_HeapFree(uVar11,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
  lVar24 = ZEXT48(local_c) << 0x20;
  uVar11 = (*pcVar17)();
  gen_imp_HeapFree(uVar11,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
  lVar24 = ZEXT48(local_10) << 0x20;
  uVar11 = (*pcVar17)();
  gen_imp_HeapFree(uVar11,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
  return local_20;
}

/* ref: FUN_00cf47af */
uint F_00cf47af(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf47afu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  bool bVar2;
  uint uVar3;
  HANDLE pvVar4;
  LPVOID pvVar5;
  uint uVar6;
  float * pfVar7;
  uint uVar8;
  int iVar9;
  float * pfVar10;
  undefined4 * puVar11;
  float10 fVar12;
  undefined4 uVar13;
  
  fVar1 = REFG(float, 0x1087f04);
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (((*(uint *)&gen_args[0]) == 0) || ((*(uint *)&gen_args[2]) == 0)) {
LAB_00cf4b70: ;
    uVar3 = 0x80070057;
    goto LAB_00cf4b75;
  }
  if ((*(uint *)&gen_args[3]) != 0) {
    uVar8 = 0;
    uVar3 = (*(uint *)&gen_args[3]);
    do {
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    if ((*(uint *)&gen_args[0]) != uVar8) goto LAB_00cf4b70;
  }
  if ((*(uint *)&gen_args[4]) != 0) {
    uVar8 = 0;
    uVar3 = (*(uint *)&gen_args[4]);
    do {
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    if ((*(uint *)&gen_args[2]) != uVar8) goto LAB_00cf4b70;
  }
  if ((((*(uint *)&gen_args[3]) == 0x3f) || ((*(uint *)&gen_args[3]) == 0x60f)) && (((*(uint *)&gen_args[4]) == 0x3f || ((*(uint *)&gen_args[4]) == 0x60f)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((*(uint *)&gen_args[3]) == 0) || ((*(uint *)&gen_args[4]) == 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    F_00c48350((*(float * PTR32 *)&gen_args[1]),0,(*(uint *)&gen_args[2]) * (*(uint *)&gen_args[0]) * 4);
    uVar3 = (*(uint *)&gen_args[0]);
    if ((int)(*(uint *)&gen_args[2]) < (int)(*(uint *)&gen_args[0])) {
      uVar3 = (*(uint *)&gen_args[2]);
    }
    if (0 < (int)uVar3) {
      do {
        *(*(float * PTR32 *)&gen_args[1]) = REFG(float, 0x1087f04);
        (*(float * PTR32 *)&gen_args[1]) = (*(float * PTR32 *)&gen_args[1]) + (*(uint *)&gen_args[0]) + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else {
    if ((*(uint *)&gen_args[3]) != 4) {
      ((float *)(gen_frame + 0x2c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x2c))[0], REFG(float, 0x1130bfc));
      ((float *)(gen_frame + 0x2c))[1] = gen_bits2f(REFG(float, 0x10947a4));
      ((float *)(gen_frame + 0x2c))[2] = 0.0;
      ((float *)(gen_frame + 0x2c))[3] = gen_bits2f(REFG(float, 0x1130bf8));
      ((float *)(gen_frame + 0x2c))[4] = gen_bits2f(REFG(float, 0x1130bf4));
      ((float *)(gen_frame + 0x2c))[5] = gen_bits2f(REFG(float, 0x1094864));
      ((float *)(gen_frame + 0x2c))[6] = gen_bits2f(REFG(float, 0x1130bf0));
      ((float *)(gen_frame + 0x2c))[7] = gen_bits2f(REFG(float, 0x1094838));
      ((float *)(gen_frame + 0x2c))[8] = gen_bits2f(REFG(float, 0x10943cc));
      iVar9 = (*(uint *)&gen_args[0]) << 2;
      uVar3 = 0;
      ((float *)(gen_frame + 0x2c))[9] = gen_bits2f(REFG(float, 0x1130bec));
      uVar13 = 0;
      uVar8 = 0;
      (*(uint *)(gen_frame + 0x18)) = 1;
      (*(LPVOID *)(gen_frame + 0x4)) = (LPVOID)0x0;
      ((float *)(gen_frame + 0x2c))[10] = gen_bits2f(REFG(float, 0x1130be8));
      pvVar4 = gen_imp_GetProcessHeap();
      pvVar5 = gen_imp_HeapAlloc(pvVar4,uVar13,iVar9);
      if (pvVar5 == (LPVOID)0x0) {
LAB_00cf4983: ;
        (*(uint *)(gen_frame + 0x20)) = 0x8007000e;
      }
      else {
        iVar9 = (*(uint *)&gen_args[2]) << 2;
        uVar13 = 0;
        pvVar4 = gen_imp_GetProcessHeap();
        (*(LPVOID *)(gen_frame + 0x4)) = gen_imp_HeapAlloc(pvVar4,uVar13,iVar9);
        if ((*(LPVOID *)(gen_frame + 0x4)) == (LPVOID)0x0) goto LAB_00cf4983;
        uVar6 = 0;
        do {
          if (((*(uint *)&gen_args[3]) & (*(uint *)(gen_frame + 0x18))) != 0) {
            if (uVar8 != (*(uint *)&gen_args[0])) {
              *(float *)((int)pvVar5 + uVar8 * 4) = ((float *)(gen_frame + 0x2c))[(int)(uVar6)];
              uVar8 = uVar8 + 1;
              goto LAB_00cf49b0;
            }
LAB_00cf4ab9: ;
            (*(uint *)(gen_frame + 0x20)) = 0x80070057;
            goto LAB_00cf4b4b;
          }
LAB_00cf49b0: ;
          if (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0) {
            if (uVar3 == (*(uint *)&gen_args[2])) goto LAB_00cf4ab9;
            *(float *)((int)(*(LPVOID *)(gen_frame + 0x4)) + uVar3 * 4) = ((float *)(gen_frame + 0x2c))[(int)(uVar6)];
            uVar3 = uVar3 + 1;
          }
          (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) * 2;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0xb);
        if ((int)uVar8 < (int)(*(uint *)&gen_args[0])) {
          puVar11 = (undefined4 *)((int)pvVar5 + uVar8 * 4);
          for (iVar9 = (*(uint *)&gen_args[0]) - uVar8; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = 0xc3b40000;
            puVar11 = puVar11 + 1;
          }
        }
        if ((int)uVar3 < (int)(*(uint *)&gen_args[2])) {
          puVar11 = (undefined4 *)((int)(*(LPVOID *)(gen_frame + 0x4)) + uVar3 * 4);
          for (iVar9 = (*(uint *)&gen_args[2]) - uVar3; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = 0xc3b40000;
            puVar11 = puVar11 + 1;
          }
        }
        (*(uint *)(gen_frame + 0x20)) = F_00cf43cb((*(uint *)&gen_args[0]),(*(uint *)&gen_args[2]),(uint)pvVar5,(*(LPVOID *)(gen_frame + 0x4)),(*(float * PTR32 *)&gen_args[1]));
        if (-1 < (int)(*(uint *)(gen_frame + 0x20))) {
          (*(int *)(gen_frame + 0x14)) = 0;
          (*(uint *)(gen_frame + 0x18)) = 1;
          (*(uint *)(gen_frame + 0xc)) = 0;
          (*(int *)(gen_frame + 0x0)) = 0;
          do {
            if ((10 < (*(uint *)(gen_frame + 0xc))) || (!(*(float *)&REFG(undefined, 0x1088114) <= ((float *)(gen_frame + 0x2c))[(int)((*(uint *)(gen_frame + 0xc)))]))) {
              if ((((*(uint *)(gen_frame + 0x18)) & (*(uint *)&gen_args[3])) != 0) && (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0)) {
                (*(float * PTR32 *)&gen_args[1])[(*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x14))] = REFG(float, 0x1087f04);
              }
              if (((*(uint *)(gen_frame + 0x18)) & (*(uint *)&gen_args[3])) == 0) {
                if ((((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0) && (((*(uint *)(gen_frame + 0x18)) & 8) == 0)) {
LAB_00cf4b42: ;
                  (*(uint *)(gen_frame + 0x20)) = 0x80004001;
                  break;
                }
              }
              else if (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) == 0) {
                if (((*(uint *)(gen_frame + 0x18)) & 8) == 0) goto LAB_00cf4b42;
                if ((*(uint *)&gen_args[0]) == 1) {
                  if (0 < (int)(*(uint *)&gen_args[2])) {
                    pfVar10 = (*(float * PTR32 *)&gen_args[1]);
                    for (uVar3 = (*(uint *)&gen_args[2]); uVar3 != 0; uVar3 = uVar3 - 1) {
                      *pfVar10 = (float)((float10)1 / (float10)(int)(*(uint *)&gen_args[2]));
                      pfVar10 = pfVar10 + 1;
                    }
                  }
                }
                else {
                  fVar1 = ((float)GEN_TOF(((float10)1 / (float10)(int)((*(uint *)&gen_args[0]) - 1))));
                  pfVar10 = (*(float * PTR32 *)&gen_args[1]);
                  uVar3 = (*(uint *)&gen_args[2]);
                  if (0 < (int)(*(uint *)&gen_args[2])) {
                    do {
                      iVar9 = 0;
                      if (0 < (int)(*(uint *)&gen_args[0])) {
                        pfVar7 = pfVar10;
                        do {
                          if (iVar9 == (*(int *)(gen_frame + 0x14))) {
                            fVar12 = (float10)fVar1;
                          }
                          else {
                            fVar12 = (float10)(int)(*(uint *)&gen_args[2]) * (float10)*pfVar7;
                          }
                          iVar9 = iVar9 + 1;
                          *pfVar7 = ((float)GEN_TOF((fVar12 / ((float10)(int)(*(uint *)&gen_args[2]) + (float10)fVar1))));
                          pfVar7 = pfVar7 + 1;
                        } while (iVar9 < (int)(*(uint *)&gen_args[0]));
                      }
                      uVar3 = uVar3 - 1;
                      pfVar10 = pfVar10 + (*(uint *)&gen_args[0]);
                    } while (uVar3 != 0);
                  }
                }
              }
            }
            if (((*(uint *)&gen_args[3]) & (*(uint *)(gen_frame + 0x18))) != 0) {
              (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
            }
            if (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0) {
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + (*(uint *)&gen_args[0]);
            }
            (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) * 2;
            (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
          } while ((*(uint *)(gen_frame + 0xc)) < 0xb);
        }
      }
LAB_00cf4b4b: ;
      uVar13 = 0;
      pvVar4 = gen_imp_GetProcessHeap();
      gen_imp_HeapFree(pvVar4,uVar13,pvVar5);
      uVar13 = 0;
      pvVar4 = gen_imp_GetProcessHeap();
      gen_imp_HeapFree(pvVar4,uVar13,(*(LPVOID *)(gen_frame + 0x4)));
      uVar3 = (*(uint *)(gen_frame + 0x20));
      goto LAB_00cf4b75;
    }
    *(*(float * PTR32 *)&gen_args[1]) = REFG(float, 0x1087f04);
    if ((1 < (int)(*(uint *)&gen_args[2])) && ((*(float * PTR32 *)&gen_args[1])[1] = fVar1, 2 < (int)(*(uint *)&gen_args[2]))) {
      pfVar10 = (*(float * PTR32 *)&gen_args[1]) + 2;
      for (iVar9 = (*(uint *)&gen_args[2]) - 2; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar10 = 0.0;
        pfVar10 = pfVar10 + 1;
      }
    }
  }
  uVar3 = 0;
LAB_00cf4b75: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00cf4b89 */
uint F_00cf4b89(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf4b89u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  short sVar1;
  short * psVar2;
  int iVar3;
  ushort uVar4;
  LPVOID pvVar5;
  float * pfVar6;
  uint uVar7;
  int * piVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  undefined4 uVar12;
  int local_10;
  uint local_c;
  short local_8;
  
  iVar3 = param_1;
  if (param_2 != 0) {
    piVar8 = param_5;
    do {
      if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x418))) & 2) != 0) {
        F_00cf3838(*((undefined4 *)GEN_TOP((((int)param_3 - (int)param_5) + (int)piVar8))));
        F_00cf3838(*piVar8);
      }
      piVar8 = piVar8 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  local_c = 0;
  if (((byte)*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x418))) & 2) == 2) {
    uVar9 = (uint)*(ushort *)(*param_3 + 2);
    uVar7 = (uint)*(ushort *)(*param_5 + 2);
    pvVar5 = gen_imp_CoTaskMemAlloc(uVar7 * uVar9 * 4);
    *(LPVOID *)(param_1 + 0xc) = pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      local_c = 0x8007000e;
    }
    else {
      psVar2 = (short *)*param_3;
      sVar1 = psVar2[7];
      param_1 = 0;
      local_8 = sVar1;
      if (*psVar2 == -2) {
        param_1 = *(uint *)(psVar2 + 10);
        local_8 = psVar2[9];
      }
      param_2 = 0;
      if (*(short *)*param_5 == -2) {
        param_2 = *(uint *)((short *)*param_5 + 10);
      }
      if (param_1 == 0) {
        param_1 = F_00cf38b4(uVar9);
      }
      if (param_2 == 0) {
        param_2 = F_00cf38b4(uVar7);
      }
      local_c = F_00cf47af(uVar9,pvVar5,uVar7,param_1,param_2);
      if (-1 < (int)local_c) {
        *(undefined4 *)(iVar3 + 0x14) = 0;
        param_5 = (int *)0x4;
        if (uVar9 == uVar7) {
          param_5 = (int *)0x7;
          param_1 = 0;
          if (uVar7 != 0) {
            local_10 = 0;
            do {
              param_2 = 0;
              if (uVar9 != 0) {
                pfVar6 = ((float *)GEN_TOP((local_10 + (int)*(float * PTR32 *)(iVar3 + 0xc))));
                do {
                  if (param_2 == param_1) {
                    fVar11 = ((float10)GEN_TOD(**(float * PTR32 *)(iVar3 + 0xc)));
                    bVar10 = GEN_ISNAN((float10)*pfVar6) || GEN_ISNAN(fVar11);
                    if (bVar10 == (bVar10 || (float10)*pfVar6 == fVar11)) {
                      param_5 = (int *)((uint)param_5 & 0xfffffffe);
                    }
                  }
                  else {
                    bVar10 = GEN_ISNAN(*pfVar6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
                    if (bVar10 == (bVar10 || *pfVar6 == *(float *)&REFG(undefined, 0x1088114))) {
                      param_5 = (int *)((uint)param_5 & 0xfffffffc);
                    }
                  }
                  param_2 = param_2 + 1;
                  pfVar6 = pfVar6 + 1;
                } while (param_2 < uVar9);
              }
              param_1 = param_1 + 1;
              local_10 = local_10 + uVar9 * 4;
            } while (param_1 < uVar7);
          }
        }
        if (((uint)param_5 & 1) != 0) {
          gen_imp_CoTaskMemFree(*(LPVOID *)(iVar3 + 0xc));
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(iVar3 + 0x14) = 1;
        }
        uVar4 = F_00cf3838(*param_3);
        if (uVar4 == 1) {
          if (sVar1 == 0x20) {
            if (local_8 == 0x20) {
              uVar12 = 6;
            }
            else if (local_8 == 0x18) {
              uVar12 = 5;
            }
            else {
              uVar12 = 3;
            }
          }
          else {
            if (sVar1 != 0x18) {
              if (sVar1 == 0x10) {
                uVar7 = F_00cfeb30(1,uVar9,uVar7,param_5);
                *(uint *)(iVar3 + 8) = uVar7;
                *(undefined4 *)(iVar3 + 0x10) = 1;
              }
              else {
                uVar7 = F_00cfeb30(0,uVar9,uVar7,param_5);
                *(undefined4 *)(iVar3 + 0x10) = 0;
                *(uint *)(iVar3 + 8) = uVar7;
              }
              goto LAB_00cf4c38;
            }
            if (local_8 == 0x18) {
              uVar12 = 4;
            }
            else {
              uVar12 = 2;
            }
          }
        }
        else {
          uVar12 = 7;
        }
        uVar7 = F_00cfeb30(uVar12,uVar9,uVar7,param_5);
        *(uint *)(iVar3 + 8) = uVar7;
        *(undefined4 *)(iVar3 + 0x10) = uVar12;
        goto LAB_00cf4c38;
      }
    }
    if (*(LPVOID *)(iVar3 + 0xc) != (LPVOID)0x0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)(iVar3 + 0xc));
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 7;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    if ((int)local_c < 0) {
      return local_c;
    }
  }
LAB_00cf4c38: ;
  *(undefined4 *)(iVar3 + 0x18) = 1;
  return local_c;
}

/* ref: FUN_00cf4deb */
uint F_00cf4deb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf4debu, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  F_00cf379a(param_1,param_2,param_3);
  puVar5 = (undefined4 *)0xfffe;
  if (uVar1 != 0xfffe) {
    *param_2 = 0xfffe;
    param_2[8] = 0x16;
    param_2[9] = param_1[7];
    uVar6 = F_00cf4019(param_1,param_4);
    *(uint *)(param_2 + 10) = uVar6;
    uVar4 = REFG(undefined4, 0x1130ae0);
    uVar3 = REFG(undefined4, 0x1130adc);
    uVar2 = REFG(undefined4, 0x1130ad8);
    *(uint *)(param_2 + 0xc) = (uint)uVar1;
    *(undefined4 *)(param_2 + 0xe) = uVar2;
    *(undefined4 *)(param_2 + 0x10) = uVar3;
    *(undefined4 *)(param_2 + 0x12) = uVar4;
    *param_3 = 0x28;
    puVar5 = param_3;
  }
  return (uint)puVar5;
}

/* ref: XAPOBaseWaveHlpNameSpace::AllocateWaveFormatExtensibleCopy */
undefined * F_00cf4e61(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf4e61u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pWVar2;
  
  uVar1 = F_00cf3762(param_1,1);
  (*(uint *)(gen_frame + 0x8)) = uVar1;
  if (uVar1 < 0x28) {
    (*(uint *)(gen_frame + 0x8)) = 0x28;
  }
  pWVar2 = (undefined *)F_004069f0((*(uint *)(gen_frame + 0x8)));
  if (pWVar2 != (undefined *)0x0) {
    F_00cf4deb(param_1,pWVar2,&(*(uint *)(gen_frame + 0x8)),param_2);
  }
  return pWVar2;
}

/* ref: FUN_00cf4ea4 */
uint F_00cf4ea4(unsigned int gen_a0)
{
  GEN_ENTER(0xcf4ea4u, gen_a0, 0u, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x4)) = 1;
  if ((*param_1 != 0x165) && ((*(uint *)(gen_frame + 0x4)) = (uint)(param_1[1] != 0), *(int *)(param_1 + 2) == 0)) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  uVar2 = F_00cf3838(param_1);
  if (uVar2 == 1) {
    uVar3 = F_00cf38d1(param_1);
  }
  else if (uVar2 == 2) {
    uVar3 = F_00cf39a7(param_1);
  }
  else if (uVar2 == 3) {
    uVar3 = F_00cf3951(param_1);
  }
  else {
    if (uVar2 < 0x161) goto LAB_00cf4f72;
    if (uVar2 < 0x163) {
      uVar3 = (uint)(param_1[7] == 0x10);
      if ((*param_1 == -2) && (param_1[9] != 0x10)) {
        uVar3 = 0;
      }
      if (param_1[6] == 0) {
        uVar3 = 0;
      }
      if (*(int *)(param_1 + 4) == 0) {
        uVar3 = 0;
      }
    }
    else if (uVar2 == 0x165) {
      uVar3 = F_00cf4093(param_1);
    }
    else {
      if (uVar2 != 0x166) goto LAB_00cf4f72;
      uVar3 = F_00cf4139(param_1);
    }
  }
  if (uVar3 == 0) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
LAB_00cf4f72: ;
  sVar1 = *param_1;
  if ((sVar1 == -2) &&
     (((ushort)param_1[8] < 0x16 ||
      ((*(int *)(param_1 + 10) != 0 &&
       (uVar2 = F_00cf3dd2(*(int *)(param_1 + 10)), uVar2 != param_1[1])))))) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  if (((*(uint *)(gen_frame + 0x4)) == 0) && (sVar1 != 0x165)) {
    F_00cf41f0(param_1,((undefined1 *)(gen_frame + 0x8)),0x40);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (*(uint *)(gen_frame + 0x4));
}

/* ref: FUN_00cf4fcb */
uint F_00cf4fcb(unsigned int gen_a0)
{
  GEN_ENTER(0xcf4fcbu, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  SIZE_T cb;
  undefined2 * puVar4;
  uint uVar5;
  
  cb = F_00cf3762(param_1,1);
  if (cb < 0x28) {
    cb = 0x28;
  }
  puVar4 = gen_imp_CoTaskMemAlloc(cb);
  if (puVar4 != (undefined2 *)0x0) {
    uVar5 = F_00cf3762(param_1,0);
    F_00c46aa0(puVar4,param_1,uVar5);
    F_00c48350((undefined *)(uVar5 + (int)puVar4),0,cb - uVar5);
    if (*param_1 != 0xfffe) {
      puVar4[9] = param_1[7];
      uVar5 = F_00cf4019(param_1,1);
      *puVar4 = 0xfffe;
      *(uint *)(puVar4 + 10) = uVar5;
      puVar4[8] = 0x16;
      uVar3 = REFG(undefined4, 0x1130ae0);
      uVar2 = REFG(undefined4, 0x1130adc);
      uVar1 = REFG(undefined4, 0x1130ad8);
      *(uint *)(puVar4 + 0xc) = (uint)*param_1;
      *(undefined4 *)(puVar4 + 0xe) = uVar1;
      *(undefined4 *)(puVar4 + 0x10) = uVar2;
      *(undefined4 *)(puVar4 + 0x12) = uVar3;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00cf506d */
uint F_00cf506d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf506du, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 7;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 1;
  return (uint)this;
}

/* ref: FUN_00cf5099 */
uint F_00cf5099(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5099u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_8;
  
  local_8 = 0;
  uVar5 = F_00cf4ea4(param_1);
  if (uVar5 == 0) {
    return 0x80070057;
  }
  uVar3 = F_00cf3838(param_1);
  uVar2 = REFG(undefined4, 0x1130ae0);
  uVar1 = REFG(undefined4, 0x1130adc);
  uVar6 = REFG(undefined4, 0x1130ad8);
  if ((uVar3 != 3) && (local_8 = 0x88970001, param_2 != 0)) {
    if (*param_1 == -2) {
      param_1[0xc] = 3;
      param_1[0xd] = 0;
      *(undefined4 *)(param_1 + 0xe) = uVar6;
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      *(undefined4 *)(param_1 + 0x12) = uVar2;
    }
    else {
      *param_1 = 3;
    }
  }
  if (param_1[1] == 0) {
    local_8 = 0x88970001;
    if (param_2 == 0) goto LAB_00cf5131;
    sVar4 = 1;
  }
  else {
    if (((ushort)param_1[1] < 0x41) || (local_8 = 0x88970001, param_2 == 0)) goto LAB_00cf5131;
    sVar4 = 0x40;
  }
  local_8 = 0x88970001;
  param_1[1] = sVar4;
LAB_00cf5131: ;
  uVar6 = 1000;
  if (((*(uint *)(param_1 + 2) < 1000) || (uVar6 = 200000, 200000 < *(uint *)(param_1 + 2))) &&
     (local_8 = 0x88970001, param_2 != 0)) {
    *(undefined4 *)(param_1 + 2) = uVar6;
  }
  if ((param_1[7] != 0x20) && (local_8 = 0x88970001, param_2 != 0)) {
    param_1[7] = 0x20;
  }
  if (((*param_1 == -2) && (param_1[9] != 0x20)) && (local_8 = 0x88970001, param_2 != 0)) {
    param_1[9] = 0x20;
  }
  return local_8;
}

/* ref: FUN_00cf518e */
uint F_00cf518e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf518eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  short sVar1;
  uint local_8;
  
  local_8 = 0;
  if ((((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x418))) & 1) != 0) && (param_2[1] != param_1[1])) &&
     (local_8 = 0x88970001, param_3 != 0)) {
    param_2[1] = param_1[1];
  }
  if ((((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x418))) & 2) != 0) &&
      (*(int *)(param_2 + 2) != *(int *)(param_1 + 2))) && (local_8 = 0x88970001, param_3 != 0)) {
    *(int *)(param_2 + 2) = *(int *)(param_1 + 2);
  }
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x418))) & 4) != 0) {
    if ((param_2[7] != param_1[7]) && (local_8 = 0x88970001, param_3 != 0)) {
      param_2[7] = param_1[7];
    }
    if (*param_1 == -2) {
      if (*param_2 != -2) {
        if (param_2[7] == param_1[9]) {
          return local_8;
        }
        return 0x88970001;
      }
      sVar1 = param_1[9];
    }
    else {
      if (*param_2 != -2) {
        return local_8;
      }
      sVar1 = param_1[7];
    }
    if ((param_2[9] != sVar1) && (local_8 = 0x88970001, param_3 != 0)) {
      param_2[9] = sVar1;
    }
  }
  return local_8;
}

/* ref: FUN_00cf5256 */
uint F_00cf5256(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf5256u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPVOID param_3 = (LPVOID)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  LPVOID pv;
  uint local_8;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,param_2,0);
  if ((int)uVar1 < 0) {
    return 0x80070057;
  }
  uVar2 = F_00cf4ea4(param_3);
  if (uVar2 == 0) {
    uVar1 = 0x80070057;
  }
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  pv = param_3;
  if (param_4 != (undefined4 *)0x0) {
    pv = (LPVOID)F_00cf4fcb(param_3);
    uVar1 = (-(uint)(pv != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  local_8 = (uint)(param_4 != (undefined4 *)0x0);
  if ((((int)uVar1 < 0) ||
      (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,pv,local_8), (int)uVar1 < 0)) ||
     (uVar1 = F_00cf518e(param_1,param_2,pv,local_8), (int)uVar1 < 0)) {
    if (local_8 == 0) {
      return uVar1;
    }
    if (pv == (LPVOID)0x0) {
      return uVar1;
    }
    if (uVar1 == 0x88970001) {
      *param_4 = pv;
      return 0x88970001;
    }
  }
  else if (local_8 == 0) {
    return uVar1;
  }
  gen_imp_CoTaskMemFree(pv);
  return uVar1;
}

/* ref: FUN_00cf5314 */
uint F_00cf5314(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf5314u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPVOID param_3 = (LPVOID)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  LPVOID pv;
  uint local_8;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,param_2,0);
  if ((int)uVar1 < 0) {
    return 0x80070057;
  }
  uVar2 = F_00cf4ea4(param_3);
  if (uVar2 == 0) {
    uVar1 = 0x80070057;
  }
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  pv = param_3;
  if (param_4 != (undefined4 *)0x0) {
    pv = (LPVOID)F_00cf4fcb(param_3);
    uVar1 = (-(uint)(pv != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  local_8 = (uint)(param_4 != (undefined4 *)0x0);
  if ((((int)uVar1 < 0) ||
      (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,pv,local_8), (int)uVar1 < 0)) ||
     (uVar1 = F_00cf518e(param_1,param_2,pv,local_8), (int)uVar1 < 0)) {
    if (local_8 == 0) {
      return uVar1;
    }
    if (pv == (LPVOID)0x0) {
      return uVar1;
    }
    if (uVar1 == 0x88970001) {
      *param_4 = pv;
      return 0x88970001;
    }
  }
  else if (local_8 == 0) {
    return uVar1;
  }
  gen_imp_CoTaskMemFree(pv);
  return uVar1;
}

/* ref: FUN_00cf53e0 */
uint F_00cf53e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf53e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x10) = 7;
  *(undefined4 *)((int)this + 0x34) = param_3;
  *(undefined4 *)((int)this + 0x3c) = param_4;
  return (uint)this;
}

/* ref: FUN_00cf5430 */
unsigned int F_00cf5430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5430u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cf5450 */
uint F_00cf5450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float10 fVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ecx;
  
  fVar1 = (float10)1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x40) = (float)fVar1;
  *(float *)((int)this + 0x44) = (float)fVar1;
  *(float *)((int)this + 0x48) = (float)fVar1;
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *(float *)((int)this + 0x4c) = (float)fVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  *(float *)((int)this + 0x50) = (float)fVar1;
  *(int *)((int)this + 8) = param_1;
  *(float *)((int)this + 0x54) = (float)fVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *(undefined1 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  in_ecx = (int)this + 0xf0;
  param_1 = 3;
  do {
    F_00cea700(in_ecx);
    uVar2 = REFG(undefined4, 0x134fe14);
    in_ecx = in_ecx + 0x54;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined2 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar2,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xe4) = uVar3;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),0x1a8,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xec) = uVar3;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf41 */
uint F_00cf55b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf55b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  
  fVar1 = (float10)1;
  *(float *)(this + 0x40) = (float)fVar1;
  *(float *)(this + 0x44) = (float)fVar1;
  *(float *)(this + 0x48) = (float)fVar1;
  *(undefined4 *)(this + 0x3c) = 0;
  fVar2 = (float10)0;
  *(undefined4 *)(this + 0x84) = 0;
  *(float *)(this + 0x4c) = (float)fVar2;
  *(undefined4 *)(this + 0x88) = 0;
  *(float *)(this + 0x50) = (float)fVar2;
  this[0x80] = (undefined1)0x0;
  *(float *)(this + 0x54) = (float)fVar2;
  *(float *)(this + 0x14) = (float)fVar1;
  F_00cea740(this + 0x144);
  F_00cea740(this + 0xf0);
  F_00cea740(this + 0x198);
  uVar3 = F_00cea740(this + 0x1ec);
  fVar1 = (float10)0;
  *(float *)(this + 0x4c) = (float)fVar1;
  *(undefined4 *)(this + 0x58) = 0;
  *(float *)(this + 0x50) = (float)fVar1;
  *(float *)(this + 0x54) = (float)fVar1;
  return uVar3;
}

/* ref: FUN_00cf5630 */
unsigned int F_00cf5630(unsigned int gen_a0)
{
  GEN_ENTER(0xcf5630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xc) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 100))))(*(int * PTR32 *)((int)this + 0xc),((undefined1 *)(gen_frame + 0xc)));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x48))))(*(int * PTR32 *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
    if (*(char *)((int)this + 0x2e) != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x34))))(*(int * PTR32 *)((int)this + 0x30));
    }
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2);
    piVar2 = *(int * PTR32 *)((int)this + 0x18);
    if ((char)uVar3 == '\0') {
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
        *(undefined4 *)((int)this + 0x18) = 0;
        return 0;
      }
    }
    else {
      if (*(int *)((int)this + 0x34) == 3) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2);
        *(undefined4 *)((int)this + 0x18) = 0;
        return 0;
      }
      ((code *)*(gen_code32 *)*piVar2)(piVar2,0);
    }
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf49 */
uint F_00cf5700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf5700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x5c))))
                      (*(int * PTR32 *)(this + 0x18),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf8 */
byte F_00cf5720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc),0,0);
  piVar1 = *(int * PTR32 *)(this + 0x18);
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xd4) = 1;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1,param_2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x30))))(*(int * PTR32 *)(this + 0x18),0,0);
  }
  return 1;
}

/* ref: FUN_00cf5770 */
uint F_00cf5770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  iVar4 = *(int *)((int)this + 0xa8);
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar3 = *(uint *)((int)this + 0x94);
  (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  if (iVar4 == 0) {
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xa0);
    if (iVar1 == 0xf) {
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = uVar3;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
    }
    else if (iVar1 == 0xb) {
      (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)this + 0xa4) & 0xffffff80;
      (*(uint *)(gen_frame + 0x18)) = (iVar4 - *(uint *)((int)this + 0xa4)) + 0x7f & 0xffffff80;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
    }
    else {
      uVar2 = *(uint *)((int)this + 0xa4);
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      if (iVar1 == 0xc) {
        (*(uint *)(gen_frame + 0x18)) = iVar4 - uVar2;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
      }
      else {
        (*(uint *)(gen_frame + 0x18)) = (iVar4 - uVar2) + 1;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
      }
    }
  }
  if (param_2 != 0) {
    iVar4 = *(int *)((int)this + 0xa0);
    (*(uint *)(gen_frame + 0xc)) = param_2;
    if (iVar4 == 1) {
      uVar3 = uVar3 / (uint)(*(int *)((int)this + 0x98) * 2);
    }
    else if (iVar4 == 0xc) {
      iVar4 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0xac)) + -0x20;
      uVar3 = F_00ce93e0(iVar4);
      iVar4 = iVar4 + uVar3;
      uVar3 = (*(uint *)((int)this + 0x94) / (uint)*(ushort *)(iVar4 + 0xc)) *
              (uint)*(ushort *)(iVar4 + 0x12);
    }
    else if (iVar4 == 0xb) {
      iVar4 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0xac)) + -0x20;
      uVar3 = F_00ce93e0(iVar4);
      uVar3 = *(uint *)(uVar3 + 0x18 + iVar4);
    }
    else {
      uVar3 = uVar3 >> 1;
    }
    if (uVar3 < param_2) {
      return uVar3;
    }
    (*(int *)(gen_frame + 0x10)) = uVar3 - param_2;
  }
  if (*(int *)((int)this + 0xa0) != 0xf) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                      (*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x0)),0);
    return uVar3;
  }
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x24)) = *(uint * PTR32 *)((int)this + 0x24) + 1;
  (*(uint *)(gen_frame + 0x28)) = **(uint * PTR32 *)((int)this + 0x24) >> 2;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                    (*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint * PTR32 *)(gen_frame + 0x24)));
  return uVar3;
}

/* ref: FUN_00cf5910 */
byte F_00cf5910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  iVar5 = *(int *)((int)this + 0xa0);
  if ((((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 0xd)) && (iVar5 != 6)) {
    if (iVar5 == 0xc) {
      uVar3 = F_00ce93e0(param_2);
      uVar4 = *(ushort *)(uVar3 + 0x10 + param_2) + 0x12;
      if ((uVar4 < 0x33) && (*(short *)(uVar3 + param_2 + 0x14) == 7)) {
        F_00c46aa0(param_1,uVar3 + param_2,uVar4);
        return 1;
      }
    }
    else if (iVar5 == 0xf) {
      puVar6 = (undefined4 *)(param_2 + 0x20);
      puVar7 = param_1;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      return 1;
    }
    return 0;
  }
  *(undefined2 *)param_1 = 1;
  sVar1 = *(short *)((int)this + 0x98);
  *(short *)((int)param_1 + 2) = sVar1;
  param_1[1] = *(undefined4 *)((int)this + 0x9c);
  uVar2 = sVar1 * 2;
  *(ushort *)(param_1 + 3) = uVar2;
  *(undefined2 *)((int)param_1 + 0xe) = 0x10;
  param_1[2] = (uint)uVar2 * param_1[1];
  *(undefined2 *)(param_1 + 4) = 0;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf14 */
uint F_00cf59e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf59e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x3c) != 0) {
    *(undefined4 *)(this + 0xd4) = 4;
    return in_EAX;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf15 */
uint F_00cf5a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf5a00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0xd4) != 2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  *(undefined4 *)(this + 0xd4) = 5;
  *(undefined4 *)(this + 0xdc) = 0;
  if (*(uint *)(this + 0xa4) < *(uint *)(this + 0xa8)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return *(uint *)(this + 0xa8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf16 */
uint F_00cf5a40(unsigned int gen_a0)
{
  GEN_ENTER(0xcf5a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  *(undefined4 *)(this + 0xd4) = 6;
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0,0);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x58))))(*(int * PTR32 *)(this + 0xc));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf17 */
unsigned int F_00cf5a70(unsigned int gen_a0)
{
  GEN_ENTER(0xcf5a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0xd4) == 2) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc),0x20,0);
    *(undefined4 *)(this + 0xd4) = 3;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf18 */
uint F_00cf5aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf5aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0xd4) == 3) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf19 */
uint F_00cf5ac0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcf5ac0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = F_00c51673((double)param_2);
  if (iVar2 != 0) {
    param_2 = (float)(float10)1;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1,(undefined4)gen_fl2bits(param_2),0);
  }
  *(float *)(param_1 + 0x44) = param_2;
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf30 */
uint F_00cf5b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined * pVVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar1 = (int *)F_00d2ccd0();
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x124))(piVar1);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      iVar3 = F_00c51673((double)param_1[iVar5]);
      if (iVar3 != 0) {
        param_1[iVar5] = (float)(float10)1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  uVar4 = uVar2;
  if (((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0xd4) != 6)) && (*(int *)(this + 0x98) == 1))
  {
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)*param_1)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)param_1[1] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[2])));
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)param_1[3] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[4])));
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)param_1[5] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[6])));
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)param_1[7] * (float10)*(float *)(this + 0x14))));
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
                      (*(int * PTR32 *)(this + 0xc),*(undefined4 *)(this + 0x10),1,uVar2,&(*(float *)(gen_frame + 0x8)),0);
    (*(uint *)(gen_frame + 0x0)) = 0;
    if (this[0x80] != (undefined1)0x0) {
      pVVar6 = this + 0x60;
      do {
        fVar7 = (float10)*(float *)(pVVar6 + 0x10);
        (*(float *)(gen_frame + 0x8)) = (float)(fVar7 * (float10)*param_1);
        (*(float *)(gen_frame + 0xc)) = (float)((float10)param_1[1] * fVar7);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)param_1[2] * fVar7);
        (*(float *)(gen_frame + 0x14)) = (float)((float10)param_1[3] * fVar7);
        (*(float *)(gen_frame + 0x18)) = (float)((float10)param_1[4] * fVar7);
        (*(float *)(gen_frame + 0x1c)) = (float)((float10)param_1[5] * fVar7);
        (*(float *)(gen_frame + 0x20)) = (float)((float10)param_1[6] * fVar7);
        (*(float *)(gen_frame + 0x24)) = (float)(fVar7 * (float10)param_1[7]);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
                  (*(int * PTR32 *)(this + 0xc),*(undefined4 *)pVVar6,1,uVar2,&(*(float *)(gen_frame + 0x8)),0);
        uVar4 = (*(uint *)(gen_frame + 0x0)) + 1;
        pVVar6 = pVVar6 + 4;
        (*(uint *)(gen_frame + 0x0)) = uVar4;
      } while ((int)uVar4 < (int)(uint)(byte)this[0x80]);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf45 */
uint F_00cf5c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  int iVar1;
  int * piVar2;
  float fVar3;
  float * pfVar4;
  float * pfVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(int *)(gen_frame + 0x10)) = param_2;
  if (0 < param_1) {
    iVar9 = 0;
    do {
      iVar1 = F_00c51673((double)*(float *)((*(int *)(gen_frame + 0x10)) + iVar9 * 4));
      if (iVar1 != 0) {
        *(float *)((*(int *)(gen_frame + 0x10)) + iVar9 * 4) = (float)(float10)1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_1);
  }
  piVar2 = (int *)F_00d2ccd0();
  fVar3 = gen_bits2f(((code *)*(gen_code32 *)(*piVar2 + 0x124))(piVar2));
  iVar9 = (*(int *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  if (((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0xd4) != 6)) &&
     (*(int *)(this + 0x98) == param_1)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
              (*(int * PTR32 *)(this + 0xc),*(undefined4 *)(this + 0x10),param_1,
               (undefined4)gen_fl2bits(fVar3),(*(int *)(gen_frame + 0x10)),0);
  }
  ((float *)(gen_frame + 0x118))[0] = (float)(float10)0;
  ((float *)(gen_frame + 0x18))[0] = (float)(float10)0;
  ((float *)(gen_frame + 0x118))[1] = 0.0;
  ((float *)(gen_frame + 0x118))[2] = 0.0;
  ((float *)(gen_frame + 0x118))[3] = 0.0;
  ((float *)(gen_frame + 0x118))[4] = 0.0;
  ((float *)(gen_frame + 0x118))[5] = 0.0;
  ((float *)(gen_frame + 0x118))[6] = 0.0;
  ((float *)(gen_frame + 0x118))[7] = 0.0;
  F_00c48350(((float *)(gen_frame + 0x18)) + 1,0,0xfc);
  iVar1 = 0;
  iVar10 = iVar9;
  if (3 < param_1 * 8) {
    (*(int *)(gen_frame + 0xc)) = (int)((float *)(gen_frame + 0x18)) - iVar9;
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(param_1 * 8 + -3);
    pfVar5 = (float *)(iVar9 + 8);
    iVar8 = iVar1;
    do {
      iVar1 = iVar8 + 4;
      pfVar4 = pfVar5 + 4;
      (&(*(float *)(gen_frame + 0x8)))[iVar1] = ((float)GEN_TOF(((float10)pfVar5[-2] * (float10)*(float *)(this + 0x90))));
      (&(*(float *)(gen_frame + 0x8)))[iVar8 + 5] = ((float)GEN_TOF(((float10)pfVar5[-1] * (float10)*(float *)(this + 0x90))));
      *(float *)((*(int *)(gen_frame + 0xc)) + -0x10 + (int)pfVar4) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x90) * (float10)*pfVar5)));
      *((float *)GEN_TOP((((int)&(*(int *)(gen_frame + 0xc)) - iVar9) + (int)pfVar4))) =
           ((float)GEN_TOF(((float10)pfVar5[1] * (float10)*(float *)(this + 0x90))));
      pfVar5 = pfVar4;
      iVar8 = iVar1;
      iVar10 = (*(int *)(gen_frame + 0x10));
    } while (iVar1 < (int)gen_fl2bits((*(float *)(gen_frame + 0x14))));
  }
  while (iVar1 < param_1 * 8) {
    iVar9 = iVar1 * 4;
    iVar1 = iVar1 + 1;
    (&(*(float *)(gen_frame + 0x14)))[iVar1] =
         ((float)GEN_TOF(((float10)*(float *)(iVar10 + iVar9) * (float10)*(float *)(this + 0x90))));
  }
  if (0 < param_1) {
    pfVar5 = ((float *)(gen_frame + 0x18)) + 1;
    iVar9 = 0;
    do {
      iVar1 = iVar9 + 1;
      (*(float *)(gen_frame + 0x14)) = (float)((float10)pfVar5[-1] + (float10)((float *)(gen_frame + 0x108))[(int)(iVar9 + 4)]);
      fVar3 = ((float)GEN_TOF(((float10)(float)((float10)pfVar5[-1] + (float10)((float *)(gen_frame + 0x108))[(int)(iVar9 + 4)]) +
                     (float10)*pfVar5)));
      (*(float *)(gen_frame + 0x14)) = fVar3;
      fVar3 = (float)((float10)fVar3 + (float10)pfVar5[1]);
      (*(float *)(gen_frame + 0x14)) = fVar3;
      fVar3 = (float)((float10)fVar3 + (float10)pfVar5[2]);
      (*(float *)(gen_frame + 0x14)) = fVar3;
      fVar3 = (float)((float10)fVar3 + (float10)pfVar5[3]);
      (*(float *)(gen_frame + 0x14)) = fVar3;
      fVar3 = (float)((float10)fVar3 + (float10)pfVar5[4]);
      (*(float *)(gen_frame + 0x14)) = fVar3;
      fVar3 = (float)((float10)fVar3 + (float10)pfVar5[5]);
      (*(float *)(gen_frame + 0x14)) = fVar3;
      ((float *)(gen_frame + 0x108))[(int)(iVar9 + 4)] = (float)((float10)fVar3 + (float10)pfVar5[6]);
      pfVar5 = pfVar5 + 8;
      iVar9 = iVar1;
    } while (iVar1 < param_1);
  }
  fVar11 = (float10)*(double *)&REFG(double, 0x10948e0);
  uVar6 = 0;
  if (3 < param_1) {
    uVar7 = uVar6;
    do {
      uVar6 = uVar7 + 4;
      ((float *)(gen_frame + 0x108))[(int)(uVar6)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar7 + 4)] * fVar11);
      ((float *)(gen_frame + 0x108))[(int)(uVar7 + 5)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar7 + 5)] * fVar11);
      ((float *)(gen_frame + 0x108))[(int)(uVar7 + 6)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar7 + 6)] * fVar11);
      ((float *)(gen_frame + 0x108))[(int)(uVar7 + 7)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar7 + 7)] * fVar11);
      uVar7 = uVar6;
    } while ((int)uVar6 < param_1 + -3);
  }
  for (; (int)uVar6 < param_1; uVar6 = uVar6 + 1) {
    ((float *)(gen_frame + 0x108))[(int)(uVar6 + 4)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar6 + 4)] * fVar11);
  }
  if ((*(int *)(this + 0x88) != 0) && (*(int *)(this + 0x84) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
              (*(int * PTR32 *)(this + 0xc),*(int *)(this + 0x88),param_1,
               (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x8))),((float *)(gen_frame + 0x18)),0);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
                      (*(int * PTR32 *)(this + 0xc),*(undefined4 *)(this + 0x84),param_1,1,((float *)(gen_frame + 0x108)) + 4,0
                      );
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf31 */
unsigned int F_00cf69d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf69d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf32 */
uint F_00cf69e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcf69e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0xd4) != 6)) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,(undefined4)gen_fl2bits(param_2),0)));
  }
  *(float *)(param_1 + 0x48) = param_2;
  return (uint)piVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf33 */
unsigned int F_00cf6a20(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcf6a20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0xe8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe8) + 0xc))))((undefined4)gen_fl2bits(param_2),0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe8) + 4))))(*(int * PTR32 *)(param_1 + 0xe8),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf35 */
uint F_00cf6aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf36 */
uint F_00cf6ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf6ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf37 */
unsigned int F_00cf6ac0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcf6ac0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x40) = param_2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf11 */
unsigned int F_00cf6ad0(void)
{
  GEN_ENTER(0xcf6ad0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00cf6ae0 */
uint F_00cf6ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(uint *)((int)this + 0x240) = param_1;
  uVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    uVar1 = param_1 + 0x14;
    *(undefined2 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(uint *)((int)this + 0x244) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00cf6b20 */
byte F_00cf6b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf6b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte local_5;
  
  if (*(int *)((int)this + 0x240) == 0) {
    return 0;
  }
  sVar1 = *(short *)((int)this + 0x248);
  bVar4 = 0;
  uVar3 = param_1 / *(uint *)((int)this + 0x98) >> 1;
  *(int *)((int)this + 0x24c) = *(int *)((int)this + 0x24c) + uVar3;
  if (-1 < sVar1) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x244) + sVar1 * 4)));
    if ((*(int *)((int)this + 0x24c) < iVar2) &&
       ((int)(uVar3 / 2) <= iVar2 - *(int *)((int)this + 0x24c))) {
      local_5 = 0;
      bVar4 = local_5;
    }
    else {
      *(short *)((int)this + 0x248) = sVar1 + 1;
      bVar4 = 1;
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x240) + 0x10))) <= (int)(short)(sVar1 + 1)) {
        *(undefined2 *)((int)this + 0x248) = 0xffff;
      }
    }
  }
  if ((char)param_2 != '\0') {
    *(undefined4 *)((int)this + 0x24c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x240) + 8)));
    *(undefined2 *)((int)this + 0x248) = 0;
    if (**(int * PTR32 *)((int)this + 0x244) <= *(int *)((int)this + 0x24c)) {
      while (*(short *)((int)this + 0x248) = *(short *)((int)this + 0x248) + 1,
            (int)*(short *)((int)this + 0x248) < *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 0x10)))) {
        if (*(int *)((int)this + 0x24c) <
            *((int *)GEN_TOP((*(int *)((int)this + 0x244) + *(short *)((int)this + 0x248) * 4)))) {
          return bVar4;
        }
      }
      *(undefined2 *)((int)this + 0x248) = 0xffff;
    }
  }
  return bVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf42 */
uint F_00cf6c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf6c30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x34))))
                      (*(int * PTR32 *)(this + 0x18),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf43 */
uint F_00cf6c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf6c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x40))))
                      (*(int * PTR32 *)(this + 0x18),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf13 */
byte F_00cf6c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char * pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_10;
  
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(this + 0xc) != 0) {
    iVar5 = *(int *)(this + 0xa0);
    if (iVar5 == 1) {
      fVar6 = (float10)param_1;
      if (param_1 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar7 = (float10)*(int *)(this + 0x9c);
      if (*(int *)(this + 0x9c) < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar3 = *(uint *)(this + 0xa8);
      local_10 = (uint)(longlong)TRUNC(fVar7 * (fVar6 * (float10)REFG(double, 0x1091858)));
      uVar4 = local_10;
      if ((uVar3 != 0) && (uVar3 < local_10)) {
        do {
          uVar4 = uVar4 + (*(int *)(this + 0xa4) - uVar3);
        } while (uVar3 < uVar4);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc),0,0);
    }
    else {
      if (iVar5 != 0xc) {
        if (iVar5 == 6) {
          iVar5 = (*(int *)(this + 0x1c) - *(int *)(this + 0xac)) + -0x20;
          uVar4 = F_00ce93e0(iVar5);
          pcVar1 = (char *)(iVar5 + uVar4);
          if ((*pcVar1 != '\0') && (*(uint *)(pcVar1 + 0x10) != 0)) {
            bVar2 = pcVar1[1];
            fVar6 = (float10)param_1;
            uVar4 = *(uint *)(pcVar1 + 0x10) >> 2;
            if (param_1 < 0) {
              fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            iVar5 = (int)((fVar6 * (float10)REFG(double, 0x1091858)) / (float10)*(float *)(pcVar1 + 0xc));
            if ((int)uVar4 <= iVar5) {
              if (*(uint *)(this + 0xa8) <= *(uint *)(this + 0xa4)) {
                return 0;
              }
              do {
                iVar5 = iVar5 + (*(int *)(pcVar1 + 0x18) - uVar4);
              } while ((int)uVar4 <= iVar5);
            }
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc),0,0);
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x30))))
                      (*(int * PTR32 *)(this + 0x18),*(undefined4 *)(pcVar1 + iVar5 * 4 + (uint)bVar2),1);
            return 1;
          }
        }
        return 0;
      }
      iVar5 = (*(int *)(this + 0x1c) - *(int *)(this + 0xac)) + -0x20;
      uVar4 = F_00ce93e0(iVar5);
      fVar6 = (float10)param_1;
      iVar5 = iVar5 + uVar4;
      if (param_1 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar7 = (float10)*(int *)(iVar5 + 4);
      if (*(int *)(iVar5 + 4) < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      local_10 = (uint)(longlong)TRUNC(fVar7 * (fVar6 * (float10)REFG(double, 0x1091858)));
      uVar4 = local_10;
      if ((*(uint *)(this + 0x94) / (uint)*(ushort *)(iVar5 + 0xc)) *
          (uint)*(ushort *)(iVar5 + 0x12) <= local_10) {
        uVar3 = *(uint *)(this + 0xa8);
        if (uVar3 <= *(uint *)(this + 0xa4)) {
          return 0;
        }
        if (uVar3 < local_10) {
          do {
            uVar4 = uVar4 + (*(uint *)(this + 0xa4) - uVar3);
          } while (uVar3 < uVar4);
        }
      }
      uVar4 = uVar4 - uVar4 % (uint)*(ushort *)(iVar5 + 0x12);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc),0,0);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x58))))(*(int * PTR32 *)(this + 0xc));
    F_00cf5770(this,*(undefined4 *)(this + 0x1c),uVar4);
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf48 */
uint F_00cf6ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf6ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x54))))
                      (*(int * PTR32 *)(this + 0x18),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cf6ee0 */
unsigned int F_00cf6ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf6ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(char *)(param_1 + 0x2a) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 100))))(*(int * PTR32 *)(param_1 + 8),((undefined1 *)(gen_frame + 0xc)));
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2c) + 0x38))))(*(int * PTR32 *)(param_1 + 0x2c));
    if (((((char)uVar1 == '\0') && (*(int *)(param_1 + 0xd4) == 2)) &&
        (*(int *)(param_1 + 0xd0) != 3)) && (*(int *)(param_1 + 0xd0) != 6)) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x50))))(*(int * PTR32 *)(param_1 + 8),0x20,0);
      *(uint *)(param_1 + 0xd4) = ((int)uVar1 < 0) - 1 & 3;
    }
  }
  return 0;
}

/* ref: FUN_00cf6f50 */
unsigned int F_00cf6f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(char *)(param_1 + 0x2a) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 100))))(*(int * PTR32 *)(param_1 + 8),((undefined1 *)(gen_frame + 0xc)));
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2c) + 0x38))))(*(int * PTR32 *)(param_1 + 0x2c));
    if (((((char)uVar1 != '\0') && (*(int *)(param_1 + 0xd4) == 3)) &&
        (*(int *)(param_1 + 0xd0) != 3)) && (*(int *)(param_1 + 0xd0) != 6)) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x4c))))(*(int * PTR32 *)(param_1 + 8),0,0);
      *(uint *)(param_1 + 0xd4) = ((int)uVar1 < 0) - 1 & 2;
    }
  }
  return 0;
}

/* ref: FUN_00cf6fc0 */
uint F_00cf6fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)(param_1 + 0xd0) = 6;
  return param_1;
}

/* ref: FUN_00cf7000 */
unsigned int F_00cf7000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf7000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00cf7010 */
uint F_00cf7010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf7010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -4) + 0x40))))(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00cf7030 */
uint F_00cf7030(unsigned int gen_a0)
{
  GEN_ENTER(0xcf7030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ecx;
  int local_8;
  
  fVar1 = (float10)1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x40) = (float)fVar1;
  *(float *)((int)this + 0x44) = (float)fVar1;
  *(float *)((int)this + 0x48) = (float)fVar1;
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *(float *)((int)this + 0x4c) = (float)fVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  *(float *)((int)this + 0x50) = (float)fVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x54) = (float)fVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *(undefined1 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  in_ecx = (int)this + 0xf0;
  local_8 = 3;
  do {
    F_00cea700(in_ecx);
    uVar2 = REFG(undefined4, 0x134fe14);
    in_ecx = in_ecx + 0x54;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined2 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar2,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xe4) = uVar3;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),0x1a8,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xec) = uVar3;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf40 */
uint F_00cf7190(unsigned int gen_a0)
{
  GEN_ENTER(0xcf7190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  F_00cf5630(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xa4);
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  uVar2 = (*pcVar1)(this);
  *(undefined4 *)(this + 0x34) = 0;
  this[0x5c] = (undefined1)0x0;
  this[0x38] = (undefined1)0x0;
  return uVar2;
}

/* ref: FUN_00cf71c0 */
uint F_00cf71c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf71c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  int * piVar5;
  
  if (((*param_2 == '\x02') &&
      (bVar2 = param_2[1], iVar3 = *(int *)(param_2 + 0x10),
      *(int *)(param_2 + (uint)bVar2 + iVar3) != 0x5367674f)) &&
     (uVar4 = 0, *(int *)(param_2 + 0x14) != 0)) {
    do {
      pbVar1 = ((byte *)GEN_TOP((uVar4 + (int)(param_2 + (uint)bVar2 + iVar3))));
      *pbVar1 = *pbVar1 ^ param_2[2];
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_2 + 0x14));
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x68,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)F_00cfed50(this_00,param_1,*(undefined4 *)((int)this + 0x94),
                                 *(int *)((int)this + 0x98) << 0xb,4,0,param_2,0);
  }
  *(int * PTR32 *)((int)this + 0x18) = piVar5;
  if (*(int *)((int)this + 0xa8) != 0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0x2c))
              (piVar5,*(undefined4 *)((int)this + 0xa4),*(int *)((int)this + 0xa8));
  }
  uVar4 = F_00ce9400(param_3);
  *(uint *)((int)this + 0x240) = uVar4;
  if ((uVar4 != 0) && (*(int *)(uVar4 + 0x10) != 0)) {
    uVar4 = uVar4 + 0x14;
    *(undefined2 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(uint *)((int)this + 0x244) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00cf72c0 */
unsigned int F_00cf72c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf72c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)((int)this + 0x38) != '\x01') {
    piVar1 = *(int * PTR32 *)((int)this + 0x18);
    (*(int * PTR32 *)(gen_frame + 0x34)) = piVar1;
    if (piVar1 != (int *)0x0) {
      if (*(int *)((int)this + 0x34) == 3) {
        (*(int *)(gen_frame + 0x24)) = 0;
        (*(int *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(uint *)(gen_frame + 0x4)) = 0;
        (*(uint *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        (*(uint *)(gen_frame + 0x38)) = 0;
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
        if (uVar3 != 0) {
          while (piVar1 = (*(int * PTR32 *)(gen_frame + 0x34)), uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x24))((*(int * PTR32 *)(gen_frame + 0x34))),
                (char)uVar3 == '\0') {
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,&(*(int *)(gen_frame + 0x24)));
            if (uVar3 == 0xffffffff) {
              F_00cde750(*((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))));
              break;
            }
            if (((*(int *)(gen_frame + 0x24)) == 0) || ((*(int *)(gen_frame + 0x28)) == 0)) break;
            (*(uint *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x24));
            (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)*(undefined4 *)((int)this + 0x18);
            (*(uint *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x28));
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            bVar2 = F_00cf6b20(this,(*(int *)(gen_frame + 0x28)),(uint)(uVar3 == 3));
            if (bVar2 == 1) {
              (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x1;
            }
            if (0 < (int)uVar3) {
              (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
            }
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                              (*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x0)),0);
            if ((int)uVar3 < 0) break;
            uVar5 = (*(uint *)(gen_frame + 0x38)) + 1;
            (*(uint *)(gen_frame + 0x38)) = uVar5;
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x1c))))(*(int * PTR32 *)((int)this + 0x18));
            if (uVar3 <= uVar5) {
              *(undefined1 *)((int)this + 0x38) = 1;
              return 0;
            }
          }
        }
      }
      else {
        uVar5 = 0;
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
        if (uVar3 != 0) {
          while (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x24))))
                                   (*(int * PTR32 *)((int)this + 0x18)), (char)uVar3 == '\0') {
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x20))))(*(int * PTR32 *)((int)this + 0x18));
            (*(undefined4 *)(gen_frame + 0x0)) = 0;
            (*(uint *)(gen_frame + 0x4)) = 0;
            (*(uint *)(gen_frame + 0x8)) = 0;
            (*(undefined4 *)(gen_frame + 0xc)) = 0;
            (*(undefined4 *)(gen_frame + 0x10)) = 0;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
            uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x14))))(*(int * PTR32 *)((int)this + 0x18));
            (*(uint *)(gen_frame + 0x4)) = uVar4;
            if (uVar4 == 0) break;
            uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))
                              (*(int * PTR32 *)((int)this + 0x18),uVar5);
            piVar1 = *(int * PTR32 *)((int)this + 0x18);
            (*(uint *)(gen_frame + 0x8)) = uVar4;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x20)) = piVar1;
            if (uVar3 != 0) {
              (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
              ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
            }
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0xc))))
                              (*(int * PTR32 *)((int)this + 0x18),uVar5);
            bVar2 = F_00cf6b20(this,(*(uint *)(gen_frame + 0x4)),uVar3 & 0xff);
            if (bVar2 == 1) {
              (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x1;
            }
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                      (*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x0)),0);
            uVar5 = uVar5 + 1;
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x1c))))(*(int * PTR32 *)((int)this + 0x18));
            if (uVar3 <= uVar5) {
              *(undefined1 *)((int)this + 0x38) = 1;
              return 0;
            }
          }
        }
      }
      *(undefined1 *)((int)this + 0x38) = 1;
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf12 */
uint F_00cf74f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf74f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xd4);
  if ((uVar1 == 1) || (uVar1 == 3)) {
    F_00cf72c0(this);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x4c))))(*(int * PTR32 *)(this + 0xc),0,0);
    *(undefined4 *)(this + 0xd4) = 2;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf29 */
unsigned int F_00cf7530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf7530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00cf9bb0(this + 0x144,param_1 + 0x54);
  F_00cf9bb0(this + 0xf0,param_1);
  F_00cf9bb0(this + 0x198,param_1 + 0xa8);
  F_00cf9bb0(this + 0x1ec,param_1 + 0xfc);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf46 */
float10 F_00cf7580(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf7580u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float fVar1;
  
  *(float *)((int)param_1 + 0x4c) = param_2;
  *(undefined4 *)((int)param_1 + 0x58) = param_5;
  *(float *)((int)param_1 + 0x50) = param_3;
  *(float *)((int)param_1 + 0x54) = param_4;
  fVar1 = F_00cf5f80(param_1);
  return (float10)fVar1;
}

/* ref: FUN_00cf7890 */
unsigned int F_00cf7890(unsigned int gen_a0)
{
  GEN_ENTER(0xcf7890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if ((((*(int *)((int)this + 0xc) != 0) && (*(int *)((int)this + 0x18) != 0)) &&
      (iVar4 = *(int *)((int)this + 0xd4), iVar4 != 6)) &&
     ((*(int *)((int)this + 0x34) != 2 || ((iVar4 != 4 && (iVar4 != 5)))))) {
    lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xb8);
    if (*(char *)((int)this + 0xd0) != '\0') {
      gen_imp_EnterCriticalSection(lpCriticalSection);
    }
    iVar4 = *(int *)((int)this + 0xb4);
    *(undefined4 *)((int)this + 0xb4) = 0;
    (*(int *)(gen_frame + 0x38)) = iVar4;
    if (*(char *)((int)this + 0xd0) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    if (*(int *)((int)this + 0x34) == 3) {
      piVar1 = *(int * PTR32 *)((int)this + 0x18);
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(uint *)(gen_frame + 0x8)) = 0;
      (*(uint *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(uint *)(gen_frame + 0x24)) = 0;
      if ((*(int *)(gen_frame + 0x38)) != 0) {
        while (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1), (char)uVar3 == '\0') {
          uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,&(*(int *)(gen_frame + 0x28)));
          if (uVar3 == 0xffffffff) {
            F_00cde750(*((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))));
            break;
          }
          if (((*(int *)(gen_frame + 0x28)) == 0) || ((*(int *)(gen_frame + 0x2c)) == 0)) break;
          (*(uint *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x2c));
          (*(uint *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x28));
          if (uVar3 == 1) {
            (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
          }
          bVar2 = F_00cf6b20(this,(*(int *)(gen_frame + 0x2c)),(uint)(uVar3 == 3));
          (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + -1;
          (*(uint *)(gen_frame + 0x24)) = (uint)(bVar2 == 1);
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                            (*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x4)),0);
          if ((int)uVar3 < 0) break;
          if ((*(int *)(gen_frame + 0x38)) == 0) {
            return 0;
          }
        }
        iVar4 = (*(int *)(gen_frame + 0x38));
        if ((*(int *)(gen_frame + 0x38)) != 0) {
          if (*(char *)((int)this + 0xd0) != '\0') {
            gen_imp_EnterCriticalSection(lpCriticalSection);
          }
          *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) + iVar4;
          if (*(char *)((int)this + 0xd0) != '\0') {
            gen_imp_LeaveCriticalSection(lpCriticalSection);
            return 0;
          }
        }
      }
    }
    else if (iVar4 != 0) {
      while (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x24))))(*(int * PTR32 *)((int)this + 0x18))
            , (char)uVar3 == '\0') {
        (*(uint *)(gen_frame + 0x8)) = 0;
        (*(uint *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(uint *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x20))))(*(int * PTR32 *)((int)this + 0x18));
        if ((uVar3 != 0) || (*(int *)((int)this + 0xd4) == 5)) {
          (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x28))))(*(int * PTR32 *)((int)this + 0x18),1);
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x58))))(*(int * PTR32 *)((int)this + 0x18));
          if ((char)uVar3 != '\0') {
            F_00cd87f0(*(undefined * PTR32 *)((int)this + 8),0);
            return 0;
          }
        }
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x14))))(*(int * PTR32 *)((int)this + 0x18));
        if ((int)uVar3 < 0) {
          return 0;
        }
        (*(uint *)(gen_frame + 0x8)) = uVar3;
        if (uVar3 == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x30))))
                    (*(int * PTR32 *)((int)this + 0xc),(undefined4)gen_fl2bits((float)(float10)0),0);
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x10))))(*(int * PTR32 *)((int)this + 0x18));
          (*(uint *)(gen_frame + 0x8)) = uVar3;
          *(undefined1 *)((int)this + 0x5c) = 1;
        }
        else if (*(char *)((int)this + 0x5c) != '\0') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,*(undefined4 *)((int)this + 0x44));
          *(undefined1 *)((int)this + 0x5c) = 0;
        }
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x18))))(*(int * PTR32 *)((int)this + 0x18));
        iVar4 = uVar3 - 1;
        if (iVar4 < 0) {
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x1c))))(*(int * PTR32 *)((int)this + 0x18));
          iVar4 = uVar3 - 1;
        }
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18),iVar4);
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0xc))))(*(int * PTR32 *)((int)this + 0x18),iVar4)
        ;
        bVar2 = F_00cf6b20(this,(*(uint *)(gen_frame + 0x8)),uVar3 & 0xff);
        if (bVar2 == 1) {
          (*(uint *)(gen_frame + 0x24)) = 1;
        }
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))(*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x4)),0);
        iVar4 = (*(int *)(gen_frame + 0x38)) + -1;
        (*(int *)(gen_frame + 0x38)) = iVar4;
        if (iVar4 == 0) {
          return 0;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00cf7b70 */
unsigned int F_00cf7b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf7b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)(param_1 + 0xcc) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb4));
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  if (*(char *)(param_1 + 0xcc) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb4));
  }
  return 0;
}

/* ref: FUN_00cf7ed0 */
unsigned int F_00cf7ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf7ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int * PTR32 *)((int)this + 0xe8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  if (piVar2 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  F_00cf5630(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xa4);
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  (*pcVar1)(this);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  if (*(int *)((int)this + 0xe4) != 0) {
    F_00406810(*(int *)((int)this + 0xe4));
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  if (*(int *)((int)this + 0xec) != 0) {
    F_00406810(*(int *)((int)this + 0xec));
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  iVar3 = 3;
  iVar4 = (int)this + 0x244;
  do {
    F_00cccb40(iVar4 + -0x30);
    F_00cccb40(iVar4 + -0x54);
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + -0x54;
  } while (-1 < iVar3);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131164));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf28 */
unsigned int F_00cf8730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00cf9bb0((undefined *)((int)param_1 + 0x54),this + 0x144);
  F_00cf9bb0(param_1,this + 0xf0);
  F_00cf9bb0((undefined *)((int)param_1 + 0xa8),this + 0x198);
  F_00cf9bb0((undefined *)((int)param_1 + 0xfc),this + 0x1ec);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf10 */
unsigned int F_00cf8790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  if (*(int *)(this + 0xd4) == 5) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 100))))(*(int * PTR32 *)(this + 0xc),((undefined1 *)(gen_frame + 0xc)));
    if ((*(int *)(gen_frame + 0x10)) == 0) {
      *(undefined4 *)(this + 0xd4) = 6;
      F_00cf7890(this);
      return 0;
    }
    if (1000 < *(uint *)(this + 0xdc)) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
      F_00cf7890(this);
      return 0;
    }
    F_00cf93f0(this,param_1);
    if (*(int *)(this + 0xd8) == 2) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x4c))))(*(int * PTR32 *)(this + 0xc),0,0);
      *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + 1;
      F_00cf7890(this);
      return 0;
    }
  }
  else {
    F_00cf93f0(this,param_1);
  }
  F_00cf7890(this);
  return 0;
}

/* ref: FUN_00cf8850 */
uint F_00cf8850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf8850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf6 */
uint F_00cf88f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf88f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pVVar5;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
  if (((char)uVar2 == '\0') && (*(int *)(this + 0xd4) != 1)) {
    return uVar2;
  }
  F_00cf5630(this);
  puVar4 = param_1;
  pVVar5 = this + 0x94;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pVVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pVVar5 = pVVar5 + 4;
  }
  *(int *)(this + 0x1c) = *(int *)(this + 0xac) + 0x20 + (int)param_1;
  iVar3 = *(int *)(this + 0xa0);
  if ((((iVar3 != 0xd) && (iVar3 != 5)) && ((iVar3 != 0xb || (*(uint *)(this + 0x94) < 0x7ff801))))
     && ((*(uint *)(this + 0x94) < 0x80000001 && (iVar3 != -1)))) {
    bVar1 = F_00cf7fa0(this,GEN_TOF(param_1),param_2);
    if (bVar1 == 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this);
      return uVar2 & 0xffffff00;
    }
    if (*(int *)(this + 0xa0) == 6) {
      puVar4 = param_1;
      uVar2 = F_00ce93e0(param_1);
      F_00cf71c0(this,*(int *)(this + 0xac) + 0x20 + (int)param_1,uVar2 + (int)param_1,puVar4);
      *(undefined4 *)(this + 0x34) = 1;
      *(undefined4 *)(this + 0xd4) = 1;
      return 1;
    }
    F_00cf5770(this,*(int *)(this + 0xac) + 0x20 + (int)param_1,0);
    *(undefined4 *)(this + 0x34) = 1;
    *(undefined4 *)(this + 0xd4) = 1;
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this);
  return uVar2 & 0xffffff00;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf9 */
byte F_00cf8a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf8a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * this_00;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined * pVVar7;
  
  F_00cf5630(this);
  this_00 = (int *)F_00cd7cc0(*(undefined * PTR32 *)(this + 8));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*this_00 + 0x14))(this_00,0)));
  puVar6 = puVar2;
  pVVar7 = this + 0x94;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pVVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pVVar7 = pVVar7 + 4;
  }
  iVar5 = *(int *)(this + 0xa0);
  if (iVar5 != -1) {
    if (iVar5 == 6) {
      *(undefined1 *)(this_00 + 0x33) = 1;
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this_00 + 0x2d));
      this_00[0x2b] = this_00[0x29];
      this_00[0x2c] = this_00[0x2a];
      if ((char)this_00[0x33] != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this_00 + 0x2d));
      }
      pvVar3 = (undefined *)F_00cf9ab0(this_00 + 0x29,0x38,4);
      if (pvVar3 == (undefined *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00cff5e0(pvVar3,this_00);
      }
      *(uint *)(this + 0x18) = uVar4;
      uVar4 = F_00ce9400(puVar2);
      *(uint *)(this + 0x240) = uVar4;
      if ((uVar4 != 0) && (*(int *)(uVar4 + 0x10) != 0)) {
        *(undefined2 *)(this + 0x248) = 0;
        *(undefined4 *)(this + 0x24c) = 0;
        *(uint *)(this + 0x244) = uVar4 + 0x14;
      }
    }
    else {
      if (iVar5 != 0xc) goto LAB_00cf8b73;
      F_00cf9b60(this_00);
      pvVar3 = (undefined *)F_00cf9ab0(this_00 + 0x29,0x18,4);
      if (pvVar3 == (undefined *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00cff240(pvVar3,this_00);
      }
      *(uint *)(this + 0x18) = uVar4;
    }
    bVar1 = F_00cf7fa0(this,GEN_TOF(puVar2),param_2);
    if (bVar1 != 0) {
      *(undefined4 *)(this + 0x34) = 3;
      *(undefined4 *)(this + 0xd4) = 1;
      return 1;
    }
  }
LAB_00cf8b73: ;
  ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf7 */
byte F_00cf8b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcf8b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("false","[sd][driver][voice]SetStreamAudioData is not use","XA2\\VoiceXA2.cpp",
                  0x180,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetStreamAudioData");
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf20 */
uint F_00cf8be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf8be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130c7d),"XA2\\VoiceXA2.cpp",
                    0x50e,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetModulationMode");
  }
  *(uint *)(this + (uint)(byte)param_1 * 0x54 + 0xec) = param_2 & 0xff;
  return param_2 & 0xff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf21 */
uint F_00cf8c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130c7e),"XA2\\VoiceXA2.cpp",
                    0x519,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::DisableModulation");
  }
  uVar1 = F_00cea740(this + (uint)(byte)param_1 * 0x54 + 0x9c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf22 */
float10 F_00cf8cc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf8cc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float10 fVar1;
  
  if (4 < (byte)param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130c7f),"XA2\\VoiceXA2.cpp",
                    0x524,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetModulationDepth");
  }
  fVar1 = F_00ceaa80((uint)(byte)param_2 * 0x54 + 0x9c + param_1,param_3,param_4);
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf23 */
float10 F_00cf8d40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xcf8d40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * this;
  float10 fVar1;
  float10 fVar2;
  
  if (4 < (byte)param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cc2),"XA2\\VoiceXA2.cpp",
                    0x52f,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::AddModulationDepth");
  }
  this = (undefined *)((uint)(byte)param_2 * 0x54 + 0x9c + param_1);
  fVar1 = (float10)F_00ceaab0(this);
  param_3 = (float)(fVar1 + (float10)param_3);
  fVar1 = (float10)1;
  fVar2 = (float10)param_3;
  if ((fVar1 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 != fVar1)) ||
     (fVar1 = (float10)0, fVar2 <= fVar1 && ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(fVar2)) && fVar1 != fVar2))) {
    param_3 = (float)fVar1;
  }
  fVar1 = F_00ceaa80(this,param_3,0);
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf24 */
unsigned int F_00cf8df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cc3),"XA2\\VoiceXA2.cpp",
                    0x541,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::GetModulationDepth");
  }
  F_00ceaab0(this + (uint)(byte)param_1 * 0x54 + 0x9c);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf25 */
double F_00cf8e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf8e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  float10 fVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cf5),"XA2\\VoiceXA2.cpp",
                    0x54c,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetModulationSpeed");
  }
  fVar1 = F_00ceaac0(this + (uint)(byte)param_1 * 0x54 + 0x9c,param_2,param_3);
  return (double)fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf26 */
double F_00cf8ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf8ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  float10 fVar2;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cf6),"XA2\\VoiceXA2.cpp",
                    0x557,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::AddModulationSpeed");
  }
  uVar1 = F_00ceab20(this + (uint)(byte)param_1 * 0x54 + 0x9c);
  fVar2 = F_00ceaac0(this + (uint)(byte)param_1 * 0x54 + 0x9c,param_2 + uVar1,0);
  return (double)fVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf27 */
uint F_00cf8f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cf7),"XA2\\VoiceXA2.cpp",
                    0x566,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::GetModulationSpeed");
  }
  uVar1 = F_00ceab20(this + (uint)(byte)param_1 * 0x54 + 0x9c);
  return uVar1;
}

