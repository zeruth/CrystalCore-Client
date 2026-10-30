#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00e3d190 */
GEN_LIB GEN_FRAME uint F_00e3d190(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e3d1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d1b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d1d0 */
GEN_LIB GEN_FRAME byte F_00e3d1d0(void)
{
  GEN_ENTER(0xe3d1d0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e3d1f0 */
GEN_LIB GEN_FRAME uint F_00e3d1f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e3d240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d240(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * piVar1;
  
  piVar1 = param_1 - 0x10;
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)piVar1 + 4))) - 0x10))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(param_1);
  if ((param_2 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d280(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[39])REFP(0x1157734));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e3d2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d2b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e3d2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d2c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e3d2f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3d2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3d2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(this GEN_EDX_FWD);
  uVar1 = F_00479ae0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3d310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3d310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte * pbVar1;
  byte * pbVar2;
  
  pbVar1 = ((byte *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x20)))));
  if (pbVar1 == ((byte *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  if (pbVar1 < pbVar1 + **((int * PTR32 *)GEN_TOP(((int)this + 0x30)))) {
    return (uint)*pbVar1;
  }
  if ((((*((byte *)GEN_TOP(((int)this + 0x40))) & 4) == 0) &&
      (pbVar2 = ((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))))), pbVar2 != ((byte *)GEN_TOP(0x0)))) &&
     ((pbVar1 < pbVar2 || (pbVar1 < *((byte * PTR32 *)GEN_TOP(((int)this + 0x3c))))))) {
    if (*((byte * PTR32 *)GEN_TOP(((int)this + 0x3c))) < pbVar2) {
      *((byte * PTR32 *)GEN_TOP(((int)this + 0x3c))) = pbVar2;
    }
    **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
    return (uint)*((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)))));
  }
  return 0xffffffff;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe3d380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
  if ((uVar2 != 0) && (*((uint *)GEN_TOP(((int)this + 0x3c))) < uVar2)) {
    *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar2;
  }
  uVar2 = param_3;
  uVar6 = param_2;
  if ((((byte)param_5 & 1) == 0) || (iVar7 = **((int * PTR32 *)GEN_TOP(((int)this + 0x20))), iVar7 == 0)) {
    if ((((byte)param_5 & 2) == 0) || (uVar3 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24))), uVar3 == 0)) {
      if (param_2 == 0 && param_3 == 0) goto LAB_00e3d51d;
    }
    else {
      if (param_4 == 2) {
        uVar2 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        uVar6 = param_2 + uVar2;
        uVar2 = param_3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
      }
      else if (param_4 == 1) {
        uVar2 = uVar3 - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        uVar6 = param_2 + uVar2;
        uVar2 = param_3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
      }
      else if (param_4 != 0) {
        uVar2 = REFG(undefined4, 0x1118764);
        uVar6 = REFG(undefined4, 0x1118760);
      }
      if (-1 < (int)uVar2) {
        uVar4 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        iVar7 = (int)uVar4 >> 0x1f;
        if (((int)uVar2 <= iVar7) && (((int)uVar2 < iVar7 || (uVar6 <= uVar4)))) {
          iVar7 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) - uVar3) + uVar6;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) - iVar7;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + iVar7;
          goto LAB_00e3d51d;
        }
      }
    }
  }
  else {
    if (param_4 == 2) {
      uVar2 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
      uVar6 = param_2 + uVar2;
      uVar2 = param_3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
    }
    else if (param_4 == 1) {
      if (((byte)param_5 & 2) == 0) {
        uVar2 = iVar7 - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        uVar6 = param_2 + uVar2;
        uVar2 = param_3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
      }
      else {
LAB_00e3d3f1: ;
        uVar2 = REFG(undefined4, 0x1118764);
        uVar6 = REFG(undefined4, 0x1118760);
      }
    }
    else if (param_4 != 0) goto LAB_00e3d3f1;
    if (-1 < (int)uVar2) {
      uVar3 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
      iVar5 = (int)uVar3 >> 0x1f;
      if (((int)uVar2 <= iVar5) && (((int)uVar2 < iVar5 || (uVar6 <= uVar3)))) {
        iVar7 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) - iVar7) + uVar6;
        **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) - iVar7;
        **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + iVar7;
        if ((((byte)param_5 & 2) != 0) && (iVar7 = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))), iVar7 != 0)) {
          iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
          iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
          **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = iVar1;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (iVar5 + iVar7) - iVar1;
        }
        goto LAB_00e3d51d;
      }
    }
  }
  uVar2 = REFG(undefined4, 0x1118764);
  uVar6 = REFG(undefined4, 0x1118760);
LAB_00e3d51d: ;
  *param_1 = uVar6;
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(uint param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe3d540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(uint param_8 = (uint)gen_a8;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = param_4 + param_2;
  uVar7 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
  uVar6 = ((int)param_4 >> 0x1f) + param_3 + (uint)CARRY4(param_4,param_2);
  if ((uVar7 != 0) && (*((uint *)GEN_TOP(((int)this + 0x3c))) < uVar7)) {
    *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar7;
  }
  if ((uVar8 != REFG(undefined4, 0x1118760)) || (uVar7 = uVar6, uVar9 = uVar8, uVar6 != REFG(undefined4, 0x1118764))) {
    uVar7 = REFG(undefined4, 0x1118764);
    uVar9 = REFG(undefined4, 0x1118760);
    if (((param_8 & 1) == 0) || (**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) == 0)) {
      if ((((param_8 & 2) != 0) && (uVar3 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24))), uVar3 != 0)) &&
         (-1 < (int)uVar6)) {
        uVar4 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        iVar5 = (int)uVar4 >> 0x1f;
        if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar8 <= uVar4)))) {
          iVar5 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) - uVar3) + uVar8;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) - iVar5;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + iVar5;
          uVar7 = uVar6;
          uVar9 = uVar8;
        }
      }
    }
    else if (-1 < (int)uVar6) {
      uVar3 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
      iVar5 = (int)uVar3 >> 0x1f;
      if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar8 <= uVar3)))) {
        iVar5 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x20)))) + uVar8;
        **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) - iVar5;
        **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + iVar5;
        uVar7 = uVar6;
        uVar9 = uVar8;
        if (((param_8 & 2) != 0) && (iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))), iVar5 != 0)) {
          iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
          iVar2 = **((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
          **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = iVar1;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (iVar2 + iVar5) - iVar1;
        }
      }
    }
  }
  *param_1 = uVar9;
  param_1[1] = uVar7;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int * piVar2;
  undefined1 * puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 8) != 0) {
    uVar7 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
    if ((uVar7 != 0) && (uVar4 = *((uint *)GEN_TOP(((int)this + 0x3c))), uVar7 < uVar4)) {
      iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x24))) = uVar4;
      **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (iVar1 + uVar7) - uVar4;
    }
  }
  if (param_1 == 0xffffffff) {
    return 0;
  }
  uVar7 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
  if ((uVar7 != 0) && (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34))), uVar7 < *piVar2 + uVar7)) {
    *piVar2 = *piVar2 - 1;
    goto LAB_00e3d7ed;
  }
  if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 2) != 0) {
    return 0xffffffff;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) + uVar7;
  }
  uVar4 = uVar7 >> 1;
  if (uVar4 < 0x20) {
    uVar4 = 0x20;
  }
  else if (uVar4 == 0) {
    return 0xffffffff;
  }
  do {
    if (uVar7 <= 0x7fffffff - uVar4) break;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  if (uVar4 == 0) {
    return 0xffffffff;
  }
  iVar5 = uVar4 + uVar7;
  uVar4 = F_00a15a50(iVar5);
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if ((uVar7 == 0) || (F_00c46aa0(uVar4,iVar1,uVar7), uVar7 == 0)) {
    *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar4;
    **((uint * PTR32 *)GEN_TOP(((int)this + 0x14))) = uVar4;
    **((uint * PTR32 *)GEN_TOP(((int)this + 0x24))) = uVar4;
    **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = iVar5;
    if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 4) != 0) goto LAB_00e3d79d;
    **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = uVar4;
    **((uint * PTR32 *)GEN_TOP(((int)this + 0x20))) = uVar4;
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))) = 1;
  }
  else {
    *((int *)GEN_TOP(((int)this + 0x3c))) = *((int *)GEN_TOP(((int)this + 0x3c))) + (uVar4 - iVar1);
    iVar6 = **((int * PTR32 *)GEN_TOP(((int)this + 0x24)));
    **((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x14))) + (uVar4 - iVar1);
    iVar6 = (iVar6 - iVar1) + uVar4;
    **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = iVar6;
    **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (uVar4 - iVar6) + iVar5;
    if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 4) == 0) {
      iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x24)));
      iVar6 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) - iVar1) + uVar4;
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = uVar4;
      **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = iVar6;
      **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = (iVar5 - iVar6) + 1;
    }
    else {
LAB_00e3d79d: ;
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = uVar4;
      **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))) = 0;
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x30))) = uVar4;
    }
  }
  if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 1) != 0) {
    F_00406ad0(iVar1);
  }
  *((uint *)GEN_TOP(((int)this + 0x40))) = *((uint *)GEN_TOP(((int)this + 0x40))) | 1;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) - 1;
LAB_00e3d7ed: ;
  puVar3 = ((undefined1 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x24)))));
  **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = (int)(puVar3 + 1);
  *puVar3 = (char)param_1;
  return param_1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x20)));
  if ((uVar1 != 0) && (**((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) < uVar1)) {
    if ((param_1 == 0xffffffff) ||
       (((char)param_1 == *((char *)GEN_TOP((uVar1 - 1))) || ((*((byte *)GEN_TOP(((int)this + 0x40))) & 2) == 0)))) {
      **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 1;
      **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) - 1;
      if (param_1 != 0xffffffff) {
        *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))))) = (char)param_1;
        return param_1;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d8a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(param_1 GEN_EDX_FWD);
  F_00479ae0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e3d8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d8f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d900(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d910 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3d910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e3d930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d930(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d940 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3d940(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3d950 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3d950(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3d960 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3d960(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3d980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e3d9b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3d9b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe3d9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e3da00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3da00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3da00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3da10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3da10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3da10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((int * PTR32 *)GEN_TOP(((int)this + 0x40))) = param_3;
  piVar1 = param_3;
  if ((param_2 != 0) && (piVar1 = ((int *)GEN_TOP(((uint)param_3 & 6))), (char)piVar1 != '\x06')) {
    if ((param_2 != 0) && (piVar3 = ((int *)GEN_TOP(F_004069f0(param_2))), piVar3 == ((int *)GEN_TOP(0x0)))) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    F_00c46aa0(piVar3,param_1,param_2);
    piVar1 = ((int *)GEN_TOP(((int)piVar3 + param_2)));
    *((int * PTR32 *)GEN_TOP(((int)this + 0x3c))) = piVar1;
    if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 4) == 0) {
      **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = piVar3;
      **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))) = piVar3;
      **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = param_2;
    }
    if ((*((uint *)GEN_TOP(((int)this + 0x40))) & 2) == 0) {
      piVar2 = piVar1;
      if ((*((uint *)GEN_TOP(((int)this + 0x40))) & 0x10) == 0) {
        piVar2 = piVar3;
      }
      **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = piVar3;
      **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = piVar2;
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
      *piVar1 = (int)piVar3 + (param_2 - (int)piVar2);
      if (**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) == 0) {
        **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = piVar3;
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
        *piVar1 = 0;
        **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))) = piVar3;
      }
    }
    *((uint *)GEN_TOP(((int)this + 0x40))) = *((uint *)GEN_TOP(((int)this + 0x40))) | 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00e3daf0 */
GEN_LIB GEN_FRAME uint F_00e3daf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3daf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e3db10 */
GEN_LIB GEN_FRAME uint F_00e3db10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3db10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3db40 */
GEN_LIB GEN_FRAME uint F_00e3db40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3db40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3db70 */
GEN_LIB GEN_FRAME uint F_00e3db70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3db70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3dba0 */
GEN_LIB GEN_FRAME uint F_00e3dba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3dba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3dc00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3dc00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3dc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e3dc20 */
GEN_LIB GEN_FRAME uint F_00e3dc20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe3dc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e3dc30 */
GEN_LIB GEN_FRAME uint F_00e3dc30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3dc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3dc40 */
GEN_LIB GEN_FRAME uint F_00e3dc40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3dc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e3dc90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3dc90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3dc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e3dca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3dca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3dca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e3dcc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3dcc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3dcc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e3dcd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3dcd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3dcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e3dce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3dce0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3dce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e3dcf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3dcf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3dcf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e3dd40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3dd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3dd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e3dd60 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3dd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3dd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_004069f0(param_1 * 4);
    if (uVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  *(uint *)this = uVar1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1 + param_1 * 4;
  return 1;
}

/* ref: FUN_00e3ddf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3ddf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3ddf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  F_00479880(param_1 GEN_EDX_FWD);
  uVar2 = 0;
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  if ((param_3 & 1) == 0) {
    uVar2 = 4;
  }
  if ((param_3 & 2) == 0) {
    uVar2 = uVar2 | 2;
  }
  if ((param_3 & 8) != 0) {
    uVar2 = uVar2 | 8;
  }
  if ((param_3 & 4) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_2));
  }
  F_00e3da10(param_1 GEN_EDX_ARG,puVar1,param_2[4],uVar2);
  return (uint)param_1;
}

/* ref: FUN_00e3de80 */
GEN_LIB GEN_FRAME uint F_00e3de80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe3de80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (*piVar1 == *param_4) break;
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_3);
  }
  *param_1 = piVar1;
  return (uint)param_1;
}

/* ref: FUN_00e3deb0 */
GEN_LIB GEN_FRAME uint F_00e3deb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3deb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e3ded0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3ded0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3ded0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e3df10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3df10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3df10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * piVar1;
  uint extraout_EAX = 0;
  
  piVar1 = ((undefined *)GEN_TOP(((int)this + 0x58)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*(int *)this + 4))) - 0x58))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
  F_00479ae0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*(int *)this + 4))) - 0x58))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)piVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(piVar1);
  return extraout_EAX;
}

/* ref: FUN_00e3df60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3df60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3df60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * piVar1;
  
  piVar1 = param_1 - 0x58;
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)piVar1 + 4))) - 0x58))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  *(undefined * PTR32 * PTR32 *)(param_1 - 0x48) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(param_1 - 0x48 GEN_EDX_FWD);
  F_00479ae0(param_1 - 0x48 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)(param_1 - 0x58) + 4))) - 0x58))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(param_1);
  if ((param_2 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00e3dfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3dfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3dfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3e030 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3e030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e3e060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3e060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3e0c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3e0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e3e0f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3e0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3e150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e3e180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3e180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3e1e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3e1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e3e210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3e210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar3 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e3e2c0 */
GEN_LIB GEN_FRAME unsigned int F_00e3e2c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3e2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00e3e2f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3e2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e3e320 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3e320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00e3e350 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3e350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e3e380 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3e380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00e3e3b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3e3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e3e3e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3e3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00e3e410 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3e410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e3e440 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3e440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00e3e470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3e470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00e3e210(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00e3e210(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00e3e4e0 */
GEN_LIB GEN_FRAME unsigned int F_00e3e4e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3e4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00e3e510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3e510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1157818);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  F_00483f60(*((int *)GEN_TOP((*(int *)this + 4))) + (int)this GEN_EDX_FWD,param_1,(undefined1)param_2);
  return (uint)this;
}

/* ref: FUN_00e3e560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e560(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3e560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e3c720(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e3e590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3e590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e3e470(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e3e470(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00e3e600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3e600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * this_00;
  uint uVar1;
  undefined4 * puVar2;
  
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x1157820);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x10)));
  F_00483f60(*((int *)GEN_TOP((*(int *)this + 4))) + (int)this GEN_EDX_FWD,this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  F_00479880(this_00 GEN_EDX_ARG);
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  uVar1 = 0;
  if ((param_2 & 2) == 0) {
    uVar1 = 2;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = ((undefined4 *)GEN_TOP(*param_1));
  }
  F_00e3da10(this_00 GEN_EDX_ARG,puVar2,param_1[4],uVar1);
  return (uint)this;
}

/* ref: FUN_00e3e6b0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e3e6b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3e6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00e3e6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3e6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  byte bVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  bVar2 = F_00e3dd60(this GEN_EDX_FWD,param_1[1] - *param_1 >> 2);
  if (bVar2 != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(param_1[1]));
    puVar4 = *(undefined4 * PTR32 *)this;
    for (puVar3 = ((undefined4 *)GEN_TOP(*param_1)); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = *puVar3;
      }
      puVar4 = puVar4 + 1;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  }
  return (uint)this;
}

/* ref: FUN_00e3e750 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e3e750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3e750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_FWD,param_2);
    if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,param_2,*((int *)GEN_TOP(((int)this + 0x350))));
    }
  }
  return;
}

/* ref: FUN_00e3e790 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e3e790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3e790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))(param_1 GEN_EDX_FWD,*param_2);
    if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,*param_2,*((int *)GEN_TOP(((int)this + 0x350))));
    }
  }
  return;
}

/* ref: FUN_00e3e7d0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3e7d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 8))) != 0;
}

/* ref: FUN_00e3e7e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3e7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3e7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x28))) = (int)_Var2;
  uVar3 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x30))) = uVar3;
  uVar3 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x38))) = uVar3;
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0xe0,0,0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00e47780(this_00 GEN_EDX_ARG,param_1);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x340))) = param_2;
  }
  return *((int *)GEN_TOP(((int)this + 8))) != 0;
}

/* ref: FUN_00e3e850 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3e850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return 1;
}

/* ref: FUN_00e3e870 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3e870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 8))) == 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 8))) + 0xc0)));
  if (((iVar1 != 3) && (iVar1 != 4)) && (iVar1 != 5)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00e3e8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3e8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3e8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((uVar4 != 0) && (*((undefined4 *)GEN_TOP((uVar4 + 0xc0))) = 5, (*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0)))) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x1c)));
    iVar1 = (int)this + 0x1d0;
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((uint)*((byte *)GEN_TOP(((int)this + 0x1c)))));
    (*pcVar2)(piVar3,iVar1);
    if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x20))))(piVar3 GEN_EDX_FWD,iVar1,*((int *)GEN_TOP(((int)this + 0x350))));
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))(piVar3 GEN_EDX_ARG,iVar1,&(*(int * PTR32 *)&gen_args[0]));
    if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,iVar1,&(*(int * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)this + 0x350))));
    }
  }
  return uVar4;
}

/* ref: FUN_00e3e940 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e3e940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3e940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  if (((*((int *)GEN_TOP(((int)this + 8))) != 0) && (param_1 != ((int *)GEN_TOP(0x0)))) &&
     (*((int *)GEN_TOP(((int)this + 0x350))) != 0)) {
    iVar1 = (int)this + 0x1e0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_FWD,iVar1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x3c))))(param_1 GEN_EDX_ARG,iVar1,(int)this + 0x1f0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x40))))
              (param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))),iVar1,(int)this + 0x1f0,(int)this + 0x200);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x34))))
              (param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))),iVar1,(int)this + 0x1f0,(int)this + 0x200,
               (int)this + 0x210,(int)this + 0x224);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x44))))
              (param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))),iVar1,(int)this + 0x1f0,(int)this + 0x224,
               *((undefined4 *)GEN_TOP(((int)this + 0x350))));
  }
  return;
}

/* ref: FUN_00e3ea00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e3ea00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ea00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if (((*((int *)GEN_TOP(((int)this + 8))) != 0) && (param_1 != ((int *)GEN_TOP(0x0)))) &&
     (*((int *)GEN_TOP(((int)this + 0x350))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_FWD,(int)this + 0x1f0,*((int *)GEN_TOP(((int)this + 0x350))));
  }
  return;
}

/* ref: FUN_00e3ea40 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e3ea40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ea40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) && (param_1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_FWD,(int)this + 0x23c);
    if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x60))))(param_1 GEN_EDX_ARG,(int)this + 0x23c,*((int *)GEN_TOP(((int)this + 0x350))));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x54))))(param_1 GEN_EDX_ARG,0);
    if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x58))))(param_1 GEN_EDX_ARG,0,*((int *)GEN_TOP(((int)this + 0x350))));
    }
  }
  return;
}

/* ref: FUN_00e3eab0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e3eab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3eab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) && (param_2 != ((int *)GEN_TOP(0x0)))) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 100))))(param_2 GEN_EDX_FWD,(int)this + 0x22c);
      if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x68))))(param_2 GEN_EDX_ARG,(int)this + 0x22c,*((int *)GEN_TOP(((int)this + 0x350))));
        return;
      }
      break;
    case 2: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x6c))))(param_2 GEN_EDX_ARG,(int)this + 0x22c);
      if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x70))))(param_2 GEN_EDX_ARG,(int)this + 0x22c,*((int *)GEN_TOP(((int)this + 0x350))));
        return;
      }
      break;
    case 3: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x80))))(param_2 GEN_EDX_ARG,(int)this + 0x22c);
      if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x84))))(param_2 GEN_EDX_ARG,(int)this + 0x22c,*((int *)GEN_TOP(((int)this + 0x350))));
        return;
      }
      break;
    case 4: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x78))))(param_2 GEN_EDX_ARG,(int)this + 0x22c);
      if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x7c))))(param_2 GEN_EDX_ARG,(int)this + 0x22c,*((int *)GEN_TOP(((int)this + 0x350))));
        return;
      }
      break;
    case 5: ;
      break;
    case 6: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x88))))(param_2 GEN_EDX_ARG,(int)this + 0x1e0,(int)this + 0x210);
      if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x8c))))
                  (param_2 GEN_EDX_ARG,(int)this + 0x1e0,(int)this + 0x210,*((int *)GEN_TOP(((int)this + 0x350))));
      }
      break;
    case 7: ;
      if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x74))))(param_2 GEN_EDX_ARG,(int)this + 0x22c,*((int *)GEN_TOP(((int)this + 0x350))));
        return;
      }
      break;
    default: ;
      goto switchD_00e3eada_default;
    }
  }
switchD_00e3eada_default: ;
  return;
}

/* ref: FUN_00e3ec70 */
GEN_LIB GEN_FRAME uint F_00e3ec70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ec70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((*((int *)GEN_TOP((param_2 + 0x10))) != 3) && (*((int *)GEN_TOP((param_2 + 0x10))) != 5)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00e3ec90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3ec90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe3ec90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  F_00e3c0b0(param_1 GEN_EDX_FWD);
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 4) = param_4;
  *param_1 = (*(undefined * PTR32 (*)[40])REFP(0x115785c));
  param_1[2] = param_3;
  param_1[3] = param_5;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x11))) = 0;
  return (uint)param_1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::OperationStep::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3ecd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ecd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  uVar1 = 0;
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))
                      (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,*(int *)(this + 0xc));
  }
  return uVar1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::OperationStep::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3ed00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ed00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  uVar1 = 0;
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 8))))
                      (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,*(int *)(this + 0xc));
  }
  return uVar1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::InitOperationStep::vf39 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3ed30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ed30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  if (this[0x10] != (undefined1)0x0) {
    this[0x11] = (undefined1)0x1;
    bVar1 = F_00e3e7e0(param_1 GEN_EDX_FWD,this + 0x14,*(undefined4 *)(this + 8));
    return bVar1;
  }
  bVar1 = F_00e3e7e0(param_1 GEN_EDX_ARG,this + 0x14,this);
  return bVar1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::InitOperationStep::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3ed70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ed70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x11))) = 1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::LobbyLoginOperationStep::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3ed80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3ed80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x11))) = 1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::ServiceLoginOperationStep::vf14 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3ed90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ed90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x11))) = 1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::GameLoginOperationStep::vf21 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3eda0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3eda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x11))) = 1;
  return;
}

/* ref: FUN_00e3edb0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3edb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3edb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return;
}

/* ref: FUN_00e3edd0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3edd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3edd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00e3ee00 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3ee00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ee00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
  return 1;
}

/* ref: FUN_00e3ee30 */
GEN_LIB GEN_NOFRAME byte GEN_STDCALL F_00e3ee30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe3ee30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 1;
}

/* ref: FUN_00e3ee40 */
GEN_LIB GEN_FRAME byte GEN_STDCALL F_00e3ee40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe3ee40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return ~*((byte *)GEN_TOP((param_1 + 8))) & 1;
}

/* ref: FUN_00e3ee60 */
GEN_LIB GEN_FRAME uint F_00e3ee60(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ee60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc0, 0, 4);
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x5c)) = 6;
    ((undefined4 *)(gen_frame + 0x54))[0] = 0x7d2;
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x115782c)),REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(undefined2 *)(gen_frame + 0xb4)) = 0x32c9;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x54)));
    if (param_2 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x54)),param_2);
    }
    uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00e3ef10 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e3ef10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ef10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  undefined * this_00;
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x28))) = (int)_Var2;
  uVar3 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x30))) = uVar3;
  uVar3 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x38))) = uVar3;
  F_00e37370(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  (*(undefined2 *)(gen_frame + 0x58)) = 0;
  F_00e36790(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  *((undefined1 *)GEN_TOP(((int)this + 0xac))) = (undefined1)(*(undefined2 *)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP(((int)this + 0xad))) = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x58)) + 1));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0xe0,0,0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00e47780(this_00 GEN_EDX_ARG,param_1);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  }
  return *((int *)GEN_TOP(((int)this + 8))) != 0;
}

/* ref: FUN_00e3efd0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e3efd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe3efd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  byte bVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)param_1 + 0x28))) = (int)_Var2;
  uVar3 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)param_1 + 0x30))) = uVar3;
  uVar3 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)param_1 + 0x38))) = uVar3;
  F_00e37370(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
  (*(undefined1 *)(gen_frame + 0x59)) = param_4;
  (*(undefined1 *)(gen_frame + 0x58)) = param_3;
  F_00e36790(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xad))) = (*(undefined1 *)(gen_frame + 0x59));
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xac))) = (*(undefined1 *)(gen_frame + 0x58));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  bVar1 = F_00e3e7e0(param_1 GEN_EDX_ARG,((undefined *)GEN_TOP(((int)param_1 + 0x54))),param_5);
  return bVar1;
}

/* ref: FUN_00e3f120 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3f120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3f120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x58, 8);
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48);
  if ((*((byte *)GEN_TOP((param_1 + 8))) & 0xfe) == 0) {
    F_00e3c860(((undefined *)GEN_TOP(((int)this + 0x210))) GEN_EDX_FWD);
    F_00e3bef0(((undefined *)GEN_TOP(((int)this + 0x210))) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_1 + 0x10))));
  }
  (*(byte *)(gen_frame + 0x7)) = 0;
  if (*((char *)GEN_TOP((param_1 + 9))) != '\0') {
    do {
      uVar2 = (uint)(*(byte *)(gen_frame + 0x7));
      iVar1 = param_1 + 0x20 + uVar2 * 0x38;
      if (*((int *)GEN_TOP((param_1 + 0x28 + uVar2 * 0x38))) != 0 ||
          *((int *)GEN_TOP((param_1 + 0x2c + uVar2 * 0x38))) != 0) {
        F_00e3bde0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar1);
        F_00e3ca10(((undefined *)GEN_TOP(((int)this + 0x210))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
        (*(int * PTR32 *)(gen_frame + 0x0)) = *((int * PTR32 *)GEN_TOP(((int)this + 0x1e0)));
        uVar2 = *((int *)GEN_TOP(((int)this + 0x1e4))) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x0))) >> 2;
        uVar3 = 0;
        if (uVar2 != 0) {
          do {
            if ((*((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))) == *((int *)GEN_TOP((iVar1 + 8)))) &&
               (*((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0xc))) == *((int *)GEN_TOP((iVar1 + 0xc))))) {
              F_00e3bde0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar1);
              F_00e3c8a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1e0))) + uVar3 * 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
              break;
            }
            (*(int * PTR32 *)(gen_frame + 0x0)) = (*(int * PTR32 *)(gen_frame + 0x0)) + 1;
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar2);
        }
      }
      (*(byte *)(gen_frame + 0x7)) = (*(byte *)(gen_frame + 0x7)) + 1;
    } while ((*(byte *)(gen_frame + 0x7)) < *((byte *)GEN_TOP((param_1 + 9))));
  }
  return ~*((byte *)GEN_TOP((param_1 + 8))) & 1;
}

/* ref: FUN_00e3f250 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3f250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3f250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x2e0, 0);
  undefined4 * puVar1;
  code * pcVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x2cc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2d0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x1157cc0));
  F_00e42cc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,param_1);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
  }
  pcVar2 = (code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  uVar3 = (*pcVar2)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar3;
  F_00efc530(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG);
  F_00e5bc00(((undefined1 *)(gen_frame + 0x1e8)) GEN_EDX_ARG);
  F_00f36370(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG);
  F_00e75880(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00e3f320 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3f320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3f320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*((int *)GEN_TOP(((int)this + 0x1b8))) != 0) {
    piVar2 = ((int *)GEN_TOP(F_00e45140(&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1b4))),
                                 *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1b4))),((code *)REFP(0xe3ec70)))));
    iVar1 = *piVar2;
    if (iVar1 != *((int *)GEN_TOP(((int)this + 0x1b4)))) {
      piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x10)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,1);
      }
      F_00e44700(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),iVar1);
    }
    if (*((int *)GEN_TOP(((int)this + 0x1b8))) != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3f390 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3f390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3f390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * this_00;
  
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) &&
     (((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc0))), iVar1 == 3 || (iVar1 == 4)) ||
      (iVar1 == 5)))) {
    bVar3 = F_00e3f320(this GEN_EDX_FWD);
    if (bVar3 == 0) {
      *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
      uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
      this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0xe0,0,0)));
      if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
        this_00 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        F_00e4f8f0(this_00 GEN_EDX_ARG,this,uVar2,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x348))));
        *this_00 = (*(undefined * PTR32 (*)[5])REFP(0x1157900));
        F_0042cbc0(this_00 + 0xe GEN_EDX_ARG,param_1);
        F_0042cbc0(this_00 + 0x23 GEN_EDX_ARG,param_1 + 0x54);
      }
      (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = this_00;
      F_00e45a40(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x8)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3f450 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e3f450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3f450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x168, 8, 4);
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined * this_00;
  __time64_t _Var7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x160)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x164));
  (*(uint *)(gen_frame + 0xb4)) = param_2;
  (*(undefined4 *)(gen_frame + 0xac)) = param_3;
  _Var7 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  if ((900 < (uint)((int)_Var7 - *((int *)GEN_TOP(((int)this + 0x28))))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,param_1);
  F_0042cbc0(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x10c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb8)));
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x104))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xb8)) GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  if (((iVar2 == 0) ||
      (((iVar3 = *((int *)GEN_TOP((iVar2 + 0xc0))), iVar3 != 3 && (iVar3 != 4)) && (iVar3 != 5)))) &&
     (*((int *)GEN_TOP(((int)this + 0x44))) == *((int *)GEN_TOP(((int)this + 0x48))))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
    uVar6 = F_004069f0(0x70);
    if (uVar6 == 0) {
      (*(uint *)(gen_frame + 0xb4)) = 0;
    }
    else {
      uVar6 = F_00e42df0(uVar6 GEN_EDX_ARG,(int)this + 0x54,(*(undefined4 *)(gen_frame + 0xac)),0,*((undefined4 *)GEN_TOP(((int)this + 0x350))));
      (*(uint *)(gen_frame + 0xb4)) = uVar6;
    }
    F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xb4)));
    uVar6 = F_004069f0(0xbc);
    if (uVar6 == 0) {
      (*(uint *)(gen_frame + 0xb4)) = 0;
    }
    else {
      uVar6 = F_00e42e60(uVar6 GEN_EDX_ARG,((undefined *)GEN_TOP(((int)this + 0xb0))),(*(undefined4 *)(gen_frame + 0xac)),1,
                           *((undefined4 *)GEN_TOP(((int)this + 0x350))));
      (*(uint *)(gen_frame + 0xb4)) = uVar6;
    }
    F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xb4)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))) + 0x9c))))
                      (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))) GEN_EDX_ARG,this);
    return (byte)uVar6;
  }
  if ((iVar2 != 0) &&
     (((iVar2 = *((int *)GEN_TOP((iVar2 + 0xc0))), iVar2 == 3 || (iVar2 == 4)) || (iVar2 == 5)))) {
    bVar5 = F_00e3f320(this GEN_EDX_ARG);
    if (bVar5 == 0) {
      *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
      uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
      this_00 = ((undefined *)GEN_TOP(F_00406b90(0xe0,0,0)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        uVar6 = 0;
      }
      else {
        uVar6 = F_00e41810(this_00 GEN_EDX_ARG,this,uVar4,(*(undefined4 *)(gen_frame + 0xac)),*((undefined4 *)GEN_TOP(((int)this + 0x348))),param_1,
                             (*(uint *)(gen_frame + 0xb4)));
      }
      (*(uint *)(gen_frame + 0xb4)) = uVar6;
      (*(undefined4 *)(gen_frame + 0xb0)) = uVar4;
      F_00e45a40(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),&(*(undefined4 *)(gen_frame + 0xb0)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3f6d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3f6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3f6d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) &&
     (((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc0))), iVar1 == 3 || (iVar1 == 4)) ||
      (iVar1 == 5)))) {
    bVar3 = F_00e3f320(this GEN_EDX_FWD);
    if (bVar3 == 0) {
      *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
      uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *param_1;
      puVar4 = ((undefined4 *)GEN_TOP(F_00406b90(0x38,0,0)));
      if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar4 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        F_00e4f8f0(puVar4 GEN_EDX_ARG,this,uVar2,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x348))));
        *puVar4 = (*(undefined * PTR32 (*)[5])REFP(0x1157948));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar4;
      F_00e45a40(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x8)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3f790 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3f790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3f790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  __time64_t _Var6;
  
  _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  if ((900 < (uint)((int)_Var6 - *((int *)GEN_TOP(((int)this + 0x28))))) &&
     (puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))), puVar5 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x1a8))) = uVar4;
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) &&
     (((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc0))), iVar1 == 3 || (iVar1 == 4)) ||
      (iVar1 == 5)))) {
    bVar3 = F_00e3f6d0(this GEN_EDX_ARG,((uint *)GEN_TOP(((int)this + 0x1a8))),(*(undefined4 * PTR32 *)&gen_args[1]));
    return bVar3;
  }
  if (*((int *)GEN_TOP(((int)this + 0x44))) != *((int *)GEN_TOP(((int)this + 0x48)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  uVar4 = F_004069f0(0x70);
  uVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
  if (uVar4 == 0) {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(F_00e42df0(uVar4 GEN_EDX_ARG,(int)this + 0x54,(*(undefined4 * PTR32 *)&gen_args[1]),0,
                                  *((undefined4 *)GEN_TOP(((int)this + 0x350))))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]));
  uVar4 = F_004069f0(0xbc);
  if (uVar4 == 0) {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(F_00e42e60(uVar4 GEN_EDX_ARG,(int)this + 0xb0,uVar2,0,*((undefined4 *)GEN_TOP(((int)this + 0x350))))))
    ;
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]));
  uVar4 = F_004069f0(0x68);
  if (uVar4 == 0) {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(F_00e42ee0(uVar4 GEN_EDX_ARG,(int)this + 0x158,uVar2,0,*((undefined4 *)GEN_TOP(((int)this + 0x350)))
                                 )));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]));
  puVar5 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x350)));
    F_00e3c0b0(puVar5 GEN_EDX_ARG);
    puVar5[1] = 3;
    puVar5[2] = (*(undefined4 * PTR32 *)&gen_args[1]);
    puVar5[3] = uVar2;
    *(undefined2 *)(puVar5 + 4) = 1;
    *puVar5 = (*(undefined * PTR32 (*)[40])REFP(0x1157b74));
    puVar5[5] = *((undefined4 *)GEN_TOP(((int)this + 0x1a8)));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))) + 0x9c))))
                    (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))) GEN_EDX_ARG,this);
  return (byte)uVar4;
}

/* ref: FUN_00e3f950 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e3f950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3f950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0xd0, 0, 4);
  undefined4 uVar1;
  byte bVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc));
  (*(undefined1 *)(gen_frame + 0x8)) = *param_1;
  (*(undefined2 *)(gen_frame + 0xa)) = *(undefined2 *)(param_1 + 2);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_1 + 0xc);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 0x10);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x1157960));
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_FWD,param_1 + 0x18);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,param_1 + 0x6c);
  bVar2 = F_00e3f790(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  return bVar2;
}

/* ref: FUN_00e3fa10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3fa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3fa10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * this_00;
  
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) &&
     (((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc0))), iVar1 == 3 || (iVar1 == 4)) ||
      (iVar1 == 5)))) {
    bVar3 = F_00e3f320(this GEN_EDX_FWD);
    if (bVar3 == 0) {
      *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
      uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
      this_00 = ((undefined4 *)GEN_TOP(F_00406b90(0x40,0,0)));
      if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
        this_00 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        F_00e4f8f0(this_00 GEN_EDX_ARG,this,uVar2,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x34c))));
        *this_00 = (*(undefined * PTR32 (*)[5])REFP(0x1157930));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = this_00;
      F_00e45a40(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x8)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3fab0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3fab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3fab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  __time64_t _Var6;
  
  _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  if ((900 < (uint)((int)_Var6 - *((int *)GEN_TOP(((int)this + 0x28))))) &&
     (puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))), puVar5 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = (*(undefined4 * PTR32 *)&gen_args[0]);
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) &&
     (((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc0))), iVar1 == 3 || (iVar1 == 4)) ||
      (iVar1 == 5)))) {
    bVar3 = F_00e3fa10(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(((int)this + 0x1ac))),(*(undefined4 * PTR32 *)&gen_args[0]));
    return bVar3;
  }
  if (*((int *)GEN_TOP(((int)this + 0x44))) != *((int *)GEN_TOP(((int)this + 0x48)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  uVar4 = F_004069f0(0x70);
  uVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  if (uVar4 == 0) {
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(F_00e42df0(uVar4 GEN_EDX_ARG,(int)this + 0x54,(*(undefined4 * PTR32 *)&gen_args[0]),0,*((undefined4 *)GEN_TOP(((int)this + 0x350))))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
  uVar4 = F_004069f0(0xbc);
  if (uVar4 == 0) {
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(F_00e42e60(uVar4 GEN_EDX_ARG,(int)this + 0xb0,uVar2,0,*((undefined4 *)GEN_TOP(((int)this + 0x350))))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
  uVar4 = F_004069f0(0x68);
  if (uVar4 == 0) {
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(F_00e42ee0(uVar4 GEN_EDX_ARG,(int)this + 0x158,uVar2,0,*((undefined4 *)GEN_TOP(((int)this + 0x350))))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
  puVar5 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
    (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00e3c0b0(puVar5 GEN_EDX_ARG);
    puVar5[1] = 3;
    puVar5[2] = uVar2;
    puVar5[3] = 0;
    *(undefined2 *)(puVar5 + 4) = 1;
    *puVar5 = (*(undefined * PTR32 (*)[40])REFP(0x1157c1c));
    puVar5[5] = *((undefined4 *)GEN_TOP(((int)this + 0x1ac)));
    (*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))) + 0x9c))))
                    (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))) GEN_EDX_ARG,this);
  return (byte)uVar4;
}

/* ref: Global::ReadServiceAccountList */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3fc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3fc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0xc, 4);
  undefined4 * PTR32 * ppuVar1;
  undefined4 * PTR32 * ppuVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = *((undefined1 *)GEN_TOP((param_1 + 10)));
  *((undefined1 *)GEN_TOP(((int)this + 0x1d))) = *((undefined1 *)GEN_TOP((param_1 + 0xb)));
  if ((*((byte *)GEN_TOP((param_1 + 8))) & 0xfe) == 0) {
    F_00e3c6c0(((undefined *)GEN_TOP(((int)this + 0x1d0))) GEN_EDX_FWD);
  }
  (*(byte *)(gen_frame + 0x7)) = 0;
  if (*((char *)GEN_TOP((param_1 + 9))) != '\0') {
    do {
      puVar4 = ((undefined4 *)GEN_TOP(F_004069f0(0x50)));
      if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar4 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        puVar8 = ((undefined4 *)GEN_TOP((param_1 + 0x10 + (uint)(*(byte *)(gen_frame + 0x7)) * 0x50)));
        puVar9 = puVar4;
        for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      ppuVar1 = *((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar4;
      if ((&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) < ppuVar1) &&
         (ppuVar2 = *((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d0))), ppuVar2 <= &(*(undefined4 * PTR32 *)(gen_frame + 0x0)))) {
        if (ppuVar1 == *((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d8)))) {
          uVar5 = (int)ppuVar1 - (int)((int)(uintptr_t)ppuVar2) >> 2;
          if (0x3ffffffe < uVar5) {
LAB_00e3fde0: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar5 = uVar5 + 1;
          uVar7 = (int)*((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d8))) - (int)((int)(uintptr_t)ppuVar2) >> 2;
          if (uVar7 < uVar5) {
            if (0x3fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar5) {
              uVar7 = uVar5;
            }
            F_00e44dd0(((undefined *)GEN_TOP(((int)this + 0x1d0))) GEN_EDX_ARG,uVar7);
          }
        }
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) != ((undefined4 *)GEN_TOP(0x0))) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) =
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1d0))) + ((int)&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) - (int)((int)(uintptr_t)ppuVar2) >> 2) * 4)));
        }
      }
      else {
        if (ppuVar1 == *((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d8)))) {
          uVar5 = (int)ppuVar1 - *((int *)GEN_TOP(((int)this + 0x1d0))) >> 2;
          if (0x3ffffffe < uVar5) goto LAB_00e3fde0;
          uVar5 = uVar5 + 1;
          uVar7 = (int)*((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d8))) - *((int *)GEN_TOP(((int)this + 0x1d0))) >> 2;
          if (uVar7 < uVar5) {
            if (0x3fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar5) {
              uVar7 = uVar5;
            }
            F_00e44dd0(((undefined *)GEN_TOP(((int)this + 0x1d0))) GEN_EDX_ARG,uVar7);
          }
        }
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) != ((undefined4 *)GEN_TOP(0x0))) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1d4))) = puVar4;
        }
      }
      *((int *)GEN_TOP(((int)this + 0x1d4))) = *((int *)GEN_TOP(((int)this + 0x1d4))) + 4;
      bVar3 = (*(byte *)(gen_frame + 0x7)) + 1;
      (*(byte *)(gen_frame + 0x7)) = bVar3;
    } while (bVar3 < *((byte *)GEN_TOP((param_1 + 9))));
  }
  return 0;
}

/* ref: Global::ReadCharaList */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3fdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3fdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0xc, 4);
  byte * pbVar1;
  char cVar2;
  int * PTR32 * ppiVar3;
  int * PTR32 * ppiVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char * pcVar9;
  char * pcVar10;
  undefined * this_00;
  int * piVar11;
  byte bVar12;
  uint uVar13;
  char * pcVar14;
  char * pcVar15;
  
  F_00e3c040(((undefined *)GEN_TOP(((int)this + 0x224))) GEN_EDX_FWD,param_1 + 0x10);
  F_00e3c060(((undefined *)GEN_TOP(((int)this + 0x224))) GEN_EDX_ARG,param_1 + 0x12);
  F_00e3c090(((undefined *)GEN_TOP(((int)this + 0x224))) GEN_EDX_ARG,param_1 + 0xc);
  if ((*((byte *)GEN_TOP((param_1 + 8))) & 0xfe) == 0) {
    F_00e3c7a0(((undefined *)GEN_TOP(((int)this + 0x1e0))) GEN_EDX_ARG);
  }
  (*(byte *)(gen_frame + 0x7)) = 0;
  if (*((char *)GEN_TOP((param_1 + 9))) != '\0') {
    do {
      piVar11 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1e0)));
      iVar7 = (uint)(*(byte *)(gen_frame + 0x7)) * 0x450 + param_1;
      bVar12 = *((byte *)GEN_TOP(((uint)(*(byte *)(gen_frame + 0x7)) * 0x450 + 0x28 + param_1))) & 0x3f;
      uVar8 = *((int *)GEN_TOP(((int)this + 0x1e4))) - (int)((int)(uintptr_t)piVar11) >> 2;
      uVar13 = 0;
      (*(byte *)(gen_frame + 0x6)) = bVar12;
      if (uVar8 != 0) {
        (*(int * PTR32 *)(gen_frame + 0x0)) = piVar11;
LAB_00e3fe83: ;
        if (*((byte *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x10))) != bVar12) goto code_r0x00e3fe8d;
        iVar5 = piVar11[uVar13];
        pcVar9 = ((char *)GEN_TOP((iVar7 + 0x62)));
        pcVar10 = pcVar9;
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        pcVar15 = ((char *)GEN_TOP((iVar5 + 0x49)));
        do {
          pcVar14 = pcVar15 + 1;
          pcVar15 = pcVar15 + 1;
        } while (*pcVar14 != '\0');
        pcVar14 = pcVar9;
        for (uVar8 = (uint)((int)pcVar10 - (int)pcVar9) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar8 = (int)pcVar10 - (int)pcVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar15 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar15 = pcVar15 + 1;
        }
        if (iVar5 == 0) goto LAB_00e3fece;
        goto LAB_00e4004d;
      }
LAB_00e3fece: ;
      this_00 = ((undefined *)GEN_TOP(F_004069f0(0x468)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        piVar11 = ((int *)GEN_TOP(0x0));
      }
      else {
        piVar11 = ((int *)GEN_TOP(F_00e3cb10(this_00 GEN_EDX_ARG,iVar7 + 0x18)));
      }
      ppiVar3 = *((int * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e4)));
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar11;
      if (&(*(int * PTR32 *)(gen_frame + 0x0)) < ppiVar3) {
        ppiVar4 = *((int * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e0)));
        if (&(*(int * PTR32 *)(gen_frame + 0x0)) < ppiVar4) goto LAB_00e3ff78;
        if (ppiVar3 == *((int * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e8)))) {
          uVar8 = (int)ppiVar3 - (int)((int)(uintptr_t)ppiVar4) >> 2;
          if (0x3ffffffe < uVar8) goto LAB_00e40071;
          uVar8 = uVar8 + 1;
          uVar13 = (int)*((int * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e8))) - (int)((int)(uintptr_t)ppiVar4) >> 2;
          if (uVar13 < uVar8) {
            if (0x3fffffff - (uVar13 >> 1) < uVar13) {
              uVar13 = 0;
            }
            else {
              uVar13 = uVar13 + (uVar13 >> 1);
            }
            if (uVar13 < uVar8) {
              uVar13 = uVar8;
            }
            F_00e44e80(((undefined *)GEN_TOP(((int)this + 0x1e0))) GEN_EDX_ARG,uVar13);
          }
        }
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1e4))) != ((undefined4 *)GEN_TOP(0x0))) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1e4))) =
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1e0))) + ((int)&(*(int * PTR32 *)(gen_frame + 0x0)) - (int)((int)(uintptr_t)ppiVar4) >> 2) * 4)));
        }
      }
      else {
LAB_00e3ff78: ;
        if (ppiVar3 == *((int * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e8)))) {
          uVar8 = (int)ppiVar3 - *((int *)GEN_TOP(((int)this + 0x1e0))) >> 2;
          if (0x3ffffffe < uVar8) {
LAB_00e40071: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar8 = uVar8 + 1;
          uVar13 = (int)*((int * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e8))) - *((int *)GEN_TOP(((int)this + 0x1e0))) >> 2;
          if (uVar13 < uVar8) {
            if (0x3fffffff - (uVar13 >> 1) < uVar13) {
              uVar13 = 0;
            }
            else {
              uVar13 = uVar13 + (uVar13 >> 1);
            }
            if (uVar13 < uVar8) {
              uVar13 = uVar8;
            }
            F_00e44e80(((undefined *)GEN_TOP(((int)this + 0x1e0))) GEN_EDX_ARG,uVar13);
          }
        }
        if (*((int * PTR32 *)GEN_TOP(((int)this + 0x1e4))) != ((int *)GEN_TOP(0x0))) {
          **((int * PTR32 *)GEN_TOP(((int)this + 0x1e4))) = (int)piVar11;
        }
      }
      *((int *)GEN_TOP(((int)this + 0x1e4))) = *((int *)GEN_TOP(((int)this + 0x1e4))) + 4;
      iVar5 = *((int *)GEN_TOP(((int)this + 0x1e0)));
      iVar6 = *((int *)GEN_TOP(((int)this + 0x1e4)));
      uVar8 = F_00e3bf00((int)this + 0x210 GEN_EDX_ARG);
      F_00e3c980(*((undefined * PTR32 *)GEN_TOP((iVar5 - 4 + (iVar6 - iVar5 >> 2) * 4))) GEN_EDX_ARG,uVar8);
      if ((*(byte *)(gen_frame + 0x6)) != *((byte *)GEN_TOP((iVar7 + 0x28)))) {
        iVar7 = *((int *)GEN_TOP(((int)this + 0x1e0)));
        uVar8 = 0;
        if (*((int *)GEN_TOP(((int)this + 0x1e4))) - iVar7 >> 2 != 0) {
          do {
            pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((iVar7 + uVar8 * 4))) + 0x10)));
            *pbVar1 = *pbVar1 & 0x3f;
            iVar7 = *((int *)GEN_TOP(((int)this + 0x1e0)));
            uVar8 = uVar8 + 1;
          } while (uVar8 < (uint)(*((int *)GEN_TOP(((int)this + 0x1e4))) - iVar7 >> 2));
        }
      }
LAB_00e4004d: ;
      bVar12 = (*(byte *)(gen_frame + 0x7)) + 1;
      (*(byte *)(gen_frame + 0x7)) = bVar12;
    } while (bVar12 < *((byte *)GEN_TOP((param_1 + 9))));
  }
  return ~*((byte *)GEN_TOP((param_1 + 8))) & 1;
code_r0x00e3fe8d: ;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (*(int * PTR32 *)(gen_frame + 0x0)) + 1;
  uVar13 = uVar13 + 1;
  if (uVar8 <= uVar13) goto LAB_00e3fece;
  goto LAB_00e3fe83;
}

/* ref: Global::ReadCharaMakeReply */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e40080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe40080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x94, 12);
  uint * this_00;
  int * piVar1;
  uint * puVar2;
  uint * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  uint uVar7;
  int * piVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84);
  this_00 = ((uint *)GEN_TOP(((int)this + 0x22c)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(int *)(gen_frame + 0x8)) = param_1;
  F_00e3c7a0(this_00 GEN_EDX_FWD);
  if (*((char *)GEN_TOP((param_1 + 9))) != '\0') {
    iVar9 = param_1;
    if ((*((short *)GEN_TOP((param_1 + 10))) != 2) && (*((short *)GEN_TOP((param_1 + 10))) == 3)) {
      piVar8 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x1e0)));
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x1e4)));
      if (piVar8 != piVar1) {
        iVar9 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x10)));
        uVar7 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x14)));
        (*(uint *)(gen_frame + 0x0)) = uVar7;
        do {
          if ((iVar9 == *((int *)GEN_TOP(*piVar8))) && (uVar7 == (((int *)GEN_TOP(*piVar8)))[1])) {
            F_00c4d9ef(*piVar8 + 0x1a,0x20,(*(int *)(gen_frame + 0x8)) + 0x2a,0xffffffff);
            *((undefined1 *)GEN_TOP((*piVar8 + 0x11))) = *((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x21)));
            break;
          }
          piVar8 = piVar8 + 1;
        } while (piVar8 != piVar1);
      }
      if (*this_00 == *((uint *)GEN_TOP(((int)this + 0x230)))) {
        pvVar6 = ((undefined *)GEN_TOP(F_004069f0(0x468)));
        if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
          (*(uint *)(gen_frame + 0x0)) = 0;
        }
        else {
          uVar7 = F_00e3cb10(pvVar6 GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)) + 0x10);
          (*(uint *)(gen_frame + 0x0)) = uVar7;
        }
        F_00e45730(this_00 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
      }
      piVar8 = ((int *)GEN_TOP(F_00e3bf00((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x210 GEN_EDX_ARG)));
      piVar8 = ((int *)GEN_TOP(*piVar8));
      uVar7 = F_00e3bf00((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x210 GEN_EDX_ARG);
      iVar9 = (*(int *)(gen_frame + 0x8));
      if (piVar8 != *((int * PTR32 *)GEN_TOP((uVar7 + 4)))) {
        do {
          iVar9 = *piVar8;
          if ((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x18))) == *((int *)GEN_TOP((iVar9 + 8)))) &&
             (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x1c))) == *((int *)GEN_TOP((iVar9 + 0xc))))) {
            F_00e3c8a0(*((undefined * PTR32 *)GEN_TOP(*this_00)) GEN_EDX_ARG,iVar9);
          }
          piVar8 = piVar8 + 1;
          uVar7 = F_00e3bf00((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x210 GEN_EDX_ARG);
          iVar9 = (*(int *)(gen_frame + 0x8));
        } while (piVar8 != *((int * PTR32 *)GEN_TOP((uVar7 + 4))));
      }
    }
    if (*((short *)GEN_TOP((iVar9 + 10))) != 3) {
      pvVar6 = ((undefined *)GEN_TOP(F_004069f0(0x468)));
      if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
        (*(uint *)(gen_frame + 0x0)) = 0;
      }
      else {
        uVar7 = F_00e3cb10(pvVar6 GEN_EDX_ARG,iVar9 + 0x10);
        (*(uint *)(gen_frame + 0x0)) = uVar7;
      }
      puVar2 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x230)));
      if ((&(*(uint *)(gen_frame + 0x0)) < puVar2) && (puVar3 = ((uint *)GEN_TOP(*this_00)), puVar3 <= &(*(uint *)(gen_frame + 0x0)))) {
        if (puVar2 == *((uint * PTR32 *)GEN_TOP(((int)this + 0x234)))) {
          F_00e453e0(this_00 GEN_EDX_ARG,1);
        }
        iVar9 = (*(int *)(gen_frame + 0x8));
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x230))) != ((undefined4 *)GEN_TOP(0x0))) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x230))) =
               *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint *)(gen_frame + 0x0)) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
        }
      }
      else {
        if (puVar2 == *((uint * PTR32 *)GEN_TOP(((int)this + 0x234)))) {
          F_00e453e0(this_00 GEN_EDX_ARG,1);
        }
        if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x230))) != ((uint *)GEN_TOP(0x0))) {
          **((uint * PTR32 *)GEN_TOP(((int)this + 0x230))) = (*(uint *)(gen_frame + 0x0));
        }
      }
      *((int *)GEN_TOP(((int)this + 0x230))) = *((int *)GEN_TOP(((int)this + 0x230))) + 4;
      if (*((short *)GEN_TOP((iVar9 + 10))) == 2) {
        uVar4 = *((undefined4 *)GEN_TOP((iVar9 + 0x18)));
        uVar5 = *((undefined4 *)GEN_TOP((iVar9 + 0x1c)));
        (*(undefined4 *)(gen_frame + 0x58)) = 0;
        (*(undefined1 *)(gen_frame + 0x5c)) = 0;
        (*(undefined8 *)(gen_frame + 0x44)) = 0;
        (*(undefined4 *)(gen_frame + 0x4c)) = uVar4;
        (*(undefined4 *)(gen_frame + 0x50)) = uVar5;
        (*(undefined4 *)(gen_frame + 0x54)) = 1;
        F_00e3bde0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x44)));
        F_00e3c8a0(*((undefined * PTR32 *)GEN_TOP(*this_00)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
        F_00e3bde0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x44)));
        F_00e3ca10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x210))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00e40300 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e40300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe40300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x84, 12, 4);
  char cVar1;
  ushort uVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  byte bVar6;
  int iVar7;
  int * piVar8;
  uint uVar9;
  undefined3 extraout_var = 0;
  undefined4 * puVar10;
  undefined4 * PTR32 * ppuVar11;
  undefined3 extraout_var_00 = 0;
  int iVar12;
  undefined4 * puVar13;
  int * piVar14;
  ulonglong uVar15;
  __time64_t _Var16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80));
  piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
  if (*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) == piVar8) goto LAB_00e403d8;
  iVar12 = *((int *)GEN_TOP(((int)this + 0x40)));
  iVar7 = (int)piVar8 - (int)*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) >> 2;
  if (iVar12 < iVar7) {
    iVar7 = *((int *)GEN_TOP(((int)this + 0x44)));
    piVar8 = *((int * PTR32 *)GEN_TOP((iVar7 + iVar12 * 4)));
    if (*((char *)GEN_TOP(((int)piVar8 + 0x11))) == '\0') goto LAB_00e403d8;
    iVar12 = iVar12 + 1;
    *((int *)GEN_TOP(((int)this + 0x40))) = iVar12;
    piVar8 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) - iVar7 >> 2)));
    if (iVar12 < (int)piVar8) {
      piVar8 = *((int * PTR32 *)GEN_TOP((iVar7 + iVar12 * 4)));
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x9c))))(piVar8 GEN_EDX_FWD,this)));
      goto LAB_00e403d8;
    }
    uVar9 = 0;
    if (piVar8 != ((int *)GEN_TOP(0x0))) {
      do {
        puVar13 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + uVar9 * 4)));
        if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
          piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar13)))(puVar13 GEN_EDX_ARG,1)));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)(*((int *)GEN_TOP(((int)this + 0x48))) - *((int *)GEN_TOP(((int)this + 0x44))) >> 2));
    }
  }
  else {
    piVar14 = ((int *)GEN_TOP(0x0));
    piVar8 = ((int *)GEN_TOP(0x0));
    if (iVar7 != 0) {
      do {
        puVar13 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + (int)((int)(uintptr_t)piVar14) * 4)));
        if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar13)))(puVar13 GEN_EDX_ARG,1);
        }
        piVar14 = ((int *)GEN_TOP(((int)piVar14 + 1)));
        piVar8 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) - *((int *)GEN_TOP(((int)this + 0x44))) >> 2)));
      } while (piVar14 < piVar8);
    }
  }
  iVar12 = *((int *)GEN_TOP(((int)this + 0x44)));
  if (iVar12 != *((int *)GEN_TOP(((int)this + 0x48)))) {
    piVar8 = ((int *)GEN_TOP(F_00c46e20(iVar12,*((int *)GEN_TOP(((int)this + 0x48))),0)));
    *((int *)GEN_TOP(((int)this + 0x48))) = iVar12;
  }
LAB_00e403d8: ;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_00e3f320(this GEN_EDX_ARG);
    uVar9 = F_00c33470(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    if ((uVar9 != 0) &&
       (piVar8 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x1b4))))), piVar8 != *((int * PTR32 *)GEN_TOP(((int)this + 0x1b4))))) {
      do {
        F_00e4fd30(((undefined *)GEN_TOP(piVar8[4])) GEN_EDX_ARG,uVar9,(int)this + 0x1c0);
        if (*((char *)GEN_TOP(((int)piVar8 + 0x15))) == '\0') {
          piVar14 = ((int *)GEN_TOP(piVar8[2]));
          if (*((char *)GEN_TOP(((int)piVar14 + 0x15))) == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar14 + 0x15)));
            piVar8 = piVar14;
            piVar14 = ((int *)GEN_TOP(*piVar14));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar14 + 0x15)));
              piVar8 = piVar14;
              piVar14 = ((int *)GEN_TOP(*piVar14));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP(piVar8[1]));
            piVar14 = piVar8;
            while ((piVar8 = piVar3, cVar1 == '\0' && (piVar14 == ((int *)GEN_TOP(piVar8[2]))))) {
              cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
              piVar3 = ((int *)GEN_TOP(piVar8[1]));
              piVar14 = piVar8;
            }
          }
        }
      } while (piVar8 != *((int * PTR32 *)GEN_TOP(((int)this + 0x1b4))));
    }
    F_00e47910(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    bVar6 = F_00e47880(this_00 GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    piVar8 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar6)));
    if (bVar6 != 0) {
      if ((*(int *)(gen_frame + 0xc)) == 0) {
        (*(int *)(gen_frame + 0x1c)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x1c)) = *((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x24)));
      }
      iVar12 = (*(int *)(gen_frame + 0x1c));
      uVar2 = *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) + 2)));
      puVar13 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c4))))[1]));
      cVar1 = *((char *)GEN_TOP(((int)puVar13 + 0x15)));
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c4)));
      while (cVar1 == '\0') {
        if ((int)puVar13[3] < (int)(uint)uVar2) {
          puVar10 = ((undefined4 *)GEN_TOP(puVar13[2]));
          puVar13 = puVar4;
        }
        else {
          puVar10 = ((undefined4 *)GEN_TOP(*puVar13));
        }
        puVar4 = puVar13;
        puVar13 = puVar10;
        cVar1 = *((char *)GEN_TOP(((int)puVar10 + 0x15)));
      }
      puVar13 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar4;
      if ((puVar4 == puVar13) || ((int)(uint)uVar2 < (int)puVar4[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar13;
        ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      }
      else {
        ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      }
      piVar8 = *ppuVar11;
      piVar14 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c4)));
      if (piVar8 == piVar14) {
        piVar8 = ((int *)GEN_TOP(*piVar14));
        if (piVar8 != piVar14) {
          do {
            bVar6 = F_00e4f950(((undefined *)GEN_TOP(piVar8[4])) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar12 + 2))),iVar12);
            if (bVar6 != 0) goto LAB_00e4050d;
            if (*((char *)GEN_TOP(((int)piVar8 + 0x15))) == '\0') {
              piVar14 = ((int *)GEN_TOP(piVar8[2]));
              if (*((char *)GEN_TOP(((int)piVar14 + 0x15))) == '\0') {
                cVar1 = *((char *)GEN_TOP((*piVar14 + 0x15)));
                piVar8 = piVar14;
                piVar14 = ((int *)GEN_TOP(*piVar14));
                while (cVar1 == '\0') {
                  cVar1 = *((char *)GEN_TOP((*piVar14 + 0x15)));
                  piVar8 = piVar14;
                  piVar14 = ((int *)GEN_TOP(*piVar14));
                }
              }
              else {
                cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
                piVar3 = ((int *)GEN_TOP(piVar8[1]));
                piVar14 = piVar8;
                while ((piVar8 = piVar3, cVar1 == '\0' && (piVar14 == ((int *)GEN_TOP(piVar8[2]))))) {
                  cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
                  piVar3 = ((int *)GEN_TOP(piVar8[1]));
                  piVar14 = piVar8;
                }
              }
            }
          } while (piVar8 != *((int * PTR32 *)GEN_TOP(((int)this + 0x1c4))));
        }
      }
      else {
        F_00e4f9c0(((undefined *)GEN_TOP(piVar8[4])) GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)));
LAB_00e4050d: ;
        if (*((int *)GEN_TOP((piVar8[4] + 0x10))) != 2) {
          F_00e44980(((undefined *)GEN_TOP(((int)this + 0x1c0))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x20)),piVar8);
        }
      }
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))
                                (*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)))));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    if (*((int *)GEN_TOP(((int)this + 0x1c8))) != 0) {
      piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c4)));
      piVar14 = ((int *)GEN_TOP(*piVar8));
      if (piVar14 != piVar8) {
        do {
          bVar6 = F_00e4f9c0(((undefined *)GEN_TOP(piVar14[4])) GEN_EDX_ARG,0);
          piVar8 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar6)));
          if (*((int *)GEN_TOP((piVar14[4] + 0x10))) != 2) {
            piVar8 = ((int *)GEN_TOP(F_00e44980(((undefined *)GEN_TOP(((int)this + 0x1c0))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x20)),piVar14)));
            break;
          }
          if (*((char *)GEN_TOP(((int)piVar14 + 0x15))) == '\0') {
            piVar3 = ((int *)GEN_TOP(piVar14[2]));
            if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
              piVar8 = ((int *)GEN_TOP(*piVar3));
              while (piVar14 = piVar3, cVar1 == '\0') {
                cVar1 = *((char *)GEN_TOP((*piVar8 + 0x15)));
                piVar3 = piVar8;
                piVar8 = ((int *)GEN_TOP(*piVar8));
              }
            }
            else {
              cVar1 = *((char *)GEN_TOP((piVar14[1] + 0x15)));
              piVar5 = ((int *)GEN_TOP(piVar14[1]));
              piVar3 = piVar14;
              while ((piVar8 = piVar5, piVar14 = piVar8, cVar1 == '\0' &&
                     (piVar3 == ((int *)GEN_TOP(piVar8[2]))))) {
                cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
                piVar5 = ((int *)GEN_TOP(piVar8[1]));
                piVar3 = piVar8;
              }
            }
          }
        } while (piVar14 != *((int * PTR32 *)GEN_TOP(((int)this + 0x1c4))));
      }
    }
    uVar9 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x340))) != 0) {
      if ((*((int *)GEN_TOP(((int)this + 8))) == 0) ||
         (((iVar12 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc0))), iVar12 != 3 && (iVar12 != 4)) &&
          (iVar12 != 5)))) {
        _Var16 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
        if ((uint)((int)_Var16 - *((int *)GEN_TOP(((int)this + 0x28)))) < 0x1f) {
          piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x340))) + 4))))
                                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x340))) GEN_EDX_ARG,0)));
        }
        else {
          F_00e3ee60(*((undefined4 *)GEN_TOP(((int)this + 0x340))),*((undefined4 *)GEN_TOP(((int)this + 0x350))));
          puVar13 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
          if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar13)))(puVar13 GEN_EDX_ARG,1);
            *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
          }
          piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
          if (*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) != piVar8) {
            piVar8 = ((int *)GEN_TOP(((int)piVar8 - (int)*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) >> 2)));
            if (piVar8 != ((int *)GEN_TOP(0x0))) {
              do {
                puVar13 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + uVar9 * 4)));
                if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
                  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar13)))(puVar13 GEN_EDX_ARG,1)));
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < (uint)(*((int *)GEN_TOP(((int)this + 0x48))) - *((int *)GEN_TOP(((int)this + 0x44))) >> 2))
              ;
            }
            iVar12 = *((int *)GEN_TOP(((int)this + 0x44)));
            if (iVar12 != *((int *)GEN_TOP(((int)this + 0x48)))) {
              piVar8 = ((int *)GEN_TOP(F_00c46e20(iVar12,*((int *)GEN_TOP(((int)this + 0x48))),0)));
              *((int *)GEN_TOP(((int)this + 0x48))) = iVar12;
            }
          }
        }
      }
      else {
        F_0042b630(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x340)));
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x24)));
        if (*((int *)GEN_TOP(((int)this + 0x350))) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x340))) + 0x18))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x340))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x24)),*((int *)GEN_TOP(((int)this + 0x350))));
        }
        *((undefined4 *)GEN_TOP(((int)this + 0x340))) = 0;
        uVar15 = F_0042c880(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        piVar8 = ((int *)GEN_TOP((uint)uVar15));
      }
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  return (uint)piVar8;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::LobbyLoginOperationStep::vf39 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e407a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe407a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  if (this[0x10] != (undefined1)0x0) {
    this[0x11] = (undefined1)0x1;
    bVar1 = F_00e3f390(param_1 GEN_EDX_FWD,this + 0x14,*(undefined4 *)(this + 8));
    return bVar1;
  }
  bVar1 = F_00e3f390(param_1 GEN_EDX_ARG,this + 0x14,this);
  return bVar1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::GameLoginOperationStep::vf39 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e407e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe407e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  if (this[0x10] != (undefined1)0x0) {
    this[0x11] = (undefined1)0x1;
    bVar1 = F_00e3f6d0(param_1 GEN_EDX_FWD,this + 0x14,*(undefined4 *)(this + 8));
    return bVar1;
  }
  bVar1 = F_00e3f6d0(param_1 GEN_EDX_ARG,this + 0x14,this);
  return bVar1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::LobbyCharaOperationStep::vf39 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e40820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe40820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  if (this[0x10] != (undefined1)0x0) {
    this[0x11] = (undefined1)0x1;
    bVar1 = F_00e3fa10(param_1 GEN_EDX_FWD,this + 0x14,*(undefined4 *)(this + 8));
    return bVar1;
  }
  bVar1 = F_00e3fa10(param_1 GEN_EDX_ARG,this + 0x14,this);
  return bVar1;
}

/* ref: FUN_00e40860 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e40860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe40860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,&REFG(undefined, 0x115783a),REFG(undefined4, 0x108cc50));
  bVar1 = F_00e3f450(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x0)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00e408c0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e408c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe408c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x78, 8, 4);
  undefined4 * puVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74));
  puVar1 = ((undefined4 *)GEN_TOP(F_00e461a0(((undefined4 *)(gen_frame + 0x54)),param_1 + 0x60,0x20)));
  if (0xf < (uint)puVar1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar1));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar1,REFG(undefined4, 0x108cc50));
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x23c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (0xf < (*(uint *)(gen_frame + 0x68))) {
    F_00406ad0(((undefined4 *)(gen_frame + 0x54))[0]);
  }
  *((undefined2 *)GEN_TOP(((int)this + 0x290))) = *((undefined2 *)GEN_TOP((param_1 + 0x5e)));
  *((undefined2 *)GEN_TOP(((int)this + 0x292))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x294))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  puVar1 = ((undefined4 *)GEN_TOP(F_00e461a0(((undefined4 *)(gen_frame + 0x54)),param_1 + 0x1c,0x40)));
  if (0xf < (uint)puVar1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar1));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar1,REFG(undefined4, 0x108cc50));
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x298))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (0xf < (*(uint *)(gen_frame + 0x68))) {
    F_00406ad0(((undefined4 *)(gen_frame + 0x54))[0]);
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_00e461a0(((undefined4 *)(gen_frame + 0x54)),param_1 + 0x80,0x20)));
  if (0xf < (uint)puVar1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar1));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar1,REFG(undefined4, 0x108cc50));
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x2ec))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (0xf < (*(uint *)(gen_frame + 0x68))) {
    F_00406ad0(((undefined4 *)(gen_frame + 0x54))[0]);
  }
  return 0;
}

/* ref: FUN_00e40a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e40a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe40a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1157cdc));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x2ec))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x298))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x23c))) GEN_EDX_ARG);
  F_00e3c9c0(((undefined *)GEN_TOP(((int)this + 0x22c))) GEN_EDX_ARG);
  F_00e3c020();
  F_00e3c810(((undefined *)GEN_TOP(((int)this + 0x210))) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 0x200))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x200))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x1f0))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x1f0))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f8))) = 0;
  F_00e3c9c0(((undefined *)GEN_TOP(((int)this + 0x1e0))) GEN_EDX_ARG);
  F_00e3c670(((undefined *)GEN_TOP(((int)this + 0x1d0))) GEN_EDX_ARG);
  F_00e459a0(((undefined *)GEN_TOP(((int)this + 0x1c0))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c4))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c4))));
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x1c4))));
  F_00e45900(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1b4))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1b4))));
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x1b4))));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x104))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    uVar2 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0x44))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  return uVar2;
}

/* ref: FUN_00e40ba0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e40ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe40ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  byte bVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((char *)REFP(0x1157834)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined, 0x115783a),REFG(undefined4, 0x108cc50));
  bVar1 = F_00e3f450(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x54)),param_1);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00e40c30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e40c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe40c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  if (((*((int *)GEN_TOP(((int)this + 8))) != 0) &&
      (((iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc0))), iVar4 == 3 || (iVar4 == 4)) ||
       (iVar4 == 5)))) && (bVar1 = F_00e3f320(this GEN_EDX_FWD), bVar1 == 0)) {
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
    puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar7;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    F_00e46270(((undefined *)GEN_TOP(((int)this + 0x1f0))) GEN_EDX_ARG);
    iVar4 = *((int *)GEN_TOP(((int)this + 0x204)));
    if (*((int *)GEN_TOP(((int)this + 0x200))) != iVar4) {
      uVar2 = F_00e43be0(iVar4,iVar4,*((int *)GEN_TOP(((int)this + 0x200))),param_2);
      *((uint *)GEN_TOP(((int)this + 0x204))) = uVar2;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00406b90(0x88,0,0)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar3;
    if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar3 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      F_00e4f8f0(puVar3 GEN_EDX_ARG,this,puVar7,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x34c))));
      *puVar3 = (*(undefined * PTR32 (*)[5])REFP(0x1157918));
      puVar5 = param_1;
      puVar6 = puVar3 + 0xe;
      for (iVar4 = 0x14; puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0xc)), puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x4)), iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar3;
    (*(undefined4 *)(gen_frame + 0x0)) = puVar7;
    F_00e45a40(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
    return 1;
  }
  return 0;
}

/* ref: FUN_00e40d30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e40d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe40d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  __time64_t _Var8;
  
  _Var8 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  if ((900 < (uint)((int)_Var8 - *((int *)GEN_TOP(((int)this + 0x28))))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x158)));
  puVar6 = (*(undefined4 * PTR32 *)&gen_args[0]);
  puVar7 = puVar1;
  for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) &&
     (((iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc0))), iVar5 == 3 || (iVar5 == 4)) ||
      (iVar5 == 5)))) {
    bVar3 = F_00e40c30(this GEN_EDX_ARG,puVar1,(*(uint *)&gen_args[1]));
    return bVar3;
  }
  if (*((int *)GEN_TOP(((int)this + 0x44))) != *((int *)GEN_TOP(((int)this + 0x48)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  uVar4 = F_004069f0(0x70);
  uVar2 = (*(uint *)&gen_args[1]);
  if (uVar4 == 0) {
    (*(uint *)&gen_args[1]) = 0;
  }
  else {
    (*(uint *)&gen_args[1]) = F_00e42df0(uVar4 GEN_EDX_ARG,(int)this + 0x54,(*(uint *)&gen_args[1]),0,*((undefined4 *)GEN_TOP(((int)this + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(uint *)&gen_args[1]));
  uVar4 = F_004069f0(0xbc);
  if (uVar4 == 0) {
    (*(uint *)&gen_args[1]) = 0;
  }
  else {
    (*(uint *)&gen_args[1]) = F_00e42e60(uVar4 GEN_EDX_ARG,(int)this + 0xb0,uVar2,0,*((undefined4 *)GEN_TOP(((int)this + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(uint *)&gen_args[1]));
  uVar4 = F_004069f0(0x68);
  if (uVar4 == 0) {
    (*(uint *)&gen_args[1]) = 0;
  }
  else {
    (*(uint *)&gen_args[1]) = F_00e42ee0(uVar4 GEN_EDX_ARG,puVar1,uVar2,1,*((undefined4 *)GEN_TOP(((int)this + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(uint *)&gen_args[1]));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))) + 0x9c))))
                    (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))) GEN_EDX_ARG,this);
  return (byte)uVar4;
}

/* ref: FUN_00e40eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e40eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe40eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1157cdc));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  F_00e37350(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
  *((undefined2 *)GEN_TOP(((int)this + 0xac))) = 0;
  F_0042b630((int)this + 0xb0 GEN_EDX_ARG);
  F_0042b630((int)this + 0x104 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 0x1b4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1b4))) + 4))) = *((int *)GEN_TOP(((int)this + 0x1b4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1b4))) + 8))) = *((int *)GEN_TOP(((int)this + 0x1b4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1b4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1b4))) + 0x15))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
    uVar1 = F_004069f0(0x18);
    if (uVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x1c4))) = uVar1;
      *((uint *)GEN_TOP(uVar1)) = uVar1;
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c4))) + 4))) = *((int *)GEN_TOP(((int)this + 0x1c4)));
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c4))) + 8))) = *((int *)GEN_TOP(((int)this + 0x1c4)));
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c4))) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c4))) + 0x15))) = 1;
      *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1e4))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1e8))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x1f8))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
      F_00e3c800((int)this + 0x210 GEN_EDX_ARG);
      F_00e3c010((int)this + 0x224 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x22c))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x230))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x234))) = 0;
      F_0042b630((int)this + 0x23c GEN_EDX_ARG);
      F_0042b630((int)this + 0x298 GEN_EDX_ARG);
      F_0042b630((int)this + 0x2ec GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x344))) = 0x1e;
      *((undefined4 *)GEN_TOP(((int)this + 0x348))) = 0x1e;
      *((undefined4 *)GEN_TOP(((int)this + 0x34c))) = 0x1e;
      *((undefined4 *)GEN_TOP(((int)this + 0x340))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x350))) = 0;
      return (uint)this;
    }
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::ServiceLoginOperationStep::vf39 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e41080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe41080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  if (this[0x10] != (undefined1)0x0) {
    this[0x11] = (undefined1)0x1;
    bVar1 = F_00e40c30(param_1 GEN_EDX_FWD,this + 0x18,*(undefined4 *)(this + 8));
    return bVar1;
  }
  bVar1 = F_00e40c30(param_1 GEN_EDX_ARG,this + 0x18,this);
  return bVar1;
}

/* ref: Global::ReadServerList */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e410c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe410c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint * this_00;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (*((short *)GEN_TOP((param_1 + 10))) == 0) {
    if (*((int *)GEN_TOP(((int)this + 0x1f0))) != *((int *)GEN_TOP(((int)this + 500)))) {
      *((int *)GEN_TOP(((int)this + 500))) = *((int *)GEN_TOP(((int)this + 0x1f0)));
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 1;
  }
  uVar1 = 0;
  if (*((short *)GEN_TOP((param_1 + 0xc))) != 0) {
    this_00 = ((uint *)GEN_TOP(((int)this + 0x1f0)));
    do {
      iVar2 = *((int *)GEN_TOP(((int)this + 500))) - *this_00;
      iVar4 = iVar2 >> 0x1f;
      iVar2 = iVar2 / 0x54 + iVar4;
      uVar5 = 0;
      if (iVar2 != iVar4) {
        uVar3 = 0;
        do {
          if (*((short *)GEN_TOP((uVar3 * 0x54 + 2 + *this_00))) ==
              *((short *)GEN_TOP((param_1 + 0x1a + (uint)uVar1 * 0x54)))) {
            if ((uVar5 & 0xffff) * 0x54 + *this_00 != 0) goto LAB_00e41201;
            break;
          }
          uVar5 = uVar5 + 1;
          uVar3 = uVar5 & 0xffff;
        } while (uVar3 < (uint)(iVar2 - iVar4));
      }
      F_00e3bf40(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1 + (uint)uVar1 * 0x54 + 0x18);
      puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 500)));
      if ((((undefined4 *)(gen_frame + 0x0)) < puVar7) && (puVar6 = ((undefined4 *)GEN_TOP(*this_00)), puVar6 <= ((undefined4 *)(gen_frame + 0x0)))) {
        if (puVar7 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1f8)))) {
          F_00e46380(this_00 GEN_EDX_ARG,1);
        }
        puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 500)));
        puVar6 = ((undefined4 *)GEN_TOP(((((int)((undefined4 *)(gen_frame + 0x0)) - (int)puVar6) / 0x54) * 0x54 + *this_00)));
        if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
LAB_00e411f6: ;
          for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
      }
      else {
        if (puVar7 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1f8)))) {
          F_00e46380(this_00 GEN_EDX_ARG,1);
        }
        puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 500)));
        if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
          puVar6 = ((undefined4 *)(gen_frame + 0x0));
          goto LAB_00e411f6;
        }
      }
      *((int *)GEN_TOP(((int)this + 500))) = *((int *)GEN_TOP(((int)this + 500))) + 0x54;
LAB_00e41201: ;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *((ushort *)GEN_TOP((param_1 + 0xc))));
  }
  return ~*((byte *)GEN_TOP((param_1 + 8))) & 1;
}

/* ref: FUN_00e41240 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e41240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe41240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x31, 15, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x29)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2d));
  if ((*((byte *)GEN_TOP((param_1 + 8))) & 0xfe) == 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x204)));
    if (*((int *)GEN_TOP(((int)this + 0x200))) != iVar1) {
      uVar3 = F_00e43be0(iVar1,iVar1,*((int *)GEN_TOP(((int)this + 0x200))),param_1);
      *((uint *)GEN_TOP(((int)this + 0x204))) = uVar3;
    }
  }
  (*(byte *)(gen_frame + 0x0)) = 0;
  if (*((char *)GEN_TOP((param_1 + 9))) != '\0') {
    do {
      iVar4 = *((int *)GEN_TOP(((int)this + 0x204))) - *((int *)GEN_TOP(((int)this + 0x200)));
      iVar1 = param_1 + (uint)(*(byte *)(gen_frame + 0x0)) * 0x28;
      iVar2 = iVar4 >> 0x1f;
      iVar4 = iVar4 / 0x28 + iVar2;
      uVar3 = 0;
      if (iVar4 != iVar2) {
        pcVar5 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x200))) + 4)));
        do {
          if (*pcVar5 == *((char *)GEN_TOP((iVar1 + 0x14)))) {
            if (*((int *)GEN_TOP(((int)this + 0x200))) + uVar3 * 0x28 != 0) goto LAB_00e41310;
            break;
          }
          uVar3 = uVar3 + 1;
          pcVar5 = pcVar5 + 0x28;
        } while (uVar3 < (uint)(iVar4 - iVar2));
      }
      F_00e3bfd0(((undefined1 *)(gen_frame + 0x1)) GEN_EDX_ARG,iVar1 + 0x10);
      F_00e46670(((undefined *)GEN_TOP(((int)this + 0x200))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1)));
LAB_00e41310: ;
      (*(byte *)(gen_frame + 0x0)) = (*(byte *)(gen_frame + 0x0)) + 1;
    } while ((*(byte *)(gen_frame + 0x0)) < *((byte *)GEN_TOP((param_1 + 9))));
  }
  return ~*((byte *)GEN_TOP((param_1 + 8))) & 1;
}

/* ref: FUN_00e41340 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e41340(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx == param_2;
}

/* ref: FUN_00e41360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe41360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((param_2 == 0) || (param_2 == uVar1)) {
    *(undefined4 *)this = param_1;
  }
  return uVar1;
}

/* ref: FUN_00e41380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe41380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc0)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = param_1;
  return uVar1;
}

/* ref: FUN_00e413a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e413a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe413a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0xc0))) == param_2;
}

/* ref: FUN_00e41460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41460(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 0x2c; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e41480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41480(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1157840));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e414b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e414b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe414b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00f41280(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  return (uint)this;
}

/* ref: FUN_00e414d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e414d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe414d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00e5ecd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
  return (uint)this;
}

/* ref: FUN_00e414f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e414f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe414f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00f01060(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x110f704));
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::CharaMakeParam::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41510(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1157840));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e41540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe41540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *(undefined1 *)this = *param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = *(undefined2 *)(param_1 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *(undefined4 *)(param_1 + 8);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *(undefined4 *)(param_1 + 0xc);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *(undefined4 *)(param_1 + 0x10);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *(undefined4 *)(param_1 + 0x14);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1 + 0x18);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_ARG,param_1 + 0x6c);
  return (uint)this;
}

/* ref: FUN_00e41590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41590(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x115784c));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyClient::GameLoginParam::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e415c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe415c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x115784c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e41600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22, unsigned int gen_a23, unsigned int gen_a24, unsigned int gen_a25, unsigned int gen_a26, unsigned int gen_a27, unsigned int gen_a28, unsigned int gen_a29, unsigned int gen_a30, unsigned int gen_a31, unsigned int gen_a32, unsigned int gen_a33, unsigned int gen_a34, unsigned int gen_a35, unsigned int gen_a36, unsigned int gen_a37, unsigned int gen_a38, unsigned int gen_a39, unsigned int gen_a40, unsigned int gen_a41, unsigned int gen_a42)
{
  GEN_ENTER(0xe41600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[42];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  gen_args[9] = gen_a10;
  gen_args[10] = gen_a11;
  gen_args[11] = gen_a12;
  gen_args[12] = gen_a13;
  gen_args[13] = gen_a14;
  gen_args[14] = gen_a15;
  gen_args[15] = gen_a16;
  gen_args[16] = gen_a17;
  gen_args[17] = gen_a18;
  gen_args[18] = gen_a19;
  gen_args[19] = gen_a20;
  gen_args[20] = gen_a21;
  gen_args[21] = gen_a22;
  gen_args[22] = gen_a23;
  gen_args[23] = gen_a24;
  gen_args[24] = gen_a25;
  gen_args[25] = gen_a26;
  gen_args[26] = gen_a27;
  gen_args[27] = gen_a28;
  gen_args[28] = gen_a29;
  gen_args[29] = gen_a30;
  gen_args[30] = gen_a31;
  gen_args[31] = gen_a32;
  gen_args[32] = gen_a33;
  gen_args[33] = gen_a34;
  gen_args[34] = gen_a35;
  gen_args[35] = gen_a36;
  gen_args[36] = gen_a37;
  gen_args[37] = gen_a38;
  gen_args[38] = gen_a39;
  gen_args[39] = gen_a40;
  gen_args[40] = gen_a41;
  gen_args[41] = gen_a42;
  F_0042cbc0(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]));
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[21]));
  F_0042c880(&(*(undefined4 *)&gen_args[0]) GEN_EDX_ARG);
  F_0042c880(&(*(undefined4 *)&gen_args[21]) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e41640 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e41640(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00e41660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e41690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe41690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  *(uint *)this = uVar1;
  return (uint)this;
}

/* ref: FUN_00e416e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e416e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe416e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00e37370(this GEN_EDX_FWD,param_1);
  *((undefined1 *)GEN_TOP(((int)this + 0x58))) = *((undefined1 *)GEN_TOP((param_1 + 0x58)));
  *((undefined1 *)GEN_TOP(((int)this + 0x59))) = *((undefined1 *)GEN_TOP((param_1 + 0x59)));
  return (uint)this;
}

/* ref: FUN_00e41720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe41720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00e41750 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e41750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00e41770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e41770(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x5c GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xb0 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00e41790 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e41790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00e417b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e417b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe417b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00e36790(this GEN_EDX_FWD,param_1);
  *((undefined1 *)GEN_TOP(((int)this + 0x58))) = *((undefined1 *)GEN_TOP((param_1 + 0x58)));
  *((undefined1 *)GEN_TOP(((int)this + 0x59))) = *((undefined1 *)GEN_TOP((param_1 + 0x59)));
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::OperationStep::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e417e0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe417e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e3c0c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00e41810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xe41810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  F_00e4f8f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157900));
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,param_5);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG,param_6);
  return (uint)this;
}

/* ref: FUN_00e41880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe41880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if ((param_2 == 0) || (uVar1 == param_2)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  }
  return uVar1;
}

/* ref: FUN_00e418d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e418d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe418d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157900));
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG);
  F_00e4f930(this GEN_EDX_ARG);
  return;
}

/* ref: Application::Network::LobbyClient::LobbyLoginOperation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41900(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1157900));
  F_0042c880(param_1 + 0x23 GEN_EDX_FWD);
  F_0042c880(param_1 + 0xe GEN_EDX_ARG);
  F_00e4f930(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e41940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe41940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_00e4f8f0(this GEN_EDX_FWD,param_1,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157918));
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x38)));
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::ServiceLoginOperation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41990(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1157918));
  F_00e4f930(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e419c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e419c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe419c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00e4f8f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157930));
  return (uint)this;
}

/* ref: FUN_00e419f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e419f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe419f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e41a00 */
GEN_LIB GEN_FRAME uint F_00e41a00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe41a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e41a10 */
GEN_LIB GEN_FRAME uint F_00e41a10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe41a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Application::Network::LobbyClient::CharaMakeOperation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41a80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1157930));
  F_00e4f930(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e41ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe41ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00e4f8f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157948));
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::GameLoginOperation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41b00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1157948));
  F_00e4f930(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e41b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe41b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00e41b70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e41b70(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00e41ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41ba0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e41bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41bd0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_00e41c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41c00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x28;
}

/* ref: FUN_00e41c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41c40(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e41ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe41ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x1157960));
  *((undefined1 *)GEN_TOP(((int)this + 8))) = *param_1;
  *((undefined2 *)GEN_TOP(((int)this + 10))) = *(undefined2 *)(param_1 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *(undefined4 *)(param_1 + 8);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *(undefined4 *)(param_1 + 0xc);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *(undefined4 *)(param_1 + 0x10);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *(undefined4 *)(param_1 + 0x14);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD,param_1 + 0x18);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_ARG,param_1 + 0x6c);
  return (uint)this;
}

/* ref: GameLoginParamTmpl_UNormalPlayerCharacterParam__GameLoginParam_LobbyClient_Network_Application::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e41d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_004069f0(200)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00e41ca0(this_00 GEN_EDX_ARG,(int)this + 8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00e41d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41d40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  in_ecx[1] = 1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x115796c));
  puVar2 = param_2;
  puVar3 = in_ecx + 2;
  for (iVar1 = 0x2c; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: CharaMakeParamTmpl_UUpdateRetainerSlotParam__CharaMakeParam_LobbyClient_Network_Application::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e41d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0xb8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[1] = 1;
    *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x115796c));
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 8)));
    puVar4 = puVar1 + 2;
    for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return (uint)puVar1;
  }
  return 0;
}

/* ref: CharaMakeParamTmpl_UUpdateRetainerSlotParam__CharaMakeParam_LobbyClient_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41db0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1157840));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e41de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41de0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e41e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41e20(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e41e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41e60(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e41eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41eb0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e41f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e41f00(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe41f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e41f60 */
GEN_LIB GEN_FRAME uint F_00e41f60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe41f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00e41f70 */
GEN_LIB GEN_FRAME uint F_00e41f70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe41f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00e41f80 */
GEN_LIB GEN_FRAME uint F_00e41f80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe41f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e41f90 */
GEN_LIB GEN_FRAME uint F_00e41f90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe41f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00e41fa0 */
GEN_LIB GEN_FRAME uint F_00e41fa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe41fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00e41fb0 */
GEN_LIB GEN_FRAME uint F_00e41fb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe41fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00e41fc0 */
GEN_LIB GEN_FRAME uint F_00e41fc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe41fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e41fe0 */
GEN_LIB GEN_FRAME uint F_00e41fe0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe41fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e42010 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e42010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe42010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e42040 */
GEN_LIB GEN_FRAME uint F_00e42040(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00e42050 */
GEN_LIB GEN_FRAME uint F_00e42050(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00e42060 */
GEN_LIB GEN_FRAME uint F_00e42060(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42070 */
GEN_LIB GEN_FRAME uint F_00e42070(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00e42080 */
GEN_LIB GEN_FRAME uint F_00e42080(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00e42090 */
GEN_LIB GEN_FRAME uint F_00e42090(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00e420a0 */
GEN_LIB GEN_FRAME uint F_00e420a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe420a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e420c0 */
GEN_LIB GEN_FRAME uint F_00e420c0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe420c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e420f0 */
GEN_LIB GEN_FRAME byte GEN_STDCALL F_00e420f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe420f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *param_1 < *param_2;
}

/* ref: FUN_00e42110 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e42110(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe42110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e42130 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e42130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe42130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e42160 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e42160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe42160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e42230 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e42230(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe42230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e42290 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e42290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe42290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e422e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e422e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe422e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e42340 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e42340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e423a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e423a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe423a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e42440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42440(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe42440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e42450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42450(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe42450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e42460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42460(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe42460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e42470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42470(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe42470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e424c0 */
GEN_LIB GEN_FRAME uint F_00e424c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe424c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e424d0 */
GEN_LIB GEN_FRAME uint F_00e424d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe424d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e424e0 */
GEN_LIB GEN_FRAME uint F_00e424e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe424e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e424f0 */
GEN_LIB GEN_FRAME uint F_00e424f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe424f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42500 */
GEN_LIB GEN_FRAME uint F_00e42500(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42510 */
GEN_LIB GEN_FRAME uint F_00e42510(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42520 */
GEN_LIB GEN_FRAME uint F_00e42520(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42530 */
GEN_LIB GEN_FRAME uint F_00e42530(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42540 */
GEN_LIB GEN_FRAME uint F_00e42540(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42550 */
GEN_LIB GEN_FRAME uint F_00e42550(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42560 */
GEN_LIB GEN_FRAME uint F_00e42560(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e425b0 */
GEN_LIB GEN_FRAME uint F_00e425b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe425b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e42600 */
GEN_LIB GEN_FRAME uint F_00e42600(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x30c30c4) && (uVar1 = F_004069f0(param_1 * 0x54), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e42650 */
GEN_LIB GEN_FRAME uint F_00e42650(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x6666667) && (uVar1 = F_004069f0(param_1 * 0x28), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e426a0 */
GEN_LIB GEN_FRAME uint F_00e426a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe426a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e42700 */
GEN_LIB GEN_FRAME uint F_00e42700(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e42760 */
GEN_LIB GEN_FRAME uint F_00e42760(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e427b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e427b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe427b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e427d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e427d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe427d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e427f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e427f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe427f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e42820 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e42820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x15))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x15))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x15))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e42880 */
GEN_LIB GEN_FRAME uint F_00e42880(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe42890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e428b0 */
GEN_LIB GEN_FRAME uint F_00e428b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe428b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e428c0 */
GEN_LIB GEN_FRAME uint F_00e428c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe428c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e428d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e428d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe428d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e428f0 */
GEN_LIB GEN_FRAME uint F_00e428f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe428f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe42900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e42920 */
GEN_LIB GEN_FRAME uint F_00e42920(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe42930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e42950 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e42950(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe42950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e42970 */
GEN_LIB GEN_FRAME uint F_00e42970(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42980 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e42980(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe42980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined8 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_00e429d0 */
GEN_LIB GEN_FRAME uint F_00e429d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe429d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e429e0 */
GEN_LIB GEN_FRAME byte F_00e429e0(void)
{
  GEN_ENTER(0xe429e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e429f0 */
GEN_LIB GEN_FRAME byte F_00e429f0(void)
{
  GEN_ENTER(0xe429f0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e42a00 */
GEN_LIB GEN_FRAME uint F_00e42a00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe42a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e42a40 */
GEN_LIB GEN_FRAME unsigned int F_00e42a40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe42a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e42a60 */
GEN_LIB GEN_FRAME uint F_00e42a60(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe42a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined8 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_00e42aa0 */
GEN_LIB GEN_FRAME uint F_00e42aa0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42ad0 */
GEN_LIB GEN_FRAME uint F_00e42ad0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42ae0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe42ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e42af0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e42af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e42340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e42b10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e42b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe42b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e42b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42b30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe42b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e42b40 */
GEN_LIB GEN_FRAME uint F_00e42b40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42b60 */
GEN_LIB GEN_FRAME uint F_00e42b60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe42b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e42ba0 */
GEN_LIB GEN_FRAME uint F_00e42ba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe42ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e42bf0 */
GEN_LIB GEN_FRAME uint F_00e42bf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe42bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e42c20 */
GEN_LIB GEN_FRAME uint F_00e42c20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe42c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e42c70 */
GEN_LIB GEN_FRAME uint F_00e42c70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42c80 */
GEN_LIB GEN_FRAME uint F_00e42c80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42c90 */
GEN_LIB GEN_FRAME uint F_00e42c90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe42c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e42ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe42ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e42cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe42cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *(undefined1 *)(param_1 + 1);
  *((undefined1 *)GEN_TOP(((int)this + 5))) = *((undefined1 *)GEN_TOP(((int)param_1 + 5)));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = *((undefined2 *)GEN_TOP(((int)param_1 + 6)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1 + 6);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_ARG,param_1 + 0x1b);
  F_00e78fe0(((undefined *)GEN_TOP(((int)this + 0xc0))) GEN_EDX_ARG,param_1 + 0x30);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc0))) = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4))
  ;
  F_00f41280(((undefined *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,param_1 + 0x3c);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf0))) =
       (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  F_00e5ecd0(((undefined *)GEN_TOP(((int)this + 0x1d8))) GEN_EDX_ARG,param_1 + 0x76);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1d8))) = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
  F_00f01060(((undefined *)GEN_TOP(((int)this + 0x200))) GEN_EDX_ARG,param_1 + 0x80);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x200))) =
       (*(undefined * PTR32 (*)[27])REFP(0x110f704));
  return (uint)this;
}

/* ref: FUN_00e42da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42da0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe42da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  F_00e37370(param_1 GEN_EDX_FWD,param_2);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x58))) = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x59))) = param_4;
  return (uint)param_1;
}

/* ref: FUN_00e42dd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e42dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e37350(this GEN_EDX_FWD);
  *((undefined2 *)GEN_TOP(((int)this + 0x58))) = 0;
  return (uint)this;
}

/* ref: FUN_00e42df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42df0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe42df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  F_00e3c0b0(param_1 GEN_EDX_FWD);
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  param_1[1] = 0;
  param_1[3] = param_5;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x11))) = 0;
  *param_1 = (*(undefined * PTR32 (*)[40])REFP(0x115797c));
  F_00e37370(param_1 + 5 GEN_EDX_ARG,param_2);
  *(undefined1 *)(param_1 + 0x1b) = *((undefined1 *)GEN_TOP((param_2 + 0x58)));
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x6d))) = *((undefined1 *)GEN_TOP((param_2 + 0x59)));
  return (uint)param_1;
}

/* ref: FUN_00e42e40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e42e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  F_00e3c0c0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00e42e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42e60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe42e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  F_00e3c0b0(param_1 GEN_EDX_FWD);
  param_1[3] = param_5;
  param_1[1] = 1;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x11))) = 0;
  *param_1 = (*(undefined * PTR32 (*)[40])REFP(0x1157a24));
  F_0042cbc0(param_1 + 5 GEN_EDX_ARG,param_2);
  F_0042cbc0(param_1 + 0x1a GEN_EDX_ARG,param_2 + 0x54);
  return (uint)param_1;
}

/* ref: FUN_00e42ec0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e42ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  F_00e3c0c0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00e42ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42ee0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe42ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_00e3c0b0(param_1 GEN_EDX_FWD);
  param_1[3] = param_5;
  param_1[2] = param_3;
  param_1[1] = 2;
  *(undefined1 *)(param_1 + 4) = param_4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x11))) = 0;
  *param_1 = (*(undefined * PTR32 (*)[40])REFP(0x1157acc))
  ;
  puVar2 = param_2;
  puVar3 = param_1 + 6;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::ServiceLoginOperationStep::vf13 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e42f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xe42f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  return;
}

/* ref: FUN_00e42f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42f50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe42f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  F_00e3c0b0(param_1 GEN_EDX_FWD);
  param_1[2] = param_3;
  param_1[1] = 3;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = param_4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x11))) = 0;
  *param_1 = (*(undefined * PTR32 (*)[40])REFP(0x1157b74));
  param_1[5] = *param_2;
  return (uint)param_1;
}

/* ref: FUN_00e42fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42fa0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe42fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  F_00e3c0b0(param_1 GEN_EDX_FWD);
  param_1[2] = param_3;
  param_1[1] = 3;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = param_4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x11))) = 0;
  *param_1 = (*(undefined * PTR32 (*)[40])REFP(0x1157c1c));
  param_1[5] = *param_2;
  return (uint)param_1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::InitOperationStep::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e42ff0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe42ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x14))) GEN_EDX_FWD);
  F_00e3c0c0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::LobbyLoginOperationStep::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43020(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x68))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x14))) GEN_EDX_ARG);
  F_00e3c0c0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::ServiceLoginOperationStep::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43060(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e3c0c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::GameLoginOperationStep::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43090(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e3c0c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::LobbyCharaOperationStep::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e430c0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe430c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e3c0c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00e430f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e430f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe430f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00efc530((int)this + 0x210 GEN_EDX_FWD);
  F_00e5bc00((int)this + 0x1e8 GEN_EDX_ARG);
  F_00f36370((int)this + 0x100 GEN_EDX_ARG);
  F_00e75880((int)this + 0xd0 GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x7c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1157840));
  return (uint)uVar1;
}

/* ref: FUN_00e43140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e43140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_FWD);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x115784c));
  return (uint)uVar1;
}

/* ref: FUN_00e43180 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e43180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e431a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e431a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe431a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x1157cc0));
  F_00e42cc0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: CharaMakeParamTmpl_UNormalPlayerCharacterParam__CharaMakeParam_LobbyClient_Network_Application::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e431d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe431d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x2c0)));
  puVar2 = ((undefined4 *)GEN_TOP(0x0));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[1] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1157cc0));
    F_00e42cc0(puVar1 + 4 GEN_EDX_ARG,(int)this + 0x10);
    puVar2 = puVar1;
  }
  return (uint)puVar2;
}

/* ref: FUN_00e43210 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e43210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: CharaMakeParamTmpl_UNormalPlayerCharacterParam__CharaMakeParam_LobbyClient_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43230(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00efc530(param_1 + 0x84 GEN_EDX_FWD);
  F_00e5bc00(param_1 + 0x7a GEN_EDX_ARG);
  F_00f36370(param_1 + 0x40 GEN_EDX_ARG);
  F_00e75880(param_1 + 0x34 GEN_EDX_ARG);
  F_0042c880(param_1 + 0x1f GEN_EDX_ARG);
  F_0042c880(param_1 + 10 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1157840));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: GameLoginParamTmpl_UNormalPlayerCharacterParam__GameLoginParam_LobbyClient_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43290(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 + 0x1d GEN_EDX_FWD);
  F_0042c880(param_1 + 8 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x115784c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e43350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e433f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e433f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe433f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e43460 */
GEN_LIB GEN_FRAME uint F_00e43460(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe43460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00e43490 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e43490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e42340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e434b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e434b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe434b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e423a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e434d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e434d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe434d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e43510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e43550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
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

/* ref: FUN_00e435a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e435a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe435a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x28;
  if (0x6666666 - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e435f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e435f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe435f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e43620 */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_00e43620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((int)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00e43650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43650(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e43660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e43670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43670(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e43680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43680(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e43690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43690(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e436a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e436a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe436a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e436f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e436f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe436f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e43740 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e43740(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe43740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x30c30c4) && (uVar1 = F_004069f0(param_1 * 0x54), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e43790 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e43790(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe43790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x6666667) && (uVar1 = F_004069f0(param_1 * 0x28), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e437e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e437e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe437e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e43840 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e43840(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe43840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e438a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e438a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe438a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e438f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e438f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe438f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e42340(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e43910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe43910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e423a0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e43930 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e43930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e43950 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e43950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e43970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe43970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e43990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe43990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e439b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e439b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe439b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e439d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e439d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe439d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e439f0 */
GEN_LIB GEN_FRAME uint F_00e439f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe439f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e43a10 */
GEN_LIB GEN_FRAME uint F_00e43a10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e43a30 */
GEN_LIB GEN_FRAME unsigned int F_00e43a30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e43a50 */
GEN_LIB GEN_FRAME uint F_00e43a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined8 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00e43a90 */
GEN_LIB GEN_FRAME uint F_00e43a90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e43ab0 */
GEN_LIB GEN_FRAME uint F_00e43ab0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e43af0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e43af0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e43b10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e43b10(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined8 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_00e43b80 */
GEN_LIB GEN_FRAME uint F_00e43b80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe43b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00e43ba0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e43ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e42820(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e43bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe43bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e43bd0 */
GEN_LIB GEN_FRAME uint F_00e43bd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e43be0 */
GEN_LIB GEN_FRAME uint F_00e43be0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe43be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined8 * puVar1;
  undefined8 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 5) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1 = puVar1 + 5;
  }
  return (uint)puVar1;
}

/* ref: FUN_00e43c30 */
GEN_LIB GEN_FRAME uint F_00e43c30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e43c60 */
GEN_LIB GEN_FRAME uint F_00e43c60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e43c90 */
GEN_LIB GEN_FRAME uint F_00e43c90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe43c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e43cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe43cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e43ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e43d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43d30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e43d40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e43d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e43d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe43d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e43db0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e43db0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e43dd0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e43dd0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined8 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_00e43e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e43e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  F_0042cc20(this GEN_EDX_FWD,puVar1,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_00e43ee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e43ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e42340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e43ef0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e43ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x50))) + 4))) - 0x50 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this - 0x4c))) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined *)GEN_TOP(((int)this - 0x4c))) GEN_EDX_FWD);
  F_00479ae0(((undefined *)GEN_TOP(((int)this - 0x4c))) GEN_EDX_ARG);
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x50))) + 4)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((uVar1 - 0x50) + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  return uVar1;
}

/* ref: FUN_00e43f40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e43f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e423a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e43f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43f50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e43f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43f60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e43f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43f70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e43f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43f80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e43f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43f90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e43fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43fa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e43fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00e44010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00e44070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44070(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e44080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44080(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe44080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  F_00479880(param_1 GEN_EDX_FWD);
  uVar1 = 0;
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  if ((param_2 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_2 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  param_1[0x10] = uVar1;
  param_1[0xf] = 0;
  return (uint)param_1;
}

/* ref: FUN_00e440d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e440d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe440d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e440e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e440e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe440e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e440f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e440f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe440f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e44100 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e44100(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe44100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e44120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e44180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e441e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e441e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe441e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e44200 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e44200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e44220 */
GEN_LIB GEN_FRAME unsigned int F_00e44220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e44240 */
GEN_LIB GEN_FRAME uint F_00e44240(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined8 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00e442a0 */
GEN_LIB GEN_FRAME uint F_00e442a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe442a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00e43be0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00e442c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e442c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe442c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e442f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e442f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe442f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e44320 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e44320(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e44350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44350(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe44350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x1ffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00e4454d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00e4454d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e44580 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e44580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe44580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e42820(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e44590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e445b0 */
GEN_LIB GEN_FRAME uint F_00e445b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe445b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e445c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e445c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe445c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e44600 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e44600(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e44620 */
GEN_LIB GEN_FRAME unsigned int F_00e44620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e44640 */
GEN_LIB GEN_FRAME uint F_00e44640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined8 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00e44680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e44680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe44680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * piVar1;
  uint extraout_EAX = 0;
  
  piVar1 = ((undefined *)GEN_TOP(((int)this + 0x50)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*(int *)this + 4))) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  F_00479ae0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*(int *)this + 4))) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *(undefined * PTR32 * PTR32 *)piVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(piVar1);
  return extraout_EAX;
}

/* ref: FUN_00e446d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e446d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe446d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e446f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e446f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe446f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e44700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00e42340(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e4481a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00e41fe0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e41fc0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e4481a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e43fb0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e43350(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e43fb0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e448d8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e43350(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e448d8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e43fb0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e43350(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e44950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe44950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e44970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe44970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e44980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00e423a0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e44a9a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00e420c0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e420a0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e44a9a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e44010(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e433f0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e44010(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e44b58: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e433f0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e44b58;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e44010(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e433f0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e44bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44bd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe44bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * piVar1;
  
  piVar1 = param_1 - 0x50;
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)piVar1 + 4))) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  *(undefined * PTR32 * PTR32 *)(param_1 - 0x4c) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(param_1 - 0x4c GEN_EDX_FWD);
  F_00479ae0(param_1 - 0x4c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)(param_1 - 0x50) + 4))) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(param_1);
  if ((param_2 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00e44c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe44c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e44ca0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e44ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe44ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e44cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e44d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e44d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00e44dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar3 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e44e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar3 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e44f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar3 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e44fe0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e44fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e44fe0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

