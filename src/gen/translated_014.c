#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_004c7d00 */
GEN_FRAME uint GEN_THISCALL F_004c7d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c7d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004c3f10((undefined *)((int)this + 8) GEN_EDX_FWD,param_1);
  if ((int)uVar1 < 0) {
    return 0;
  }
  return uVar1 * 0x10 + *(int *)((int)this + 0xc);
}

/* ref: FUN_004c7d30 */
GEN_FRAME byte GEN_THISCALL F_004c7d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c7d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  int local_8;
  
  *(undefined2 *)((int)this + 10) = 0xffff;
  uVar1 = *(ushort *)((int)this + 8);
  iVar2 = 0;
  if ((uVar1 != 0) && ((param_1 == 0 || (uVar1 < param_1)))) {
    uVar3 = 0;
    if (uVar1 != 0) {
      local_8 = 0;
      do {
        F_004b4000(((undefined *)GEN_TOP((*(int *)((int)this + 4) + local_8))) GEN_EDX_FWD);
        local_8 = local_8 + 0xb4;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)((int)this + 8));
    }
    if (*(int *)((int)this + 4) != 0) {
      F_00406b30(*(int *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    if (*(int *)this != 0) {
      F_00406b30(*(int *)this);
      *(undefined4 *)this = 0;
    }
    *(undefined2 *)((int)this + 8) = 0;
  }
  if (param_1 != 0) {
    if (*(ushort *)((int)this + 8) < param_1) {
      uVar3 = F_00406bb0(param_1,0,0);
      *(uint *)this = uVar3;
      uVar3 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0xb4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0xb4),0,0);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        local_8 = param_1 - 1;
        if (-1 < local_8) {
          this_00 = (undefined *)(uVar3 + 0x38);
          do {
            F_004c3df0(this_00 GEN_EDX_ARG);
            *(undefined4 *)((int)this_00 + 0x78) = 0;
            *(undefined4 *)((int)this_00 - 0x38) = 0;
            *(undefined4 *)((int)this_00 - 0x34) = 0;
            *(undefined4 *)((int)this_00 - 0x30) = 0;
            *(undefined4 *)((int)this_00 - 0x2c) = 0;
            *(undefined4 *)((int)this_00 - 0x28) = 0;
            *(undefined4 *)((int)this_00 - 0x24) = 0;
            *(undefined4 *)((int)this_00 - 0x20) = 0;
            *(undefined4 *)((int)this_00 - 0x1c) = 0;
            *(undefined4 *)((int)this_00 - 0x18) = 0;
            *(undefined4 *)((int)this_00 - 0x14) = 0;
            *(undefined2 *)((int)this_00 - 0x10) = 0;
            this_00 = (undefined *)((int)this_00 + 0xb4);
            local_8 = local_8 - 1;
          } while (-1 < local_8);
        }
      }
      *(uint *)((int)this + 4) = uVar3;
      F_00c48350(*(undefined * PTR32 *)this,0,param_1);
      for (uVar3 = param_1; uVar3 != 0; uVar3 = uVar3 - 1) {
        F_004b3f10(((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar2))) GEN_EDX_ARG);
        iVar2 = iVar2 + 0xb4;
      }
    }
    *(short *)((int)this + 8) = (short)param_1;
  }
  return 1 - (*(ushort *)((int)this + 8) < param_1);
}

/* ref: FUN_004c7e90 */
GEN_NOFRAME uint GEN_THISCALL F_004c7e90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4c7e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004c75e0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0xce);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004c7ec0 */
GEN_NOFRAME uint GEN_THISCALL F_004c7ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4c7ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004c7660(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0xce);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004c7ef0 */
GEN_FRAME byte GEN_THISCALL F_004c7ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c7ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_004c7d30(this GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_004c7f10 */
GEN_NOFRAME uint GEN_THISCALL F_004c7f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4c7f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004c76e0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0xce);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004c7f40 */
GEN_FRAME uint GEN_THISCALL F_004c7f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4c7f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)this;
  }
  uVar4 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if (uVar4 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_004c7760(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if (iVar2 != 0) {
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
          if ((uint)(*(int *)((int)this + 8) * 2) <= *(uint *)((int)this + 0xc)) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar2 = iVar2 - 1;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar5;
    }
    F_004c77e0(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 - 1, iVar2 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return (uint)param_1;
}

/* ref: FUN_004c80d0 */
GEN_FRAME uint GEN_THISCALL F_004c80d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4c80d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)this;
  }
  uVar4 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if (uVar4 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_004c7860(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if (iVar2 != 0) {
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
          if ((uint)(*(int *)((int)this + 8) * 4) <= *(uint *)((int)this + 0xc)) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar2 = iVar2 - 1;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar5;
    }
    F_004c78e0(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 - 1, iVar2 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return (uint)param_1;
}

/* ref: FUN_004c8260 */
GEN_FRAME uint GEN_THISCALL F_004c8260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4c8260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)this;
  }
  uVar4 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if (uVar4 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_004c7960(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if (iVar2 != 0) {
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
          if ((uint)(*(int *)((int)this + 8) * 4) <= *(uint *)((int)this + 0xc)) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar2 = iVar2 - 1;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar5;
    }
    F_004c79e0(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 - 1, iVar2 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return (uint)param_1;
}

/* ref: FUN_004c83f0 */
GEN_FRAME unsigned int F_004c83f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c83f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004c8420 */
GEN_FRAME unsigned int F_004c8420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c8450 */
GEN_FRAME unsigned int F_004c8450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c8450u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004c8480 */
GEN_FRAME unsigned int F_004c8480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c84b0 */
GEN_FRAME unsigned int F_004c84b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c84b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004c84e0 */
GEN_FRAME unsigned int F_004c84e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c84e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c8510 */
GEN_FRAME unsigned int F_004c8510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4c8510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_004c7bb0(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  return;
}

/* ref: FUN_004c8540 */
GEN_FRAME byte GEN_THISCALL F_004c8540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_004c7d30((undefined *)((int)this + 8) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_004c8590 */
GEN_NOFRAME uint GEN_THISCALL F_004c8590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4c8590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004c75e0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0xce);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004c8600 */
GEN_NOFRAME uint GEN_THISCALL F_004c8600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4c8600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004c7660(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0xce);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004c8670 */
GEN_NOFRAME uint GEN_THISCALL F_004c8670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4c8670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004c76e0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0xce);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004c86a0 */
GEN_FRAME uint GEN_THISCALL F_004c86a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4c86a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_004c7f40(this GEN_EDX_FWD,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_004c8720 */
GEN_FRAME uint GEN_THISCALL F_004c8720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4c8720u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_004c80d0(this GEN_EDX_FWD,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_004c87a0 */
GEN_FRAME uint GEN_THISCALL F_004c87a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4c87a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_004c8260(this GEN_EDX_FWD,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_004c8820 */
GEN_FRAME uint GEN_THISCALL F_004c8820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8820u, gen_a0, gen_a1, 0u, 0u);
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
  if (0x7fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x7fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 1;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0xce);
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
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0xce);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_004c89a0 */
GEN_FRAME uint GEN_THISCALL F_004c89a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c89a0u, gen_a0, gen_a1, 0u, 0u);
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
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 2;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0xce);
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
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0xce);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_004c8b20 */
GEN_FRAME uint GEN_THISCALL F_004c8b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8b20u, gen_a0, gen_a1, 0u, 0u);
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
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 2;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0xce);
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
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0xce);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_004c8ca0 */
GEN_FRAME uint GEN_THISCALL F_004c8ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xc) & 1) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 2U >> 1)) {
    F_004c8820(this GEN_EDX_FWD,1);
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 8) * 2;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0xce);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) = uVar2;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) + (uVar4 & 1) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return (uint)puVar1;
}

/* ref: FUN_004c8d20 */
GEN_FRAME uint F_004c8d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c8d20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_004c7bb0(uVar2,param_4,uVar3,(*(int *)&gen_a6),uVar4,param_10,0,0);
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

/* ref: FUN_004c8dd0 */
GEN_FRAME uint GEN_THISCALL F_004c8dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 1U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 2U >> 1)) {
    F_004c8820(this GEN_EDX_FWD,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 1;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0xce);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 1) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    uVar4 = param_1[1];
    puVar1[1] = uVar4;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: Client::Graphics::Environment::EnvStringTable::vf0 */
GEN_FRAME uint GEN_THISCALL F_004c8e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10948d4));
  F_004c75e0(this + 4 GEN_EDX_FWD);
  F_00429760(*(undefined4 *)(this + 4),8,0xce);
  *(undefined4 *)(this + 4) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Environment::EnvSetManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_004c8eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10948dc));
  F_004c7660(this + 4 GEN_EDX_FWD);
  F_00429760(*(undefined4 *)(this + 4),8,0xce);
  *(undefined4 *)(this + 4) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Environment::ObjectBehaviorSetManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_004c8f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10948f4));
  F_004c76e0(this + 4 GEN_EDX_FWD);
  F_00429760(*(undefined4 *)(this + 4),8,0xce);
  *(undefined4 *)(this + 4) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004c8f50 */
GEN_FRAME uint GEN_THISCALL F_004c8f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 1U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 2U >> 1)) {
    F_004c8820(this GEN_EDX_FWD,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 1;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0xce);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 1) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    uVar4 = param_1[1];
    puVar1[1] = uVar4;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: FUN_004c8fe0 */
GEN_FRAME uint GEN_THISCALL F_004c8fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c8fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_004c89a0(this GEN_EDX_FWD,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 2;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0xce);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: FUN_004c9060 */
GEN_FRAME uint GEN_THISCALL F_004c9060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c9060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_004c8b20(this GEN_EDX_FWD,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 2;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0xce);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: FUN_004c90e0 */
GEN_FRAME uint GEN_THISCALL F_004c90e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4c90e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_004c8dd0(this GEN_EDX_FWD,param_5);
    iVar5 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
    uVar10 = *(undefined4 *)this;
    piVar4 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar4 = (int *)*puVar1;
    }
    iVar3 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc) - 1;
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
    F_004c8ca0(this GEN_EDX_ARG,param_5);
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
  F_004c8d20(((undefined1 *)(gen_frame + 0xc)),uVar8,0,iVar6,uVar9,0,iVar3,uVar10,0,iVar5);
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

/* ref: FUN_004c9270 */
GEN_FRAME uint GEN_THISCALL F_004c9270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4c9270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_004c90e0(this GEN_EDX_FWD,param_1,uVar1,0,param_4,param_5);
  return param_1;
}

/* ref: FUN_004c92c0 */
GEN_FRAME byte F_004c92c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c92c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    uVar7 = param_1[1];
    if ((0 < (int)uVar7) && (*param_2 == 0)) {
      uVar4 = F_00406bb0(-(uint)((int)((ulonglong)uVar7 * 0x4c >> 0x20) != 0) |
                           (uint)((ulonglong)uVar7 * 0x4c),0,0);
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        iVar6 = uVar7 - 1;
        if (-1 < iVar6) {
          puVar5 = (undefined4 *)(uVar4 + 0x38);
          do {
            F_00401500(puVar5 - 6,0xc,2,((code *)REFP(0x4bd230)));
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5 = puVar5 + 0x13;
            iVar6 = iVar6 - 1;
          } while (-1 < iVar6);
        }
      }
      *param_2 = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar7 = 0;
  if (*param_3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar7 * 4 + iVar1);
      *(undefined4 *)(iVar6 + 0x48 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      bVar3 = F_004bc280((int)param_1 + iVar2 + iVar1,*param_2 + iVar6);
      if (bVar3 == 0) {
        if (*param_2 != 0) {
          F_00406b30(*param_2);
          *param_2 = 0;
        }
        *param_3 = 0;
        return 0;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0x4c;
    } while (uVar7 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c9410 */
GEN_NOFRAME byte GEN_THISCALL F_004c9410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4c9410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xc) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      F_004bbf00(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar1))) GEN_EDX_FWD);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (uVar2 < *(uint *)((int)this + 0xc));
  }
  if (*(int *)((int)this + 8) != 0) {
    F_00406b30(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 1;
}

/* ref: FUN_004c9460 */
GEN_NOFRAME uint GEN_THISCALL F_004c9460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4c9460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xc) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      F_004bbf00(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar1))) GEN_EDX_FWD);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (uVar2 < *(uint *)((int)this + 0xc));
  }
  if (*(int *)((int)this + 8) != 0) {
    F_00406b30(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_004c94a0 */
GEN_FRAME byte GEN_THISCALL F_004c94a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c94a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_c;
  int local_8;
  
  *(undefined2 *)((int)this + 10) = 0xffff;
  uVar1 = *(ushort *)((int)this + 8);
  if ((uVar1 != 0) && ((param_1 == 0 || (uVar1 < param_1)))) {
    local_c = 0;
    if (uVar1 != 0) {
      local_8 = 0;
      do {
        uVar5 = 0;
        iVar4 = *(int *)((int)this + 4) + local_8;
        if (*(int *)(iVar4 + 0xc) != 0) {
          iVar3 = 0;
          do {
            F_004bbf00(((undefined *)GEN_TOP((*(int *)(iVar4 + 8) + iVar3))) GEN_EDX_FWD);
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + 0x14;
          } while (uVar5 < *(uint *)(iVar4 + 0xc));
        }
        if (*(int *)(iVar4 + 8) != 0) {
          F_00406b30(*(int *)(iVar4 + 8));
          *(undefined4 *)(iVar4 + 8) = 0;
          *(undefined4 *)(iVar4 + 0xc) = 0;
        }
        local_8 = local_8 + 0x10;
        local_c = local_c + 1;
      } while (local_c < *(ushort *)((int)this + 8));
    }
    if (*(int *)((int)this + 4) != 0) {
      F_00406b30(*(int *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    if (*(int *)this != 0) {
      F_00406b30(*(int *)this);
      *(undefined4 *)this = 0;
    }
    *(undefined2 *)((int)this + 8) = 0;
  }
  if (param_1 != 0) {
    if (*(ushort *)((int)this + 8) < param_1) {
      uVar5 = F_00406bb0(param_1,0,0);
      *(uint *)this = uVar5;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0x10),0,0);
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        iVar4 = param_1 - 1;
        if (-1 < iVar4) {
          puVar2 = (undefined4 *)(uVar5 + 0xc);
          do {
            puVar2[-3] = 0;
            puVar2[-2] = 0;
            puVar2[-1] = 0;
            *puVar2 = 0;
            puVar2 = puVar2 + 4;
            iVar4 = iVar4 - 1;
          } while (-1 < iVar4);
        }
      }
      *(uint *)((int)this + 4) = uVar5;
      F_00c48350(*(undefined * PTR32 *)this,0,param_1);
      if (param_1 != 0) {
        local_8 = 0;
        local_c = param_1;
        do {
          uVar5 = 0;
          iVar4 = *(int *)((int)this + 4) + local_8;
          if (*(int *)(iVar4 + 0xc) != 0) {
            iVar3 = 0;
            do {
              F_004bbf00(((undefined *)GEN_TOP((*(int *)(iVar4 + 8) + iVar3))) GEN_EDX_ARG);
              uVar5 = uVar5 + 1;
              iVar3 = iVar3 + 0x14;
            } while (uVar5 < *(uint *)(iVar4 + 0xc));
          }
          if (*(int *)(iVar4 + 8) != 0) {
            F_00406b30(*(int *)(iVar4 + 8));
            *(undefined4 *)(iVar4 + 8) = 0;
            *(undefined4 *)(iVar4 + 0xc) = 0;
          }
          local_8 = local_8 + 0x10;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
    }
    *(short *)((int)this + 8) = (short)param_1;
  }
  return 1 - (*(ushort *)((int)this + 8) < param_1);
}

/* ref: FUN_004c9640 */
GEN_FRAME byte GEN_THISCALL F_004c9640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c9640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_004c94a0(this GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_004c9660 */
GEN_FRAME byte GEN_THISCALL F_004c9660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c9660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_004c94a0((undefined *)((int)this + 8) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_004c9670 */
GEN_FRAME byte GEN_THISCALL F_004c9670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c9670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  int local_8;
  
  *(undefined2 *)((int)this + 10) = 0xffff;
  uVar1 = *(ushort *)((int)this + 8);
  if ((uVar1 != 0) && ((param_1 == 0 || (uVar1 < param_1)))) {
    uVar5 = 0;
    if (uVar1 != 0) {
      local_8 = 0;
      do {
        F_004bc7b0(((undefined *)GEN_TOP((local_8 + *(int *)((int)this + 4)))) GEN_EDX_FWD);
        local_8 = local_8 + 0x294;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)((int)this + 8));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-1] == 0) {
        F_00406b30(puVar2 - 1);
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,3);
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    if (*(int *)this != 0) {
      F_00406b30(*(int *)this);
      *(undefined4 *)this = 0;
    }
    *(undefined2 *)((int)this + 8) = 0;
  }
  if (param_1 != 0) {
    if (*(ushort *)((int)this + 8) < param_1) {
      uVar5 = F_00406bb0(param_1,0,0);
      *(uint *)this = uVar5;
      uVar5 = -(uint)((int)((ulonglong)param_1 * 0x294 >> 0x20) != 0) |
              (uint)((ulonglong)param_1 * 0x294);
      puVar3 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,0);
      if (puVar3 == (uint *)0x0) {
        puVar4 = (uint *)0x0;
      }
      else {
        *puVar3 = param_1;
        puVar4 = puVar3 + 1;
        local_8 = param_1 - 1;
        if (-1 < local_8) {
          puVar3 = puVar3 + 0xa2;
          puVar6 = puVar4;
          do {
            *puVar6 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x109463c));
            puVar3[-0x9c] = 0;
            puVar3[-0x9b] = 0;
            puVar3[-0x80] = (uint)(*(undefined * PTR32 (*)[1])REFP(0x1094634));
            puVar3[-0x7d] = 0;
            puVar3[-0x7c] = 0;
            F_00401500(puVar3 - 6,0xc,2,((code *)REFP(0x4bd230)));
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[-0x9a] = 0;
            puVar3[-0x99] = 0;
            puVar3[-0x98] = 0;
            puVar3[-0x97] = 0;
            puVar3[-0x96] = 0;
            puVar3[-0x95] = 0;
            puVar3[-0x94] = 0;
            puVar3[-0x93] = 0;
            puVar3[-0x92] = 0;
            puVar3[-0x91] = 0;
            puVar3[-0x90] = 0;
            puVar3[-0x8f] = 0;
            puVar3[-0x8e] = 0;
            puVar3[-0x8d] = 0;
            puVar3[-0x8c] = 0;
            puVar3[-0x8b] = 0;
            puVar3[-0x8a] = 0;
            puVar3[-0x89] = 0;
            puVar3[-0x88] = 0;
            *(undefined2 *)(puVar3 - 0x87) = 0;
            puVar6 = puVar6 + 0xa5;
            puVar3 = puVar3 + 0xa5;
            local_8 = local_8 - 1;
          } while (-1 < local_8);
        }
      }
      *(uint * PTR32 *)((int)this + 4) = puVar4;
      F_00c48350(*(undefined * PTR32 *)this,0,param_1);
      if (param_1 != 0) {
        iVar7 = 0;
        uVar5 = param_1;
        do {
          F_004bc5c0(((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar7))) GEN_EDX_ARG);
          iVar7 = iVar7 + 0x294;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    *(short *)((int)this + 8) = (short)param_1;
  }
  return 1 - (*(ushort *)((int)this + 8) < param_1);
}

/* ref: FUN_004c98a0 */
GEN_FRAME byte GEN_THISCALL F_004c98a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c98a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_004c9670(this GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_004c98c0 */
GEN_FRAME byte GEN_THISCALL F_004c98c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4c98c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_004c9670((undefined *)((int)this + 8) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_004c98d0 */
GEN_FRAME uint GEN_STDCALL F_004c98d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c98d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) && ((*(int *)&gen_a1) != 0)) &&
     ((iVar4 = *(int *)(iVar1 + 0x18), iVar4 != 2 && ((iVar4 != 1 || (*(int *)(iVar1 + 4) == 0x2a)))
      ))) {
    if (iVar4 != 0) {
      uVar2 = F_00b17ee0(*(undefined4 *)(param_1 + 0x30),(*(int *)&gen_a1),param_3);
      *(uint *)(param_1 + 0x30) = uVar2;
    }
    if (2 < param_3) {
      uVar3 = *(int *)(iVar1 + 0x2c) - 0x106;
      iVar4 = (*(int *)&gen_a1);
      uVar2 = param_3;
      if (uVar3 < param_3) {
        iVar4 = (*(int *)&gen_a1) + (param_3 - uVar3);
        uVar2 = uVar3;
      }
      F_00c46aa0(*(undefined4 *)(iVar1 + 0x38),iVar4,uVar2);
      *(uint *)(iVar1 + 0x6c) = uVar2;
      *(uint *)(iVar1 + 0x5c) = uVar2;
      uVar3 = (uint)**(byte * PTR32 *)(iVar1 + 0x38);
      *(uint *)(iVar1 + 0x48) = uVar3;
      uVar5 = 0;
      *(uint *)(iVar1 + 0x48) =
           (uVar3 << ((byte)*(undefined4 *)(iVar1 + 0x58) & 0x1f) ^
           (uint)(*(byte * PTR32 *)(iVar1 + 0x38))[1]) & *(uint *)(iVar1 + 0x54);
      do {
        uVar3 = ((uint)*((byte *)GEN_TOP((*(int *)(iVar1 + 0x38) + 2 + uVar5))) ^
                *(int *)(iVar1 + 0x48) << ((byte)*(undefined4 *)(iVar1 + 0x58) & 0x1f)) &
                *(uint *)(iVar1 + 0x54);
        *(uint *)(iVar1 + 0x48) = uVar3;
        *((undefined2 *)GEN_TOP((*(int *)(iVar1 + 0x40) + (*(uint *)(iVar1 + 0x34) & uVar5) * 2))) =
             *((undefined2 *)GEN_TOP((*(int *)(iVar1 + 0x44) + uVar3 * 2)));
        *((short *)GEN_TOP((*(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x48) * 2))) = (short)uVar5;
        uVar5 = uVar5 + 1;
      } while (uVar5 <= uVar2 - 3);
    }
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_004c99d0 */
GEN_FRAME uint GEN_STDCALL F_004c99d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c99d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x18) == 2)) {
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_004c9a00 */
GEN_FRAME uint GEN_STDCALL F_004c9a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c9a00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x16bc))) = param_2;
    *((ushort *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x16b8))) =
         (1 << ((byte)param_2 & 0x1f)) - 1U & (ushort)param_3;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_004c9a50 */
GEN_FRAME uint GEN_STDCALL F_004c9a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4c9a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x8c) = param_2;
    *(undefined4 *)(iVar1 + 0x80) = param_3;
    *(undefined4 *)(iVar1 + 0x90) = param_4;
    *(undefined4 *)(iVar1 + 0x7c) = param_5;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_004c9aa0 */
GEN_FRAME uint GEN_STDCALL F_004c9aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c9aa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_2 + 7U >> 3) + 0xb + (param_2 + 0x3fU >> 6) + param_2;
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
      (*(int *)(iVar1 + 0x30) == 0xf)) && (*(int *)(iVar1 + 0x50) == 0xf)) {
    uVar2 = F_00b182b0(param_2);
  }
  return uVar2;
}

/* ref: FUN_004c9ae0 */
GEN_NOFRAME uint F_004c9ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c9ae0u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  *((char *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) = (char)((uint)in_ecx >> 8);
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  *((char *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) = (char)in_ecx;
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  return in_eax;
}

/* ref: FUN_004c9b10 */
GEN_NOFRAME uint F_004c9b10(unsigned int gen_a0)
{
  GEN_ENTER(0x4c9b10u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(in_eax + 0x1c);
  uVar4 = *(uint *)(uVar3 + 0x14);
  if (*(uint *)(in_eax + 0x10) < *(uint *)(uVar3 + 0x14)) {
    uVar4 = *(uint *)(in_eax + 0x10);
  }
  if (uVar4 != 0) {
    F_00c46aa0(*(undefined4 *)(in_eax + 0xc),*(undefined4 *)(uVar3 + 0x10),uVar4)
    ;
    *(int *)(in_eax + 0xc) = *(int *)(in_eax + 0xc) + uVar4;
    piVar1 = ((int *)GEN_TOP((*(int *)(in_eax + 0x1c) + 0x10)));
    *piVar1 = *piVar1 + uVar4;
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + uVar4;
    *(int *)(in_eax + 0x10) = *(int *)(in_eax + 0x10) - uVar4;
    uVar3 = *(uint *)(in_eax + 0x1c);
    *(int *)(uVar3 + 0x14) = *(int *)(uVar3 + 0x14) - uVar4;
    iVar2 = *(int *)(in_eax + 0x1c);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return uVar3;
}

/* ref: FUN_004c9b60 */
GEN_FRAME uint GEN_STDCALL F_004c9b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c9b60u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * in_eax;
  int iVar2;
  int * piVar3;
  bool bVar4;
  int * in_eax_00;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  in_eax_00 = param_1;
  if (((param_1 == (int *)0x0) || (in_eax = (undefined4 *)param_1[7], in_eax == (undefined4 *)0x0))
     || (4 < (*(uint *)&gen_a1))) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((in_eax[1] == 0x29a && ((*(uint *)&gen_a1) != 4)))) {
    param_1[6] = (int)REFG(undefined * PTR32, 0x10efcd0);
    return 0xfffffffe;
  }
  if (param_1[4] == 0) {
    param_1[6] = (int)REFG(undefined * PTR32, 0x10efcdc);
    return 0xfffffffb;
  }
  iVar2 = in_eax[10];
  *in_eax = param_1;
  in_eax[10] = (*(uint *)&gen_a1);
  if (in_eax[1] == 0x2a) {
    if (in_eax[6] == 2) {
      uVar6 = F_00b1a540(0,0,0);
      param_1[0xc] = uVar6;
      *(undefined1 *)(in_eax[2] + in_eax[5]) = 0x1f;
      in_eax[5] = in_eax[5] + 1;
      *(undefined1 *)(in_eax[5] + in_eax[2]) = 0x8b;
      in_eax[5] = in_eax[5] + 1;
      *(undefined1 *)(in_eax[5] + in_eax[2]) = 8;
      in_eax[5] = in_eax[5] + 1;
      piVar3 = (int *)in_eax[7];
      if (piVar3 == (int *)0x0) {
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        if (in_eax[0x21] == 9) {
          uVar5 = 2;
        }
        else if (((int)in_eax[0x22] < 2) && (1 < (int)in_eax[0x21])) {
          uVar5 = 0;
        }
        else {
          uVar5 = 4;
        }
        *(undefined1 *)(in_eax[5] + in_eax[2]) = uVar5;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0xb;
        in_eax[5] = in_eax[5] + 1;
        in_eax[1] = 0x71;
      }
      else {
        *(byte *)(in_eax[5] + in_eax[2]) =
             (-(piVar3[9] != 0) & 0x10U) + (-(piVar3[0xb] != 0) & 2U) + (-(piVar3[7] != 0) & 8U) +
             (-(piVar3[4] != 0) & 4U) + (*piVar3 != 0);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 4);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 5);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 6);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 7);
        in_eax[5] = in_eax[5] + 1;
        if (in_eax[0x21] == 9) {
          uVar5 = 2;
        }
        else if (((int)in_eax[0x22] < 2) && (1 < (int)in_eax[0x21])) {
          uVar5 = 0;
        }
        else {
          uVar5 = 4;
        }
        *(undefined1 *)(in_eax[5] + in_eax[2]) = uVar5;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 0xc);
        in_eax[5] = in_eax[5] + 1;
        iVar7 = in_eax[5];
        if (*(int *)(in_eax[7] + 0x10) != 0) {
          *(undefined1 *)(iVar7 + in_eax[2]) = *(undefined1 *)(in_eax[7] + 0x14);
          in_eax[5] = in_eax[5] + 1;
          *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 0x15);
          in_eax[5] = in_eax[5] + 1;
          iVar7 = in_eax[5];
        }
        if (*(int *)(in_eax[7] + 0x2c) != 0) {
          uVar6 = F_00b1a540(param_1[0xc],in_eax[2],iVar7);
          param_1[0xc] = uVar6;
        }
        in_eax[8] = 0;
        in_eax[1] = 0x45;
      }
    }
    else {
      if (((int)in_eax[0x22] < 2) && (iVar7 = in_eax[0x21], 1 < iVar7)) {
        if (iVar7 < 6) {
          iVar7 = 1;
        }
        else {
          iVar7 = (iVar7 != 6) + 2;
        }
      }
      else {
        iVar7 = 0;
      }
      uVar6 = (in_eax[0xc] - 8) * 0x1000 + 0x800U | iVar7 << 6;
      if (in_eax[0x1b] != 0) {
        uVar6 = uVar6 | 0x20;
      }
      in_eax[1] = 0x71;
      uVar6 = F_004c9ae0(in_eax,(uVar6 / 0x1f + 1) * 0x1f);
      if (in_eax[0x1b] != 0) {
        uVar6 = F_004c9ae0(uVar6,(uint)*(ushort *)((int)param_1 + 0x32));
        F_004c9ae0(uVar6,(uint)*(ushort *)(param_1 + 0xc));
      }
      uVar6 = F_00b17ee0(0,0,0);
      param_1[0xc] = uVar6;
    }
  }
  if (in_eax[1] == 0x45) {
    if (*(int *)(in_eax[7] + 0x10) != 0) {
      uVar6 = in_eax[5];
      param_1 = (int *)uVar6;
      if ((uint)in_eax[8] < (uint)*(ushort *)(in_eax[7] + 0x14)) {
        do {
          uVar6 = in_eax[5];
          if (uVar6 == in_eax[3]) {
            if ((*(int *)(in_eax[7] + 0x2c) != 0) && (param_1 < uVar6)) {
              uVar6 = F_00b1a540(in_eax_00[0xc],in_eax[2] + (int)param_1,uVar6 - (int)param_1);
              in_eax_00[0xc] = uVar6;
            }
            F_004c9b10(in_eax_00);
            uVar6 = in_eax[5];
            param_1 = (int *)uVar6;
            if (uVar6 == in_eax[3]) break;
          }
          *(undefined1 *)(uVar6 + in_eax[2]) =
               *((undefined1 *)GEN_TOP((*(int *)(in_eax[7] + 0x10) + in_eax[8])));
          in_eax[5] = in_eax[5] + 1;
          in_eax[8] = in_eax[8] + 1;
          uVar6 = (uint)param_1;
        } while ((uint)in_eax[8] < (uint)*(ushort *)(in_eax[7] + 0x14));
      }
      if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar6 < (uint)in_eax[5])) {
        uVar6 = F_00b1a540(in_eax_00[0xc],in_eax[2] + uVar6,in_eax[5] - uVar6);
        in_eax_00[0xc] = uVar6;
      }
      if (in_eax[8] != *(int *)(in_eax[7] + 0x14)) goto LAB_004c9f58;
      in_eax[8] = 0;
    }
    in_eax[1] = 0x49;
  }
LAB_004c9f58: ;
  if (in_eax[1] == 0x49) {
    if (*(int *)(in_eax[7] + 0x1c) != 0) {
      uVar6 = in_eax[5];
      do {
        uVar8 = in_eax[5];
        if (uVar8 == in_eax[3]) {
          if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar6 < uVar8)) {
            uVar6 = F_00b1a540(in_eax_00[0xc],in_eax[2] + uVar6,uVar8 - uVar6);
            in_eax_00[0xc] = uVar6;
          }
          F_004c9b10(in_eax_00);
          uVar8 = in_eax[5];
          uVar6 = uVar8;
          if (uVar8 == in_eax[3]) {
            bVar4 = true;
            goto LAB_004c9fd2;
          }
        }
        cVar1 = *((char *)GEN_TOP((*(int *)(in_eax[7] + 0x1c) + in_eax[8])));
        in_eax[8] = in_eax[8] + 1;
        *(char *)(uVar8 + in_eax[2]) = cVar1;
        in_eax[5] = in_eax[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
      uVar8 = uVar6;
LAB_004c9fd2: ;
      if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar8 < (uint)in_eax[5])) {
        uVar6 = F_00b1a540(in_eax_00[0xc],in_eax[2] + uVar8,in_eax[5] - uVar8);
        in_eax_00[0xc] = uVar6;
      }
      if (bVar4) goto LAB_004ca005;
      in_eax[8] = 0;
    }
    in_eax[1] = 0x5b;
  }
LAB_004ca005: ;
  if (in_eax[1] == 0x5b) {
    if (*(int *)(in_eax[7] + 0x24) != 0) {
      uVar6 = in_eax[5];
      do {
        uVar8 = in_eax[5];
        if (uVar8 == in_eax[3]) {
          if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar6 < uVar8)) {
            uVar6 = F_00b1a540(in_eax_00[0xc],in_eax[2] + uVar6,uVar8 - uVar6);
            in_eax_00[0xc] = uVar6;
          }
          F_004c9b10(in_eax_00);
          uVar8 = in_eax[5];
          uVar6 = uVar8;
          if (uVar8 == in_eax[3]) {
            bVar4 = true;
            goto LAB_004ca080;
          }
        }
        cVar1 = *((char *)GEN_TOP((*(int *)(in_eax[7] + 0x24) + in_eax[8])));
        in_eax[8] = in_eax[8] + 1;
        *(char *)(uVar8 + in_eax[2]) = cVar1;
        in_eax[5] = in_eax[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
      uVar8 = uVar6;
LAB_004ca080: ;
      if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar8 < (uint)in_eax[5])) {
        uVar6 = F_00b1a540(in_eax_00[0xc],in_eax[2] + uVar8,in_eax[5] - uVar8);
        in_eax_00[0xc] = uVar6;
      }
      if (bVar4) goto LAB_004ca0b0;
    }
    in_eax[1] = 0x67;
  }
LAB_004ca0b0: ;
  if (in_eax[1] == 0x67) {
    if (*(int *)(in_eax[7] + 0x2c) != 0) {
      if ((uint)in_eax[3] < in_eax[5] + 2) {
        F_004c9b10(in_eax_00);
      }
      if ((uint)in_eax[3] < in_eax[5] + 2) goto LAB_004ca111;
      *(char *)(in_eax[5] + in_eax[2]) = (char)in_eax_00[0xc];
      in_eax[5] = in_eax[5] + 1;
      *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x31);
      in_eax[5] = in_eax[5] + 1;
      uVar6 = F_00b1a540(0,0,0);
      in_eax_00[0xc] = uVar6;
    }
    in_eax[1] = 0x71;
  }
LAB_004ca111: ;
  if (in_eax[5] == 0) {
    if (((in_eax_00[1] == 0) && ((int)(*(uint *)&gen_a1) <= iVar2)) && ((*(uint *)&gen_a1) != 4)) {
      in_eax_00[6] = (int)REFG(undefined * PTR32, 0x10efcdc);
      return 0xfffffffb;
    }
  }
  else {
    F_004c9b10(in_eax_00);
    if (in_eax_00[4] == 0) {
      in_eax[10] = 0xffffffff;
      return 0;
    }
  }
  if (in_eax[1] == 0x29a) {
    if (in_eax_00[1] != 0) {
      in_eax_00[6] = (int)REFG(undefined * PTR32, 0x10efcdc);
      return 0xfffffffb;
    }
LAB_004ca18f: ;
    if ((in_eax[0x1d] == 0) && (((*(uint *)&gen_a1) == 0 || (in_eax[1] == 0x29a)))) goto LAB_004ca255;
  }
  else if (in_eax_00[1] == 0) goto LAB_004ca18f;
  uVar6 = (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x1094940))[in_eax[0x21] * 3])))(in_eax,(*(uint *)&gen_a1));
  if ((uVar6 == 2) || (uVar6 == 3)) {
    in_eax[1] = 0x29a;
  }
  if ((uVar6 == 0) || (uVar6 == 2)) {
    if (in_eax_00[4] != 0) {
      return 0;
    }
    in_eax[10] = 0xffffffff;
    return 0;
  }
  if (uVar6 == 1) {
    if ((*(uint *)&gen_a1) == 1) {
      F_00b19a50(in_eax);
    }
    else {
      F_00b199a0(in_eax,0,0,0);
      if ((*(uint *)&gen_a1) == 3) {
        *(undefined2 *)(in_eax[0x11] - 2 + in_eax[0x13] * 2) = 0;
        F_00c48350((undefined *)in_eax[0x11],0,in_eax[0x13] * 2 - 2);
      }
    }
    F_004c9b10(in_eax_00);
    if (in_eax_00[4] == 0) {
      in_eax[10] = 0xffffffff;
      return 0;
    }
  }
LAB_004ca255: ;
  if ((*(uint *)&gen_a1) != 4) {
    return 0;
  }
  if ((int)in_eax[6] < 1) {
    return 1;
  }
  if (in_eax[6] == 2) {
    *(char *)(in_eax[2] + in_eax[5]) = (char)in_eax_00[0xc];
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x31);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x32);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x33);
    in_eax[5] = in_eax[5] + 1;
    *(char *)(in_eax[5] + in_eax[2]) = (char)in_eax_00[2];
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 9);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 10);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0xb);
    in_eax[5] = in_eax[5] + 1;
  }
  else {
    uVar6 = F_004c9ae0(in_eax,(uint)*(ushort *)((int)in_eax_00 + 0x32));
    F_004c9ae0(uVar6,(uint)*(ushort *)(in_eax_00 + 0xc));
  }
  F_004c9b10(in_eax_00);
  if (0 < (int)in_eax[6]) {
    in_eax[6] = -in_eax[6];
  }
  return (uint)(in_eax[5] == 0);
}

/* ref: FUN_004ca370 */
GEN_FRAME uint GEN_STDCALL F_004ca370(unsigned int gen_a0)
{
  GEN_ENTER(0x4ca370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  iVar2 = *(int *)(iVar1 + 4);
  if ((((iVar2 != 0x2a) && (iVar2 != 0x45)) && (iVar2 != 0x49)) &&
     (((iVar2 != 0x5b && (iVar2 != 0x67)) && ((iVar2 != 0x71 && (iVar2 != 0x29a)))))) {
    return 0xfffffffe;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 8));
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x44)));
  if (iVar1 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x40)));
  if (iVar1 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x38)));
  if (iVar1 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return (iVar2 != 0x71) - 1 & 0xfffffffd;
}

/* ref: FUN_004ca450 */
GEN_FRAME uint GEN_STDCALL F_004ca450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ca450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (((param_2 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x0)) ||
     (iVar1 = param_2[7], iVar1 == 0)) {
    return 0xfffffffe;
  }
  puVar3 = param_2;
  puVar6 = param_1;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = ((undefined4 *)GEN_TOP((*(code *)param_1[8])(param_1[10],1,0x16c0)));
  if (puVar3 != (undefined4 *)0x0) {
    uVar16 = 0x16c0;
    param_1[7] = puVar3;
    puVar6 = puVar3;
    iVar5 = iVar1;
    F_00c46aa0(puVar3,iVar1,0x16c0);
    uVar14 = puVar3[0xb];
    *puVar3 = param_1;
    uVar13 = param_1[10];
    uVar15 = 2;
    uVar4 = (*(code *)param_1[8])(uVar13,uVar14,2);
    uVar11 = puVar3[0xb];
    puVar3[0xe] = uVar4;
    uVar10 = param_1[10];
    uVar12 = 2;
    uVar4 = (*(code *)param_1[8])(uVar10,uVar11,2);
    uVar8 = puVar3[0x13];
    puVar3[0x10] = uVar4;
    uVar7 = param_1[10];
    uVar9 = 2;
    uVar4 = (*(code *)param_1[8])(uVar7,uVar8,2);
    puVar3[0x11] = uVar4;
    uVar4 = (*(code *)param_1[8])
                      (param_1[10],puVar3[0x5a7],4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                       uVar14,uVar15,puVar6,iVar5,uVar16);
    puVar3[2] = uVar4;
    if (((puVar3[0xe] != 0) && (puVar3[0x10] != 0)) && ((puVar3[0x11] != 0 && (uVar4 != 0)))) {
      F_00c46aa0(puVar3[0xe],*(undefined4 *)(iVar1 + 0x38),puVar3[0xb] * 2);
      F_00c46aa0(puVar3[0x10],*(undefined4 *)(iVar1 + 0x40),puVar3[0xb] * 2);
      F_00c46aa0(puVar3[0x11],*(undefined4 *)(iVar1 + 0x44),puVar3[0x13] * 2);
      F_00c46aa0(puVar3[2],*(undefined4 *)(iVar1 + 8),puVar3[3]);
      uVar2 = puVar3[0x5a7];
      puVar3[4] = (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 8)) + puVar3[2];
      puVar3[0x5a9] = uVar4 + (uVar2 & 0xfffffffe);
      puVar3[0x5a6] = puVar3[2] + uVar2 * 2 + uVar2;
      puVar3[0x2c9] = puVar3 + 0x262;
      puVar3[0x2c6] = puVar3 + 0x25;
      puVar3[0x2cc] = puVar3 + 0x29f;
      return 0;
    }
    F_004ca370(param_1);
  }
  return 0xfffffffc;
}

/* ref: FUN_004ca5f0 */
GEN_FRAME uint F_004ca5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ca5f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = in_esi[1];
  uVar2 = uVar1;
  if (in_ecx < uVar1) {
    uVar2 = in_ecx;
  }
  if (uVar2 == 0) {
    return 0;
  }
  in_esi[1] = uVar1 - uVar2;
  if (*(int *)(in_esi[7] + 0x18) == 1) {
    uVar1 = F_00b17ee0(in_esi[0xc],*in_esi,uVar2);
  }
  else {
    if (*(int *)(in_esi[7] + 0x18) != 2) goto LAB_004ca63c;
    uVar1 = F_00b1a540(in_esi[0xc],*in_esi,uVar2);
  }
  in_esi[0xc] = uVar1;
LAB_004ca63c: ;
  F_00c46aa0(param_3,*in_esi,uVar2);
  *in_esi = *in_esi + uVar2;
  in_esi[2] = in_esi[2] + uVar2;
  return uVar2;
}

/* ref: FUN_004ca660 */
GEN_NOFRAME uint F_004ca660(unsigned int gen_a0)
{
  GEN_ENTER(0x4ca660u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  ushort uVar1;
  int iVar2;
  
  *(int *)(in_esi + 0x3c) = *(int *)(in_esi + 0x2c) * 2;
  *((undefined2 *)GEN_TOP((*(int *)(in_esi + 0x44) - 2 + *(int *)(in_esi + 0x4c) * 2))) = 0;
  F_00c48350(*(undefined * PTR32 *)(in_esi + 0x44),0,*(int *)(in_esi + 0x4c) * 2 - 2);
  iVar2 = *(int *)(in_esi + 0x84) * 0xc;
  *(uint *)(in_esi + 0x80) = (uint)*(ushort *)(&REFG(undefined, 0x109493a) + *(int *)(in_esi + 0x84) * 0xc);
  *(uint *)(in_esi + 0x8c) = (uint)*(ushort *)(&REFG(undefined, 0x1094938) + iVar2);
  *(uint *)(in_esi + 0x90) = (uint)*(ushort *)(&REFG(undefined, 0x109493c) + iVar2);
  uVar1 = *(ushort *)(&REFG(undefined, 0x109493e) + iVar2);
  *(undefined4 *)(in_esi + 0x6c) = 0;
  *(undefined4 *)(in_esi + 0x5c) = 0;
  *(undefined4 *)(in_esi + 0x74) = 0;
  *(undefined4 *)(in_esi + 0x68) = 0;
  *(undefined4 *)(in_esi + 0x48) = 0;
  *(uint *)(in_esi + 0x7c) = (uint)uVar1;
  *(undefined4 *)(in_esi + 0x78) = 2;
  *(undefined4 *)(in_esi + 0x60) = 2;
  return 2;
}

/* ref: FUN_004ca6f0 */
GEN_FRAME uint F_004ca6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ca6f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char * pcVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  char * pcVar5;
  char * pcVar6;
  char * pcVar7;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_6;
  char local_5;
  
  uVar2 = *(uint *)((*(int *)&gen_args[0]) + 0x6c);
  local_c = *(uint *)((*(int *)&gen_args[0]) + 0x7c);
  pcVar4 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x38) + uVar2)));
  pcVar3 = *(char * PTR32 *)((*(int *)&gen_args[0]) + 0x78);
  if (*(int *)((*(int *)&gen_args[0]) + 0x2c) - 0x106U < uVar2) {
    local_14 = (uVar2 - *(int *)((*(int *)&gen_args[0]) + 0x2c)) + 0x106;
  }
  else {
    local_14 = 0;
  }
  local_5 = pcVar4[(int)(pcVar3 - 1)];
  local_6 = pcVar4[(int)pcVar3];
  pcVar1 = pcVar4 + 0x102;
  if (*(char * PTR32 *)((*(int *)&gen_args[0]) + 0x8c) <= pcVar3) {
    local_c = local_c >> 2;
  }
  local_10 = *(uint *)((*(int *)&gen_args[0]) + 0x90);
  if (*(uint *)((*(int *)&gen_args[0]) + 0x74) < *(uint *)((*(int *)&gen_args[0]) + 0x90)) {
    local_10 = *(uint *)((*(int *)&gen_args[0]) + 0x74);
  }
  do {
    pcVar7 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x38) + (*(uint *)&gen_args[1]))));
    if ((((pcVar7[(int)pcVar3] == local_6) && (pcVar7[(int)(pcVar3 - 1)] == local_5)) &&
        (*pcVar7 == *pcVar4)) && (pcVar7[1] == pcVar4[1])) {
      pcVar7 = pcVar7 + 2;
      pcVar5 = pcVar4 + 2;
      while (((((pcVar6 = pcVar5 + 1, pcVar5[1] == pcVar7[1] &&
                (pcVar6 = pcVar5 + 2, pcVar5[2] == pcVar7[2])) &&
               ((pcVar6 = pcVar5 + 3, pcVar5[3] == pcVar7[3] &&
                ((pcVar6 = pcVar5 + 4, pcVar5[4] == pcVar7[4] &&
                 (pcVar6 = pcVar5 + 5, pcVar5[5] == pcVar7[5])))))) &&
              (pcVar6 = pcVar5 + 6, pcVar5[6] == pcVar7[6])) &&
             (pcVar6 = pcVar5 + 7, pcVar5[7] == pcVar7[7]))) {
        pcVar6 = pcVar5 + 8;
        pcVar7 = pcVar7 + 8;
        if ((pcVar5[8] != *pcVar7) || (pcVar5 = pcVar6, pcVar1 <= pcVar6)) break;
      }
      pcVar7 = pcVar6 + (0x102 - (int)pcVar1);
      if ((int)pcVar3 < (int)pcVar7) {
        *(uint *)((*(int *)&gen_args[0]) + 0x70) = (*(uint *)&gen_args[1]);
        if ((int)local_10 <= (int)pcVar7) {
LAB_004ca83a: ;
          if (*(char * PTR32 *)((*(int *)&gen_args[0]) + 0x74) < pcVar7) {
            pcVar7 = *(char * PTR32 *)((*(int *)&gen_args[0]) + 0x74);
          }
          return (uint)pcVar7;
        }
        local_5 = pcVar4[(int)(pcVar6 + (0x101 - (int)pcVar1))];
        local_6 = pcVar4[(int)pcVar7];
        pcVar3 = pcVar7;
      }
    }
    pcVar7 = pcVar3;
    (*(uint *)&gen_args[1]) = (uint)*((ushort *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x40) + (*(uint *)((*(int *)&gen_args[0]) + 0x34) & (*(uint *)&gen_args[1])) * 2)));
    if (((*(uint *)&gen_args[1]) <= local_14) || (local_c = local_c - 1, pcVar3 = pcVar7, local_c == 0))
    goto LAB_004ca83a;
  } while( true );
}

/* ref: FUN_004ca850 */
GEN_NOFRAME uint F_004ca850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ca850u, gen_a0, gen_a1, 0u, 0u);
  int in_edx = (int)gen_a0;
  int in_esi = (int)gen_a1;
  char * pcVar1;
  char * pcVar2;
  char * pcVar3;
  char * pcVar4;
  
  pcVar1 = ((char *)GEN_TOP((*(int *)(in_esi + 0x6c) + *(int *)(in_esi + 0x38))));
  pcVar4 = ((char *)GEN_TOP((*(int *)(in_esi + 0x38) + in_edx)));
  if ((*pcVar4 == *pcVar1) && (pcVar4[1] == pcVar1[1])) {
    pcVar4 = pcVar4 + 2;
    pcVar2 = pcVar1 + 2;
    while (((((pcVar3 = pcVar2 + 1, pcVar2[1] == pcVar4[1] &&
              (pcVar3 = pcVar2 + 2, pcVar2[2] == pcVar4[2])) &&
             (pcVar3 = pcVar2 + 3, pcVar2[3] == pcVar4[3])) &&
            ((pcVar3 = pcVar2 + 4, pcVar2[4] == pcVar4[4] &&
             (pcVar3 = pcVar2 + 5, pcVar2[5] == pcVar4[5])))) &&
           ((pcVar3 = pcVar2 + 6, pcVar2[6] == pcVar4[6] &&
            (pcVar3 = pcVar2 + 7, pcVar2[7] == pcVar4[7]))))) {
      pcVar3 = pcVar2 + 8;
      pcVar4 = pcVar4 + 8;
      if ((pcVar2[8] != *pcVar4) || (pcVar2 = pcVar3, pcVar1 + 0x102 <= pcVar3)) break;
    }
    pcVar3 = pcVar3 + (0x102 - (int)(pcVar1 + 0x102));
    if (2 < (int)pcVar3) {
      *(int *)(in_esi + 0x70) = in_edx;
      if (pcVar3 <= *(char * PTR32 *)(in_esi + 0x74)) {
        return (uint)pcVar3;
      }
      return (uint)*(char * PTR32 *)(in_esi + 0x74);
    }
  }
  return 2;
}

/* ref: FUN_004ca8f0 */
GEN_NOFRAME uint F_004ca8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ca8f0u, gen_a0, 0u, 0u, 0u);
  uint * in_edi = (uint *)(uintptr_t)gen_a0;
  ushort * puVar1;
  uint uVar2;
  short sVar3;
  short * psVar4;
  uint uVar5;
  int in_ecx;
  
  uVar2 = in_edi[0xb];
  while( true ) {
    in_ecx = (in_edi[0xf] - in_edi[0x1d]) - in_edi[0x1b];
    if ((uVar2 - 0x106) + in_edi[0xb] <= in_edi[0x1b]) {
      F_00c46aa0(in_edi[0xe],in_edi[0xe] + uVar2,uVar2);
      uVar5 = in_edi[0x13];
      in_edi[0x1c] = in_edi[0x1c] - uVar2;
      in_edi[0x1b] = in_edi[0x1b] - uVar2;
      in_edi[0x17] = in_edi[0x17] - uVar2;
      psVar4 = (short *)(in_edi[0x11] + uVar5 * 2);
      do {
        puVar1 = (ushort *)(psVar4 - 1);
        psVar4 = psVar4 - 1;
        if (*puVar1 < uVar2) {
          sVar3 = 0;
        }
        else {
          sVar3 = *puVar1 - (short)uVar2;
        }
        uVar5 = uVar5 - 1;
        *psVar4 = sVar3;
      } while (uVar5 != 0);
      psVar4 = (short *)(in_edi[0x10] + uVar2 * 2);
      uVar5 = uVar2;
      do {
        puVar1 = (ushort *)(psVar4 - 1);
        psVar4 = psVar4 - 1;
        if (*puVar1 < uVar2) {
          sVar3 = 0;
        }
        else {
          sVar3 = *puVar1 - (short)uVar2;
        }
        uVar5 = uVar5 - 1;
        *psVar4 = sVar3;
      } while (uVar5 != 0);
      in_ecx = in_ecx + uVar2;
    }
    uVar5 = *in_edi;
    if (*(int *)(uVar5 + 4) == 0) break;
    uVar5 = F_004ca5f0(in_ecx,uVar5,in_edi[0x1d] + in_edi[0x1b] + in_edi[0xe]);
    in_edi[0x1d] = in_edi[0x1d] + uVar5;
    if (2 < in_edi[0x1d]) {
      uVar5 = (uint)*(byte *)(in_edi[0x1b] + in_edi[0xe]);
      in_edi[0x12] = uVar5;
      uVar5 = (uVar5 << ((byte)in_edi[0x16] & 0x1f) ^
              (uint)((byte *)(in_edi[0x1b] + in_edi[0xe]))[1]) & in_edi[0x15];
      in_edi[0x12] = uVar5;
    }
    if (0x105 < in_edi[0x1d]) {
      return uVar5;
    }
    if (*(int *)(*in_edi + 4) == 0) {
      return uVar5;
    }
  }
  return uVar5;
}

/* ref: FUN_004ca9d0 */
GEN_FRAME uint F_004ca9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ca9d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar5 = param_1[3] - 5U;
  }
  do {
    uVar3 = param_1[0x1d];
    if (uVar3 < 2) {
      F_004ca8f0(param_1);
      uVar3 = param_1[0x1d];
      if (uVar3 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[0xe] + iVar2;
        }
        F_00b19c50(param_1,iVar4,param_1[0x1b] - iVar2,(uint)(param_2 == 4));
        param_1[0x17] = param_1[0x1b];
        F_004c9b10(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (uint)(param_2 == 4) * 2 + 1;
        }
        return (param_2 != 4) - 1 & 2;
      }
    }
    piVar1 = param_1 + 0x1b;
    *piVar1 = *piVar1 + uVar3;
    iVar2 = param_1[0x17];
    param_1[0x1d] = 0;
    uVar3 = iVar2 + uVar5;
    if ((*piVar1 == 0) || (uVar3 <= (uint)param_1[0x1b])) {
      param_1[0x1d] = param_1[0x1b] - uVar3;
      param_1[0x1b] = uVar3;
      if (iVar2 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xe] + iVar2;
      }
      F_00b19c50(param_1,iVar4,uVar3 - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_004c9b10(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    iVar2 = param_1[0x17];
    if (param_1[0xb] - 0x106U <= (uint)(param_1[0x1b] - iVar2)) {
      if (iVar2 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xe] + iVar2;
      }
      F_00b19c50(param_1,iVar4,param_1[0x1b] - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_004c9b10(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

/* ref: FUN_004cab10 */
GEN_FRAME uint F_004cab10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cab10u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  bool bVar9;
  
  uVar8 = 0;
  do {
    uVar4 = param_1[0x1d];
    if (uVar4 < 0x106) {
      F_004ca8f0(param_1);
      uVar4 = param_1[0x1d];
      if ((uVar4 < 0x106) && ((*(int *)&gen_a1) == 0)) {
        return 0;
      }
      if (uVar4 == 0) {
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = param_1[0xe] + iVar2;
        }
        F_00b19c50(param_1,iVar5,param_1[0x1b] - iVar2,(uint)((*(int *)&gen_a1) == 4));
        param_1[0x17] = param_1[0x1b];
        F_004c9b10(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (uint)((*(int *)&gen_a1) == 4) * 2 + 1;
        }
        return ((*(int *)&gen_a1) != 4) - 1 & 2;
      }
    }
    if (2 < uVar4) {
      uVar8 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar8;
      *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2))) =
           *(undefined2 *)(param_1[0x11] + uVar8 * 2);
      uVar8 = (uint)*((ushort *)GEN_TOP((param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2)));
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
    }
    if (((uVar8 != 0) && (param_1[0x1b] - uVar8 <= param_1[0xb] - 0x106U)) && (param_1[0x22] != 2))
    {
      if (param_1[0x22] == 3) {
        if (param_1[0x1b] - uVar8 != 1) goto LAB_004cabe1;
        uVar4 = F_004ca850(uVar8,param_1);
      }
      else {
        uVar4 = F_004ca6f0(param_1,uVar8);
      }
      param_1[0x18] = uVar4;
    }
LAB_004cabe1: ;
    if ((uint)param_1[0x18] < 3) {
      bVar3 = *(byte *)(param_1[0x1b] + param_1[0xe]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar3;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar3 + 0x25) = (short)param_1[bVar3 + 0x25] + 1;
      bVar9 = param_1[0x5a8] == param_1[0x5a7] - 1;
      param_1[0x1d] = param_1[0x1d] - 1;
      param_1[0x1b] = param_1[0x1b] + 1;
    }
    else {
      sVar7 = (short)param_1[0x1b] - (short)param_1[0x1c];
      iVar2 = param_1[0x18];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar7;
      bVar3 = (char)iVar2 - 3;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar3;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&REFG(undefined, 0x10eda50))[(int)(bVar3)] + 0x126) =
           (short)param_1[(byte)(&REFG(undefined, 0x10eda50))[(int)(bVar3)] + 0x126] + 1;
      uVar6 = sVar7 - 1;
      if (uVar6 < 0x100) {
        bVar3 = (&REFG(undefined, 0x10ed850))[(int)(uVar6)];
      }
      else {
        bVar3 = (&REFG(undefined, 0x10ed950))[(int)(uVar6 >> 7)];
      }
      *(short *)(param_1 + bVar3 + 0x262) = (short)param_1[bVar3 + 0x262] + 1;
      bVar9 = param_1[0x5a8] == param_1[0x5a7] - 1;
      uVar4 = param_1[0x18];
      param_1[0x1d] = param_1[0x1d] - uVar4;
      if (((uint)param_1[0x20] < uVar4) || ((uint)param_1[0x1d] < 3)) {
        param_1[0x1b] = param_1[0x1b] + uVar4;
        param_1[0x18] = 0;
        uVar4 = (uint)*(byte *)(param_1[0x1b] + param_1[0xe]);
        param_1[0x12] = uVar4;
        param_1[0x12] =
             (uVar4 << ((byte)param_1[0x16] & 0x1f) ^
             (uint)((byte *)(param_1[0x1b] + param_1[0xe]))[1]) & param_1[0x15];
      }
      else {
        param_1[0x18] = uVar4 - 1;
        do {
          param_1[0x1b] = param_1[0x1b] + 1;
          uVar8 = ((uint)*(byte *)(param_1[0x1b] + 2U + param_1[0xe]) ^
                  param_1[0x12] << ((byte)param_1[0x16] & 0x1f)) & param_1[0x15];
          param_1[0x12] = uVar8;
          *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2))) =
               *(undefined2 *)(param_1[0x11] + uVar8 * 2);
          uVar8 = (uint)*((ushort *)GEN_TOP((param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2)));
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
          piVar1 = param_1 + 0x18;
          *piVar1 = *piVar1 - 1;
        } while (*piVar1 != 0);
        param_1[0x1b] = param_1[0x1b] + 1;
      }
    }
    if (bVar9) {
      iVar2 = param_1[0x17];
      if (iVar2 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1[0xe] + iVar2;
      }
      F_00b19c50(param_1,iVar5,param_1[0x1b] - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_004c9b10(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

/* ref: FUN_004cae30 */
GEN_FRAME uint F_004cae30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cae30u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  uint local_8;
  
  uVar10 = 0;
  local_8 = 0;
LAB_004cae40: ;
  do {
    uVar6 = param_1[0x1d];
    if (uVar6 < 0x106) {
      F_004ca8f0(param_1);
      uVar6 = param_1[0x1d];
      if ((uVar6 < 0x106) && ((*(int *)&gen_a1) == 0)) {
        return 0;
      }
      if (uVar6 == 0) {
        if (param_1[0x1a] != 0) {
          bVar5 = *(byte *)(param_1[0x1b] - 1 + param_1[0xe]);
          *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
          *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
          param_1[0x5a8] = param_1[0x5a8] + 1;
          *(short *)(param_1 + bVar5 + 0x25) = (short)param_1[bVar5 + 0x25] + 1;
          param_1[0x1a] = 0;
        }
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = param_1[0xe] + iVar2;
        }
        F_00b19c50(param_1,iVar8,param_1[0x1b] - iVar2,(uint)((*(int *)&gen_a1) == 4));
        param_1[0x17] = param_1[0x1b];
        F_004c9b10(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (uint)((*(int *)&gen_a1) == 4) * 2 + 1;
        }
        return ((*(int *)&gen_a1) != 4) - 1 & 2;
      }
    }
    if (2 < uVar6) {
      uVar10 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
               (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar10;
      *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2))) =
           *(undefined2 *)(param_1[0x11] + uVar10 * 2);
      uVar10 = (uint)*((ushort *)GEN_TOP((param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2)));
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
      local_8 = uVar10;
    }
    uVar6 = param_1[0x18];
    param_1[0x1e] = uVar6;
    param_1[0x19] = param_1[0x1c];
    param_1[0x18] = 2;
    if (((uVar10 != 0) && (uVar6 < (uint)param_1[0x20])) &&
       (param_1[0x1b] - uVar10 <= param_1[0xb] - 0x106U)) {
      if (param_1[0x22] != 2) {
        if (param_1[0x22] == 3) {
          if (param_1[0x1b] - uVar10 != 1) goto LAB_004caf1f;
          uVar6 = F_004ca850(uVar10,param_1);
        }
        else {
          uVar6 = F_004ca6f0(param_1,uVar10);
        }
        param_1[0x18] = uVar6;
      }
LAB_004caf1f: ;
      if (((uint)param_1[0x18] < 6) &&
         ((param_1[0x22] == 1 ||
          ((param_1[0x18] == 3 && (0x1000 < (uint)(param_1[0x1b] - param_1[0x1c]))))))) {
        param_1[0x18] = 2;
      }
    }
    if (((uint)param_1[0x1e] < 3) || ((uint)param_1[0x1e] < (uint)param_1[0x18])) {
      if (param_1[0x1a] == 0) {
        param_1[0x1b] = param_1[0x1b] + 1;
        param_1[0x1d] = param_1[0x1d] - 1;
        param_1[0x1a] = 1;
        goto LAB_004cae40;
      }
      bVar5 = *(byte *)(param_1[0x1b] - 1 + param_1[0xe]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar5 + 0x25) = (short)param_1[bVar5 + 0x25] + 1;
      if (param_1[0x5a8] == param_1[0x5a7] - 1) {
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = param_1[0xe] + iVar2;
        }
        F_00b19c50(param_1,iVar8,param_1[0x1b] - iVar2,0);
        param_1[0x17] = param_1[0x1b];
        F_004c9b10(*param_1);
      }
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1d] = param_1[0x1d] - 1;
    }
    else {
      sVar9 = (short)param_1[0x1b] - (short)param_1[0x19];
      iVar2 = param_1[0x1b];
      iVar8 = param_1[0x1d];
      iVar4 = param_1[0x1e];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar9 - 1;
      bVar5 = (char)iVar4 - 3;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&REFG(undefined, 0x10eda50))[(int)(bVar5)] + 0x126) =
           (short)param_1[(byte)(&REFG(undefined, 0x10eda50))[(int)(bVar5)] + 0x126] + 1;
      uVar7 = sVar9 - 2;
      if (uVar7 < 0x100) {
        bVar5 = (&REFG(undefined, 0x10ed850))[(int)(uVar7)];
      }
      else {
        bVar5 = (&REFG(undefined, 0x10ed950))[(int)(uVar7 >> 7)];
      }
      *(short *)(param_1 + bVar5 + 0x262) = (short)param_1[bVar5 + 0x262] + 1;
      iVar4 = param_1[0x5a7];
      iVar3 = param_1[0x5a8];
      param_1[0x1d] = param_1[0x1d] + (1 - param_1[0x1e]);
      param_1[0x1e] = param_1[0x1e] - 2;
      uVar10 = local_8;
      do {
        param_1[0x1b] = param_1[0x1b] + 1;
        uVar6 = param_1[0x1b];
        if (uVar6 <= (uint)(iVar2 - 3 + iVar8)) {
          uVar10 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
                   (uint)*(byte *)(param_1[0xe] + 2 + uVar6)) & param_1[0x15];
          param_1[0x12] = uVar10;
          *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & uVar6) * 2))) =
               *(undefined2 *)(param_1[0x11] + uVar10 * 2);
          uVar10 = (uint)*((ushort *)GEN_TOP((param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2)));
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
        }
        piVar1 = param_1 + 0x1e;
        *piVar1 = *piVar1 - 1;
      } while (*piVar1 != 0);
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1a] = 0;
      param_1[0x18] = 2;
      local_8 = uVar10;
      if (iVar3 != iVar4 - 1) goto LAB_004cae40;
      iVar2 = param_1[0x17];
      if (iVar2 < 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = param_1[0xe] + iVar2;
      }
      F_00b19c50(param_1,iVar8,param_1[0x1b] - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_004c9b10(*param_1);
    }
    if (*(int *)(*param_1 + 0x10) == 0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_004cb240 */
GEN_FRAME uint GEN_STDCALL F_004cb240(unsigned int gen_a0)
{
  GEN_ENTER(0x4cb240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int in_esi;
  uint uVar1;
  
  if ((((param_1 != 0) && (in_esi = *(int *)(param_1 + 0x1c), in_esi != 0)) &&
      (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(in_esi + 0x10) = *(undefined4 *)(in_esi + 8);
    *(undefined4 *)(in_esi + 0x14) = 0;
    if (*(int *)(in_esi + 0x18) < 0) {
      *(int *)(in_esi + 0x18) = -*(int *)(in_esi + 0x18);
    }
    *(uint *)(in_esi + 4) = (-(uint)(*(int *)(in_esi + 0x18) != 0) & 0xffffffb9) + 0x71;
    if (*(int *)(in_esi + 0x18) == 2) {
      uVar1 = F_00b1a540(0,0,0);
    }
    else {
      uVar1 = F_00b17ee0(0,0,0);
    }
    *(uint *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(in_esi + 0x28) = 0;
    F_00b19600(in_esi);
    F_004ca660(in_esi);
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_004cb2e0 */
GEN_FRAME uint GEN_STDCALL F_004cb2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cb2e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  if (param_2 == -1) {
    iVar4 = 6;
  }
  else {
    if (param_2 < 0) {
      return 0xfffffffe;
    }
    iVar4 = param_2;
    if (9 < param_2) {
      return 0xfffffffe;
    }
  }
  if (4 < param_3) {
    return 0xfffffffe;
  }
  iVar2 = iVar4 * 0xc;
  if (((*(undefined * PTR32 (*)[1])REFP(0x1094940))[*(int *)(iVar1 + 0x84) * 3] != (*(undefined * PTR32 (*)[1])REFP(0x1094940))[iVar4 * 3]) &&
     (*(int *)(param_1 + 8) != 0)) {
    uVar3 = F_004c9b60(param_1,1);
  }
  if (*(int *)(iVar1 + 0x84) != iVar4) {
    *(int *)(iVar1 + 0x84) = iVar4;
    *(uint *)(iVar1 + 0x80) = (uint)*(ushort *)(&REFG(undefined, 0x109493a) + iVar2);
    *(uint *)(iVar1 + 0x8c) = (uint)*(ushort *)(&REFG(undefined, 0x1094938) + iVar2);
    *(uint *)(iVar1 + 0x90) = (uint)*(ushort *)(&REFG(undefined, 0x109493c) + iVar2);
    *(uint *)(iVar1 + 0x7c) = (uint)*(ushort *)(&REFG(undefined, 0x109493e) + iVar2);
  }
  *(uint *)(iVar1 + 0x88) = param_3;
  return uVar3;
}

/* ref: FUN_004cb3c0 */
GEN_FRAME uint GEN_STDCALL F_004cb3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4cb3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  char * param_7 = (char *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_8;
  
  local_8 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(gen_code32 *)(param_1 + 0x20) = ((code *)REFP(0xb1a5a0));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(gen_code32 *)(param_1 + 0x24) = ((code *)REFP(0xb1a5c0));
  }
  if (param_2 == 0xffffffff) {
    param_2 = 6;
  }
  if (param_4 < 0) {
    local_8 = 0;
    param_4 = -param_4;
  }
  else if (0xf < param_4) {
    local_8 = 2;
    param_4 = param_4 - 0x10;
  }
  if (((param_5 - 1U < 9) && ((*(int *)&gen_a2) == 8)) &&
     ((param_4 - 8U < 8 && ((param_2 < 10 && ((*(uint *)&gen_a5) < 5)))))) {
    if (param_4 == 8) {
      param_4 = 9;
    }
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16c0)));
    if (piVar1 != (int *)0x0) {
      *(int * PTR32 *)(param_1 + 0x1c) = piVar1;
      piVar1[6] = local_8;
      piVar1[0xc] = param_4;
      iVar6 = 1 << ((byte)param_4 & 0x1f);
      iVar2 = 1 << ((byte)(param_5 + 7) & 0x1f);
      piVar1[0x14] = param_5 + 7;
      piVar1[0xd] = iVar6 - 1;
      piVar1[0x13] = iVar2;
      piVar1[0x15] = iVar2 - 1;
      *piVar1 = param_1;
      piVar1[7] = 0;
      piVar1[0xb] = iVar6;
      piVar1[0x16] = (param_5 + 9U) / 3;
      uVar12 = *(undefined4 *)(param_1 + 0x28);
      uVar13 = 2;
      uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x20))(uVar12,iVar6,2);
      iVar2 = piVar1[0xb];
      piVar1[0xe] = uVar3;
      uVar10 = *(undefined4 *)(param_1 + 0x28);
      uVar11 = 2;
      uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x20))(uVar10,iVar2,2);
      iVar8 = piVar1[0x13];
      piVar1[0x10] = uVar3;
      uVar7 = *(undefined4 *)(param_1 + 0x28);
      uVar9 = 2;
      uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x20))(uVar7,iVar8,2);
      piVar1[0x11] = uVar3;
      iVar4 = 1 << ((char)param_5 + 6U & 0x1f);
      piVar1[0x5a7] = iVar4;
      uVar5 = ((code *)*(gen_code32 *)(param_1 + 0x20))
                        (*(undefined4 *)(param_1 + 0x28),iVar4,4,uVar7,iVar8,uVar9,uVar10,iVar2,
                         uVar11,uVar12,iVar6,uVar13);
      uVar3 = piVar1[0x5a7];
      piVar1[2] = uVar5;
      piVar1[3] = uVar3 * 4;
      if ((((piVar1[0xe] != 0) && (piVar1[0x10] != 0)) && (piVar1[0x11] != 0)) && (uVar5 != 0)) {
        piVar1[0x5a9] = uVar5 + (uVar3 & 0xfffffffe);
        piVar1[0x5a6] = uVar5 + uVar3 * 3;
        piVar1[0x21] = param_2;
        piVar1[0x22] = (*(uint *)&gen_a5);
        *(undefined1 *)(piVar1 + 9) = 8;
        uVar3 = F_004cb240(param_1);
        return uVar3;
      }
      piVar1[1] = 0x29a;
      *(undefined * PTR32 *)(param_1 + 0x18) = REFG(undefined * PTR32, 0x10efcd8);
      F_004ca370(param_1);
    }
    return 0xfffffffc;
  }
  return 0xfffffffe;
}

/* ref: FUN_004cb5f0 */
GEN_FRAME uint GEN_STDCALL F_004cb5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4cb5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_004cb3c0(param_1,param_2,8,0xf,8,0,param_3,param_4);
  return uVar1;
}

/* ref: FUN_004cb680 */
GEN_FRAME uint F_004cb680(unsigned int gen_a0)
{
  GEN_ENTER(0x4cb680u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar4 = 0x1f;
  if (*(int *)(iVar1 + 0x118) == 0x1f) {
    puVar3 = (undefined4 *)(iVar1 + 0x120);
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    *(undefined4 *)(iVar1 + 0x118) = 0x1e;
  }
  *(int *)(iVar1 + 0x118) = *(int *)(iVar1 + 0x118) + 1;
  uVar2 = *(uint *)(iVar1 + 0x118);
  *(undefined4 *)(iVar1 + 0x120 + uVar2 * 4) = param_1;
  return uVar2;
}

/* ref: FUN_004cb6e0 */
GEN_FRAME uint F_004cb6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cb6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_004cb680(param_2);
  uVar1 = F_004cb680(param_1);
  return uVar1;
}

/* ref: FUN_004cb700 */
GEN_FRAME unsigned int F_004cb700(unsigned int gen_a0)
{
  GEN_ENTER(0x4cb700u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  F_004cb680((*(undefined4 *)&gen_args[0]));
  (*(undefined4 *)&gen_args[0]) = uVar1;
                    
  F_00c4d67d(&(*(undefined4 *)&gen_args[0]),&REFG(undefined, 0x12f5b00));
}

/* ref: FUN_004cb730 */
GEN_FRAME unsigned int F_004cb730(unsigned int gen_a0)
{
  GEN_ENTER(0x4cb730u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  
  bVar1 = F_00b1a5e0(&(*(undefined4 *)&gen_args[0]));
  if (bVar1 != 0) {
                    
    F_004cb700((*(undefined4 *)&gen_args[0]));
  }
  F_004cb680((*(undefined4 *)&gen_args[0]));
                    
  F_004cb700(0x4dbc);
}

/* ref: FUN_004cb770 */
GEN_FRAME unsigned int F_004cb770(unsigned int gen_a0)
{
  GEN_ENTER(0x4cb770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0x1c) {
                    
    F_004cb700(0xffffffff);
  }
  F_004cb680(param_1);
                    
  F_004cb700(0x4dbd);
}

/* ref: FUN_004cb7a0 */
GEN_FRAME unsigned int F_004cb7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cb7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_004cb680(param_2);
                    
  F_004cb700(param_1);
}

/* ref: FUN_004cb7f0 */
GEN_NOFRAME uint F_004cb7f0(void)
{
  GEN_ENTER(0x4cb7f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(int, 0x15d6870);
  *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_004cb850 */
GEN_FRAME byte F_004cb850(unsigned int gen_a0)
{
  GEN_ENTER(0x4cb850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar2 = *(int *)(iVar1 + 0x118);
  iVar3 = 0;
  if (-1 < iVar2) {
    piVar4 = (int *)(iVar1 + 0x120);
    do {
      if (*piVar4 == param_1) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 <= iVar2);
  }
  return 0;
}

/* ref: FUN_004cb930 */
GEN_FRAME uint F_004cb930(unsigned int gen_a0)
{
  GEN_ENTER(0x4cb930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
  uVar1 = F_004cb680(param_1);
  return uVar1;
}

/* ref: FUN_004cb960 */
GEN_FRAME uint F_004cb960(unsigned int gen_a0)
{
  GEN_ENTER(0x4cb960u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00b1a5e0(&(*(undefined4 *)&gen_args[0]));
  if (bVar1 != 0) {
    uVar2 = F_004cb680((*(undefined4 *)&gen_args[0]));
    return uVar2;
  }
  F_004cb680((*(undefined4 *)&gen_args[0]));
  uVar2 = F_004cb680(0x4dbc);
  return uVar2;
}

/* ref: FUN_004cb9a0 */
GEN_FRAME uint F_004cb9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4cb9a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 0x1c) {
    uVar1 = F_004cb680(0xffffffff);
    return uVar1;
  }
  F_004cb680(param_1);
  uVar1 = F_004cb680(0x4dbd);
  return uVar1;
}

/* ref: FUN_004cb9d0 */
GEN_FRAME uint F_004cb9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cb9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
  F_004cb680(param_2);
  uVar1 = F_004cb680(param_1);
  return uVar1;
}

/* ref: FUN_004cba10 */
GEN_FRAME unsigned int F_004cba10(unsigned int gen_a0)
{
  GEN_ENTER(0x4cba10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
                    
  F_004cb700(param_1);
}

/* ref: FUN_004cba40 */
GEN_FRAME unsigned int F_004cba40(unsigned int gen_a0)
{
  GEN_ENTER(0x4cba40u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  
  bVar1 = F_00b1a5e0(&(*(undefined4 *)&gen_args[0]));
  if (bVar1 != 0) {
                    
    F_004cba10((*(undefined4 *)&gen_args[0]));
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
  F_004cb680((*(undefined4 *)&gen_args[0]));
                    
  F_004cb700(0x4dbc);
}

/* ref: FUN_004cba90 */
GEN_FRAME unsigned int F_004cba90(unsigned int gen_a0)
{
  GEN_ENTER(0x4cba90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0x1c) {
                    
    F_004cba10(0xffffffff);
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
  F_004cb680(param_1);
                    
  F_004cb700(0x4dbd);
}

/* ref: FUN_004cbad0 */
GEN_FRAME unsigned int F_004cbad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cbad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
  F_004cb680(param_2);
                    
  F_004cb700(param_1);
}

/* ref: FUN_004cbb10 */
GEN_FRAME uint F_004cbb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cbb10u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar2 = *(int *)(iVar1 + 0x118);
  piVar5 = param_1;
  if (iVar2 == -1) {
    return 0;
  }
  do {
    if (param_2 <= piVar5) {
      return 0;
    }
    iVar3 = 0;
    if (-1 < iVar2) {
      piVar4 = (int *)(iVar1 + 0x120);
      do {
        if (*piVar4 == *piVar5) {
          return *(uint *)(iVar1 + 0x120 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 <= iVar2);
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

/* ref: FUN_004cbb80 */
GEN_FRAME uint F_004cbb80(unsigned int gen_a0)
{
  GEN_ENTER(0x4cbb80u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00b1a5e0(&(*(undefined4 *)&gen_args[0]));
  if (bVar1 != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
    uVar2 = F_004cb680((*(undefined4 *)&gen_args[0]));
    return uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
  F_004cb680((*(undefined4 *)&gen_args[0]));
  uVar2 = F_004cb680(0x4dbc);
  return uVar2;
}

/* ref: FUN_004cbbf0 */
GEN_FRAME uint F_004cbbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x4cbbf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 0x1c) {
    *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
    uVar1 = F_004cb680(0xffffffff);
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x118))) = 0xffffffff;
  F_004cb680(param_1);
  uVar1 = F_004cb680(0x4dbd);
  return uVar1;
}

/* ref: FUN_004cbc50 */
GEN_FRAME uint F_004cbc50(unsigned int gen_a0)
{
  GEN_ENTER(0x4cbc50u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  piVar3 = (int *)F_004296a0(8,0,0x66);
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = 0;
    piVar3[1] = 0;
  }
  *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  F_004cd1b0(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc)));
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  (*(int *)(gen_frame + 0x24)) = iVar1;
  *(undefined4 *)(iVar1 + 0x118) = 0xffffffff;
  if ((*(int *)(gen_frame + 0x1c)) != 0) {
    (*(int *)(gen_frame + 0x28)) = -1;
    uVar7 = (*(uint *)(gen_frame + 0x18));
    iVar8 = 0;
    do {
      if ((*(int * PTR32 *)(gen_frame + 0xc)) == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(*(int * PTR32 *)(gen_frame + 0xc));
      }
      uVar4 = uVar7 >> 2;
      if (*(uint *)(iVar6 + 8) <= uVar4) {
        uVar4 = uVar4 - *(uint *)(iVar6 + 8);
      }
      uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4))) + (uVar7 & 3) * 4)));
      if ((*(int *)(gen_frame + 0x1c)) != 0) {
        uVar7 = uVar7 + 1;
        (*(uint *)(gen_frame + 0x18)) = uVar7;
        if ((uint)((*(int *)(gen_frame + 0x14)) * 4) < uVar7 || (*(int *)(gen_frame + 0x14)) * 4 - uVar7 == 0) {
          (*(uint *)(gen_frame + 0x18)) = 0;
        }
        iVar6 = (*(int *)(gen_frame + 0x1c)) - 1;
        (*(int *)(gen_frame + 0x1c)) = iVar6;
        uVar7 = (*(uint *)(gen_frame + 0x18));
        if (iVar6 == 0) {
          uVar7 = 0;
          (*(uint *)(gen_frame + 0x18)) = 0;
        }
      }
      iVar6 = 0x1f;
      if ((*(int *)(gen_frame + 0x28)) == 0x1f) {
        puVar5 = (undefined4 *)(iVar1 + 0x120);
        do {
          *puVar5 = puVar5[1];
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 - 1;
        } while (iVar6 != 0);
        (*(int *)(gen_frame + 0x28)) = 0x1e;
        iVar8 = iVar8 - 4;
      }
      iVar6 = (*(int *)(gen_frame + 0x28)) + 1;
      (*(int *)(gen_frame + 0x28)) = iVar6;
      *(undefined4 *)(iVar8 + 0x120 + iVar1) = uVar2;
      iVar8 = iVar8 + 4;
    } while ((*(int *)(gen_frame + 0x1c)) != 0);
    *(int *)(iVar1 + 0x118) = iVar6;
  }
  F_004cc540(&(*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  uVar9 = F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x66);
  return (uint)uVar9;
}

/* ref: FUN_004cbd90 */
GEN_FRAME unsigned int F_004cbd90(unsigned int gen_a0)
{
  GEN_ENTER(0x4cbd90u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_c;
  undefined4 * local_8;
  
  F_004cc540(param_1 GEN_EDX_ARG);
  iVar2 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  local_c = 0;
  if (-1 < *(int *)(iVar2 + 0x118)) {
    local_8 = (undefined4 *)(iVar2 + 0x120);
    do {
      uVar3 = *local_8;
      if (((*(byte *)((int)param_1 + 0xc) & 3) == 0) &&
         (*(uint *)((int)param_1 + 8) <= *(int *)((int)param_1 + 0x10) + 4U >> 2)) {
        F_004cce90(param_1 GEN_EDX_ARG,1);
      }
      iVar5 = *(int *)((int)param_1 + 0xc);
      if (iVar5 == 0) {
        iVar5 = *(int *)((int)param_1 + 8) * 4;
      }
      uVar6 = iVar5 - 1;
      uVar7 = uVar6 >> 2;
      if (*((int *)GEN_TOP((*(int *)((int)param_1 + 4) + uVar7 * 4))) == 0) {
        uVar4 = F_004296a0(0x10,0,0x66);
        *((uint *)GEN_TOP((*(int *)((int)param_1 + 4) + uVar7 * 4))) = uVar4;
      }
      puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 4) + uVar7 * 4))) + (uVar6 & 3) * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar3;
      }
      *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + 1;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      *(uint *)((int)param_1 + 0xc) = uVar6;
    } while (local_c <= *(int *)(iVar2 + 0x118));
  }
  return 0;
}

/* ref: FUN_004cbe70 */
GEN_FRAME unsigned int F_004cbe70(unsigned int gen_a0)
{
  GEN_ENTER(0x4cbe70u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_c;
  undefined4 * local_8;
  
  F_004cc540(param_1 GEN_EDX_ARG);
  iVar4 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  local_c = *(int *)(iVar4 + 0x118);
  if (-1 < local_c) {
    local_8 = (undefined4 *)(iVar4 + 0x120 + local_c * 4);
    do {
      uVar2 = *local_8;
      if (((*(byte *)((int)param_1 + 0xc) & 3) == 0) &&
         (*(uint *)((int)param_1 + 8) <= *(int *)((int)param_1 + 0x10) + 4U >> 2)) {
        F_004cce90(param_1 GEN_EDX_ARG,1);
      }
      iVar4 = *(int *)((int)param_1 + 0xc);
      if (iVar4 == 0) {
        iVar4 = *(int *)((int)param_1 + 8) * 4;
      }
      uVar5 = iVar4 - 1;
      uVar6 = uVar5 >> 2;
      if (*((int *)GEN_TOP((*(int *)((int)param_1 + 4) + uVar6 * 4))) == 0) {
        uVar3 = F_004296a0(0x10,0,0x66);
        *((uint *)GEN_TOP((*(int *)((int)param_1 + 4) + uVar6 * 4))) = uVar3;
      }
      puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 4) + uVar6 * 4))) + (uVar5 & 3) * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar2;
      }
      *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + 1;
      local_8 = local_8 - 1;
      local_c = local_c - 1;
      *(uint *)((int)param_1 + 0xc) = uVar5;
    } while (-1 < local_c);
  }
  return 0;
}

/* ref: FUN_004cbf60 */
GEN_FRAME uint GEN_STDCALL F_004cbf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cbf60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x66);
  return uVar1;
}

/* ref: FUN_004cbfa0 */
GEN_FRAME uint GEN_STDCALL F_004cbfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cbfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x66);
  return (uint)uVar1;
}

/* ref: FUN_004cbfd0 */
GEN_FRAME uint GEN_STDCALL F_004cbfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cbfd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x66);
  return uVar1;
}

/* ref: FUN_004cbff0 */
GEN_FRAME uint GEN_STDCALL F_004cbff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cbff0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x66);
  return (uint)uVar1;
}

/* ref: FUN_004cc010 */
GEN_FRAME uint GEN_THISCALL F_004cc010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc010u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_004cc040 */
GEN_FRAME uint GEN_STDCALL F_004cc040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc040u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x66);
  return uVar1;
}

/* ref: FUN_004cc060 */
GEN_FRAME uint GEN_STDCALL F_004cc060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x66);
  return (uint)uVar1;
}

/* ref: FUN_004cc090 */
GEN_FRAME uint GEN_THISCALL F_004cc090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_004cc100 */
GEN_FRAME byte F_004cc100(void)
{
  GEN_ENTER(0x4cc100u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004cc110 */
GEN_FRAME uint F_004cc110(unsigned int gen_a0)
{
  GEN_ENTER(0x4cc110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004cc120 */
GEN_FRAME byte F_004cc120(void)
{
  GEN_ENTER(0x4cc120u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004cc130 */
GEN_FRAME byte F_004cc130(void)
{
  GEN_ENTER(0x4cc130u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004cc1c0 */
GEN_FRAME uint GEN_THISCALL F_004cc1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cc1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_004cc1e0 */
GEN_FRAME byte GEN_THISCALL F_004cc1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_004cc200 */
GEN_FRAME uint F_004cc200(unsigned int gen_a0)
{
  GEN_ENTER(0x4cc200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004cc210 */
GEN_FRAME uint F_004cc210(unsigned int gen_a0)
{
  GEN_ENTER(0x4cc210u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004cc220 */
GEN_FRAME byte GEN_THISCALL F_004cc220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_004cc250 */
GEN_FRAME uint GEN_THISCALL F_004cc250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_004cc2a0 */
GEN_FRAME uint GEN_STDCALL F_004cc2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_004cc2c0 */
GEN_FRAME unsigned int GEN_STDCALL F_004cc2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cc2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_004cc300 */
GEN_FRAME uint GEN_THISCALL F_004cc300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc300u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004cc330 */
GEN_FRAME byte GEN_THISCALL F_004cc330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) != *(int *)(param_1 + 4);
}

/* ref: FUN_004cc350 */
GEN_FRAME uint F_004cc350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cc350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004cc370 */
GEN_FRAME uint GEN_STDCALL F_004cc370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_004cc390 */
GEN_FRAME byte GEN_THISCALL F_004cc390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_004cc3b0 */
GEN_NOFRAME uint GEN_THISCALL F_004cc3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cc3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x66);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004cc3f0 */
GEN_FRAME uint F_004cc3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cc3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004cc410 */
GEN_FRAME unsigned int F_004cc410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cc410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_004cc430 */
GEN_FRAME uint F_004cc430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4cc430u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_004cc460 */
GEN_FRAME unsigned int F_004cc460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_004cc490 */
GEN_FRAME uint F_004cc490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cc490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004cc4b0 */
GEN_FRAME uint F_004cc4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cc4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004cc4d0 */
GEN_FRAME uint GEN_THISCALL F_004cc4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_004cc500 */
GEN_FRAME uint GEN_THISCALL F_004cc500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004cc520 */
GEN_FRAME uint GEN_THISCALL F_004cc520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc520u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004cc540 */
GEN_NOFRAME uint GEN_THISCALL F_004cc540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cc540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x66);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x66);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_004cc600 */
GEN_FRAME uint GEN_THISCALL F_004cc600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_004cc630 */
GEN_FRAME uint GEN_THISCALL F_004cc630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4cc630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_004cc660 */
GEN_FRAME uint F_004cc660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4cc660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint param_8 = (uint)gen_a7;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = param_5;
  uVar4 = param_8;
  while (param_3 != uVar1) {
    uVar1 = uVar1 - 1;
    uVar3 = uVar1 >> 2;
    if (*(uint *)(param_4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_4 + 8);
    }
    if (param_6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_6;
    }
    uVar2 = uVar4 >> 2;
    if (*(uint *)(iVar5 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar5 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar2 * 4))) + (uVar4 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_4 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4)));
    uVar4 = uVar4 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar4;
  if ((param_6 != (int *)0x0) && ((undefined4 *)*param_6 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_6;
  }
  return (uint)param_1;
}

/* ref: FUN_004cc700 */
GEN_FRAME unsigned int F_004cc700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004cc730 */
GEN_FRAME uint F_004cc730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x4cc730u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = param_7;
  uVar4 = param_10;
  while (param_4 != uVar3) {
    uVar3 = uVar3 - 1;
    if (param_5 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_5;
    }
    uVar1 = uVar3 >> 2;
    if (*(uint *)(iVar5 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar5 + 8);
    }
    uVar4 = uVar4 - 1;
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar4 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar6 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar4 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar1 * 4))) + (uVar3 & 3) * 4)));
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != (int *)0x0) {
    if ((undefined4 *)*param_8 == (undefined4 *)0x0) {
      param_1[2] = uVar4;
      return (uint)param_1;
    }
    *param_1 = *(undefined4 *)*param_8;
  }
  param_1[2] = uVar4;
  return (uint)param_1;
}

/* ref: FUN_004cc7e0 */
GEN_FRAME uint F_004cc7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x4cc7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_10;
  for (uVar1 = param_4; uVar1 != param_7; uVar1 = uVar1 + 1) {
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    uVar3 = uVar1 >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar5 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar6 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar5 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4)));
    uVar5 = uVar5 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar5;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return (uint)param_1;
}

/* ref: FUN_004cc890 */
GEN_FRAME unsigned int F_004cc890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cc890u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004cc8c0 */
GEN_FRAME unsigned int F_004cc8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_004cc930 */
GEN_NOFRAME uint GEN_THISCALL F_004cc930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cc930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004cc540(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x66);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004cc950 */
GEN_FRAME uint GEN_THISCALL F_004cc950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cc950u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004cc980 */
GEN_FRAME uint GEN_THISCALL F_004cc980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cc980u, gen_a0, gen_a1, gen_a2, 0u);
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
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_004cc9c0 */
GEN_FRAME uint F_004cc9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4cc9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar4 = *(undefined4 *)*param_8;
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
  F_004cc660(param_1,uVar2,param_4,uVar3,param_7,uVar4,0,param_10);
  return param_1;
}

/* ref: FUN_004cca40 */
GEN_FRAME unsigned int F_004cca40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cca40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004cca70 */
GEN_FRAME uint F_004cca70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4cca70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_004cc730(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_004ccaf0 */
GEN_FRAME uint F_004ccaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4ccaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_004cc7e0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_004ccb70 */
GEN_FRAME unsigned int F_004ccb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ccb70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004ccba0 */
GEN_FRAME unsigned int F_004ccba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ccba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004ccc20 */
GEN_NOFRAME uint GEN_THISCALL F_004ccc20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ccc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004cc540(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x66);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004ccc40 */
GEN_FRAME uint GEN_THISCALL F_004ccc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4ccc40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)this;
  }
  uVar4 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if (uVar4 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_004cca70(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if (iVar2 != 0) {
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
          if ((uint)(*(int *)((int)this + 8) * 4) <= *(uint *)((int)this + 0xc)) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar2 = iVar2 - 1;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar5;
    }
    F_004ccaf0(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 - 1, iVar2 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return (uint)param_1;
}

/* ref: FUN_004ccdd0 */
GEN_FRAME unsigned int F_004ccdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ccdd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004cce00 */
GEN_FRAME unsigned int F_004cce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cce00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004cce70 */
GEN_NOFRAME uint GEN_THISCALL F_004cce70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cce70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004cc540(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x66);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004cce90 */
GEN_FRAME uint GEN_THISCALL F_004cce90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cce90u, gen_a0, gen_a1, 0u, 0u);
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
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 2;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x66);
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
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
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
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x66);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_004cd010 */
GEN_FRAME uint GEN_THISCALL F_004cd010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cd010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar6 = *(uint *)((int)this + 0x10);
  uVar2 = uVar6;
  if (uVar6 <= param_1) {
    while (uVar2 < param_1) {
      if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
         (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
        F_004cce90(this GEN_EDX_FWD,1);
      }
      uVar2 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
      uVar6 = uVar2 >> 2;
      if (*(uint *)((int)this + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)((int)this + 8);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4))) == 0) {
        uVar3 = F_004296a0(0x10,0,0x66);
        *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4))) = uVar3;
      }
      uVar6 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4)));
      puVar1 = ((undefined4 *)GEN_TOP((uVar6 + (uVar2 & 3) * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      uVar2 = *(uint *)((int)this + 0x10);
    }
    return uVar6;
  }
  uVar8 = 0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    uVar8 = *puVar1;
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
  uVar7 = 0;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    uVar7 = *(undefined4 *)*piVar5;
  }
  uVar2 = F_004ccc40(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar7,0,param_1 + *(int *)((int)this + 0xc),uVar8,0,
                       *(int *)((int)this + 0xc) + uVar6);
  return uVar2;
}

/* ref: FUN_004cd120 */
GEN_FRAME uint GEN_THISCALL F_004cd120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cd120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xc) & 3) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_004cce90(this GEN_EDX_FWD,1);
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 8) * 4;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x66);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) = uVar2;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) + (uVar4 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return (uint)puVar1;
}

/* ref: FUN_004cd1a0 */
GEN_FRAME uint GEN_THISCALL F_004cd1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cd1a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_004cd120((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_004cd1b0 */
GEN_FRAME uint GEN_THISCALL F_004cd1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cd1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_004cd010(param_1 GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10));
  uVar1 = F_004cc9c0(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),
                       *(undefined4 *)this,0,*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),
                       *param_1,0,param_1[3]);
  return uVar1;
}

/* ref: FUN_004cd220 */
GEN_FRAME uint GEN_STDCALL F_004cd220(unsigned int gen_a0)
{
  GEN_ENTER(0x4cd220u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined4 * PTR32 *)(param_1 + 0x1c), puVar2 != (undefined4 *)0x0)) {
    puVar2[7] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar1 = puVar2 + 0x14c;
    puVar2[5] = 0x8000;
    puVar2[0x1b] = puVar1;
    puVar2[0x14] = puVar1;
    puVar2[0x13] = puVar1;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_004cd290 */
GEN_FRAME uint GEN_STDCALL F_004cd290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cd290u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)&gen_args[0]) != 0) && (iVar2 = *(int *)((*(int *)&gen_args[0]) + 0x1c), iVar2 != 0)) {
    if ((*(int *)&gen_args[1]) < 0x11) {
      iVar3 = *(int *)(iVar2 + 0x3c);
      uVar1 = iVar3 + (*(int *)&gen_args[1]);
      if (uVar1 < 0x21) {
        *(uint *)(iVar2 + 0x3c) = uVar1;
        *(int *)(iVar2 + 0x38) =
             *(int *)(iVar2 + 0x38) +
             (((1 << ((byte)(*(int *)&gen_args[1]) & 0x1f)) - 1U & (*(uint *)&gen_args[2])) << ((byte)iVar3 & 0x1f));
        return 0;
      }
    }
    return 0xfffffffe;
  }
  return 0xfffffffe;
}

/* ref: FUN_004cd2f0 */
GEN_FRAME uint GEN_STDCALL F_004cd2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4cd2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(gen_code32 *)(param_1 + 0x20) = ((code *)REFP(0xb1a5a0));
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(gen_code32 *)(param_1 + 0x24) = ((code *)REFP(0xb1a5c0));
    }
    uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x2530);
    if (uVar1 == 0) {
      return 0xfffffffc;
    }
    *(uint *)(param_1 + 0x1c) = uVar1;
    if ((int)param_2 < 0) {
      *(undefined4 *)(uVar1 + 8) = 0;
      uVar2 = -param_2;
    }
    else {
      *(int *)(uVar1 + 8) = ((int)param_2 >> 4) + 1;
      uVar2 = param_2;
      if ((int)param_2 < 0x30) {
        uVar2 = param_2 & 0xf;
      }
    }
    if (uVar2 - 8 < 8) {
      *(uint *)(uVar1 + 0x24) = uVar2;
      *(undefined4 *)(uVar1 + 0x34) = 0;
      uVar1 = F_004cd220(param_1);
      return uVar1;
    }
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),uVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_004cd3d0 */
GEN_FRAME uint GEN_STDCALL F_004cd3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cd3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004cd2f0(param_1,0xf,param_2,param_3);
  return uVar1;
}

/* ref: FUN_004cd3f0 */
GEN_NOFRAME unsigned int F_004cd3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4cd3f0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  *(undefined * PTR32 *)(in_eax + 0x4c) = &REFG(undefined, 0x10949b8);
  *(undefined4 *)(in_eax + 0x54) = 9;
  *(undefined * PTR32 *)(in_eax + 0x50) = &REFG(undefined, 0x10951b8);
  *(undefined4 *)(in_eax + 0x58) = 5;
  return 0;
}

/* ref: FUN_004cd410 */
GEN_FRAME uint F_004cd410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cd410u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_ebx = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_ebx + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(in_ebx + 0x20))
                      (*(undefined4 *)(in_ebx + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(uint *)(iVar1 + 0x34) = uVar2;
    if (uVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
  }
  uVar3 = in_eax - *(int *)(in_ebx + 0x10);
  uVar2 = *(uint *)(iVar1 + 0x28);
  if (uVar2 <= uVar3) {
    F_00c46aa0(*(undefined4 *)(iVar1 + 0x34),*(int *)(in_ebx + 0xc) - uVar2,uVar2);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    return 0;
  }
  uVar2 = uVar2 - *(int *)(iVar1 + 0x30);
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  F_00c46aa0(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30),*(int *)(in_ebx + 0xc) - uVar3,uVar2);
  iVar4 = uVar3 - uVar2;
  if (iVar4 != 0) {
    F_00c46aa0(*(undefined4 *)(iVar1 + 0x34),*(int *)(in_ebx + 0xc) - iVar4,iVar4);
    *(int *)(iVar1 + 0x30) = iVar4;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + uVar2;
  if (*(uint *)(iVar1 + 0x30) == *(uint *)(iVar1 + 0x28)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) + uVar2;
  }
  return 0;
}

/* ref: FUN_004cd510 */
GEN_FRAME uint GEN_STDCALL F_004cd510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cd510u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined2 uVar1;
  uint * in_eax;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte * pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  if ((((param_1 == (int *)0x0) || (in_eax = (uint *)param_1[7], in_eax == (uint *)0x0)) ||
      (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))) {
    return 0xfffffffe;
  }
  if (*in_eax == 0xb) {
    *in_eax = 0xc;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)param_1[3];
  pbVar9 = (byte *)*param_1;
  (*(uint *)(gen_frame + 0xc)) = param_1[4];
  uVar5 = param_1[1];
  uVar12 = in_eax[0xe];
  (*(uint *)(gen_frame + 0x28)) = uVar5;
  uVar3 = *in_eax;
  uVar14 = in_eax[0xf];
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0xc));
  (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    uVar11 = (*(uint *)(gen_frame + 0x20));
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      if (in_eax[2] == 0) {
        *in_eax = 0xc;
      }
      else {
        for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
          bVar8 = *pbVar9;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar9 = pbVar9 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
          uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
        }
        if (((in_eax[2] & 2) == 0) || (uVar12 != 0x8b1f)) {
          in_eax[4] = 0;
          if (in_eax[8] != 0) {
            *(undefined4 *)(in_eax[8] + 0x30) = 0xffffffff;
          }
          pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
          if (((in_eax[2] & 1) == 0) || (((uVar12 & 0xff) * 0x100 + (uVar12 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)"incorrect header check";
          }
          else if (((byte)uVar12 & 0xf) == 8) {
            uVar3 = (uVar12 >> 4 & 0xf) + 8;
            uVar14 = uVar14 - 4;
            if (uVar3 <= in_eax[9]) {
              in_eax[5] = 1 << (sbyte)uVar3;
              uVar3 = F_00b17ee0(0,0,0);
              in_eax[6] = uVar3;
              param_1[0xc] = uVar3;
              *in_eax = ~(uVar12 >> 0xc) & 2 | 9;
              uVar12 = 0;
              uVar14 = 0;
              pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
              break;
            }
            param_1[6] = (int)"invalid window size";
            uVar12 = uVar12 >> 4;
          }
          else {
            param_1[6] = (int)"unknown compression method";
          }
          goto LAB_004ce777;
        }
        uVar3 = F_00b1a540(0,0,0);
        in_eax[6] = uVar3;
        (*(undefined2 *)(gen_frame + 0x18)) = 0x8b1f;
        uVar3 = F_00b1a540(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),2);
        uVar12 = 0;
        in_eax[6] = uVar3;
        uVar14 = 0;
        *in_eax = 1;
        pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
      }
      break;
    case 1: ;
      for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
        bVar8 = *pbVar9;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar9 = pbVar9 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
        uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
      }
      in_eax[4] = uVar12;
      if ((char)uVar12 == '\b') {
        if ((uVar12 & 0xe000) == 0) {
          if ((uint *)in_eax[8] != (uint *)0x0) {
            *(uint *)in_eax[8] = uVar12 >> 8 & 1;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar12;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar12 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar12;
            uVar3 = F_00b1a540(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),2);
            in_eax[6] = uVar3;
            pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar12 = 0;
          uVar14 = 0;
          *in_eax = 2;
          do {
            uVar11 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
            bVar8 = *pbVar9;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar7 = (byte)uVar14;
            pbVar9 = pbVar9 + 1;
            uVar14 = uVar14 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
            uVar12 = uVar12 + ((uint)bVar8 << (bVar7 & 0x1f));
joined_r0x004cd76a: ;
          } while (uVar14 < 0x20);
          if (in_eax[8] != 0) {
            *(uint *)(in_eax[8] + 4) = uVar12;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar12;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar12 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar12;
            (*(undefined1 *)(gen_frame + 0x1a)) = (char)(uVar12 >> 0x10);
            (*(undefined1 *)(gen_frame + 0x1b)) = (char)(uVar12 >> 0x18);
            uVar3 = F_00b1a540(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),4);
            in_eax[6] = uVar3;
            pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar12 = 0;
          uVar14 = 0;
          *in_eax = 3;
          do {
            uVar11 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
            bVar8 = *pbVar9;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar7 = (byte)uVar14;
            pbVar9 = pbVar9 + 1;
            uVar14 = uVar14 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
            uVar12 = uVar12 + ((uint)bVar8 << (bVar7 & 0x1f));
joined_r0x004cd7e2: ;
          } while (uVar14 < 0x10);
          if (in_eax[8] != 0) {
            *(uint *)(in_eax[8] + 8) = uVar12 & 0xff;
            *(uint *)(in_eax[8] + 0xc) = uVar12 >> 8;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar12;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar12 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar12;
            uVar3 = F_00b1a540(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),2);
            in_eax[6] = uVar3;
            pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar12 = 0;
          uVar14 = 0;
          *in_eax = 4;
          goto switchD_004cd588_caseD_4;
        }
        param_1[6] = (int)"unknown header flags set";
      }
      else {
        param_1[6] = (int)"unknown compression method";
      }
      goto LAB_004ce777;
    case 2: ;
      goto joined_r0x004cd76a;
    case 3: ;
      goto joined_r0x004cd7e2;
    case 4: ;
switchD_004cd588_caseD_4: ;
      if ((in_eax[4] & 0x400) == 0) {
        if (in_eax[8] != 0) {
          *(undefined4 *)(in_eax[8] + 0x10) = 0;
        }
      }
      else {
        for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
          uVar11 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
          bVar8 = *pbVar9;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar9 = pbVar9 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
          uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
        }
        in_eax[0x10] = uVar12;
        if (in_eax[8] != 0) {
          *(uint *)(in_eax[8] + 0x14) = uVar12;
        }
        if ((in_eax[4] & 0x200) != 0) {
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar12;
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar12 >> 8);
          (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar12;
          uVar3 = F_00b1a540(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),2);
          in_eax[6] = uVar3;
          pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        uVar12 = 0;
        uVar14 = 0;
      }
      *in_eax = 5;
    case 5: ;
      if ((in_eax[4] & 0x400) == 0) {
LAB_004cd972: ;
        in_eax[0x10] = 0;
        *in_eax = 6;
switchD_004cd588_caseD_6: ;
        if ((in_eax[4] & 0x800) == 0) {
          if (in_eax[8] != 0) {
            *(undefined4 *)(in_eax[8] + 0x1c) = 0;
          }
LAB_004cda1e: ;
          in_eax[0x10] = 0;
          *in_eax = 7;
switchD_004cd588_caseD_7: ;
          if ((in_eax[4] & 0x1000) == 0) {
            if (in_eax[8] != 0) {
              *(undefined4 *)(in_eax[8] + 0x24) = 0;
            }
LAB_004cdaca: ;
            *in_eax = 8;
switchD_004cd588_caseD_8: ;
            if ((in_eax[4] & 0x200) != 0) {
              for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
                uVar11 = (*(uint *)(gen_frame + 0x20));
                if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
                bVar8 = *pbVar9;
                (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                pbVar9 = pbVar9 + 1;
                (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
                uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
              }
              if (uVar12 != (ushort)in_eax[6]) {
                param_1[6] = (int)"header crc mismatch";
                goto LAB_004ce777;
              }
              uVar12 = 0;
              uVar14 = 0;
            }
            if (in_eax[8] != 0) {
              *(uint *)(in_eax[8] + 0x2c) = (int)in_eax[4] >> 9 & 1;
              *(undefined4 *)(in_eax[8] + 0x30) = 1;
            }
            uVar3 = F_00b1a540(0,0,0);
            in_eax[6] = uVar3;
            param_1[0xc] = uVar3;
            *in_eax = 0xb;
            pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
            break;
          }
          uVar11 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) != 0) {
            uVar3 = 0;
            do {
              bVar8 = pbVar9[uVar3];
              uVar3 = uVar3 + 1;
              (*(uint *)(gen_frame + 0x20)) = uVar3;
              uVar11 = in_eax[8];
              if (((uVar11 != 0) && (*(int *)(uVar11 + 0x24) != 0)) &&
                 (in_eax[0x10] < *(uint *)(uVar11 + 0x28))) {
                *((byte *)GEN_TOP((*(int *)(uVar11 + 0x24) + in_eax[0x10]))) = bVar8;
                in_eax[0x10] = in_eax[0x10] + 1;
                pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
              }
            } while ((bVar8 != 0) && (uVar3 = (*(uint *)(gen_frame + 0x20)), uVar3 < (*(uint *)(gen_frame + 0x28))));
            if ((in_eax[4] & 0x200) != 0) {
              uVar3 = F_00b1a540(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),uVar3);
              in_eax[6] = uVar3;
              pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
            }
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
            pbVar9 = pbVar9 + (*(uint *)(gen_frame + 0x20));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
            uVar11 = (*(uint *)(gen_frame + 0x20));
            if (bVar8 == 0) goto LAB_004cdaca;
          }
        }
        else {
          uVar11 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) != 0) {
            uVar3 = 0;
            do {
              bVar8 = pbVar9[uVar3];
              uVar3 = uVar3 + 1;
              (*(uint *)(gen_frame + 0x20)) = uVar3;
              uVar11 = in_eax[8];
              if (((uVar11 != 0) && (*(int *)(uVar11 + 0x1c) != 0)) &&
                 (in_eax[0x10] < *(uint *)(uVar11 + 0x20))) {
                *((byte *)GEN_TOP((*(int *)(uVar11 + 0x1c) + in_eax[0x10]))) = bVar8;
                in_eax[0x10] = in_eax[0x10] + 1;
                pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
              }
            } while ((bVar8 != 0) && (uVar3 = (*(uint *)(gen_frame + 0x20)), uVar3 < (*(uint *)(gen_frame + 0x28))));
            if ((in_eax[4] & 0x200) != 0) {
              uVar3 = F_00b1a540(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),uVar3);
              in_eax[6] = uVar3;
              pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
            }
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
            pbVar9 = pbVar9 + (*(uint *)(gen_frame + 0x20));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
            uVar11 = (*(uint *)(gen_frame + 0x20));
            if (bVar8 == 0) goto LAB_004cda1e;
          }
        }
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = in_eax[0x10];
        if ((*(uint *)(gen_frame + 0x28)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x28));
        }
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          if ((in_eax[8] != 0) && (iVar4 = *(int *)(in_eax[8] + 0x10), iVar4 != 0)) {
            iVar13 = *(int *)(in_eax[8] + 0x14) - in_eax[0x10];
            uVar3 = *(uint *)(in_eax[8] + 0x18);
            uVar11 = (*(uint *)(gen_frame + 0x20));
            if (uVar3 < iVar13 + (*(uint *)(gen_frame + 0x20))) {
              uVar11 = uVar3 - iVar13;
            }
            F_00c46aa0(iVar4 + iVar13,(*(byte * PTR32 *)(gen_frame + 0x24)),uVar11);
            pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          if ((in_eax[4] & 0x200) != 0) {
            uVar3 = F_00b1a540(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
            in_eax[6] = uVar3;
            pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
          pbVar9 = pbVar9 + (*(uint *)(gen_frame + 0x20));
          in_eax[0x10] = in_eax[0x10] - (*(uint *)(gen_frame + 0x20));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
        }
        uVar11 = (*(uint *)(gen_frame + 0x20));
        if (in_eax[0x10] == 0) goto LAB_004cd972;
      }
LAB_004ce7db: ;
      (*(uint *)(gen_frame + 0x20)) = uVar11;
      param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
      *param_1 = (int)pbVar9;
      param_1[4] = (*(uint *)(gen_frame + 0x1c));
      param_1[1] = (*(uint *)(gen_frame + 0x28));
      in_eax[0xe] = uVar12;
      in_eax[0xf] = uVar14;
      if (((in_eax[10] == 0) && ((0x17 < (int)*in_eax || ((*(uint *)(gen_frame + 0xc)) == param_1[4])))) ||
         (uVar3 = F_004cd410((*(uint *)(gen_frame + 0xc)),param_1), uVar3 == 0)) {
        iVar4 = uVar5 - param_1[1];
        iVar13 = (*(uint *)(gen_frame + 0xc)) - param_1[4];
        param_1[2] = param_1[2] + iVar4;
        param_1[5] = param_1[5] + iVar13;
        in_eax[7] = in_eax[7] + iVar13;
        if ((in_eax[2] != 0) && (iVar13 != 0)) {
          if (in_eax[4] == 0) {
            uVar5 = F_00b17ee0(in_eax[6],param_1[3] - iVar13,iVar13);
          }
          else {
            uVar5 = F_00b1a540(in_eax[6],param_1[3] - iVar13,iVar13);
          }
          in_eax[6] = uVar5;
          param_1[0xc] = uVar5;
        }
        param_1[0xb] = (-(uint)(in_eax[1] != 0) & 0x40) + ((*in_eax != 0xb) - 1 & 0x80) +
                       in_eax[0xf];
        if (((iVar4 != 0) || (iVar13 != 0)) && ((*(int *)&gen_a1) != 4)) {
          return (*(uint *)(gen_frame + 0x4));
        }
        if ((*(uint *)(gen_frame + 0x4)) != 0) {
          return (*(uint *)(gen_frame + 0x4));
        }
        return 0xfffffffb;
      }
      *in_eax = 0x1c;
switchD_004cd588_caseD_1c: ;
      return 0xfffffffc;
    case 6: ;
      goto switchD_004cd588_caseD_6;
    case 7: ;
      goto switchD_004cd588_caseD_7;
    case 8: ;
      goto switchD_004cd588_caseD_8;
    case 9: ;
      for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
        bVar8 = *pbVar9;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar9 = pbVar9 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
        uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
      }
      uVar3 = (uVar12 >> 8 & 0xff00) + ((uVar12 & 0xff00) + uVar12 * 0x10000) * 0x100 +
              (uVar12 >> 0x18);
      in_eax[6] = uVar3;
      param_1[0xc] = uVar3;
      uVar12 = 0;
      uVar14 = 0;
      *in_eax = 10;
    case 10: ;
      if (in_eax[3] == 0) {
        param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        *param_1 = (int)pbVar9;
        param_1[4] = (*(uint *)(gen_frame + 0x1c));
        param_1[1] = (*(uint *)(gen_frame + 0x28));
        in_eax[0xf] = uVar14;
        in_eax[0xe] = uVar12;
        return 2;
      }
      uVar3 = F_00b17ee0(0,0,0);
      in_eax[6] = uVar3;
      param_1[0xc] = uVar3;
      *in_eax = 0xb;
      pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
switchD_004cd588_caseD_b: ;
      uVar11 = (*(uint *)(gen_frame + 0x20));
      if ((*(int *)&gen_a1) != 5) {
switchD_004cd588_caseD_c: ;
        if (in_eax[1] == 0) {
          for (; uVar14 < 3; uVar14 = uVar14 + 8) {
            uVar11 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
            bVar8 = *pbVar9;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar9 = pbVar9 + 1;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
            uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
          }
          in_eax[1] = uVar12 & 1;
          switch((unsigned int)(uintptr_t)(uVar12 >> 1 & 3)) {
          case 0: ;
            uVar12 = uVar12 >> 3;
            *in_eax = 0xd;
            uVar14 = uVar14 - 3;
            break;
          case 1: ;
            F_004cd3f0(in_eax);
            uVar12 = uVar12 >> 3;
            *in_eax = 0x12;
            uVar14 = uVar14 - 3;
            break;
          case 2: ;
            uVar12 = uVar12 >> 3;
            *in_eax = 0xf;
            uVar14 = uVar14 - 3;
            break;
          case 3: ;
            param_1[6] = (int)"invalid block type";
            *in_eax = 0x1b;
          default: ;
            uVar12 = uVar12 >> 3;
            uVar14 = uVar14 - 3;
          }
        }
        else {
          uVar12 = uVar12 >> (sbyte)(uVar14 & 7);
          uVar14 = uVar14 - (uVar14 & 7);
          *in_eax = 0x18;
        }
        break;
      }
      goto LAB_004ce7db;
    case 0xb: ;
      goto switchD_004cd588_caseD_b;
    case 0xc: ;
      goto switchD_004cd588_caseD_c;
    case 0xd: ;
      uVar12 = uVar12 >> (sbyte)(uVar14 & 7);
      for (uVar14 = uVar14 - (uVar14 & 7); uVar14 < 0x20; uVar14 = uVar14 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
        bVar8 = *pbVar9;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar9 = pbVar9 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
        uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
      }
      uVar3 = uVar12 & 0xffff;
      if (uVar3 == ~uVar12 >> 0x10) {
        uVar12 = 0;
        in_eax[0x10] = uVar3;
        uVar14 = 0;
        *in_eax = 0xe;
        goto switchD_004cd588_caseD_e;
      }
      param_1[6] = (int)"invalid stored block lengths";
      goto LAB_004ce777;
    case 0xe: ;
switchD_004cd588_caseD_e: ;
      (*(uint *)(gen_frame + 0x20)) = in_eax[0x10];
      if ((*(uint *)(gen_frame + 0x20)) == 0) {
LAB_004ce36b: ;
        *in_eax = 0xb;
      }
      else {
        if ((*(uint *)(gen_frame + 0x28)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x28));
        }
        if ((*(uint *)(gen_frame + 0x1c)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x1c));
        }
        uVar11 = (*(uint *)(gen_frame + 0x20));
        if ((*(uint *)(gen_frame + 0x20)) == 0) goto LAB_004ce7db;
        F_00c46aa0((*(undefined1 * PTR32 *)(gen_frame + 0x14)),(*(byte * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
        pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x20));
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0x20));
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0x20));
        in_eax[0x10] = in_eax[0x10] - (*(uint *)(gen_frame + 0x20));
      }
      break;
    case 0xf: ;
      for (; uVar14 < 0xe; uVar14 = uVar14 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
        bVar8 = *pbVar9;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar9 = pbVar9 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
        uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
      }
      in_eax[0x18] = (uVar12 & 0x1f) + 0x101;
      uVar10 = uVar12 >> 10;
      uVar3 = (uVar12 >> 5 & 0x1f) + 1;
      uVar12 = uVar12 >> 0xe;
      uVar14 = uVar14 - 0xe;
      in_eax[0x19] = uVar3;
      in_eax[0x17] = (uVar10 & 0xf) + 4;
      if ((in_eax[0x18] < 0x11f) && (uVar3 < 0x1f)) {
        in_eax[0x1a] = 0;
        *in_eax = 0x10;
        goto switchD_004cd588_caseD_10;
      }
      param_1[6] = (int)"too many length or distance symbols";
      goto LAB_004ce777;
    case 0x10: ;
switchD_004cd588_caseD_10: ;
      if (in_eax[0x1a] < in_eax[0x17]) {
        do {
          for (; uVar14 < 3; uVar14 = uVar14 + 8) {
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
            bVar8 = *pbVar9;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar9 = pbVar9 + 1;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
            uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
          }
          *((ushort *)GEN_TOP(((int)in_eax + (uint)*(ushort *)(&REFG(undefined, 0x1095238) + in_eax[0x1a] * 2) * 2 + 0x70)))
               = (ushort)uVar12 & 7;
          in_eax[0x1a] = in_eax[0x1a] + 1;
          uVar12 = uVar12 >> 3;
          uVar14 = uVar14 - 3;
        } while (in_eax[0x1a] < in_eax[0x17]);
      }
      uVar3 = in_eax[0x1a];
      while (uVar3 < 0x13) {
        *((undefined2 *)GEN_TOP(((int)in_eax + (uint)*(ushort *)(&REFG(undefined, 0x1095238) + in_eax[0x1a] * 2) * 2 + 0x70))) = 0;
        in_eax[0x1a] = in_eax[0x1a] + 1;
        uVar3 = in_eax[0x1a];
      }
      in_eax[0x1b] = (uint)(in_eax + 0x14c);
      in_eax[0x13] = (uint)(in_eax + 0x14c);
      in_eax[0x15] = 7;
      (*(uint *)(gen_frame + 0x4)) = F_00b1aa40(0,in_eax + 0x1c,0x13,in_eax + 0x1b,in_eax + 0x15,in_eax + 0xbc);
      if ((*(uint *)(gen_frame + 0x4)) == 0) {
        in_eax[0x1a] = 0;
        *in_eax = 0x11;
        pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
        goto switchD_004cd588_caseD_11;
      }
      param_1[6] = (int)"invalid code lengths set";
      pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
LAB_004ce777: ;
      *in_eax = 0x1b;
      break;
    case 0x11: ;
switchD_004cd588_caseD_11: ;
      if (in_eax[0x1a] < in_eax[0x19] + in_eax[0x18]) {
        do {
          uVar11 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar12) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar11;
          if (uVar14 < (uVar11 >> 8 & 0xff)) {
            do {
              uVar11 = (*(uint *)(gen_frame + 0x20));
              if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
              bVar8 = *pbVar9;
              (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
              bVar7 = (byte)uVar14;
              pbVar9 = pbVar9 + 1;
              uVar14 = uVar14 + 8;
              uVar12 = uVar12 + ((uint)bVar8 << (bVar7 & 0x1f));
              (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
              uVar11 = *((uint *)GEN_TOP((in_eax[0x13] +
                                ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar12) * 4)));
              (*(uint *)(gen_frame + 0x20)) = uVar11;
            } while (uVar14 < (uVar11 >> 8 & 0xff));
          }
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) = (short)(uVar11 >> 0x10);
          bVar8 = (byte)(uVar11 >> 8);
          (*(uint *)(gen_frame + 0x20)) = uVar11;
          if (uVar11 >> 0x10 < 0x10) {
            if (uVar14 < (uVar11 >> 8 & 0xff)) {
              do {
                if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
                bVar7 = *pbVar9;
                (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                bVar6 = (byte)uVar14;
                pbVar9 = pbVar9 + 1;
                uVar14 = uVar14 + 8;
                (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
                uVar12 = uVar12 + ((uint)bVar7 << (bVar6 & 0x1f));
              } while (uVar14 < (uVar11 >> 8 & 0xff));
            }
            uVar12 = uVar12 >> (bVar8 & 0x1f);
            uVar14 = uVar14 - (uVar11 >> 8 & 0xff);
            *(short *)((int)in_eax + in_eax[0x1a] * 2 + 0x70) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2));
            in_eax[0x1a] = in_eax[0x1a] + 1;
          }
          else {
            if ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) == 0x10) {
              uVar3 = uVar11 >> 8 & 0xff;
              if (uVar14 < uVar3 + 2) {
                do {
                  if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
                  bVar7 = *pbVar9;
                  (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                  bVar6 = (byte)uVar14;
                  pbVar9 = pbVar9 + 1;
                  uVar14 = uVar14 + 8;
                  uVar12 = uVar12 + ((uint)bVar7 << (bVar6 & 0x1f));
                  (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
                } while (uVar14 < uVar3 + 2);
              }
              uVar11 = uVar12 >> (bVar8 & 0x1f);
              uVar14 = uVar14 - uVar3;
              if (in_eax[0x1a] == 0) {
                param_1[6] = (int)"invalid bit length repeat";
                uVar12 = uVar11;
                goto LAB_004ce777;
              }
              uVar1 = *(undefined2 *)((int)in_eax + in_eax[0x1a] * 2 + 0x6e);
              uVar12 = uVar11 >> 2;
              (*(uint *)(gen_frame + 0x20)) = (uVar11 & 3) + 3;
              uVar14 = uVar14 - 2;
            }
            else {
              uVar3 = uVar11 >> 8 & 0xff;
              if ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) == 0x11) {
                if (uVar14 < uVar3 + 3) {
                  do {
                    if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
                    bVar7 = *pbVar9;
                    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                    bVar6 = (byte)uVar14;
                    pbVar9 = pbVar9 + 1;
                    uVar14 = uVar14 + 8;
                    uVar12 = uVar12 + ((uint)bVar7 << (bVar6 & 0x1f));
                    (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
                  } while (uVar14 < uVar3 + 3);
                }
                uVar12 = uVar12 >> (bVar8 & 0x1f);
                (*(uint *)(gen_frame + 0x20)) = (uVar12 & 7) + 3;
                uVar12 = uVar12 >> 3;
                iVar4 = -3;
              }
              else {
                if (uVar14 < uVar3 + 7) {
                  do {
                    if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
                    bVar7 = *pbVar9;
                    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                    bVar6 = (byte)uVar14;
                    pbVar9 = pbVar9 + 1;
                    uVar14 = uVar14 + 8;
                    uVar12 = uVar12 + ((uint)bVar7 << (bVar6 & 0x1f));
                    (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
                  } while (uVar14 < uVar3 + 7);
                }
                uVar12 = uVar12 >> (bVar8 & 0x1f);
                (*(uint *)(gen_frame + 0x20)) = (uVar12 & 0x7f) + 0xb;
                uVar12 = uVar12 >> 7;
                iVar4 = -7;
              }
              uVar14 = uVar14 + (iVar4 - uVar3);
              uVar1 = 0;
            }
            if (in_eax[0x19] + in_eax[0x18] < in_eax[0x1a] + (*(uint *)(gen_frame + 0x20))) {
              param_1[6] = (int)"invalid bit length repeat";
              goto LAB_004ce777;
            }
            while ((*(uint *)(gen_frame + 0x20)) != 0) {
              (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
              *(undefined2 *)((int)in_eax + in_eax[0x1a] * 2 + 0x70) = uVar1;
              in_eax[0x1a] = in_eax[0x1a] + 1;
            }
          }
        } while (in_eax[0x1a] < in_eax[0x19] + in_eax[0x18]);
      }
      if (*in_eax != 0x1b) {
        in_eax[0x1b] = (uint)(in_eax + 0x14c);
        in_eax[0x13] = (uint)(in_eax + 0x14c);
        in_eax[0x15] = 9;
        (*(uint *)(gen_frame + 0x4)) = F_00b1aa40(1,in_eax + 0x1c,in_eax[0x18],in_eax + 0x1b,in_eax + 0x15,
                                in_eax + 0xbc);
        if ((*(uint *)(gen_frame + 0x4)) == 0) {
          in_eax[0x14] = in_eax[0x1b];
          in_eax[0x16] = 6;
          (*(uint *)(gen_frame + 0x4)) = F_00b1aa40(2,(int)in_eax + in_eax[0x18] * 2 + 0x70,in_eax[0x19],in_eax + 0x1b
                                  ,in_eax + 0x16,in_eax + 0xbc);
          if ((*(uint *)(gen_frame + 0x4)) == 0) {
            *in_eax = 0x12;
            pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
            goto switchD_004cd588_caseD_12;
          }
          param_1[6] = (int)"invalid distances set";
          pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        else {
          param_1[6] = (int)"invalid literal/lengths set";
          pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        goto LAB_004ce777;
      }
      break;
    case 0x12: ;
switchD_004cd588_caseD_12: ;
      if (((*(uint *)(gen_frame + 0x28)) < 6) || ((*(uint *)(gen_frame + 0x1c)) < 0x102)) {
        uVar3 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar12) * 4)));
        (*(uint *)(gen_frame + 0x20)) = uVar3;
        if (uVar14 < (uVar3 >> 8 & 0xff)) {
          do {
            uVar11 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
            bVar8 = *pbVar9;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar7 = (byte)uVar14;
            pbVar9 = pbVar9 + 1;
            uVar14 = uVar14 + 8;
            uVar12 = uVar12 + ((uint)bVar8 << (bVar7 & 0x1f));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
            uVar3 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar12) * 4)))
            ;
            (*(uint *)(gen_frame + 0x20)) = uVar3;
          } while (uVar14 < (uVar3 >> 8 & 0xff));
        }
        cVar2 = (char)uVar3;
        (*(uint *)(gen_frame + 0x20)) = uVar3;
        if ((cVar2 != '\0') && ((uVar3 & 0xf0) == 0)) {
          bVar8 = (byte)(uVar3 >> 8);
          uVar11 = *((uint *)GEN_TOP((in_eax[0x13] +
                            ((((1 << (cVar2 + bVar8 & 0x1f)) - 1U & uVar12) >> (bVar8 & 0x1f)) +
                            (uVar3 >> 0x10)) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar11;
          if (uVar14 < (uVar11 >> 8 & 0xff) + (uVar3 >> 8 & 0xff)) {
            do {
              uVar11 = (*(uint *)(gen_frame + 0x20));
              if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
              bVar7 = *pbVar9;
              (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
              pbVar9 = pbVar9 + 1;
              uVar12 = uVar12 + ((uint)bVar7 << ((byte)uVar14 & 0x1f));
              uVar14 = uVar14 + 8;
              (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
              uVar11 = *((uint *)GEN_TOP((in_eax[0x13] +
                                ((((1 << (cVar2 + bVar8 & 0x1f)) - 1U & uVar12) >> (bVar8 & 0x1f)) +
                                (uVar3 >> 0x10)) * 4)));
              (*(uint *)(gen_frame + 0x20)) = uVar11;
            } while (uVar14 < (uVar11 >> 8 & 0xff) + (uVar3 >> 8 & 0xff));
          }
          uVar12 = uVar12 >> (bVar8 & 0x1f);
          uVar14 = uVar14 - bVar8;
        }
        uVar12 = uVar12 >> ((byte)((*(uint *)(gen_frame + 0x20)) >> 8) & 0x1f);
        uVar14 = uVar14 - ((*(uint *)(gen_frame + 0x20)) >> 8 & 0xff);
        in_eax[0x10] = (*(uint *)(gen_frame + 0x20)) >> 0x10;
        if ((char)(*(uint *)(gen_frame + 0x20)) == '\0') {
          *in_eax = 0x17;
          break;
        }
        if (((*(uint *)(gen_frame + 0x20)) & 0x20) == 0) {
          if (((*(uint *)(gen_frame + 0x20)) & 0x40) == 0) {
            in_eax[0x12] = (*(uint *)(gen_frame + 0x20)) & 0xf;
            *in_eax = 0x13;
            goto switchD_004cd588_caseD_13;
          }
          param_1[6] = (int)"invalid literal/length code";
          goto LAB_004ce777;
        }
        goto LAB_004ce36b;
      }
      param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
      *param_1 = (int)(*(byte * PTR32 *)(gen_frame + 0x24));
      param_1[4] = (*(uint *)(gen_frame + 0x1c));
      param_1[1] = (*(uint *)(gen_frame + 0x28));
      in_eax[0xe] = uVar12;
      in_eax[0xf] = uVar14;
      F_00b1a630(param_1,(*(uint *)(gen_frame + 0xc)));
      (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)param_1[3];
      uVar12 = in_eax[0xe];
      uVar14 = in_eax[0xf];
      pbVar9 = (byte *)*param_1;
      (*(uint *)(gen_frame + 0x1c)) = param_1[4];
      (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
      (*(uint *)(gen_frame + 0x28)) = param_1[1];
      break;
    case 0x13: ;
switchD_004cd588_caseD_13: ;
      if (in_eax[0x12] != 0) {
        if (uVar14 < in_eax[0x12]) {
          do {
            uVar11 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
            bVar8 = *pbVar9;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar7 = (byte)uVar14;
            pbVar9 = pbVar9 + 1;
            uVar14 = uVar14 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
            uVar12 = uVar12 + ((uint)bVar8 << (bVar7 & 0x1f));
          } while (uVar14 < in_eax[0x12]);
        }
        bVar8 = (byte)in_eax[0x12];
        in_eax[0x10] = in_eax[0x10] + ((1 << (bVar8 & 0x1f)) - 1U & uVar12);
        uVar12 = uVar12 >> (bVar8 & 0x1f);
        uVar14 = uVar14 - in_eax[0x12];
      }
      *in_eax = 0x14;
    case 0x14: ;
      uVar3 = *((uint *)GEN_TOP((in_eax[0x14] + ((1 << ((byte)in_eax[0x16] & 0x1f)) - 1U & uVar12) * 4)));
      (*(uint *)(gen_frame + 0x20)) = uVar3;
      if (uVar14 < (uVar3 >> 8 & 0xff)) {
        do {
          uVar11 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
          bVar8 = *pbVar9;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          bVar7 = (byte)uVar14;
          pbVar9 = pbVar9 + 1;
          uVar14 = uVar14 + 8;
          uVar12 = uVar12 + ((uint)bVar8 << (bVar7 & 0x1f));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
          uVar3 = *((uint *)GEN_TOP((in_eax[0x14] + ((1 << ((byte)in_eax[0x16] & 0x1f)) - 1U & uVar12) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar3;
        } while (uVar14 < (uVar3 >> 8 & 0xff));
      }
      (*(uint *)(gen_frame + 0x20)) = uVar3;
      if ((uVar3 & 0xf0) == 0) {
        bVar8 = (byte)(uVar3 >> 8);
        uVar11 = *((uint *)GEN_TOP((in_eax[0x14] +
                          ((((1 << ((char)uVar3 + bVar8 & 0x1f)) - 1U & uVar12) >> (bVar8 & 0x1f)) +
                          (uVar3 >> 0x10)) * 4)));
        (*(uint *)(gen_frame + 0x20)) = uVar11;
        if (uVar14 < (uVar11 >> 8 & 0xff) + (uVar3 >> 8 & 0xff)) {
          do {
            uVar11 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
            bVar7 = *pbVar9;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar9 = pbVar9 + 1;
            uVar12 = uVar12 + ((uint)bVar7 << ((byte)uVar14 & 0x1f));
            uVar14 = uVar14 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
            uVar11 = *((uint *)GEN_TOP((in_eax[0x14] +
                              ((((1 << ((char)uVar3 + bVar8 & 0x1f)) - 1U & uVar12) >>
                               (bVar8 & 0x1f)) + (uVar3 >> 0x10)) * 4)));
            (*(uint *)(gen_frame + 0x20)) = uVar11;
          } while (uVar14 < (uVar11 >> 8 & 0xff) + (uVar3 >> 8 & 0xff));
        }
        uVar12 = uVar12 >> (bVar8 & 0x1f);
        uVar14 = uVar14 - bVar8;
      }
      uVar12 = uVar12 >> ((byte)((*(uint *)(gen_frame + 0x20)) >> 8) & 0x1f);
      uVar14 = uVar14 - ((*(uint *)(gen_frame + 0x20)) >> 8 & 0xff);
      if (((*(uint *)(gen_frame + 0x20)) & 0x40) != 0) {
        param_1[6] = (int)"invalid distance code";
        goto LAB_004ce777;
      }
      in_eax[0x11] = (*(uint *)(gen_frame + 0x20)) >> 0x10;
      in_eax[0x12] = (*(uint *)(gen_frame + 0x20)) & 0xf;
      *in_eax = 0x15;
switchD_004cd588_caseD_15: ;
      if (in_eax[0x12] != 0) {
        if (uVar14 < in_eax[0x12]) {
          do {
            uVar11 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
            bVar8 = *pbVar9;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar7 = (byte)uVar14;
            pbVar9 = pbVar9 + 1;
            uVar14 = uVar14 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
            uVar12 = uVar12 + ((uint)bVar8 << (bVar7 & 0x1f));
          } while (uVar14 < in_eax[0x12]);
        }
        bVar8 = (byte)in_eax[0x12];
        in_eax[0x11] = in_eax[0x11] + ((1 << (bVar8 & 0x1f)) - 1U & uVar12);
        uVar12 = uVar12 >> (bVar8 & 0x1f);
        uVar14 = uVar14 - in_eax[0x12];
      }
      if ((in_eax[0xb] - (*(uint *)(gen_frame + 0x1c))) + (*(uint *)(gen_frame + 0xc)) < in_eax[0x11]) {
        param_1[6] = (int)"invalid distance too far back";
        goto LAB_004ce777;
      }
      *in_eax = 0x16;
switchD_004cd588_caseD_16: ;
      uVar11 = (*(uint *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x1c)) != 0) {
        uVar3 = in_eax[0x11];
        if ((*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c)) < uVar3) {
          (*(uint *)(gen_frame + 0x20)) = uVar3 - ((*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c)));
          if (in_eax[0xc] < (*(uint *)(gen_frame + 0x20))) {
            (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - in_eax[0xc];
            (*(int *)(gen_frame + 0x0)) = (in_eax[0xd] + in_eax[10]) - (*(uint *)(gen_frame + 0x20));
          }
          else {
            (*(int *)(gen_frame + 0x0)) = (in_eax[0xd] - (*(uint *)(gen_frame + 0x20))) + in_eax[0xc];
          }
          (*(uint *)(gen_frame + 0x8)) = in_eax[0x10];
          if ((*(uint *)(gen_frame + 0x8)) < (*(uint *)(gen_frame + 0x20))) goto LAB_004ce5f5;
        }
        else {
          (*(int *)(gen_frame + 0x0)) = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - uVar3;
          (*(uint *)(gen_frame + 0x8)) = in_eax[0x10];
LAB_004ce5f5: ;
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x8));
        }
        if ((*(uint *)(gen_frame + 0x1c)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x1c));
        }
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0x20));
        in_eax[0x10] = (*(uint *)(gen_frame + 0x8)) - (*(uint *)(gen_frame + 0x20));
        iVar4 = (*(int *)(gen_frame + 0x0)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        do {
          *(*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14))[iVar4];
          (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + 1;
          uVar3 = (*(uint *)(gen_frame + 0x20)) - 1;
          (*(uint *)(gen_frame + 0x20)) = uVar3;
        } while (uVar3 != 0);
        if (in_eax[0x10] == 0) {
          *in_eax = 0x12;
        }
        break;
      }
      goto LAB_004ce7db;
    case 0x15: ;
      goto switchD_004cd588_caseD_15;
    case 0x16: ;
      goto switchD_004cd588_caseD_16;
    case 0x17: ;
      if ((*(uint *)(gen_frame + 0x1c)) == 0) goto LAB_004ce7db;
      *(*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (char)in_eax[0x10];
      (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + 1;
      (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - 1;
      *in_eax = 0x12;
      break;
    case 0x18: ;
      if (in_eax[2] != 0) {
        for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
          bVar8 = *pbVar9;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar9 = pbVar9 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
          uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
        }
        iVar4 = (*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c));
        param_1[5] = param_1[5] + iVar4;
        in_eax[7] = in_eax[7] + iVar4;
        if (iVar4 != 0) {
          if (in_eax[4] == 0) {
            uVar3 = F_00b17ee0(in_eax[6],(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - iVar4,iVar4);
          }
          else {
            uVar3 = F_00b1a540(in_eax[6],(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - iVar4,iVar4);
          }
          in_eax[6] = uVar3;
          param_1[0xc] = uVar3;
          pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x1c));
        uVar3 = uVar12;
        if (in_eax[4] == 0) {
          uVar3 = ((uVar12 & 0xff00) + uVar12 * 0x10000) * 0x100 + (uVar12 >> 8 & 0xff00) +
                  (uVar12 >> 0x18);
        }
        if (uVar3 != in_eax[6]) {
          param_1[6] = (int)"incorrect data check";
          goto LAB_004ce777;
        }
        uVar12 = 0;
        uVar14 = 0;
      }
      *in_eax = 0x19;
    case 0x19: ;
      if ((in_eax[2] != 0) && (in_eax[4] != 0)) {
        for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
          uVar11 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_004ce7db;
          bVar8 = *pbVar9;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar9 = pbVar9 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar9;
          uVar12 = uVar12 + ((uint)bVar8 << ((byte)uVar14 & 0x1f));
        }
        if (uVar12 != in_eax[7]) {
          param_1[6] = (int)"incorrect length check";
          goto LAB_004ce777;
        }
        uVar12 = 0;
        uVar14 = 0;
      }
      *in_eax = 0x1a;
switchD_004cd588_caseD_1a: ;
      (*(uint *)(gen_frame + 0x4)) = 1;
      uVar11 = (*(uint *)(gen_frame + 0x20));
      goto LAB_004ce7db;
    case 0x1a: ;
      goto switchD_004cd588_caseD_1a;
    case 0x1b: ;
      (*(uint *)(gen_frame + 0x4)) = 0xfffffffd;
      goto LAB_004ce7db;
    case 0x1c: ;
      goto switchD_004cd588_caseD_1c;
    default: ;
      return 0xfffffffe;
    }
    uVar3 = *in_eax;
  } while( true );
}

/* ref: FUN_004ce970 */
GEN_FRAME uint GEN_STDCALL F_004ce970(unsigned int gen_a0)
{
  GEN_ENTER(0x4ce970u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     ((code *)*(gen_code32 *)(param_1 + 0x24) != (code *)0x0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x34)));
    if (iVar1 != 0) {
      ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_004ce9d0 */
GEN_FRAME uint GEN_STDCALL F_004ce9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ce9d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (piVar1[2] == 0) {
    if (*piVar1 != 10) goto LAB_004cea32;
  }
  else if (*piVar1 != 10) {
    return 0xfffffffe;
  }
  uVar2 = F_00b17ee0(0,0,0);
  uVar2 = F_00b17ee0(uVar2,param_2,param_3);
  if (uVar2 != piVar1[6]) {
    return 0xfffffffd;
  }
LAB_004cea32: ;
  uVar2 = F_004cd410(*(undefined4 *)(param_1 + 0x10),param_1);
  if (uVar2 != 0) {
    *piVar1 = 0x1c;
    return 0xfffffffc;
  }
  uVar2 = piVar1[10];
  if (uVar2 < param_3) {
    F_00c46aa0(piVar1[0xd],(param_2 - uVar2) + param_3,uVar2);
    piVar1[0xb] = piVar1[10];
    piVar1[3] = 1;
    return 0;
  }
  F_00c46aa0((piVar1[0xd] - param_3) + uVar2,param_2,param_3);
  piVar1[0xb] = param_3;
  piVar1[3] = 1;
  return 0;
}

/* ref: FUN_004ceab0 */
GEN_FRAME uint GEN_STDCALL F_004ceab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ceab0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 8) & 2) != 0)) {
    *(int *)(iVar1 + 0x20) = param_2;
    *(undefined4 *)(param_2 + 0x30) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_004ceaf0 */
GEN_FRAME uint F_004ceaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ceaf0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_esi = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      if (3 < uVar2) break;
      if ((uint)*(byte *)(uVar1 + in_esi) == (-(uint)(uVar2 < 2) & 0xffffff01) + 0xff) {
        uVar2 = uVar2 + 1;
      }
      else if (*(byte *)(uVar1 + in_esi) == 0) {
        uVar2 = 4 - uVar2;
      }
      else {
        uVar2 = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  *param_2 = uVar2;
  return uVar1;
}

/* ref: FUN_004ceb50 */
GEN_FRAME uint GEN_STDCALL F_004ceb50(unsigned int gen_a0)
{
  GEN_ENTER(0x4ceb50u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  if (((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) || (piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[7])), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (((*(int * PTR32 *)&gen_args[0])[1] == 0) && ((uint)piVar1[0xf] < 8)) {
    return 0xfffffffb;
  }
  if (*piVar1 != 0x1d) {
    uVar3 = piVar1[0xf] & 7;
    piVar1[0xe] = piVar1[0xe] << (sbyte)uVar3;
    uVar3 = piVar1[0xf] - uVar3;
    iVar4 = 0;
    *piVar1 = 0x1d;
    piVar1[0xf] = uVar3;
    if (7 < uVar3) {
      uVar5 = piVar1[0xe];
      do {
        uVar3 = uVar3 - 8;
        *((char *)GEN_TOP(((int)&(*(int * PTR32 *)&gen_args[0]) + iVar4))) = (char)piVar1[0xe];
        uVar5 = uVar5 >> 8;
        iVar4 = iVar4 + 1;
        piVar1[0xe] = uVar5;
        piVar1[0xf] = uVar3;
      } while (7 < uVar3);
    }
    piVar1[0x1a] = 0;
    F_004ceaf0(&(*(int * PTR32 *)&gen_args[0]),piVar1 + 0x1a,iVar4);
  }
  uVar3 = F_004ceaf0(*piVar2,piVar1 + 0x1a,piVar2[1]);
  piVar2[2] = piVar2[2] + uVar3;
  piVar2[1] = piVar2[1] - uVar3;
  *piVar2 = *piVar2 + uVar3;
  iVar4 = piVar2[2];
  if (piVar1[0x1a] != 4) {
    return 0xfffffffd;
  }
  (*(int * PTR32 *)&gen_args[0]) = (int *)piVar2[5];
  F_004cd220(piVar2);
  piVar2[2] = iVar4;
  piVar2[5] = (int)(*(int * PTR32 *)&gen_args[0]);
  *piVar1 = 0xb;
  return 0;
}

/* ref: FUN_004cec40 */
GEN_FRAME uint GEN_STDCALL F_004cec40(unsigned int gen_a0)
{
  GEN_ENTER(0x4cec40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if ((*piVar1 == 0xd) && (piVar1[0xf] == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004cec80 */
GEN_FRAME uint GEN_STDCALL F_004cec80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cec80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_2;
  if ((((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
      (iVar1 = param_2[7], iVar1 == 0)) ||
     (((code *)param_2[8] == (code *)0x0 || (param_2[9] == 0)))) {
    return 0xfffffffe;
  }
  uVar3 = (*(code *)param_2[8])(param_2[10],1,0x2530);
  if (uVar3 == 0) {
    return 0xfffffffc;
  }
  param_2 = (undefined4 *)0x0;
  if ((*(int *)(iVar1 + 0x34) != 0) &&
     (param_2 = ((undefined4 *)GEN_TOP((*(code *)puVar5[8])(puVar5[10],1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1)))
     , param_2 == (undefined4 *)0x0)) {
    (*(code *)puVar5[9])(puVar5[10],uVar3);
    return 0xfffffffc;
  }
  puVar6 = param_1;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  F_00c46aa0(uVar3,iVar1,0x2530);
  uVar2 = *(uint *)(iVar1 + 0x4c);
  if ((iVar1 + 0x530U <= uVar2) && (uVar2 <= iVar1 + 0x252cU)) {
    *(uint *)(uVar3 + 0x4c) = uVar3 + 0x530 + ((int)((uVar2 - iVar1) - 0x530) >> 2) * 4;
    *(uint *)(uVar3 + 0x50) = uVar3 + 0x530 + ((*(int *)(iVar1 + 0x50) - iVar1) - 0x530 >> 2) * 4;
  }
  *(uint *)(uVar3 + 0x6c) = uVar3 + 0x530 + ((*(int *)(iVar1 + 0x6c) - iVar1) - 0x530 >> 2) * 4;
  if (param_2 != (undefined4 *)0x0) {
    F_00c46aa0(param_2,*(undefined4 *)(iVar1 + 0x34),
               1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f));
  }
  *(undefined4 * PTR32 *)(uVar3 + 0x34) = param_2;
  param_1[7] = uVar3;
  return 0;
}

/* ref: FUN_004cedf0 */
GEN_FRAME unsigned int GEN_STDCALL F_004cedf0(unsigned int gen_a0)
{
  GEN_ENTER(0x4cedf0u, gen_a0, 0u, 0u, 0u);
  DWORD param_1 = (DWORD)gen_a0;
  return (uint)(gen_imp_SleepEx(param_1,0));
}

/* ref: FUN_004cee10 */
GEN_NOFRAME unsigned int F_004cee10(void)
{
  GEN_ENTER(0x4cee10u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_Sleep(0));
}

/* ref: FUN_004cee20 */
GEN_FRAME unsigned int GEN_STDCALL F_004cee20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4cee20u, gen_a0, gen_a1, 0u, 0u);
  GEN_LPANY param_1 = (GEN_LPANY)gen_a0;
  GEN_LPANY param_2 = (GEN_LPANY)gen_a1;
  HANDLE hProcess;
  
  hProcess = gen_imp_GetCurrentProcess();
  return (uint)(gen_imp_GetProcessAffinityMask(hProcess,param_1,param_2));
}

/* ref: FUN_004cee40 */
GEN_FRAME unsigned int GEN_STDCALL F_004cee40(unsigned int gen_a0)
{
  GEN_ENTER(0x4cee40u, gen_a0, 0u, 0u, 0u);
  DWORD_PTR param_1 = (DWORD_PTR)gen_a0;
  HANDLE hThread;
  
  hThread = gen_imp_GetCurrentThread();
  return (uint)(gen_imp_SetThreadAffinityMask(hThread,param_1));
}

/* ref: FUN_004cee60 */
GEN_FRAME unsigned int F_004cee60(unsigned int gen_a0)
{
  GEN_ENTER(0x4cee60u, gen_a0, 0u, 0u, 0u);
  DWORD param_1 = (DWORD)gen_a0;
  return (uint)(gen_imp_SleepEx(param_1,0));
}

/* ref: FUN_004cee80 */
GEN_NOFRAME unsigned int F_004cee80(void)
{
  GEN_ENTER(0x4cee80u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_Sleep(0));
}

/* ref: FUN_004cee90 */
GEN_FRAME unsigned int GEN_THISCALL F_004cee90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cee90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD_PTR param_1 = (DWORD_PTR)gen_a1;
  *(DWORD_PTR *)((int)this + 0x10) = param_1;
  if (*(HANDLE *)((int)this + 8) != (HANDLE)0x0) {
    gen_imp_SetThreadAffinityMask(*(HANDLE *)((int)this + 8),param_1);
  }
  return 0;
}

/* ref: Client::System::Threading::Thread::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004ceeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ceeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_004cef40 */
GEN_NOFRAME uint GEN_THISCALL F_004cef40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cef40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD DVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1095434));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  REFG(void * PTR32, 0x1375a1c) = this;
  DVar1 = gen_imp_GetCurrentThreadId();
  *(DWORD *)((int)this + 4) = DVar1;
  *(undefined4 *)((int)this + 0x824) = 0;
  *(undefined4 *)((int)this + 0x820) = 0;
  return (uint)this;
}

/* ref: FUN_004cef80 */
GEN_NOFRAME uint F_004cef80(void)
{
  GEN_ENTER(0x4cef80u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  DWORD DVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x828,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1095434));
    gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
    REFG(undefined4 * PTR32, 0x1375a1c) = puVar1;
    DVar2 = gen_imp_GetCurrentThreadId();
    puVar1[1] = DVar2;
    puVar1[0x209] = 0;
    puVar1[0x208] = 0;
    return (uint)puVar1;
  }
  return 0;
}

/* ref: FUN_004cefe0 */
GEN_NOFRAME uint GEN_THISCALL F_004cefe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cefe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x109543c));
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,1,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 4) = pvVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x15) = 0;
  return (uint)this;
}

/* ref: FUN_004cf020 */
GEN_NOFRAME uint GEN_THISCALL F_004cf020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 4),0xffffffff);
  return DVar1;
}

/* ref: FUN_004cf030 */
GEN_NOFRAME uint GEN_THISCALL F_004cf030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 4),0);
  return (uint)(DVar1 == 0);
}

/* ref: FUN_004cf050 */
GEN_NOFRAME byte GEN_THISCALL F_004cf050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 4),0xffffffff);
  return 1;
}

/* ref: FUN_004cf070 */
GEN_NOFRAME byte GEN_THISCALL F_004cf070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG);
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 4),0xffffffff);
  return 1;
}

/* ref: FUN_004cf0c0 */
GEN_FRAME uint GEN_THISCALL F_004cf0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4cf0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * _Dst;
  
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1095458));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  _Dst = (undefined *)F_00406bb0(param_1 * param_2 + 3U & 0xfffffffc,0,0);
  *(undefined * PTR32 *)((int)this + 0x20) = _Dst;
  F_00c48350(_Dst,0,param_1 * param_2);
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x18))), (long)(0));
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x10))), (long)(0));
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x14))), (long)(0));
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x1c))), (long)(0));
  return (uint)this;
}

/* ref: FUN_004cf160 */
GEN_NOFRAME uint GEN_THISCALL F_004cf160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1095458));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x20));
  return (uint)uVar1;
}

/* ref: FUN_004cf180 */
GEN_FRAME ulonglong GEN_THISCALL F_004cf180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cf180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = (uint *)((int)this + 0x14);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
  uVar4 = (uVar7 + 1) % *(uint *)((int)this + 8);
  puVar1 = (uint *)((int)this + 0x1c);
  uVar6 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
  uVar5 = uVar4;
  if (uVar4 != uVar6) {
    do {
      uVar6 = _InterlockedCompareExchange((volatile long *)(((uint *)((int)this + 0x14))), (long)(uVar5), (long)(uVar7));
      if (uVar7 == uVar6) {
        puVar2 = ((undefined4 *)GEN_TOP((*(uint *)((int)this + 4) * uVar6 + *(int *)((int)this + 0x20))));
        uVar6 = *(uint *)((int)this + 4) >> 2;
        if (uVar6 != 0) {
          iVar3 = param_1 - (int)puVar2;
          param_1 = uVar6;
          do {
            *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
            puVar2 = puVar2 + 1;
            param_1 = param_1 - 1;
          } while (param_1 != 0);
        }
        uVar6 = _InterlockedCompareExchange((volatile long *)(((uint *)((int)this + 0x10))), (long)(uVar5), (long)(uVar7));
        while (uVar6 != uVar7) {
          gen_imp_Sleep(0);
          uVar6 = _InterlockedCompareExchange((volatile long *)(((uint *)((int)this + 0x10))), (long)(uVar5), (long)(uVar7));
        }
        return CONCAT44((int)this + 0x10,CONCAT31((int3)(uVar6 >> 8),1));
      }
      gen_imp_Sleep(0);
      puVar1 = (uint *)((int)this + 0x14);
      uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
      uVar5 = (uVar7 + 1) % *(uint *)((int)this + 8);
      puVar1 = (uint *)((int)this + 0x1c);
      uVar4 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
    } while (uVar5 != uVar4);
  }
  return CONCAT44(uVar4,(int)this + 0x1c) & 0xffffffffffffff00;
}

/* ref: FUN_004cf260 */
GEN_FRAME uint GEN_THISCALL F_004cf260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cf260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)((int)this + 0x14);
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
  uVar4 = (uVar3 + 1) % *(uint *)((int)this + 8);
  puVar1 = (uint *)((int)this + 0x1c);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
  if (uVar4 != uVar2) {
    do {
      uVar2 = _InterlockedCompareExchange((volatile long *)(((uint *)((int)this + 0x14))), (long)(uVar4), (long)(uVar3));
      if (uVar3 == uVar2) {
        *param_1 = uVar3;
        return *(int *)((int)this + 4) * uVar2 + *(int *)((int)this + 0x20);
      }
      gen_imp_Sleep(0);
      puVar1 = (uint *)((int)this + 0x14);
      uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
      uVar4 = (uVar3 + 1) % *(uint *)((int)this + 8);
      puVar1 = (uint *)((int)this + 0x1c);
      uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
    } while (uVar4 != uVar2);
  }
  return 0;
}

/* ref: FUN_004cf2e0 */
GEN_FRAME unsigned int GEN_THISCALL F_004cf2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cf2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_1 + 1) % *(uint *)((int)this + 8);
  puVar1 = (uint *)((int)this + 0x10);
  uVar2 = _InterlockedCompareExchange((volatile long *)(puVar1), (long)(uVar3), (long)(param_1));
  while (uVar2 != param_1) {
    gen_imp_Sleep(0);
    uVar2 = _InterlockedCompareExchange((volatile long *)(puVar1), (long)(uVar3), (long)(param_1));
  }
  return 0;
}

/* ref: FUN_004cf330 */
GEN_FRAME uint GEN_THISCALL F_004cf330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cf330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (uint *)((int)this + 0x18);
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
  uVar5 = (uVar3 + 1) % *(uint *)((int)this + 8);
  puVar2 = (uint *)((int)this + 0x10);
  uVar4 = _InterlockedExchangeAdd((volatile long *)(puVar2), 0);
  if (uVar3 != uVar4) {
    uVar4 = _InterlockedCompareExchange((volatile long *)(puVar1), (long)(uVar5), (long)(uVar3));
    if (uVar3 == uVar4) {
      F_00c46aa0(param_1,*(int *)((int)this + 4) * uVar4 + *(int *)((int)this + 0x20),
                 *(int *)((int)this + 4));
      uVar4 = _InterlockedCompareExchange((volatile long *)(((uint *)((int)this + 0x1c))), (long)(uVar5), (long)(uVar3));
      while (uVar4 != uVar3) {
        gen_imp_Sleep(0);
        uVar4 = _InterlockedCompareExchange((volatile long *)(((uint *)((int)this + 0x1c))), (long)(uVar5), (long)(uVar3));
      }
      return param_1;
    }
  }
  return 0;
}

/* ref: FUN_004cf3c0 */
GEN_FRAME uint GEN_THISCALL F_004cf3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cf3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)((int)this + 0x18);
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), 0);
  puVar2 = (uint *)((int)this + 0x10);
  uVar4 = _InterlockedExchangeAdd((volatile long *)(puVar2), 0);
  if (uVar3 != uVar4) {
    uVar4 = _InterlockedCompareExchange((volatile long *)(puVar1), (long)((uVar3 + 1) % *(uint *)((int)this + 8)), (long)(uVar3));
    if (uVar3 == uVar4) {
      *param_1 = uVar3;
      return *(int *)((int)this + 4) * uVar4 + *(int *)((int)this + 0x20);
    }
  }
  return 0;
}

/* ref: FUN_004cf410 */
GEN_FRAME unsigned int GEN_THISCALL F_004cf410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cf410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_1 + 1) % *(uint *)((int)this + 8);
  puVar1 = (uint *)((int)this + 0x1c);
  uVar2 = _InterlockedCompareExchange((volatile long *)(puVar1), (long)(uVar3), (long)(param_1));
  while (uVar2 != param_1) {
    gen_imp_Sleep(0);
    uVar2 = _InterlockedCompareExchange((volatile long *)(puVar1), (long)(uVar3), (long)(param_1));
  }
  return 0;
}

/* ref: FUN_004cf460 */
GEN_NOFRAME uint GEN_THISCALL F_004cf460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)((int)this + 0x10);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  piVar1 = (int *)((int)this + 0x1c);
  iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  uVar4 = iVar2 - iVar3;
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + *(int *)((int)this + 8);
  }
  return uVar4;
}

/* ref: FUN_004cf480 */
GEN_NOFRAME uint GEN_THISCALL F_004cf480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1095460));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return (uint)this;
}

/* ref: FUN_004cf4b0 */
GEN_NOFRAME uint GEN_THISCALL F_004cf4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  HANDLE pvVar5;
  uint uVar6;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x24);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)F_00406b90(8,0,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      pvVar5 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
      *puVar4 = pvVar5;
      puVar4[1] = 0;
    }
  }
  else if (puVar4 != (undefined4 *)0x0) {
    if (puVar4[1] == 0) {
      *(undefined4 *)((int)this + 0x28) = 0;
    }
    *(undefined4 *)((int)this + 0x24) = puVar4[1];
  }
  puVar4[1] = 0;
  if (*(int *)((int)this + 0x1c) == 0) {
    *(undefined4 * PTR32 *)((int)this + 0x1c) = puVar4;
  }
  else if (*(int *)((int)this + 0x20) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + 4))) = puVar4;
  }
  *(undefined4 * PTR32 *)((int)this + 0x20) = puVar4;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  gen_imp_WaitForSingleObject((HANDLE)*puVar4,0xffffffff);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x1c);
  puVar2 = (undefined4 *)0x0;
  do {
    puVar1 = puVar3;
    if (puVar1 == (undefined4 *)0x0) {
LAB_004cf55e: ;
      uVar6 = gen_imp_ResetEvent((HANDLE)*puVar4);
      puVar4[1] = 0;
      if (*(int *)((int)this + 0x24) == 0) {
        *(undefined4 * PTR32 *)((int)this + 0x24) = puVar4;
        *(undefined4 * PTR32 *)((int)this + 0x28) = puVar4;
        return uVar6;
      }
      uVar6 = *(uint *)((int)this + 0x28);
      if (uVar6 != 0) {
        *(undefined4 * PTR32 *)(uVar6 + 4) = puVar4;
      }
      *(undefined4 * PTR32 *)((int)this + 0x28) = puVar4;
      return uVar6;
    }
    if (puVar1 == puVar4) {
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)((int)this + 0x1c) = puVar1[1];
      }
      else {
        puVar2[1] = puVar1[1];
      }
      if (*(undefined4 * PTR32 *)((int)this + 0x20) == puVar1) {
        *(undefined4 * PTR32 *)((int)this + 0x20) = puVar2;
      }
      goto LAB_004cf55e;
    }
    puVar3 = (undefined4 *)puVar1[1];
    puVar2 = puVar1;
  } while( true );
}

/* ref: FUN_004cf5d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004cf5d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1095434));
  if (*(int *)((int)this + 0x820) != 0) {
    gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP((*(int *)((int)this + 0x820) + 4))),0xffffffff);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x820);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    }
  }
  REFG(undefined4, 0x1375a1c) = 0;
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 8)));
}

/* ref: FUN_004cf620 */
GEN_FRAME uint GEN_THISCALL F_004cf620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  DWORD DVar3;
  uint uVar4;
  int * piVar5;
  int local_c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  local_c = *(int *)((int)this + 0x824);
  if (0 < local_c) {
    piVar5 = (int *)((int)this + 0x20);
    do {
      if (*piVar5 != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5 GEN_EDX_ARG);
      }
      piVar5 = piVar5 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  do {
    bVar2 = false;
    gen_imp_EnterCriticalSection(lpCriticalSection);
    local_c = *(int *)((int)this + 0x824);
    if (0 < local_c) {
      piVar5 = (int *)((int)this + 0x20);
      do {
        iVar1 = *piVar5;
        if (iVar1 != 0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
          DVar3 = gen_imp_WaitForSingleObject(*(HANDLE *)(iVar1 + 4),0);
          if (DVar3 != 0) {
            bVar2 = true;
          }
          gen_imp_EnterCriticalSection(lpCriticalSection);
        }
        piVar5 = piVar5 + 1;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  } while (bVar2);
  uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  return uVar4;
}

/* ref: FUN_004cf6e0 */
GEN_FRAME unsigned int GEN_THISCALL F_004cf6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cf6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)((int)this + 0x824);
  if ((0 < iVar1) && (iVar3 = 0, 0 < iVar1)) {
    piVar4 = (int *)((int)this + 0x20);
    do {
      if (*piVar4 == 0) {
        *(undefined4 *)((int)this + iVar3 * 4 + 0x20) = param_1;
        return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  *(undefined4 *)((int)this + iVar1 * 4 + 0x20) = param_1;
  *(int *)((int)this + 0x824) = *(int *)((int)this + 0x824) + 1;
  if (*(int *)((int)this + 0x820) != 0) {
    gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP((*(int *)((int)this + 0x820) + 4))),0xffffffff);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x820);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    }
    *(undefined4 *)((int)this + 0x820) = 0;
  }
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: FUN_004cf780 */
GEN_FRAME unsigned int GEN_THISCALL F_004cf780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cf780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (((char)param_2 != '\0') && (iVar2 = *(int *)((int)this + 0x820), iVar2 != param_1)) {
    if (iVar2 != 0) {
      gen_imp_WaitForSingleObject(*(HANDLE *)(iVar2 + 4),0xffffffff);
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0x820);
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      }
    }
    *(int *)((int)this + 0x820) = param_1;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x824)) {
    piVar3 = (int *)((int)this + 0x20);
    while (*piVar3 != param_1) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (*(int *)((int)this + 0x824) <= iVar2) {
        return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
      }
    }
    *(undefined4 *)((int)this + iVar2 * 4 + 0x20) = 0;
    iVar4 = *(int *)((int)this + 0x824) - 1;
    if (iVar2 == iVar4) {
      *(int *)((int)this + 0x824) = iVar4;
    }
  }
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: FUN_004cf830 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004cf830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  if (*(int *)((int)this + 0x820) != 0) {
    gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP((*(int *)((int)this + 0x820) + 4))),0xffffffff);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x820);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    }
    *(undefined4 *)((int)this + 0x820) = 0;
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8)));
}

/* ref: FUN_004cf880 */
GEN_FRAME unsigned int GEN_THISCALL F_004cf880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x109543c));
  *(undefined1 *)((int)this + 0x14) = 1;
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 4),0xffffffff);
  if (*(int *)((int)this + 8) != 0) {
    iVar1 = gen_imp_GetExitCodeThread(*(int *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    while ((iVar1 != 0 && ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x103))) {
      gen_imp_Sleep(0);
      iVar1 = gen_imp_GetExitCodeThread(*(undefined4 *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    }
    gen_imp_CloseHandle(*(HANDLE *)((int)this + 8));
  }
  return (uint)(gen_imp_CloseHandle(*(HANDLE *)((int)this + 4)));
}

/* ref: FUN_004cf900 */
GEN_FRAME uint GEN_STDCALL F_004cf900(unsigned int gen_a0)
{
  GEN_ENTER(0x4cf900u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,param_1);
  F_004cf780(REFG(void * PTR32, 0x1375a1c) GEN_EDX_ARG,param_1,(uint)*(byte *)((int)param_1 + 0x15));
  gen_imp_SetEvent((HANDLE)param_1[1]);
  return 0;
}

/* ref: FUN_004cf950 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004cf950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cf950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1095460));
  while (puVar1 != (undefined4 *)0x0) {
    iVar2 = *(int *)((int)this + 0x1c);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) == 0) {
        *(undefined4 *)((int)this + 0x20) = 0;
      }
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(iVar2 + 4);
    }
    if (puVar1 != (undefined4 *)0x0) {
      gen_imp_CloseHandle((HANDLE)*puVar1);
      F_00406ad0(puVar1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1c);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  while (puVar1 != (undefined4 *)0x0) {
    iVar2 = *(int *)((int)this + 0x24);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) == 0) {
        *(undefined4 *)((int)this + 0x28) = 0;
      }
      *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(iVar2 + 4);
    }
    if (puVar1 != (undefined4 *)0x0) {
      gen_imp_CloseHandle((HANDLE)*puVar1);
      F_00406ad0(puVar1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  }
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: FUN_004cf9e0 */
GEN_FRAME uint GEN_THISCALL F_004cf9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4cf9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x98];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x84);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  HANDLE hThread;
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[3]);
  (*(volatile undefined4 *)(gen_frame + 0x78)) = 0xfffffffe;
  (*(volatile undefined * PTR32 *)(gen_frame + 0x74)) = &REFG(undefined, 0x12f5b38);
  (*(gen_code32 *)(gen_frame + 0x70)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(volatile undefined * PTR32 *)(gen_frame + 0x74)) = (undefined *)(REFG(undefined4, 0x134ab78) ^ 0x12f5b38);
  (*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x6c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x6c)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)&(*(uint *)(gen_frame + 0x8));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined1 * PTR32 *)&gen_args[4]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x15))) = (undefined1)(*(undefined4 *)&gen_args[1]);
  if ((*(undefined1 * PTR32 *)&gen_args[4]) == (undefined1 *)0x0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x20)),0x40,"FFXIVThread%d",(*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = ((undefined1 *)(gen_frame + 0x20));
  }
  if (uVar1 == 0) {
    uVar1 = 0x10000;
  }
  gen_imp_ResetEvent(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
  hThread = (HANDLE)F_00c4d78e((undefined *)0x0,uVar1,((code *)REFP(0x4cf900)),(*(undefined * PTR32 *)&gen_args[0]),4,((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))
  ;
  *((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = hThread;
  if (*((DWORD_PTR *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
    gen_imp_SetThreadAffinityMask(hThread,*((DWORD_PTR *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
  }
  gen_imp_SetThreadPriority(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(int *)&gen_args[2]));
  *(undefined4 *)&REFG(undefined, 0x1375a20) = 0x1000;
  *(undefined1 * PTR32 *)&REFG(undefined, 0x1375a24) = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
  *(uint *)&REFG(undefined, 0x1375a28) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  *(undefined4 *)&REFG(undefined, 0x1375a2c) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x78)) = 0;
  gen_imp_RaiseException(0x406d1388,0,4,(ULONG_PTR *)&REFG(undefined, 0x1375a20));
  (*(volatile undefined4 *)(gen_frame + 0x78)) = 0xfffffffe;
  gen_imp_ResumeThread(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
  F_004cf6e0(REFG(void * PTR32, 0x1375a1c) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x6c));
  F_00c47745((*(uint *)(gen_frame + 0x60)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004cfad7 */
GEN_NOFRAME uint F_004cfad7(void)
{
  GEN_ENTER(0x4cfad7u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: FUN_004cfadb */
GEN_NOFRAME uint F_004cfadb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4cfadbu, gen_a0, gen_a1, gen_a2, gen_a3);
  uint in_ebp = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * this;
  undefined1 * puVar5;
  
  iVar1 = *(int *)(in_ebp - 0x18);
  *(undefined4 *)(in_ebp - 4) = 0xfffffffe;
  iVar2 = *(int *)(in_ebp - 100);
  *(undefined4 *)(iVar1 - 4) = *(undefined4 *)(iVar2 + 8);
  puVar5 = (undefined1 *)(iVar1 - 8);
  *(undefined4 *)(iVar1 - 8) = 0x4cfaf2;
  gen_imp_ResumeThread(*(HANDLE *)(iVar1 - 4));
  *(int *)(puVar5 - 4) = iVar2;
  this = REFG(void * PTR32, 0x1375a1c);
  *(undefined4 *)(puVar5 - 8) = 0x4cfafe;
  F_004cf6e0(this GEN_EDX_ARG,*(undefined4 *)(puVar5 - 4));
  uVar3 = *(uint *)(iVar2 + 0xc);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *(undefined * PTR32 *)(in_ebp - 0x10);
  uVar4 = *(uint *)(in_ebp - 0x1c);
  *(undefined4 *)(puVar5 + 0xc) = 0x4cfb19;
  F_00c47745(uVar4 ^ in_ebp GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_004cfb70 */
GEN_FRAME uint GEN_THISCALL F_004cfb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cfb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)this == 0) {
    *(uint *)this = param_1;
    *(uint *)((int)this + 4) = param_1;
    return param_1;
  }
  if (*(int *)((int)this + 4) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = param_1;
  }
  *(uint *)((int)this + 4) = param_1;
  return param_1;
}

/* ref: FUN_004cfba0 */
GEN_FRAME unsigned int GEN_THISCALL F_004cfba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cfba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)this;
  if (*(int *)this != 0) {
    while (iVar2 = iVar1, iVar2 != param_1) {
      iVar1 = *(int *)(iVar2 + 4);
      iVar3 = iVar2;
      if (*(int *)(iVar2 + 4) == 0) {
        return 0;
      }
    }
    if (iVar3 == 0) {
      *(undefined4 *)this = *(undefined4 *)(iVar2 + 4);
    }
    else {
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar2 + 4);
    }
    if (*(int *)((int)this + 4) == iVar2) {
      *(int *)((int)this + 4) = iVar3;
    }
  }
  return 0;
}

/* ref: FUN_004cfbf0 */
GEN_FRAME uint GEN_THISCALL F_004cfbf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cfbf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  LOCK();
  uVar1 = *(uint *)this;
  if (param_2 == uVar1) {
    *(undefined4 *)this = param_1;
    uVar1 = param_2;
  }
  UNLOCK();
  return uVar1;
}

/* ref: FUN_004cfc30 */
GEN_FRAME uint GEN_THISCALL F_004cfc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cfc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1 % *(uint *)((int)this + 8);
}

/* ref: FUN_004cfc50 */
GEN_FRAME uint GEN_THISCALL F_004cfc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cfc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  gen_imp_CloseHandle(*(HANDLE *)this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Threading::LocklessRingBuffer::vf0 */
GEN_FRAME uint GEN_THISCALL F_004cfc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cfc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1095458));
  F_00406b30(*(undefined4 *)(this + 0x20));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Threading::ThreadManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_004cfcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cfcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1095434));
  if (*(int *)(this + 0x820) != 0) {
    gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP((*(int *)(this + 0x820) + 4))),0xffffffff);
    puVar1 = *(undefined4 * PTR32 *)(this + 0x820);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    }
  }
  REFG(undefined4, 0x1375a1c) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Threading::Thread::vf0 */
GEN_FRAME uint GEN_THISCALL F_004cfd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cfd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004cf880(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Threading::SyncObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_004cfd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cfd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004cf950(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004cfd90 */
GEN_NOFRAME uint GEN_THISCALL F_004cfd90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cfd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096864));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
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
  *(undefined4 *)((int)this + 0x78) = 0;
  return (uint)this;
}

/* ref: FUN_004cfdf0 */
GEN_NOFRAME uint GEN_THISCALL F_004cfdf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cfdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_004cfe30 */
GEN_FRAME uint GEN_THISCALL F_004cfe30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4cfe30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x50 + *(int *)(in_ecx + 0x74);
}

/* ref: FUN_004cfe50 */
GEN_FRAME byte GEN_THISCALL F_004cfe50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4cfe50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return 1;
}

/* ref: FUN_004cff10 */
GEN_NOFRAME uint GEN_THISCALL F_004cff10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cff10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x20);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x74);
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[-4] == 0) {
      F_00406b30(puVar2 - 4);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,3);
    }
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x58) != 0) {
    uVar3 = F_00406810(*(int *)((int)this + 0x58));
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  return uVar3;
}

/* ref: FUN_004cffd0 */
GEN_FRAME byte GEN_THISCALL F_004cffd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4cffd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,5,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x73686364;
  uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitiveVS.shcd",0,0,0);
  *(uint *)((int)this + 4) = uVar2;
  if (uVar2 != 0) {
    uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitivePS.shcd",0,0,0);
    *(uint *)((int)this + 8) = uVar2;
    if (uVar2 != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x98)));
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      }
      piVar1 = *(int * PTR32 *)((int)this + 0xc);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      }
      *(undefined4 *)((int)this + 0xc) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x98)));
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 0x9c)));
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      }
      if (*(int * PTR32 *)((int)this + 0x10) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))();
      }
      *(undefined4 *)((int)this + 0x10) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x9c)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_004d0079 */
GEN_NOFRAME byte F_004d0079(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4d0079u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 in_ebp = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(in_esi + 0x10);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  *(undefined4 *)(in_esi + 0x10) = *((undefined4 *)GEN_TOP((*(int *)(in_esi + 8) + 0x9c)));
  return 1;
}

/* ref: FUN_004d00d0 */
GEN_FRAME unsigned int GEN_THISCALL F_004d00d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4d00d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  int local_8;
  
  iVar2 = param_4;
  if (param_3 < param_4) {
    if (param_4 - param_3 < 7) {
      *(undefined4 *)(param_1 + param_3 * 8) = *(undefined4 *)((int)param_2 + param_3 * 8);
      *(undefined4 *)(param_1 + 4 + param_3 * 8) = *(undefined4 *)((int)param_2 + 4 + param_3 * 8);
      iVar2 = param_3 + 1;
      if (iVar2 <= param_4) {
        puVar1 = (uint *)((int)param_2 + iVar2 * 8);
        puVar3 = (uint *)(param_1 - 8 + iVar2 * 8);
        param_2 = puVar3;
        iVar4 = iVar2;
        do {
          for (; (param_3 < iVar2 && (*puVar1 < *puVar3)); puVar3 = puVar3 - 2) {
            puVar3[2] = *puVar3;
            puVar3[3] = puVar3[1];
            iVar2 = iVar2 - 1;
          }
          puVar3 = param_2 + 2;
          *(uint *)(param_1 + iVar2 * 8) = *puVar1;
          *(uint *)(param_1 + 4 + iVar2 * 8) = puVar1[1];
          iVar2 = iVar4 + 1;
          puVar1 = puVar1 + 2;
          param_2 = puVar3;
          iVar4 = iVar2;
        } while (iVar2 <= param_4);
        return;
      }
    }
    else {
      iVar6 = param_3 + param_4 >> 1;
      F_004d00d0(this GEN_EDX_FWD,(int)param_2,(uint *)param_1,param_3,iVar6);
      iVar4 = iVar6 + 1;
      F_004d00d0(this GEN_EDX_ARG,(int)param_2,(uint *)param_1,iVar4,param_4);
      puVar1 = (uint *)(param_1 + param_3 * 8);
      local_8 = param_3;
      puVar3 = (uint *)((int)param_2 + iVar4 * 8);
      puVar7 = (uint *)((int)param_2 + param_3 * 8);
      param_4 = iVar4;
      while ((iVar4 = param_4, param_3 <= iVar6 && (iVar4 = param_3, param_4 <= iVar2))) {
        if (*puVar3 < *puVar7) {
          param_4 = param_4 + 1;
          *puVar1 = *puVar3;
          uVar5 = puVar3[1];
          puVar3 = puVar3 + 2;
        }
        else {
          param_3 = param_3 + 1;
          *puVar1 = *puVar7;
          uVar5 = puVar7[1];
          puVar7 = puVar7 + 2;
        }
        puVar1[1] = uVar5;
        local_8 = local_8 + 1;
        puVar1 = puVar1 + 2;
        if (iVar2 < local_8) {
          return;
        }
      }
      F_00c46aa0(param_1 + local_8 * 8,(int)param_2 + iVar4 * 8,(iVar2 - local_8) * 8 + 8);
    }
  }
  return;
}

/* ref: FUN_004d0290 */
GEN_NOFRAME byte GEN_THISCALL F_004d0290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d0290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (uint *)((int)this + 0x10);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (*(uint *)((int)this + 0xc) <= uVar2) {
    return 0;
  }
  iVar3 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar4 = uVar2 * 0x50;
  *(int *)(iVar3 + 0x1a4) = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x74))) + iVar4;
  *(int *)(iVar3 + 0x1a0) = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x74))) + iVar4;
  return 1;
}

/* ref: FUN_004d02e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d02e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d02e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_004cff10(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_FWD);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_004cff10(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  return;
}

/* ref: FUN_004d0330 */
GEN_NOFRAME byte GEN_THISCALL F_004d0330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d0330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) &&
     (bVar1 = F_004cffd0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD), bVar1 == 0)) {
    return 0;
  }
  if ((*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) &&
     (bVar1 = F_004cffd0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG), bVar1 == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_004d0360 */
GEN_NOFRAME uint GEN_THISCALL F_004d0360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d0360u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109688c));
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004d03c0 */
GEN_NOFRAME uint GEN_THISCALL F_004d03c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d03c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 8);
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)((int)this + 0x4c);
  *(undefined * PTR32 *)((int)this + 0x68) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x6c) = pvVar1;
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x1c);
  *(undefined * PTR32 *)((int)this + 0x88) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x8c) = pvVar1;
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)((int)this + 0x54);
  puVar7 = (undefined4 *)F_004d9920(pvVar1 GEN_EDX_FWD,0,0,2);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = uVar2;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = uVar2;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = uVar2;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = uVar2;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = uVar2;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = uVar2;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = uVar2;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = uVar2;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = uVar2;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = uVar2;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,0,0,2);
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096898)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096894)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1096898));
    puVar7[1] = uVar3;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
    puVar7[4] = uVar6;
    puVar7[5] = uVar3;
    puVar7[6] = uVar2;
    puVar7[7] = 0;
    puVar7[8] = uVar6;
    puVar7[9] = uVar3;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,0,0,2);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = GEN_FLT_TO(puVar7[0xf], REFG(float, 0x1087f04));
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = uVar2;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = uVar2;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = uVar2;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x2c) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = uVar2;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = uVar2;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = uVar2;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = uVar2;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x34) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = uVar2;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = uVar2;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = uVar2;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x38) GEN_EDX_ARG,0,0,2);
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096898)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096894)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[3] = 0;
    puVar7[7] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *puVar7 = uVar6;
    puVar7[1] = uVar3;
    puVar7[2] = uVar2;
    puVar7[4] = uVar6;
    puVar7[5] = uVar3;
    puVar7[6] = uVar2;
    puVar7[8] = uVar6;
    puVar7[9] = uVar3;
    puVar7[10] = uVar2;
    puVar7[0xf] = uVar5;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x38) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,0,0,2);
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[5] = uVar2;
    puVar7[10] = uVar2;
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x44) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[4] = uVar2;
    puVar7[8] = uVar2;
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x48) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = GEN_FLT_TO(puVar7[1], REFG(float, 0x1087f04));
    puVar7[5] = uVar2;
    puVar7[9] = uVar2;
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    *puVar7 = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x48) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x4c) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[2] = GEN_FLT_TO(puVar7[2], REFG(float, 0x1087f04));
    puVar7[6] = uVar2;
    puVar7[10] = uVar2;
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[0xb] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x4c) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x50) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[3] = GEN_FLT_TO(puVar7[3], REFG(float, 0x1087f04));
    puVar7[7] = uVar2;
    puVar7[0xb] = uVar2;
    puVar7[0xc] = GEN_FLT_TO(puVar7[0xc], REFG(float, 0x1096898));
    puVar7[0xd] = GEN_FLT_TO(puVar7[0xd], REFG(float, 0x1096894));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x54) GEN_EDX_ARG,0,0,2);
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096898)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096894)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096890)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1096898));
    puVar7[1] = uVar3;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
    puVar7[4] = uVar6;
    puVar7[5] = uVar3;
    puVar7[6] = uVar2;
    puVar7[7] = 0;
    puVar7[8] = uVar6;
    puVar7[9] = uVar3;
    puVar7[10] = uVar2;
    puVar7[0xb] = 0;
    puVar7[0xc] = uVar6;
    puVar7[0xd] = uVar3;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x54) + 0x24))) = 0;
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x58);
  uVar2 = *(undefined4 *)((int)this + 0x60);
  uVar3 = *(undefined4 *)((int)this + 0x5c);
  *(undefined * PTR32 *)((int)this + 0xe8) = pvVar1;
  *(undefined4 *)((int)this + 0xec) = uVar3;
  *(undefined * PTR32 *)((int)this + 0xf0) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0xf4) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0xf8) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0xfc) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x100) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x104) = pvVar1;
  *(undefined4 *)((int)this + 0x108) = uVar2;
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)((int)this + 100);
  *(undefined4 *)((int)this + 0x110) = uVar2;
  *(undefined4 *)((int)this + 0x114) = uVar2;
  *(undefined4 *)((int)this + 0x118) = uVar2;
  *(undefined4 *)((int)this + 0x11c) = uVar2;
  *(undefined4 *)((int)this + 0x120) = uVar2;
  *(undefined4 *)((int)this + 0x124) = uVar2;
  *(undefined * PTR32 *)((int)this + 0x128) = pvVar1;
  *(undefined4 *)((int)this + 300) = uVar3;
  *(undefined * PTR32 *)((int)this + 0x130) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x134) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x138) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x13c) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x140) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x144) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x148) = pvVar1;
  *(undefined4 *)((int)this + 0x14c) = uVar3;
  *(undefined * PTR32 *)((int)this + 0x150) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x154) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x158) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x15c) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x160) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x164) = pvVar1;
  puVar7 = (undefined4 *)F_004d9920(pvVar1 GEN_EDX_ARG,0,0,2);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x58) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = uVar2;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x60) GEN_EDX_ARG,0,0,2);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = GEN_FLT_TO(puVar7[3], REFG(float, 0x1087f04));
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x24))) = 0;
  puVar7 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 100) GEN_EDX_ARG,0,0,2);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1087f04));
    puVar7[1] = uVar2;
    puVar7[2] = uVar2;
    puVar7[3] = uVar2;
    uVar4 = *(uint *)((int)this + 100);
    *(undefined4 *)(uVar4 + 0x24) = 0;
    return uVar4;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 100) + 0x24))) = 0;
  return 0;
}

/* ref: FUN_004d1040 */
GEN_FRAME byte GEN_THISCALL F_004d1040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4d1040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)param_8[1] / 3;
  (*(uint *)(gen_frame + 0x18)) = (uint)param_8[2] / 3;
  uVar1 = *param_8;
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  param_8 = (undefined4 *)0x1;
  if (0xffef < uVar7 / param_6) {
    param_8 = (undefined4 *)0x2;
  }
  piVar2 = (int *)F_00406520();
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,uVar1,0x80);
  *(uint *)((int)this + 0x58) = uVar3;
  if (uVar3 != 0) {
    *(undefined4 *)((int)this + 0x38) = param_1;
    *(undefined4 *)((int)this + 0x3c) = param_2;
    *(undefined4 *)((int)this + 0x40) = param_3;
    *(undefined4 *)((int)this + 0x44) = param_4;
    *(uint *)((int)this + 0x4c) = (*(uint *)(gen_frame + 0x14));
    *(uint *)((int)this + 0x50) = uVar7;
    *(uint *)((int)this + 0x54) = (*(uint *)(gen_frame + 0x18));
    *(uint *)((int)this + 0x78) = param_6;
    puVar4 = (undefined4 *)F_00406bb0(0x510,0,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = puVar4 + 4;
      *puVar4 = 0x10;
      iVar6 = 0xf;
      puVar4 = puVar5;
      do {
        *puVar4 = (*(undefined * PTR32 (*)[1])REFP(0x109687c));
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4 = puVar4 + 0x14;
        iVar6 = iVar6 - 1;
      } while (-1 < iVar6);
    }
    *(undefined4 * PTR32 *)((int)this + 0x74) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      uVar3 = 0;
      do {
        iVar6 = *(int *)((int)this + 0x74);
        *(undefined * PTR32 *)(iVar6 + 0x10 + uVar3) = this;
        *(uint *)(iVar6 + 0x1c + uVar3) = param_6;
        uVar3 = uVar3 + 0x50;
      } while (uVar3 < 0x500);
      if (param_7 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_7 + 8))(param_7 GEN_EDX_ARG);
      }
      piVar2 = *(int * PTR32 *)((int)this + 0x14);
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
      }
      *(int * PTR32 *)((int)this + 0x14) = param_7;
      if (param_7 != (int *)0x0) {
        uVar7 = F_004dcc90(uVar7,1,2);
        *(uint *)((int)this + 0x18) = uVar7;
        if (uVar7 != 0) {
          uVar7 = F_004dccf0((*(uint *)(gen_frame + 0x18)),param_8,1,2);
          *(uint *)((int)this + 0x1c) = uVar7;
          if (uVar7 != 0) {
            uVar7 = F_004dcd60(0x40,2,2);
            *(uint *)((int)this + 0x20) = uVar7;
            if (uVar7 != 0) {
              (*(int *)(gen_frame + 0x10)) = 4;
              (*(uint *)(gen_frame + 0x14)) = 4;
              uVar7 = F_004dca20(&(*(int *)(gen_frame + 0x10)),1,0x1450,4,2);
              *(uint *)((int)this + 0x24) = uVar7;
              if (uVar7 != 0) {
                uVar7 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c) GEN_EDX_ARG,"g_RemapMatrix");
                *(uint *)((int)this + 0x28) = uVar7;
                uVar7 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c) GEN_EDX_ARG,"g_RemapVector");
                *(uint *)((int)this + 0x2c) = uVar7;
                uVar7 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c) GEN_EDX_ARG,"g_ProjectionMatrix");
                *(uint *)((int)this + 0x30) = uVar7;
                uVar7 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x20) GEN_EDX_ARG,"g_Texture");
                this_00 = *(undefined * PTR32 *)((int)this + 0x24);
                *(uint *)((int)this + 0x34) = uVar7;
                if (this_00 != (undefined *)0x0) {
                  uVar7 = *(uint *)((int)this_00 + 0x1c);
                  (*(int *)(gen_frame + 0x10)) = *(int *)((int)this_00 + 0x18);
                  (*(uint *)(gen_frame + 0x14)) = uVar7;
                  uVar3 = F_004d5a50(this_00 GEN_EDX_ARG,0,0,((byte *)(gen_frame + 0x4)),2);
                  if (uVar3 != 0) {
                    uVar3 = 0;
                    if (uVar7 != 0) {
                      do {
                        puVar4 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) * uVar3 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)))));
                        iVar6 = (*(int *)(gen_frame + 0x10));
                        if ((*(int *)(gen_frame + 0x10)) != 0) {
                          for (; iVar6 != 0; iVar6 = iVar6 - 1) {
                            *puVar4 = 0xffffffff;
                            puVar4 = puVar4 + 1;
                          }
                        }
                        uVar3 = uVar3 + 1;
                      } while (uVar3 < (*(uint *)(gen_frame + 0x14)));
                    }
                    F_004d5b60(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_ARG,0,0);
                  }
                }
                return 1;
              }
            }
          }
        }
      }
    }
  }
  F_004cff10(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_004d1380 */
GEN_FRAME uint GEN_THISCALL F_004d1380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d1380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * local_8;
  
  *param_1 = 0;
  uVar4 = *(uint *)((int)this + 0x34);
  if (uVar4 == 0) {
    return 0;
  }
  iVar5 = *(int *)((int)this + 0x10);
  piVar1 = (int *)(iVar5 + 100);
  iVar8 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(uVar4 * 0x800));
  if (*(uint *)(iVar5 + 0x4c) < (uint)(*(int *)(iVar5 + 0x60) + *(int *)(iVar5 + 100))) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8 = ((undefined4 *)GEN_TOP(((*(int *)(iVar5 + 0x58) - iVar8) + uVar4 * -0x800 + *(uint *)(iVar5 + 0x4c))));
  }
  puVar6 = *(undefined4 * PTR32 *)((int)this + 0x20);
  puVar2 = local_8 + uVar4 * 0x100;
  uVar3 = uVar4;
  puVar7 = local_8;
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    puVar9 = puVar6;
    puVar10 = puVar7;
    for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar6 = (undefined4 *)puVar6[0xfe];
    puVar7 = puVar7 + 0x100;
  }
  F_00c46aa0(puVar2,local_8,uVar4 * 0x400);
  iVar8 = (uVar4 & 0x3fffff) * 0x80 - *(int *)((int)this + 0x30);
  *param_1 = iVar8;
  F_004d00d0(this GEN_EDX_ARG,puVar2,local_8,0,iVar8 - 1);
  return (uint)puVar2;
}

/* ref: FUN_004d1450 */
GEN_FRAME uint GEN_THISCALL F_004d1450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d1450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d4920(this GEN_EDX_FWD,2,0x18);
  uVar2 = 0;
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 4) = (uint)((char)param_1 != '\0');
    *(undefined4 *)(uVar1 + 8) = *param_2;
    *(undefined4 *)(uVar1 + 0xc) = param_2[1];
    *(undefined4 *)(uVar1 + 0x10) = param_2[2];
    *(undefined4 *)(uVar1 + 0x14) = param_2[3];
    uVar2 = F_004d42e0(this GEN_EDX_ARG,param_3,uVar1);
  }
  return uVar2;
}

/* ref: FUN_004d14a0 */
GEN_FRAME byte GEN_THISCALL F_004d14a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d14a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_004d58e0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,0,0,0x23,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,0,0xc,0x44,3);
  F_004d58e0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,0,0x10,0x22,8);
  piVar3 = (int *)F_004deb40(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),3);
  pvVar4 = (undefined *)F_00406b90(0x7c,0,0);
  if (pvVar4 == (undefined *)0x0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = (undefined *)F_004cfd90(pvVar4 GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)((int)this + 4) = pvVar4;
  if (pvVar4 != (undefined *)0x0) {
    bVar2 = F_004d1040(pvVar4 GEN_EDX_ARG,0,0x1e,0xe,4,0,0x18,piVar3,param_1);
    if (bVar2 != 0) {
      pvVar4 = (undefined *)F_00406b90(0x7c,0,0);
      if (pvVar4 == (undefined *)0x0) {
        pvVar4 = (undefined *)0x0;
      }
      else {
        pvVar4 = (undefined *)F_004cfd90(pvVar4 GEN_EDX_ARG);
      }
      *(undefined * PTR32 *)((int)this + 8) = pvVar4;
      if (pvVar4 != (undefined *)0x0) {
        bVar2 = F_004d1040(pvVar4 GEN_EDX_ARG,0,0x1e,0xe,0xc,0,0x18,piVar3,param_1 + 0xc);
        if (bVar2 != 0) {
          if (piVar3 != (int *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG);
          }
          *(undefined4 *)((int)this + 0xc) = 0x10;
          F_004d0290(this GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
          return 1;
        }
      }
      F_004d02e0(this GEN_EDX_ARG);
      goto LAB_004d15f9;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_004cff10(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_004cff10(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
LAB_004d15f9: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_004d1610 */
GEN_NOFRAME uint GEN_THISCALL F_004d1610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d1610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x20);
  iVar3 = 2;
  do {
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar1 = F_0050c620(*piVar2,0,0);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffff0;
  return uVar1;
}

/* ref: FUN_004d1650 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d1650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d1650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(uint *)(in_ecx + 0x28) = *(uint *)(in_ecx + 0x28) | 0x20;
  return;
}

/* ref: FUN_004d1660 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d1660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d1660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(uint *)(in_ecx + 0x28) = *(uint *)(in_ecx + 0x28) & 0xffffffdf;
  return;
}

/* ref: FUN_004d1670 */
GEN_FRAME byte GEN_THISCALL F_004d1670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d1670u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  int * piVar5;
  uint * puVar6;
  int iVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) >> 1 & 1) != 0) {
    return 1;
  }
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[1]))) {
  case 0: ;
    pcVar4 = "common/graphics/texture/-nowloading_base.tex";
    break;
  case 1: ;
    pcVar4 = "common/graphics/texture/-nowloading_base01.tex";
    break;
  case 2: ;
    pcVar4 = "common/graphics/texture/-nowloading_base02.tex";
    break;
  case 3: ;
    pcVar4 = "common/graphics/texture/-nowloading_base03.tex";
    break;
  case 4: ;
    pcVar4 = "common/graphics/texture/-nowloading_base04.tex";
    break;
  case 5: ;
    pcVar4 = "common/graphics/texture/-nowloading_base05.tex";
    break;
  default: ;
    pcVar4 = "common/graphics/texture/-nowloading_base.tex";
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,4);
  F_004142d0(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG,*(undefined4 *)(uVar1 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[1]))) {
  case 0: ;
    pcVar2 = "common/graphics/texture/-mogu_anime_ja.tex";
    break;
  case 1: ;
    pcVar2 = "common/graphics/texture/-mogu_anime_en.tex";
    break;
  case 2: ;
    pcVar2 = "common/graphics/texture/-mogu_anime_de.tex";
    break;
  case 3: ;
    pcVar2 = "common/graphics/texture/-mogu_anime_fr.tex";
    break;
  case 4: ;
    pcVar2 = "common/graphics/texture/-mogu_anime_chs.tex";
    break;
  default: ;
    pcVar2 = "common/graphics/texture/-mogu_anime_en.tex";
  }
  ((char * PTR32 *)(gen_frame + 0x28))[0] = pcVar4;
  ((char * PTR32 *)(gen_frame + 0x28))[1] = pcVar2;
  F_004ff310(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,0,0);
  uVar1 = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0x746578;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x10)) = -(uint)((char)(*(undefined4 *)&gen_args[2]) != '\0') & 6;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  puVar6 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  do {
    uVar3 = F_00513d20(((undefined1 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x34)),((char * PTR32 *)(gen_frame + 0x28))[(int)(uVar1)],&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    *puVar6 = uVar3;
    if (uVar3 == 0) {
      piVar5 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x20);
      iVar7 = 2;
      do {
        if (*piVar5 != 0) {
          F_0050c620(*piVar5,0,0);
          *piVar5 = 0;
        }
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 - 1;
      } while (iVar7 != 0);
      *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x28) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x28) & 0xfffffff0;
      return 0;
    }
    uVar1 = uVar1 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar1 < 2);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x28) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x28) | 3;
  return 1;
}

/* ref: FUN_004d1820 */
GEN_FRAME byte GEN_STDCALL F_004d1820(unsigned int gen_a0)
{
  GEN_ENTER(0x4d1820u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x88);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 == 2) {
      piVar2 = (int *)(param_1 + 0x8c);
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      return iVar1 < 8;
    }
  }
  return 0;
}

/* ref: FUN_004d1860 */
GEN_FRAME byte GEN_STDCALL F_004d1860(unsigned int gen_a0)
{
  GEN_ENTER(0x4d1860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  piVar2 = (int *)(param_1 + 0x88);
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
  if (iVar1 != 2) {
    return 0;
  }
  piVar2 = (int *)(param_1 + 0x8c);
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
  return 7 < iVar1;
}

/* ref: FUN_004d18a0 */
GEN_FRAME unsigned int GEN_THISCALL F_004d18a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d18a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  
  puVar3 = REFG(undefined4 * PTR32, 0x1370c18);
  if (REFG(undefined4 * PTR32, 0x1370c18) != (undefined4 *)0x0) {
    piVar4 = REFG(undefined4 * PTR32, 0x1370c18) + 2;
    if (((undefined *)GEN_TOP(REFG(undefined4 * PTR32, 0x1370c18)[2])) != (undefined *)0x0) {
      F_004cff10(((undefined *)GEN_TOP(REFG(undefined4 * PTR32, 0x1370c18)[2])) GEN_EDX_FWD);
      puVar1 = (undefined4 *)*piVar4;
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
        *piVar4 = 0;
      }
    }
    if ((undefined *)puVar3[1] != (undefined *)0x0) {
      F_004cff10((undefined *)puVar3[1] GEN_EDX_ARG);
      puVar1 = (undefined4 *)puVar3[1];
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
        puVar3[1] = 0;
      }
    }
    if (REFG(undefined4 * PTR32, 0x1370c18) != (undefined4 *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1370c18))))(REFG(undefined4 * PTR32, 0x1370c18) GEN_EDX_ARG,1);
      REFG(undefined4 * PTR32, 0x1370c18) = (undefined4 *)0x0;
    }
  }
  piVar4 = (int *)((int)this + 0x58);
  iVar5 = 4;
  do {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  iVar5 = 0x15;
  do {
    this = (undefined *)((int)this + 4);
    piVar4 = *(int * PTR32 *)this;
    if (piVar4 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
      *(int *)this = 0;
    }
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  return 0;
}

/* ref: FUN_004d1970 */
GEN_FRAME uint F_004d1970(float gen_a0)
{
  GEN_ENTER(0x4d1970u, gen_trace_f(gen_a0), 0u, 0u, 0u);
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

/* ref: FUN_004d19b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d19b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d19b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  uint local_14;
  
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar4 = F_004d68c0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_FWD,0,0,2);
  *(uint *)((int)this + 0x5c) = uVar4;
  *(undefined4 *)((int)this + 0x68) = 0;
  if (uVar4 == 0) {
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x50);
  }
  fVar7 = (float10)*(double *)&REFG(undefined, 0x10968a8);
  local_14 = 0xf0;
  do {
    iVar5 = *(int *)((int)this + 0x74) + (local_14 - 0xf0);
    *(undefined4 *)(iVar5 + 0x30) = 1;
    *(int *)(iVar5 + 0x24) = iVar5 + 0x20;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x28) = 0x800;
    *(undefined4 *)(iVar5 + 0x2c) = 0x1000;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0x3c))) * 0x358 + REFG(int, 0x137127c);
    if ((*(byte *)(iVar6 + 8) & 1) != 0) {
      iVar6 = *(int *)(iVar6 + 0x2a4);
      fVar1 = *(float *)(iVar6 + 0x28);
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar3 = *(float *)(iVar6 + 0x48);
      *(float *)(iVar5 + 0x40) = ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x18) * fVar7)));
      *(float *)(iVar5 + 0x44) = (float)((float10)fVar1 * fVar7);
      *(float *)(iVar5 + 0x48) = (float)((float10)fVar2 * fVar7);
      *(float *)(iVar5 + 0x4c) = (float)((float10)fVar3 * fVar7);
    }
    iVar5 = *(int *)((int)this + 0x74) - 0xa0 + local_14;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(int *)(iVar5 + 0x24) = iVar5 + 0x20;
    *(undefined4 *)(iVar5 + 0x28) = 0x800;
    *(undefined4 *)(iVar5 + 0x2c) = 0x1000;
    *(undefined4 *)(iVar5 + 0x30) = 1;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0x3c))) * 0x358 + REFG(int, 0x137127c);
    if ((*(byte *)(iVar6 + 8) & 1) != 0) {
      iVar6 = *(int *)(iVar6 + 0x2a4);
      fVar1 = *(float *)(iVar6 + 0x28);
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar3 = *(float *)(iVar6 + 0x48);
      *(float *)(iVar5 + 0x40) = ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x18) * fVar7)));
      *(float *)(iVar5 + 0x44) = (float)((float10)fVar1 * fVar7);
      *(float *)(iVar5 + 0x48) = (float)((float10)fVar2 * fVar7);
      *(float *)(iVar5 + 0x4c) = (float)((float10)fVar3 * fVar7);
    }
    iVar5 = *(int *)((int)this + 0x74) - 0x50 + local_14;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(int *)(iVar5 + 0x24) = iVar5 + 0x20;
    *(undefined4 *)(iVar5 + 0x28) = 0x800;
    *(undefined4 *)(iVar5 + 0x2c) = 0x1000;
    *(undefined4 *)(iVar5 + 0x30) = 1;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0x3c))) * 0x358 + REFG(int, 0x137127c);
    if ((*(byte *)(iVar6 + 8) & 1) != 0) {
      iVar6 = *(int *)(iVar6 + 0x2a4);
      fVar1 = *(float *)(iVar6 + 0x28);
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar3 = *(float *)(iVar6 + 0x48);
      *(float *)(iVar5 + 0x40) = ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x18) * fVar7)));
      *(float *)(iVar5 + 0x44) = (float)((float10)fVar1 * fVar7);
      *(float *)(iVar5 + 0x48) = (float)((float10)fVar2 * fVar7);
      *(float *)(iVar5 + 0x4c) = (float)((float10)fVar3 * fVar7);
    }
    iVar5 = *(int *)((int)this + 0x74) + local_14;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(int *)(iVar5 + 0x24) = iVar5 + 0x20;
    *(undefined4 *)(iVar5 + 0x28) = 0x800;
    *(undefined4 *)(iVar5 + 0x2c) = 0x1000;
    *(undefined4 *)(iVar5 + 0x30) = 1;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0x3c))) * 0x358 + REFG(int, 0x137127c);
    if ((*(byte *)(iVar6 + 8) & 1) != 0) {
      iVar6 = *(int *)(iVar6 + 0x2a4);
      fVar1 = *(float *)(iVar6 + 0x28);
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar3 = *(float *)(iVar6 + 0x48);
      *(float *)(iVar5 + 0x40) = ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x18) * fVar7)));
      *(float *)(iVar5 + 0x44) = (float)((float10)fVar1 * fVar7);
      *(float *)(iVar5 + 0x48) = (float)((float10)fVar2 * fVar7);
      *(float *)(iVar5 + 0x4c) = (float)((float10)fVar3 * fVar7);
    }
    iVar5 = *(int *)((int)this + 0x74) + 0x50 + local_14;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(int *)(iVar5 + 0x24) = iVar5 + 0x20;
    *(undefined4 *)(iVar5 + 0x28) = 0x800;
    *(undefined4 *)(iVar5 + 0x2c) = 0x1000;
    *(undefined4 *)(iVar5 + 0x30) = 1;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0x3c))) * 0x358 + REFG(int, 0x137127c);
    if ((*(byte *)(iVar6 + 8) & 1) != 0) {
      iVar6 = *(int *)(iVar6 + 0x2a4);
      fVar1 = *(float *)(iVar6 + 0x28);
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar3 = *(float *)(iVar6 + 0x48);
      *(float *)(iVar5 + 0x40) = ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x18) * fVar7)));
      *(float *)(iVar5 + 0x44) = (float)((float10)fVar1 * fVar7);
      *(float *)(iVar5 + 0x48) = (float)((float10)fVar2 * fVar7);
      *(float *)(iVar5 + 0x4c) = (float)((float10)fVar3 * fVar7);
    }
    iVar5 = *(int *)((int)this + 0x74) + 0xa0 + local_14;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(int *)(iVar5 + 0x24) = iVar5 + 0x20;
    *(undefined4 *)(iVar5 + 0x28) = 0x800;
    *(undefined4 *)(iVar5 + 0x2c) = 0x1000;
    *(undefined4 *)(iVar5 + 0x30) = 1;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0x3c))) * 0x358 + REFG(int, 0x137127c);
    if ((*(byte *)(iVar6 + 8) & 1) != 0) {
      iVar6 = *(int *)(iVar6 + 0x2a4);
      fVar1 = *(float *)(iVar6 + 0x28);
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar3 = *(float *)(iVar6 + 0x48);
      *(float *)(iVar5 + 0x40) = ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x18) * fVar7)));
      *(float *)(iVar5 + 0x44) = (float)((float10)fVar1 * fVar7);
      *(float *)(iVar5 + 0x48) = (float)((float10)fVar2 * fVar7);
      *(float *)(iVar5 + 0x4c) = (float)((float10)fVar3 * fVar7);
    }
    iVar5 = *(int *)((int)this + 0x74) + 0xf0 + local_14;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(int *)(iVar5 + 0x24) = iVar5 + 0x20;
    *(undefined4 *)(iVar5 + 0x28) = 0x800;
    *(undefined4 *)(iVar5 + 0x2c) = 0x1000;
    *(undefined4 *)(iVar5 + 0x30) = 1;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0x3c))) * 0x358 + REFG(int, 0x137127c);
    if ((*(byte *)(iVar6 + 8) & 1) != 0) {
      iVar6 = *(int *)(iVar6 + 0x2a4);
      fVar1 = *(float *)(iVar6 + 0x28);
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar3 = *(float *)(iVar6 + 0x48);
      *(float *)(iVar5 + 0x40) = ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x18) * fVar7)));
      *(float *)(iVar5 + 0x44) = (float)((float10)fVar1 * fVar7);
      *(float *)(iVar5 + 0x48) = (float)((float10)fVar2 * fVar7);
      *(float *)(iVar5 + 0x4c) = (float)((float10)fVar3 * fVar7);
    }
    iVar5 = *(int *)((int)this + 0x74) + 0x140 + local_14;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(int *)(iVar5 + 0x24) = iVar5 + 0x20;
    *(undefined4 *)(iVar5 + 0x28) = 0x800;
    *(undefined4 *)(iVar5 + 0x2c) = 0x1000;
    *(undefined4 *)(iVar5 + 0x30) = 1;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0x3c))) * 0x358 + REFG(int, 0x137127c);
    if ((*(byte *)(iVar6 + 8) & 1) != 0) {
      iVar6 = *(int *)(iVar6 + 0x2a4);
      fVar1 = *(float *)(iVar6 + 0x28);
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar3 = *(float *)(iVar6 + 0x48);
      *(float *)(iVar5 + 0x40) = ((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x18) * fVar7)));
      *(float *)(iVar5 + 0x44) = (float)((float10)fVar1 * fVar7);
      *(float *)(iVar5 + 0x48) = (float)((float10)fVar2 * fVar7);
      *(float *)(iVar5 + 0x4c) = (float)((float10)fVar3 * fVar7);
    }
    local_14 = local_14 + 0x280;
  } while (local_14 < 0x5f0);
  return 0;
}

/* ref: FUN_004d1f00 */
GEN_FRAME uint GEN_THISCALL F_004d1f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d1f00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  uint * puVar5;
  
  puVar4 = (*(uint * PTR32 *)&gen_args[1]);
  iVar3 = REFG(int, 0x1371274);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(uint *)(iVar1 + 0x38) = *(*(uint * PTR32 *)&gen_args[1]) & 0x7ffffff;
  *(uint *)(iVar1 + 0x50) = ((*(uint * PTR32 *)&gen_args[1])[3] >> 6 & 1) * 2 | (*(uint * PTR32 *)&gen_args[1])[3] >> 5 & 1 | 0xc;
  puVar5 = (uint *)F_004d4a30(&(*(uint * PTR32 *)&gen_args[1]) GEN_EDX_FWD,3,(uint)((byte)((*(uint * PTR32 *)&gen_args[1])[3] >> 7) & 1),(*(uint * PTR32 *)&gen_args[1])[3] >> 8 & 1,1
                                ,(float)(float10)0,(float)(float10)0);
  *(uint *)(iVar1 + 0x3c) = *puVar5 & 0x7fffffff;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) * 4))) =
       *((undefined4 *)GEN_TOP((iVar3 + 0x68 + ((puVar4[3] & 7) + (puVar4[3] >> 3 & 3) * 8) * 4)));
  *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) * 4))) =
       *((undefined4 *)GEN_TOP((iVar3 + 0xe8 + ((puVar4[3] & 7) + (puVar4[3] >> 3 & 3) * 8) * 4)));
  uVar2 = puVar4[1];
  if (uVar2 != 0) {
    *((uint *)GEN_TOP((iVar1 + 0x2a8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) * 8))) = uVar2;
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) * 8))) = puVar4[2] & 0xfffffff;
    return uVar2;
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) * 8))) =
       *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  *(uint *)(iVar1 + 0x2ac + uVar2 * 8) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  return uVar2;
}

/* ref: FUN_004d2030 */
GEN_FRAME uint GEN_THISCALL F_004d2030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d2030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  ((int *)(gen_frame + 0x58))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  iVar8 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = this;
  (*(uint * PTR32 *)(gen_frame + 0x4c)) = param_1;
  (*(uint *)(gen_frame + 0x50)) = 0;
  uVar5 = 0;
  do {
    uVar3 = F_004d1380(((undefined *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 0x74) + uVar5))) GEN_EDX_FWD,
                         (int *)((int)((int *)(gen_frame + 0x58)) + iVar8));
    (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x50)) + *(int *)((int)((int *)(gen_frame + 0x58)) + iVar8);
    *(uint *)((int)((uint *)(gen_frame + 0x0)) + iVar8) = uVar3;
    uVar5 = uVar5 + 0x50;
    iVar8 = iVar8 + 4;
  } while (uVar5 < 0x500);
  uVar5 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 0x58) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 0x4c) + (*(uint *)(gen_frame + 0x50)) * -8;
  (*(uint *)(gen_frame + 0x44)) = uVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)uVar5;
  if ((*(uint *)(gen_frame + 0x50)) != 0) {
    do {
      iVar8 = 0;
      uVar3 = 0xffffffff;
      uVar6 = 0;
      do {
        iVar4 = 0xf - uVar6;
        if ((((int *)(gen_frame + 0x58))[(int)(iVar4)] != 0) && (*(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)] <= uVar3)) {
          uVar3 = *(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)];
          iVar8 = iVar4;
        }
        iVar4 = 0xe - uVar6;
        if ((((int *)(gen_frame + 0x58))[(int)(iVar4)] != 0) && (*(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)] <= uVar3)) {
          uVar3 = *(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)];
          iVar8 = iVar4;
        }
        iVar4 = 0xd - uVar6;
        if ((((int *)(gen_frame + 0x58))[(int)(iVar4)] != 0) && (*(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)] <= uVar3)) {
          uVar3 = *(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)];
          iVar8 = iVar4;
        }
        iVar4 = 0xc - uVar6;
        if ((((int *)(gen_frame + 0x58))[(int)(iVar4)] != 0) && (*(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)] <= uVar3)) {
          uVar3 = *(uint *)((uint *)(gen_frame + 0x0))[(int)(iVar4)];
          iVar8 = iVar4;
        }
        uVar6 = uVar6 + 4;
      } while (uVar6 < 0x10);
      puVar1 = ((uint *)(gen_frame + 0x0)) + iVar8;
      (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)(gen_frame + 0x58)) + iVar8;
      iVar4 = ((int *)(gen_frame + 0x58))[(int)(iVar8)];
      iVar7 = 0;
      (*(uint * PTR32 *)(gen_frame + 0x48)) = puVar1;
      do {
        iVar7 = iVar7 + 1;
        if (iVar7 == iVar4) break;
      } while (*(int *)((uint *)(gen_frame + 0x0))[(int)(iVar8)] == *(int *)(*puVar1 + iVar7 * 8));
      if (iVar7 != 0) {
        iVar8 = iVar7 * 8;
        F_00c46aa0((*(undefined * PTR32 *)(gen_frame + 0x54)),*puVar1,iVar8);
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x40));
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + iVar8);
        *(*(uint * PTR32 *)(gen_frame + 0x48)) = iVar8 + *(*(uint * PTR32 *)(gen_frame + 0x48));
        *piVar2 = iVar4 - iVar7;
        uVar5 = (*(uint *)(gen_frame + 0x44));
      }
    } while ((uint)((int)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) - uVar5) >> 3) < (*(uint *)(gen_frame + 0x50)));
  }
  *(*(uint * PTR32 *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x50));
  F_00c47745(((int *)(gen_frame + 0x58))[0x10] ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_004d21c0 */
GEN_FRAME uint GEN_THISCALL F_004d21c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d21c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  uVar3 = *(uint *)((int)this + 0x34);
  *param_2 = 0;
  if (uVar3 == 0) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_FWD);
    return 0;
  }
  if (0x30000 < (int)(uVar3 * 0x800)) {
    uVar3 = F_004d1380(this GEN_EDX_ARG,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar3;
  }
  iVar4 = *(int *)((int)this + 0x10);
  piVar1 = (int *)(iVar4 + 100);
  iVar5 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(uVar3 * 0x800));
  if (*(uint *)(iVar4 + 0x4c) < (uint)(*(int *)(iVar4 + 0x60) + *(int *)(iVar4 + 100))) {
    iVar5 = 0;
  }
  else {
    iVar5 = (*(int *)(iVar4 + 0x58) - iVar5) + uVar3 * -0x800 + *(uint *)(iVar4 + 0x4c);
  }
  iVar4 = (uVar3 & 0x3fffff) * 0x80 - *(int *)((int)this + 0x30);
  uVar2 = iVar5 + uVar3 * 0x400;
  *param_2 = iVar4;
  (*(int *)(gen_frame + 0x24)) = iVar4;
  (*(int *)(gen_frame + 0x1c)) = uVar3 * 0x400;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x20);
  (*(uint *)(gen_frame + 0x20)) = uVar3;
  (*(int *)(gen_frame + 0x8)) = iVar5;
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x14)) = 0x400;
  (*(undefined4 *)(gen_frame + 0x18)) = 8;
  F_00a1a9d0(param_1,&(*(int *)(gen_frame + 0x8)),param_3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004d22d0 */
GEN_FRAME uint GEN_THISCALL F_004d22d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d22d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d4920(this GEN_EDX_FWD,0x10,0x1c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = F_004d4260(this GEN_EDX_ARG,param_1);
  if (uVar2 == 0) {
    return 0;
  }
  F_004d41c0((undefined *)(uVar1 + 4) GEN_EDX_ARG,param_3);
  *(undefined4 *)(uVar1 + 0x14) = param_1;
  *(uint *)(uVar1 + 0x18) = uVar2;
  F_004d42e0(this GEN_EDX_ARG,param_2,uVar1);
  return uVar2;
}

/* ref: FUN_004d2330 */
GEN_FRAME uint GEN_THISCALL F_004d2330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d2330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d4920(this GEN_EDX_FWD,0x11,0x1c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = F_004d4260(this GEN_EDX_ARG,param_1);
  if (uVar2 == 0) {
    return 0;
  }
  F_004d41c0((undefined *)(uVar1 + 4) GEN_EDX_ARG,param_3);
  *(undefined4 *)(uVar1 + 0x14) = param_1;
  *(uint *)(uVar1 + 0x18) = uVar2;
  F_004d42e0(this GEN_EDX_ARG,param_2,uVar1);
  return uVar2;
}

/* ref: FUN_004d2390 */
GEN_FRAME uint GEN_THISCALL F_004d2390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d2390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d4920(this GEN_EDX_FWD,0x20,0x1c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = F_004d4260(this GEN_EDX_ARG,param_1);
  if (uVar2 == 0) {
    return 0;
  }
  F_004d41c0((undefined *)(uVar1 + 4) GEN_EDX_ARG,param_3);
  *(undefined4 *)(uVar1 + 0x14) = param_1;
  *(uint *)(uVar1 + 0x18) = uVar2;
  F_004d42e0(this GEN_EDX_ARG,param_2,uVar1);
  return uVar2;
}

/* ref: FUN_004d23f0 */
GEN_FRAME uint GEN_THISCALL F_004d23f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d23f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d4920(this GEN_EDX_FWD,0x21,0x1c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = F_004d4260(this GEN_EDX_ARG,param_1);
  if (uVar2 == 0) {
    return 0;
  }
  F_004d41c0((undefined *)(uVar1 + 4) GEN_EDX_ARG,param_3);
  *(undefined4 *)(uVar1 + 0x14) = param_1;
  *(uint *)(uVar1 + 0x18) = uVar2;
  F_004d42e0(this GEN_EDX_ARG,param_2,uVar1);
  return uVar2;
}

/* ref: FUN_004d2450 */
GEN_FRAME uint GEN_THISCALL F_004d2450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d2450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d4920(this GEN_EDX_FWD,0x22,0x1c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = F_004d4260(this GEN_EDX_ARG,param_1);
  if (uVar2 == 0) {
    return 0;
  }
  F_004d41c0((undefined *)(uVar1 + 4) GEN_EDX_ARG,param_3);
  *(undefined4 *)(uVar1 + 0x14) = param_1;
  *(uint *)(uVar1 + 0x18) = uVar2;
  F_004d42e0(this GEN_EDX_ARG,param_2,uVar1);
  return uVar2;
}

/* ref: FUN_004d24b0 */
GEN_FRAME uint GEN_THISCALL F_004d24b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d24b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d4920(this GEN_EDX_FWD,0x23,0x1c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = F_004d4260(this GEN_EDX_ARG,param_1);
  if (uVar2 == 0) {
    return 0;
  }
  F_004d41c0((undefined *)(uVar1 + 4) GEN_EDX_ARG,param_3);
  *(undefined4 *)(uVar1 + 0x14) = param_1;
  *(uint *)(uVar1 + 0x18) = uVar2;
  F_004d42e0(this GEN_EDX_ARG,param_2,uVar1);
  return uVar2;
}

/* ref: FUN_004d2510 */
GEN_NOFRAME uint GEN_THISCALL F_004d2510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d2510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)((int)this + 0x20);
  iVar2 = 2;
  do {
    uVar1 = 0;
    if (*piVar3 != 0) {
      uVar1 = F_0050c620(*piVar3,0,0);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffff0;
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 8) != 0) {
      F_0050c620(*(int *)(iVar2 + 8),0,0);
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    uVar1 = 0;
    if (*(int *)(iVar2 + 4) != 0) {
      uVar1 = F_0050c620(*(int *)(iVar2 + 4),0,0);
      *(undefined4 *)(iVar2 + 4) = 0;
    }
  }
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 8) != 0) {
      F_0050c620(*(int *)(iVar2 + 8),0,0);
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    uVar1 = 0;
    if (*(int *)(iVar2 + 4) != 0) {
      uVar1 = F_0050c620(*(int *)(iVar2 + 4),0,0);
      *(undefined4 *)(iVar2 + 4) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_004d25c0 */
GEN_FRAME byte GEN_THISCALL F_004d25c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d25c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_004d1670(this GEN_EDX_FWD,param_1,0);
  return bVar1;
}

/* ref: FUN_004d25e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d25e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d25e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004d19b0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  F_004d19b0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  return;
}

/* ref: FUN_004d2600 */
GEN_FRAME byte GEN_THISCALL F_004d2600(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x4d2600u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float * pfVar3;
  
  F_004d1670(param_1 GEN_EDX_FWD,5,0);
  pfVar3 = ((float *)GEN_TOP((*(uint *)((int)param_1 + 0x28) >> 4)));
  if (((uint)pfVar3 & 1) == 0) {
    fVar1 = *(float *)((int)param_1 + 0x1c);
    fVar2 = *(float *)((int)param_1 + 0x18);
    ((float *)(gen_frame + 0x0))[1] = gen_bits2f(REFG(float, 0x1087f04));
    ((float *)(gen_frame + 0x0))[0] = 0.0;
    pfVar3 = ((float *)(gen_frame + 0x0)) + 2;
    fVar1 = (float)((float10)fVar1 / (float10)fVar2);
    ((float *)(gen_frame + 0x0))[2] = fVar1;
    if (!((float10)fVar1 < (float10)1)) {
      pfVar3 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = ((float *)(gen_frame + 0x0));
    }
    *(float *)((int)param_1 + 0x1c) = ((float)GEN_TOF((((float10)1 - (float10)*pfVar3) * (float10)param_2)));
  }
  else {
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
  }
  *(float *)((int)param_1 + 0x18) = param_2;
  *(uint *)((int)param_1 + 0x28) = *(uint *)((int)param_1 + 0x28) & 0xfffffffe;
  *(uint *)((int)param_1 + 0x28) = *(uint *)((int)param_1 + 0x28) | 0x10;
  return (byte)pfVar3;
}

/* ref: FUN_004d2690 */
GEN_FRAME byte GEN_THISCALL F_004d2690(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x4d2690u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float * pfVar3;
  
  F_004d1670(param_1 GEN_EDX_FWD,5,0);
  pfVar3 = ((float *)GEN_TOP((*(uint *)((int)param_1 + 0x28) >> 4)));
  if (((uint)pfVar3 & 1) == 0) {
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
  }
  else {
    fVar1 = *(float *)((int)param_1 + 0x1c);
    fVar2 = *(float *)((int)param_1 + 0x18);
    ((float *)(gen_frame + 0x0))[1] = gen_bits2f(REFG(float, 0x1087f04));
    ((float *)(gen_frame + 0x0))[0] = 0.0;
    pfVar3 = ((float *)(gen_frame + 0x0)) + 2;
    fVar1 = (float)((float10)fVar1 / (float10)fVar2);
    ((float *)(gen_frame + 0x0))[2] = fVar1;
    if (!((float10)fVar1 < (float10)1)) {
      pfVar3 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = ((float *)(gen_frame + 0x0));
    }
    *(float *)((int)param_1 + 0x1c) = ((float)GEN_TOF((((float10)1 - (float10)*pfVar3) * (float10)param_2)));
  }
  *(float *)((int)param_1 + 0x18) = param_2;
  *(uint *)((int)param_1 + 0x28) = *(uint *)((int)param_1 + 0x28) & 0xffffffee;
  return (byte)pfVar3;
}

/* ref: FUN_004d2720 */
GEN_NOFRAME byte GEN_THISCALL F_004d2720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d2720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)((int)this + 0x20);
  do {
    iVar2 = *piVar5;
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = (int *)(iVar2 + 0x88);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    if (iVar1 != 2) {
      return 0;
    }
    piVar3 = (int *)(iVar2 + 0x8c);
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    if (7 < iVar2) {
      return 0;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (uVar4 < 2);
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) | 4;
  return 1;
}

/* ref: FUN_004d2770 */
GEN_NOFRAME byte GEN_THISCALL F_004d2770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d2770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)((int)this + 0x20);
  while (iVar2 = *piVar5, iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x88);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    if (iVar1 == 2) {
      piVar3 = (int *)(iVar2 + 0x8c);
      iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
      if (7 < iVar2) break;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
    if (1 < uVar4) {
      return 0;
    }
  }
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) | 8;
  return 1;
}

/* ref: FUN_004d27c0 */
GEN_FRAME byte GEN_THISCALL F_004d27c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d27c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  
  uVar5 = 0;
  puVar4 = this;
  do {
    puVar4 = puVar4 + 1;
    uVar3 = F_004dcd60(0x40,4,2);
    *puVar4 = uVar3;
    if (uVar3 == 0) goto LAB_004d2881;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x15);
  uVar5 = 0;
  puVar4 = (uint *)((int)this + 0x58);
  do {
    uVar3 = F_004dcd60(0x10,4,2);
    *puVar4 = uVar3;
    if (uVar3 == 0) goto LAB_004d2881;
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar5 < 4);
  F_004d03c0(this GEN_EDX_ARG);
  REFG(undefined4 * PTR32, 0x1370c18) = (undefined4 *)F_00406b90(0x3c,0,0);
  if (REFG(undefined4 * PTR32, 0x1370c18) == (undefined4 *)0x0) {
    REFG(undefined4 * PTR32, 0x1370c18) = (undefined4 *)0x0;
    F_004d18a0(this GEN_EDX_ARG);
    return 0;
  }
  REFG(undefined4 * PTR32, 0x1370c18)[5] = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *REFG(undefined4 * PTR32, 0x1370c18) = (*(undefined * PTR32 (*)[1])REFP(0x1096884));
  REFG(undefined4 * PTR32, 0x1370c18)[1] = 0;
  REFG(undefined4 * PTR32, 0x1370c18)[2] = 0;
  REFG(undefined4 * PTR32, 0x1370c18)[3] = 0;
  REFG(undefined4 * PTR32, 0x1370c18)[4] = 0;
  REFG(undefined4 * PTR32, 0x1370c18)[6] = uVar1;
  REFG(undefined4 * PTR32, 0x1370c18)[7] = uVar1;
  REFG(undefined4 * PTR32, 0x1370c18)[10] = 0;
  REFG(undefined4 * PTR32, 0x1370c18)[8] = 0;
  REFG(undefined4 * PTR32, 0x1370c18)[9] = 0;
  bVar2 = F_004d14a0(REFG(undefined4 * PTR32, 0x1370c18) GEN_EDX_ARG,param_1);
  if (bVar2 != 0) {
    return 1;
  }
LAB_004d2881: ;
  F_004d18a0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_004d28c0 */
GEN_FRAME uint GEN_THISCALL F_004d28c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d28c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_004d6970(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_FWD);
  uVar1 = F_004d2030(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  *(uint *)((int)this + 0x6c) = uVar1;
  *(undefined * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  return uVar1;
}

/* ref: FUN_004d28f0 */
GEN_FRAME uint GEN_THISCALL F_004d28f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4d28f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined * this_00;
  byte bVar1;
  undefined4 * puVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar3 = param_1;
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if (param_1 == 0x10) {
    param_1 = 2;
  }
  else {
    if (param_1 != 0x20) {
      return param_1;
    }
    param_1 = 5;
  }
  if (param_2 != 0) {
    F_004d1f00(this GEN_EDX_FWD,param_6);
    puVar2 = (undefined4 *)F_004d4760(this_00 GEN_EDX_ARG,0x14);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 2;
      puVar2[1] = *param_5;
      puVar2[2] = param_5[1];
      puVar2[3] = param_5[2];
      puVar2[4] = param_5[3];
      F_004d4810(this_00 GEN_EDX_ARG,puVar2);
    }
    puVar2 = (undefined4 *)F_004d4760(this_00 GEN_EDX_ARG,0x54);
    uVar3 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 5;
      puVar2[4] = param_3;
      puVar2[1] = param_1;
      puVar2[5] = param_4;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[6] = param_2;
      bVar1 = F_004dc830(this_00 GEN_EDX_ARG,puVar2 + 7);
      uVar3 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar3 = F_004d4810(this_00 GEN_EDX_ARG,puVar2);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_004d29d0 */
GEN_FRAME uint GEN_THISCALL F_004d29d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d29d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  
  ((uint *)(gen_frame + 0x68))[0x10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = this;
  uVar7 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x44)) = param_1;
  (*(uint *)(gen_frame + 0x60)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac);
  pvVar4 = (undefined *)F_00a1abd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac) GEN_EDX_FWD);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = pvVar4;
  iVar8 = 0;
  do {
    puVar1 = ((uint *)(gen_frame + 0x68)) + iVar8;
    if ((*(undefined * PTR32 *)(gen_frame + 0x5c)) == (undefined *)0x0) {
      uVar5 = F_004d1380(((undefined *)GEN_TOP((*(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x74) + uVar7))) GEN_EDX_ARG,puVar1);
    }
    else {
      uVar5 = F_004d21c0(((undefined *)GEN_TOP((*(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x74) + uVar7))) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x5c)),puVar1,
                           iVar8 + 1U & 7);
    }
    (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x60)) + *puVar1;
    ((uint *)(gen_frame + 0x4))[(int)(iVar8)] = uVar5;
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x5c));
    uVar7 = uVar7 + 0x50;
    iVar8 = iVar8 + 1;
  } while (uVar7 < 0x500);
  if ((*(undefined * PTR32 *)(gen_frame + 0x5c)) != (undefined *)0x0) {
    F_00b1af80((*(undefined * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  }
  puVar9 = ((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x58) + *(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x4c) + (*(uint *)(gen_frame + 0x60)) * -8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = puVar9;
  if ((*(uint *)(gen_frame + 0x60)) != 0) {
    do {
      iVar8 = 0;
      uVar7 = 0xffffffff;
      uVar5 = 0;
      do {
        iVar6 = 0xf - uVar5;
        if ((((uint *)(gen_frame + 0x68))[(int)(iVar6)] != 0) && (*(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)] <= uVar7)) {
          uVar7 = *(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)];
          iVar8 = iVar6;
        }
        iVar6 = 0xe - uVar5;
        if ((((uint *)(gen_frame + 0x68))[(int)(iVar6)] != 0) && (*(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)] <= uVar7)) {
          uVar7 = *(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)];
          iVar8 = iVar6;
        }
        iVar6 = 0xd - uVar5;
        if ((((uint *)(gen_frame + 0x68))[(int)(iVar6)] != 0) && (*(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)] <= uVar7)) {
          uVar7 = *(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)];
          iVar8 = iVar6;
        }
        iVar6 = 0xc - uVar5;
        if ((((uint *)(gen_frame + 0x68))[(int)(iVar6)] != 0) && (*(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)] <= uVar7)) {
          uVar7 = *(uint *)((uint *)(gen_frame + 0x4))[(int)(iVar6)];
          iVar8 = iVar6;
        }
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x10);
      piVar3 = (int *)((uint *)(gen_frame + 0x4))[(int)(iVar8)];
      uVar7 = ((uint *)(gen_frame + 0x68))[(int)(iVar8)];
      uVar5 = 0;
      (*(uint * PTR32 *)(gen_frame + 0x50)) = ((uint *)(gen_frame + 0x4)) + iVar8;
      (*(uint * PTR32 *)(gen_frame + 0x48)) = ((uint *)(gen_frame + 0x68)) + iVar8;
      do {
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar7) break;
      } while (*piVar3 == piVar3[uVar5 * 2]);
      if (uVar5 != 0) {
        if (((*(undefined * PTR32 *)(gen_frame + 0x5c)) == (undefined *)0x0) || (uVar5 < 0x401)) {
          if (0 < (int)uVar5) {
            (*(uint *)(gen_frame + 0x4c)) = uVar5;
            puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x64));
            do {
              *puVar9 = *((undefined4 *)GEN_TOP((((int)piVar3 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))) + (int)puVar9)));
              puVar9[1] = *((undefined4 *)GEN_TOP((((int)piVar3 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))) + 4 + (int)puVar9)));
              puVar9 = puVar9 + 2;
              uVar2 = (*(uint *)(gen_frame + 0x4c)) - 1;
              (*(uint *)(gen_frame + 0x4c)) = uVar2;
            } while (uVar2 != 0);
          }
        }
        else {
          F_00a1a5d0((*(undefined * PTR32 *)(gen_frame + 0x5c)),(*(undefined4 * PTR32 *)(gen_frame + 0x64)),piVar3,uVar5 * 8);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (*(undefined4 * PTR32 *)(gen_frame + 0x64)) + uVar5 * 2;
        *(*(uint * PTR32 *)(gen_frame + 0x48)) = uVar7 - uVar5;
        *(*(uint * PTR32 *)(gen_frame + 0x50)) = (uint)(piVar3 + uVar5 * 2);
      }
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x5c));
    } while ((uint)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x58))) >> 3) < (*(uint *)(gen_frame + 0x60)));
  }
  puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
  *(*(uint * PTR32 *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x60));
  if (pvVar4 != (undefined *)0x0) {
    F_00b1af80(pvVar4 GEN_EDX_ARG);
    F_00a1ac10((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,pvVar4);
  }
  F_00c47745(((uint *)(gen_frame + 0x68))[0x10] ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)puVar9;
}

/* ref: FUN_004d2c30 */
GEN_NOFRAME uint GEN_THISCALL F_004d2c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d2c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar5 = F_004d9920(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD,0,0,2);
  if (uVar5 != 0) {
    if (*(int *)((int)this + 0x38) == 0) {
      fVar9 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
      if (*(int *)(REFG(int, 0x1370b90) + 0x90) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar10 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
      if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar4 = (float10)0;
      F_004f08f0(((undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,(float)fVar4,(float)((float10)(float)fVar9 + (float10)0),
                   (float)((float10)(float)fVar10 + (float10)0),(float)fVar4,(float)fVar4,
                   (float)(float10)1,
                   (float)((float10)*(double *)&REFG(undefined, 0x10968b0) / (float10)(float)fVar9),
                   (float)((float10)REFG(double, 0x1088108) / (float10)(float)fVar10));
      F_004d3a00(uVar5 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x40)));
    }
    else if (*(int *)((int)this + 0x38) == 1) {
      iVar6 = *(int *)((int)this + 0x3c) * 0x358;
      if ((*(byte *)(iVar6 + 8 + REFG(int, 0x137127c)) & 1) != 0) {
        iVar6 = *(int *)(iVar6 + 0x2a4 + REFG(int, 0x137127c));
        puVar7 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x0)),iVar6 + 0x10,iVar6 + 0x50);
        puVar8 = ((undefined4 *)(gen_frame + 0x40));
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        F_004d3a00(uVar5 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x40)));
      }
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x24))) = 0;
  }
  uVar5 = *(int *)((int)this + 0x3c) << 0x1b | *(uint *)(iVar1 + 8) & 0x7ffffff;
  *(uint *)(iVar1 + 8) = uVar5;
  uVar5 = (*(int *)((int)this + 0x40) << 0x17 ^ uVar5) & 0x7800000 ^ uVar5;
  *(uint *)(iVar1 + 8) = uVar5;
  uVar5 = (*(int *)((int)this + 0x44) << 0x13 ^ uVar5) & 0x780000 ^ uVar5;
  *(uint *)(iVar1 + 8) = uVar5;
  *(uint *)(iVar1 + 8) = (*(uint *)((int)this + 0x48) ^ uVar5) & 0x7ffff ^ uVar5;
  uVar2 = *(undefined4 *)((int)this + 0x78);
  uVar3 = *(undefined4 *)((int)this + 0x18);
  *(uint *)(iVar1 + 0x6c) = *(uint *)(iVar1 + 0x6c) & 0x800000ff;
  *(char *)(iVar1 + 0x6c) = (char)uVar2;
  *(uint *)(iVar1 + 0x6c) = *(uint *)(iVar1 + 0x6c) & 0x7fffffff;
  *(undefined4 *)(iVar1 + 0x68) = uVar3;
  *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)((int)this + 0x1c);
  uVar2 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x40) = uVar2;
  uVar2 = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x44) = uVar2;
  *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)((int)this + 0x14);
  *(uint *)(iVar1 + 0x38) = REFG(undefined4, 0x1302354) & 0x7ffffff;
  *(uint *)(iVar1 + 0x50) = REFG(undefined4, 0x130235c) & 0x1f;
  uVar5 = REFG(undefined4, 0x130236c);
  *(uint *)(iVar1 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)(iVar1 + 0x5c) = uVar5 & 0xfffffffc;
  *(uint *)(iVar1 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
  *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0x30) * 4))) = *(undefined4 *)((int)this + 0x20)
  ;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + 0x34) * 8))) =
       *(undefined4 *)((int)this + 0x24);
  *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + 0x34) * 8))) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x1c))) == 2) {
    uVar5 = F_004d4d00(this GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90) GEN_EDX_ARG);
    return uVar5;
  }
  uVar5 = F_004d5130(this GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_004d2f20 */
GEN_NOFRAME uint GEN_THISCALL F_004d2f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d2f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_004d2c30(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  uVar1 = F_004d2c30(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004d2f40 */
GEN_NOFRAME uint GEN_THISCALL F_004d2f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d2f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  double dVar8;
  byte bVar9;
  uint uVar10;
  undefined3 extraout_var = 0;
  uint uVar11;
  uint * puVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  uVar10 = *(uint *)((int)this + 0x28) >> 1;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if ((uVar10 & 1) == 0) {
    return uVar10;
  }
  if (((*(uint *)((int)this + 0x28) >> 3 & 1) != 0) || (bVar9 = F_004d2770(this GEN_EDX_FWD), this = ((undefined *)(uint)(this)), bVar9 != 0)) {
LAB_004d2fbb: ;
    uVar10 = F_004d1610(this GEN_EDX_ARG);
    return uVar10;
  }
  if ((*(uint *)((int)((undefined *)(uint)(this)) + 0x28) >> 2 & 1) == 0) {
    bVar9 = F_004d2720(((undefined *)(uint)(this)) GEN_EDX_ARG);
    this = ((undefined *)(uint)(((undefined *)(uint)(this))));
    if (bVar9 == 0) {
      return CONCAT31(extraout_var,bVar9);
    }
  }
  fVar3 = REFG(float, 0x1088068);
  uVar10 = *(uint *)((int)this + 0x28) >> 4;
  if (((uVar10 & 1) == 0) && ((float10)*(float *)((int)this + 0x18) <= (float10)*(float *)((int)this + 0x1c))) {
    if ((*(uint *)((int)this + 0x28) & 1) != 0) {
      return uVar10;
    }
    goto LAB_004d2fbb;
  }
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  (*(float *)(gen_frame + 0x7c)) = fVar1;
  fVar2 = *(float *)((int)this + 0x1c);
  (*(float *)(gen_frame + 0x98)) = fVar2;
  fVar13 = (float10)fVar2;
  fVar2 = ((float)GEN_TOF((fVar13 / (float10)*(float *)((int)this + 0x18))));
  (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
  *(float *)((int)this + 0x1c) = (float)(fVar13 + (float10)fVar1);
  fVar13 = (float10)fVar2;
  uVar10 = *(uint *)((int)this + 0x28) >> 4;
  if ((uVar10 & 1) == 0) {
    if (!(fVar2 < fVar3)) {
      (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF(((float10)1 - ((fVar13 - (float10)REFG(double, 0x1088108)) + (fVar13 - (float10)REFG(double, 0x1088108))))));
      goto LAB_004d33cc;
    }
    fVar13 = fVar13 + fVar13;
  }
  else {
    if (fVar2 < fVar3) {
      (*(float *)(gen_frame + 0x98)) = (float)(fVar13 + fVar13);
      goto LAB_004d33cc;
    }
    fVar13 = (float10)1 - ((fVar13 - (float10)REFG(double, 0x1088108)) + (fVar13 - (float10)REFG(double, 0x1088108)));
  }
  uVar10 = 0;
  (*(float *)(gen_frame + 0x98)) = (float)fVar13;
  puVar12 = ((uint *)(gen_frame + 0x4)) + 1;
  (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)((int)this + 0x20);
  do {
    (&(*(uint *)(gen_frame + 0x88)))[uVar10] = *(uint *)(*(*(int * PTR32 *)(gen_frame + 0x9c)) + 0xfc);
    F_004d41c0(puVar12 - 2 GEN_EDX_ARG,&REFG(undefined4, 0x1301dd0));
    uVar11 = *puVar12;
    uVar5 = (&(*(uint *)(gen_frame + 0x88)))[uVar10];
    (*(int * PTR32 *)(gen_frame + 0x9c)) = (*(int * PTR32 *)(gen_frame + 0x9c)) + 1;
    puVar12[-1] = uVar5;
    *puVar12 = uVar11 & 0xfffffe7f | 0x240;
    uVar10 = uVar10 + 1;
    puVar12 = puVar12 + 4;
  } while (uVar10 < 2);
  fVar13 = (float10)*(int *)((*(uint *)(gen_frame + 0x88)) + 0x18);
  uVar10 = *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x8c))) + 0x18) >> 2;
  uVar11 = *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x8c))) + 0x1c) >> 2;
  if (*(int *)((*(uint *)(gen_frame + 0x88)) + 0x18) < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  iVar6 = *(int *)((*(uint *)(gen_frame + 0x88)) + 0x1c);
  (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar13)));
  fVar13 = (float10)(float)fVar13;
  fVar14 = (float10)*(int *)((*(uint *)(gen_frame + 0x88)) + 0x1c);
  if (iVar6 < 0) {
    fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  iVar6 = *(int *)(REFG(int, 0x1370b90) + 0x90);
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(float *)(gen_frame + 0x8c)) = (float)(fVar13 / fVar14);
  fVar15 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
  if (iVar6 < 0) {
    fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  iVar6 = *(int *)(REFG(int, 0x1370b90) + 0x94);
  fVar3 = (float)fVar15;
  (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)iVar6;
  (*(float *)(gen_frame + 0x54)) = fVar3;
  fVar15 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float)fVar15;
  (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  (*(float *)(gen_frame + 0x6c)) = 0.0;
  (*(float *)(gen_frame + 0x70)) = 0.0;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(float *)(gen_frame + 0x74)) = fVar3;
  (*(float *)(gen_frame + 0x78)) = fVar1;
  (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar3 / (float10)fVar1))));
  fVar14 = (float10)(float)(fVar13 / fVar14);
  if ((float10)(float)((float10)fVar3 / (float10)fVar1) < fVar14) {
    fVar3 = (float)((float10)fVar3 - (float10)0);
    (*(float *)(gen_frame + 0x8c)) = fVar3;
    fVar3 = (float)((float10)fVar3 / fVar14);
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar1 = (float)((float10)fVar1 - (float10)0);
    (*(float *)(gen_frame + 0x8c)) = fVar1;
    fVar15 = (float10)fVar3;
    fVar3 = ((float)GEN_TOF((((float10)fVar1 - fVar15) * (float10)REFG(double, 0x1088108))));
    (*(float *)(gen_frame + 0x70)) = fVar3;
    fVar14 = (float10)fVar3;
    (*(float *)(gen_frame + 0x78)) = (float)(fVar14 + fVar15);
    fVar15 = (float10)0.0;
  }
  else {
    fVar1 = (float)((float10)fVar1 - (float10)0);
    (*(float *)(gen_frame + 0x8c)) = fVar1;
    fVar1 = (float)((float10)fVar1 * fVar14);
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    fVar3 = (float)((float10)fVar3 - (float10)0);
    (*(float *)(gen_frame + 0x8c)) = fVar3;
    fVar14 = (float10)fVar1;
    fVar3 = ((float)GEN_TOF((((float10)fVar3 - fVar14) * (float10)REFG(double, 0x1088108))));
    (*(float *)(gen_frame + 0x6c)) = fVar3;
    fVar15 = (float10)fVar3;
    (*(float *)(gen_frame + 0x74)) = (float)(fVar15 + fVar14);
    fVar14 = (float10)0.0;
  }
  (*(float *)(gen_frame + 0x8c)) = (float)((float10)(*(float *)(gen_frame + 0x74)) - fVar15);
  fVar16 = (float10)(float)((float10)(*(float *)(gen_frame + 0x74)) - fVar15);
  (*(float *)(gen_frame + 0x8c)) = gen_bits2f(uVar10);
  fVar3 = ((float)GEN_TOF(((fVar16 * (float10)*(double *)&REFG(undefined, 0x10968c0)) / fVar13)));
  (*(float *)(gen_frame + 0x5c)) = fVar3;
  fVar1 = ((float)GEN_TOF(((((float10)uVar10 + (float10)*(double *)&REFG(undefined, 0x10968c0)) * fVar16) / fVar13)));
  (*(float *)(gen_frame + 0x64)) = fVar1;
  (*(float *)(gen_frame + 0x8c)) = (float)((float10)(*(float *)(gen_frame + 0x78)) - fVar14);
  fVar13 = (float10)*(int *)((*(uint *)(gen_frame + 0x88)) + 0x1c);
  if (*(int *)((*(uint *)(gen_frame + 0x88)) + 0x1c) < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar13)));
  fVar16 = (float10)(float)((float10)(*(float *)(gen_frame + 0x78)) - fVar14);
  (*(float *)(gen_frame + 0x8c)) = gen_bits2f(uVar11);
  fVar13 = (float10)(float)fVar13;
  fVar2 = ((float)GEN_TOF(((fVar16 * (float10)*(double *)&REFG(undefined, 0x10968b8)) / fVar13)));
  (*(float *)(gen_frame + 0x60)) = fVar2;
  fVar4 = ((float)GEN_TOF(((((float10)uVar11 + (float10)*(double *)&REFG(undefined, 0x10968b8)) * fVar16) / fVar13)));
  (*(float *)(gen_frame + 0x68)) = fVar4;
  (*(float *)(gen_frame + 0x5c)) = (float)((float10)fVar3 + fVar15);
  (*(float *)(gen_frame + 0x64)) = (float)((float10)fVar1 + fVar15);
  (*(float *)(gen_frame + 0x60)) = (float)((float10)fVar2 + fVar14);
  (*(float *)(gen_frame + 0x68)) = (float)(fVar14 + (float10)fVar4);
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x14) + (float10)(*(float *)(gen_frame + 0x7c)))));
  (*(float *)(gen_frame + 0x8c)) = fVar3;
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x14) = fVar3;
  (*(float *)(gen_frame + 0x8c)) = (float)((float10)fVar3 * (float10)*(double *)&REFG(undefined, 0x1088070));
  dVar8 = (GEN_X87MATH(((double)(float)((float10)fVar3 * (float10)*(double *)&REFG(undefined, 0x1088070))),0xd));
  (*(float *)(gen_frame + 0x8c)) = (float)dVar8;
  fVar13 = (float10)(float)dVar8;
  fVar3 = ((float)GEN_TOF((fVar13 - (float10)(longlong)(fVar13 / (float10)*(double *)&REFG(undefined, 0x10968a8)) * (float10)*(double *)&REFG(undefined, 0x10968a8))));
  (*(float *)(gen_frame + 0x8c)) = fVar3;
  (*(float *)(gen_frame + 0x7c)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)fVar3 - (float10)(longlong)((float10)fVar3 / (float10)*(double *)&REFG(undefined, 0x1094788)) * (float10)*(double *)&REFG(undefined, 0x1094788))));
  (*(float *)(gen_frame + 0x8c)) = fVar1;
  fVar1 = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x1094878));
  (*(float *)(gen_frame + 0x20)) = fVar1;
  fVar3 = (float)((float10)*(double *)&REFG(undefined, 0x1094878) * (float10)fVar3);
  (*(float *)(gen_frame + 0x8c)) = fVar3;
  dVar8 = (GEN_X87MATH(((double)fVar3),0xd));
  (*(float *)(gen_frame + 0x8c)) = (float)dVar8;
  fVar13 = (float10)*(double *)&REFG(undefined, 0x1094878);
  iVar6 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  fVar3 = (float)((float10)(float)dVar8 * fVar13);
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)REFG(undefined4, 0x1302e20);
  fVar1 = (float)((float10)fVar1 + fVar13);
  (*(float *)(gen_frame + 0x80)) = fVar1;
  fVar3 = (float)(fVar13 + (float10)fVar3);
  (*(float *)(gen_frame + 0x84)) = fVar3;
  (*(float *)(gen_frame + 0x30)) = fVar1;
  (*(float *)(gen_frame + 0x34)) = fVar3;
  F_004134a0(*(undefined4 *)(iVar6 + 0x1a0),&(*(undefined4 *)(gen_frame + 0x4c)),5,&(*(int * PTR32 *)(gen_frame + 0x9c)),&(*(int * PTR32 *)(gen_frame + 0x9c)),&(*(int * PTR32 *)(gen_frame + 0x9c)),&(*(int * PTR32 *)(gen_frame + 0x9c)),2, &REFG(undefined4, 0x1301dd0));
  (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)REFG(undefined4, 0x1302e24);
  F_004136d0(*(undefined4 *)(iVar6 + 0x1a0),&(*(float *)(gen_frame + 0x6c)),5,&(*(int * PTR32 *)(gen_frame + 0x9c)),&(*(int * PTR32 *)(gen_frame + 0x9c)),&(*(int * PTR32 *)(gen_frame + 0x9c)),&(*(int * PTR32 *)(gen_frame + 0x9c)), &REFG(undefined8, 0x1375ab0),&REFG(undefined, 0x1302c30),2,((undefined1 *)(gen_frame + 0x0)));
  (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)REFG(undefined4, 0x1302e24);
  uVar10 = F_004136d0(*(undefined4 *)(iVar6 + 0x1a0),&(*(float *)(gen_frame + 0x5c)),5,&(*(int * PTR32 *)(gen_frame + 0x9c)),&(*(int * PTR32 *)(gen_frame + 0x9c)),&(*(int * PTR32 *)(gen_frame + 0x9c)), &(*(int * PTR32 *)(gen_frame + 0x9c)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)),2,((undefined1 *)(gen_frame + 0x10)));
LAB_004d33cc: ;
  if (!(0.0 < (double)(*(float *)(gen_frame + 0x98)))) {
    return uVar10;
  }
  iVar6 = *(int *)(REFG(int, 0x1370b90) + 0x90);
  fVar13 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  if (iVar6 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  iVar6 = *(int *)(REFG(int, 0x1370b90) + 0x94);
  (*(float *)(gen_frame + 0x54)) = (float)fVar13;
  (*(float *)(gen_frame + 0x8c)) = gen_bits2f(iVar6);
  fVar13 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x9c)) + 2)) = gen_x87_cw;
  (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)GEN_TOP(CONCAT22(gen_x87_cw,(*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x9c)) + 0)))));
  (*(float *)(gen_frame + 0x58)) = (float)fVar13;
  (*(float *)(gen_frame + 0x8c)) = gen_bits2f(gen_x87_cw | 0xc00);
  iVar6 = (int)TRUNC((double)(*(float *)(gen_frame + 0x98)) * *(double *)&REFG(undefined, 0x1088100));
  (*(float *)(gen_frame + 0x8c)) = gen_bits2f(iVar6);
  (*(float *)(gen_frame + 0x98)) = gen_bits2f(iVar6 << 0x18);
  uVar10 = F_004134a0(*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a0))), &(*(undefined4 *)(gen_frame + 0x4c)),5,&(*(float *)(gen_frame + 0x98)),&(*(float *)(gen_frame + 0x98)),&(*(float *)(gen_frame + 0x98)),&(*(float *)(gen_frame + 0x98)),2,&REFG(undefined4, 0x1301dd0));
  return uVar10;
}

/* ref: FUN_004d34a0 */
GEN_FRAME uint GEN_THISCALL F_004d34a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d34a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float * pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  uVar4 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x90);
  uVar5 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x94);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = uVar4;
  *(undefined4 *)((int)this + 0x38) = uVar5;
  uVar7 = *(uint *)((int)this + 0x28) >> 5;
  if ((uVar7 & 1) != 0) {
    iVar8 = *(int *)(REFG(int, 0x1370b90) + 0x90);
    fVar9 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    if (iVar8 < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    pfVar1 = (float *)(REFG(int, 0x1370b90) + 0x94);
    fVar2 = (float)fVar9;
    (*(float *)(gen_frame + 0x28)) = fVar2;
    fVar9 = (float10)fVar2;
    fVar6 = *pfVar1;
    (*(float *)(gen_frame + 0x10)) = fVar2;
    fVar10 = (float10)(int)gen_fl2bits(*pfVar1);
    if ((int)gen_fl2bits(fVar6) < 0) {
      fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar3 = (float)fVar10;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x18)) = 0.0;
    (*(float *)(gen_frame + 0x1c)) = 0.0;
    (*(float *)(gen_frame + 0x14)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar2;
    (*(float *)(gen_frame + 0x24)) = fVar3;
    (*(float *)(gen_frame + 0x28)) = (float)(fVar9 / (float10)fVar3);
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10968c8);
    if ((float10)(float)(fVar9 / (float10)fVar3) < fVar10) {
      (*(float *)(gen_frame + 0x28)) = fVar6;
      fVar11 = (float10)(int)gen_fl2bits(fVar6);
      if ((int)gen_fl2bits(fVar6) < 0) {
        fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar9 = (fVar11 - fVar9 / fVar10) * (float10)REFG(double, 0x1088108);
      fVar2 = (float)fVar9;
      (*(float *)(gen_frame + 0x28)) = fVar2;
      iVar8 = (int)fVar9;
      *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) - iVar8;
      (*(float *)(gen_frame + 0x14)) = fVar2;
      *(int *)((int)this + 0x30) = iVar8;
      (*(float *)(gen_frame + 0x1c)) = (float)((float10)fVar3 - (float10)fVar2);
    }
    else {
      fVar11 = (float10)(int)gen_fl2bits(*pfVar1);
      if ((int)gen_fl2bits(fVar6) < 0) {
        fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar9 = (fVar9 - fVar11 * fVar10) * (float10)REFG(double, 0x1088108);
      fVar6 = (float)fVar9;
      (*(float *)(gen_frame + 0x28)) = fVar6;
      iVar8 = (int)fVar9;
      *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) - iVar8;
      (*(float *)(gen_frame + 0x10)) = fVar6;
      *(int *)((int)this + 0x2c) = iVar8;
      (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar6);
    }
    iVar8 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
    (*(float *)(gen_frame + 0x28)) = REFG(undefined4, 0x1302e20);
    F_004134a0(*(undefined4 *)(iVar8 + 0x1a4),&(*(undefined4 *)(gen_frame + 0x8)),5,&(*(float *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x28)),2,
                 &REFG(undefined4, 0x1301dd0));
    (*(float *)(gen_frame + 0x28)) = REFG(undefined4, 0x1302e20);
    uVar7 = F_004134a0(*(undefined4 *)(iVar8 + 0x1a4),&(*(float *)(gen_frame + 0x18)),5,&(*(float *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x28)),
                         &(*(float *)(gen_frame + 0x28)),2,&REFG(undefined4, 0x1301dd0));
  }
  return uVar7;
}

/* ref: FUN_004d3630 */
GEN_FRAME uint GEN_THISCALL F_004d3630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d3630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_004d2f40(this GEN_EDX_FWD);
  F_004d34a0(this GEN_EDX_ARG);
  pvVar1 = *(undefined * PTR32 *)((int)this + 8);
  F_004d6970(*(undefined * PTR32 *)((int)pvVar1 + 0x18) GEN_EDX_ARG);
  uVar2 = F_004d2030(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  *(uint *)((int)pvVar1 + 0x6c) = uVar2;
  *(undefined * PTR32 *)((int)pvVar1 + 0x70) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  F_004d6970(*(undefined * PTR32 *)((int)pvVar1 + 0x18) GEN_EDX_ARG);
  uVar2 = F_004d2030(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  *(uint *)((int)pvVar1 + 0x6c) = uVar2;
  *(undefined * PTR32 *)((int)pvVar1 + 0x70) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
}

/* ref: FUN_004d36d0 */
GEN_FRAME uint GEN_THISCALL F_004d36d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d36d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = -(uint)((char)param_2 != '\0');
  return (uint)in_ecx;
}

/* ref: FUN_004d3710 */
GEN_FRAME uint F_004d3710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d3710u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  *param_1 = *param_2 / param_3;
  param_1[1] = param_2[1] / param_3;
  return (uint)param_1;
}

/* ref: FUN_004d3740 */
GEN_FRAME uint F_004d3740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d3740u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2 / param_3;
  param_1[1] = uVar1 / param_3;
  return (uint)param_1;
}

/* ref: FUN_004d3790 */
GEN_FRAME uint GEN_THISCALL F_004d3790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = *param_1;
  *(undefined4 *)((int)this + 0xc) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004d37c0 */
GEN_FRAME uint GEN_THISCALL F_004d37c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d37c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) &&
      (*(int *)((int)this + 8) == param_1[2])) && (*(int *)((int)this + 0xc) == param_1[3])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004d3800 */
GEN_FRAME byte GEN_THISCALL F_004d3800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) &&
      (*(int *)((int)this + 8) == param_1[2])) && (*(int *)((int)this + 0xc) == param_1[3])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_004d3850 */
GEN_FRAME float10 GEN_THISCALL F_004d3850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d3850u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  return (float10)(float)((float10)in_ecx[2] - (float10)*in_ecx);
}

/* ref: FUN_004d3870 */
GEN_FRAME float10 GEN_THISCALL F_004d3870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d3870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xc) - (float10)*(float *)(in_ecx + 4))));
}

/* ref: FUN_004d3890 */
GEN_FRAME uint F_004d3890(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4d3890u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  *param_1 = (float)((float10)param_3 + (float10)*param_2);
  param_1[1] = (float)((float10)param_3 + (float10)param_2[1]);
  return (uint)param_1;
}

/* ref: FUN_004d38b0 */
GEN_FRAME uint GEN_THISCALL F_004d38b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d38b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)in_ecx;
}

/* ref: FUN_004d39a0 */
GEN_FRAME uint GEN_THISCALL F_004d39a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d39a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = REFG(undefined4, 0x1302ce4);
  if (param_2 == 3) {
    *param_1 = REFG(undefined4, 0x1302ce0);
    uVar2 = REFG(undefined4, 0x1302ce8);
    param_1[1] = uVar1;
    uVar1 = REFG(undefined4, 0x1302cec);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)((int)this + param_2 * 4);
  param_1[1] = *(undefined4 *)((int)this + param_2 * 4 + 0x10);
  param_1[2] = *(undefined4 *)((int)this + param_2 * 4 + 0x20);
  param_1[3] = *(undefined4 *)((int)this + param_2 * 4 + 0x30);
  return (uint)param_1;
}

/* ref: FUN_004d3a00 */
GEN_FRAME unsigned int GEN_THISCALL F_004d3a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3a00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[4];
  in_ecx[2] = param_2[8];
  in_ecx[3] = param_2[0xc];
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[9];
  in_ecx[7] = param_2[0xd];
  in_ecx[8] = param_2[2];
  in_ecx[9] = param_2[6];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xe];
  in_ecx[0xc] = param_2[3];
  in_ecx[0xd] = param_2[7];
  in_ecx[0xe] = param_2[0xb];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_004d3a70 */
GEN_FRAME uint GEN_THISCALL F_004d3a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4d3a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  *(undefined1 *)((int)this + 2) = (undefined1)param_3;
  *(undefined1 *)((int)this + 3) = (undefined1)param_4;
  return (uint)this;
}

/* ref: FUN_004d3ab0 */
GEN_FRAME unsigned int GEN_THISCALL F_004d3ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4d3ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  uint param_6 = (uint)gen_a6;
  uint param_7 = (uint)gen_a7;
  uint param_8 = (uint)gen_a8;
  *(uint *)this =
       (((((((param_8 & 0xf) << 4 | param_7 & 0xf) << 4 | param_6 & 0xf) * 8 | param_5 & 7) << 4 |
         param_4 & 0xf) << 4 | param_3 & 0xf) * 8 | param_2 & 7) * 2 | (uint)((char)param_1 != '\0')
  ;
  return 0;
}

/* ref: FUN_004d3b20 */
GEN_FRAME uint GEN_THISCALL F_004d3b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3b20u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(((*param_2 ^ *in_ecx) & 0x7ffffff) == 0);
}

/* ref: FUN_004d3b40 */
GEN_FRAME uint GEN_THISCALL F_004d3b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *(uint *)this = *param_1 & 0x7ffffff;
  return (uint)this;
}

/* ref: FUN_004d3b60 */
GEN_FRAME uint GEN_THISCALL F_004d3b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3b60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(((*param_2 ^ *in_ecx) & 0x7ffffff) == 0);
}

/* ref: FUN_004d3b80 */
GEN_FRAME uint GEN_THISCALL F_004d3b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d3b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(uint *)this =
       ((uint)((char)param_2 != '\0') | (param_3 & 7) * 2) * 2 | (uint)((char)param_1 != '\0');
  return (uint)this;
}

/* ref: FUN_004d3bb0 */
GEN_FRAME uint GEN_THISCALL F_004d3bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *(uint *)this = *param_1 & 0x1f;
  return (uint)this;
}

/* ref: FUN_004d3bd0 */
GEN_FRAME uint GEN_THISCALL F_004d3bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = param_1[1];
  *(uint *)this = *param_1 & 0xfe000000;
  *(uint *)((int)this + 4) = uVar1 & 0xfffffffc;
  return (uint)this;
}

/* ref: FUN_004d3bf0 */
GEN_FRAME uint GEN_THISCALL F_004d3bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *(uint *)this = *param_1 & 0x7fffffff;
  return (uint)this;
}

/* ref: FUN_004d3c10 */
GEN_FRAME uint GEN_THISCALL F_004d3c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3c10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(((*param_2 ^ *in_ecx) & 0xfffffff) == 0);
}

/* ref: FUN_004d3c30 */
GEN_FRAME uint GEN_THISCALL F_004d3c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *(uint *)this = *param_1 & 0xfffffff;
  return (uint)this;
}

/* ref: FUN_004d3c50 */
GEN_FRAME uint GEN_THISCALL F_004d3c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3c50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(((*param_2 ^ *in_ecx) & 0xfffffff) == 0);
}

/* ref: FUN_004d3c90 */
GEN_FRAME uint GEN_THISCALL F_004d3c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8) & 0x7ffffff | param_1 << 0x1b;
  *(uint *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_004d3cb0 */
GEN_FRAME uint GEN_THISCALL F_004d3cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 << 0x17 ^ *(uint *)(in_ecx + 8)) & 0x7800000;
  *(uint *)(in_ecx + 8) = *(uint *)(in_ecx + 8) ^ uVar1;
  return uVar1;
}

/* ref: FUN_004d3cd0 */
GEN_FRAME uint GEN_THISCALL F_004d3cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3cd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 << 0x13 ^ *(uint *)(in_ecx + 8)) & 0x780000;
  *(uint *)(in_ecx + 8) = *(uint *)(in_ecx + 8) ^ uVar1;
  return uVar1;
}

/* ref: FUN_004d3cf0 */
GEN_FRAME uint GEN_THISCALL F_004d3cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 8) ^ param_2) & 0x7ffff;
  *(uint *)(in_ecx + 8) = *(uint *)(in_ecx + 8) ^ uVar1;
  return uVar1;
}

/* ref: FUN_004d3d10 */
GEN_FRAME uint GEN_THISCALL F_004d3d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x38) = param_2 & 0x7ffffff;
  return param_2 & 0x7ffffff;
}

/* ref: FUN_004d3d30 */
GEN_FRAME uint GEN_THISCALL F_004d3d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x50) = param_2 & 0x1f;
  return param_2 & 0x1f;
}

/* ref: FUN_004d3d40 */
GEN_FRAME uint GEN_THISCALL F_004d3d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d3d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + 0x58) = param_1 & 0xfe000000;
  *(uint *)((int)this + 0x5c) = param_2 & 0xfffffffc;
  return param_1 & 0xfe000000;
}

/* ref: FUN_004d3d60 */
GEN_FRAME uint GEN_THISCALL F_004d3d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2 & 0x7fffffff;
  return param_2 & 0x7fffffff;
}

/* ref: FUN_004d3d80 */
GEN_FRAME uint GEN_THISCALL F_004d3d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  *(undefined4 *)(in_ecx + 0x60) = 0;
  return param_2;
}

/* ref: FUN_004d3da0 */
GEN_FRAME uint GEN_THISCALL F_004d3da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x44) = param_2;
  *(undefined4 *)(in_ecx + 0x60) = 0;
  return param_2;
}

/* ref: FUN_004d3dc0 */
GEN_FRAME uint GEN_THISCALL F_004d3dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4d3dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  uint * puVar1;
  
  *(undefined4 *)((int)this + param_1 * 8 + 0x68) = param_2;
  puVar1 = (uint *)((int)this + param_1 * 8 + 0x6c);
  *puVar1 = *puVar1 ^ (param_3 << 8 ^ *(uint *)((int)this + param_1 * 8 + 0x6c)) & 0x7fffff00;
  *(undefined1 *)((int)this + param_1 * 8 + 0x6c) = (undefined1)param_4;
  *(uint *)((int)this + param_1 * 8 + 0x6c) =
       param_5 << 0x1f | *(uint *)((int)this + param_1 * 8 + 0x6c) & 0x7fffffff;
  return param_1;
}

/* ref: FUN_004d3e10 */
GEN_FRAME uint GEN_THISCALL F_004d3e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3e10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x48) = param_2;
  return param_2;
}

/* ref: FUN_004d3e20 */
GEN_FRAME uint GEN_THISCALL F_004d3e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d3e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0xa8) = param_2;
  return param_2;
}

/* ref: FUN_004d3e40 */
GEN_FRAME uint GEN_THISCALL F_004d3e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3e40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x4c) = param_2;
  return param_2;
}

/* ref: FUN_004d3e50 */
GEN_FRAME uint GEN_THISCALL F_004d3e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d3e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 8 + 0x2a8) = param_2;
  return param_2;
}

/* ref: FUN_004d3e70 */
GEN_FRAME uint GEN_THISCALL F_004d3e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d3e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 8 + 0x2ac) = param_2 & 0xfffffff;
  return param_2 & 0xfffffff;
}

/* ref: FUN_004d3eb0 */
GEN_FRAME uint GEN_THISCALL F_004d3eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_004d3ec0 */
GEN_FRAME uint GEN_THISCALL F_004d3ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_004d3f70 */
GEN_FRAME unsigned int GEN_THISCALL F_004d3f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4d3f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  uint param_8 = (uint)gen_a8;
  uint param_9 = (uint)gen_a9;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_6;
  *(undefined4 *)((int)this + 8) = *param_7;
  *(uint *)((int)this + 0xc) =
       ((((param_4 & 1 | (param_5 & 1) * 2) * 2 | param_3 & 1) * 2 | param_2 & 1) * 4 | param_9 & 3)
       * 8 | param_8 & 7;
  return 0;
}

/* ref: FUN_004d3fe0 */
GEN_FRAME uint GEN_THISCALL F_004d3fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d3fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  if ((((((*param_1 ^ *(uint *)this) & 0x7ffffff) == 0) && (*(uint *)((int)this + 4) == param_1[1]))
      && (((param_1[2] ^ *(uint *)((int)this + 8)) & 0xfffffff) == 0)) &&
     (((param_1[3] ^ *(uint *)((int)this + 0xc)) & 0x1ff) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004d4030 */
GEN_FRAME uint GEN_THISCALL F_004d4030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d4030u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_004d4050 */
GEN_FRAME unsigned int F_004d4050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d4050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Client::Graphics::Primitive::Server::vf0 */
GEN_FRAME uint GEN_THISCALL F_004d4090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d4090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096864));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004d4140 */
GEN_FRAME uint GEN_THISCALL F_004d4140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d4140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 100);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(param_1));
  if (*(uint *)((int)this + 0x4c) < (uint)(*(int *)((int)this + 0x60) + *(int *)((int)this + 100)))
  {
    return 0;
  }
  return ((*(int *)((int)this + 0x58) - iVar2) - param_1) + *(uint *)((int)this + 0x4c);
}

/* ref: FUN_004d41c0 */
GEN_FRAME unsigned int GEN_THISCALL F_004d41c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d41c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(uint *)this = *param_1 & 0x7ffffff;
  *(uint *)((int)this + 4) = param_1[1];
  *(uint *)((int)this + 8) = param_1[2] & 0xfffffff;
  *(uint *)((int)this + 0xc) =
       *(uint *)((int)this + 0xc) ^ (*(uint *)((int)this + 0xc) ^ param_1[3]) & 7;
  uVar1 = (param_1[3] ^ *(uint *)((int)this + 0xc)) & 0x18 ^ *(uint *)((int)this + 0xc);
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = (param_1[3] ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = (param_1[3] ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = (param_1[3] ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = (param_1[3] ^ uVar1) & 0x100 ^ uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  *(uint *)((int)this + 0xc) = (param_1[3] ^ uVar1) & 0x1ff ^ param_1[3];
  *(uint *)((int)this + 0xc) = param_1[3];
  return 0;
}

/* ref: FUN_004d4260 */
GEN_FRAME uint GEN_THISCALL F_004d4260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d4260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x2c);
  uVar3 = iVar2 + param_1;
  if (uVar3 < 0x1001) {
    *(uint *)((int)this + 0x2c) = uVar3;
    return *(int *)((int)this + 0x1c) * iVar2 + *(int *)((int)this + 0x18);
  }
  if (param_1 < 0x1001) {
    iVar2 = *(int *)((int)this + 0x10);
    puVar1 = (uint *)(iVar2 + 0x68);
    uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(*(int *)(iVar2 + 0x78) * 0x1000));
    if (*(uint *)(iVar2 + 0x50) < *puVar1) {
      _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(*(int *)(iVar2 + 0x78) * -0x1000));
      return 0;
    }
    uVar3 = *(int *)(iVar2 + 0x5c) + uVar3;
    if (uVar3 != 0) {
      *(uint *)((int)this + 0x18) = uVar3;
      *(uint *)((int)this + 0x2c) = param_1;
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_004d42e0 */
GEN_FRAME uint GEN_THISCALL F_004d42e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d42e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  
  piVar1 = (int *)((int)this + 0x30);
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    iVar4 = *(int *)((int)this + 0x10);
    puVar2 = (uint *)(iVar4 + 100);
    uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar2), (long)(0x400));
    if (*(uint *)(iVar4 + 0x4c) < *puVar2 * 3 + *(int *)(iVar4 + 0x60)) {
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0x400;
      UNLOCK();
      *(undefined4 *)((int)this + 0x30) = 1;
      return uVar3;
    }
    iVar4 = (*(int *)(iVar4 + 0x58) - uVar3) - 0x400 + *(uint *)(iVar4 + 0x4c);
    if (iVar4 == 0) {
      *(undefined4 *)((int)this + 0x30) = 1;
      return 0;
    }
    **(int * PTR32 *)((int)this + 0x24) = iVar4;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 4))) = 0;
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
    *(int *)((int)this + 0x24) = iVar4;
    *(undefined4 *)((int)this + 0x30) = 0x7f;
  }
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined4 * PTR32 *)((int)this + 0x24) = puVar5 + 2;
  *puVar5 = param_1;
  puVar5[1] = param_2;
  return (uint)puVar5;
}

/* ref: FUN_004d4380 */
GEN_FRAME uint GEN_THISCALL F_004d4380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d4380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP(((int)this + (param_1 + param_2 * 8) * 4 + 0x68)));
}

/* ref: FUN_004d43a0 */
GEN_FRAME uint GEN_THISCALL F_004d43a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d43a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP(((int)this + (param_1 + param_2 * 8) * 4 + 0xe8)));
}

/* ref: FUN_004d43c0 */
GEN_FRAME byte F_004d43c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4d43c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (int)(param_1 * 2 + 0xfeU & 0xffffff00) < 0x30001;
}

/* ref: Singleton_VRelease_Primitive_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_004d4410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d4410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109686c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VManager_Primitive_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_004d4440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d4440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096874));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004d4470 */
GEN_FRAME uint GEN_THISCALL F_004d4470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d4470u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *in_ecx >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_004d44a0 */
GEN_FRAME uint F_004d44a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4d44a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 - 1 + param_2 & ~(param_2 - 1U);
}

/* ref: Client::Graphics::Primitive::Context::vf0 */
GEN_FRAME uint GEN_THISCALL F_004d44c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d44c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * pCVar2;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109687c));
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  iVar1 = *(int *)(this - 0x10);
  pCVar2 = this + iVar1 * 0x50;
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    pCVar2 = pCVar2 - 0x50;
    *(undefined * PTR32 * PTR32 *)pCVar2 = (*(undefined * PTR32 (*)[1])REFP(0x109687c));
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(this - 0x10);
  }
  return (uint)(this - 0x10);
}

/* ref: FUN_004d4590 */
GEN_FRAME uint F_004d4590(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4d4590u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float * pfVar3;
  
  fVar1 = (*(float *)&gen_args[1]);
  if ((*(float *)&gen_args[1]) == 0.0) {
    *(*(ushort * PTR32 *)&gen_args[0]) = 0;
    return (uint)(*(ushort * PTR32 *)&gen_args[0]);
  }
  fVar2 = gen_bits2f(((uint)gen_fl2bits((*(float *)&gen_args[1])) >> 0x17 & 0xff) - 0x70);
  (*(float *)&gen_args[1]) = fVar2;
  if ((int)gen_fl2bits(fVar2) < 0) {
    *(*(ushort * PTR32 *)&gen_args[0]) = 0;
    return (uint)(*(ushort * PTR32 *)&gen_args[0]);
  }
  (*(float *)(gen_frame + 0x8)) = 4.34403e-44;
  pfVar3 = &(*(float *)&gen_args[1]);
  if (0x1e < (int)gen_fl2bits(fVar2)) {
    pfVar3 = &(*(float *)(gen_frame + 0x8));
  }
  *(*(ushort * PTR32 *)&gen_args[0]) = (ushort)((uint)gen_fl2bits(fVar1) >> 0xd) & 0x3ff |
             (ushort)((uint)gen_fl2bits(fVar1) >> 0x10) & 0x8000 |
             (ushort)((int)gen_fl2bits(*pfVar3) << 10);
  return (uint)(*(ushort * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004d4610 */
GEN_FRAME uint GEN_THISCALL F_004d4610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d4610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0xff;
  *(undefined4 *)((int)this + 0x18) = 5000;
  *(undefined4 *)((int)this + 0x1c) = 0x10100;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined1 *)((int)this + 0x21) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_004d4650 */
GEN_FRAME uint GEN_THISCALL F_004d4650(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x4d4650u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  ushort * puVar1;
  
  puVar1 = (ushort *)F_004d4590((int)&(*(float *)&gen_args[1]) + 2,(*(float *)&gen_args[1]));
  *(*(uint * PTR32 *)&gen_args[0]) = (uint)*puVar1 << 5 | *(*(uint * PTR32 *)&gen_args[0]) & 0xffe0001f;
  return (uint)puVar1;
}

/* ref: FUN_004d4680 */
GEN_FRAME uint GEN_THISCALL F_004d4680(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x4d4680u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  double dVar2;
  uint * PTR32 * ppuVar3;
  uint uVar4;
  
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)&gen_args[0]);
  dVar2 = (double)(*(float *)&gen_args[1]);
  (*(float *)&gen_args[1]) = gen_bits2f((int)(dVar2 * *(double *)&REFG(undefined, 0x10968a0)));
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (uint *)0x1ff;
  ppuVar3 = (uint * PTR32 *)&(*(float *)&gen_args[1]);
  if (0x1fe < (int)(dVar2 * *(double *)&REFG(undefined, 0x10968a0))) {
    ppuVar3 = &(*(uint * PTR32 *)(gen_frame + 0x8));
  }
  puVar1 = *ppuVar3;
  (*(float *)&gen_args[1]) = ((float)gen_bits2f((unsigned int)(uintptr_t)(puVar1)));
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (uint *)0xfffffe00;
  ppuVar3 = &(*(uint * PTR32 *)(gen_frame + 0x8));
  if (-0x201 < (int)puVar1) {
    ppuVar3 = (uint * PTR32 *)&(*(float *)&gen_args[1]);
  }
  uVar4 = ((int)*ppuVar3 << 0x15 ^ *(*(uint * PTR32 *)&gen_args[0])) & 0x7fe00000;
  *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) ^ uVar4;
  return uVar4;
}

/* ref: FUN_004d46e0 */
GEN_FRAME uint GEN_THISCALL F_004d46e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x4d46e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  double dVar2;
  uint * PTR32 * ppuVar3;
  uint uVar4;
  
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)&gen_args[0]);
  dVar2 = (double)(*(float *)&gen_args[1]);
  (*(float *)&gen_args[1]) = gen_bits2f((int)(dVar2 * *(double *)&REFG(undefined, 0x10968a0)));
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (uint *)0x1ff;
  ppuVar3 = (uint * PTR32 *)&(*(float *)&gen_args[1]);
  if (0x1fe < (int)(dVar2 * *(double *)&REFG(undefined, 0x10968a0))) {
    ppuVar3 = &(*(uint * PTR32 *)(gen_frame + 0x8));
  }
  puVar1 = *ppuVar3;
  (*(float *)&gen_args[1]) = ((float)gen_bits2f((unsigned int)(uintptr_t)(puVar1)));
  (*(uint * PTR32 *)(gen_frame + 0x8)) = (uint *)0xfffffe00;
  ppuVar3 = &(*(uint * PTR32 *)(gen_frame + 0x8));
  if (-0x201 < (int)puVar1) {
    ppuVar3 = (uint * PTR32 *)&(*(float *)&gen_args[1]);
  }
  uVar4 = ((int)*ppuVar3 << 10 ^ *(*(uint * PTR32 *)&gen_args[0])) & 0xffc00;
  *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) ^ uVar4;
  return uVar4;
}

/* ref: FUN_004d4760 */
GEN_FRAME uint GEN_THISCALL F_004d4760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d4760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = REFG(int, 0x1370b90);
  iVar2 = *(int *)((int)this + 0x18);
  uVar5 = param_1 + 0xfU & 0xfffffff0;
  uVar4 = iVar2 + uVar5;
  if (uVar4 < 0x8001) {
    *(uint *)((int)this + 0x18) = uVar4;
    return *(int *)((int)this + 0xc) + iVar2;
  }
  if (uVar5 < 0x8001) {
    piVar1 = (int *)(REFG(int, 0x1370b90) + 0xc0);
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(0x8000));
    if (*(uint *)(iVar3 + 0xb8) < (uint)(*(int *)(iVar3 + 0xc4) * 3 + *piVar1)) {
      _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-0x8000));
      return 0;
    }
    uVar4 = *(int *)(iVar3 + 0xbc) + iVar2;
    if (uVar4 != 0) {
      *(uint *)((int)this + 0xc) = uVar4;
      *(uint *)((int)this + 0x18) = uVar5;
      return uVar4;
    }
  }
  return 0;
}

/* ref: FUN_004d47f0 */
GEN_FRAME uint GEN_THISCALL F_004d47f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d47f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004d4760(this GEN_EDX_FWD,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = param_1;
  return (uint)puVar1;
}

/* ref: FUN_004d4810 */
GEN_FRAME uint GEN_THISCALL F_004d4810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d4810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  piVar1 = (int *)((int)this + 0x1c);
  *piVar1 = *piVar1 - 1;
  iVar3 = REFG(int, 0x1370b90);
  if (*piVar1 == 0) {
    puVar2 = (uint *)(REFG(int, 0x1370b90) + 0xc4);
    uVar4 = _InterlockedExchangeAdd((volatile long *)(puVar2), (long)(0x4000));
    if (*(uint *)(iVar3 + 0xb8) < *puVar2 * 3 + *(int *)(iVar3 + 0xc0)) {
      LOCK();
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x4000;
      UNLOCK();
      *(undefined4 *)((int)this + 0x1c) = 1;
      return uVar4;
    }
    iVar3 = (*(int *)(iVar3 + 0xbc) - uVar4) - 0x4000 + *(uint *)(iVar3 + 0xb8);
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x1c) = 1;
      return 0;
    }
    **(int * PTR32 *)((int)this + 0x14) = iVar3;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = 0;
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
    *(int *)((int)this + 0x14) = iVar3;
    *(undefined4 *)((int)this + 0x1c) = 0x7ff;
  }
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x14);
  *(undefined4 * PTR32 *)((int)this + 0x14) = puVar5 + 2;
  *puVar5 = *(undefined4 *)((int)this + 8);
  puVar5[1] = param_1;
  return (uint)puVar5;
}

/* ref: FUN_004d48c0 */
GEN_FRAME byte GEN_THISCALL F_004d48c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d48c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  if ((((((*param_1 ^ *(uint *)this) & 0x7ffffff) == 0) && (*(uint *)((int)this + 4) == param_1[1]))
      && (((param_1[2] ^ *(uint *)((int)this + 8)) & 0xfffffff) == 0)) &&
     (((param_1[3] ^ *(uint *)((int)this + 0xc)) & 0x1ff) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_004d4920 */
GEN_FRAME uint GEN_THISCALL F_004d4920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d4920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  iVar3 = *(int *)((int)this + 0x28);
  uVar6 = param_2 + 0xfU & 0xfffffff0;
  uVar2 = iVar3 + uVar6;
  if (uVar2 < 0x801) {
    *(uint *)((int)this + 0x28) = uVar2;
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + iVar3)));
    *puVar5 = param_1;
    return (uint)puVar5;
  }
  iVar4 = *(int *)((int)this + 0x10);
  piVar1 = (int *)(iVar4 + 0x60);
  iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(0x800));
  if (*(uint *)(iVar4 + 0x4c) < (uint)(*(int *)(iVar4 + 100) * 3 + *piVar1)) {
    _InterlockedExchangeAdd((volatile long *)(piVar1), (long)(-0x800));
    return 0;
  }
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x58) + iVar3)));
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x14) = puVar5;
  *(uint *)((int)this + 0x28) = uVar6;
  *puVar5 = param_1;
  return (uint)puVar5;
}

/* ref: Client::Graphics::Primitive::Release::vf0 */
GEN_FRAME uint GEN_THISCALL F_004d49b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d49b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109686c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Primitive::Manager::vf0 */
GEN_FRAME uint GEN_THISCALL F_004d49f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d49f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096874));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004d4a30 */
GEN_FRAME uint GEN_THISCALL F_004d4a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x4d4a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  int iVar1;
  double dVar2;
  ushort * puVar3;
  int * piVar4;
  uint * puVar5;
  uint uVar6;
  
  uVar6 = (((uint)((char)(*(int *)&gen_args[4]) != '\0') * 2 | (*(uint *)&gen_args[3]) & 1) * 2 | (*(uint *)&gen_args[2]) & 1) << 2 | (*(uint *)&gen_args[1]) & 3;
  *(*(uint * PTR32 *)&gen_args[0]) = uVar6;
  puVar3 = (ushort *)F_004d4590((int)&(*(int *)&gen_args[4]) + 2,(*(float *)&gen_args[5]));
  dVar2 = (double)(*(float *)&gen_args[6]) * *(double *)&REFG(undefined, 0x10968a0);
  uVar6 = (uint)*puVar3 << 5 | uVar6;
  *(*(uint * PTR32 *)&gen_args[0]) = uVar6;
  (*(int *)&gen_args[4]) = (int)dVar2;
  (*(uint *)&gen_args[2]) = 0x1ff;
  piVar4 = &(*(int *)&gen_args[4]);
  if (0x1fe < (int)dVar2) {
    piVar4 = (int *)&(*(uint *)&gen_args[2]);
  }
  iVar1 = *piVar4;
  (*(int *)&gen_args[4]) = iVar1;
  (*(uint *)&gen_args[2]) = 0xfffffe00;
  puVar5 = &(*(uint *)&gen_args[2]);
  if (-0x201 < iVar1) {
    puVar5 = (uint *)&(*(int *)&gen_args[4]);
  }
  *(*(uint * PTR32 *)&gen_args[0]) = (*puVar5 & 0x3ff) << 0x15 ^ uVar6;
  return (uint)(*(uint * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004d4af0 */
GEN_FRAME uint GEN_THISCALL F_004d4af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4d4af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  int iVar1;
  double dVar2;
  int * piVar3;
  uint * puVar4;
  uint uVar5;
  
  dVar2 = (double)(*(float *)&gen_args[5]) * *(double *)&REFG(undefined, 0x10968a0);
  uVar5 = ((((*(uint *)&gen_args[4]) & 0xf) * 4 | (*(uint *)&gen_args[3]) & 3) * 4 | (*(uint *)&gen_args[2]) & 3) * 4 | (*(uint *)&gen_args[1]) & 3;
  *(*(uint * PTR32 *)&gen_args[0]) = uVar5;
  (*(uint *)&gen_args[4]) = (int)dVar2;
  (*(uint *)&gen_args[3]) = 0x1ff;
  piVar3 = (int *)&(*(uint *)&gen_args[4]);
  if (0x1fe < (int)dVar2) {
    piVar3 = (int *)&(*(uint *)&gen_args[3]);
  }
  iVar1 = *piVar3;
  (*(uint *)&gen_args[4]) = iVar1;
  (*(uint *)&gen_args[3]) = 0xfffffe00;
  puVar4 = &(*(uint *)&gen_args[3]);
  if (-0x201 < iVar1) {
    puVar4 = &(*(uint *)&gen_args[4]);
  }
  *(*(uint * PTR32 *)&gen_args[0]) = ((((uint)((char)(*(undefined4 *)&gen_args[8]) != '\0') * 8 | (*(uint *)&gen_args[7]) & 7) << 4 | (*(uint *)&gen_args[6]) & 0xf) << 10 |
             *puVar4 & 0x3ff) << 10 | uVar5;
  return (uint)(*(uint * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004d4bb0 */
GEN_FRAME uint GEN_THISCALL F_004d4bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d4bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004d4760(this GEN_EDX_FWD,0x14);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 2;
    puVar1[1] = *param_1;
    puVar1[2] = param_1[1];
    puVar1[3] = param_1[2];
    puVar1[4] = param_1[3];
    uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: FUN_004d4bf0 */
GEN_FRAME uint GEN_THISCALL F_004d4bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4d4bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte bVar1;
  undefined4 * puVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  puVar2 = (undefined4 *)F_004d4760(this GEN_EDX_FWD,0x54);
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 5;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[4] = param_4;
    puVar2[3] = param_3;
    puVar2[5] = param_5;
    puVar2[6] = param_6;
    bVar1 = F_004dc830(this GEN_EDX_ARG,puVar2 + 7);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_004d4810(this GEN_EDX_ARG,puVar2);
    }
  }
  return uVar3;
}

/* ref: FUN_004d4c50 */
GEN_FRAME uint GEN_THISCALL F_004d4c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4d4c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d4920(this GEN_EDX_FWD,param_1,0x1c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = F_004d4260(this GEN_EDX_ARG,param_2);
  if (uVar2 == 0) {
    return 0;
  }
  F_004d41c0((undefined *)(uVar1 + 4) GEN_EDX_ARG,param_4);
  *(undefined4 *)(uVar1 + 0x14) = param_2;
  *(uint *)(uVar1 + 0x18) = uVar2;
  F_004d42e0(this GEN_EDX_ARG,param_3,uVar1);
  return uVar2;
}

/* ref: FUN_004d4d00 */
GEN_FRAME uint GEN_THISCALL F_004d4d00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d4d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  int iVar8;
  uint * puVar9;
  uint uVar10;
  
  iVar8 = *(int *)((int)this + 0x70);
  (*(int *)(gen_frame + 0x60)) = *(int *)((int)this + 0x5c);
  this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = this;
  (*(uint *)(gen_frame + 0x48)) = *(uint *)((int)this + 0x6c);
  (*(int *)(gen_frame + 0x44)) = iVar8;
  puVar2 = (uint *)F_004d6a30(this_00 GEN_EDX_FWD,0,0,2);
  uVar5 = *(uint *)(REFG(int, 0x1370b90) + 0x90);
  uVar10 = *(uint *)(REFG(int, 0x1370b90) + 0x94);
  uVar3 = *(uint *)((int)this + 0x54) >> 2;
  (*(uint *)(gen_frame + 0x58)) = uVar3;
  (*(uint *)(gen_frame + 0x5c)) = *(uint *)((int)this + 0x78);
  uVar4 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x4c)) = puVar2;
  (*(uint * PTR32 *)(gen_frame + 0x64)) = puVar2;
  (*(uint *)(gen_frame + 0x68)) = 0;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  (*(uint *)(gen_frame + 0x1c)) = uVar10;
  (*(uint *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar5;
  (*(uint *)(gen_frame + 0x2c)) = uVar10;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x38)) = uVar5;
  (*(uint *)(gen_frame + 0x3c)) = uVar10;
  if (puVar2 != (uint *)0x0) {
    (*(uint *)(gen_frame + 0x54)) = 0;
    if ((*(int *)(gen_frame + 0x44)) != 0) {
      (*(int * PTR32 *)(gen_frame + 0x50)) = (int *)((*(uint *)(gen_frame + 0x48)) + 4);
      do {
        puVar6 = (uint *)*(*(int * PTR32 *)(gen_frame + 0x50));
        if (puVar6 != (uint *)0x0) {
          uVar5 = *puVar6 & 0xf0;
          (*(uint *)(gen_frame + 0x48)) = uVar5;
          puVar9 = (uint *)0x0;
          if ((uVar5 != 0) &&
             ((((puVar9 = puVar6, (*(uint *)(gen_frame + 0x54)) != uVar5 || ((*(uint *)(gen_frame + 0x30)) != (*(uint *)(gen_frame + 0x20)))) ||
               ((*(uint *)(gen_frame + 0x34)) != (*(uint *)(gen_frame + 0x24)))) ||
              ((((*(uint *)(gen_frame + 0x38)) != (*(uint *)(gen_frame + 0x28)) || ((*(uint *)(gen_frame + 0x3c)) != (*(uint *)(gen_frame + 0x2c)))) ||
               (bVar1 = F_004d48c0(puVar6 + 1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0))), uVar3 = (*(uint *)(gen_frame + 0x58)), bVar1 != 0)))))) {
            F_004d28f0((*(undefined * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x54)),(int)puVar2 - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x4c))) >> 2,(*(uint *)(gen_frame + 0x68)),
                         (int)(*(uint * PTR32 *)(gen_frame + 0x4c)) - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x64))) >> 2,&(*(uint *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x0)));
            (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x30));
            (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x34));
            (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x48));
            (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x3c));
            (*(uint * PTR32 *)(gen_frame + 0x4c)) = puVar2;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x38));
            F_004d41c0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar6 + 1);
            uVar3 = (*(uint *)(gen_frame + 0x58));
          }
          switch((unsigned int)(uintptr_t)(*puVar6)) {
          case 2: ;
            if (puVar6[1] == 0) {
              (*(uint *)(gen_frame + 0x30)) = 0;
              (*(uint *)(gen_frame + 0x34)) = 0;
              (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x18));
              (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x1c));
            }
            else {
              (*(uint *)(gen_frame + 0x30)) = puVar6[2];
              (*(uint *)(gen_frame + 0x34)) = puVar6[3];
              (*(uint *)(gen_frame + 0x38)) = puVar6[4];
              (*(uint *)(gen_frame + 0x3c)) = puVar6[5];
            }
            break;
          case 0x10: ;
            uVar5 = (puVar9[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c));
            uVar4 = puVar9[5];
            (*(uint *)(gen_frame + 0x48)) = uVar5;
            if (((int)puVar2 - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x64))) >> 2) + uVar4 <= uVar3) {
              uVar10 = 0;
              if (uVar4 != 0) {
                do {
                  puVar2[uVar10] = uVar5;
                  uVar10 = uVar10 + 1;
                  uVar5 = uVar5 + 1;
                } while (uVar10 < uVar4);
                (*(uint *)(gen_frame + 0x48)) = uVar5;
              }
LAB_004d4eec: ;
              puVar2 = puVar2 + uVar4;
LAB_004d508e: ;
              puVar6 = &(*(uint *)(gen_frame + 0x68));
              if ((*(uint *)(gen_frame + 0x68)) <= (*(uint *)(gen_frame + 0x48))) {
                puVar6 = &(*(uint *)(gen_frame + 0x48));
              }
              (*(uint *)(gen_frame + 0x68)) = *puVar6;
            }
            break;
          case 0x11: ;
            uVar10 = puVar9[5];
            uVar5 = (puVar9[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c)) + 1;
            (*(uint *)(gen_frame + 0x48)) = uVar5;
            if (((int)puVar2 - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x64))) >> 2) + uVar10 * 2 <= uVar3) {
              if (1 < uVar10) {
                iVar8 = uVar10 - 1;
                do {
                  puVar2[1] = uVar5;
                  *puVar2 = uVar5 - 1;
                  uVar5 = uVar5 + 1;
                  puVar2 = puVar2 + 2;
                  iVar8 = iVar8 - 1;
                } while (iVar8 != 0);
LAB_004d508b: ;
                (*(uint *)(gen_frame + 0x48)) = uVar5;
              }
              goto LAB_004d508e;
            }
            break;
          case 0x20: ;
            uVar10 = (puVar9[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c));
            uVar5 = puVar9[5];
            (*(uint *)(gen_frame + 0x48)) = uVar10;
            if (((int)puVar2 - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x64))) >> 2) + uVar5 <= uVar3) {
              uVar7 = 0;
              uVar4 = 0;
              if (uVar5 == 0) goto LAB_004d4eec;
              do {
                puVar2[uVar7] = uVar10;
                uVar7 = uVar7 + 1;
                uVar10 = uVar10 + 1;
              } while (uVar7 < uVar5);
              (*(uint *)(gen_frame + 0x48)) = uVar10;
              puVar2 = puVar2 + uVar5;
              goto LAB_004d508e;
            }
            break;
          case 0x21: ;
            uVar10 = puVar9[5];
            uVar5 = (puVar9[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c)) + 2;
            (*(uint *)(gen_frame + 0x48)) = uVar5;
            if (((int)puVar2 - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x64))) >> 2) + uVar10 * 3 <= uVar3) {
              uVar4 = 2;
              if (2 < uVar10) {
                do {
                  *puVar2 = ((uVar4 & 1) - 2) + uVar5;
                  puVar2[2] = uVar5;
                  puVar2[1] = (uVar5 - (uVar4 & 1)) - 1;
                  uVar4 = uVar4 + 1;
                  uVar5 = uVar5 + 1;
                  puVar2 = puVar2 + 3;
                  uVar3 = (*(uint *)(gen_frame + 0x58));
                } while (uVar4 < uVar10);
                goto LAB_004d508b;
              }
              goto LAB_004d508e;
            }
            break;
          case 0x22: ;
            uVar5 = (puVar9[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c));
            uVar10 = puVar9[5] >> 2;
            (*(uint *)(gen_frame + 0x48)) = uVar5;
            if (((int)puVar2 - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x64))) >> 2) + uVar10 * 6 <= uVar3) {
              if (uVar10 != 0) {
                uVar4 = uVar5 + 2;
                do {
                  puVar2[1] = uVar4 - 1;
                  *puVar2 = uVar5;
                  puVar2[2] = uVar4;
                  puVar2[3] = uVar5;
                  puVar2[4] = uVar4;
                  puVar2[5] = uVar4 + 1;
                  uVar5 = uVar5 + 4;
                  uVar4 = uVar4 + 4;
                  puVar2 = puVar2 + 6;
                  uVar10 = uVar10 - 1;
                  uVar3 = (*(uint *)(gen_frame + 0x58));
                } while (uVar10 != 0);
                goto LAB_004d508b;
              }
              goto LAB_004d508e;
            }
            break;
          case 0x23: ;
            uVar5 = (puVar9[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c));
            uVar10 = puVar9[5] >> 1;
            (*(uint *)(gen_frame + 0x48)) = uVar5;
            if (((int)puVar2 - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x64))) >> 2) + uVar10 * 6 <= uVar3) {
              if (1 < uVar10) {
                uVar4 = uVar5 + 3;
                iVar8 = uVar10 - 1;
                do {
                  puVar2[1] = uVar4 - 2;
                  *puVar2 = uVar5;
                  puVar2[2] = uVar4;
                  puVar2[3] = uVar5;
                  puVar2[4] = uVar4;
                  puVar2[5] = uVar4 - 1;
                  uVar5 = uVar5 + 2;
                  uVar4 = uVar4 + 2;
                  puVar2 = puVar2 + 6;
                  iVar8 = iVar8 - 1;
                  uVar3 = (*(uint *)(gen_frame + 0x58));
                } while (iVar8 != 0);
                goto LAB_004d508b;
              }
              goto LAB_004d508e;
            }
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x50)) = (*(int * PTR32 *)(gen_frame + 0x50)) + 2;
        iVar8 = (*(int *)(gen_frame + 0x44)) - 1;
        (*(int *)(gen_frame + 0x44)) = iVar8;
        this = (*(undefined * PTR32 *)(gen_frame + 0x40));
      } while (iVar8 != 0);
    }
    F_004d28f0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x54)),(int)puVar2 - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x4c))) >> 2,(*(uint *)(gen_frame + 0x68)),
                 (int)(*(uint * PTR32 *)(gen_frame + 0x4c)) - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x64))) >> 2,&(*(uint *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x0)));
    uVar4 = F_004d6ae0(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
  }
  return uVar4;
}

/* ref: FUN_004d5130 */
GEN_FRAME uint GEN_THISCALL F_004d5130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d5130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  short sVar2;
  byte bVar3;
  short * psVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  uint uVar8;
  int iVar9;
  uint * puVar10;
  
  (*(int *)(gen_frame + 0x60)) = *(int *)((int)this + 0x5c);
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this;
  (*(int * PTR32 *)(gen_frame + 0x50)) = *(int * PTR32 *)((int)this + 0x6c);
  (*(int *)(gen_frame + 0x48)) = *(int *)((int)this + 0x70);
  psVar4 = (short *)F_004d6a30(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,0,0,2);
  uVar5 = *(uint *)(REFG(int, 0x1370b90) + 0x90);
  uVar8 = *(uint *)(REFG(int, 0x1370b90) + 0x94);
  (*(uint *)(gen_frame + 0x58)) = *(uint *)((int)this + 0x54) >> 1;
  (*(uint *)(gen_frame + 0x5c)) = *(uint *)((int)this + 0x78);
  (*(uint *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(short * PTR32 *)(gen_frame + 0x4c)) = psVar4;
  (*(short * PTR32 *)(gen_frame + 0x64)) = psVar4;
  (*(uint *)(gen_frame + 0x68)) = 0;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  (*(uint *)(gen_frame + 0x1c)) = uVar8;
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar5;
  (*(uint *)(gen_frame + 0x2c)) = uVar8;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x38)) = uVar5;
  (*(uint *)(gen_frame + 0x3c)) = uVar8;
  if (psVar4 != (short *)0x0) {
    (*(uint *)(gen_frame + 0x54)) = 0;
    if ((*(int *)(gen_frame + 0x48)) != 0) {
      (*(int * PTR32 *)(gen_frame + 0x50)) = (*(int * PTR32 *)(gen_frame + 0x50)) + 1;
      do {
        puVar7 = (uint *)*(*(int * PTR32 *)(gen_frame + 0x50));
        if (puVar7 != (uint *)0x0) {
          uVar5 = *puVar7 & 0xf0;
          (*(uint *)(gen_frame + 0x40)) = uVar5;
          puVar10 = (uint *)0x0;
          if ((uVar5 != 0) &&
             ((((puVar10 = puVar7, (*(uint *)(gen_frame + 0x54)) != uVar5 || ((*(uint *)(gen_frame + 0x30)) != (*(uint *)(gen_frame + 0x20)))) ||
               ((*(uint *)(gen_frame + 0x34)) != (*(uint *)(gen_frame + 0x24)))) ||
              ((((*(uint *)(gen_frame + 0x38)) != (*(uint *)(gen_frame + 0x28)) || ((*(uint *)(gen_frame + 0x3c)) != (*(uint *)(gen_frame + 0x2c)))) ||
               (bVar3 = F_004d48c0(puVar7 + 1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0))), bVar3 != 0)))))) {
            F_004d28f0((*(undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x54)),(int)psVar4 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x4c))) >> 1,(*(uint *)(gen_frame + 0x68)),
                         (int)(*(short * PTR32 *)(gen_frame + 0x4c)) - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x64))) >> 1,&(*(uint *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x0)));
            (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x30));
            (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x34));
            (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x40));
            (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x3c));
            (*(short * PTR32 *)(gen_frame + 0x4c)) = psVar4;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x38));
            F_004d41c0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar7 + 1);
          }
          switch((unsigned int)(uintptr_t)(*puVar7)) {
          case 2: ;
            if (puVar7[1] == 0) {
              (*(uint *)(gen_frame + 0x30)) = 0;
              (*(uint *)(gen_frame + 0x34)) = 0;
              (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x18));
              (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x1c));
            }
            else {
              (*(uint *)(gen_frame + 0x30)) = puVar7[2];
              (*(uint *)(gen_frame + 0x34)) = puVar7[3];
              (*(uint *)(gen_frame + 0x38)) = puVar7[4];
              (*(uint *)(gen_frame + 0x3c)) = puVar7[5];
            }
            break;
          case 0x10: ;
            uVar8 = puVar10[5];
            uVar5 = (puVar10[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c)) & 0xffff;
            if (((int)psVar4 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x64))) >> 1) + uVar8 <= (*(uint *)(gen_frame + 0x58))) {
              uVar6 = 0;
              if (uVar8 != 0) {
                do {
                  psVar4[uVar6] = (short)uVar5;
                  uVar6 = uVar6 + 1;
                  uVar5 = uVar5 + 1;
                } while (uVar6 < uVar8);
              }
LAB_004d530e: ;
              psVar4 = psVar4 + uVar8;
LAB_004d5314: ;
              (*(uint *)(gen_frame + 0x40)) = uVar5 & 0xffff;
              puVar7 = &(*(uint *)(gen_frame + 0x68));
              if ((*(uint *)(gen_frame + 0x68)) <= (uVar5 & 0xffff)) {
                puVar7 = &(*(uint *)(gen_frame + 0x40));
              }
LAB_004d5322: ;
              (*(uint *)(gen_frame + 0x68)) = *puVar7;
            }
            break;
          case 0x11: ;
            uVar5 = puVar10[5];
            uVar8 = (puVar10[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c)) + 1 & 0xffff;
            if (((int)psVar4 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x64))) >> 1) + uVar5 * 2 <= (*(uint *)(gen_frame + 0x58))) {
              if (1 < uVar5) {
                iVar9 = uVar5 - 1;
                do {
                  psVar4[1] = (short)uVar8;
                  *psVar4 = (short)uVar8 - 1;
                  uVar8 = uVar8 + 1;
                  psVar4 = psVar4 + 2;
                  iVar9 = iVar9 - 1;
                } while (iVar9 != 0);
              }
              uVar8 = uVar8 & 0xffff;
              (*(uint *)(gen_frame + 0x40)) = uVar8;
              puVar7 = &(*(uint *)(gen_frame + 0x68));
              if (uVar8 < (*(uint *)(gen_frame + 0x68))) goto LAB_004d5322;
              (*(uint *)(gen_frame + 0x68)) = uVar8;
            }
            break;
          case 0x20: ;
            uVar8 = puVar10[5];
            uVar5 = (puVar10[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c)) & 0xffff;
            if (((int)psVar4 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x64))) >> 1) + uVar8 <= (*(uint *)(gen_frame + 0x58))) {
              uVar6 = 0;
              if (uVar8 != 0) {
                do {
                  psVar4[uVar6] = (short)uVar5;
                  uVar6 = uVar6 + 1;
                  uVar5 = uVar5 + 1;
                } while (uVar6 < uVar8);
              }
              goto LAB_004d530e;
            }
            break;
          case 0x21: ;
            uVar8 = puVar10[5];
            uVar5 = (puVar10[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c)) + 2 & 0xffff;
            if (((int)psVar4 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x64))) >> 1) + uVar8 * 3 <= (*(uint *)(gen_frame + 0x58))) {
              uVar6 = 2;
              if (2 < uVar8) {
                do {
                  uVar1 = (ushort)uVar6 & 1;
                  sVar2 = (short)uVar5;
                  *psVar4 = sVar2 - 2 + uVar1;
                  psVar4[2] = sVar2;
                  psVar4[1] = (sVar2 - uVar1) - 1;
                  uVar6 = uVar6 + 1;
                  uVar5 = uVar5 + 1;
                  psVar4 = psVar4 + 3;
                } while (uVar6 < uVar8);
              }
              goto LAB_004d5314;
            }
            break;
          case 0x22: ;
            uVar8 = puVar10[5] >> 2;
            uVar5 = (puVar10[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c)) & 0xffff;
            if (((int)psVar4 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x64))) >> 1) + uVar8 * 6 <= (*(uint *)(gen_frame + 0x58))) {
              if (uVar8 != 0) {
                uVar6 = uVar5 + 2 & 0xffff;
                do {
                  sVar2 = (short)uVar6;
                  psVar4[1] = sVar2 - 1;
                  *psVar4 = (short)uVar5;
                  psVar4[2] = sVar2;
                  psVar4[3] = (short)uVar5;
                  psVar4[4] = sVar2;
                  psVar4[5] = sVar2 + 1;
                  uVar5 = uVar5 + 4;
                  uVar6 = uVar6 + 4;
                  psVar4 = psVar4 + 6;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              goto LAB_004d5314;
            }
            break;
          case 0x23: ;
            uVar8 = puVar10[5] >> 1;
            uVar5 = (puVar10[6] - (*(int *)(gen_frame + 0x60))) / (*(uint *)(gen_frame + 0x5c)) & 0xffff;
            if (((int)psVar4 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x64))) >> 1) + uVar8 * 6 <= (*(uint *)(gen_frame + 0x58))) {
              if (1 < uVar8) {
                uVar6 = uVar5 + 3 & 0xffff;
                iVar9 = uVar8 - 1;
                do {
                  sVar2 = (short)uVar6;
                  psVar4[1] = sVar2 - 2;
                  *psVar4 = (short)uVar5;
                  psVar4[2] = sVar2;
                  psVar4[3] = (short)uVar5;
                  psVar4[4] = sVar2;
                  psVar4[5] = sVar2 - 1;
                  uVar5 = uVar5 + 2;
                  uVar6 = uVar6 + 2;
                  psVar4 = psVar4 + 6;
                  iVar9 = iVar9 - 1;
                } while (iVar9 != 0);
              }
              (*(uint *)(gen_frame + 0x40)) = uVar5 & 0xffff;
              puVar7 = &(*(uint *)(gen_frame + 0x68));
              if ((*(uint *)(gen_frame + 0x68)) <= (uVar5 & 0xffff)) {
                puVar7 = &(*(uint *)(gen_frame + 0x40));
              }
              (*(uint *)(gen_frame + 0x68)) = *puVar7;
            }
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x50)) = (*(int * PTR32 *)(gen_frame + 0x50)) + 2;
        iVar9 = (*(int *)(gen_frame + 0x48)) - 1;
        (*(int *)(gen_frame + 0x48)) = iVar9;
        this = (*(undefined * PTR32 *)(gen_frame + 0x44));
      } while (iVar9 != 0);
    }
    F_004d28f0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x54)),(int)psVar4 - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x4c))) >> 1,(*(uint *)(gen_frame + 0x68)),
                 (int)(*(short * PTR32 *)(gen_frame + 0x4c)) - (int)((int)(uintptr_t)(*(short * PTR32 *)(gen_frame + 0x64))) >> 1,&(*(uint *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x0)));
    uVar8 = F_004d6ae0(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
  }
  return uVar8;
}

/* ref: FUN_004d5590 */
GEN_FRAME uint GEN_STDCALL F_004d5590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d5590u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  uVar1 = F_004134a0(*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a0))),(*(undefined4 *)&gen_args[0]),
                       5,&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_004d55d0 */
GEN_FRAME uint GEN_STDCALL F_004d55d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4d55d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  
  uVar1 = F_004136d0(*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a0))),(*(undefined4 *)&gen_args[0]),
                       5,&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
  return uVar1;
}

/* ref: FUN_004d5660 */
GEN_FRAME byte F_004d5660(unsigned int gen_a0)
{
  GEN_ENTER(0x4d5660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x12: ;
    return 9;
  case 0x14: ;
    return 10;
  case 0x21: ;
    return 0;
  case 0x22: ;
    return 1;
  case 0x23: ;
    return 2;
  case 0x24: ;
    return 3;
  case 0x32: ;
    return 0xf;
  case 0x34: ;
    return 0x10;
  case 0x44: ;
    return 8;
  case 0x52: ;
    return 6;
  case 0x54: ;
    return 7;
  case 0x74: ;
    bVar1 = 5;
  }
  return bVar1;
}

/* ref: FUN_004d5770 */
GEN_FRAME byte F_004d5770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d5770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    *param_2 = 0;
    *param_3 = 0;
    return 1;
  case 1: ;
    *param_2 = 1;
    *param_3 = 0;
    return 1;
  case 2: ;
    *param_2 = 3;
    *param_3 = 0;
    return 1;
  case 3: ;
    *param_2 = 10;
    *param_3 = 0;
    return 1;
  case 4: ;
    *param_2 = 10;
    *param_3 = 1;
    return 1;
  case 5: ;
    *param_2 = 0xb;
    *param_3 = 0;
    return 1;
  case 6: ;
    *param_2 = 4;
    *param_3 = 0;
    return 1;
  case 7: ;
    *param_2 = 2;
    *param_3 = 0;
    return 1;
  case 8: ;
    *param_2 = 5;
    *param_3 = 0;
    return 1;
  case 9: ;
    *param_2 = 5;
    *param_3 = 1;
    return 1;
  case 10: ;
    *param_2 = 5;
    *param_3 = 2;
    return 1;
  case 0xb: ;
    *param_2 = 5;
    *param_3 = 3;
    return 1;
  case 0xc: ;
    *param_2 = 5;
    *param_3 = 4;
    return 1;
  case 0xd: ;
    *param_2 = 5;
    *param_3 = 5;
    return 1;
  case 0xe: ;
    *param_2 = 6;
    *param_3 = 0;
    return 1;
  case 0xf: ;
    *param_2 = 7;
    *param_3 = 0;
    return 1;
  case 0x10: ;
    *param_2 = 0xc;
    *param_3 = 0;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_004d58e0 */
GEN_FRAME uint GEN_THISCALL F_004d58e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4d58e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  *(undefined1 *)((int)this + 2) = (undefined1)param_3;
  *(undefined1 *)((int)this + 3) = (undefined1)param_4;
  return (uint)this;
}

/* ref: FUN_004d5900 */
GEN_NOFRAME uint GEN_THISCALL F_004d5900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d5900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_004d5910 */
GEN_NOFRAME uint GEN_THISCALL F_004d5910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d5910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: FUN_004d5920 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d5920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d5920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  if (*(uint *)((int)this + 0x14) != 0) {
    do {
      iVar1 = uVar2 * 8;
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 | 1 << (*((byte *)GEN_TOP((*(int *)((int)this + 0x18) + iVar1))) & 0x1f);
    } while (uVar2 < *(uint *)((int)this + 0x14));
  }
  *(uint *)((int)this + 0x1c) = uVar3;
  return 0;
}

/* ref: FUN_004d5950 */
GEN_FRAME byte GEN_THISCALL F_004d5950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d5950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((param_3 >> 6 & 1) + (param_3 >> 3 & 1) + (param_3 >> 2 & 1) + (param_3 >> 1 & 1) +
      (param_3 & 1) < 2) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x48))(param_1 GEN_EDX_FWD,0,&(*(int * PTR32 *)(gen_frame + 0x4)));
    if (-1 < (int)uVar1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      *(undefined4 *)((int)this + 0x18) = (*(undefined4 *)(gen_frame + 0x20));
      *(undefined4 *)((int)this + 0x1c) = (*(undefined4 *)(gen_frame + 0x24));
      *(undefined4 *)((int)this + 0x20) = 1;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG);
      *(char *)((int)this + 0x24) = (char)uVar1;
      *(undefined2 *)((int)this + 0x25) = 0;
      *(undefined4 *)((int)this + 0x28) = param_2;
      *(uint *)((int)this + 0x2c) = param_3 | 0x800008;
      *(int * PTR32 *)((int)this + 0x30) = param_1;
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
      if ((*(uint *)((int)this + 0x2c) & 0x300000) != 0) {
        *(int * PTR32 *)((int)this + 0x34) = (*(int * PTR32 *)(gen_frame + 0x4));
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 4))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
      if ((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_004d5a50 */
GEN_FRAME uint GEN_THISCALL F_004d5a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4d5a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte * param_3 = (byte *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (*(int *)((int)this + 0x30) != 0) {
    uVar3 = 0;
    if ((*(uint *)((int)this + 0x2c) & 1) == 0) {
      if (param_4 == 1) {
        uVar3 = 0x10;
      }
    }
    else {
      uVar3 = 0x1000;
    }
    uVar4 = *(uint *)((int)this + 0x2c) & 0x3c00000;
    if (uVar4 == 0x800000) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x4c))))
                        (*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,param_1,((byte *)(gen_frame + 0x18)),0,uVar3);
    }
    else if (uVar4 == 0x1000000) {
      (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x18);
      piVar1 = *(int * PTR32 *)((int)this + 0x30);
      (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)((int)this + 0x1c);
      (*(int *)(gen_frame + 0x30)) = param_2;
      (*(int *)(gen_frame + 0x34)) = param_2 + 1;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,param_1,((byte *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x20)),uVar3);
      ((byte *)(gen_frame + 0x18))[0] = ((byte *)(gen_frame + 0xc))[0];
      ((byte *)(gen_frame + 0x18))[1] = ((byte *)(gen_frame + 0xc))[1];
      ((byte *)(gen_frame + 0x18))[2] = ((byte *)(gen_frame + 0xc))[2];
      ((byte *)(gen_frame + 0x18))[3] = ((byte *)(gen_frame + 0xc))[3];
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = ((byte *)(gen_frame + 0xc))[8];
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 1)) = ((byte *)(gen_frame + 0xc))[9];
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = ((byte *)(gen_frame + 0xc))[10];
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 3)) = ((byte *)(gen_frame + 0xc))[0xb];
    }
    else {
      uVar2 = (*(uint *)(gen_frame + 0x1c));
      if (uVar4 == 0x2000000) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x4c))))
                          (*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,param_2,param_1,((byte *)(gen_frame + 0x18)),0,uVar3);
      }
    }
    if (-1 < (int)uVar2) {
      *(undefined4 *)(param_3) = *(undefined4 *)((byte *)(gen_frame + 0x18));
      uVar4 = (*(uint *)(gen_frame + 0x1c));
      *(uint *)(param_3 + 8) = (*(uint *)(gen_frame + 0x1c));
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_004d5b60 */
GEN_FRAME unsigned int GEN_THISCALL F_004d5b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d5b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x30) != 0) {
    uVar1 = *(uint *)((int)this + 0x2c) & 0x3c00000;
    if ((uVar1 == 0x800000) || (uVar1 == 0x1000000)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x50))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_FWD,param_1);
    }
    else if (uVar1 == 0x2000000) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x50))))
                (*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,param_2,param_1);
      return;
    }
  }
  return;
}

/* ref: FUN_004d5bb0 */
GEN_FRAME uint GEN_THISCALL F_004d5bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4d5bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 uVar2;
  
  if (((*(uint *)((int)this + 0x2c) & 0x3c00000) == 0x2000000) && (*(int *)((int)this + 0x30) != 0))
  {
    uVar2 = 0;
    if ((*(uint *)((int)this + 0x2c) & 1) == 0) {
      if (param_4 == 1) {
        uVar2 = 0x10;
      }
    }
    else {
      uVar2 = 0x1000;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x4c))))
                      (*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,param_2,param_1,&(*(undefined4 *)(gen_frame + 0x4)),0,uVar2);
    if (-1 < (int)uVar1) {
      *param_3 = (*(undefined4 *)(gen_frame + 0x4));
      param_3[1] = 0;
      param_3[2] = (*(uint *)(gen_frame + 0x8));
      return (*(uint *)(gen_frame + 0x8));
    }
  }
  return 0;
}

/* ref: FUN_004d5c30 */
GEN_FRAME uint GEN_THISCALL F_004d5c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d5c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x2c) & 0x3c00000;
  if ((uVar1 == 0x2000000) && (*(int *)((int)this + 0x30) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x50))))
                      (*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,param_2,param_1);
  }
  return uVar1;
}

/* ref: FUN_004d5c60 */
GEN_FRAME uint F_004d5c60(unsigned int gen_a0)
{
  GEN_ENTER(0x4d5c60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return 1 << ((byte)(param_1 >> 4) & 0xf);
}

/* ref: FUN_004d5c80 */
GEN_FRAME byte GEN_THISCALL F_004d5c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d5c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x30))(param_1 GEN_EDX_FWD,((byte *)(gen_frame + 0x8)));
  *(undefined4 *)((int)this + 0x18) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24));
  *(undefined4 *)((int)this + 0x1c) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28));
  if (param_2 != 0) {
    *(int *)((int)this + 0x28) = param_2;
  }
  *(int * PTR32 *)((int)this + 0x34) = param_1;
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004d5d40 */
GEN_NOFRAME uint GEN_THISCALL F_004d5d40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d5d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return uVar2;
}

/* ref: FUN_004d5d60 */
GEN_FRAME unsigned int GEN_THISCALL F_004d5d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d5d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x1c) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x18))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_004d5d80 */
GEN_NOFRAME uint GEN_THISCALL F_004d5d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d5d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar2;
}

/* ref: FUN_004d5dd0 */
GEN_FRAME unsigned int GEN_THISCALL F_004d5dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4d5dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  int local_8;
  
  iVar2 = param_4;
  if (param_3 < param_4) {
    if (param_4 - param_3 < 7) {
      *(undefined4 *)(param_1 + param_3 * 8) = *(undefined4 *)((int)param_2 + param_3 * 8);
      *(undefined4 *)(param_1 + 4 + param_3 * 8) = *(undefined4 *)((int)param_2 + 4 + param_3 * 8);
      iVar2 = param_3 + 1;
      if (iVar2 <= param_4) {
        puVar1 = (uint *)((int)param_2 + iVar2 * 8);
        puVar3 = (uint *)(param_1 - 8 + iVar2 * 8);
        param_2 = puVar3;
        iVar4 = iVar2;
        do {
          for (; (param_3 < iVar2 && (*puVar1 < *puVar3)); puVar3 = puVar3 - 2) {
            puVar3[2] = *puVar3;
            puVar3[3] = puVar3[1];
            iVar2 = iVar2 - 1;
          }
          puVar3 = param_2 + 2;
          *(uint *)(param_1 + iVar2 * 8) = *puVar1;
          *(uint *)(param_1 + 4 + iVar2 * 8) = puVar1[1];
          iVar2 = iVar4 + 1;
          puVar1 = puVar1 + 2;
          param_2 = puVar3;
          iVar4 = iVar2;
        } while (iVar2 <= param_4);
        return;
      }
    }
    else {
      iVar6 = param_3 + param_4 >> 1;
      F_004d5dd0(this GEN_EDX_FWD,(int)param_2,(uint *)param_1,param_3,iVar6);
      iVar4 = iVar6 + 1;
      F_004d5dd0(this GEN_EDX_ARG,(int)param_2,(uint *)param_1,iVar4,param_4);
      puVar1 = (uint *)(param_1 + param_3 * 8);
      local_8 = param_3;
      puVar3 = (uint *)((int)param_2 + iVar4 * 8);
      puVar7 = (uint *)((int)param_2 + param_3 * 8);
      param_4 = iVar4;
      while ((iVar4 = param_4, param_3 <= iVar6 && (iVar4 = param_3, param_4 <= iVar2))) {
        if (*puVar3 < *puVar7) {
          param_4 = param_4 + 1;
          *puVar1 = *puVar3;
          uVar5 = puVar3[1];
          puVar3 = puVar3 + 2;
        }
        else {
          param_3 = param_3 + 1;
          *puVar1 = *puVar7;
          uVar5 = puVar7[1];
          puVar7 = puVar7 + 2;
        }
        puVar1[1] = uVar5;
        local_8 = local_8 + 1;
        puVar1 = puVar1 + 2;
        if (iVar2 < local_8) {
          return;
        }
      }
      F_00c46aa0(param_1 + local_8 * 8,(int)param_2 + iVar4 * 8,(iVar2 - local_8) * 8 + 8);
    }
  }
  return;
}

/* ref: FUN_004d5f50 */
GEN_FRAME byte GEN_THISCALL F_004d5f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4d5f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x5a0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x598)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x59c);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x14))))(*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_FWD,param_1,0,((byte *)(gen_frame + 0xc)));
  *(undefined4 *)((int)this + 0x48) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 1068));
  *(undefined4 *)((int)this + 0x44) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 1064));
  *(undefined4 *)((int)this + 0x34) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x20))))(*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x588)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x594)),1,1,0x4c4c554e);
  if (-1 < (int)uVar1) {
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x594)),2,3,0x5a574152);
  if (-1 < (int)uVar1) {
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 2;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x594)),2,3,0x5a544e49);
  if (-1 < (int)uVar1) {
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 4;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x594)),2,3,0x4d);
  if (-1 < (int)uVar1) {
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 8;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x594)),2,3,0x34324644);
  if (-1 < (int)uVar1) {
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 0x10;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x594)),0x100000,3,0x72);
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x28))))
                      (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x594)),0x100000,3,0x74);
    if (-1 < (int)uVar1) {
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 0x20;
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x594)),0,4,0x31545844);
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x28))))
                      (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x594)),0,4,0x33545844);
    if (-1 < (int)uVar1) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x28))))
                        (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,(*(undefined4 *)(gen_frame + 0x594)),0,4,0x35545844);
      if (-1 < (int)uVar1) {
        *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 0x40;
      }
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x38))))
                    (*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,param_1,param_2,((undefined1 *)(gen_frame + 0x458)));
  if (-1 < (int)uVar1) {
    uVar1 = (uint)(*(byte *)(gen_frame + 0x46c));
    if (((*(byte *)(gen_frame + 0x46c)) & 2) != 0) {
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 0x80;
    }
    if (((*(byte *)(gen_frame + 0x46c)) & 4) != 0) {
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 0x100;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x598)) ^ (uint)(uint)(gen_frame + 0x59c) GEN_EDX_ARG);
  return (byte)uVar1;
}

/* ref: FUN_004d6140 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d6140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_timeGetTime();
  *(DWORD *)((int)this + 0xac) = DVar1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  return 0;
}

/* ref: FUN_004d6160 */
GEN_FRAME uint F_004d6160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4d6160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 2: ;
    return param_2 >> 1;
  default: ;
    return param_2;
  case 4: ;
    return param_2 - 1;
  case 5: ;
    return param_2 / 3;
  case 6: ;
    return param_2 - 2;
  }
}

/* ref: FUN_004d61c0 */
GEN_FRAME uint GEN_STDCALL F_004d61c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4d61c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (*(int *)(uVar1 + 0x1c) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x1c) + 0x18))))
                      (*(int * PTR32 *)(uVar1 + 0x1c) GEN_EDX_ARG,*(undefined4 *)(param_1 + 8));
  }
  return uVar1;
}

/* ref: FUN_004d61f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d61f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d61f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint * puVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 0x24) = 1;
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x2c) = 1;
  *(undefined4 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) & 0x7ffffff | 0x8000000;
  *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) & 0xfe00003f | 0x20;
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) | 0x80000000;
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfe00003f | 0x20;
  *(undefined4 *)((int)this + 0x34) = 1;
  *(undefined4 *)((int)this + 0x54) = 1;
  *(undefined4 *)((int)this + 0x58) = 1;
  *(undefined4 *)((int)this + 0x5c) = 1;
  puVar1 = (undefined4 *)((int)this + 100);
  iVar3 = 0xc;
  do {
    puVar1[-1] = 1;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0xc0) = 1;
  puVar1 = (undefined4 *)((int)this + 0xcc);
  iVar3 = 0xc;
  do {
    puVar1[-1] = 1;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x128) = 0x55555555;
  *(undefined4 *)((int)this + 0x130) = 1;
  *(undefined4 *)((int)this + 0x138) = 1;
  *(undefined4 *)((int)this + 0x140) = 1;
  *(undefined4 *)((int)this + 0x148) = 1;
  *(undefined4 *)((int)this + 0x150) = 1;
  *(undefined4 *)((int)this + 0x158) = 1;
  *(undefined4 *)((int)this + 0x160) = 1;
  *(undefined4 *)((int)this + 0x168) = 1;
  *(uint *)((int)this + 0x174) = *(uint *)((int)this + 0x174) & 0xfffffff | 0x10000000;
  *(uint *)((int)this + 0x17c) = *(uint *)((int)this + 0x17c) & 0xfffffff | 0x10000000;
  *(uint *)((int)this + 0x184) = *(uint *)((int)this + 0x184) & 0xfffffff | 0x10000000;
  *(uint *)((int)this + 0x18c) = *(uint *)((int)this + 0x18c) & 0xfffffff | 0x10000000;
  *(undefined4 *)((int)this + 0x170) = 1;
  *(undefined4 *)((int)this + 0x178) = 1;
  *(undefined4 *)((int)this + 0x180) = 1;
  *(undefined4 *)((int)this + 0x188) = 1;
  *(undefined4 *)((int)this + 400) = 0xf;
  puVar2 = (uint *)((int)this + 0x198);
  iVar3 = 4;
  do {
    *puVar2 = *puVar2 & 0xffffc3f | 0x10000380;
    puVar2[2] = puVar2[2] & 0xffffc3f | 0x10000380;
    puVar2[4] = puVar2[4] & 0xffffc3f | 0x10000380;
    puVar2[-1] = 1;
    puVar2[1] = 1;
    puVar2[3] = 1;
    puVar2[5] = 1;
    puVar2[6] = puVar2[6] & 0xffffc3f | 0x10000380;
    puVar2 = puVar2 + 8;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x214) = 0xffff;
  return 0;
}

/* ref: FUN_004d63c0 */
GEN_NOFRAME uint GEN_THISCALL F_004d63c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d63c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10969ec));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  F_00429f90(in_ecx + 0x12 GEN_EDX_FWD);
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0xc] = 2;
  return (uint)in_ecx;
}

/* ref: FUN_004d6410 */
GEN_NOFRAME uint GEN_THISCALL F_004d6410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    F_0050c620(*(int *)((int)this + 0xc),0,0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_004d6470 */
GEN_FRAME unsigned int GEN_THISCALL F_004d6470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d6470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((code *)*(gen_code32 *)((int)this + 0x250) != (code *)0x0) {
    *(undefined4 *)((int)this + 0x30) = param_1;
    ((code *)*(gen_code32 *)((int)this + 0x250))((undefined4 *)((int)this + 0x30));
  }
  return;
}

/* ref: FUN_004d64d0 */
GEN_FRAME byte GEN_THISCALL F_004d64d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d64d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 8),0,0);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (param_1 != 0) {
      do {
        *(undefined4 *)(uVar1 + uVar2 * 8) = 0;
        *(undefined4 *)(uVar1 + 4 + uVar2 * 8) = 0;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_1);
    }
    *(uint *)((int)this + 0x1c) = uVar1;
    *(uint *)((int)this + 0x20) = param_1;
    *(undefined4 *)((int)this + 0x24) = 0;
    return 1;
  }
  return 0;
}

/* ref: ATL::_ATL_WIN_MODULE70::~_ATL_WIN_MODULE70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d6540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x1c) != 0) {
    F_00406b30(*(int *)(this + 0x1c));
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return 0;
}

/* ref: FUN_004d6630 */
GEN_NOFRAME uint GEN_THISCALL F_004d6630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (REFG(void * PTR32, 0x1375a40) == (undefined *)0x0) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1375a40) + 4))) = this;
    *(undefined * PTR32 *)((int)this + 8) = REFG(void * PTR32, 0x1375a40);
  }
  *(undefined4 *)((int)this + 4) = 0;
  REFG(void * PTR32, 0x1375a40) = this;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  return (uint)this;
}

/* ref: FUN_004d6680 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004d6680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 4) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 8);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44)));
}

/* ref: FUN_004d6710 */
GEN_NOFRAME byte F_004d6710(void)
{
  GEN_ENTER(0x4d6710u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  bVar3 = 1;
  for (piVar1 = REFG(int * PTR32, 0x1375a40); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      bVar3 = 0;
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  return bVar3;
}

/* ref: FUN_004d67a0 */
GEN_NOFRAME byte F_004d67a0(void)
{
  GEN_ENTER(0x4d67a0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  bVar3 = 1;
  for (piVar1 = REFG(int * PTR32, 0x1375a40); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      bVar3 = 0;
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  return bVar3;
}

/* ref: FUN_004d67f0 */
GEN_NOFRAME uint GEN_THISCALL F_004d67f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d67f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00b1b490(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1096a24));
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004d6810 */
GEN_NOFRAME uint GEN_THISCALL F_004d6810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6810u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00b1b490(in_ecx GEN_EDX_FWD);
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1096a3c));
  return (uint)in_ecx;
}

/* ref: FUN_004d6830 */
GEN_NOFRAME uint GEN_THISCALL F_004d6830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  F_00b1b490(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a3c));
  puVar1 = (undefined4 *)((int)this + 0xc);
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (REFG(undefined4 * PTR32, 0x1375a40) == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(undefined4 * PTR32, 0x1375a40) + 4))) = puVar1;
    *(undefined4 * PTR32 *)((int)this + 0x14) = REFG(undefined4 * PTR32, 0x1375a40);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  REFG(undefined4 * PTR32, 0x1375a40) = puVar1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a6c));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a54));
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return (uint)this;
}

/* ref: FUN_004d68c0 */
GEN_FRAME uint GEN_THISCALL F_004d68c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d68c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (*(int *)&gen_args[2]);
  if ((*(int *)&gen_args[2]) == 0) {
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) - (*(int *)&gen_args[1]);
  }
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) < (uint)((*(int *)&gen_args[1]) + iVar4)) ||
     (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 3) != 0 && (((*(uint *)&gen_args[3]) & 1) != 0)))) {
    return 0;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + REFG(int, 0x1375a38) * 4 + 0x20))) != 0) {
    uVar3 = 0;
    if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 1) == 0) {
      if ((*(uint *)&gen_args[3]) == 1) {
        uVar3 = 0x10;
      }
    }
    else if (REFG(int, 0x1375a38) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      uVar3 = 0x1000;
    }
    else {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = REFG(int, 0x1375a38);
      uVar3 = 0x2000;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + REFG(int, 0x1375a38) * 4 + 0x20)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD,(*(int *)&gen_args[1]),iVar4,&(*(uint *)&gen_args[3]),uVar3);
    if (-1 < (int)uVar2) {
      _InterlockedExchangeAdd((volatile long *)((((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))))), (long)(1));
      return (*(uint *)&gen_args[3]);
    }
  }
  return 0;
}

/* ref: FUN_004d6970 */
GEN_NOFRAME uint GEN_THISCALL F_004d6970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = REFG(int * PTR32, 0x1375a38);
  if (*((int *)GEN_TOP(((int)this + (int)REFG(int * PTR32, 0x1375a38) * 4 + 0x20))) != 0) {
    piVar2 = (int *)((int)this + 0x2c);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), (long)(-1));
    if (iVar1 == 1) {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + (int)REFG(int * PTR32, 0x1375a38) * 4 + 0x20)));
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2 GEN_EDX_FWD)));
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_004d69a0 */
GEN_NOFRAME uint GEN_THISCALL F_004d69a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d69a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  F_00b1b490(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a3c));
  puVar1 = (undefined4 *)((int)this + 0xc);
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (REFG(undefined4 * PTR32, 0x1375a40) == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(undefined4 * PTR32, 0x1375a40) + 4))) = puVar1;
    *(undefined4 * PTR32 *)((int)this + 0x14) = REFG(undefined4 * PTR32, 0x1375a40);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  REFG(undefined4 * PTR32, 0x1375a40) = puVar1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a9c));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a84));
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: FUN_004d6a30 */
GEN_FRAME uint GEN_THISCALL F_004d6a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d6a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (*(int *)&gen_args[2]);
  if ((*(int *)&gen_args[2]) == 0) {
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) - (*(int *)&gen_args[1]);
  }
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) < (uint)((*(int *)&gen_args[1]) + iVar4)) ||
     (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) & 3) != 0 && (((*(uint *)&gen_args[3]) & 1) != 0)))) {
    return 0;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + REFG(int, 0x1375a38) * 4 + 0x24))) != 0) {
    uVar3 = 0;
    if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) & 1) == 0) {
      if ((*(uint *)&gen_args[3]) == 1) {
        uVar3 = 0x10;
      }
    }
    else if (REFG(int, 0x1375a38) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
      uVar3 = 0x1000;
    }
    else {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = REFG(int, 0x1375a38);
      uVar3 = 0x2000;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + REFG(int, 0x1375a38) * 4 + 0x24)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD,(*(int *)&gen_args[1]),iVar4,&(*(uint *)&gen_args[3]),uVar3);
    if (-1 < (int)uVar2) {
      _InterlockedExchangeAdd((volatile long *)((((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))))), (long)(1));
      return (*(uint *)&gen_args[3]);
    }
  }
  return 0;
}

/* ref: FUN_004d6ae0 */
GEN_NOFRAME uint GEN_THISCALL F_004d6ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = REFG(int * PTR32, 0x1375a38);
  if (*((int *)GEN_TOP(((int)this + (int)REFG(int * PTR32, 0x1375a38) * 4 + 0x24))) != 0) {
    piVar2 = (int *)((int)this + 0x30);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), (long)(-1));
    if (iVar1 == 1) {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + (int)REFG(int * PTR32, 0x1375a38) * 4 + 0x24)));
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2 GEN_EDX_FWD)));
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_004d6b10 */
GEN_NOFRAME uint GEN_THISCALL F_004d6b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6b10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00b1b490(in_ecx GEN_EDX_FWD);
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1096ab4));
  return (uint)in_ecx;
}

/* ref: FUN_004d6b40 */
GEN_NOFRAME uint GEN_THISCALL F_004d6b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6b40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00b1b490(in_ecx GEN_EDX_FWD);
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1096acc));
  return (uint)in_ecx;
}

/* ref: FUN_004d6b70 */
GEN_NOFRAME uint GEN_THISCALL F_004d6b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6b70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00b1b490(in_ecx GEN_EDX_FWD);
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1096ae4));
  return (uint)in_ecx;
}

/* ref: FUN_004d6ba0 */
GEN_FRAME unsigned int GEN_THISCALL F_004d6ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ushort * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort * puVar5;
  uint uVar6;
  ushort * puVar7;
  ushort uVar8;
  uint uVar9;
  
  uVar1 = *(uint *)((int)this + 0xc);
  puVar2 = *(ushort * PTR32 *)((int)this + 0x10);
  uVar9 = 1;
  puVar7 = puVar2;
  if (1 < uVar1) {
    do {
      uVar3 = *(undefined4 *)(puVar7 + 4);
      uVar4 = *(undefined4 *)(puVar7 + 6);
      uVar8 = (ushort)uVar3;
      puVar5 = puVar7;
      uVar6 = uVar9;
      if (uVar8 < *puVar7) {
        do {
          *(undefined4 *)(puVar5 + 4) = *(undefined4 *)puVar5;
          *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(puVar5 + 2);
          puVar5 = puVar5 - 4;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) break;
        } while (uVar8 < *puVar5);
        *(undefined4 *)(puVar2 + uVar6 * 4) = uVar3;
        *(undefined4 *)(puVar2 + uVar6 * 4 + 2) = uVar4;
      }
      uVar9 = uVar9 + 1;
      puVar7 = puVar7 + 4;
    } while (uVar9 < uVar1);
  }
  return 0;
}

/* ref: FUN_004d6c10 */
GEN_NOFRAME uint GEN_THISCALL F_004d6c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6c10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00b1b490(in_ecx GEN_EDX_FWD);
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1096afc));
  return (uint)in_ecx;
}

/* ref: FUN_004d6c50 */
GEN_NOFRAME uint GEN_THISCALL F_004d6c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6c50u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00b1b490(in_ecx GEN_EDX_FWD);
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1096b14));
  return (uint)in_ecx;
}

/* ref: FUN_004d6c80 */
GEN_NOFRAME uint GEN_THISCALL F_004d6c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  F_00b1b490(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a24));
  *(undefined4 *)((int)this + 8) = 0;
  puVar1 = (undefined4 *)((int)this + 0xc);
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (REFG(undefined4 * PTR32, 0x1375a40) == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(undefined4 * PTR32, 0x1375a40) + 4))) = puVar1;
    *(undefined4 * PTR32 *)((int)this + 0x14) = REFG(undefined4 * PTR32, 0x1375a40);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  REFG(undefined4 * PTR32, 0x1375a40) = puVar1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b44));
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096b2c));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x27) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: FUN_004d6d10 */
GEN_FRAME byte GEN_THISCALL F_004d6d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d6d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (1 < (param_3 >> 6 & 1) + (param_3 >> 3 & 1) + (param_3 >> 2 & 1) + (param_3 >> 1 & 1) +
          (param_3 & 1)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_FWD);
    return 0;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x30))(param_1 GEN_EDX_ARG,((byte *)(gen_frame + 0x8)));
  *(undefined4 *)((int)this + 0x18) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24));
  *(undefined4 *)((int)this + 0x1c) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28));
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined2 *)((int)this + 0x24) = 1;
  *(undefined1 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(uint *)((int)this + 0x2c) = param_3 & 0xfcbfffff | 0x900008;
  *(int * PTR32 *)((int)this + 0x34) = param_1;
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004d6dd0 */
GEN_FRAME uint GEN_THISCALL F_004d6dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d6dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)((int)this + 0x2c);
  if (((uVar2 & 0x3c00000) == 0x800000) && (*(int *)((int)this + 0x30) != 0)) {
    uVar3 = 0;
    if ((uVar2 & 1) == 0) {
      if (param_3 == 1) {
        uVar3 = 0x10;
      }
    }
    else {
      uVar3 = 0x1000;
    }
    if ((uVar2 & 0x100010) == 0x100010) {
      piVar1 = *(int * PTR32 *)((int)this + REFG(int, 0x1375a38) * 4 + 0x38);
    }
    else {
      piVar1 = *(int * PTR32 *)((int)this + 0x30);
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,param_1,&(*(undefined4 *)(gen_frame + 0x4)),0,uVar3);
    if (-1 < (int)uVar2) {
      *param_2 = (*(undefined4 *)(gen_frame + 0x4));
      param_2[1] = 0;
      param_2[2] = (*(uint *)(gen_frame + 0x8));
      return (*(uint *)(gen_frame + 0x8));
    }
  }
  return 0;
}

/* ref: FUN_004d6e60 */
GEN_FRAME uint GEN_THISCALL F_004d6e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d6e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x2c);
  if (((uVar2 & 0x3c00000) == 0x800000) && (*(int *)((int)this + 0x30) != 0)) {
    if ((uVar2 & 0x100010) == 0x100010) {
      piVar1 = *(int * PTR32 *)((int)this + REFG(int, 0x1375a38) * 4 + 0x38);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1 GEN_EDX_FWD,param_1);
      return uVar2;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x50))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,param_1);
  }
  return uVar2;
}

/* ref: FUN_004d6ec0 */
GEN_NOFRAME uint GEN_THISCALL F_004d6ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  F_00b1b490(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a24));
  *(undefined4 *)((int)this + 8) = 0;
  puVar1 = (undefined4 *)((int)this + 0xc);
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (REFG(undefined4 * PTR32, 0x1375a40) == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(undefined4 * PTR32, 0x1375a40) + 4))) = puVar1;
    *(undefined4 * PTR32 *)((int)this + 0x14) = REFG(undefined4 * PTR32, 0x1375a40);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  REFG(undefined4 * PTR32, 0x1375a40) = puVar1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b74));
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096b5c));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x24) = 1;
  return (uint)this;
}

/* ref: FUN_004d6f50 */
GEN_NOFRAME uint GEN_THISCALL F_004d6f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  F_00b1b490(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a24));
  *(undefined4 *)((int)this + 8) = 0;
  puVar1 = (undefined4 *)((int)this + 0xc);
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (REFG(undefined4 * PTR32, 0x1375a40) == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(undefined4 * PTR32, 0x1375a40) + 4))) = puVar1;
    *(undefined4 * PTR32 *)((int)this + 0x14) = REFG(undefined4 * PTR32, 0x1375a40);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  REFG(undefined4 * PTR32, 0x1375a40) = puVar1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096ba4));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b8c));
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Query::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_004d6fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x1c);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x1c) = 0;
  }
  return uVar2;
}

/* ref: FUN_004d7110 */
GEN_NOFRAME byte GEN_THISCALL F_004d7110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d7110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((int)this + 0x28);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (*(uint *)((int)this + 0x24) <= uVar2) {
    return 0;
  }
  *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) =
       uVar2 * 0x5b0 + *(int *)((int)this + 4);
  return 1;
}

/* ref: FUN_004d7150 */
GEN_FRAME unsigned int GEN_THISCALL F_004d7150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d7150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  if (local_c != 0) {
    local_8 = 0;
    do {
      iVar4 = *(int *)((int)this + 4) + local_8;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(uint *)(iVar4 + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
      *(uint *)(iVar4 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
      *(undefined4 *)(iVar4 + 0x40) = 0;
      *(undefined4 *)(iVar4 + 0x44) = 0;
      *(undefined4 *)(iVar4 + 0x48) = 0;
      *(undefined4 *)(iVar4 + 0x4c) = 0;
      *(uint *)(iVar4 + 0x6c) = *(uint *)(iVar4 + 0x6c) & 0x800000ff;
      *(uint *)(iVar4 + 0x74) = *(uint *)(iVar4 + 0x74) & 0x800000ff;
      *(uint *)(iVar4 + 0x7c) = *(uint *)(iVar4 + 0x7c) & 0x800000ff;
      *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0x800000ff;
      *(uint *)(iVar4 + 0x8c) = *(uint *)(iVar4 + 0x8c) & 0x800000ff;
      *(uint *)(iVar4 + 0x94) = *(uint *)(iVar4 + 0x94) & 0x800000ff;
      *(uint *)(iVar4 + 0x9c) = *(uint *)(iVar4 + 0x9c) & 0x800000ff;
      *(uint *)(iVar4 + 0xa4) = *(uint *)(iVar4 + 0xa4) & 0x800000ff;
      *(undefined4 *)(iVar4 + 0x68) = 0;
      *(undefined1 *)(iVar4 + 0x6c) = 0;
      *(undefined4 *)(iVar4 + 0x70) = 0;
      *(undefined1 *)(iVar4 + 0x74) = 0;
      *(undefined4 *)(iVar4 + 0x78) = 0;
      *(undefined1 *)(iVar4 + 0x7c) = 0;
      *(undefined4 *)(iVar4 + 0x80) = 0;
      *(undefined1 *)(iVar4 + 0x84) = 0;
      *(undefined4 *)(iVar4 + 0x88) = 0;
      *(undefined1 *)(iVar4 + 0x8c) = 0;
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined1 *)(iVar4 + 0x94) = 0;
      *(undefined4 *)(iVar4 + 0x98) = 0;
      *(undefined1 *)(iVar4 + 0x9c) = 0;
      *(undefined4 *)(iVar4 + 0xa0) = 0;
      *(undefined1 *)(iVar4 + 0xa4) = 0;
      puVar5 = (undefined4 *)(iVar4 + 0xa8);
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      puVar2 = (uint *)(iVar4 + 0x2ac);
      iVar3 = 0x60;
      do {
        puVar2[-1] = 0;
        *puVar2 = REFG(undefined4, 0x1375a5c) & 0xfffffff;
        puVar2 = puVar2 + 2;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      local_8 = local_8 + 0x5b0;
      *(uint *)(iVar4 + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
      uVar1 = REFG(undefined4, 0x1302368);
      *(uint *)(iVar4 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
      *(uint *)(iVar4 + 0x58) = uVar1 & 0xfe000000;
      local_c = local_c - 1;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(int *)(iVar4 + 0x14) = iVar4 + 0x10;
      *(undefined4 *)(iVar4 + 0x18) = 0x8000;
      *(undefined4 *)(iVar4 + 0x1c) = 1;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
    } while (local_c != 0);
  }
  return 0;
}

/* ref: FUN_004d72d0 */
GEN_NOFRAME uint GEN_THISCALL F_004d72d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d72d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(char *)((int)this + 0xa8) == '\0') || (iVar1 = *(int *)((int)this + 0xa0), iVar1 == 0))
  goto LAB_004d737b;
  if (iVar1 == 1) {
LAB_004d7304: ;
    uVar5 = 0x3c;
  }
  else if (iVar1 == 2) {
    uVar5 = 0x1e;
  }
  else {
    if (iVar1 != 3) goto LAB_004d7304;
    uVar5 = 0x14;
  }
  iVar1 = *(int *)((int)this + 0xb0);
  *(int *)((int)this + 0xb0) = iVar1 + 1;
  uVar5 = (uint)(iVar1 * 1000) / uVar5 + *(int *)((int)this + 0xac);
  DVar3 = gen_imp_timeGetTime();
  if (DVar3 < uVar5) {
    if (3 < uVar5 - DVar3) {
      gen_imp_Sleep((uVar5 - DVar3) - 3);
    }
    uVar4 = gen_imp_timeGetTime();
    while (uVar4 < uVar5) {
      gen_imp_Sleep(0);
      uVar4 = gen_imp_timeGetTime();
    }
  }
  else if (uVar5 + 100 < DVar3) {
    DVar3 = gen_imp_timeGetTime();
    *(DWORD *)((int)this + 0xac) = DVar3;
    *(undefined4 *)((int)this + 0xb0) = 0;
  }
LAB_004d737b: ;
  if (*(char *)((int)this + 0x4c) == '\0') {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x3c)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,0,0,0,0,0);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0xc))))(*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG);
  }
  else {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x44))))(*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG,0,0,0,0);
  }
  if ((uVar5 == 0x88760868) || (uVar5 == 0x88760869)) {
    *(undefined4 *)((int)this + 0x38) = 2;
  }
  *(undefined1 *)((int)this + 0x31) = 0;
  return uVar5;
}

/* ref: FUN_004d73d0 */
GEN_FRAME uint GEN_THISCALL F_004d73d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d73d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x74) - *(int *)((int)this + 0x70);
  iVar1 = iVar4 >> 0x1f;
  iVar4 = iVar4 / 0xc + iVar1;
  uVar2 = 0;
  if (iVar4 != iVar1) {
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    do {
      if (((*param_1 == *piVar3) && (param_1[1] == piVar3[1])) && (param_1[2] == piVar3[2])) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar2 < (uint)(iVar4 - iVar1));
  }
  return 0xffffffff;
}

