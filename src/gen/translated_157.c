#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00cb1fc0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb1fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb1fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  return;
}

/* ref: FUN_00cb1ff0 */
GEN_FRAME uint GEN_THISCALL F_00cb1ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ff0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106fd08));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = 1;
  F_00cb5730((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb2050 */
GEN_FRAME uint GEN_THISCALL F_00cb2050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 4) == *(int *)(param_1 + 4)) &&
     (*(int *)((int)this + 0xc) == *(int *)(param_1 + 0xc))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00cb20a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb20a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb20a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  return;
}

/* ref: FUN_00cb20d0 */
GEN_FRAME byte GEN_THISCALL F_00cb20d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcb20d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  
  if ((*(int *)&gen_args[1]) != 0) {
    REFG(int, 0x15d7724) = (*(int *)&gen_args[1]);
  }
  if ((*(int *)&gen_args[2]) != 0) {
    F_00cb5730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) GEN_EDX_FWD,(*(int *)&gen_args[2]));
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3e4))) = (*(int *)&gen_args[3]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) + 1;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) = ~-(uint)((*(int *)&gen_args[3]) != 0) & (*(uint *)&gen_args[5]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(undefined4 *)&gen_args[4]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c))) = 1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                    (REFG(int, 0x15d7724) + 4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 4,0,0,0,1);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  return *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c)));
}

/* ref: FUN_00cb2160 */
GEN_FRAME byte GEN_THISCALL F_00cb2160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb2160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(char)param_2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x100,"%s.exh",param_1);
  *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
            ((int *)(REFG(int, 0x15d7724) + 4) GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)this + 4,
             -(uint)((char)param_3 != '\0') & 2 | (uint)((char)param_2 != '\0'),0,0,(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00cb2200 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb2200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  iVar1 = *param_1;
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)),
                            *(undefined1 *)(iVar1 + 10)),*(undefined1 *)(iVar1 + 0xb));
  if (uVar5 != 0) {
    do {
      piVar3 = (int *)F_00cb58d0(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),uVar4);
      uVar2 = *(undefined4 *)(*piVar3 + 4);
      *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))(REFG(int, 0x15d7724) + 4 GEN_EDX_ARG,uVar2,(int)this + 4,0,0,0,1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return 0;
}

/* ref: FUN_00cb2290 */
GEN_FRAME uint GEN_THISCALL F_00cb2290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  short * psVar1;
  short sVar2;
  gen_size32 _Size;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  short * psVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = param_1;
  F_00cb5bc0(((undefined1 *)(gen_frame + 0x28)));
  iVar7 = 0;
  F_00cb5b90(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
  if ((*(uint *)(gen_frame + 0x1c)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      F_00cb5970(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if ((-1 < (*(int *)(gen_frame + 0x34))) && (iVar7 < (*(int *)(gen_frame + 0x34)))) {
        iVar7 = (*(int *)(gen_frame + 0x34));
      }
      F_00cb5920(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    } while ((*(uint *)(gen_frame + 0x1c)) != (*(uint *)(gen_frame + 0x2c)));
  }
  _Size = (iVar7 + 1) * 4;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,_Size,0)));
  *(undefined * PTR32 *)((int)this + 0x3dc) = pvVar4;
  F_00c48350(pvVar4,0,_Size);
  F_00cb5b90(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar4 = param_1;
  if ((*(uint *)(gen_frame + 0x4)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      bVar3 = 0;
      F_00cb5970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if (-1 < (*(int *)(gen_frame + 0x34))) {
        psVar6 = *(short * PTR32 *)((int)this + 0x410);
        *(int *)((int)this + 0x3e0) = *(int *)((int)this + 0x3dc) + (*(int *)(gen_frame + 0x34)) * 4;
        if (psVar6 != (short *)0x0) {
          sVar2 = *psVar6;
          while (-1 < sVar2) {
            if (sVar2 == (*(int *)(gen_frame + 0x34))) {
              bVar3 = 1;
              break;
            }
            psVar1 = psVar6 + 1;
            psVar6 = psVar6 + 1;
            sVar2 = *psVar1;
          }
        }
      }
      *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
      ((code *)*((gen_code32 *)GEN_TOP((REFG(int * PTR32, 0x15d7724)[1] + 4))))
                (REFG(int * PTR32, 0x15d7724) + 1,((undefined1 *)(gen_frame + 0x38)),(int)this + 4,-(uint)bVar3 & 2 | 1,0,0,1);
      F_00cb5920(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x24));
    } while ((*(uint *)(gen_frame + 0x4)) != (*(uint *)(gen_frame + 0x2c)));
  }
  uVar5 = F_00cb5b90(pvVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  if ((*(uint *)(gen_frame + 0x10)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      F_00cb5970(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if ((-1 < (*(int *)(gen_frame + 0x34))) && (*((int *)GEN_TOP((*(int *)((int)this + 0x3dc) + (*(int *)(gen_frame + 0x34)) * 4))) != 0)) {
        iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x3dc) + (*(int *)(gen_frame + 0x34)) * 4)));
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar7 - 0xc;
        }
        *(short *)(iVar7 + 0x7e) = (short)(*(int *)(gen_frame + 0x34));
      }
      F_00cb5920(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      uVar5 = (*(uint *)(gen_frame + 0x10));
    } while ((*(uint *)(gen_frame + 0x10)) != (*(uint *)(gen_frame + 0x2c)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00cb24c0 */
GEN_FRAME uint GEN_THISCALL F_00cb24c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb24c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2510 */
GEN_FRAME uint GEN_THISCALL F_00cb2510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb2520 */
GEN_FRAME uint GEN_THISCALL F_00cb2520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2530 */
GEN_FRAME uint GEN_THISCALL F_00cb2530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb2540 */
GEN_FRAME uint GEN_THISCALL F_00cb2540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2560 */
GEN_FRAME uint GEN_THISCALL F_00cb2560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb2570 */
GEN_FRAME uint GEN_THISCALL F_00cb2570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2590 */
GEN_FRAME uint GEN_THISCALL F_00cb2590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb25a0 */
GEN_FRAME uint GEN_THISCALL F_00cb25a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb25a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb25e0 */
GEN_FRAME uint GEN_THISCALL F_00cb25e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb25e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb2620 */
GEN_FRAME uint GEN_THISCALL F_00cb2620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb2640 */
GEN_FRAME uint GEN_THISCALL F_00cb2640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb2680 */
GEN_FRAME uint GEN_THISCALL F_00cb2680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb26a0 */
GEN_FRAME uint GEN_THISCALL F_00cb26a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb26a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  }
  return uVar1;
}

/* ref: FUN_00cb26d0 */
GEN_FRAME uint GEN_THISCALL F_00cb26d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb26d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  }
  return uVar1;
}

/* ref: FUN_00cb2700 */
GEN_FRAME uint GEN_THISCALL F_00cb2700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2700u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (*(uint *)(gen_frame + 0x1c));
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106fd40));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = 1;
  (*(uint *)(gen_frame + 0x1c)) = CONCAT13((char)((uint)uVar2 >> 0x18),0x10000);
  F_00cb5730(&(*(int *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  uVar4 = (*(uint *)(gen_frame + 0x1c)) >> 1 & 0x1f;
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 0x1c + 8)));
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 1;
  uVar5 = (*(uint *)(gen_frame + 0x1c));
  while( true ) {
    (*(uint *)(gen_frame + 0x1c)) = uVar5;
    if (iVar1 == (int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 0x1c + 0xc) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = (char)(uVar5 >> 0x10);
      (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      if (((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) == '\0') && ((*(int *)(gen_frame + 0x18)) != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)));
      }
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
      return 0;
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 100))))(iVar1 + 0xc GEN_EDX_ARG);
    bVar3 = F_00cb5430(&(*(int *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar5);
    if (bVar3 != 0) break;
    iVar1 = *(int *)(iVar1 + 8);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
  }
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = iVar1 + 0xc;
  }
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  if (((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) == '\0') && ((*(int *)(gen_frame + 0x18)) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return uVar5;
}

/* ref: FUN_00cb2840 */
GEN_NOFRAME uint GEN_THISCALL F_00cb2840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (uVar2 < 0x20) {
    piVar3 = (int *)(*(int *)this + 0x18 + uVar2 * 0x1c);
    while (*piVar3 == 0) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 7;
      if (0x1f < uVar2) {
        return uVar2;
      }
    }
    *(uint *)((int)this + 8) = uVar2;
    iVar1 = *(int *)this + uVar2 * 0x1c;
    *(int *)((int)this + 4) = iVar1;
    uVar2 = *(uint *)(iVar1 + 8);
    *(uint *)((int)this + 0xc) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_00cb2890 */
GEN_FRAME uint GEN_THISCALL F_00cb2890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    F_00cb2840(this GEN_EDX_FWD);
    this = ((undefined *)(uint)(this));
  }
  return (uint)this;
}

/* ref: FUN_00cb28f0 */
GEN_FRAME byte GEN_THISCALL F_00cb28f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb28f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  *(undefined4 *)((int)this + 0x410) = param_1[5];
  bVar1 = F_00cb20d0(this GEN_EDX_FWD,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  return bVar1;
}

/* ref: FUN_00cb2920 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb2920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (((*(char *)((int)this + 8) == '\0') && (*(char *)((int)this + 0x18) != '\0')) &&
     (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD), (char)uVar2 == '\0')) {
    for (piVar1 = *(int * PTR32 *)((int)this + 0x44); piVar1 != (int *)((int)this + 0x48);
        piVar1 = (int *)piVar1[2]) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    }
    *(undefined1 *)((int)this + 0x18) = 0;
  }
  return;
}

/* ref: FUN_00cb2960 */
GEN_FRAME uint GEN_THISCALL F_00cb2960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb2700((undefined *)((int)this + 0x58) GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,param_1,0,0);
    uVar1 = F_00cb2700((undefined *)((int)this + 0x58) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00cb29a0 */
GEN_FRAME byte GEN_THISCALL F_00cb29a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb29a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
  }
  return 1;
}

/* ref: FUN_00cb29d0 */
GEN_FRAME byte GEN_THISCALL F_00cb29d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb29d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
  }
  return 1;
}

/* ref: FUN_00cb2a00 */
GEN_NOFRAME uint GEN_THISCALL F_00cb2a00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb2a30 */
GEN_NOFRAME uint GEN_THISCALL F_00cb2a30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb2ac0 */
GEN_FRAME uint GEN_THISCALL F_00cb2ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb2af0 */
GEN_FRAME uint GEN_THISCALL F_00cb2af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2b60 */
GEN_FRAME uint GEN_THISCALL F_00cb2b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb2b90 */
GEN_FRAME uint GEN_THISCALL F_00cb2b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2bd0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb2bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 * PTR32 *)((int)this + 8) = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 *)((int)this + 0x10) = this;
  return (uint)this;
}

/* ref: FUN_00cb2c00 */
GEN_FRAME uint GEN_THISCALL F_00cb2c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(uint *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(uVar1 + 8);
  if (*(int *)(uVar1 + 8) != 0) {
    *((int *)GEN_TOP((*(int *)(uVar1 + 8) + 4))) = param_1;
  }
  *(int *)(uVar1 + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return uVar1;
}

/* ref: FUN_00cb2c30 */
GEN_FRAME uint GEN_THISCALL F_00cb2c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  return (uint)param_1;
}

/* ref: FUN_00cb2c60 */
GEN_FRAME uint GEN_THISCALL F_00cb2c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = param_1;
  while( true ) {
    if (uVar1 == (int)this + 0xcU) {
      return 0;
    }
    if (iVar2 == 0) break;
    iVar2 = iVar2 - 1;
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  return uVar1;
}

/* ref: FUN_00cb2cc0 */
GEN_FRAME uint GEN_THISCALL F_00cb2cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb2cf0 */
GEN_FRAME uint GEN_THISCALL F_00cb2cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  return (uint)param_1;
}

/* ref: FUN_00cb2d20 */
GEN_FRAME uint GEN_THISCALL F_00cb2d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 8))) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = *(undefined4 *)(iVar1 + 4);
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cb2d60 */
GEN_FRAME uint GEN_THISCALL F_00cb2d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2da0 */
GEN_FRAME uint GEN_THISCALL F_00cb2da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2de0 */
GEN_FRAME uint GEN_THISCALL F_00cb2de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2e20 */
GEN_FRAME uint GEN_THISCALL F_00cb2e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2e60 */
GEN_FRAME uint GEN_STDCALL F_00cb2e60(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2e60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb2e80 */
GEN_NOFRAME uint GEN_THISCALL F_00cb2e80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb2ed0 */
GEN_FRAME uint GEN_THISCALL F_00cb2ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *param_1 = this;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_1;
  if (this != (undefined *)0x0) {
    F_00cb2840(param_1 GEN_EDX_FWD);
    puVar1 = ((undefined4 *)(uint)(param_1));
  }
  return (uint)puVar1;
}

/* ref: FUN_00cb2f00 */
GEN_FRAME uint GEN_THISCALL F_00cb2f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 100))))(param_1 + 0xc GEN_EDX_FWD);
  uVar3 = *(ushort *)(uVar3 + 4) >> 1 & 0x1f;
  iVar2 = *(int *)((int)this + uVar3 * 0x1c + 0x10);
  *(int *)(param_1 + 4) = iVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
  if (*(int *)(iVar2 + 8) != 0) {
    *((int *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = param_1;
  }
  *(int *)(iVar2 + 8) = param_1;
  piVar1 = (int *)((int)this + uVar3 * 0x1c + 0x18);
  *piVar1 = *piVar1 + 1;
  *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + 1;
  return 1;
}

/* ref: FUN_00cb2f60 */
GEN_FRAME uint GEN_THISCALL F_00cb2f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 100))))(param_1 + 0xc GEN_EDX_FWD);
  uVar2 = *(ushort *)(uVar3 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
  }
  piVar1 = ((int *)GEN_TOP(((int)this + (uVar2 >> 1 & 0x1f) * 0x1c + 0x18)));
  *piVar1 = *piVar1 - 1;
  *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) - 1;
  return 0xffffffff;
}

/* ref: FUN_00cb2fc0 */
GEN_FRAME uint GEN_THISCALL F_00cb2fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = (uint *)((int)this + 0x18);
  uVar3 = param_1;
  while (*puVar4 <= uVar3) {
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 - *puVar4;
    puVar4 = puVar4 + 7;
    if (0x1f < uVar2) {
      return 0;
    }
  }
  uVar1 = *(uint *)((int)this + uVar2 * 0x1c + 8);
  while( true ) {
    if (uVar1 == (int)this + uVar2 * 0x1c + 0xc) {
      return 0;
    }
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  return uVar1;
}

/* ref: FUN_00cb3020 */
GEN_NOFRAME uint GEN_THISCALL F_00cb3020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb3020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb3070 */
GEN_NOFRAME uint GEN_THISCALL F_00cb3070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb3070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb30c0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb30c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb30c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_01051d29(this,0x1c,0x20,((code *)REFP(0xcb2e80)));
  return extraout_EAX;
}

/* ref: FUN_00cb30d0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb30d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb30d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb3120 */
GEN_NOFRAME byte GEN_THISCALL F_00cb3120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb3120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x3d8);
  *(undefined1 *)((int)this + 8) = 1;
  do {
    if (iVar2 == 0) {
      if ((*(int *)((int)this + 0x3dc) != 0) && (*(int *)((int)this + 0x3dc) != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*(int *)((int)this + 0x3dc));
        *(undefined4 *)((int)this + 0x3dc) = 0;
      }
      return 1;
    }
    uVar3 = 0;
    piVar4 = (int *)((int)this + 0x70);
    do {
      if (*piVar4 != 0) {
        puVar5 = *(undefined4 * PTR32 *)((int)this + uVar3 * 0x1c + 0x60);
        goto LAB_00cb3164;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 7;
    } while (uVar3 < 0x20);
    puVar5 = (undefined4 *)0x0;
LAB_00cb3164: ;
    uVar3 = ((code *)*(gen_code32 *)(puVar5[3] + 4))(puVar5 + 3);
    if ((char)uVar3 != '\0') {
      return 0;
    }
    uVar3 = ((code *)*(gen_code32 *)(puVar5[3] + 100))(puVar5 + 3);
    uVar1 = *(ushort *)(uVar3 + 4);
    if (puVar5[1] != 0) {
      *(undefined4 *)(puVar5[1] + 8) = puVar5[2];
    }
    if (puVar5[2] != 0) {
      *(undefined4 *)(puVar5[2] + 4) = puVar5[1];
    }
    piVar4 = ((int *)GEN_TOP(((int)this + (uVar1 >> 1 & 0x1f) * 0x1c + 0x70)));
    *piVar4 = *piVar4 - 1;
    *(int *)((int)this + 0x3d8) = *(int *)((int)this + 0x3d8) - 1;
    ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,1);
    iVar2 = *(int *)((int)this + 0x3d8);
  } while( true );
}

/* ref: FUN_00cb3220 */
GEN_FRAME byte GEN_THISCALL F_00cb3220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3220u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  (*(volatile undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0x106fd70));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x30));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x30)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x38)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(char *)(gen_frame + 0x2e)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  iVar6 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58;
  iVar5 = 0;
  (*(volatile undefined4 *)(gen_frame + 0x38)) = 1;
  (*(int *)(gen_frame + 0x18)) = iVar6;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)0x0;
  if (iVar6 == 0) goto LAB_00cb3292;
  do {
    F_00cb2840(&(*(int *)(gen_frame + 0x18)) GEN_EDX_ARG);
    iVar5 = (*(int *)(gen_frame + 0x1c));
LAB_00cb3292: ;
    do {
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
      if (iVar5 != 0) goto LAB_00cb329e;
      do {
        if (puVar2 == (undefined4 *)0x0) {
          (*(volatile undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return 0;
        }
LAB_00cb329e: ;
        piVar7 = &(*(int *)(gen_frame + 0x28));
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(puVar2[3] + 100))(puVar2 + 3)));
        bVar3 = F_00cb5430(this_00 GEN_EDX_ARG,piVar7);
        if (bVar3 != 0) {
          uVar4 = ((code *)*(gen_code32 *)(puVar2[3] + 100))(puVar2 + 3);
          uVar1 = *(ushort *)(uVar4 + 4);
          if (puVar2[1] != 0) {
            *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
          }
          if (puVar2[2] != 0) {
            *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
          }
          piVar7 = ((int *)GEN_TOP((iVar6 + (uVar1 >> 1 & 0x1f) * 0x1c + 0x18)));
          *piVar7 = *piVar7 - 1;
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) - 1;
          ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
          (*(volatile undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return 1;
        }
      } while (iVar5 == 0);
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)puVar2[2];
    } while ((undefined4 *)puVar2[2] != (undefined4 *)(iVar5 + 0xc));
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
  } while( true );
}

/* ref: FUN_00cb3390 */
GEN_FRAME byte GEN_THISCALL F_00cb3390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3390u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) == (*(int *)&gen_args[1])) {
    return 1;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(int *)&gen_args[1]);
  for (; piVar1 != ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))); piVar1 = (int *)piVar1[2]) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(int *)&gen_args[1]));
  }
  F_00cb3120((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) + 1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(int *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c))) = 1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                    (REFG(int, 0x15d7724) + 4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 4,0,0,0,1);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  return *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c)));
}

/* ref: FUN_00cb3430 */
GEN_FRAME byte GEN_THISCALL F_00cb3430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb3430u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  byte bVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  (*(volatile undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0x106fda0));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x30));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x30)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x38)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(char *)(gen_frame + 0x2e)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  iVar3 = 0;
  (*(volatile undefined4 *)(gen_frame + 0x38)) = 1;
  (*(int *)(gen_frame + 0x18)) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  if ((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58 == 0) goto LAB_00cb34a1;
  do {
    F_00cb2840(&(*(int *)(gen_frame + 0x18)) GEN_EDX_ARG);
    iVar3 = (*(int *)(gen_frame + 0x1c));
LAB_00cb34a1: ;
    do {
      iVar1 = (*(int *)(gen_frame + 0x24));
      if (iVar3 != 0) goto LAB_00cb34a9;
      do {
        if (iVar1 == 0) {
          (*(volatile undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return (byte)(*(undefined4 *)&gen_args[2]);
        }
LAB_00cb34a9: ;
        piVar4 = &(*(int *)(gen_frame + 0x28));
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 100))))(iVar1 + 0xc GEN_EDX_ARG)));
        bVar2 = F_00cb5430(this_00 GEN_EDX_ARG,piVar4);
        if (bVar2 != 0) {
          (*(volatile undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return 1;
        }
      } while (iVar3 == 0);
      (*(int *)(gen_frame + 0x24)) = *(int *)(iVar1 + 8);
    } while (*(int *)(iVar1 + 8) != iVar3 + 0xc);
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
  } while( true );
}

/* ref: FUN_00cb3550 */
GEN_FRAME uint GEN_THISCALL F_00cb3550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x28);
  while ((uVar2 = (int)this + 0x2cU, uVar1 != (int)this + 0x2cU && (uVar2 = uVar1, uVar1 != param_1)
         )) {
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  if (uVar2 == (int)this + 0x2cU) {
    *(int *)(param_1 + 4) = (int)this + 0x20;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x28);
    if (*(int *)((int)this + 0x28) != 0) {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + 4))) = param_1;
    }
    *(uint *)((int)this + 0x28) = param_1;
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb35b0 */
GEN_FRAME uint GEN_THISCALL F_00cb35b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb35b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x44);
    *(undefined1 *)((int)this + 0x18) = 1;
    for (; piVar1 != (int *)((int)this + 0x48); piVar1 = (int *)piVar1[2]) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    }
    F_00cb3120(this GEN_EDX_ARG);
    *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
    *(undefined4 *)((int)this + 1000) = 0;
    *(undefined1 *)((int)this + 0x40c) = 1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                      (REFG(int, 0x15d7724) + 4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),(int)this + 4,0,0,0,1);
    *(uint *)((int)this + 0xc) = uVar2;
    *(undefined1 *)((int)this + 8) = 0;
    for (piVar1 = *(int * PTR32 *)((int)this + 0x44); piVar1 != (int *)((int)this + 0x48);
        piVar1 = (int *)piVar1[2]) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    }
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00cb3660 */
GEN_FRAME uint GEN_THISCALL F_00cb3660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x44);
  while ((uVar2 = (int)this + 0x48U, uVar1 != (int)this + 0x48U && (uVar2 = uVar1, uVar1 != param_1)
         )) {
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  if (uVar2 == (int)this + 0x48U) {
    *(int *)(param_1 + 4) = (int)this + 0x3c;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x44);
    if (*(int *)((int)this + 0x44) != 0) {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x44) + 4))) = param_1;
    }
    *(uint *)((int)this + 0x44) = param_1;
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb36c0 */
GEN_FRAME uint GEN_THISCALL F_00cb36c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb36c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x3f8);
  while ((uVar2 = (int)this + 0x3fcU, uVar1 != (int)this + 0x3fcU &&
         (uVar2 = uVar1, uVar1 != param_1))) {
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  if (uVar2 == (int)this + 0x3fcU) {
    *(int *)(param_1 + 4) = (int)this + 0x3f0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x3f8);
    if (*(int *)((int)this + 0x3f8) != 0) {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x3f8) + 4))) = param_1;
    }
    *(int *)((int)this + 0x408) = *(int *)((int)this + 0x408) + 1;
    *(uint *)((int)this + 0x3f8) = param_1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb3730 */
GEN_FRAME byte GEN_THISCALL F_00cb3730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x3f8);
  while ((iVar2 = (int)this + 0x3fc, iVar1 != (int)this + 0x3fc && (iVar2 = iVar1, iVar1 != param_1)
         )) {
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if (iVar2 != (int)this + 0x3fc) {
    if (param_1 != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
      }
      if (*(int *)(param_1 + 8) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
      }
      *(int *)((int)this + 0x408) = *(int *)((int)this + 0x408) - 1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb37a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb37a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb37a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x3f8);
  if (this_00 != (undefined *)((int)this + 0x3fc)) {
    piVar3 = (int *)(param_1 + 0xc);
    while( true ) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_FWD);
      bVar1 = F_00cb5430((undefined *)((int)this_00 + 0xc) GEN_EDX_ARG,uVar2);
      if (bVar1 != 0) break;
      if (this_00 != (undefined *)0x0) {
        this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
      }
      if (this_00 == (undefined *)((int)this + 0x3fc)) {
        return;
      }
    }
    if (this_00 != (undefined *)0x0) {
      if (*(int *)((int)this_00 + 4) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 4) + 8))) = *(undefined4 *)((int)this_00 + 8);
      }
      if (*(int *)((int)this_00 + 8) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 8) + 4))) = *(undefined4 *)((int)this_00 + 4);
      }
      *(int *)((int)this + 0x408) = *(int *)((int)this + 0x408) - 1;
    }
    F_00cb5bf0(this_00 GEN_EDX_ARG,piVar3);
  }
  return;
}

/* ref: FUN_00cb3830 */
GEN_FRAME uint GEN_THISCALL F_00cb3830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x3dc) != 0) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x3dc) + param_1 * 4)));
  }
  uVar1 = F_00cb2fc0((undefined *)((int)this + 0x58) GEN_EDX_FWD,param_1);
  if (uVar1 != 0) {
    return uVar1 + 0xc;
  }
  return 0;
}

/* ref: FUN_00cb3870 */
GEN_FRAME uint GEN_THISCALL F_00cb3870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb2fc0((undefined *)((int)this + 0x58) GEN_EDX_FWD,param_1);
  if (uVar1 != 0) {
    return uVar1 + 0xc;
  }
  return 0;
}

/* ref: FUN_00cb38c0 */
GEN_FRAME uint GEN_THISCALL F_00cb38c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb38c0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  uint uVar1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106fe0d));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[18])REFP(0x11296f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296e4));
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 6;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) != 0) {
    F_00cb3120((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3fc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f0))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4)));
  }
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x18)) + 0)) = 4;
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x18)) + 0)) = 4;
  F_01051d29(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),0x1c,0x20,((code *)REFP(0xcb2e80)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
  }
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(volatile undefined4 *)(gen_frame + 0x18)), 1, 3),1);
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16))) == '\0') && (uVar1 = 0, *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[18])REFP(0x1129680));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar1;
}

/* ref: FUN_00cb3a40 */
GEN_NOFRAME uint GEN_THISCALL F_00cb3a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb3a50((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00cb3a50 */
GEN_FRAME uint GEN_THISCALL F_00cb3a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb38c0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb3a80 */
GEN_FRAME byte GEN_THISCALL F_00cb3a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb3a80u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x170];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x164);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  code * pcVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  byte * pbVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined * this_00;
  char * pcVar9;
  char * pcVar10;
  int * piVar11;
  undefined4 uVar12;
  char * pcVar13;
  uint uVar14;
  int iVar15;
  undefined4 * puVar16;
  
  puVar16 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(volatile undefined4 *)(gen_frame + 0x158)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x154)) = ((code *)REFP(0x106fe54));
  (*(undefined * PTR32 *)(gen_frame + 0x150)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x150));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x150)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(byte *)(gen_frame + 0x4b)) = 0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3acb;
  uVar5 = F_00cb9700((*(undefined4 * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  uVar14 = (uint)uVar5;
  (*(uint *)(gen_frame + 0x40)) = uVar14;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3adb;
  pbVar6 = (byte *)F_00cb97e0(puVar16 GEN_EDX_ARG);
  pcVar9 = (char *)*puVar16;
  cVar3 = *pcVar9;
  pcVar13 = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar9;
  if (cVar3 != '\0') {
    pcVar10 = ((char *)(gen_frame + 0x4c));
    do {
      if (cVar3 == '.') {
        pcVar13 = pcVar10;
      }
      *pcVar10 = cVar3;
      cVar3 = pcVar10[(int)(pcVar9 + (1 - (int)((char *)(gen_frame + 0x4c))))];
      pcVar10 = pcVar10 + 1;
      uVar14 = (*(uint *)(gen_frame + 0x40));
    } while (cVar3 != '\0');
  }
  *pcVar13 = '\0';
  (*(undefined2 *)(gen_frame + 0x38)) = 0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)((char *)(gen_frame + 0x4c));
  (*(volatile undefined4 *)(gen_frame + 0x158)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)0x0;
  (*(char *)(gen_frame + 0x3a)) = '\x01';
  F_00cb5730(&(*(char * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,((char *)(gen_frame + 0x4c)));
  (*(volatile undefined4 *)(gen_frame + 0x158)) = 1;
  if (uVar14 != 0) {
    (*(uint *)(gen_frame + 0x40)) = uVar14;
    do {
      uVar14 = (uint)*pbVar6;
      (*(uint *)(gen_frame + 0x28)) = uVar14;
      (*(byte * PTR32 *)(gen_frame + 0x3c)) = pbVar6 + 1;
      if ((uVar14 == 0) || (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x1c) == uVar14)) {
        iVar15 = 0;
        uVar14 = 0;
        puVar16 = (undefined4 *)0x0;
        (*(byte *)(gen_frame + 0x4b)) = 1;
        if ((*(undefined * PTR32 *)(gen_frame + 0x44)) != (undefined *)0xffffffa8) {
          uVar7 = 0;
          piVar11 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x70);
          do {
            if (*piVar11 != 0) {
              puVar16 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar7 * 0x1c + 0x60);
              iVar15 = (int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar7 * 0x1c + 0x58;
              uVar14 = uVar7;
              break;
            }
            uVar7 = uVar7 + 1;
            piVar11 = piVar11 + 7;
          } while (uVar7 < 0x20);
        }
        (*(uint *)(gen_frame + 0x30)) = 0xffffffff;
        do {
          do {
            do {
              if (iVar15 != 0) goto LAB_00cb3bce;
              do {
                pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x44));
                if (puVar16 == (undefined4 *)0x0) {
LAB_00cb3cba: ;
                  pcVar2 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4)));
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
                  this_00 = ((undefined *)GEN_TOP((*pcVar2)(REFG(int * PTR32, 0x15d7724),0x94,0)));
                  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this_00;
                  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x158)) + 0)) = 2;
                  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x158)) + 0)) = 2;
                  if (this_00 == (undefined *)0x0) {
                    pcVar9 = (char *)0x0;
                  }
                  else {
                    if (((*(uint *)&gen_args[2]) >> 1 & 1) == 0) {
                      uVar12 = *(undefined4 *)((int)pvVar8 + 1000);
                    }
                    else {
                      uVar12 = 0;
                    }
                    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)uVar12;
                    (*(undefined1 * PTR32 *)(gen_frame + 0x20)) = ((undefined1 *)GEN_TOP((gen_frame + 0x8)));
                    uVar14 = (uint)((byte)(*(uint *)&gen_args[2]) & 1);
                    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)uVar14;
                    pcVar9 = (char *)F_00cb9050(this_00 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x28)),(*(undefined4 * PTR32 *)(gen_frame + 0x24)),(*(char * PTR32 *)(gen_frame + 0x2c)),(*(byte * PTR32 *)(gen_frame + 0x3c)),
                                                  uVar12,uVar14);
                  }
                  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x158)) + 0)) = 1;
                  (*(volatile undefined4 *)(gen_frame + 0x158)) = CONCAT31(GEN_PIECE(&(*(volatile undefined4 *)(gen_frame + 0x158)), 1, 3),1);
                  if (-1 < (int)(*(uint *)(gen_frame + 0x30))) {
                    *(short *)(pcVar9 + 0x7e) = (short)(*(uint *)(gen_frame + 0x30));
                  }
                  if (*(int * PTR32 *)((int)pvVar8 + 0x3e0) != (int *)0x0) {
                    if (pcVar9 == (char *)0x0) {
                      pcVar13 = (char *)0x0;
                    }
                    else {
                      pcVar13 = pcVar9 + 0xc;
                    }
                    **(int * PTR32 *)((int)pvVar8 + 0x3e0) = (int)pcVar13;
                    *(undefined4 *)((int)pvVar8 + 0x3e0) = 0;
                  }
                  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(pcVar9 + 0xc) + 100)));
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3d6b;
                  uVar14 = (*pcVar2)(pcVar9 + 0xc);
                  uVar14 = *(ushort *)(uVar14 + 4) >> 1 & 0x1f;
                  iVar15 = *(int *)((int)pvVar8 + uVar14 * 0x1c + 0x68);
                  *(int *)(pcVar9 + 4) = iVar15;
                  *(undefined4 *)(pcVar9 + 8) = *(undefined4 *)(iVar15 + 8);
                  if (*(int *)(iVar15 + 8) != 0) {
                    *((char * PTR32 *)GEN_TOP((*(int *)(iVar15 + 8) + 4))) = pcVar9;
                  }
                  *(char * PTR32 *)(iVar15 + 8) = pcVar9;
                  piVar11 = (int *)((int)pvVar8 + uVar14 * 0x1c + 0x70);
                  *piVar11 = *piVar11 + 1;
                  *(int *)((int)pvVar8 + 0x3d8) = *(int *)((int)pvVar8 + 0x3d8) + 1;
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)pcVar9;
                  F_00cb37a0(pvVar8 GEN_EDX_ARG,pcVar9);
                  if (pcVar9[0x81] != '\0') {
                    (*(byte *)(gen_frame + 0x4b)) = 0;
                  }
                  goto LAB_00cb3dc7;
                }
LAB_00cb3bce: ;
                iVar1 = puVar16[3];
                (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = &(*(char * PTR32 *)(gen_frame + 0x34));
                pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 100))(puVar16 + 3)));
                bVar4 = F_00cb5430(pvVar8 GEN_EDX_ARG,(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
                pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x44));
                if (bVar4 != 0) {
                  (*(uint *)(gen_frame + 0x30)) = (uint)*(ushort *)((int)puVar16 + 0x7e);
                  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x3e0) =
                       *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x3dc) + (uint)*(ushort *)((int)puVar16 + 0x7e) * 4
                  ;
                  pcVar2 = *(gen_code32 *)(puVar16[3] + 100);
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3c6c;
                  uVar14 = (*pcVar2)(puVar16 + 3);
                  uVar5 = *(ushort *)(uVar14 + 4);
                  if (puVar16[1] != 0) {
                    *(undefined4 *)(puVar16[1] + 8) = puVar16[2];
                  }
                  if (puVar16[2] != 0) {
                    *(undefined4 *)(puVar16[2] + 4) = puVar16[1];
                  }
                  piVar11 = ((int *)GEN_TOP(((int)pvVar8 + (uVar5 >> 1 & 0x1f) * 0x1c + 0x70)));
                  *piVar11 = *piVar11 - 1;
                  *(int *)((int)pvVar8 + 0x3d8) = *(int *)((int)pvVar8 + 0x3d8) - 1;
                  pcVar2 = *(gen_code32 *)*puVar16;
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x1;
                  (*pcVar2)(puVar16,1);
                  goto LAB_00cb3cba;
                }
              } while (iVar15 == 0);
              puVar16 = (undefined4 *)puVar16[2];
            } while (puVar16 != (undefined4 *)(iVar15 + 0xc));
            uVar14 = uVar14 + 1;
            puVar16 = (undefined4 *)0x0;
            iVar15 = 0;
          } while (0x1f < uVar14);
          piVar11 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar14 * 0x1c + 0x70);
          uVar7 = uVar14;
          do {
            if (*piVar11 != 0) {
              puVar16 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar7 * 0x1c + 0x60);
              iVar15 = (int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar7 * 0x1c + 0x58;
              uVar14 = uVar7;
              break;
            }
            uVar7 = uVar7 + 1;
            piVar11 = piVar11 + 7;
          } while (uVar7 < 0x20);
        } while( true );
      }
LAB_00cb3dc7: ;
      bVar4 = *(*(byte * PTR32 *)(gen_frame + 0x3c));
      pbVar6 = (*(byte * PTR32 *)(gen_frame + 0x3c));
      while (bVar4 != 0) {
        pbVar6 = pbVar6 + 1;
        bVar4 = *pbVar6;
      }
      pbVar6 = pbVar6 + 1;
      uVar14 = (*(uint *)(gen_frame + 0x40)) - 1;
      (*(uint *)(gen_frame + 0x40)) = uVar14;
    } while (uVar14 != 0);
  }
  (*(volatile undefined4 *)(gen_frame + 0x158)) = 0xffffffff;
  if (((*(char *)(gen_frame + 0x3a)) == '\0') && ((*(char * PTR32 *)(gen_frame + 0x34)) != (char *)0x0)) {
    iVar15 = *REFG(int * PTR32, 0x15d7724);
    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)(*(char * PTR32 *)(gen_frame + 0x34));
    ((code *)*(gen_code32 *)(iVar15 + 8))(REFG(int * PTR32, 0x15d7724),(*(char * PTR32 *)(gen_frame + 0x34)));
  }
  bVar4 = (*(byte *)(gen_frame + 0x4b));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x150));
  F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
  return bVar4;
}

/* ref: FUN_00cb3e30 */
GEN_FRAME uint GEN_THISCALL F_00cb3e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3e30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106feb4));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296dc));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[18])REFP(0x11296f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296e4));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 4;
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 4;
  F_01051d8c(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),0x1c,0x20,((code *)REFP(0xcb2bd0)),((code *)REFP(0xcb2e80)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f0))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3fc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3fc)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x408))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f0)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x410))) = 0;
  REFG(undefined4, 0x15d7724) = (*(undefined4 *)&gen_args[1]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb3f50 */
GEN_FRAME uint GEN_THISCALL F_00cb3f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3f50u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(volatile uint *)(gen_frame + 0x38)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0x106fee0));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x30));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x30)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  if ((char)uVar3 == '\0') {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG);
    if (uVar3 != 0) {
      F_00cb5aa0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar3);
      (*(volatile uint *)(gen_frame + 0x38)) = 0;
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
      F_00cb59f0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,uVar3,uVar4);
      (*(undefined1 *)((char *)&(*(volatile uint *)(gen_frame + 0x38)) + 0)) = 1;
      (*(volatile uint *)(gen_frame + 0x38)) = CONCAT31(GEN_PIECE(&(*(volatile uint *)(gen_frame + 0x38)), 1, 3),1);
      bVar2 = F_00cb58a0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      if (bVar2 == 0) {
        bVar2 = F_00cb58f0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        if (bVar2 == 0) {
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG)));
          uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x18)) = uVar4;
          (*(uint *)(gen_frame + 0x1c)) = uVar3;
          bVar2 = F_00cb3a80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) - 4))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)),(*(int * PTR32 *)&gen_args[1]));
          if (bVar2 == 0) {
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x408))) = 0;
          }
        }
        else {
          F_00cb2290(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) - 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)));
        }
      }
      else {
        F_00cb2200(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) - 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
      }
      uVar3 = (*(volatile uint *)(gen_frame + 0x38));
      (*(undefined1 *)((char *)&(*(volatile uint *)(gen_frame + 0x38)) + 0)) = 0;
      (*(volatile uint *)(gen_frame + 0x38)) = uVar3 & 0xffffff00;
      F_00cb5a10();
      (*(volatile uint *)(gen_frame + 0x38)) = 0xffffffff;
      F_00cb5b50(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
    }
  }
  else {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x408))) = 0;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) - 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))(REFG(int, 0x15d7724) + 4 GEN_EDX_ARG,piVar1);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
  return uVar3;
}

/* ref: FUN_00cb40a0 */
GEN_FRAME ushort GEN_THISCALL F_00cb40a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb40a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 8 + param_2 * 2);
}

/* ref: FUN_00cb40b0 */
GEN_FRAME ushort GEN_THISCALL F_00cb40b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb40b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + param_1 * 2 + 8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb40e0 */
GEN_FRAME ushort GEN_THISCALL F_00cb40e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb40e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 6) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb4120 */
GEN_NOFRAME uint GEN_THISCALL F_00cb4120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4120u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0xffff0000;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4170 */
GEN_FRAME byte GEN_THISCALL F_00cb4170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  short * psVar1;
  uint uVar2;
  
  if ((*(short *)((int)this + 4) == (short)param_1[1]) && (*(int *)this == *param_1)) {
    uVar2 = 0;
    if (*(ushort *)((int)this + 6) != 0) {
      psVar1 = (short *)((int)this + 8);
      do {
        if (*psVar1 != *((short *)GEN_TOP((((int)param_1 - (int)this) + (int)psVar1)))) {
          return 0;
        }
        uVar2 = uVar2 + 1;
        psVar1 = psVar1 + 1;
      } while (uVar2 < *(ushort *)((int)this + 6));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb41d0 */
GEN_FRAME uint GEN_THISCALL F_00cb41d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb41d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)this = param_1;
  *(undefined2 *)((int)this + 6) = 0;
  *(short *)((int)this + 4) = (short)param_1;
  return param_1 & 0xffff;
}

/* ref: FUN_00cb41f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb41f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb41f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  undefined2 * puVar3;
  ushort * puVar4;
  
  *(undefined4 *)this = param_1;
  uVar2 = 0;
  *(short *)((int)this + 6) = (short)param_3;
  if (param_3 != 0) {
    puVar3 = (undefined2 *)((int)this + 8);
    do {
      *puVar3 = *(undefined2 *)(param_2 + uVar2 * 2);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < param_3);
  }
  uVar1 = *(ushort *)this;
  if ((*(short *)((int)this + 6) != -1) && (*(short *)((int)this + 6) != 0)) {
    uVar2 = (uint)*(ushort *)((int)this + 6);
    puVar4 = (ushort *)((int)this + 8);
    do {
      uVar1 = uVar1 * 2 ^ *puVar4;
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(ushort *)((int)this + 4) = uVar1;
  return 0;
}

/* ref: FUN_00cb4260 */
GEN_FRAME byte GEN_THISCALL F_00cb4260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  if (*(ushort *)((int)this + 6) != 0) {
    psVar2 = (short *)((int)this + 8);
    do {
      if (*psVar2 != *(short *)(param_1 + uVar1 * 2)) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 1;
    } while (uVar1 < *(ushort *)((int)this + 6));
  }
  return 1;
}

/* ref: FUN_00cb42a0 */
GEN_FRAME uint GEN_THISCALL F_00cb42a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb42a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 6) = 0;
  *(short *)((int)this + 4) = (short)param_1;
  return (uint)this;
}

/* ref: FUN_00cb42c0 */
GEN_FRAME uint GEN_THISCALL F_00cb42c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb42c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = param_1;
  puVar2 = (ushort *)((int)this + 8);
  *(short *)((int)this + 6) = (short)param_3;
  F_00c46aa0(puVar2,param_2,param_3 * 2);
  uVar1 = *(ushort *)this;
  if ((*(short *)((int)this + 6) != -1) && (*(short *)((int)this + 6) != 0)) {
    uVar3 = (uint)*(ushort *)((int)this + 6);
    do {
      uVar1 = uVar1 * 2 ^ *puVar2;
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(ushort *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: FUN_00cb4320 */
GEN_FRAME uint GEN_THISCALL F_00cb4320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  
  if (*(ushort *)((int)param_1 + 6) == 0xffff) {
    *(undefined2 *)((int)this + 6) = 0xffff;
    return (uint)this;
  }
  F_00cb41f0(this GEN_EDX_FWD,*param_1,param_1 + 2,(uint)*(ushort *)((int)param_1 + 6));
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb4360 */
GEN_FRAME uint GEN_THISCALL F_00cb4360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0xffff0000;
  if (*(ushort *)((int)param_1 + 6) == 0xffff) {
    *(undefined2 *)((int)this + 6) = 0xffff;
    return (uint)this;
  }
  F_00cb41f0(this GEN_EDX_FWD,*param_1,param_1 + 2,(uint)*(ushort *)((int)param_1 + 6));
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb43b0 */
GEN_FRAME byte GEN_THISCALL F_00cb43b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb43b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cb4170(this GEN_EDX_FWD,param_1);
  return bVar1 == 0;
}

/* ref: FUN_00cb43e0 */
GEN_FRAME byte GEN_THISCALL F_00cb43e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb43e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  iVar6 = 0;
  uVar5 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      bVar3 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar6))) GEN_EDX_FWD,param_1);
      if ((bVar3 != 0) && (*((int *)GEN_TOP((iVar6 + 0xc + *(int *)((int)this + 0xc)))) == 0)) {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x28))(param_2 GEN_EDX_ARG,param_1);
        *((uint *)GEN_TOP((iVar6 + 0xc + *(int *)((int)this + 0xc)))) = uVar4;
        piVar2 = *((int * PTR32 *)GEN_TOP((iVar6 + 0xc + *(int *)((int)this + 0xc))));
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
        *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar5 * 4))) = uVar4;
      }
      iVar1 = iVar6 + *(int *)((int)this + 0xc);
      if ((*(short *)(iVar1 + 6) != -1) && (*(int *)(iVar1 + 0xc) == 0)) {
        local_8 = local_8 + 1;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x10;
    } while (uVar5 < *(uint *)((int)this + 4));
    if (local_8 != 0) {
      return 0;
    }
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))
            (this GEN_EDX_ARG,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x10),
             *(undefined4 *)((int)this + 8));
  return 1;
}

/* ref: FUN_00cb44e0 */
GEN_FRAME uint GEN_THISCALL F_00cb44e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb44e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar3;
  
  iVar4 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))) GEN_EDX_FWD,param_2);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))) GEN_EDX_ARG,param_2);
    if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar4))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar4)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar4))) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
    uVar3 = param_1;
  }
  return uVar3;
}

/* ref: FUN_00cb4540 */
GEN_FRAME uint GEN_THISCALL F_00cb4540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,param_2);
  iVar4 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    uVar3 = F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
    if (*((int *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc)))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc))));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      uVar3 = *(uint *)((int)this + 0xc);
      *(undefined4 *)(iVar4 + 0xc + uVar3) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00cb45d0 */
GEN_FRAME uint GEN_THISCALL F_00cb45d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb45d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int iVar5;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = F_00cb4120(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD);
  iVar5 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar5))) GEN_EDX_ARG,uVar3);
  uVar4 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar5))) GEN_EDX_ARG,uVar3);
    if (*((int *)GEN_TOP((iVar5 + 0xc + *(int *)((int)this + 0xc)))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar5 + 0xc + *(int *)((int)this + 0xc))));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((iVar5 + 0xc + *(int *)((int)this + 0xc)))) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
    uVar4 = param_1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00cb4650 */
GEN_FRAME uint GEN_THISCALL F_00cb4650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb4660 */
GEN_FRAME uint F_00cb4660(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 << 4,0);
  return uVar1;
}

/* ref: FUN_00cb4680 */
GEN_FRAME uint F_00cb4680(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 4,0);
  return uVar1;
}

/* ref: FUN_00cb46a0 */
GEN_FRAME uint F_00cb46a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb46a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb46d0 */
GEN_FRAME uint F_00cb46d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb46d0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb4700 */
GEN_FRAME uint GEN_THISCALL F_00cb4700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  *(uint *)((int)this + 4) = param_1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,param_1 << 4,0);
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 4,0);
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    do {
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xc) + 6 + iVar2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < param_1);
  }
  return (uint)this;
}

/* ref: FUN_00cb47a0 */
GEN_FRAME uint GEN_THISCALL F_00cb47a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb47a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar4 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      uVar3 = F_00cb4120(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD);
      bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))) GEN_EDX_ARG,uVar3);
      if (bVar2 == 0) {
        F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))) GEN_EDX_ARG,uVar3);
        if (*((int *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc)))) != 0) {
          piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc))));
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
          *((undefined4 *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc)))) = 0;
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + (*(uint *)(gen_frame + 0x8)) * 4))) = 0;
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      iVar4 = iVar4 + 0x10;
    } while ((*(uint *)(gen_frame + 0x8)) < *(uint *)((int)this + 4));
  }
  if (*(int *)((int)this + 0xc) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00cb4870 */
GEN_NOFRAME uint GEN_THISCALL F_00cb4870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  uVar1 = F_00cb47a0(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cb4880 */
GEN_FRAME uint GEN_THISCALL F_00cb4880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  F_00cb47a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb48d0 */
GEN_FRAME uint GEN_THISCALL F_00cb48d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb48d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 8) == 0) {
    if (*(int *)(param_2 + 4) == 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1);
      *(uint *)(param_2 + 4) = uVar2;
    }
    piVar1 = *(int * PTR32 *)(param_2 + 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      *(uint *)(param_2 + 8) = uVar2;
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2 GEN_EDX_ARG);
        if ((char)uVar2 != '\0') goto LAB_00cb491e;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 4) + 4))))(*(int * PTR32 *)(param_2 + 4) GEN_EDX_ARG);
    }
  }
LAB_00cb491e: ;
  return *(uint *)(param_2 + 8);
}

/* ref: FUN_00cb49a0 */
GEN_FRAME uint GEN_THISCALL F_00cb49a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb49a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb49c0 */
GEN_FRAME byte GEN_THISCALL F_00cb49c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb49c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb49e0 */
GEN_FRAME byte GEN_THISCALL F_00cb49e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb49e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb4a10 */
GEN_FRAME uint GEN_THISCALL F_00cb4a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  F_00cb4120(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00cb4320(this GEN_EDX_ARG,param_1);
  *(undefined8 *)((int)this + 0xc) = *param_2;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 1);
  return (uint)this;
}

/* ref: FUN_00cb4a60 */
GEN_FRAME uint GEN_THISCALL F_00cb4a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb4a70 */
GEN_FRAME uint GEN_THISCALL F_00cb4a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4a80 */
GEN_FRAME byte GEN_THISCALL F_00cb4a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4a80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb4aa0 */
GEN_FRAME uint GEN_THISCALL F_00cb4aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00cb4120(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00cb4320(this GEN_EDX_ARG,param_1);
  *(undefined8 *)((int)this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return (uint)this;
}

/* ref: FUN_00cb4af0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb4af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00cb4b30 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb4b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4b30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined * this_00;
  
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106ff0b));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x1c,0)));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this_00;
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0;
  if (this_00 == (undefined *)0x0) {
    this_00 = (undefined *)0x0;
  }
  else {
    F_00cb4120(this_00 GEN_EDX_ARG);
    iVar1 = (*(int *)&gen_args[1]);
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    *(undefined4 *)((int)this_00 + 0x14) = 0;
    *(undefined4 *)((int)this_00 + 0xc) = 1;
    *(undefined4 *)((int)this_00 + 0x18) = 0;
    F_00cb4320(this_00 GEN_EDX_ARG,(*(int *)&gen_args[1]));
    *(undefined8 *)((int)this_00 + 0xc) = *(undefined8 *)(iVar1 + 0xc);
    *(undefined4 *)((int)this_00 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
  }
  *(undefined4 *)((int)this_00 + 0x18) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 1;
  *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = this_00;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 0;
}

/* ref: FUN_00cb4bd0 */
GEN_FRAME uint GEN_THISCALL F_00cb4bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *param_2;
  if (iVar2 == iVar1) {
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) - 1;
    *(undefined4 *)((int)this + 8) = uVar3;
    *param_1 = uVar3;
    return (uint)param_1;
  }
  iVar4 = *(int *)(iVar1 + 0x18);
  while( true ) {
    if (iVar4 == 0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    iVar5 = *(int *)(iVar1 + 0x18);
    if (iVar2 == iVar5) break;
    iVar4 = *(int *)(iVar5 + 0x18);
    iVar1 = iVar5;
  }
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) - 1;
  *param_1 = *(undefined4 *)(*param_2 + 0x18);
  return (uint)param_1;
}

/* ref: FUN_00cb4c40 */
GEN_FRAME uint GEN_THISCALL F_00cb4c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb4c50 */
GEN_FRAME uint GEN_STDCALL F_00cb4c50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4c50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb4c60 */
GEN_FRAME uint GEN_THISCALL F_00cb4c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00cb4cc0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb4cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint in_ecx;
  
  iVar1 = *(int *)((int)this + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return in_EAX;
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,iVar1);
        *(uint *)(iVar1 + 0x10) = in_EAX;
      }
      piVar2 = *(int * PTR32 *)(iVar1 + 0x10);
      if (piVar2 != (int *)0x0) {
        in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
        *(uint *)(iVar1 + 0x14) = in_ecx;
        if ((in_ecx == 0) || (in_EAX = F_00cb09f0(in_ecx GEN_EDX_ARG), (char)in_EAX == '\0')) {
          in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x10) + 4))))(*(int * PTR32 *)(iVar1 + 0x10) GEN_EDX_ARG);
        }
      }
    }
    if (iVar1 == 0) break;
    iVar1 = *(int *)(iVar1 + 0x18);
  }
  return in_EAX;
}

/* ref: FUN_00cb4d30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb4d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  for (iVar1 = *(int *)((int)this + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x10) + 4))))(*(int * PTR32 *)(iVar1 + 0x10) GEN_EDX_FWD);
    }
    if (iVar1 == 0) break;
  }
  iVar1 = *(int *)((int)this + 0x10);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,iVar1);
    iVar1 = iVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return 0;
}

/* ref: FUN_00cb4d90 */
GEN_FRAME uint GEN_THISCALL F_00cb4d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4d90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129744));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4dc0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb4dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4dc0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106ff3b));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129744));
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0;
  F_00cb4d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,iVar2);
    iVar2 = iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 0;
}

/* ref: FUN_00cb4e40 */
GEN_FRAME uint GEN_THISCALL F_00cb4e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10);
  *(int *)((int)this + 0x18) = iVar1;
  if (iVar1 != 0) {
    F_00cb4320(param_1 GEN_EDX_FWD,iVar1);
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
  }
  return 0;
}

/* ref: FUN_00cb4e70 */
GEN_FRAME uint GEN_THISCALL F_00cb4e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,*param_1);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  *(undefined4 * PTR32 *)((int)this + 0x18) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *param_1 = *puVar1;
    uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
    return uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00cb4ed0 */
GEN_FRAME uint GEN_THISCALL F_00cb4ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x18)));
    *(int *)((int)this + 0x18) = iVar1;
    if (iVar1 != 0) {
      F_00cb4320(param_1 GEN_EDX_FWD,iVar1);
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
    }
  }
  return 0;
}

/* ref: FUN_00cb4f10 */
GEN_FRAME uint GEN_THISCALL F_00cb4f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,*param_1);
  if (*(int *)((int)this + 0x18) != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x18)));
    *(undefined4 * PTR32 *)((int)this + 0x18) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *param_1 = *puVar1;
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00cb4f80 */
GEN_FRAME uint GEN_THISCALL F_00cb4f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  byte bVar2;
  
  for (iVar1 = *(int *)((int)this + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    bVar2 = F_00cb4170(param_2 GEN_EDX_FWD,iVar1);
    if (bVar2 != 0) {
      *param_1 = iVar1;
      return (uint)param_1;
    }
    if (iVar1 == 0) break;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb4fd0 */
GEN_FRAME uint GEN_THISCALL F_00cb4fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x10);
  if (iVar3 != 0) {
    while (bVar1 = F_00cb4170(param_1 GEN_EDX_FWD,iVar3), bVar1 == 0) {
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar3 != 0) {
      uVar2 = F_00cb48d0(this GEN_EDX_ARG,param_1,iVar3 + 0xc);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00cb5020 */
GEN_FRAME byte GEN_THISCALL F_00cb5020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(param_1 GEN_EDX_FWD,iVar2), bVar1 == 0) {
      if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x18), iVar2 == 0)) goto LAB_00cb505d;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return 0;
    }
  }
LAB_00cb505d: ;
  F_00cb4120(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) = 0;
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00cb4320(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00cb4b30((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00cb50e0 */
GEN_FRAME byte GEN_THISCALL F_00cb50e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb50e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar2), bVar1 == 0) {
      if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x18), iVar2 == 0)) goto LAB_00cb512e;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return 0;
    }
  }
LAB_00cb512e: ;
  F_00cb4120(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) = 0;
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00cb4320(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00cb4b30((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00cb51b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb51b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb51b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  int iVar2;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(this_00 GEN_EDX_FWD,iVar2), bVar1 == 0) {
      if (iVar2 == 0) {
        return;
      }
      iVar2 = *(int *)(iVar2 + 0x18);
      if (iVar2 == 0) {
        return;
      }
    }
    if ((iVar2 != 0) &&
       (*(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) - 1, *(int *)(iVar2 + 0xc) < 1)) {
      (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)iVar2;
      if (*(int *)(iVar2 + 0x14) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x10) + 4))))(*(int * PTR32 *)(iVar2 + 0x10) GEN_EDX_ARG);
      }
      F_00cb4bd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined * PTR32 *)&gen_args[1]));
    }
  }
  return;
}

/* ref: FUN_00cb5220 */
GEN_FRAME uint GEN_THISCALL F_00cb5220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = F_00cb42a0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,param_1);
  iVar3 = *(int *)((int)this + 0x10);
  if (iVar3 != 0) {
    while( true ) {
      bVar1 = F_00cb4170(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,iVar3);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      if (iVar3 == 0) goto LAB_00cb52a1;
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == 0) {
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return uVar2;
      }
    }
    (*(int *)(gen_frame + 0x8)) = iVar3;
    if ((iVar3 != 0) &&
       (*(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) - 1, *(int *)(iVar3 + 0xc) < 1)) {
      if (*(int *)(iVar3 + 0x14) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 0x10) + 4))))(*(int * PTR32 *)(iVar3 + 0x10) GEN_EDX_ARG);
      }
      uVar2 = F_00cb4bd0((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
    }
  }
LAB_00cb52a1: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00cb52c0 */
GEN_FRAME uint GEN_THISCALL F_00cb52c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb52c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4dc0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb52f0 */
GEN_FRAME uint F_00cb52f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb52f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00c472af(((char *)(gen_frame + 0x8)),0x100,"Common.Component.Excel.%s",param_2);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cb5350 */
GEN_FRAME uint F_00cb5350(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xcb5350u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x400,param_1,((undefined *)&gen_args[1]));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 8) + 4))))(REFG(int, 0x15d7724) + 8 GEN_EDX_ARG,((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cb53b0 */
GEN_FRAME uint F_00cb53b0(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xcb53b0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x400,param_1,((undefined *)&gen_args[1]));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 8) + 8))))(REFG(int, 0x15d7724) + 8 GEN_EDX_ARG,((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cb5430 */
GEN_FRAME byte GEN_THISCALL F_00cb5430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (*(short *)((int)this + 4) != *(short *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  pbVar2 = *(byte * PTR32 *)this;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5490 */
GEN_NOFRAME uint GEN_THISCALL F_00cb5490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb54b0 */
GEN_FRAME byte GEN_THISCALL F_00cb54b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb54b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (**(int * PTR32 *)this != *(int *)*param_1) {
    return 0;
  }
  pbVar3 = (byte *)((int *)*param_1 + 1);
  pbVar2 = ((byte *)GEN_TOP((*(int * PTR32 *)this + 1)));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5510 */
GEN_FRAME byte GEN_THISCALL F_00cb5510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  uint * puVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (**(uint * PTR32 *)this != (uint)*(ushort *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  puVar2 = *(uint * PTR32 *)this + 1;
  while( true ) {
    bVar1 = (byte)*puVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = *(byte *)((int)puVar2 + 1);
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    puVar2 = (uint *)((int)puVar2 + 2);
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5570 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb5570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  byte bVar5;
  char * pcVar6;
  
  pcVar6 = ((char *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  pcVar3 = pcVar6;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  bVar5 = 0;
  uVar4 = 0;
  if ((int)pcVar3 - (int)(pcVar6 + 1) != -1) {
    do {
      pbVar1 = (byte *)(pcVar6 + uVar4);
      uVar4 = uVar4 + 1;
      bVar5 = bVar5 * '\x02' ^ *pbVar1;
    } while (uVar4 < ((int)pcVar3 - (int)(pcVar6 + 1)) + 1U);
  }
  *(byte *)((int)this + 3) = bVar5;
  return 0;
}

/* ref: FUN_00cb55b0 */
GEN_FRAME byte GEN_THISCALL F_00cb55b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb55b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != (char)(*param_1 >> 0x18)) {
    return 0;
  }
  pbVar2 = ((byte *)GEN_TOP(((*param_1 & 0xffffff) + (int)param_1)));
  pbVar3 = ((byte *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  while( true ) {
    bVar1 = *pbVar3;
    bVar4 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar3[1];
    bVar4 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5630 */
GEN_FRAME byte GEN_THISCALL F_00cb5630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != *(char *)*param_1) {
    return 0;
  }
  pbVar3 = (byte *)((char *)*param_1 + 4);
  pbVar2 = ((byte *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb56a0 */
GEN_FRAME byte GEN_THISCALL F_00cb56a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb56a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != *(char *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  pbVar2 = ((byte *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5710 */
GEN_FRAME uint F_00cb5710(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5710u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb5730 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb5730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  ushort uVar6;
  
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar6 = 0;
  pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
  *(undefined2 *)((int)this + 4) = 0;
  if (*(char *)((int)this + 6) == '\0') {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,pcVar3,0);
    *(uint *)this = uVar5;
    pcVar4 = (char *)0x0;
    if (pcVar3 != (char *)0x0) {
      do {
        pcVar4[*(int *)this] = param_1[(int)pcVar4];
        pcVar1 = param_1 + (int)pcVar4;
        pcVar4 = pcVar4 + 1;
        *(short *)((int)this + 4) = *(short *)((int)this + 4) * 2 ^ (short)*pcVar1;
      } while (pcVar4 < pcVar3);
    }
  }
  else {
    pcVar4 = (char *)0x0;
    *(char * PTR32 *)this = param_1;
    if (pcVar3 != (char *)0x0) {
      do {
        uVar6 = (short)param_1[(int)pcVar4] ^ uVar6 * 2;
        pcVar4 = pcVar4 + 1;
        *(ushort *)((int)this + 4) = uVar6;
      } while (pcVar4 < pcVar3);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00cb57e0 */
GEN_FRAME uint GEN_THISCALL F_00cb57e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb57e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  uint * puVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)this != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,iVar4 + 5,0);
  *(uint *)this = uVar5;
  uVar6 = 0;
  uVar5 = 0;
  if (iVar4 == -1) {
    **(undefined4 * PTR32 *)this = 0;
    return uVar5;
  }
  do {
    *(char *)(*(int *)this + 4 + uVar5) = param_1[uVar5];
    pcVar3 = param_1 + uVar5;
    uVar5 = uVar5 + 1;
    uVar6 = uVar6 * 2 ^ (int)*pcVar3;
  } while (uVar5 < iVar4 + 1U);
  puVar2 = *(uint * PTR32 *)this;
  *puVar2 = uVar6;
  return (uint)puVar2;
}

/* ref: FUN_00cb5870 */
GEN_FRAME uint GEN_THISCALL F_00cb5870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00cb57e0(this GEN_EDX_FWD,param_1);
  }
  return uVar1;
}

/* ref: FUN_00cb5890 */
GEN_FRAME uint GEN_THISCALL F_00cb5890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb58a0 */
GEN_NOFRAME byte GEN_THISCALL F_00cb58a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb58a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = (char *)*in_ecx;
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) && (pcVar1[3] == 'F')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb58d0 */
GEN_FRAME uint GEN_THISCALL F_00cb58d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb58d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)((int)this + 4) + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00cb58f0 */
GEN_NOFRAME byte GEN_THISCALL F_00cb58f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb58f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = (char *)*in_ecx;
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) && (pcVar1[3] == 'T')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb5920 */
GEN_NOFRAME uint GEN_THISCALL F_00cb5920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char * PTR32 *)((int)this + 4) != (char *)0x0) {
    cVar1 = **(char * PTR32 *)((int)this + 4);
    while ((cVar1 != '\n' &&
           ((cVar1 != '\r' || (cVar1 = '\r', *((char *)GEN_TOP((*(int *)((int)this + 4) + 1))) != '\n'))))) {
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      cVar1 = **(char * PTR32 *)((int)this + 4);
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + (cVar1 != '\n') + 1;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == *(uint *)(*(int *)this + 4)) {
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00cb5970 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb5970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb5970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  char cVar1;
  byte bVar2;
  bool bVar3;
  char * pcVar4;
  char * pcVar5;
  byte * pbVar6;
  
  pcVar5 = *(char * PTR32 *)((int)this + 4);
  cVar1 = *pcVar5;
  pcVar4 = param_1;
  while (cVar1 != ',') {
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar5;
  }
  builtin_strncpy(pcVar4,".exh",5);
  pbVar6 = (byte *)(pcVar5 + 1);
  bVar3 = false;
  *param_2 = 0;
  while (((bVar2 = *pbVar6, bVar2 != 0 && (bVar2 != 0xd)) && (bVar2 != 10))) {
    if (bVar2 == 0x2d) {
      bVar3 = true;
      pbVar6 = pbVar6 + 1;
    }
    else {
      if ((byte)(bVar2 - 0x30) < 10) {
        *param_2 = (bVar2 - 0x30) + *param_2 * 10;
      }
      pbVar6 = pbVar6 + 1;
    }
  }
  if (bVar3) {
    *param_2 = -*param_2;
  }
  return 0;
}

/* ref: FUN_00cb59f0 */
GEN_FRAME uint GEN_THISCALL F_00cb59f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb59f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_2 + param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00cb5a10 */
GEN_NOFRAME unsigned int F_00cb5a10(void)
{
  GEN_ENTER(0xcb5a10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00cb5a20 */
GEN_FRAME uint GEN_THISCALL F_00cb5a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 * PTR32 *)this = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  F_00cb5920(this GEN_EDX_FWD);
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb5a50 */
GEN_FRAME uint F_00cb5a50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 8,0);
  return uVar1;
}

/* ref: FUN_00cb5a70 */
GEN_FRAME uint F_00cb5a70(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5a70u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb5aa0 */
GEN_FRAME uint GEN_THISCALL F_00cb5aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  char * pcVar3;
  int iVar4;
  
  *(char * PTR32 *)this = param_1;
  if ((((*param_1 == 'E') && (param_1[1] == 'X')) && (param_1[2] == 'L')) && (param_1[3] == 'F')) {
    iVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,iVar4 * 8,0)));
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
    pcVar3 = (char *)(*(int *)this + 0x10);
    do {
      *puVar2 = pcVar3;
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      puVar2[1] = pcVar3;
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      while (cVar1 != '\n') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00cb5b50 */
GEN_NOFRAME uint GEN_THISCALL F_00cb5b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = *(char * PTR32 *)this;
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) &&
     ((pcVar1[3] == 'F' && (pcVar1 = (char *)0x0, *(int *)((int)this + 4) != 0)))) {
    pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)((int)this + 4))));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)pcVar1;
}

/* ref: FUN_00cb5b90 */
GEN_FRAME uint GEN_THISCALL F_00cb5b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = this;
  if (this == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)this;
  }
  param_1[1] = uVar1;
  param_1[2] = 0xffffffff;
  F_00cb5920(param_1 GEN_EDX_FWD);
  return ((uint)(uint)(param_1));
}

/* ref: FUN_00cb5bc0 */
GEN_FRAME uint GEN_STDCALL F_00cb5bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5bc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  F_00cb5920(param_1 GEN_EDX_ARG);
  return ((uint)(uint)(param_1));
}

/* ref: FUN_00cb5bf0 */
GEN_FRAME uint GEN_THISCALL F_00cb5bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD,param_1,*(undefined4 *)((int)this + 0x14));
  return uVar1;
}

/* ref: FUN_00cb5c10 */
GEN_FRAME uint GEN_THISCALL F_00cb5c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 6) = 0;
  F_00cb5730(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00cb5c30 */
GEN_FRAME uint GEN_THISCALL F_00cb5c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5c30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106ff68));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(undefined4 *)&gen_args[1]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb5ca0 */
GEN_FRAME uint GEN_THISCALL F_00cb5ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb5ca0u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106ff98));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(undefined4 *)&gen_args[2]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb5d10 */
GEN_FRAME uint GEN_THISCALL F_00cb5d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5d10u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  uint uVar1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106ffc8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar1;
}

/* ref: FUN_00cb5da0 */
GEN_FRAME uint GEN_THISCALL F_00cb5da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5da0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106fff8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  }
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  if (((*(uint *)&gen_args[1]) & 1) != 0) {
    F_00406ad0((*(undefined * PTR32 *)&gen_args[0]));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb5e50 */
GEN_FRAME uint F_00cb5e50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5e50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb5e70 */
GEN_FRAME uint F_00cb5e70(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5e70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb5e90 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb5e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cb5730(this GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00cb5ea0 */
GEN_FRAME uint GEN_THISCALL F_00cb5ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00cb5730(this GEN_EDX_FWD,*param_1);
  return (uint)this;
}

/* ref: FUN_00cb5ec0 */
GEN_FRAME uint GEN_THISCALL F_00cb5ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cb5730(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00cb5ee0 */
GEN_FRAME unsigned int F_00cb5ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5ee0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  do {
  } while (*param_1 != '\0');
  return 0;
}

/* ref: FUN_00cb5f00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb5f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5f00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  return;
}

/* ref: FUN_00cb5f10 */
GEN_FRAME uint GEN_THISCALL F_00cb5f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb5f80 */
GEN_FRAME uint F_00cb5f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5f80u, gen_a0, gen_a1, 0u, 0u);
  char in_cl = (char)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  if (in_cl == '\0') {
    return 0xffffffff;
  }
  if (*param_2 != '\0') {
    do {
    } while (*param_2 != in_cl);
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb5fd0 */
GEN_NOFRAME uint F_00cb5fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5fd0u, gen_a0, 0u, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*in_esi != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*in_esi);
    *in_esi = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6010 */
GEN_NOFRAME uint GEN_THISCALL F_00cb6010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb6010u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(uint *)((int)this + 0x54) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 8))))
                      (*(int * PTR32 *)((int)this + 0x58) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return *(uint *)((int)this + 0x54);
}

/* ref: FUN_00cb6030 */
GEN_NOFRAME uint GEN_THISCALL F_00cb6030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb6030u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)((int)this + 0x54) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x14))))
                      (*(int * PTR32 *)((int)this + 0x58) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cb6050 */
GEN_NOFRAME unsigned int F_00cb6050(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6050u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((0 < *(int *)(param_1 + 0x60)) && (*(int *)(param_1 + 100) != 0)) {
                    
                    
    return (uint)(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 100) + 0x10))))());
  }
  return 0;
}

/* ref: FUN_00cb6070 */
GEN_FRAME uint GEN_STDCALL F_00cb6070(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x134c234))[(int)(param_1)];
}

/* ref: FUN_00cb6090 */
GEN_FRAME uint GEN_STDCALL F_00cb6090(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x134c268) + param_1 * 4);
}

/* ref: FUN_00cb60b0 */
GEN_FRAME uint GEN_STDCALL F_00cb60b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb60b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x134c29c) + param_1 * 4);
}

/* ref: FUN_00cb60d0 */
GEN_FRAME uint GEN_THISCALL F_00cb60d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb60d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 100) + 0x1c))))
                            (*(int * PTR32 *)((int)this + 100) GEN_EDX_ARG,param_1)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    if (uVar2 != 0) {
      uVar2 = F_00cb09f0(uVar2 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        return (uint)piVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6110 */
GEN_FRAME uint GEN_THISCALL F_00cb6110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x54) == 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x20))))
                              (*(int * PTR32 *)((int)this + 0x58) GEN_EDX_ARG,param_1,param_2)));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2 GEN_EDX_ARG);
        if ((char)uVar2 != '\0') {
          F_00cb4320(param_2 GEN_EDX_ARG,piVar1 + 2);
          return (uint)piVar1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6170 */
GEN_FRAME uint GEN_THISCALL F_00cb6170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (*(int *)((int)this + 0x54) == 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x58);
    F_00cb4120(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD);
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0xc)))));
    if (piVar1 == (int *)0x0) {
      *param_2 = -1;
    }
    else {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2 GEN_EDX_ARG);
        if ((char)uVar2 != '\0') {
          *param_2 = piVar1[2];
          F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
          return (uint)piVar1;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00cb6200 */
GEN_FRAME uint GEN_THISCALL F_00cb6200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb6200u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x24))))
                    (*(int * PTR32 *)((int)this + 0x58) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00cb6210 */
GEN_NOFRAME uint GEN_THISCALL F_00cb6210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x6e);
}

/* ref: FUN_00cb6220 */
GEN_FRAME ushort GEN_THISCALL F_00cb6220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x6e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb6230 */
GEN_FRAME uint GEN_THISCALL F_00cb6230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: FUN_00cb6240 */
GEN_FRAME uint GEN_THISCALL F_00cb6240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0x24) + 2 + param_2 * 6)));
}

/* ref: FUN_00cb6260 */
GEN_FRAME uint GEN_THISCALL F_00cb6260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) +
                (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 2 + param_1 * 6))) * 6)));
}

/* ref: FUN_00cb6280 */
GEN_FRAME uint GEN_THISCALL F_00cb6280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 4 +
                (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 2 + param_1 * 6))) * 6)));
}

/* ref: FUN_00cb62a0 */
GEN_FRAME byte GEN_THISCALL F_00cb62a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb62a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((short *)GEN_TOP((*(int *)((int)this + 0x24) + 2 + param_1 * 6))) != -1;
}

/* ref: FUN_00cb62d0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb62d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb62d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: FUN_00cb62e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb62e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb62e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  return;
}

/* ref: FUN_00cb6360 */
GEN_FRAME uint GEN_THISCALL F_00cb6360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6370 */
GEN_FRAME byte GEN_THISCALL F_00cb6370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb63b0 */
GEN_FRAME uint GEN_THISCALL F_00cb63b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb63b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb63d0 */
GEN_FRAME byte GEN_THISCALL F_00cb63d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb63d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb6410 */
GEN_FRAME uint GEN_THISCALL F_00cb6410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00cb6430 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb6430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,3);
      return;
    }
    F_00406b30(puVar1 - 1);
  }
  return;
}

/* ref: FUN_00cb6460 */
GEN_FRAME byte GEN_THISCALL F_00cb6460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6460u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx != param_2;
}

/* ref: FUN_00cb6490 */
GEN_FRAME uint GEN_THISCALL F_00cb6490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb64d0 */
GEN_FRAME uint GEN_THISCALL F_00cb64d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb64d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  if ((param_1 & 2) != 0) {
    F_01051d29(this,0x58,*(int *)((int)this - 4),((code *)REFP(0xcb6430)));
    if ((param_1 & 1) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(int)this - 4U);
    }
    return (int)this - 4U;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
    }
  }
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00cb6590 */
GEN_FRAME uint GEN_THISCALL F_00cb6590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb65a0 */
GEN_FRAME uint GEN_THISCALL F_00cb65a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb65a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb65f0 */
GEN_FRAME uint GEN_THISCALL F_00cb65f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb65f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb6600 */
GEN_FRAME uint GEN_THISCALL F_00cb6600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6620 */
GEN_FRAME uint GEN_THISCALL F_00cb6620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb6630 */
GEN_FRAME uint GEN_THISCALL F_00cb6630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6640 */
GEN_FRAME byte GEN_THISCALL F_00cb6640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6640u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb6660 */
GEN_FRAME uint GEN_THISCALL F_00cb6660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00cb6680 */
GEN_NOFRAME uint GEN_THISCALL F_00cb6680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6680u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cb66a0 */
GEN_FRAME uint GEN_THISCALL F_00cb66a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb66b0 */
GEN_FRAME uint GEN_THISCALL F_00cb66b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb66d0 */
GEN_FRAME byte GEN_THISCALL F_00cb66d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb66f0 */
GEN_FRAME uint GEN_THISCALL F_00cb66f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6710 */
GEN_FRAME uint GEN_THISCALL F_00cb6710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb6720 */
GEN_FRAME uint GEN_THISCALL F_00cb6720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb6760 */
GEN_FRAME uint GEN_THISCALL F_00cb6760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb6770 */
GEN_FRAME uint GEN_THISCALL F_00cb6770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb6780 */
GEN_FRAME uint GEN_THISCALL F_00cb6780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb6790 */
GEN_FRAME uint GEN_THISCALL F_00cb6790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb67a0 */
GEN_FRAME uint GEN_THISCALL F_00cb67a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb67a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb67b0 */
GEN_FRAME uint F_00cb67b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb67b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 6,0);
  return uVar1;
}

/* ref: FUN_00cb67d0 */
GEN_FRAME uint F_00cb67d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb67d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 2,0);
  return uVar1;
}

/* ref: FUN_00cb67f0 */
GEN_FRAME uint F_00cb67f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb67f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6820 */
GEN_FRAME uint F_00cb6820(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6820u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6850 */
GEN_FRAME uint F_00cb6850(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6850u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6880 */
GEN_FRAME unsigned int F_00cb6880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6880u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  if (*param_2 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_2);
    *param_2 = 0;
  }
  param_2[0x41] = 0;
  if (in_eax != (char *)0x0) {
    pcVar2 = in_eax;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,pcVar2 + (1 - (int)(in_eax + 1)),0);
    *param_2 = uVar3;
    F_00c46aa0(uVar3,in_eax,pcVar2 + (1 - (int)(in_eax + 1)));
    pcVar2 = (char *)*param_2;
    while (*pcVar2 != '\0') {
      if (*param_3 == '\0') {
        param_2[param_2[0x41] + 1] = (uint)pcVar2;
        param_2[0x41] = param_2[0x41] + 1;
        while( true ) {
          if (*pcVar2 == '\0') {
            return 0;
          }
          if (*param_3 != '\0') break;
          pcVar2 = pcVar2 + 1;
        }
        do {
        } while (*param_3 != *pcVar2);
        *pcVar2 = '\0';
        pcVar2 = pcVar2 + 1;
      }
      else {
        do {
        } while (*param_3 != *pcVar2);
        pcVar2 = pcVar2 + 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6940 */
GEN_FRAME uint GEN_THISCALL F_00cb6940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6940u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  undefined * PTR32 * ppvVar1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070028));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  ppvVar1 = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe))) == '\0') && (ppvVar1 = (undefined * PTR32 *)0x0, *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0)
     ) {
    ppvVar1 = ((undefined * PTR32 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) == '\0') && (ppvVar1 = (undefined * PTR32 *)0x0, *(int *)(*(undefined * PTR32 *)&gen_args[0]) != 0)) {
    ppvVar1 = ((undefined * PTR32 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*(int *)(*(undefined * PTR32 *)&gen_args[0]))));
    *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)ppvVar1;
}

/* ref: FUN_00cb69d0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb69d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb69d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x84);
}

/* ref: FUN_00cb69e0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb69e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb69e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6a20 */
GEN_FRAME uint GEN_THISCALL F_00cb6a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6a20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb6a30 */
GEN_FRAME uint GEN_THISCALL F_00cb6a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6a30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb6a40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb6a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129810));
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00cb6a80 */
GEN_FRAME uint GEN_THISCALL F_00cb6a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,0xc,0)));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = *(undefined4 *)((int)this + 8);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar1;
    return (uint)puVar1;
  }
  REFG(uint, 0x00000008) = *(undefined4 *)((int)this + 8);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00cb6ae0 */
GEN_FRAME uint GEN_THISCALL F_00cb6ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *param_2;
  if (iVar2 == iVar1) {
    uVar3 = *(undefined4 *)(iVar1 + 8);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) - 1;
    *(undefined4 *)((int)this + 8) = uVar3;
    *param_1 = uVar3;
    return (uint)param_1;
  }
  iVar4 = *(int *)(iVar1 + 8);
  while( true ) {
    if (iVar4 == 0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    iVar5 = *(int *)(iVar1 + 8);
    if (iVar2 == iVar5) break;
    iVar4 = *(int *)(iVar5 + 8);
    iVar1 = iVar5;
  }
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) - 1;
  *param_1 = *(undefined4 *)(*param_2 + 8);
  return (uint)param_1;
}

/* ref: FUN_00cb6b50 */
GEN_FRAME uint GEN_THISCALL F_00cb6b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb6b60 */
GEN_FRAME uint GEN_STDCALL F_00cb6b60(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6b60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb6b80 */
GEN_FRAME uint GEN_THISCALL F_00cb6b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6b80u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070063));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 1;
  F_00cb5730((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(*(undefined4 * PTR32 *)&gen_args[1]));
  F_00cb5730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,*(*(undefined4 * PTR32 *)&gen_args[2]));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb6c00 */
GEN_FRAME uint GEN_THISCALL F_00cb6c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6c00u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(*(uint * PTR32 *)&gen_args[1]);
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x1070093));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x1129820));
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(uint * PTR32 *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    (*(uint * PTR32 *)&gen_args[1]) = (uint *)F_00406a50(4);
  }
  else {
    uVar3 = -(uint)((int)(ZEXT48((*(uint * PTR32 *)&gen_args[1])) * 0x58 >> 0x20) != 0) | (uint)(ZEXT48((*(uint * PTR32 *)&gen_args[1])) * 0x58);
    (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                                (REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0)));
  }
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 1;
  (*(volatile undefined4 *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(volatile undefined4 *)(gen_frame + 0x28)), 1, 3),1);
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  else {
    puVar1 = (*(uint * PTR32 *)&gen_args[1]) + 1;
    *(*(uint * PTR32 *)&gen_args[1]) = uVar2;
    F_01051d8c(puVar1,0x58,uVar2,((code *)REFP(0xcb6680)),((code *)REFP(0xcb6430)));
    *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = puVar1;
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb6cd0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb6cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00cb6ce0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb6ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: FUN_00cb6cf0 */
GEN_NOFRAME byte F_00cb6cf0(void)
{
  GEN_ENTER(0xcb6cf0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00cb6d00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb6d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: FUN_00cb6d10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb6d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 8) != 0) {
    iVar3 = 0;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3))) + 8))))
                         (*(int *)((int)this + 4) + iVar3)));
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      }
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3))) + 0xc))))
                (*(int *)((int)this + 4) + iVar3,0);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (uVar2 < *(uint *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined8 *)((int)this + 0x18) = 0;
  *(undefined8 *)((int)this + 0x20) = 0;
  *(undefined8 *)((int)this + 0x28) = 0;
  *(undefined8 *)((int)this + 0x30) = 0;
  *(undefined8 *)((int)this + 0x38) = 0;
  *(undefined8 *)((int)this + 0x40) = 0;
  *(undefined8 *)((int)this + 0x48) = 0;
  *(undefined8 *)((int)this + 0x50) = 0;
  return;
}

/* ref: FUN_00cb6d90 */
GEN_FRAME byte GEN_THISCALL F_00cb6d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar4 = 0;
  if (*(int *)((int)this + 8) != 0) {
    iVar5 = 0;
    do {
      pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar5))) + 8))))
                                 (*(int *)((int)this + 4) + iVar5)));
      pcVar1 = *(gen_code32 *)(*param_1 + 4);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
      uVar3 = (*pcVar1)(param_1,*(int *)((int)this + 4) + 8 + iVar5,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
      if ((char)uVar3 == '\0') {
        return 0;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x18;
    } while (uVar4 < *(uint *)((int)this + 8));
  }
  return 1;
}

/* ref: FUN_00cb6df0 */
GEN_FRAME uint GEN_THISCALL F_00cb6df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 8 + *(int *)((int)this + 8) * 0x18))) GEN_EDX_FWD,param_1);
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 8) * 0x18)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,param_2);
  uVar2 = *(ushort *)(param_1 + 4) & 0xf;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x14 + *(int *)((int)this + 8) * 0x18))) =
       *(undefined4 *)((int)this + uVar2 * 4 + 0x18);
  *(int *)((int)this + uVar2 * 4 + 0x18) = *(int *)((int)this + 4) + *(int *)((int)this + 8) * 0x18;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return uVar2;
}

/* ref: FUN_00cb6e60 */
GEN_FRAME uint GEN_THISCALL F_00cb6e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(uint *)(in_ecx + 0x10) <= (*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) <= *(uint *)(in_ecx + 0x14))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb6e90 */
GEN_FRAME uint GEN_THISCALL F_00cb6e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    for (uVar1 = *((uint *)GEN_TOP(((int)this + (*(ushort *)(param_1 + 4) & 0xf) * 4 + 0x18))); uVar1 != 0;
        uVar1 = *(uint *)(uVar1 + 0x14)) {
      bVar2 = F_00cb4170((undefined *)(uVar1 + 8) GEN_EDX_FWD,param_1);
      if (bVar2 != 0) {
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6ee0 */
GEN_FRAME uint GEN_THISCALL F_00cb6ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00cb4320(param_2 GEN_EDX_FWD,*(int *)((int)this + 4) + 8 + param_1 * 0x18);
  }
  return *(int *)((int)this + 4) + param_1 * 0x18;
}

/* ref: FUN_00cb6f10 */
GEN_FRAME uint GEN_THISCALL F_00cb6f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint * in_EAX = 0;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(uint *)((int)this + 0xc) != 0) {
    iVar2 = *(int *)((int)this + 8);
    in_EAX = (uint *)(iVar2 + 0x14);
    do {
      if ((in_EAX[-1] <= *param_1) && (*param_1 <= *in_EAX)) {
        iVar4 = uVar3 * 0x58 + iVar2;
        F_00cb4320(((undefined *)GEN_TOP((*(int *)(iVar4 + 4) + 8 + *(int *)(uVar3 * 0x58 + 8 + iVar2) * 0x18))) GEN_EDX_FWD,
                     param_1);
        piVar1 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) + *(int *)(iVar4 + 8) * 0x18)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,param_2);
        uVar3 = (ushort)param_1[1] & 0xf;
        *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 4) + 0x14 + *(int *)(iVar4 + 8) * 0x18))) =
             *(undefined4 *)(iVar4 + 0x18 + uVar3 * 4);
        *(int *)(iVar4 + 0x18 + uVar3 * 4) = *(int *)(iVar4 + 4) + *(int *)(iVar4 + 8) * 0x18;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        return 1;
      }
      uVar3 = uVar3 + 1;
      in_EAX = in_EAX + 0x16;
    } while (uVar3 < *(uint *)((int)this + 0xc));
  }
  return (uint)in_EAX & 0xffffff00;
}

/* ref: FUN_00cb6fc0 */
GEN_FRAME uint GEN_THISCALL F_00cb6fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  int local_8;
  
  local_c = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    local_8 = 0;
    do {
      iVar4 = 0;
      iVar3 = *(int *)((int)this + 8) + local_8;
      uVar2 = 0;
      if (*(int *)(iVar3 + 8) != 0) {
        do {
          puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + iVar4))) + 8))))
                             (*(int *)(iVar3 + 4) + iVar4)));
          if (puVar1 != (undefined4 *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
          }
          ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + iVar4))) + 0xc))))(*(int *)(iVar3 + 4) + iVar4,0);
          uVar2 = uVar2 + 1;
          iVar4 = iVar4 + 0x18;
        } while (uVar2 < *(uint *)(iVar3 + 8));
      }
      local_8 = local_8 + 0x58;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined8 *)(iVar3 + 0x18) = 0;
      *(undefined8 *)(iVar3 + 0x20) = 0;
      *(undefined8 *)(iVar3 + 0x28) = 0;
      *(undefined8 *)(iVar3 + 0x30) = 0;
      *(undefined8 *)(iVar3 + 0x38) = 0;
      *(undefined8 *)(iVar3 + 0x40) = 0;
      *(undefined8 *)(iVar3 + 0x48) = 0;
      in_EAX = local_c + 1;
      *(undefined8 *)(iVar3 + 0x50) = 0;
      local_c = in_EAX;
    } while (in_EAX < *(uint *)((int)this + 0xc));
  }
  return in_EAX;
}

/* ref: FUN_00cb7080 */
GEN_FRAME uint GEN_THISCALL F_00cb7080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 0xc) != 0) {
    puVar4 = ((uint *)GEN_TOP((*(int *)((int)this + 8) + 0x14)));
    do {
      if ((puVar4[-1] <= *param_1) && (*param_1 <= *puVar4)) {
        iVar3 = uVar2 * 0x58 + *(int *)((int)this + 8);
        if (*(int *)(iVar3 + 4) == 0) {
          return 0;
        }
        uVar2 = *((uint *)GEN_TOP((iVar3 + 0x18 + ((ushort)param_1[1] & 0xf) * 4)));
        if (uVar2 == 0) {
          return 0;
        }
        do {
          bVar1 = F_00cb4170((undefined *)(uVar2 + 8) GEN_EDX_FWD,param_1);
          if (bVar1 != 0) {
            return uVar2;
          }
          uVar2 = *(uint *)(uVar2 + 0x14);
        } while (uVar2 != 0);
        return 0;
      }
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x16;
    } while (uVar2 < *(uint *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00cb7100 */
GEN_FRAME uint GEN_THISCALL F_00cb7100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb7100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 0xc) != 0) {
    puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 8) + 8)));
    uVar4 = param_1;
    do {
      if (uVar4 < *puVar3) {
        iVar1 = *(int *)((int)this + 8) + uVar2 * 0x58;
        if (param_2 != (undefined *)0x0) {
          F_00cb4320(param_2 GEN_EDX_FWD,*(int *)(iVar1 + 4) + 8 + uVar4 * 0x18);
        }
        return *(int *)(iVar1 + 4) + uVar4 * 0x18;
      }
      uVar2 = uVar2 + 1;
      uVar4 = uVar4 - *puVar3;
      puVar3 = puVar3 + 0x16;
    } while (uVar2 < *(uint *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00cb7160 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb7160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb7160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      iVar4 = *(int *)((int)this + 8) + (*(int *)(gen_frame + 0x8));
      uVar3 = 0;
      if (*(int *)(iVar4 + 8) != 0) {
        iVar5 = 0;
        do {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + iVar5))) + 8))))
                            (*(int *)(iVar4 + 4) + iVar5);
          pcVar1 = *(gen_code32 *)(*param_1 + 4);
          (*(uint *)(gen_frame + 0x0)) = uVar2;
          uVar2 = (*pcVar1)(param_1,*(int *)(iVar4 + 4) + 8 + iVar5,&(*(uint *)(gen_frame + 0x0)),param_2);
          if ((char)uVar2 == '\0') {
            return 0;
          }
          uVar3 = uVar3 + 1;
          iVar5 = iVar5 + 0x18;
        } while (uVar3 < *(uint *)(iVar4 + 8));
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x58;
      uVar3 = (*(uint *)(gen_frame + 0x4)) + 1;
      (*(uint *)(gen_frame + 0x4)) = uVar3;
    } while (uVar3 < *(uint *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00cb71f0 */
GEN_FRAME uint GEN_THISCALL F_00cb71f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb71f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129810));
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00cb7250 */
GEN_FRAME uint GEN_THISCALL F_00cb7250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb7290 */
GEN_FRAME uint GEN_THISCALL F_00cb7290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb72a0 */
GEN_FRAME uint GEN_STDCALL F_00cb72a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb72a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb72b0 */
GEN_FRAME uint GEN_THISCALL F_00cb72b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb72b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  }
  return uVar1;
}

/* ref: FUN_00cb72e0 */
GEN_FRAME uint GEN_THISCALL F_00cb72e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb72e0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x10700c3));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 1;
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 1;
  F_00cb5730((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(*(undefined4 * PTR32 *)&gen_args[1]));
  F_00cb5730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,puVar1[2]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb7390 */
GEN_FRAME uint GEN_THISCALL F_00cb7390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7390u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10700e8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) == '\0') && (*(int *)(*(undefined * PTR32 *)&gen_args[0]) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*(int *)(*(undefined * PTR32 *)&gen_args[0]));
    *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  }
  if (((*(uint *)&gen_args[1]) & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb7440 */
GEN_FRAME uint GEN_THISCALL F_00cb7440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  }
  return uVar1;
}

/* ref: FUN_00cb7470 */
GEN_FRAME uint GEN_THISCALL F_00cb7470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 100) + 0x1c))))
                            (*(int * PTR32 *)((int)this + 100) GEN_EDX_ARG,param_1)));
  if (piVar2 == (int *)0x0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x4c);
    if (this_00 != (undefined *)((int)this + 0x50)) {
      while( true ) {
        bVar1 = F_00cb9a40(this_00 GEN_EDX_ARG,param_1);
        if (bVar1 != 0) break;
        if (this_00 != (undefined *)0x0) {
          this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
        }
        if (this_00 == (undefined *)((int)this + 0x50)) {
          return 0;
        }
      }
      F_00cbac50(this_00 GEN_EDX_ARG,param_1);
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
    uVar3 = F_00cb09f0(uVar3 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      return (uint)piVar2;
    }
  }
  return 0;
}

/* ref: FUN_00cb74f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb74f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb74f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  code * pcVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x8c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    bVar3 = F_00cb43e0((undefined *)*puVar1 GEN_EDX_FWD,param_1,(int)this + 0xc);
    if ((bVar3 == 0) || (puVar1[1] = puVar1[1] - 1, 0 < (int)puVar1[1])) {
      puVar1 = (undefined4 *)puVar1[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
    }
    else {
      puVar4 = (undefined4 *)F_00cb6ae0((undefined *)((int)this + 0x84) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
      puVar4 = (undefined4 *)*puVar4;
      pcVar2 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
      (*pcVar2)(REFG(int * PTR32, 0x15d7724),puVar1);
      puVar1 = puVar4;
    }
  }
  return;
}

/* ref: FUN_00cb7570 */
GEN_FRAME uint GEN_THISCALL F_00cb7570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x54) != 0) {
    uVar2 = F_00cb7470((undefined *)((int)this - 0xc) GEN_EDX_FWD,param_1);
    return uVar2;
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x1c))))
                            (*(int * PTR32 *)((int)this + 0x58) GEN_EDX_ARG,param_1)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    if (uVar2 != 0) {
      uVar2 = F_00cb09f0(uVar2 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        return (uint)piVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb75c0 */
GEN_FRAME uint GEN_THISCALL F_00cb75c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb75c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,param_1);
  if (*(int *)((int)this + 0x54) != 0) {
    uVar2 = F_00cb7470((undefined *)((int)this - 0xc) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
    return uVar2;
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x1c))))
                            (*(int * PTR32 *)((int)this + 0x58) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    if (uVar2 != 0) {
      uVar2 = F_00cb09f0(uVar2 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
        return (uint)piVar1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00cb7650 */
GEN_FRAME uint GEN_THISCALL F_00cb7650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb7650u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x44];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  int * piVar7;
  
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x1070120));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == 0) {
    (*(undefined2 *)(gen_frame + 0x18)) = 0;
    (*(volatile undefined4 *)(gen_frame + 0x28)) = 0;
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(char *)(gen_frame + 0x1a)) = '\x01';
    F_00cb5730(&(*(int *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(uint *)&gen_args[2]));
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58)));
    (*(volatile undefined4 *)(gen_frame + 0x28)) = 1;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    (*(uint *)&gen_args[2]) = 0;
    if (uVar4 < 3) {
      if (uVar3 != 0) {
        do {
          piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG,(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]))));
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 8))(piVar5 GEN_EDX_ARG)));
          if ((pvVar6 != (undefined *)0x0) && (uVar3 = F_00cb09f0(pvVar6 GEN_EDX_ARG), (char)uVar3 != '\0')) {
            piVar7 = &(*(int *)(gen_frame + 0x14));
            pvVar6 = (undefined *)F_00cb0910(pvVar6 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
            bVar2 = F_00cb5510(pvVar6 GEN_EDX_ARG,piVar7);
            if (bVar2 != 0) {
LAB_00cb7732: ;
              (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
              if (((*(char *)(gen_frame + 0x1a)) == '\0') && ((*(int *)(gen_frame + 0x14)) != 0)) {
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)));
              }
              (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
              return (uint)piVar5;
            }
          }
          (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 1;
        } while ((*(uint *)&gen_args[2]) < (*(uint *)(gen_frame + 0x1c)));
      }
    }
    else if (uVar3 != 0) {
      do {
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG,(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]))));
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 8))(piVar5 GEN_EDX_ARG)));
        if ((pvVar6 != (undefined *)0x0) && (uVar3 = F_00cb09f0(pvVar6 GEN_EDX_ARG), (char)uVar3 != '\0')) {
          piVar7 = &(*(int *)(gen_frame + 0x14));
          pvVar6 = (undefined *)F_00cb0910(pvVar6 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
          bVar2 = F_00cb56a0(pvVar6 GEN_EDX_ARG,piVar7);
          if (bVar2 != 0) goto LAB_00cb7732;
        }
        (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 1;
      } while ((*(uint *)&gen_args[2]) < (*(uint *)(gen_frame + 0x1c)));
    }
    (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
    if (((*(char *)(gen_frame + 0x1a)) == '\0') && ((*(int *)(gen_frame + 0x14)) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)));
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 0;
}

/* ref: FUN_00cb7800 */
GEN_NOFRAME byte GEN_THISCALL F_00cb7800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb7800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(in_ecx + 0x40);
  while( true ) {
    in_ecx_00 = iVar1;
    if (in_ecx_00 == in_ecx + 0x44) {
      return 0;
    }
    bVar2 = F_00cb9a30(in_ecx_00 GEN_EDX_FWD);
    if (bVar2 != 0) break;
    iVar1 = 0;
    if (in_ecx_00 != 0) {
      iVar1 = *(int *)(in_ecx_00 + 8);
    }
  }
  return 1;
}

/* ref: FUN_00cb7830 */
GEN_NOFRAME uint GEN_THISCALL F_00cb7830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb7830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb7860 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb7860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7860u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  undefined4 * this_00;
  
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x107015e));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  this_00 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x14,0)));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this_00;
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0;
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    *this_00 = 0;
    *(undefined2 *)(this_00 + 1) = 0;
    *(undefined1 *)((int)this_00 + 6) = 0;
    this_00[2] = 0;
    *(undefined2 *)(this_00 + 3) = 0;
    *(undefined1 *)((int)this_00 + 0xe) = 0;
    this_00[4] = 0;
    (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 2;
    (*(volatile undefined4 *)(gen_frame + 0x28)) = 2;
    F_00cb5730(this_00 GEN_EDX_ARG,*(*(undefined4 * PTR32 *)&gen_args[1]));
    F_00cb5730(this_00 + 2 GEN_EDX_ARG,puVar1[2]);
  }
  this_00[4] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = this_00;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return;
}

/* ref: FUN_00cb7910 */
GEN_FRAME uint GEN_THISCALL F_00cb7910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb7910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  byte bVar2;
  
  for (iVar1 = *(int *)((int)this + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    bVar2 = F_00cb5430(param_2 GEN_EDX_FWD,iVar1);
    if (bVar2 != 0) {
      *param_1 = iVar1;
      return (uint)param_1;
    }
    if (iVar1 == 0) break;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb7990 */
GEN_FRAME uint GEN_THISCALL F_00cb7990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb79c0 */
GEN_FRAME uint GEN_THISCALL F_00cb79c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb79c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  return (uint)param_1;
}

/* ref: FUN_00cb79f0 */
GEN_FRAME uint GEN_THISCALL F_00cb79f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb79f0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(in_ecx + 8);
  if (piVar1 != (int *)0x0) {
    do {
      if (*param_3 == *piVar1) {
        *param_2 = piVar1;
        return (uint)param_2;
      }
      piVar1 = (int *)piVar1[2];
    } while (piVar1 != (int *)0x0);
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_00cb7a30 */
GEN_FRAME uint GEN_THISCALL F_00cb7a30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb7a30u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070188));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x1129820));
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  uVar2 = F_00cb6fc0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      uVar3 = F_00406b30(puVar1 - 1);
      uVar2 = (uint)uVar3;
    }
    else {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
    }
  }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar2;
}

/* ref: FUN_00cb7ab0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb7ab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb7ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb7ae0 */
GEN_FRAME uint GEN_THISCALL F_00cb7ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb7b20 */
GEN_FRAME uint GEN_THISCALL F_00cb7b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7b20u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10701b8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x1129820));
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  F_00cb6fc0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,3);
    }
  }
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  if (((*(uint *)&gen_args[1]) & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb7bc0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb7bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb7bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb7c10 */
GEN_FRAME uint GEN_THISCALL F_00cb7c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb7c50 */
GEN_FRAME uint GEN_THISCALL F_00cb7c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb7c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * PTR32 * ppvVar2;
  int * piVar3;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x10701e8));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  piVar3 = *(int * PTR32 *)((int)this + 8);
  ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (*(int * PTR32 *)((int)this + 8) != (int *)0x0) {
    do {
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = ppvVar2;
      piVar1 = (int *)piVar3[4];
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      if ((*(char *)((int)piVar3 + 0xe) == '\0') && (piVar3[2] != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,piVar3[2]);
        piVar3[2] = 0;
      }
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      if ((*(char *)((int)piVar3 + 6) == '\0') && (*piVar3 != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*piVar3);
        *piVar3 = 0;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,piVar3);
      piVar3 = piVar1;
      ppvVar2 = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
    } while (piVar1 != (int *)0x0);
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 8) = 0;
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xc) = 0;
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x1c));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)&(*(undefined * PTR32 *)(gen_frame + 0x20));
}

/* ref: FUN_00cb7d50 */
GEN_FRAME uint GEN_THISCALL F_00cb7d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb7d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 8))) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = *(undefined4 *)(iVar1 + 4);
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cb7d90 */
GEN_NOFRAME uint GEN_THISCALL F_00cb7d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb7d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cb7df0 */
GEN_FRAME uint GEN_THISCALL F_00cb7df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb7df0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x26c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x264);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  undefined * pvVar2;
  undefined4 * this_00;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  undefined * PTR32 * ppuVar10;
  bool bVar11;
  undefined * puVar12;
  
  (*(volatile int *)(gen_frame + 0x258)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x254)) = ((code *)REFP(0x1070274));
  (*(undefined * PTR32 *)(gen_frame + 0x250)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x250));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x250)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 *)(gen_frame + 0x24c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x11c)) = 0;
  (*(uint *)(gen_frame + 0x220)) = 0;
  (*(volatile int *)(gen_frame + 0x258)) = 0;
  F_00cb6880((*(uint *)&gen_args[1]),&(*(int *)(gen_frame + 0x11c)),&REFG(undefined, 0x1126194));
  (*(uint *)&gen_args[1]) = 0;
  if ((*(uint *)(gen_frame + 0x220)) != 0) {
    do {
      uVar3 = (*(uint *)&gen_args[1]);
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x118)) = 0;
      (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 1;
      (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 1;
      F_00cb6880(((byte * PTR32 *)(gen_frame + 0x120))[(int)((*(uint *)&gen_args[1]))],&(*(int *)(gen_frame + 0x14)),&REFG(undefined, 0x1126148));
      if ((*(int *)(gen_frame + 0x118)) == 2) {
        (*(int *)(gen_frame + 0x244)) = 0;
        (*(char *)(gen_frame + 0x24a)) = '\0';
        F_00cb5730(&(*(int *)(gen_frame + 0x244)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 2;
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 2;
        (*(int *)(gen_frame + 0x23c)) = 0;
        (*(char *)(gen_frame + 0x242)) = '\0';
        F_00cb5730(&(*(int *)(gen_frame + 0x23c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x18)));
        (*(int *)(gen_frame + 0x228)) = 0;
        (*(undefined2 *)(gen_frame + 0x22c)) = 0;
        (*(char *)(gen_frame + 0x22e)) = '\0';
        (*(int *)(gen_frame + 0x230)) = 0;
        (*(undefined2 *)(gen_frame + 0x234)) = 0;
        (*(char *)(gen_frame + 0x236)) = '\0';
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 5;
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 5;
        (*(undefined4 *)(gen_frame + 0x238)) = 0;
        F_00cb5730(&(*(int *)(gen_frame + 0x228)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x23c)));
        F_00cb5730(&(*(int *)(gen_frame + 0x230)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x244)));
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 6;
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 6;
        this_00 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x14,0)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x224)) = this_00;
        if (this_00 == (undefined4 *)0x0) {
          this_00 = (undefined4 *)0x0;
        }
        else {
          *this_00 = 0;
          *(undefined2 *)(this_00 + 1) = 0;
          *(undefined1 *)((int)this_00 + 6) = 0;
          this_00[2] = 0;
          *(undefined2 *)(this_00 + 3) = 0;
          *(undefined1 *)((int)this_00 + 0xe) = 0;
          this_00[4] = 0;
          (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 9;
          (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 9;
          F_00cb5730(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x228)));
          F_00cb5730(this_00 + 2 GEN_EDX_ARG,(*(int *)(gen_frame + 0x230)));
          uVar3 = (*(uint *)&gen_args[1]);
        }
        this_00[4] = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0x3c);
        *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0x40) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0x40) + 1;
        *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0x3c) = this_00;
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 10;
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 10;
        if (((*(char *)(gen_frame + 0x236)) == '\0') && ((*(int *)(gen_frame + 0x230)) != 0)) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x230)));
          (*(int *)(gen_frame + 0x230)) = 0;
        }
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 3;
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 3;
        if (((*(char *)(gen_frame + 0x22e)) == '\0') && ((*(int *)(gen_frame + 0x228)) != 0)) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x228)));
          (*(int *)(gen_frame + 0x228)) = 0;
        }
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 2;
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 2;
        if (((*(char *)(gen_frame + 0x242)) == '\0') && ((*(int *)(gen_frame + 0x23c)) != 0)) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x23c)));
          (*(int *)(gen_frame + 0x23c)) = 0;
        }
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 1;
        (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 1;
        if (((*(char *)(gen_frame + 0x24a)) == '\0') && ((*(int *)(gen_frame + 0x244)) != 0)) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x244)));
          (*(int *)(gen_frame + 0x244)) = 0;
        }
      }
      (*(undefined1 *)((char *)&(*(volatile int *)(gen_frame + 0x258)) + 0)) = 0;
      (*(volatile int *)(gen_frame + 0x258)) = (uint)GEN_PIECE(&(*(volatile int *)(gen_frame + 0x258)), 1, 3) << 8;
      if ((*(int *)(gen_frame + 0x14)) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)));
      }
      (*(uint *)&gen_args[1]) = uVar3 + 1;
    } while ((*(uint *)&gen_args[1]) < (*(uint *)(gen_frame + 0x220)));
  }
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x24c));
  puVar12 = &REFG(undefined, 0x1118a38);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0xc) + 0x38))))((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0xc,"SHEET");
  F_00cb6880(uVar3,&(*(int *)(gen_frame + 0x11c)),puVar12);
  if ((*(uint *)(gen_frame + 0x220)) != 0) {
    ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x1129850));
    pbVar4 = ((byte * PTR32 *)(gen_frame + 0x120))[0];
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < *(byte *)ppuVar10;
      if (bVar1 != *(byte *)ppuVar10) {
LAB_00cb8052: ;
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00cb8057;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < *(byte *)((int)ppuVar10 + 1);
      if (bVar1 != *(byte *)((int)ppuVar10 + 1)) goto LAB_00cb8052;
      pbVar4 = pbVar4 + 2;
      ppuVar10 = (undefined * PTR32 *)((int)ppuVar10 + 2);
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00cb8057: ;
    if (iVar5 == 0) {
      sVar7 = 0;
      while (*((byte * PTR32 *)(gen_frame + 0x120))[1] != '\0') {
        sVar7 = (char)*((byte * PTR32 *)(gen_frame + 0x120))[1] - 0x30 + sVar7 * 10;
      }
      *(short *)((int)pvVar2 + 0x7a) = sVar7;
    }
  }
  puVar12 = &REFG(undefined, 0x1118a38);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)pvVar2 + 0xc) + 0x38))))((int)pvVar2 + 0xc,"TABLE");
  F_00cb6880(uVar3,&(*(int *)(gen_frame + 0x11c)),puVar12);
  uVar3 = (*(uint *)(gen_frame + 0x220));
  if ((*(uint *)(gen_frame + 0x220)) != 0) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x220)) * 2,0);
    uVar9 = 0;
    *(uint *)((int)pvVar2 + 0x20) = uVar6;
    if (uVar3 != 0) {
      do {
        uVar8 = 0;
        while (*((byte * PTR32 *)(gen_frame + 0x120))[(int)(uVar9)] != 0) {
          uVar8 = (char)*((byte * PTR32 *)(gen_frame + 0x120))[(int)(uVar9)] - 0x30 + uVar8 * 10;
        }
        *((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24c)) + 0x20) + uVar9 * 2))) = uVar8 & 0xff;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar3);
    }
  }
  (*(volatile int *)(gen_frame + 0x258)) = 0xffffffff;
  uVar3 = 0;
  if ((*(int *)(gen_frame + 0x11c)) != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x11c)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x250));
  return uVar3;
}

/* ref: Global::SheetRegisterWaiter */
GEN_FRAME byte GEN_THISCALL F_00cb8140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint local_c;
  int local_8;
  
  iVar4 = 0;
  local_8 = 0;
  local_c = 0;
  if (*(int *)((int)param_1 + 4) != 0) {
    do {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD,*(int *)((int)param_1 + 0xc) + iVar4)));
      if (piVar2 == (int *)0x0) {
        local_8 = local_8 + 1;
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
        bVar1 = F_00cb43e0(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0xc) + iVar4,
                             -(uint)(this != (undefined *)0xc) & (uint)this);
        if (bVar1 != 0) {
          return 1;
        }
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + 0x10;
    } while (local_c < *(uint *)((int)param_1 + 4));
    if (local_8 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 0x80);
      while( true ) {
        if (piVar2 == (int *)0x0) {
          puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0xc,0)));
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3[2] = 0;
            *puVar3 = param_1;
            puVar3[1] = 1;
          }
          puVar3[2] = *(undefined4 *)((int)this + 0x80);
          *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + 1;
          *(undefined4 * PTR32 *)((int)this + 0x80) = puVar3;
          return 1;
        }
        if (param_1 == (undefined *)*piVar2) break;
        piVar2 = (int *)piVar2[2];
      }
      piVar2[1] = piVar2[1] + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00cb8230 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb8230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8230u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80)));
  if (piVar1 != (int *)0x0) {
    while ((*(int * PTR32 *)&gen_args[1]) != (int *)*piVar1) {
      piVar1 = (int *)piVar1[2];
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    piVar1[1] = piVar1[1] - 1;
    if (piVar1[1] < 1) {
      (*(int * PTR32 *)&gen_args[1]) = piVar1;
      F_00cb6ae0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int * PTR32 *)&gen_args[1]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,piVar1);
    }
  }
  return;
}

/* ref: FUN_00cb8290 */
GEN_FRAME uint GEN_THISCALL F_00cb8290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8290u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10702b0));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)(gen_frame + 0xc)) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(char *)(gen_frame + 0xe)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 1;
  if (iVar3 != 0) {
    while( true ) {
      bVar2 = F_00cb5430(&(*(int *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar3);
      if (bVar2 != 0) break;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x10), iVar3 == 0)) goto LAB_00cb82fa;
    }
    if (iVar3 != 0) {
      uVar1 = *(uint *)(iVar3 + 8);
      (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
      if (((*(char *)(gen_frame + 0xe)) == '\0') && ((*(int *)(gen_frame + 0x8)) != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
      }
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
      return uVar1;
    }
  }
LAB_00cb82fa: ;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  if (((*(char *)(gen_frame + 0xe)) == '\0') && ((*(int *)(gen_frame + 0x8)) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return 0;
}

/* ref: FUN_00cb8370 */
GEN_NOFRAME uint GEN_THISCALL F_00cb8370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  uVar1 = F_00cb7c50(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cb8380 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb8380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 0x20);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[1] != 0) {
        *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
      }
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
      }
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) - 1;
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
    iVar1 = *(int *)((int)this + 0x20);
  }
  return;
}

/* ref: FUN_00cb83d0 */
GEN_FRAME uint GEN_THISCALL F_00cb83d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb83d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  F_00cb7c50(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00cb8400 */
GEN_FRAME uint GEN_THISCALL F_00cb8400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8400u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x107031d));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[3])REFP(0x11298cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129860));
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 6;
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
  while (iVar1 != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[1] != 0) {
        *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
      }
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) - 1;
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    }
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100)));
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  }
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 5;
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 5;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) = (*(undefined * PTR32 (*)[1])REFP(0x1129810));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)));
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,iVar1);
    iVar1 = iVar3;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) = 0;
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 4;
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 4;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
  }
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  F_00cb7c50(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 1;
  (*(volatile undefined4 *)(gen_frame + 0x28)) = CONCAT31(GEN_PIECE(&(*(volatile undefined4 *)(gen_frame + 0x28)), 1, 3),1);
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (uVar4 != 0) {
    *(undefined4 *)(uVar4 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return uVar4;
}

/* ref: FUN_00cb85d0 */
GEN_FRAME uint GEN_THISCALL F_00cb85d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb85d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,*param_3);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG,param_1,param_2,((undefined4 *)(gen_frame + 0xc)));
  *param_3 = ((undefined4 *)(gen_frame + 0xc))[0];
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cb8630 */
GEN_NOFRAME uint GEN_THISCALL F_00cb8630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x68);
}

/* ref: FUN_00cb8640 */
GEN_NOFRAME uint GEN_THISCALL F_00cb8640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x6c);
}

/* ref: FUN_00cb8650 */
GEN_NOFRAME uint GEN_THISCALL F_00cb8650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00cb8660 */
GEN_NOFRAME uint GEN_THISCALL F_00cb8660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x70);
}

/* ref: FUN_00cb8670 */
GEN_FRAME uint GEN_THISCALL F_00cb8670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb8680 */
GEN_NOFRAME uint GEN_THISCALL F_00cb8680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb8ea0((undefined *)((int)this - 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00cb8690 */
GEN_FRAME uint GEN_THISCALL F_00cb8690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8690u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070353));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x11298d8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = (*(undefined4 *)&gen_args[1]);
  F_00cb8380((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb8710 */
GEN_FRAME uint GEN_THISCALL F_00cb8710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00cb8720 */
GEN_NOFRAME byte F_00cb8720(void)
{
  GEN_ENTER(0xcb8720u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00cb8730 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb8730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: FUN_00cb8740 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb8740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8740u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  return;
}

/* ref: FUN_00cb8750 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb8750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8750u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  return;
}

/* ref: FUN_00cb8760 */
GEN_FRAME uint GEN_THISCALL F_00cb8760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb87a0 */
GEN_FRAME byte GEN_THISCALL F_00cb87a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb87a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb87e0 */
GEN_FRAME uint GEN_THISCALL F_00cb87e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb87e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb87f0 */
GEN_FRAME byte GEN_THISCALL F_00cb87f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb87f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb8860 */
GEN_FRAME uint GEN_THISCALL F_00cb8860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb8870 */
GEN_FRAME uint GEN_THISCALL F_00cb8870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb8880 */
GEN_FRAME uint GEN_THISCALL F_00cb8880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb8890 */
GEN_FRAME uint GEN_THISCALL F_00cb8890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb88a0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb88a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb88a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: FUN_00cb88b0 */
GEN_FRAME uint GEN_THISCALL F_00cb88b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb88b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
  in_ecx[1] = 0;
  in_ecx[2] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb88d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cb88d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb88d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - 1;
  return;
}

/* ref: FUN_00cb88e0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb88e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb88e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_00cb88f0 */
GEN_FRAME uint GEN_THISCALL F_00cb88f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb88f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb8900 */
GEN_FRAME uint GEN_THISCALL F_00cb8900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00cb8930 */
GEN_FRAME uint GEN_THISCALL F_00cb8930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8930u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb8940 */
GEN_FRAME uint GEN_THISCALL F_00cb8940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb8950 */
GEN_FRAME uint GEN_THISCALL F_00cb8950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x10);
  return (uint)param_2;
}

/* ref: FUN_00cb8960 */
GEN_FRAME uint GEN_THISCALL F_00cb8960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00cb8990 */
GEN_FRAME uint GEN_THISCALL F_00cb8990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00cb89b0 */
GEN_FRAME uint GEN_THISCALL F_00cb89b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb89b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb89d0 */
GEN_FRAME uint GEN_THISCALL F_00cb89d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb89d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = *(int *)((int)this + 0x10);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0x14) {
      return 0;
    }
    bVar3 = F_00cb4170((undefined *)(iVar1 + 0xc) GEN_EDX_FWD,param_1);
    if (bVar3 != 0) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return iVar1 + 0x18;
}

/* ref: FUN_00cb8a20 */
GEN_FRAME uint GEN_THISCALL F_00cb8a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)((int)this + 0x10);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0x14) {
      return 0;
    }
    if (iVar3 == param_1) break;
    iVar3 = iVar3 + 1;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  if (param_2 != (undefined *)0x0) {
    F_00cb4320(param_2 GEN_EDX_FWD,iVar1 + 0xc);
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return iVar1 + 0x18;
}

/* ref: FUN_00cb8a70 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb8a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8a70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (*(uint *)&gen_args[2]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  while( true ) {
    if (iVar1 == (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14) {
      return 0;
    }
    (*(uint *)&gen_args[2]) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x18) + 8))))(iVar1 + 0x18 GEN_EDX_FWD);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,iVar1 + 0xc,&(*(uint *)&gen_args[2]),uVar2);
    if ((char)uVar3 == '\0') break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return 0;
}

/* ref: FUN_00cb8ad0 */
GEN_FRAME uint GEN_THISCALL F_00cb8ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcb8ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070380));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 1;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129920));
  F_00cb4360(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(undefined4 *)&gen_args[3]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(undefined4 *)&gen_args[4]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb8b50 */
GEN_FRAME uint GEN_THISCALL F_00cb8b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb8b80 */
GEN_FRAME uint GEN_THISCALL F_00cb8b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = *(int *)(iVar1 + 4);
  *param_1 = iVar2;
  if (iVar1 != 0) {
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = *(undefined4 *)(iVar1 + 4);
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cb8bc0 */
GEN_FRAME byte GEN_THISCALL F_00cb8bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8bc0u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x10703bb));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  while (iVar2 = iVar3, iVar2 != (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14) {
    bVar4 = F_00cb4170((undefined *)(iVar2 + 0xc) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
    puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
    if (bVar4 != 0) {
      puVar5 = *(undefined4 * PTR32 *)(iVar2 + 0x20);
      if (puVar5 == (*(undefined4 * PTR32 *)&gen_args[2])) {
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
        return 1;
      }
      if (puVar5 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,1);
      }
      *(undefined4 * PTR32 *)(iVar2 + 0x20) = puVar1;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
      return 1;
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
    }
  }
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) <= *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    for (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))); puVar1 != ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
        puVar1 = (undefined4 *)puVar1[1]) {
      if (puVar1[7] == 0) {
        if (puVar1[1] != 0) {
          *(undefined4 *)(puVar1[1] + 8) = puVar1[2];
        }
        if (puVar1[2] != 0) {
          *(undefined4 *)(puVar1[2] + 4) = puVar1[1];
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) - 1;
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
        break;
      }
    }
  }
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x24,0)));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar5;
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)&gen_args[2]);
    puVar5[1] = 0;
    puVar5[2] = 0;
    (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 2;
    (*(volatile undefined4 *)(gen_frame + 0x28)) = 2;
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1129920));
    F_00cb4360(puVar5 + 3 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
    puVar5[6] = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
    puVar5[7] = 0;
    puVar5[8] = puVar1;
  }
  puVar5[1] = (int)(*(undefined * PTR32 *)&gen_args[0]) + 8;
  puVar5[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 4))) = puVar5;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = puVar5;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 1;
}

/* ref: FUN_00cb8d10 */
GEN_FRAME uint GEN_THISCALL F_00cb8d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8d10u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10703f3));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129920));
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18);
  if (uVar1 != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    }
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar1;
}

/* ref: FUN_00cb8db0 */
GEN_FRAME uint GEN_THISCALL F_00cb8db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb8d10(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00cb8de0 */
GEN_FRAME uint GEN_THISCALL F_00cb8de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8de0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  uint uVar1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070423));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x11298d8));
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 1;
  F_00cb8380((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar1;
}

/* ref: FUN_00cb8e70 */
GEN_FRAME uint GEN_THISCALL F_00cb8e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb8de0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00cb8ea0 */
GEN_FRAME uint GEN_THISCALL F_00cb8ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb8400(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00cb8ed0 */
GEN_FRAME uint GEN_THISCALL F_00cb8ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb8ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * PTR32 * ppvVar6;
  int iVar7;
  
  iVar7 = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070461));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ppvVar6 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (((char)param_3 != '\0') || (*(int *)((int)this + 0x54) != param_1)) {
    piVar1 = *(int * PTR32 *)((int)this + 0x58);
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = ppvVar6;
    *(int *)((int)this + 0x54) = param_1;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG);
      puVar2 = *(undefined4 * PTR32 *)((int)this + 0x58);
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + 0x58) = 0;
      }
    }
    if (iVar7 == 0) {
      *(undefined1 *)((int)this + 0x74) = 0;
    }
    uVar5 = (uint)*(byte *)((int)this + 0x74);
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        param_3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x28,0)));
        (*(undefined4 *)(gen_frame + 0x18)) = 1;
      }
      else {
        if (uVar5 - 2 != 0) {
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
          return uVar5 - 2;
        }
        param_3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x28,0)));
        (*(undefined4 *)(gen_frame + 0x18)) = 2;
      }
      if (param_3 == (undefined *)0x0) {
        *(undefined4 *)((int)this + 0x58) = 0;
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
        return 0;
      }
      uVar5 = F_00cb8690(param_3 GEN_EDX_ARG,iVar7);
      *(uint *)((int)this + 0x58) = uVar5;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
      return uVar5;
    }
    iVar7 = 0;
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x40);
    while (pvVar3 = pvVar4, pvVar3 != (undefined *)((int)this + 0x44)) {
      iVar7 = iVar7 + 1;
      pvVar4 = (undefined *)0x0;
      if (pvVar3 != (undefined *)0x0) {
        pvVar4 = *(undefined * PTR32 *)((int)pvVar3 + 8);
      }
    }
    param_3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x18,0)));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    if (param_3 == (undefined *)0x0) {
      ppvVar6 = (undefined * PTR32 *)0x0;
    }
    else {
      ppvVar6 = (undefined * PTR32 *)F_00cb6c00(param_3 GEN_EDX_ARG,iVar7);
    }
    *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = ppvVar6;
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x40);
    while (pvVar3 = pvVar4, pvVar3 != (undefined *)((int)this + 0x44)) {
      ppvVar6 = (undefined * PTR32 *)F_00cbab30(pvVar3 GEN_EDX_ARG,(uint)(~(byte)param_2 & 1));
      pvVar4 = (undefined *)0x0;
      if (pvVar3 != (undefined *)0x0) {
        pvVar4 = *(undefined * PTR32 *)((int)pvVar3 + 8);
      }
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)ppvVar6;
}

/* ref: FUN_00cb9050 */
GEN_FRAME uint GEN_THISCALL F_00cb9050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcb9050u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x170];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x154);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  undefined4 * puVar1;
  ushort * puVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 * puVar6;
  char * pcVar7;
  char * pcVar8;
  int iVar9;
  int iVar10;
  
  (*(volatile undefined4 *)(gen_frame + 0x148)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x144)) = ((code *)REFP(0x10704fe));
  (*(undefined * PTR32 *)(gen_frame + 0x140)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x140));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x140)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  iVar9 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)&gen_args[4]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x148)) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[3])REFP(0x11298cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129860));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(undefined4 *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = (*(int *)&gen_args[5]);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)));
  *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = puVar1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) = 0xffff;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x81))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) = (*(undefined * PTR32 (*)[1])REFP(0x1129810));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) = 0;
  pcVar8 = ((char *)(gen_frame + 0x3c));
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x148)) + 0)) = 6;
  (*(volatile undefined4 *)(gen_frame + 0x148)) = 6;
  (*(char * PTR32 *)(gen_frame + 0x28)) = (char *)((*(int *)&gen_args[3]) - (int)((char *)(gen_frame + 0x3c)));
  do {
    cVar3 = ((char *)((*(int *)&gen_args[3]) - (int)((char *)(gen_frame + 0x3c))))[(int)pcVar8];
    if (cVar3 == '.') {
      cVar3 = '\0';
    }
    *pcVar8 = cVar3;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_00cb5730(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,((char *)(gen_frame + 0x3c)));
  uVar4 = F_00cb96c0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = uVar4;
  uVar5 = F_00cb9720((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x20)) = uVar5;
  uVar5 = F_00cb9840((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = uVar5;
  if ((int)(*(uint *)(gen_frame + 0x20)) < 0) {
    (*(uint *)(gen_frame + 0x20)) = 10;
  }
  uVar5 = F_00cb9750((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
  if ((((*(uint *)(gen_frame + 0x20)) == 0) || (uVar5 == 0)) || ((*(int *)&gen_args[5]) == 0)) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) = 0;
    (*(uint *)(gen_frame + 0x20)) = 0;
  }
  else {
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) = (uVar5 != 1) + '\x01';
  }
  if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
    uVar4 = F_00cb9770((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = (short)uVar4 - 1;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) * 6,0)
    ;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = uVar5;
    uVar4 = F_00cb9680((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
    *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = uVar4;
    if (uVar4 == 2) {
      pcVar7 = (char *)F_00cb9660((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar7;
      pcVar8 = (char *)0x0;
      (*(char * PTR32 *)(gen_frame + 0x30)) = (char *)0x0;
      (*(uint *)(gen_frame + 0x2c)) = 0;
      do {
        uVar5 = 0;
        if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
          (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)((int)((int)(uintptr_t)pcVar8) * 6);
          (*(byte * PTR32 *)(gen_frame + 0x24)) = (byte *)(pcVar7 + 1);
          do {
            if ((uint)*(*(byte * PTR32 *)(gen_frame + 0x24)) == (int)(char)(&REFG(undefined, 0x1129924))[(int)((*(uint *)(gen_frame + 0x2c)))]) {
              (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x30)) + 1;
              *((short *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x34)) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)))))) = (short)uVar5;
              (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0x34)) + 6);
            }
            (*(byte * PTR32 *)(gen_frame + 0x24)) = (*(byte * PTR32 *)(gen_frame + 0x24)) + 2;
            uVar5 = uVar5 + 1;
            pcVar8 = (*(char * PTR32 *)(gen_frame + 0x30));
          } while (uVar5 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
        }
        uVar5 = (*(uint *)(gen_frame + 0x2c)) + 1;
        (*(uint *)(gen_frame + 0x2c)) = uVar5;
      } while (uVar5 < 10);
      iVar9 = 0;
      (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)0x0;
      if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
        (*(uint *)(gen_frame + 0x2c)) = 0;
        do {
          uVar5 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + (*(uint *)(gen_frame + 0x2c)))));
          *((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 4 + uVar5 * 6))) = (short)iVar9;
          iVar9 = iVar9 + *(int *)(&REFG(undefined, 0x134c29c) +
                                  (uint)CONCAT11(pcVar7[uVar5 * 2],pcVar7[uVar5 * 2 + 1]) * 4);
          uVar5 = (int)(*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)uVar5;
          (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 6;
        } while (uVar5 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
      }
      iVar10 = 0;
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = iVar9;
      uVar5 = 0;
      if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
        do {
          *((ushort *)GEN_TOP((iVar10 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)))))) =
               CONCAT11(pcVar7[uVar5 * 2],pcVar7[uVar5 * 2 + 1]);
          puVar2 = ((ushort *)GEN_TOP((iVar10 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))));
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + (&REFG(undefined4, 0x134c234))[(int)(*puVar2)];
          puVar2[1] = (ushort)uVar5;
          if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) == -1) {
            *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) = (ushort)uVar5;
          }
          uVar5 = uVar5 + 1;
          iVar10 = iVar10 + 6;
        } while (uVar5 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
      }
      pcVar8 = (char *)F_00cb9790((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
      (*(uint *)(gen_frame + 0x2c)) = 0;
      uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
      if (uVar4 != 0) {
        (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x34));
        do {
          pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x50,0)));
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
          (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x148)) + 0)) = 7;
          (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x148)) + 0)) = 7;
          if (pcVar8 == (char *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = F_00cba5f0(pcVar8 GEN_EDX_ARG,(*(char * PTR32 *)(gen_frame + 0x28)),(*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))));
          }
          *(undefined4 * PTR32 *)(uVar5 + 4) = puVar1;
          *(undefined4 *)(uVar5 + 8) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
          (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x148)) + 0)) = 6;
          (*(volatile undefined4 *)(gen_frame + 0x148)) = CONCAT31(GEN_PIECE(&(*(volatile undefined4 *)(gen_frame + 0x148)), 1, 3),6);
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) != 0) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 4))) = uVar5;
          }
          (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x28)) + 8;
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = uVar5;
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) + 1;
          (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 1;
          uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
        } while ((*(uint *)(gen_frame + 0x2c)) < uVar4);
      }
    }
    else {
      uVar5 = F_00cb9670((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
      (*(char * PTR32 *)(gen_frame + 0x30)) = (char *)0x0;
      if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
        puVar6 = (undefined1 *)(uVar5 + 1);
        do {
          *((ushort *)GEN_TOP((iVar9 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)))))) = CONCAT11(puVar6[-1],*puVar6);
          *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 4 + iVar9))) = CONCAT11(puVar6[1],puVar6[2]);
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) =
               *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) +
               *(int *)(&REFG(undefined, 0x134c29c) + (uint)CONCAT11(puVar6[-1],*puVar6) * 4);
          *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 2 + iVar9))) = (*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x30)) + 0));
          if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) == -1) {
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) = (*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x30)) + 0));
          }
          pcVar8 = (*(char * PTR32 *)(gen_frame + 0x30)) + 1;
          puVar6 = puVar6 + 4;
          iVar9 = iVar9 + 6;
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
        } while (pcVar8 < (char *)(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
      }
      uVar4 = F_00cb96a0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (uint)uVar4;
      pcVar8 = (char *)F_00cb9790((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
      (*(byte * PTR32 *)(gen_frame + 0x24)) = (byte *)0x0;
      uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
      if (uVar4 != 0) {
        (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x34));
        do {
          pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x50,0)));
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
          (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x148)) + 0)) = 8;
          (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x148)) + 0)) = 8;
          if (pcVar8 == (char *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = F_00cba5f0(pcVar8 GEN_EDX_ARG,(*(char * PTR32 *)(gen_frame + 0x30)),(*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))));
          }
          *(undefined4 * PTR32 *)(uVar5 + 4) = puVar1;
          *(undefined4 *)(uVar5 + 8) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
          (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x148)) + 0)) = 6;
          (*(volatile undefined4 *)(gen_frame + 0x148)) = CONCAT31(GEN_PIECE(&(*(volatile undefined4 *)(gen_frame + 0x148)), 1, 3),6);
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) != 0) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 4))) = uVar5;
          }
          (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x30)) + 8;
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = uVar5;
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = (*(byte * PTR32 *)(gen_frame + 0x24)) + 1;
          uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
        } while ((*(byte * PTR32 *)(gen_frame + 0x24)) < (byte *)(uint)uVar4);
      }
    }
    F_00cb7df0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1c)));
    F_00cb8ed0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x20)),(*(undefined4 *)&gen_args[6]),0);
    iVar9 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x81))) = 0;
    for (; iVar9 != (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50; iVar9 = *(int *)(iVar9 + 8)) {
      if (*(char *)(iVar9 + 0x30) != '\0') {
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x81))) = 1;
        break;
      }
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x140));
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x14c) GEN_EDX_ARG);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb9660 */
GEN_NOFRAME uint GEN_THISCALL F_00cb9660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 4) + 0x20;
}

/* ref: FUN_00cb9670 */
GEN_NOFRAME uint GEN_THISCALL F_00cb9670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 4) + 0x20;
}

/* ref: FUN_00cb9680 */
GEN_NOFRAME ushort GEN_THISCALL F_00cb9680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 4))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 5))));
}

/* ref: FUN_00cb96a0 */
GEN_NOFRAME ushort GEN_THISCALL F_00cb96a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb96a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 6))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 7))));
}

/* ref: FUN_00cb96c0 */
GEN_NOFRAME ushort GEN_THISCALL F_00cb96c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb96c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 8))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 9))));
}

/* ref: FUN_00cb96e0 */
GEN_NOFRAME ushort GEN_THISCALL F_00cb96e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb96e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 10))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0xb))));
}

/* ref: FUN_00cb9700 */
GEN_NOFRAME ushort GEN_THISCALL F_00cb9700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0xc))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0xd))));
}

/* ref: FUN_00cb9720 */
GEN_NOFRAME uint GEN_THISCALL F_00cb9720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ushort uVar2;
  
  uVar2 = CONCAT11(*((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xe))),
                   *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xf)))) & 0x3fff;
  uVar1 = (uint)uVar2;
  if (uVar2 == 0x3fff) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00cb9750 */
GEN_NOFRAME uint GEN_THISCALL F_00cb9750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*((byte *)GEN_TOP((*(int *)(in_ecx + 4) + 0xe))) >> 6);
}

/* ref: FUN_00cb9770 */
GEN_NOFRAME ushort GEN_THISCALL F_00cb9770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0x10))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0x11))));
}

/* ref: FUN_00cb9790 */
GEN_NOFRAME uint GEN_THISCALL F_00cb9790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (CONCAT11(*((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 4))),
               *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 5)))) < 3) {
    return iVar1 + 0x20 + (uint)CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)) * 2;
  }
  return iVar1 + 0x20 + (uint)CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)) * 4;
}

/* ref: FUN_00cb97e0 */
GEN_NOFRAME uint GEN_THISCALL F_00cb97e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb97e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (CONCAT11(*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5)) < 3) {
    iVar2 = iVar1 + 0x20 + (uint)CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)) * 2
    ;
  }
  else {
    iVar2 = iVar1 + 0x20 + (uint)CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)) * 4
    ;
  }
  return iVar2 + (uint)CONCAT11(*(undefined1 *)(iVar1 + 10),*(undefined1 *)(iVar1 + 0xb)) * 8;
}

/* ref: FUN_00cb9840 */
GEN_NOFRAME uint GEN_THISCALL F_00cb9840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  return CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x14),*(undefined1 *)(iVar1 + 0x15)),
                           *(undefined1 *)(iVar1 + 0x16)),*(undefined1 *)(iVar1 + 0x17));
}

/* ref: FUN_00cb9900 */
GEN_FRAME byte GEN_THISCALL F_00cb9900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x81) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cb9920 */
GEN_FRAME uint GEN_THISCALL F_00cb9920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb9920u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  return param_2 * param_3 + 6 + in_ecx;
}

/* ref: FUN_00cb9940 */
GEN_FRAME uint GEN_THISCALL F_00cb9940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb9970 */
GEN_FRAME uint F_00cb9970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcb9970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c472af(param_2,param_3,"%s_%d%s.exd",param_1,param_5,(&REFG(undefined * PTR32, 0x134c2d0))[(int)(*param_4)]);
  return uVar1;
}

/* ref: FUN_00cb99a0 */
GEN_FRAME uint F_00cb99a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcb99a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined * apuVar1 [1];
  uint uVar2;
  char * _DstBuf;
  undefined4 uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00c49908(param_2,param_3,param_1);
  *(undefined1 *)(param_3 - 1 + param_2) = 0;
  apuVar1[0] = (*(undefined * PTR32 (*)[1])REFP(0x12b57b0))[0];
  if (*(int *)(&REFG(undefined, 0x134c2e8) + *param_4 * 4) != 0) {
    (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x12b57b0))[0])))(param_2,param_3,*(int *)(&REFG(undefined, 0x134c2e8) + *param_4 * 4));
  }
  pcVar4 = "_%d.exd";
  _DstBuf = ((char *)(gen_frame + 0x8));
  uVar3 = 0x100;
  F_00c472af(_DstBuf,0x100,"_%d.exd");
  uVar2 = (*(code *)apuVar1[0])(param_2,param_3,((char *)(gen_frame + 0x8)),_DstBuf,uVar3,pcVar4,param_5);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00cb9a30 */
GEN_NOFRAME byte GEN_THISCALL F_00cb9a30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9a30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x28) != 0;
}

/* ref: FUN_00cb9a40 */
GEN_FRAME byte GEN_THISCALL F_00cb9a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  if ((*(uint *)(in_ecx + 0x1c) <= *param_2) && (*param_2 <= *(uint *)(in_ecx + 0x20))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb9ad0 */
GEN_FRAME byte GEN_THISCALL F_00cb9ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb9b20 */
GEN_FRAME uint GEN_THISCALL F_00cb9b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b30 */
GEN_FRAME uint GEN_THISCALL F_00cb9b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b40 */
GEN_FRAME uint GEN_THISCALL F_00cb9b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb9b50 */
GEN_FRAME uint GEN_THISCALL F_00cb9b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb9b60 */
GEN_FRAME uint GEN_THISCALL F_00cb9b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb9b70 */
GEN_FRAME uint GEN_THISCALL F_00cb9b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b80 */
GEN_FRAME uint GEN_THISCALL F_00cb9b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b90 */
GEN_FRAME uint GEN_THISCALL F_00cb9b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 6) = 0;
  F_00cb5730(this GEN_EDX_FWD,*param_1);
  return (uint)this;
}

/* ref: FUN_00cb9be0 */
GEN_FRAME uint GEN_THISCALL F_00cb9be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)CONCAT11(*(undefined1 *)((int)this + 4),*(undefined1 *)((int)this + 5)) * param_1 + 6
         + (int)this;
}

/* ref: FUN_00cb9c60 */
GEN_FRAME uint GEN_THISCALL F_00cb9c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * puVar1;
  
  puVar1 = (undefined1 *)(*(int *)this + 0x20 + param_1 * 8);
  return CONCAT31(CONCAT21(CONCAT11(*puVar1,*(undefined1 *)(*(int *)this + 0x21 + param_1 * 8)),
                           puVar1[2]),puVar1[3]);
}

/* ref: FUN_00cb9c90 */
GEN_FRAME uint GEN_THISCALL F_00cb9c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  return (int)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x24 + param_1 * 8),
                                         *(undefined1 *)(iVar1 + 0x25 + param_1 * 8)),
                                *(undefined1 *)(iVar1 + 0x26 + param_1 * 8)),
                       *(undefined1 *)(iVar1 + 0x27 + param_1 * 8)) + iVar1;
}

/* ref: FUN_00cb9cd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cb9cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb9cd0u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x90];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x84);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined * this_00;
  undefined1 * puVar9;
  uint uVar10;
  int * piVar11;
  
  piVar11 = (*(int * PTR32 *)&gen_args[2]);
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  (*(volatile undefined4 *)(gen_frame + 0x78)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x74)) = ((code *)REFP(0x107053b));
  (*(undefined * PTR32 *)(gen_frame + 0x70)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x70));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x70)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 100)));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)&gen_args[2]);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]));
  if (uVar4 == 0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x20)) = uVar4;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0xc))) + 0x3c))))
                      (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0xc);
    (*(uint *)(gen_frame + 0x28)) = uVar5;
    (*(int *)(gen_frame + 0x34)) = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x28))) + uVar5 * 2;
    uVar5 = (uint)CONCAT12(*(undefined1 *)(uVar4 + 8),
                           CONCAT11(*(undefined1 *)(uVar4 + 9),*(undefined1 *)(uVar4 + 10))) << 5 |
            (uint)(*(byte *)(uVar4 + 0xb) >> 3);
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)0x0;
    if (uVar5 != 0) {
      puVar9 = (undefined1 *)(uVar4 + 0x22);
      do {
        iVar6 = CONCAT31(CONCAT21(CONCAT11(puVar9[-2],puVar9[-1]),*puVar9),puVar9[1]);
        (*(int *)(gen_frame + 0x18)) = iVar6;
        if (iVar6 == *(*(int * PTR32 *)(gen_frame + 0x24))) {
          iVar6 = CONCAT31(CONCAT21(CONCAT11(puVar9[2],puVar9[3]),puVar9[4]),puVar9[5]);
          iVar7 = iVar6 + uVar4;
          uVar10 = (uint)CONCAT11(*(undefined1 *)(iVar6 + 4 + uVar4),
                                  *(undefined1 *)(iVar6 + 5 + uVar4));
          (*(int *)(gen_frame + 0x1c)) = uVar10 * (*(int *)(gen_frame + 0x34)) + 6 + iVar7;
          (*(uint *)(gen_frame + 0x2c)) = 0;
          uVar4 = (*(uint *)(gen_frame + 0x20));
          if (uVar10 != 0) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x38)) = (undefined1 *)(iVar7 + 6);
LAB_00cb9dfe: ;
            bVar3 = F_00cb4260((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x38)));
            if (bVar3 == 0) goto code_r0x00cb9e0e;
            this_00 = (undefined *)F_00cb15d0(0xc);
            puVar9 = (*(undefined1 * PTR32 *)(gen_frame + 0x38));
            uVar4 = (*(uint *)(gen_frame + 0x28));
            (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this_00;
            (*(volatile undefined4 *)(gen_frame + 0x78)) = 0;
            if (this_00 == (undefined *)0x0) {
              (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)0x0;
            }
            else {
              uVar5 = F_00cb1240(this_00 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x28)),*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x10),
                                   (*(int *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x34)));
              (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)uVar5;
            }
            (*(volatile undefined4 *)(gen_frame + 0x78)) = 0xffffffff;
            if (uVar4 != 0) {
              iVar6 = (int)((undefined2 *)(gen_frame + 0x4c)) - (int)puVar9;
              uVar5 = uVar4;
              do {
                *(ushort *)(puVar9 + iVar6) = CONCAT11(*puVar9,puVar9[1]);
                puVar9 = puVar9 + 2;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            F_00cb42c0(((int *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),((undefined2 *)(gen_frame + 0x4c)),uVar4);
            (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x30));
            piVar11 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x10) + 100)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0xc))(piVar11 GEN_EDX_ARG,((int *)(gen_frame + 0x40)),(*(undefined * PTR32 *)(gen_frame + 0x3c)));
            piVar11 = ((int *)(gen_frame + 0x40));
            goto LAB_00cb9ed5;
          }
        }
LAB_00cb9e22: ;
        uVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 1;
        puVar9 = puVar9 + 8;
        (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)uVar10;
      } while (uVar10 < uVar5);
    }
  }
  else {
LAB_00cb9ed5: ;
    F_00cb74f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) GEN_EDX_ARG,piVar11);
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x70));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return;
code_r0x00cb9e0e: ;
  (*(undefined1 * PTR32 *)(gen_frame + 0x38)) = (*(undefined1 * PTR32 *)(gen_frame + 0x38)) + (*(int *)(gen_frame + 0x34));
  uVar8 = (*(uint *)(gen_frame + 0x2c)) + 1;
  (*(uint *)(gen_frame + 0x2c)) = uVar8;
  uVar4 = (*(uint *)(gen_frame + 0x20));
  if (uVar10 <= uVar8) goto LAB_00cb9e22;
  goto LAB_00cb9dfe;
}

/* ref: FUN_00cb9f10 */
GEN_FRAME uint GEN_THISCALL F_00cb9f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb9f20 */
GEN_FRAME uint GEN_THISCALL F_00cb9f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb9f40 */
GEN_FRAME uint GEN_THISCALL F_00cb9f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb9f80 */
GEN_FRAME uint GEN_THISCALL F_00cb9f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  }
  return uVar1;
}

/* ref: FUN_00cb9fb0 */
GEN_FRAME uint GEN_THISCALL F_00cb9fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9fb0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070568));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[4])REFP(0x1129968));
  F_00cb4120((*(undefined4 * PTR32 *)&gen_args[0]) + 2 GEN_EDX_ARG);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cba000 */
GEN_NOFRAME unsigned int F_00cba000(void)
{
  GEN_ENTER(0xcba000u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00cba010 */
GEN_NOFRAME uint GEN_THISCALL F_00cba010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00cba020 */
GEN_FRAME uint GEN_THISCALL F_00cba020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcba020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cba030 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cba030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba030u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  return;
}

/* ref: FUN_00cba040 */
GEN_NOFRAME uint GEN_THISCALL F_00cba040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cba0a0 */
GEN_FRAME uint GEN_THISCALL F_00cba0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcba0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cba0d0 */
GEN_FRAME uint GEN_THISCALL F_00cba0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcba0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  return (uint)param_1;
}

/* ref: FUN_00cba100 */
GEN_FRAME uint GEN_THISCALL F_00cba100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcba100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 8))) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = *(undefined4 *)(iVar1 + 4);
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cba140 */
GEN_FRAME uint GEN_THISCALL F_00cba140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcba140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cba180 */
GEN_FRAME uint GEN_THISCALL F_00cba180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcba180u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(*(uint * PTR32 *)&gen_args[1]);
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x107059b));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    (*(uint * PTR32 *)&gen_args[1]) = (uint *)F_00406a50(4);
  }
  else {
    uVar3 = -(uint)((int)(ZEXT48((*(uint * PTR32 *)&gen_args[1])) * 0x18 >> 0x20) != 0) | (uint)(ZEXT48((*(uint * PTR32 *)&gen_args[1])) * 0x18);
    (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                                (REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0)));
  }
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = (*(uint * PTR32 *)&gen_args[1]) + 1;
    *(*(uint * PTR32 *)&gen_args[1]) = uVar4;
    F_01051d8c(puVar1,0x18,uVar4,((code *)REFP(0xcb9fb0)),((code *)REFP(0xcba030)));
  }
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar1;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar4;
  if (uVar4 != 0) {
    iVar2 = 0;
    do {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4 + iVar2))) = 0;
      iVar2 = iVar2 + 0x18;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  F_00cb6d10((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(undefined4 *)&gen_args[2]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(uint *)&gen_args[3]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (*(uint *)&gen_args[3]);
}

/* ref: FUN_00cba260 */
GEN_FRAME uint GEN_THISCALL F_00cba260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcba260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) != 0) {
    F_01051d29(this,0x18,*(int *)((int)this - 4),((code *)REFP(0xcba030)));
    if ((param_1 & 1) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(int)this - 4U);
    }
    return (int)this - 4U;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00cba2d0 */
GEN_FRAME uint GEN_THISCALL F_00cba2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcba2d0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10705c8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129978));
  F_00cb4120((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc GEN_EDX_ARG);
  if ((*(int *)&gen_args[1]) != 0) {
    F_00cb4320(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,(*(int *)&gen_args[1]));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cba380 */
GEN_FRAME uint GEN_THISCALL F_00cba380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcba380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00cba3d0 */
GEN_NOFRAME uint GEN_THISCALL F_00cba3d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cba420 */
GEN_FRAME uint GEN_THISCALL F_00cba420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcba420u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  iVar2 = (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x1070603));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if ((*(undefined4 * PTR32 *)&gen_args[2]) != (undefined4 *)0x0) {
    iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
    while (iVar1 = iVar3, iVar1 != (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40) {
      bVar4 = F_00cb4170((undefined *)(iVar1 + 0xc) GEN_EDX_ARG,iVar2);
      if (bVar4 != 0) {
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
        return 0;
      }
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 8);
      }
    }
  }
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x1c,0)));
  (*(volatile undefined4 *)(gen_frame + 0x28)) = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 0;
    puVar5[2] = 0;
    (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x28)) + 0)) = 1;
    (*(volatile undefined4 *)(gen_frame + 0x28)) = 1;
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1129978));
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar5;
    F_00cb4120(puVar5 + 3 GEN_EDX_ARG);
    if (iVar2 != 0) {
      F_00cb4320(puVar5 + 3 GEN_EDX_ARG,iVar2);
    }
  }
  puVar5[1] = (int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x34;
  puVar5[2] = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x3c);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x3c) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x3c) + 4))) = puVar5;
  }
  *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x3c) = puVar5;
  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x4c) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x4c) + 1;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (uint)puVar5;
}

/* ref: FUN_00cba510 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cba510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 0x4c);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x3c);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[1] != 0) {
        *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
      }
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
      }
      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) - 1;
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
    iVar1 = *(int *)((int)this + 0x4c);
  }
  return;
}

/* ref: FUN_00cba560 */
GEN_FRAME uint GEN_THISCALL F_00cba560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcba560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    if (param_2[1] != 0) {
      *(undefined4 *)(param_2[1] + 8) = param_2[2];
    }
    if (param_2[2] != 0) {
      *(undefined4 *)(param_2[2] + 4) = param_2[1];
    }
    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) - 1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))(REFG(int, 0x15d7724) + 4 GEN_EDX_FWD,param_1);
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_2)(param_2 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00cba5b0 */
GEN_FRAME uint GEN_THISCALL F_00cba5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcba5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) * 0x58 + *(int *)((int)this + 8))));
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  F_00cba180(this_00 GEN_EDX_FWD,param_1,param_2,param_3);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + param_1;
  return (uint)this_00;
}

/* ref: FUN_00cba5f0 */
GEN_FRAME uint GEN_THISCALL F_00cba5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcba5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070633));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x11296dc));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129984));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x112997c));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(int *)&gen_args[2]);
  (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(volatile undefined4 *)(gen_frame + 0x18)) = 1;
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0xc) + 100))))((int *)((*(int *)&gen_args[2]) + 0xc) GEN_EDX_ARG)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,*puVar1);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) =
       CONCAT31(CONCAT21(CONCAT11(*(*(undefined1 * PTR32 *)&gen_args[1]),(*(undefined1 * PTR32 *)&gen_args[1])[1]),(*(undefined1 * PTR32 *)&gen_args[1])[2]),(*(undefined1 * PTR32 *)&gen_args[1])[3]);
  iVar2 = CONCAT31(CONCAT21(CONCAT11((*(undefined1 * PTR32 *)&gen_args[1])[4],(*(undefined1 * PTR32 *)&gen_args[1])[5]),(*(undefined1 * PTR32 *)&gen_args[1])[6]),(*(undefined1 * PTR32 *)&gen_args[1])[7]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + iVar2;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

