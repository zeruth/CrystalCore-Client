#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00cbab30 */
GEN_FRAME uint GEN_THISCALL F_00cbab30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbab30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x12c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x124);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  (*(volatile undefined4 *)(gen_frame + 0x118)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x114)) = ((code *)REFP(0x10706e9));
  (*(undefined * PTR32 *)(gen_frame + 0x110)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(uint *)(gen_frame + 0x10c)) = uVar1;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x110));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x110)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x1c,0)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
  (*(volatile undefined4 *)(gen_frame + 0x118)) = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    (*(undefined1 *)((char *)&(*(volatile undefined4 *)(gen_frame + 0x118)) + 0)) = 1;
    (*(volatile undefined4 *)(gen_frame + 0x118)) = 1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x1129978));
    F_00cb4120(puVar2 + 3 GEN_EDX_ARG);
  }
  puVar2[1] = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
  (*(volatile undefined4 *)(gen_frame + 0x118)) = 0xffffffff;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + 4))) = puVar2;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = puVar2;
  F_00c472af(((char *)(gen_frame + 0xc)),0x100,"%s_%d%s.exd",*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),
             *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),
             (&REFG(undefined * PTR32, 0x134c2d0))[(int)(*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x10))))],uVar1);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + 1;
  *(char *)(puVar2 + 6) = (char)(*(undefined4 *)&gen_args[1]);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(int * PTR32, 0x15d7724)[1] + 4))))
                    (REFG(int * PTR32, 0x15d7724) + 1,((char *)(gen_frame + 0xc)),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,puVar2,0,0,
                     (uint)((char)(*(undefined4 *)&gen_args[1]) == '\0'));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x110));
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cbac50 */
GEN_FRAME uint GEN_THISCALL F_00cbac50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = F_00cba420(this GEN_EDX_FWD,0,param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00c472af(((char *)(gen_frame + 0x8)),0x100,"%s_%d%s.exd",*(undefined4 *)((int)this + 0x14),
               *(undefined4 *)((int)this + 0x1c),
               (&REFG(undefined * PTR32, 0x134c2d0))[(int)(*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))))]);
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                      (REFG(int, 0x15d7724) + 4 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)this + 0xc,uVar1,0,0,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00cbace0 */
GEN_FRAME uint GEN_THISCALL F_00cbace0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbace0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cba710(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,this);
  }
  return (uint)this;
}

/* ref: FUN_00cbad10 */
GEN_FRAME uint GEN_THISCALL F_00cbad10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbad10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  bool bVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_FWD);
  bVar5 = (char)uVar2 == '\0';
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG)));
  F_00cb4360(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,puVar3 + 3);
  if (*(short *)((int)puVar3 + 0x12) == -1) {
    if (bVar5) {
      F_00cba7f0((undefined *)((int)this - 0xc) GEN_EDX_ARG,param_1);
    }
    if (puVar3[1] != 0) {
      *(undefined4 *)(puVar3[1] + 8) = puVar3[2];
    }
    if (puVar3[2] != 0) {
      *(undefined4 *)(puVar3[2] + 4) = puVar3[1];
    }
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) - 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))(REFG(int, 0x15d7724) + 4 GEN_EDX_ARG,param_1);
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1)));
  }
  else {
    puVar4 = *(undefined4 * PTR32 *)((int)this + 0x30);
    puVar3 = (undefined4 *)((int)this + 0x34);
    if (puVar4 != puVar3) {
      do {
        bVar1 = F_00cb4170(puVar4 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
        if (bVar1 != 0) {
          if (bVar5) {
            F_00cb9cd0((undefined *)((int)this - 0xc) GEN_EDX_ARG,param_1,puVar4 + 3);
          }
          if (puVar4 != (undefined4 *)0x0) {
            if (puVar4[1] != 0) {
              *(undefined4 *)(puVar4[1] + 8) = puVar4[2];
            }
            if (puVar4[2] != 0) {
              *(undefined4 *)(puVar4[2] + 4) = puVar4[1];
            }
            *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) - 1;
            ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
          }
          puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))(REFG(int, 0x15d7724) + 4 GEN_EDX_ARG,param_1)));
          break;
        }
        if (puVar4 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)puVar4[2];
        }
        puVar3 = (undefined4 *)((int)this + 0x34);
      } while (puVar4 != puVar3);
    }
  }
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) - 1;
  if (!bVar5) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    *(undefined1 *)((int)this + 0x24) = 1;
    *(undefined1 *)((int)puVar3 + 0x81) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return (uint)puVar3;
}

/* ref: FUN_00cbae50 */
GEN_FRAME float10 GEN_THISCALL F_00cbae50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbae50u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return (float10)(float)((float10)*in_ecx / (float10)*(double *)&REFG(undefined, 0x1097260));
}

/* ref: FUN_00cbaea0 */
GEN_FRAME uint GEN_THISCALL F_00cbaea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbaea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  in_ecx[1] = param_2;
  uVar1 = F_00d2cce0();
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00cbaed0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbaed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbaed0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  in_ecx[1] = 0xffffffff;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbaef0 */
GEN_FRAME uint GEN_THISCALL F_00cbaef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbaef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00cbaf10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cbaf10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbaf10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  return;
}

/* ref: FUN_00cbaf20 */
GEN_FRAME uint GEN_THISCALL F_00cbaf20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbaf20u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != param_2) {
    *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  }
  return in_ecx;
}

/* ref: FUN_00cbaf40 */
GEN_FRAME byte F_00cbaf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbaf40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
}

/* ref: FUN_00cbaf60 */
GEN_FRAME byte F_00cbaf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbaf60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) != *(int *)(param_2 + 4);
}

/* ref: FUN_00cbaf80 */
GEN_NOFRAME uint GEN_THISCALL F_00cbaf80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbaf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbf720(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbafb0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbafb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbafb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbf770(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb010 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf7f0(*(undefined4 *)((int)this + 4),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb050 */
GEN_FRAME uint GEN_THISCALL F_00cbb050(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb050u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf940(*(undefined4 *)(param_1 + 4),param_2,param_3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbb090 */
GEN_FRAME uint GEN_THISCALL F_00cbb090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf9b0(*(undefined4 *)((int)this + 4),param_1);
  if (*(int *)((int)this + 8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x5c))))
              (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 4),param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbb0e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa10(*(undefined4 *)((int)this + 4),param_1,param_2);
  if (*(int *)((int)this + 8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x60))))
              (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 4),1,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb130 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa70(*(undefined4 *)((int)this + 4),param_1);
  if (*(int *)((int)this + 8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x60))))
              (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,*(undefined4 *)((int)this + 4),0,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb1b0 */
GEN_NOFRAME byte GEN_THISCALL F_00cbb1b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cbfb10(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbb1e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb1e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbb1e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfb80(*(undefined4 *)(param_1 + 4),param_2);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb250 */
GEN_FRAME uint GEN_THISCALL F_00cbb250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbfbc0(*(undefined4 *)((int)this + 4));
  if (-1 < (int)uVar1) {
    uVar1 = F_00cbfc80(uVar1);
    F_00cbb870(param_1 GEN_EDX_ARG,uVar1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbb8a0(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00cbb2c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfc00(*(undefined4 *)((int)this + 4),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb300 */
GEN_NOFRAME uint GEN_THISCALL F_00cbb300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbfc40(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb330 */
GEN_FRAME float GEN_THISCALL F_00cbb330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cbfef0(*(uint *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar1;
}

/* ref: FUN_00cbb370 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbff60(*(undefined4 *)((int)this + 4),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb3e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbffa0(*(undefined4 *)((int)this + 4),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb420 */
GEN_NOFRAME byte GEN_THISCALL F_00cbb420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cbffe0(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbb480 */
GEN_FRAME uint GEN_THISCALL F_00cbb480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc0060(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb4c0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbb4c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc00a0(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb4f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)((int)this + 4) == 0) {
    F_00cbfe90(param_1,param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb5d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb5d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb5d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf940(*(undefined4 *)(param_1 + 4),param_2,local_c);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb640 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf9b0(*(undefined4 *)(param_1 + 4),local_c);
  if (*(int *)(param_1 + 8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x5c))))
              (*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG,*(undefined4 *)(param_1 + 4),local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb6c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb6c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa10(*(undefined4 *)(param_1 + 4),local_c,param_3);
  if (*(int *)(param_1 + 8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x60))))
              (*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG,*(undefined4 *)(param_1 + 4),1,local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb750 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbb750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb750u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa70(*(undefined4 *)(param_1 + 4),local_c);
  if (*(int *)(param_1 + 8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x60))))
              (*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG,*(undefined4 *)(param_1 + 4),0,local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb7d0 */
GEN_FRAME uint F_00cbb7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cbb7f0 */
GEN_FRAME uint F_00cbb7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb7f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cbb810 */
GEN_FRAME uint GEN_THISCALL F_00cbb810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = param_1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::BusController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cbb840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cbb870 */
GEN_FRAME uint GEN_THISCALL F_00cbb870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cbb890 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cbb890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb890u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  return;
}

/* ref: FUN_00cbb8a0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbb8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb8a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbb8b0 */
GEN_FRAME uint GEN_THISCALL F_00cbb8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00cbb8d0 */
GEN_FRAME uint GEN_THISCALL F_00cbb8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb8d0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != param_2) {
    *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  }
  return in_ecx;
}

/* ref: FUN_00cbb8f0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbb8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00cbb910 */
GEN_FRAME uint GEN_THISCALL F_00cbb910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcbb910u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))
                      (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cbb930 */
GEN_NOFRAME byte GEN_THISCALL F_00cbb930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
    return (byte)uVar1;
  }
  return 1;
}

/* ref: FUN_00cbb950 */
GEN_FRAME uint GEN_THISCALL F_00cbb950(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb950u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if (*(int *)(param_1 + 4) != 0) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x24))))
                       (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
  }
  return in_EAX;
}

/* ref: FUN_00cbb980 */
GEN_FRAME uint GEN_THISCALL F_00cbb980(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xcbb980u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint in_EAX = 0;
  
  if (*(int *)(param_1 + 4) != 0) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x28))))(*(int * PTR32 *)(param_1 + 4) GEN_EDX_FWD);
  }
  return in_EAX;
}

/* ref: FUN_00cbb9b0 */
GEN_NOFRAME double GEN_THISCALL F_00cbb9b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  
  if (*(int *)((int)this + 4) != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x2c))))(*(int * PTR32 *)((int)this + 4));
    return (double)extraout_ST0;
  }
  return 0.0;
}

/* ref: FUN_00cbb9d0 */
GEN_FRAME uint GEN_THISCALL F_00cbb9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcbb9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))
                      (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cbb9f0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbb9f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x38))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  }
  return 0;
}

/* ref: FUN_00cbba10 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbba10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbba10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00cbba30 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbba30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbba30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x40))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,
               (int)((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                    *(double *)&REFG(undefined, 0x10912a8)));
  }
  return;
}

/* ref: FUN_00cbba70 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbba70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbba70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x44))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,
               (int)((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                    *(double *)&REFG(undefined, 0x10912a8)));
  }
  return;
}

/* ref: FUN_00cbbab0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbab0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbab0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0xc);
  }
  return;
}

/* ref: FUN_00cbbad0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbad0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbad0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),1);
  }
  return;
}

/* ref: FUN_00cbbaf0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbaf0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbaf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),2);
  }
  return;
}

/* ref: FUN_00cbbb10 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbb10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbb10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0xd);
  }
  return;
}

/* ref: FUN_00cbbb30 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbb30(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbb30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),3);
  }
  return;
}

/* ref: FUN_00cbbb50 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbb50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbb50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),4);
  }
  return;
}

/* ref: FUN_00cbbb70 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbb70(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbb70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),5);
  }
  return;
}

/* ref: FUN_00cbbb90 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbb90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbb90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),6);
  }
  return;
}

/* ref: FUN_00cbbbb0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbbb0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbbb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),7);
  }
  return;
}

/* ref: FUN_00cbbbd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbbd0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbbd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),8);
  }
  return;
}

/* ref: FUN_00cbbbf0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbbf0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbbf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),9);
  }
  return;
}

/* ref: FUN_00cbbc10 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbc10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbc10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),10);
  }
  return;
}

/* ref: FUN_00cbbc30 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbc30(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbbc30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))
              (*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0xb);
  }
  return;
}

/* ref: FUN_00cbbc50 */
GEN_FRAME byte F_00cbbc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbc50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x30))))(*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG);
  }
  if (*(int *)(param_2 + 4) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 4) + 0x30))))(*(int * PTR32 *)(param_2 + 4) GEN_EDX_ARG);
    return uVar1 == uVar2;
  }
  return uVar1 == 0xffffffff;
}

/* ref: FUN_00cbbca0 */
GEN_FRAME byte F_00cbbca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x30))))(*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG);
  }
  if (*(int *)(param_2 + 4) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 4) + 0x30))))(*(int * PTR32 *)(param_2 + 4) GEN_EDX_ARG);
    return uVar1 != uVar2;
  }
  return uVar1 != 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ReverbController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cbbcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cbbd50 */
GEN_FRAME uint GEN_THISCALL F_00cbbd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbbd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00cbbd70 */
GEN_NOFRAME uint GEN_THISCALL F_00cbbd70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbd70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbbd90 */
GEN_FRAME uint GEN_THISCALL F_00cbbd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00cbbdb0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cbbdb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbdb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  return;
}

/* ref: FUN_00cbbdc0 */
GEN_FRAME uint GEN_THISCALL F_00cbbdc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (this != param_1) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
  }
  return (uint)this;
}

/* ref: FUN_00cbbde0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbbde0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 != 0) && (-1 < iVar1)) && (uVar2 = F_00cc46a0(iVar1), uVar2 != 0)) {
    return uVar2;
  }
  return *(uint *)((int)this + 4);
}

/* ref: FUN_00cbbe00 */
GEN_NOFRAME uint GEN_THISCALL F_00cbbe00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbe00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cc5590(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00cbbe10 */
GEN_NOFRAME byte GEN_THISCALL F_00cbbe10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbe10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cc5630(*(undefined4 *)((int)this + 4));
  return bVar1;
}

/* ref: FUN_00cbbe20 */
GEN_NOFRAME byte GEN_THISCALL F_00cbbe20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cc56d0(*(undefined4 *)((int)this + 4));
  return bVar1;
}

/* ref: FUN_00cbbe30 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbe30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbe30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbbe57: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbbe8a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbbe57;
  }
  if ((int)uVar2 < 0) {
    F_00d07000(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
  }
  F_00cc2880(uVar2,param_1);
LAB_00cbbe8a: ;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbbea0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbbec7: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbbefa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbbec7;
  }
  if ((int)uVar2 < 0) {
    F_00d07050(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
  }
  F_00cc2900(uVar2,param_1);
LAB_00cbbefa: ;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbbf10 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbbf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbbf37: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbbf6a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbbf37;
  }
  if ((int)uVar2 < 0) {
    F_00d070a0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
  }
  F_00cc2980(uVar2,param_1);
LAB_00cbbf6a: ;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbbff0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbbff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return uVar2;
    }
  }
  uVar2 = *(uint *)((int)this + 4);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc040 */
GEN_NOFRAME byte GEN_THISCALL F_00cbc040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbc040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbc06b;
  }
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbc06b: ;
  if ((int)uVar3 < 0) {
    bVar2 = F_00d06530(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return bVar2;
  }
  bVar2 = F_00cc2c00(uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar2;
}

/* ref: FUN_00cbc120 */
GEN_FRAME uint GEN_THISCALL F_00cbc120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc14d;
  }
  uVar2 = *(uint *)((int)this + 4);
LAB_00cbc14d: ;
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      F_00d062d0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return extraout_EAX;
    }
    if (param_1 != 0) {
      F_00cc4270(uVar2,1);
    }
    F_00cc2fc0(uVar2,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc1a0 */
GEN_FRAME uint GEN_THISCALL F_00cbc1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc1cd;
  }
  uVar2 = *(uint *)((int)this + 4);
LAB_00cbc1cd: ;
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      F_00d063a0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return extraout_EAX;
    }
    if (param_1 != 0) {
      F_00cc4270(uVar2,1);
    }
    F_00cc3040(uVar2,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc220 */
GEN_NOFRAME uint GEN_THISCALL F_00cbc220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbc220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc24b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbc24b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d07af0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3200(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc290 */
GEN_NOFRAME byte GEN_THISCALL F_00cbc290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbc290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbc2bb;
  }
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbc2bb: ;
  if ((int)uVar3 < 0) {
    bVar2 = F_00d06470(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return bVar2;
  }
  bVar2 = F_00cc30c0(uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar2;
}

/* ref: FUN_00cbc390 */
GEN_FRAME uint GEN_THISCALL F_00cbc390(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbc390u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_2),
                       (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  if (uVar2 == 0) goto LAB_00cbc40a;
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc3cc: ;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbc40a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc3cc;
  }
  if ((int)uVar2 < 0) {
    F_00d06010(*(undefined4 *)(param_1 + 8) GEN_EDX_ARG,uVar2,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc34b0(uVar2,param_2,param_3);
LAB_00cbc40a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc420 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbc420(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbc420u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3530(uVar2,param_2,param_3,param_4);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc480 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbc480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)((int)this + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc35c0(uVar2,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc4e0 */
GEN_FRAME uint GEN_THISCALL F_00cbc4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc507: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbc53a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc507;
  }
  if ((int)uVar2 < 0) {
    F_00d061d0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc3740(uVar2,param_1);
LAB_00cbc53a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc550 */
GEN_FRAME uint GEN_THISCALL F_00cbc550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc577: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbc5aa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc577;
  }
  if ((int)uVar2 < 0) {
    F_00d06220(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc3740(uVar2,param_1);
LAB_00cbc5aa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc5c0 */
GEN_FRAME uint GEN_THISCALL F_00cbc5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc5e7: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbc61a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc5e7;
  }
  if ((int)uVar2 < 0) {
    F_00d061d0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc37c0(uVar2,param_1);
LAB_00cbc61a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc630 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbc630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc657: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbc66d;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc657;
  }
  if ((int)uVar2 < 0) {
    F_00d065f0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
  }
LAB_00cbc66d: ;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc680 */
GEN_FRAME uint GEN_THISCALL F_00cbc680(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbc680u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_2),
                       (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  if (uVar2 == 0) goto LAB_00cbc6fa;
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc6bc: ;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbc6fa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc6bc;
  }
  if ((int)uVar2 < 0) {
    F_00d060f0(*(undefined4 *)(param_1 + 8) GEN_EDX_ARG,uVar2,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc38c0(uVar2,param_2,param_3);
LAB_00cbc6fa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc710 */
GEN_FRAME uint GEN_THISCALL F_00cbc710(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbc710u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc737: ;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbc768;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc737;
  }
  if ((int)uVar2 < 0) {
    F_00d06650(*(undefined4 *)(param_1 + 8) GEN_EDX_ARG,uVar2,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc39c0(uVar2,param_2);
LAB_00cbc768: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc780 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbc780(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbc780u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3840(uVar2,param_2,param_3);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc7e0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbc7e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbc7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc80b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0xffffffff;
  }
LAB_00cbc80b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d066a0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3a40(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc850 */
GEN_NOFRAME uint GEN_THISCALL F_00cbc850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbc850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc87b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0xffffffff;
  }
LAB_00cbc87b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06700(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3ae0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc8c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbc8c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbc8c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3640(uVar2,param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc920 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbc920(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbc920u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc36c0(uVar2,param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc980 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbc980(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcbc980u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3940(uVar2,param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc9e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbc9e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbc9e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc4860(uVar2,param_2,param_3,param_4);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbca50 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbca50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbca50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)((int)this + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3c20(uVar2,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbcab0 */
GEN_FRAME uint GEN_THISCALL F_00cbcab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbcab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcade;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    *param_1 = 0;
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
LAB_00cbcade: ;
  if ((int)uVar2 < 0) {
    F_00d06760(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_1,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
  F_00cc3b80(param_1,uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)param_1;
}

/* ref: FUN_00cbcbc0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbcbc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbcbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbcbe4: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbcc0b;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbcbe4;
  }
  if ((int)uVar2 < 0) {
    F_00d06810(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc3d40(uVar2);
LAB_00cbcc0b: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbcc20 */
GEN_NOFRAME uint GEN_THISCALL F_00cbcc20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbcc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcc4b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbcc4b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06860(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3dc0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbcc90 */
GEN_FRAME uint GEN_THISCALL F_00cbcc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbcc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbccb7: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbcce6;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbccb7;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3e60(uVar2);
    F_00cc6a70(param_1 GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
LAB_00cbcce6: ;
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00cbcd10 */
GEN_FRAME uint GEN_THISCALL F_00cbcd10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbcd10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbcd37: ;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbcd75;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbcd37;
  }
  if ((int)uVar2 < 0) {
    F_00d068c0(*(undefined4 *)(param_1 + 8) GEN_EDX_ARG,uVar2,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc4040(uVar2,param_2,param_3);
LAB_00cbcd75: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbcd90 */
GEN_FRAME float GEN_THISCALL F_00cbcd90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbcd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcdbf;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbcdbf: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06910(*(undefined4 *)((int)this + 8) GEN_EDX_ARG,uVar2);
  }
  else {
    fVar3 = F_00cc40d0(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbce00 */
GEN_FRAME uint GEN_THISCALL F_00cbce00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbce00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbce27: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbce5a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbce27;
  }
  if ((int)uVar2 < 0) {
    F_00d06970(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc41f0(uVar2,param_1);
LAB_00cbce5a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbce70 */
GEN_NOFRAME byte GEN_THISCALL F_00cbce70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbce70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbce97;
  }
  uVar3 = *(uint *)((int)this + 4);
LAB_00cbce97: ;
  if ((uVar3 != 0) && (-1 < (int)uVar3)) {
    bVar2 = F_00cc3fa0(uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return bVar2;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbced0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbced0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbced0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcefb;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbcefb: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06f40(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc4d20(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbcfb0 */
GEN_FRAME uint GEN_THISCALL F_00cbcfb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbcfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  float10 fVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbcfde;
  }
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 == 0) {
    fVar2 = (float10)0;
    *param_1 = (float)fVar2;
    param_1[1] = (float)fVar2;
    param_1[2] = (float)fVar2;
    param_1[3] = (float)(float10)1;
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
LAB_00cbcfde: ;
  if ((int)uVar3 < 0) {
    F_00d06270(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_1,uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
  F_00cc4400(param_1,uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)param_1;
}

/* ref: FUN_00cbd050 */
GEN_FRAME float GEN_THISCALL F_00cbd050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd07f;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd07f: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06a00(*(undefined4 *)((int)this + 8) GEN_EDX_ARG,uVar2);
  }
  else {
    fVar3 = F_00cc44b0(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd0c0 */
GEN_FRAME float GEN_THISCALL F_00cbd0c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd0ef;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd0ef: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06a60(*(undefined4 *)((int)this + 8) GEN_EDX_ARG,uVar2);
  }
  else {
    fVar3 = F_00cc4560(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd130 */
GEN_FRAME float GEN_THISCALL F_00cbd130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd15f;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd15f: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06ac0(*(undefined4 *)((int)this + 8) GEN_EDX_ARG,uVar2);
  }
  else {
    fVar3 = F_00cc4600(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd1a0 */
GEN_FRAME uint GEN_THISCALL F_00cbd1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd1c7: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbd1fa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd1c7;
  }
  if ((int)uVar2 < 0) {
    F_00d07b60(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc4740(uVar2,param_1);
LAB_00cbd1fa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbd210 */
GEN_NOFRAME uint GEN_THISCALL F_00cbd210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd23b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbd23b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d07bb0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc47c0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbd280 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cbd280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)((int)this + 4) != 0) {
    F_00cc2ec0(*(int *)((int)this + 4),0);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbd2b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbd2b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbd2b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)(param_1 + 4) != 0) {
    F_00cc48f0(*(int *)(param_1 + 4),param_2,param_3,param_4);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbd390 */
GEN_FRAME uint GEN_THISCALL F_00cbd390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00cc4ac0(*(int *)((int)this + 4),param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0xffffffff;
}

/* ref: FUN_00cbd3e0 */
GEN_FRAME byte GEN_THISCALL F_00cbd3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbd3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd40a: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbd411;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd40a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(this GEN_EDX_ARG);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x8)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *param_1 = *(undefined4 *)(uVar2 + 0x30);
        *param_2 = *(undefined4 *)(uVar2 + 0x34);
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = (int *)F_00d05480(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG,param_1,param_2,((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x18)));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar2;
  }
LAB_00cbd411: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd500 */
GEN_FRAME byte GEN_THISCALL F_00cbd500(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xcbd500u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd52a: ;
    uVar2 = *(uint *)((int)param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbd531;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd52a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(param_1 GEN_EDX_ARG);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *(float *)(uVar2 + 0x30) = param_2;
        *(float *)(uVar2 + 0x34) = param_3;
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = (int *)F_00d05480(*(undefined * PTR32 *)((int)param_1 + 8) GEN_EDX_ARG,uVar2);
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x50))
              (piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 1;
  }
LAB_00cbd531: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd610 */
GEN_FRAME byte GEN_THISCALL F_00cbd610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcbd610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd63a: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbd641;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd63a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(this GEN_EDX_ARG);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *param_1 = *(undefined4 *)(uVar2 + 0x30);
        *param_2 = *(undefined4 *)(uVar2 + 0x34);
        *param_3 = *(undefined4 *)(uVar2 + 0x58);
        *param_4 = *(undefined4 *)(uVar2 + 0x50);
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = (int *)F_00d05480(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar2;
  }
LAB_00cbd641: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd740 */
GEN_NOFRAME byte GEN_THISCALL F_00cbd740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbd768;
  }
  uVar3 = *(uint *)((int)this + 4);
LAB_00cbd768: ;
  bVar2 = 0;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      bVar2 = F_00d07150(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar3);
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return bVar2;
    }
    bVar2 = F_00cc4b60(uVar3);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar2;
}

/* ref: FUN_00cbd8e0 */
GEN_FRAME byte F_00cbd8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd911;
  }
  uVar2 = *(uint *)(param_1 + 4);
LAB_00cbd911: ;
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_2 + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
      return uVar2 == uVar3;
    }
  }
  uVar3 = *(uint *)(param_2 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  return uVar2 == uVar3;
}

/* ref: FUN_00cbd970 */
GEN_FRAME byte F_00cbd970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbd8e0(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00cbd990 */
GEN_FRAME uint GEN_THISCALL F_00cbd990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbd990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbd9bd;
  }
  uVar3 = *(uint *)((int)this + 4);
LAB_00cbd9bd: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    bVar2 = F_00d05e80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar3);
    if (bVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return 7;
    }
    if (param_1 != 0) {
      F_00d05fb0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar3,param_1);
    }
    if (0 < param_2) {
      F_00d07700(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar3,param_2);
    }
    F_00d05e30(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar3,1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  bVar2 = F_00cbc290(this GEN_EDX_ARG);
  if (bVar2 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 4;
  }
  if (param_1 != 0) {
    F_00cc2e20(uVar3,param_1);
  }
  if (0 < param_2) {
    F_00cc4ca0(uVar3,param_2);
  }
  uVar3 = F_00cc2c90(uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbdab0 */
GEN_FRAME uint GEN_THISCALL F_00cbdab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)param_1 + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbdae0;
  }
  uVar3 = *(uint *)((int)param_1 + 4);
LAB_00cbdae0: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    bVar2 = F_00d05e80(*(undefined * PTR32 *)((int)param_1 + 8) GEN_EDX_ARG,uVar3);
    if (bVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return 7;
    }
    local_c = (undefined4)
              (longlong)
              TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                    *(double *)&REFG(undefined, 0x10912a8));
    uVar3 = F_00d05f50(*(undefined * PTR32 *)((int)param_1 + 8) GEN_EDX_ARG,uVar3,local_c);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar3;
  }
  bVar2 = F_00cbc290(param_1 GEN_EDX_ARG);
  if (bVar2 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 4;
  }
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar3 = F_00cc2d80(uVar3,local_c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbdbf0 */
GEN_FRAME uint GEN_THISCALL F_00cbdbf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbdc2f;
  }
  uVar2 = *(uint *)((int)this + 4);
LAB_00cbdc2f: ;
  (*(ulonglong *)(gen_frame + 0x28)) = F_00427d90();
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x80002;
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  (*(uint *)(gen_frame + 0x38)) = param_1;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x18)),0x30);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      F_00d057a0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar2,param_1);
    }
    else if (param_1 == 0) {
      F_00cc2ec0(uVar2,0);
    }
    else {
      uVar3 = param_1;
      if (param_1 == 0xffffffff) {
        uVar3 = F_00cc3f00(uVar2);
        (*(uint *)(gen_frame + 0x14)) = uVar3;
        uVar4 = F_00cbced0(this GEN_EDX_ARG);
        uVar3 = 0;
        if (uVar4 != 0) {
          F_00d2dd80(((undefined1 *)(gen_frame + 0x8)),uVar4);
          F_00cbe880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          uVar4 = F_00cbe7e0((*(uint *)(gen_frame + 0x14)));
          if (uVar4 != 0) {
            uVar3 = (uint)*(ushort *)(uVar4 + 0x76);
          }
          F_00cbe8b0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          F_00cbe3b0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        }
      }
      F_00cc4270(uVar2,1);
      F_00cc2ec0(uVar2,uVar3);
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00cbdd20 */
GEN_FRAME uint GEN_THISCALL F_00cbdd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc120(param_1 GEN_EDX_FWD,local_c);
  return uVar1;
}

/* ref: FUN_00cbdd70 */
GEN_FRAME uint GEN_THISCALL F_00cbdd70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc1a0(param_1 GEN_EDX_FWD,local_c);
  return uVar1;
}

/* ref: FUN_00cbddc0 */
GEN_FRAME uint GEN_THISCALL F_00cbddc0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbddc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc390(param_1 GEN_EDX_FWD,param_2,local_c);
  return uVar1;
}

/* ref: FUN_00cbde10 */
GEN_FRAME uint GEN_THISCALL F_00cbde10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbde10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_4 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3530(uVar2,param_2,param_3,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbdeb0 */
GEN_FRAME uint GEN_THISCALL F_00cbdeb0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbdeb0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc680(param_1 GEN_EDX_FWD,param_2,local_c);
  return uVar1;
}

/* ref: FUN_00cbdf00 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbdf00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbdf00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3840(uVar2,param_2,local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbdf90 */
GEN_FRAME uint GEN_THISCALL F_00cbdf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbdf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbd990(param_1 GEN_EDX_FWD,local_c,param_3);
  return uVar1;
}

/* ref: FUN_00cbdfe0 */
GEN_FRAME uint GEN_THISCALL F_00cbdfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcbdfe0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbe010;
  }
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
LAB_00cbe010: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    if ((*(float *)&gen_args[4]) != 0.0) {
      F_00d05fb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,uVar3,(undefined4)gen_fl2bits((*(float *)&gen_args[4])));
    }
    if (0 < (*(int *)&gen_args[5])) {
      F_00d07700(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,uVar3,(*(int *)&gen_args[5]));
    }
    uVar3 = F_00d05ee0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,uVar3,(*(uint *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar3;
  }
  if ((*(float *)&gen_args[4]) != 0.0) {
    F_00cc2e20(uVar3,(undefined4)gen_fl2bits((*(float *)&gen_args[4])));
  }
  if (0 < (*(int *)&gen_args[5])) {
    F_00cc4ca0(uVar3,(*(int *)&gen_args[5]));
  }
  if ((*(uint *)&gen_args[1]) == 0) {
    dVar2 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
    (*(float *)&gen_args[4]) = gen_bits2f((int)dVar2);
    F_00cbddc0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(float *)&gen_args[2]),(uint)&(*(float *)&gen_args[4]));
    (*(float *)&gen_args[2]) = gen_bits2f((int)dVar2);
  }
  else {
    uVar5 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) == 0xffffffff) {
      (*(float *)&gen_args[4]) = gen_bits2f(F_00cc3f00(uVar3));
      uVar4 = F_00cbced0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      uVar5 = 0;
      if (uVar4 != 0) {
        F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
        F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        uVar4 = F_00cbe7e0((undefined4)gen_fl2bits((*(float *)&gen_args[4])));
        if (uVar4 != 0) {
          uVar5 = (uint)*(ushort *)(uVar4 + 0x74);
        }
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00cc4270(uVar3,1);
    F_00cbc390((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(float *)&gen_args[3]),0);
    F_00cc4270(uVar3,1);
    F_00cbc390((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(float *)&gen_args[2]),uVar5);
    (*(float *)&gen_args[2]) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  }
  uVar3 = F_00cbdf90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)&(*(float *)&gen_args[2]),0);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbe1a0 */
GEN_FRAME uint GEN_THISCALL F_00cbe1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbdbf0(param_1 GEN_EDX_FWD,local_c);
  return uVar1;
}

/* ref: FUN_00cbe1f0 */
GEN_FRAME uint GEN_THISCALL F_00cbe1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcbe1f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  local_10 = (undefined4)
             (longlong)
             TRUNC((double)(float)((float10)*(int *)param_5 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                   *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = local_10;
  local_10 = (undefined4)
             (longlong)
             TRUNC(*(double *)&REFG(undefined, 0x10912a8) *
                   (double)(float)((float10)*param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)));
  uVar2 = F_00cbdfe0(param_1 GEN_EDX_FWD,local_10,param_3,param_4,gen_bits2f((unsigned int)(uVar1)),param_6);
  return uVar2;
}

/* ref: FUN_00cbe280 */
GEN_FRAME uint F_00cbe280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe280u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_00cbe290 */
GEN_FRAME uint F_00cbe290(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cbe2a0 */
GEN_FRAME uint GEN_THISCALL F_00cbe2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcbe2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return (uint)this;
}

/* ref: FUN_00cbe2e0 */
GEN_FRAME uint GEN_THISCALL F_00cbe2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcbe2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_7;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cbe330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cbe360 */
GEN_FRAME uint GEN_THISCALL F_00cbe360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cbe380 */
GEN_NOFRAME uint GEN_THISCALL F_00cbe380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe380u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbe390 */
GEN_FRAME uint GEN_THISCALL F_00cbe390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00cbe3b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cbe3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe3b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  return;
}

/* ref: FUN_00cbe3c0 */
GEN_FRAME uint GEN_THISCALL F_00cbe3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe3c0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != param_2) {
    *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  }
  return in_ecx;
}

/* ref: FUN_00cbe3e0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbe3e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe3e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00cbe3f0 */
GEN_FRAME byte GEN_THISCALL F_00cbe3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbe3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00cc88c0(*(undefined4 *)((int)this + 4),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00cbe410 */
GEN_FRAME byte F_00cbe410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
}

/* ref: FUN_00cbe430 */
GEN_FRAME byte F_00cbe430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe430u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) != *(int *)(param_2 + 4);
}

/* ref: FUN_00cbe450 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbe450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc4e60(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 100))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 4),param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe4b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cbe4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc4ef0(uVar1);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 100))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 4),0);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe500 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbe500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc4fe0(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 4),1,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe560 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbe560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc5060(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 4),0,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe5c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbe5c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbe5c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc50e0(uVar1,param_2,local_c);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe6a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbe6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc79a0(*(undefined4 *)((int)this + 4),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe6e0 */
GEN_FRAME uint GEN_THISCALL F_00cbe6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7a10(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe720 */
GEN_FRAME uint GEN_THISCALL F_00cbe720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7a90(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe760 */
GEN_FRAME byte GEN_THISCALL F_00cbe760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7b10(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe7a0 */
GEN_FRAME uint GEN_THISCALL F_00cbe7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7b90(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe7e0 */
GEN_FRAME uint GEN_STDCALL F_00cbe7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7c10(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe810 */
GEN_FRAME uint GEN_THISCALL F_00cbe810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7c60(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe850 */
GEN_FRAME uint GEN_STDCALL F_00cbe850(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7ce0(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe880 */
GEN_NOFRAME uint GEN_THISCALL F_00cbe880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7570(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe8b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cbe8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7600(*(undefined4 *)((int)this + 4));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe8e0 */
GEN_NOFRAME uint GEN_THISCALL F_00cbe8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7670(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe910 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cbe910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7700(*(undefined4 *)((int)this + 4));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe940 */
GEN_NOFRAME byte GEN_THISCALL F_00cbe940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7d30(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe970 */
GEN_NOFRAME byte GEN_THISCALL F_00cbe970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7db0(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe9a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cbe9a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7e20(*(undefined4 *)((int)this + 4));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe9d0 */
GEN_FRAME byte GEN_THISCALL F_00cbe9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7770();
  if ((char)param_1 == '\0') {
    if (uVar1 != *(uint *)((int)this + 4)) goto LAB_00cbea15;
  }
  else if (uVar1 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  F_00cc7e90(*(undefined4 *)((int)this + 4),param_1);
LAB_00cbea15: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbea30 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbea30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7fd0(*(undefined4 *)((int)this + 4),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbea70 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbea70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc8040(*(undefined4 *)((int)this + 4),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbeb10 */
GEN_NOFRAME byte GEN_THISCALL F_00cbeb10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbeb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc81d0(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbeb40 */
GEN_FRAME float GEN_THISCALL F_00cbeb40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbeb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cc8430(*(uint *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar1;
}

/* ref: FUN_00cbeb80 */
GEN_FRAME uint GEN_THISCALL F_00cbeb80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbeb80u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc4170(uVar1,param_2,param_3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbebd0 */
GEN_FRAME byte GEN_THISCALL F_00cbebd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbebd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc8240(*(undefined4 *)((int)this + 4),param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbec10 */
GEN_FRAME byte GEN_THISCALL F_00cbec10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbec10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc82f0(*(undefined4 *)((int)this + 4),param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbec50 */
GEN_FRAME float10 GEN_THISCALL F_00cbec50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbec50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cc83a0(*(undefined4 *)(param_1 + 4),param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float10)fVar1;
}

/* ref: FUN_00cbec90 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbec90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbec90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc4e60(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 100))(piVar2 GEN_EDX_ARG,*(undefined4 *)(param_1 + 4),local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbed20 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbed20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbed20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc4fe0(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2 GEN_EDX_ARG,*(undefined4 *)(param_1 + 4),1,local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbedb0 */
GEN_FRAME unsigned int GEN_THISCALL F_00cbedb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbedb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc5060(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2 GEN_EDX_ARG,*(undefined4 *)(param_1 + 4),0,local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::BankController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cbee40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbee40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cbee70 */
GEN_FRAME unsigned int F_00cbee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbee70u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cbee90 */
GEN_FRAME unsigned int F_00cbee90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbee90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * pvVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) == 0) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  if ((param_2 == 8) && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      REFG(undefined4, 0x15d7780) = 0;
    }
    else {
      REFG(undefined4, 0x15d7780) = F_00cce100(pvVar1 GEN_EDX_ARG);
    }
    *(uint *)(param_1 + iVar2 * 4) = REFG(undefined4, 0x15d7780);
    iVar2 = iVar2 + 1;
  }
  if ((1 < REFG(undefined4, 0x134c7e4)) && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x14,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      REFG(undefined4, 0x15d7734) = 0;
    }
    else {
      REFG(undefined4, 0x15d7734) = F_00ccdf30(pvVar1 GEN_EDX_ARG,REFG(undefined4, 0x134c7e4));
    }
    *(uint *)(param_1 + iVar2 * 4) = REFG(undefined4, 0x15d7734);
    iVar2 = iVar2 + 1;
  }
  if (((char)param_3 != '\0') && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      REFG(undefined4, 0x15d7774) = 0;
    }
    else {
      REFG(undefined4, 0x15d7774) = F_00ccdd90(pvVar1 GEN_EDX_ARG);
    }
    *(uint *)(param_1 + iVar2 * 4) = REFG(undefined4, 0x15d7774);
    iVar2 = iVar2 + 1;
  }
  if (iVar2 < 8) {
    *(undefined4 *)(param_1 + iVar2 * 4) = 0;
  }
  return;
}

/* ref: FUN_00cbefe0 */
GEN_FRAME uint F_00cbefe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbefe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  undefined * this;
  int iVar2;
  undefined4 uVar3;
  
  REFG(int, 0x15d7748) = 1;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
  iVar2 = 0;
  REFG(undefined4, 0x15d777c) = uVar1;
  if (0 < REFG(int, 0x15d7748)) {
    do {
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x1ac,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
      if (this == (undefined *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x60);
        uVar1 = F_00cd0170(param_1 GEN_EDX_ARG,iVar2);
        uVar1 = F_00cceda0(this GEN_EDX_ARG,iVar2,uVar1,uVar3);
      }
      *(uint *)(REFG(undefined4, 0x15d777c) + iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < REFG(int, 0x15d7748));
  }
  return uVar1;
}

/* ref: FUN_00cbf0c0 */
GEN_FRAME uint F_00cbf0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf0c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  undefined * this;
  int iVar3;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    REFG(undefined4, 0x15d7754) = *(uint *)(param_1 + 0x38);
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    REFG(undefined4, 0x15d7754) = (uint)REFG(undefined1, 0x15d7799);
  }
  iVar3 = REFG(undefined4, 0x15d7754) * 4;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar3,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  iVar3 = 0;
  REFG(undefined4, 0x15d7744) = uVar1;
  if (0 < (int)REFG(undefined4, 0x15d7754)) {
    do {
      puVar2 = (undefined4 *)F_00cd0110(param_1 GEN_EDX_ARG,iVar3);
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar2;
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
      }
      if (REFG(char, 0x15d7798) != '\0') {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
        }
        F_00cca420(&REFG(char, 0x15d7798) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),iVar3);
      }
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xe8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
      if (this == (undefined *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_00cca0a0(this GEN_EDX_ARG,iVar3 + 1,&(*(undefined4 *)(gen_frame + 0x8)));
      }
      *(uint *)(REFG(undefined4, 0x15d7744) + iVar3 * 4) = uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)REFG(undefined4, 0x15d7754));
  }
  return uVar1;
}

/* ref: FUN_00cbf230 */
GEN_FRAME unsigned int F_00cbf230(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  bool bVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    REFG(int, 0x15d7764) = *(int *)(param_1 + 0x38);
  }
  if (0 < REFG(int, 0x15d7764)) {
    iVar6 = REFG(int, 0x15d7764) * 4;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d7728) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar6,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    if (0 < REFG(int, 0x15d7764)) {
      iVar8 = 0;
      iVar6 = 1;
      do {
        if (REFG(int, 0x15d7784) == 0) {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
          if (pvVar4 == (undefined *)0x0) goto LAB_00cbf377;
          uVar5 = F_00cd02e0(pvVar4 GEN_EDX_ARG,iVar6,*(undefined4 *)(param_1 + 0x60),0);
        }
        else {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
          if (pvVar4 == (undefined *)0x0) {
LAB_00cbf377: ;
            uVar5 = 0;
          }
          else {
            uVar5 = F_00cd02e0(pvVar4 GEN_EDX_ARG,iVar6,*(undefined4 *)(param_1 + 0x60),REFG(int, 0x15d7784));
          }
        }
        *(uint *)(iVar8 + REFG(undefined4, 0x15d7728)) = uVar5;
        iVar8 = iVar8 + 4;
        bVar3 = iVar6 < REFG(int, 0x15d7764);
        iVar6 = iVar6 + 1;
      } while (bVar3);
    }
  }
  if (REFG(int, 0x15d7784) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    if ((REFG(char, 0x15d7798) == '\0') && (iVar8 = 0, iVar6 = REFG(int, 0x15d7784), -1 < REFG(int, 0x15d7764))) {
      do {
        if (*(int *)(iVar6 + iVar8 * 4) != 0) {
          iVar7 = 0;
          do {
            iVar1 = *(int *)(iVar6 + iVar8 * 4);
            if (*(int *)(iVar7 + iVar1) == 0) break;
            piVar2 = *(int * PTR32 *)(iVar7 + iVar1);
            ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,0);
            iVar7 = iVar7 + 4;
            iVar6 = REFG(int, 0x15d7784);
          } while (iVar7 < 0xc);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= REFG(int, 0x15d7764));
    }
  }
  return 0;
}

/* ref: FUN_00cbf410 */
GEN_NOFRAME uint F_00cbf410(void)
{
  GEN_ENTER(0xcbf410u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = REFG(int, 0x15d7744);
  if (0 < REFG(int, 0x15d7754)) {
    do {
      if ((*(int *)(iVar5 + iVar4 * 4) != 0) &&
         (puVar1 = *(undefined4 * PTR32 *)(iVar5 + iVar4 * 4), puVar1 != (undefined4 *)0x0)) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
        iVar5 = REFG(int, 0x15d7744);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7754));
  }
  if (iVar5 != 0) {
    F_00406810(iVar5);
  }
  if (REFG(int, 0x15d7728) != 0) {
    iVar4 = 0;
    iVar5 = REFG(int, 0x15d7728);
    if (0 < REFG(int, 0x15d7764)) {
      do {
        if ((*(int *)(iVar5 + iVar4 * 4) != 0) &&
           (puVar1 = *(undefined4 * PTR32 *)(iVar5 + iVar4 * 4), puVar1 != (undefined4 *)0x0)) {
          ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
          iVar5 = REFG(int, 0x15d7728);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < REFG(int, 0x15d7764));
    }
    if (iVar5 != 0) {
      F_00406810(iVar5);
    }
  }
  if ((REFG(int * PTR32, 0x15d7784) == (int *)0x0) || (*REFG(int * PTR32, 0x15d7784) == 0)) {
    if (REFG(undefined4 * PTR32, 0x15d7780) != (undefined4 *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7780))))(REFG(undefined4 * PTR32, 0x15d7780) GEN_EDX_ARG,1);
    }
    if (REFG(undefined4 * PTR32, 0x15d7734) != (undefined4 *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7734))))(REFG(undefined4 * PTR32, 0x15d7734) GEN_EDX_ARG,1);
    }
    if (REFG(undefined4 * PTR32, 0x15d7774) != (undefined4 *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7774))))(REFG(undefined4 * PTR32, 0x15d7774) GEN_EDX_ARG,1);
    }
  }
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if ((REFG(char, 0x15d7798) == '\0') && (iVar5 = 0, 0 < REFG(int, 0x15d7748))) {
    do {
      puVar1 = *(undefined4 * PTR32 *)(REFG(int, 0x15d777c) + iVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < REFG(int, 0x15d7748));
  }
  if (REFG(int * PTR32, 0x15d7784) != (int *)0x0) {
    iVar5 = 0;
    piVar3 = REFG(int * PTR32, 0x15d7784);
    if (-1 < REFG(int, 0x15d7764)) {
      do {
        if (piVar3[iVar5] != 0) {
          iVar4 = 0;
          do {
            if (*(int *)(piVar3[iVar5] + iVar4) == 0) break;
            puVar1 = *(undefined4 * PTR32 *)(piVar3[iVar5] + iVar4);
            if (puVar1 != (undefined4 *)0x0) {
              ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
              piVar3 = REFG(int * PTR32, 0x15d7784);
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 < 0xc);
          if (piVar3[iVar5] != 0) {
            F_00406810(piVar3[iVar5]);
            piVar3 = REFG(int * PTR32, 0x15d7784);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= REFG(int, 0x15d7764));
    }
    if (piVar3 != (int *)0x0) {
      F_00406810(piVar3);
    }
  }
  if (REFG(int, 0x15d777c) != 0) {
    F_00406810(REFG(int, 0x15d777c));
  }
  if (REFG(int, 0x15d7760) != 0) {
    F_00406810(REFG(int, 0x15d7760));
  }
  if (REFG(int, 0x15d772c) != 0) {
    F_00406810(REFG(int, 0x15d772c));
  }
  if (REFG(int, 0x15d774c) != 0) {
    F_00406810(REFG(int, 0x15d774c));
  }
  if (REFG(int, 0x15d7740) != 0) {
    F_00406810(REFG(int, 0x15d7740));
  }
  if (REFG(int, 0x15d775c) != 0) {
    F_00406810(REFG(int, 0x15d775c));
  }
  if (REFG(int, 0x15d7758) != 0) {
    F_00406810(REFG(int, 0x15d7758));
  }
  if (REFG(int, 0x15d7770) != 0) {
    F_00406810(REFG(int, 0x15d7770));
  }
  uVar2 = F_00ccb4f0();
  if (REFG(undefined4 * PTR32, 0x15d773c) != (undefined4 *)0x0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d773c))))(REFG(undefined4 * PTR32, 0x15d773c) GEN_EDX_ARG,1);
  }
  return uVar2;
}

/* ref: FUN_00cbf660 */
GEN_FRAME uint F_00cbf660(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf660u, gen_a0, 0u, 0u, 0u);
  if ((*(int *)&gen_a0) == REFG(int, 0x112a808)) {
    return REFG(undefined4, 0x15d773c);
  }
  if ((-1 < (*(int *)&gen_a0)) && ((*(int *)&gen_a0) <= REFG(int, 0x15d7754))) {
    return *(uint *)(REFG(int, 0x15d7744) - 4 + (*(int *)&gen_a0) * 4);
  }
  return 0;
}

/* ref: FUN_00cbf6a0 */
GEN_FRAME byte F_00cbf6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf6a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined1 * puVar1;
  byte bVar2;
  uint uVar3;
  int in_ecx;
  
  puVar1 = (*(undefined1 * PTR32 *)&gen_args[0]);
  uVar3 = (uint)(byte)(*(undefined1 * PTR32 *)&gen_args[0])[1];
  in_ecx = REFG(int, 0x15d773c);
  if (uVar3 != REFG(undefined4, 0x112a808)) {
    if (REFG(int, 0x15d7754) < (int)uVar3) {
      return 0;
    }
    in_ecx = *(int *)(REFG(int, 0x15d7744) - 4 + uVar3 * 4);
  }
  if (in_ecx == 0) {
    return 0;
  }
  bVar2 = F_00cc9340(in_ecx GEN_EDX_ARG);
  if (bVar2 == 0) {
    return 1;
  }
  if (((*(undefined1 * PTR32 *)&gen_args[0])[3] == '\x02') || ((*(undefined1 * PTR32 *)&gen_args[0])[3] == '\x04')) {
    (*(undefined1 * PTR32 *)&gen_args[0]) = ((undefined1 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[0]), 1, 3),1)));
  }
  else {
    (*(undefined1 * PTR32 *)&gen_args[0]) = ((undefined1 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[0]), 1, 3),*(*(undefined1 * PTR32 *)&gen_args[0]))));
  }
  bVar2 = F_00cc9380((uint)(byte)puVar1[2],(*(undefined1 * PTR32 *)&gen_args[0]));
  return bVar2;
}

/* ref: FUN_00cbf720 */
GEN_FRAME uint F_00cbf720(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    uVar2 = F_00cc1130(*(int *)(iVar1 + 0xc) GEN_EDX_ARG);
    return uVar2;
  }
  return (int)*(short *)(iVar1 + 8);
}

/* ref: FUN_00cbf770 */
GEN_FRAME uint F_00cbf770(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int in_ecx;
  uint uVar1;
  
  in_ecx = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    in_ecx = *(int *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (in_ecx == 0) {
    return 0;
  }
  uVar1 = F_00cc9360(in_ecx GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cbf7b0 */
GEN_FRAME byte F_00cbf7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf7b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return (byte)*(undefined2 *)(iVar1 + 10) & 1;
}

/* ref: FUN_00cbf7f0 */
GEN_FRAME unsigned int F_00cbf7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbf7f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx;
  
  in_ecx = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return;
    }
    in_ecx = *(int *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (in_ecx != 0) {
    F_00cc9420(in_ecx GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00cbf830 */
GEN_FRAME uint F_00cbf830(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = REFG(int, 0x15d7744);
  if (0 < REFG(int, 0x15d7754)) {
    do {
      if (*(int *)(iVar4 + iVar3 * 4) != 0) {
        piVar1 = *(int * PTR32 *)(iVar4 + iVar3 * 4);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_1);
        iVar4 = REFG(int, 0x15d7744);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < REFG(int, 0x15d7754));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7748)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d777c) + iVar4 * 4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7748));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7768)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7740) + iVar4 * 4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7768));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7750)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d772c) + iVar4 * 4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7750));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7788)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d774c) + iVar4 * 4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7788));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7778)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d775c) + iVar4 * 4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7778));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 4))))(REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00cbf940 */
GEN_FRAME uint F_00cbf940(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbf940u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0xc))))
                        (REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
      return uVar2;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
  }
  return uVar2;
}

/* ref: FUN_00cbf9b0 */
GEN_FRAME uint F_00cbf9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbf9b0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x10))))(REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,param_2);
      return uVar2;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_2);
  }
  return uVar2;
}

/* ref: FUN_00cbfa10 */
GEN_FRAME uint F_00cbfa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbfa10u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x14))))(REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,param_2,param_3);
      return uVar2;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,param_2,param_3);
  }
  return uVar2;
}

/* ref: FUN_00cbfa70 */
GEN_FRAME uint F_00cbfa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfa70u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x18))))(REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,param_2);
      return uVar2;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,param_2);
  }
  return uVar2;
}

/* ref: FUN_00cbfad0 */
GEN_FRAME byte F_00cbfad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbfad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(byte *)(iVar1 + 0xe4);
}

/* ref: FUN_00cbfb10 */
GEN_FRAME byte F_00cbfb10(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfb10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(char *)(iVar1 + 0xe4) != '\0') && (*(char *)(iVar1 + 0xe5) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cbfb60 */
GEN_FRAME uint F_00cbfb60(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfb60u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0xc))))(REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),param_2);
  return uVar1;
}

/* ref: FUN_00cbfb80 */
GEN_FRAME uint F_00cbfb80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbfb80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar2 = *(int * PTR32 *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  uVar1 = param_1;
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  return uVar1;
}

/* ref: FUN_00cbfbc0 */
GEN_FRAME uint F_00cbfbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfbc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0xffffffff;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0xffffffff;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return 0;
}

/* ref: FUN_00cbfc00 */
GEN_FRAME uint F_00cbfc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfc00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    uVar1 = *(uint *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0xe0) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00cbfc40 */
GEN_FRAME uint F_00cbfc40(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfc40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(uint *)(iVar1 + 0xe0);
}

/* ref: FUN_00cbfc80 */
GEN_FRAME uint F_00cbfc80(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfc80u, gen_a0, 0u, 0u, 0u);
  if ((-1 < (*(int *)&gen_a0)) && ((*(int *)&gen_a0) < REFG(int, 0x15d7748))) {
    return *(uint *)(REFG(int, 0x15d777c) + (*(int *)&gen_a0) * 4);
  }
  return 0;
}

/* ref: FUN_00cbfcb0 */
GEN_FRAME uint F_00cbfcb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfcb0u, gen_a0, 0u, 0u, 0u);
  if (((REFG(int, 0x15d772c) != 0) && (-1 < (*(int *)&gen_a0))) && ((*(int *)&gen_a0) < REFG(int, 0x15d7750))) {
    return *(uint *)(REFG(int, 0x15d772c) + (*(int *)&gen_a0) * 4);
  }
  return 0;
}

/* ref: FUN_00cbfce0 */
GEN_FRAME uint F_00cbfce0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfce0u, gen_a0, 0u, 0u, 0u);
  if (((REFG(int, 0x15d7740) != 0) && (-1 < (*(int *)&gen_a0))) && ((*(int *)&gen_a0) < REFG(int, 0x15d7768))) {
    return *(uint *)(REFG(int, 0x15d7740) + (*(int *)&gen_a0) * 4);
  }
  return 0;
}

/* ref: FUN_00cbfd10 */
GEN_FRAME uint F_00cbfd10(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfd10u, gen_a0, 0u, 0u, 0u);
  if (((REFG(int, 0x15d774c) != 0) && (-1 < (*(int *)&gen_a0))) && ((*(int *)&gen_a0) < REFG(int, 0x15d7788))) {
    return *(uint *)(REFG(int, 0x15d774c) + (*(int *)&gen_a0) * 4);
  }
  return 0;
}

/* ref: FUN_00cbfd40 */
GEN_FRAME uint F_00cbfd40(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfd40u, gen_a0, 0u, 0u, 0u);
  if (((REFG(int, 0x15d775c) != 0) && (-1 < (*(int *)&gen_a0))) && ((*(int *)&gen_a0) < REFG(int, 0x15d7778))) {
    return *(uint *)(REFG(int, 0x15d775c) + (*(int *)&gen_a0) * 4);
  }
  return 0;
}

/* ref: FUN_00cbfd70 */
GEN_FRAME uint F_00cbfd70(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfd70u, gen_a0, 0u, 0u, 0u);
  if (((REFG(int, 0x15d7760) != 0) && (-1 < (*(int *)&gen_a0))) && ((*(int *)&gen_a0) < REFG(int, 0x15d7738))) {
    return *(uint *)(REFG(int, 0x15d7760) + (*(int *)&gen_a0) * 4);
  }
  return 0;
}

/* ref: FUN_00cbfda0 */
GEN_NOFRAME uint F_00cbfda0(void)
{
  GEN_ENTER(0xcbfda0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d776c);
}

/* ref: FUN_00cbfdc0 */
GEN_FRAME float F_00cbfdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbfdc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (REFG(int, 0x15d7730) <= param_1) {
    return *(float *)(REFG(int, 0x15d7758) - 4 + REFG(int, 0x15d7730) * 4);
  }
  return *(float *)(REFG(int, 0x15d7758) + param_1 * 4);
}

/* ref: FUN_00cbfdf0 */
GEN_FRAME uint F_00cbfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfdf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x15d7730) <= param_1) {
    return *(uint *)(REFG(int, 0x15d7770) - 4 + REFG(int, 0x15d7730) * 4);
  }
  return *(uint *)(REFG(int, 0x15d7770) + param_1 * 4);
}

/* ref: FUN_00cbfe20 */
GEN_FRAME uint F_00cbfe20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfe20u, gen_a0, gen_a1, 0u, 0u);
  if ((((REFG(int, 0x15d7784) != 0) && (-1 < (*(int *)&gen_a0))) && ((*(int *)&gen_a0) <= REFG(int, 0x15d7764))) && ((*(uint *)&gen_a1) < 4)) {
    return *((uint *)GEN_TOP((*(int *)(REFG(int, 0x15d7784) + (*(int *)&gen_a0) * 4) + (*(uint *)&gen_a1) * 4)));
  }
  return 0;
}

/* ref: FUN_00cbfe50 */
GEN_NOFRAME uint F_00cbfe50(void)
{
  GEN_ENTER(0xcbfe50u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7780);
}

/* ref: FUN_00cbfe60 */
GEN_NOFRAME uint F_00cbfe60(void)
{
  GEN_ENTER(0xcbfe60u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7734);
}

/* ref: FUN_00cbfe90 */
GEN_FRAME unsigned int F_00cbfe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfe90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (REFG(int * PTR32, 0x15d7774) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7774) + 4))))(REFG(int * PTR32, 0x15d7774) GEN_EDX_ARG,(uint)((char)param_1 == '\0'));
    if (param_2 != 0) {
      F_00ccdd50(REFG(int * PTR32, 0x15d7774) GEN_EDX_ARG,param_2);
    }
  }
  return;
}

/* ref: FUN_00cbfef0 */
GEN_FRAME float10 F_00cbfef0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if (((int)param_1 < 0) || (REFG(int, 0x15d7754) < (int)param_1)) goto LAB_00cbff4b;
    iVar1 = *(int *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (iVar1 != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x34) + 0x10))))(iVar1 + 0x34);
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x10))))(iVar1 + 0x10);
    return (float10)(float)(extraout_ST0_00 * (float10)(double)extraout_ST0);
  }
LAB_00cbff4b: ;
  return (float10)0;
}

/* ref: FUN_00cbff60 */
GEN_FRAME uint F_00cbff60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbff60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar2 = *(int * PTR32 *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  uVar1 = param_1;
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00cbffa0 */
GEN_FRAME uint F_00cbffa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbffa0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    uVar1 = *(uint *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0xe6) = (undefined1)param_2;
  }
  return uVar1;
}

/* ref: FUN_00cbffe0 */
GEN_FRAME byte F_00cbffe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbffe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(byte *)(iVar1 + 0xe6);
}

/* ref: FUN_00cc0020 */
GEN_FRAME uint F_00cc0020(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = REFG(void * PTR32, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00cc9c60(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cc0060 */
GEN_FRAME uint F_00cc0060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = REFG(void * PTR32, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00cc9d30(this GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00cc00a0 */
GEN_FRAME uint F_00cc00a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc00a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = REFG(void * PTR32, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x15d7744) - 4 + param_1 * 4);
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00cc9450(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cc00e0 */
GEN_NOFRAME unsigned int F_00cc00e0(void)
{
  GEN_ENTER(0xcc00e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x15d7754);
  uVar2 = 0;
  if (REFG(undefined4, 0x15d7754) != 0) {
    do {
      F_00cc94a0();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

/* ref: FUN_00cc0130 */
GEN_FRAME uint F_00cc0130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  (*(uint *)&gen_args[0]) = (uint)(byte)(*(uint *)&gen_args[0]);
  uVar2 = *(undefined4 *)((*(int *)&gen_args[1]) + 0x60);
  if ((REFG(int * PTR32, 0x15d7784) == (int *)0x0) || (*REFG(int * PTR32, 0x15d7784) == 0)) {
    bVar1 = *(byte *)((*(int *)&gen_args[1]) + 0x1be);
    ((undefined4 *)(gen_frame + 0xc))[0] = 0;
    F_00cbee90(((undefined4 *)(gen_frame + 0xc)),uVar2,(uint)bVar1);
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x130,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar3 != (undefined *)0x0) {
      uVar4 = F_00cd0de0(pvVar3 GEN_EDX_ARG,&(*(uint *)&gen_args[0]),uVar2,((undefined4 *)(gen_frame + 0xc)));
      REFG(undefined4, 0x15d773c) = uVar4;
      return uVar4;
    }
  }
  else {
    F_00cbee90(*REFG(int * PTR32, 0x15d7784),uVar2,0);
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x130,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar3 != (undefined *)0x0) {
      uVar4 = F_00cd0de0(pvVar3 GEN_EDX_ARG,&(*(uint *)&gen_args[0]),uVar2,*REFG(int * PTR32, 0x15d7784));
      REFG(undefined4, 0x15d773c) = uVar4;
      return uVar4;
    }
  }
  REFG(undefined4, 0x15d773c) = 0;
  return 0;
}

/* ref: FUN_00cc0260 */
GEN_FRAME uint F_00cc0260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc0260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00cc0300 */
GEN_FRAME unsigned int F_00cc0300(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    iVar6 = *(int *)(param_1 + 100);
    (*(int *)(gen_frame + 0x38)) = *(int *)(param_1 + 0x8c);
    (*(int *)(gen_frame + 0x30)) = *(int *)(param_1 + 0x90);
    if (((iVar6 != -1) || (*(int *)(param_1 + 0x8c) != -1)) || (*(int *)(param_1 + 0x90) != -1)) {
      REFG(int, 0x15d7730) = *(int *)(param_1 + 0x68);
      iVar1 = REFG(int, 0x15d7730) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d7758) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar1,"CDev.Engine.Sd",0,0,0x10);
      iVar1 = REFG(int, 0x15d7730) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d7770) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar1,"CDev.Engine.Sd",0,0,0x10);
      iVar1 = 0;
      if (0 < REFG(int, 0x15d7730)) {
        do {
          *(undefined4 *)(REFG(undefined4, 0x15d7758) + iVar1 * 4) = *(undefined4 *)(param_1 + 0x6c + iVar1 * 4);
          *(undefined4 *)(REFG(undefined4, 0x15d7770) + iVar1 * 4) = *(undefined4 *)(param_1 + 0x7c + iVar1 * 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < REFG(int, 0x15d7730));
      }
      F_00cc2750(iVar6);
      REFG(undefined4, 0x15d7764) = *(uint *)(param_1 + 0x38);
      iVar1 = REFG(undefined4, 0x15d7764) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(uint * PTR32, 0x15d7784) = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                       (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar1 + 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10
                                       )));
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d775c) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
      REFG(int, 0x15d7778) = 0;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d774c) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
      iVar1 = 0;
      REFG(int, 0x15d7788) = 0;
      if (-1 < (int)REFG(undefined4, 0x15d7764)) {
        do {
          if (((iVar1 == iVar6) || (iVar1 == -1)) || ((iVar1 == (*(int *)(gen_frame + 0x38)) || (iVar1 == (*(int *)(gen_frame + 0x30)))))) {
            if (iVar1 == 0) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x20,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
              *REFG(uint * PTR32, 0x15d7784) = uVar2;
            }
            else {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xc,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
              REFG(uint * PTR32, 0x15d7784)[iVar1] = uVar2;
            }
            iVar5 = 0;
            if (iVar1 == iVar6) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x38,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1b80(pvVar3 GEN_EDX_ARG);
              }
              *((uint *)GEN_TOP(REFG(uint * PTR32, 0x15d7784)[iVar1])) = uVar2;
              *(undefined4 *)(REFG(undefined4, 0x15d775c) + REFG(int, 0x15d7778) * 4) = *((undefined4 *)GEN_TOP(REFG(uint * PTR32, 0x15d7784)[iVar1]));
              REFG(int, 0x15d776c) = REFG(int, 0x15d7778);
              REFG(int, 0x15d7778) = REFG(int, 0x15d7778) + 1;
              iVar5 = 1;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + 4))) = 0;
            }
            if (iVar1 == -1) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xdc,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1860(pvVar3 GEN_EDX_ARG,0);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4))) = uVar2;
              *(undefined4 *)(REFG(undefined4, 0x15d774c) + REFG(int, 0x15d7788) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4)));
              REFG(int, 0x15d7788) = REFG(int, 0x15d7788) + 1;
              iVar5 = iVar5 + 1;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4))) = 0;
            }
            if (iVar1 == (*(int *)(gen_frame + 0x38))) {
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + iVar5 * 4))) = 0;
            }
            if (iVar1 == (*(int *)(gen_frame + 0x30))) {
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + iVar5 * 4))) = 0;
            }
          }
          else {
            REFG(uint * PTR32, 0x15d7784)[iVar1] = 0;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 <= (int)REFG(undefined4, 0x15d7764));
        return 0;
      }
    }
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    REFG(undefined4, 0x15d7764) = (uint)REFG(undefined1, 0x15d82b0);
    iVar6 = REFG(undefined4, 0x15d7764) * 4;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(uint * PTR32, 0x15d7784) = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar6 + 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d774c) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(int, 0x15d7788) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d772c) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(undefined4, 0x15d7750) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d7740) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(int, 0x15d7768) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d7760) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(undefined4, 0x15d7738) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d775c) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    iVar6 = 0;
    REFG(int, 0x15d7778) = 0;
    ((char *)(gen_frame + 0x8))[0] = '\0';
    ((char * PTR32 *)(gen_frame + 0xc))[0] = (char *)0x0;
    ((char * PTR32 *)(gen_frame + 0xc))[1] = (char *)0x0;
    ((char * PTR32 *)(gen_frame + 0xc))[2] = (char *)0x0;
    ((char * PTR32 *)(gen_frame + 0xc))[3] = (char *)0x0;
    if (-1 < (int)REFG(undefined4, 0x15d7764)) {
      do {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
        }
        F_00cca550(&REFG(char, 0x15d7798) GEN_EDX_ARG,((char *)(gen_frame + 0x8)),iVar6);
        if ('\x03' < ((char *)(gen_frame + 0x8))[0]) {
          if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
            REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
          }
          ((code *)REFG(gen_code32, 0x15d861c))("effectInfo.count <= MAX_EFFECTS_PER_BUS",
                          "[sd][driver][buscontainer] over effect count","BusContainer.cpp",0x27f,
                          "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
        }
        if (iVar6 == 0) {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                            (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x20,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
          *REFG(uint * PTR32, 0x15d7784) = uVar2;
        }
        else {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                            (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
          REFG(uint * PTR32, 0x15d7784)[iVar6] = uVar2;
        }
        iVar1 = 0;
        if ('\0' < ((char *)(gen_frame + 0x8))[0]) {
          do {
            switch((unsigned int)(uintptr_t)(*((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)])) {
            case '\0': ;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = 0;
              break;
            case '\x01': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xdc,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1860(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)]);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7788)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))("numCompressors_ < 4","","BusContainer.cpp",0x2e5,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *(undefined4 *)(REFG(undefined4, 0x15d774c) + REFG(int, 0x15d7788) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7788) = REFG(int, 0x15d7788) + 1;
              break;
            case '\x02': ;
            case '\x03': ;
            case '\x04': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x58,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1570(pvVar3 GEN_EDX_ARG);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7768)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))("numGranulars_ < 4",&REFG(undefined, 0x1129af3),"BusContainer.cpp",0x2f7,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *(undefined4 *)(REFG(undefined4, 0x15d7740) + REFG(int, 0x15d7768) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7768) = REFG(int, 0x15d7768) + 1;
              break;
            case '\x05': ;
              switch((unsigned int)(uintptr_t)(((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)][0x10])) {
              case '\x01': ;
                (*(char * PTR32 *)(gen_frame + 0x2c)) = "CDev.Engine.Sd.SoundDriver";
                (*(int *)(gen_frame + 0x30)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x2c)));
                if (pvVar3 == (undefined *)0x0) {
LAB_00cc0d36: ;
                  iVar5 = 0;
                }
                else {
                  piVar4 = (int *)F_00cc1640(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1);
                  if (piVar4 != (int *)0x0) break;
                  iVar5 = 0;
                }
                goto LAB_00cc0d41;
              case '\x02': ;
                (*(char * PTR32 *)(gen_frame + 0x34)) = "CDev.Engine.Sd.SoundDriver";
                (*(int *)(gen_frame + 0x38)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x34)));
                if (pvVar3 == (undefined *)0x0) goto LAB_00cc0d36;
                piVar4 = (int *)F_00cc17d0(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1);
                if (piVar4 == (int *)0x0) {
                  iVar5 = 0;
                  goto LAB_00cc0d41;
                }
                break;
              case '\x03': ;
                (*(char * PTR32 *)(gen_frame + 0x24)) = "CDev.Engine.Sd.SoundDriver";
                (*(undefined4 *)(gen_frame + 0x28)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x24)));
                if (pvVar3 == (undefined *)0x0) goto LAB_00cc0d36;
                piVar4 = (int *)F_00cc1910(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1);
                if (piVar4 == (int *)0x0) {
                  iVar5 = 0;
                  goto LAB_00cc0d41;
                }
                break;
              case '\x04': ;
                ((char * PTR32 *)(gen_frame + 0xc))[4] = "CDev.Engine.Sd.SoundDriver";
                (*(undefined4 *)(gen_frame + 0x20)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,((char * PTR32 *)(gen_frame + 0xc)) + 4);
                if ((pvVar3 == (undefined *)0x0) ||
                   (piVar4 = (int *)F_00cc1a50(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1), piVar4 == (int *)0x0))
                goto LAB_00cc0d36;
                break;
              default: ;
                goto switchD_00cc09e0_caseD_6;
              }
              iVar5 = *(int *)(*piVar4 + 4) + (int)piVar4;
LAB_00cc0d41: ;
              *((int *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = iVar5;
              break;
            case '\a': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,100,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1280(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)]);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7778)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))("numPitchShifts_ < 4",&REFG(undefined, 0x1129b0f),"BusContainer.cpp",0x2fc,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *(undefined4 *)(REFG(undefined4, 0x15d775c) + REFG(int, 0x15d7778) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7778) = REFG(int, 0x15d7778) + 1;
            }
switchD_00cc09e0_caseD_6: ;
            iVar1 = iVar1 + 1;
          } while (iVar1 < ((char *)(gen_frame + 0x8))[0]);
        }
        if (((char *)(gen_frame + 0x8))[0] < 4) {
          iVar1 = ((char *)(gen_frame + 0x8))[0] * 4;
          do {
            *((undefined4 *)GEN_TOP((iVar1 + REFG(uint * PTR32, 0x15d7784)[iVar6]))) = 0;
            iVar1 = iVar1 + 4;
          } while (iVar1 < 0xd);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)REFG(undefined4, 0x15d7764));
    }
  }
  return 0;
}

/* ref: FUN_00cc0dd0 */
GEN_FRAME uint F_00cc0dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0dd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  REFG(int, 0x15d773c) = 0;
  REFG(undefined4, 0x15d7744) = 0;
  REFG(undefined4, 0x15d7728) = 0;
  REFG(undefined4, 0x15d7780) = 0;
  REFG(undefined4, 0x15d7734) = 0;
  REFG(undefined4, 0x15d7774) = 0;
  REFG(undefined4, 0x15d7754) = 0;
  REFG(undefined4, 0x15d7764) = 0;
  REFG(undefined4, 0x15d7784) = 0;
  REFG(undefined4, 0x15d777c) = 0;
  REFG(undefined4, 0x15d7748) = 0;
  REFG(int, 0x15d7760) = 0;
  REFG(undefined4, 0x15d7738) = 0;
  REFG(undefined4, 0x15d772c) = 0;
  REFG(undefined4, 0x15d7750) = 0;
  REFG(undefined4, 0x15d774c) = 0;
  REFG(undefined4, 0x15d775c) = 0;
  REFG(undefined4, 0x15d7788) = 0;
  REFG(undefined4, 0x15d7740) = 0;
  REFG(undefined4, 0x15d7768) = 0;
  REFG(undefined4, 0x15d776c) = 0xffffffff;
  REFG(undefined4, 0x15d7730) = 0;
  REFG(undefined4, 0x15d7758) = 0;
  REFG(undefined4, 0x15d7770) = 0;
  F_00cc0300(param_1);
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = REFG(undefined4, 0x15d860c);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
      uVar1 = REFG(undefined4, 0x15d860c);
    }
  }
  uVar2 = F_00cc0130(uVar1,param_1);
  if (REFG(char, 0x15d8bd9) == '\0') {
    if (REFG(int, 0x15d7760) == 0) {
      F_00cbefe0(param_1);
    }
    F_00cbf0c0(param_1);
    F_00cbf230(param_1);
    *(undefined4 *)(REFG(int, 0x15d773c) + 0xe8) = REFG(undefined4, 0x15d7744);
    uVar2 = REFG(undefined4, 0x15d7754);
    *(uint *)(REFG(int, 0x15d773c) + 0xec) = REFG(undefined4, 0x15d7754);
  }
  return uVar2;
}

/* ref: FUN_00cc0f20 */
GEN_FRAME uint GEN_THISCALL F_00cc0f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cc0f30 */
GEN_FRAME uint GEN_THISCALL F_00cc0f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc0f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = *param_1;
  return (uint)this;
}

/* ref: FUN_00cc0f60 */
GEN_FRAME uint F_00cc0f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc0f60u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG,param_2,*param_3,0,0,param_3[1]);
  return uVar1;
}

/* ref: FUN_00cc0f90 */
GEN_FRAME uint F_00cc0f90(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0f90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(undefined4, 0x15d778c) = F_004042b0();
  }
  if (param_1 != 0) {
    REFG(undefined4, 0x15d778c) = param_1;
    return param_1;
  }
  return REFG(undefined4, 0x15d778c);
}

/* ref: FUN_00cc0fd0 */
GEN_FRAME uint F_00cc0fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc1020 */
GEN_FRAME uint F_00cc1020(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,"CDev.Engine.Sd",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00cc1070 */
GEN_FRAME uint F_00cc1070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc10c0 */
GEN_FRAME uint F_00cc10c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc10c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cc1130 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  do {
    iVar1 = in_ecx;
    in_ecx = *(int *)(iVar1 + 0xc);
  } while (in_ecx != 0);
  return (int)*(short *)(iVar1 + 8);
}

/* ref: FUN_00cc1160 */
GEN_FRAME byte GEN_THISCALL F_00cc1160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cc1190 */
GEN_FRAME uint GEN_THISCALL F_00cc1190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe0) = param_2;
  return param_2;
}

/* ref: FUN_00cc11c0 */
GEN_FRAME float GEN_THISCALL F_00cc11c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc11c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x10))))((int)this + 0x34);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))))((int)this + 0x10);
  return (float)(extraout_ST0_00 * (float10)(double)extraout_ST0);
}

/* ref: FUN_00cc12a0 */
GEN_FRAME uint GEN_THISCALL F_00cc12a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc12a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe8) = param_2;
  return param_2;
}

/* ref: FUN_00cc12b0 */
GEN_FRAME uint GEN_THISCALL F_00cc12b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc12b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xec) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf7 */
GEN_NOFRAME byte F_00cc12d0(void)
{
  GEN_ENTER(0xcc12d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf8 */
GEN_NOFRAME uint F_00cc12e0(void)
{
  GEN_ENTER(0xcc12e0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cc12f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc12f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cc1320 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1320u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x13 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 10 GEN_EDX_ARG);
  F_00cccb40(in_ecx + 1 GEN_EDX_ARG);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf0 */
GEN_FRAME uint GEN_THISCALL F_00cc1350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(this + 0x4c GEN_EDX_FWD);
  F_00cccb40(this + 0x28 GEN_EDX_ARG);
  F_00cccb40(this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cc1390 */
GEN_FRAME uint GEN_THISCALL F_00cc1390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a170);
    F_00ccd4d0((undefined *)((int)this + 4) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  return (uint)this;
}

/* ref: FUN_00cc13e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc13e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc13e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cc1410 */
GEN_FRAME uint GEN_THISCALL F_00cc1410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a1c0);
    F_00ccd4d0((undefined *)((int)this + 4) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  return (uint)this;
}

/* ref: FUN_00cc1460 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cc1490 */
GEN_FRAME uint GEN_THISCALL F_00cc1490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a210);
    F_00ccd4d0((undefined *)((int)this + 4) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  return (uint)this;
}

/* ref: FUN_00cc14e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc14e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc14e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cc1510 */
GEN_FRAME uint GEN_THISCALL F_00cc1510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a260);
    F_00ccd4d0((undefined *)((int)this + 4) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  return (uint)this;
}

/* ref: FUN_00cc1560 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cc15e0 */
GEN_FRAME float10 GEN_THISCALL F_00cc15e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc15e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0x6c + param_2 * 4);
}

/* ref: FUN_00cc15f0 */
GEN_FRAME uint GEN_THISCALL F_00cc15f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc15f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x7c + param_2 * 4);
}

/* ref: FUN_00cc1640 */
GEN_FRAME uint GEN_THISCALL F_00cc1640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a2b8);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a2b0);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd07a0(this GEN_EDX_ARG,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a26c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cc16b0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc16b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc16b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cd0a60(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this - 4))))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cc16c0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc16c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1bb0(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00cc16e0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc16e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc16e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd09c0(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this - 4))))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cc16f0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc16f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc16f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0ab0((in_ecx - *(int *)(in_ecx - 4)) - 4 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cc1700 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1700u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd400();
  return uVar1;
}

/* ref: FUN_00cc1710 */
GEN_NOFRAME byte GEN_THISCALL F_00cc1710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cd0980(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this - 4))))) GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00cc1720 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc1720u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float param_2 = (float)gen_a2;
  float param_3 = (float)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00ccdb20((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cc1730 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cd0950(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this - 4))))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00cc1740 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1780 */
GEN_FRAME uint GEN_THISCALL F_00cc1780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_FWD);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this - 4 != 0)) {
    F_00406810((int)this - 4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc17d0 */
GEN_FRAME uint GEN_THISCALL F_00cc17d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc17d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a310);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a308);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd07a0(this GEN_EDX_ARG,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a2c4));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cc1840 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc1840u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float param_2 = (float)gen_a2;
  float param_3 = (float)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00ccdb50((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cc1850 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1850u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd410();
  return uVar1;
}

/* ref: FUN_00cc1860 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1c00(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00cc1880 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc18c0 */
GEN_FRAME uint GEN_THISCALL F_00cc18c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc18c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_FWD);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this - 4 != 0)) {
    F_00406810((int)this - 4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc1910 */
GEN_FRAME uint GEN_THISCALL F_00cc1910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a368);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a360);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd07a0(this GEN_EDX_ARG,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a31c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cc1980 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1c50(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00cc19a0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc19a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc19a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd420();
  return uVar1;
}

/* ref: FUN_00cc19b0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc19b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc19b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float param_2 = (float)gen_a2;
  float param_3 = (float)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ccdb80((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc19c0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc19c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc19c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1a00 */
GEN_FRAME uint GEN_THISCALL F_00cc1a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_FWD);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this - 4 != 0)) {
    F_00406810((int)this - 4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc1a50 */
GEN_FRAME uint GEN_THISCALL F_00cc1a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a3c0);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a3b8);
    F_00ccd4d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,0);
  }
  F_00cd07a0(this GEN_EDX_ARG,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a374));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) - 4 + (int)this))) = *(int *)(*(int *)this + 4) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cc1ac0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd430();
  return uVar1;
}

/* ref: FUN_00cc1ad0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc1ad0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float param_2 = (float)gen_a2;
  float param_3 = (float)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ccdbb0((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc1ae0 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1ca0(((undefined *)GEN_TOP(((int)this - *(int *)((int)this - 4)))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00cc1b00 */
GEN_NOFRAME uint GEN_THISCALL F_00cc1b00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1b40 */
GEN_FRAME uint GEN_THISCALL F_00cc1b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_FWD);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this - 4 != 0)) {
    F_00406810((int)this - 4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc1b90 */
GEN_FRAME uint GEN_THISCALL F_00cc1b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cbee70(param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00cc1bb0 */
GEN_FRAME uint GEN_THISCALL F_00cc1bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this - 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cc1c00 */
GEN_FRAME uint GEN_THISCALL F_00cc1c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this - 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cc1c50 */
GEN_FRAME uint GEN_THISCALL F_00cc1c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this - 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cc1ca0 */
GEN_FRAME uint GEN_THISCALL F_00cc1ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this - 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cc1d20 */
GEN_FRAME uint GEN_THISCALL F_00cc1d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcc1d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(param_1,param_2,param_3,param_4,param_5);
  return (uint)this;
}

/* ref: FUN_00cc1d70 */
GEN_FRAME unsigned int F_00cc1d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1d70u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cc1d90 */
GEN_NOFRAME uint F_00cc1d90(void)
{
  GEN_ENTER(0xcc1d90u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  REFG(undefined4, 0x15d8624) = REFG(undefined4, 0x15d8624) + 1;
  if (0x3fffff < (int)REFG(undefined4, 0x15d8624)) {
    REFG(int, 0x15d8628) = REFG(int, 0x15d8628) + 1;
    REFG(undefined4, 0x15d8624) = 1;
  }
  if (REFG(int, 0x15d8628) != 0) {
    do {
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
      while( true ) {
        if (piVar1 == (int *)0x0) goto LAB_00cc1e11;
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xd0))(piVar1 GEN_EDX_ARG);
        if ((int)uVar2 >> 9 == REFG(undefined4, 0x15d8624)) break;
        piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1);
      }
      REFG(undefined4, 0x15d8624) = REFG(undefined4, 0x15d8624) + 1;
      if (0x3fffff < (int)REFG(undefined4, 0x15d8624)) {
        REFG(int, 0x15d8628) = REFG(int, 0x15d8628) + 1;
        REFG(undefined4, 0x15d8624) = 1;
      }
    } while( true );
  }
LAB_00cc1e11: ;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return REFG(undefined4, 0x15d8624);
}

/* ref: FUN_00cc1e50 */
GEN_FRAME uint F_00cc1e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcc1e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  bool bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  byte * pbVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 extraout_ST0_00;
  longlong lVar10;
  longlong lVar11;
  float local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  if (param_2 == 0) {
    return 0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  iVar8 = 0;
  for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar3 != (int *)0x0;
      piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)) {
    if ((((piVar3 != param_7) && (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3 GEN_EDX_ARG), uVar4 != 8)) &&
        (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3 GEN_EDX_ARG), uVar4 != 0x20)) &&
       (bVar2 = F_00cd4390(piVar3 GEN_EDX_ARG,param_1,param_4,param_5), bVar2 != 0)) {
      iVar8 = iVar8 + 1;
    }
  }
  local_c = 0;
  if ((iVar8 < 1) && (param_1[6] != 0)) goto LAB_00cc21ed;
  local_c = 1;
  local_10 = 0;
  if (param_1[7] == 0) {
LAB_00cc1fcb: ;
    pbVar7 = param_1 + 0x10;
  }
  else {
    pbVar7 = param_1 + 0x1c;
    do {
      local_14 = 0;
      piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
      if (piVar3 != (int *)0x0) {
        do {
          uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3 GEN_EDX_ARG);
          if (((uVar4 != 8) && (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3 GEN_EDX_ARG), uVar4 != 0x20)) &&
             (bVar2 = F_00cd3290(piVar3 GEN_EDX_ARG,pbVar7,iVar8,(uint)*(byte *)(param_2 + 2),param_4,param_5,
                                   param_3), bVar2 != 0)) {
            local_14 = local_14 + 1;
          }
          piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
        } while (piVar3 != (int *)0x0);
        if (local_14 != 0) {
          local_c = local_10 + 2;
        }
      }
      local_10 = local_10 + 1;
      pbVar7 = pbVar7 + 0x18;
      iVar8 = local_14;
    } while (local_10 < (int)(uint)param_1[7]);
    if (((int)local_c < 1) || (5 < (int)local_c)) goto LAB_00cc21ed;
    if (local_c == 1) goto LAB_00cc1fcb;
    pbVar7 = param_1 + local_c * 0x18 - 8;
  }
  if (pbVar7 != (byte *)0x0) {
    local_14 = 0;
    do {
      switch((unsigned int)(uintptr_t)(pbVar7[local_14 + 1])) {
      case 1: ;
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)) {
          if (local_c == piVar3[0x4d]) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG,0);
            if ((*(char *)(param_2 + 3) == '\x02') || (*(char *)(param_2 + 3) == '\f')) {
              *param_6 = 1;
            }
          }
        }
        break;
      case 2: ;
        for (uVar4 = F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); uVar4 != 0;
            uVar4 = F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,uVar4)) {
          if (local_c == *(uint *)(uVar4 + 0x134)) {
            iVar8 = (uint)*(byte *)(uVar4 + 0x12) + *(int *)(pbVar7 + local_14 * 4 + 8);
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            else if (0xff < iVar8) {
              iVar8 = 0xff;
            }
            *(char *)(uVar4 + 0x12) = (char)iVar8;
          }
        }
        break;
      case 3: ;
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)) {
          if (local_c == piVar3[0x4d]) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG,*(undefined4 *)(pbVar7 + local_14 * 4 + 8));
          }
        }
        break;
      case 4: ;
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)) {
          if (local_c == piVar3[0x4d]) {
            extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(piVar3[0x11] + 0x10))(piVar3 + 0x11);
            ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))
                      (piVar3 GEN_EDX_ARG,(undefined4)
                              gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(pbVar7 + local_14 * 4 + 8) *
                                                 (float10)(float)extraout_ST0)))),0);
          }
        }
        break;
      case 5: ;
        piVar3 = (int *)0x0;
        uVar4 = 0x100;
        piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        do {
          if (local_c == piVar6[0x4d]) {
            uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc0))(piVar6 GEN_EDX_ARG);
            if ((uVar5 & 0xff) < uVar4) {
              uVar4 = uVar5 & 0xff;
              piVar3 = piVar6;
            }
          }
          piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar6);
        } while (piVar6 != (int *)0x0);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
LAB_00cc21bb: ;
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG,0);
        if ((*(char *)(param_2 + 3) == '\x02') || (*(char *)(param_2 + 3) == '\f')) {
          *param_6 = 1;
        }
        break;
      case 6: ;
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)) {
          if (local_c == piVar3[0x4d]) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,*(undefined4 *)(pbVar7 + local_14 * 4 + 8),0);
          }
        }
        break;
      case 7: ;
        iVar8 = 0;
        if (*param_1 < 2) {
          fVar9 = (float10)*(float *)(pbVar7 + local_14 * 4 + 8);
        }
        else {
          iVar8 = (int)*(uint *)(pbVar7 + local_14 * 4 + 8) >> 8;
          fVar9 = ((float10)GEN_TOD((*(uint *)(pbVar7 + local_14 * 4 + 8) & 0xff))) *
                  (float10)*(double *)&REFG(undefined, 0x10928e8);
        }
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)) {
          if (local_c == piVar3[0x4d]) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar9),iVar8);
          }
        }
        break;
      case 8: ;
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3)) {
          uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3 GEN_EDX_ARG);
          if (((uVar4 != 8) && (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3 GEN_EDX_ARG), uVar4 != 0x20)) &&
             (local_c == piVar3[0x4d])) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG,0);
            if ((*(char *)(param_2 + 3) == '\x02') || (*(char *)(param_2 + 3) == '\f')) {
              *param_6 = 1;
            }
            break;
          }
        }
        break;
      case 0xc: ;
        piVar3 = (int *)0x0;
        bVar1 = true;
        piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
        if (piVar6 != (int *)0x0) {
          do {
            if (local_c == piVar6[0x4d]) {
              if (bVar1) {
                bVar1 = false;
              }
              else {
                lVar10 = ((gen_lcode *)*(gen_code32 *)(*piVar3 + 0x118))(piVar3);
                lVar11 = ((gen_lcode *)*(gen_code32 *)(*piVar6 + 0x118))(piVar6);
                if (lVar10 <= lVar11) goto LAB_00cc23b1;
              }
              piVar3 = piVar6;
            }
LAB_00cc23b1: ;
            piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar6);
          } while (piVar6 != (int *)0x0);
          if (piVar3 != (int *)0x0) goto LAB_00cc21bb;
        }
        break;
      case 0xd: ;
        piVar3 = (int *)0x0;
        local_18 = *(float *)&REFG(undefined, 0x112a620);
        piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        do {
          if (local_c == piVar6[0x4d]) {
            extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar6 + 0x110))(piVar6);
            if ((float10)(float)extraout_ST0_00 <= (float10)local_18) {
              piVar3 = piVar6;
              local_18 = (float)extraout_ST0_00;
            }
          }
          piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar6);
        } while (piVar6 != (int *)0x0);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG,0);
        if ((*(char *)(param_2 + 3) == '\x02') || (*(char *)(param_2 + 3) == '\f')) {
          *param_6 = 1;
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < 1);
  }
LAB_00cc21ed: ;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return local_c;
}

/* ref: FUN_00cc24a0 */
GEN_FRAME uint F_00cc24a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc24a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < REFG(int, 0x15d862c)) {
    iVar2 = 0;
    do {
      bVar1 = F_00cd6590(iVar2 + REFG(int, 0x15d8630) GEN_EDX_ARG);
      if ((bVar1 != 0) &&
         (((char)param_1 != '\0' || ((*(uint *)(iVar2 + 0x24c + REFG(int, 0x15d8630)) >> 6 & 1) == 0)))) {
        return iVar3 * 0x278 + REFG(int, 0x15d8630);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x278;
    } while (iVar3 < REFG(int, 0x15d862c));
  }
  return 0;
}

/* ref: FUN_00cc2510 */
GEN_FRAME uint F_00cc2510(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  if ((int)param_1 < 0) {
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
  bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
  if (bVar1 != 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      return (uint)piVar3;
    }
  }
  return 0;
}

/* ref: FUN_00cc2570 */
GEN_FRAME uint F_00cc2570(void)
{
  GEN_ENTER(0xcc2570u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  ((uint *)(gen_frame + 0x4))[9] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = 0x398;
  ((uint *)(gen_frame + 0x4))[1] = 0x420;
  ((uint *)(gen_frame + 0x4))[3] = 0x420;
  ((uint *)(gen_frame + 0x4))[5] = 0x3a8;
  ((uint *)(gen_frame + 0x4))[6] = 0x3a8;
  ((uint *)(gen_frame + 0x4))[0] = 0x398;
  ((uint *)(gen_frame + 0x4))[2] = 0x430;
  ((uint *)(gen_frame + 0x4))[4] = 0x398;
  ((uint *)(gen_frame + 0x4))[7] = 0x398;
  ((uint *)(gen_frame + 0x4))[8] = 0;
  uVar1 = 0x398;
  iVar3 = 1;
  do {
    if ((int)uVar1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = ((uint *)(gen_frame + 0x4))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (uVar2 != 0);
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cc25e0 */
GEN_FRAME byte F_00cc25e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc25e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  byte extraout_AL = 0;
  int iVar2;
  int iVar3;
  
  bVar1 = F_00cccbf0(&REFG(undefined, 0x15d8644) GEN_EDX_ARG);
  if (bVar1 == 0) {
    bVar1 = 0;
    if (0 < REFG(int, 0x15d862c)) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        bVar1 = F_00cd65d0((undefined *)(iVar2 + REFG(int, 0x15d8630)) GEN_EDX_ARG,param_1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x278;
      } while (iVar3 < REFG(int, 0x15d862c));
    }
  }
  else {
    F_00cccb80((undefined *)&REFG(undefined, 0x15d8644) GEN_EDX_ARG,param_1);
    *(float *)&REFG(undefined, 0x134c6f8) =
         F_00cccee0((undefined *)&REFG(undefined, 0x15d8644) GEN_EDX_ARG);
    bVar1 = extraout_AL;
    if (0 < REFG(int, 0x15d862c)) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        F_00cd6e20((undefined *)(iVar2 + REFG(int, 0x15d8630)) GEN_EDX_ARG);
        bVar1 = F_00cd65d0((undefined *)(REFG(int, 0x15d8630) + iVar2) GEN_EDX_ARG,param_1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x278;
      } while (iVar3 < REFG(int, 0x15d862c));
      return bVar1;
    }
  }
  return bVar1;
}

/* ref: FUN_00cc2690 */
GEN_FRAME uint F_00cc2690(float gen_a0)
{
  GEN_ENTER(0xcc2690u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  int * piVar1;
  
  *(float *)&REFG(undefined, 0x134c6f4) = param_1;
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1));
  }
  return 0;
}

/* ref: FUN_00cc26e0 */
GEN_FRAME uint F_00cc26e0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc26e0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    *(float *)&REFG(undefined, 0x134c6f8) = param_1;
    F_00cccbd0(&REFG(undefined, 0x15d8644) GEN_EDX_ARG,param_1);
    iVar3 = 0;
    uVar1 = 0;
    if (0 < REFG(int, 0x15d862c)) {
      iVar2 = 0;
      do {
        uVar1 = F_00cd6e20((undefined *)(iVar2 + REFG(int, 0x15d8630)) GEN_EDX_ARG);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x278;
      } while (iVar3 < REFG(int, 0x15d862c));
    }
    return uVar1;
  }
  uVar1 = F_00cccd90(&REFG(undefined, 0x15d8644) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cc2740 */
GEN_NOFRAME float F_00cc2740(void)
{
  GEN_ENTER(0xcc2740u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x134c6f8);
}

/* ref: FUN_00cc2750 */
GEN_FRAME uint F_00cc2750(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x134c6fc) = param_1;
  return param_1;
}

/* ref: FUN_00cc2760 */
GEN_NOFRAME uint F_00cc2760(void)
{
  GEN_ENTER(0xcc2760u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x134c6fc);
}

/* ref: FUN_00cc2770 */
GEN_FRAME uint F_00cc2770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2770u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  iVar1 = 0;
  if (param_2 == 0) {
    return REFG(undefined4, 0x15d862c);
  }
  if (param_1 != 0) {
    uVar2 = 0;
    local_8 = 0;
    iVar3 = param_1;
    if (0 < (int)REFG(undefined4, 0x15d862c)) {
      do {
        if (param_2 <= uVar2) {
          return local_8;
        }
        F_00cd7180((undefined *)(iVar1 + REFG(int, 0x15d8630)) GEN_EDX_ARG,iVar3);
        local_8 = local_8 + 1;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x24;
        iVar1 = iVar1 + 0x278;
      } while ((int)uVar2 < (int)REFG(undefined4, 0x15d862c));
    }
    return local_8;
  }
  return 0;
}

/* ref: FUN_00cc27e0 */
GEN_NOFRAME uint F_00cc27e0(void)
{
  GEN_ENTER(0xcc27e0u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  int in_ecx;
  
  if (REFG(int, 0x15d8630) != 0) {
    iVar2 = *(int *)(REFG(int, 0x15d8630) - 4);
    iVar1 = REFG(int, 0x15d8630) - 4;
    in_ecx = iVar2 * 0x278 + REFG(int, 0x15d8630);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      in_ecx = in_ecx - 0x278;
      F_00cd6180(in_ecx GEN_EDX_ARG);
    }
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
  if (REFG(char, 0x15d867c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  uVar3 = 0;
  if (REFG(int, 0x15d8668) != 0) {
    uVar3 = F_00406810(REFG(int, 0x15d8668));
    REFG(int, 0x15d8668) = 0;
  }
  REFG(undefined4, 0x15d866c) = 0;
  if (REFG(char, 0x15d8698) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00cc2880 */
GEN_FRAME uint F_00cc2880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2880u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x6c))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc2900 */
GEN_FRAME uint F_00cc2900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2900u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc2980 */
GEN_FRAME uint F_00cc2980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2980u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc2a00 */
GEN_FRAME uint F_00cc2a00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2a00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc2aa0 */
GEN_FRAME byte F_00cc2aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc2aa0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined * this;
  undefined4 * puVar4;
  int iVar5;
  
  iVar2 = param_1;
  puVar4 = param_2;
  if (0 < param_1) {
    for (; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar3 = 0;
      if (REFG(int, 0x15d862c) < 1) {
LAB_00cc2b0a: ;
        iVar2 = 0;
        do {
          if (param_2[iVar2] == 0) {
            return 0;
          }
          F_00cd8630(param_2[iVar2] GEN_EDX_ARG);
          param_2[iVar2] = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_1);
        return 0;
      }
      iVar5 = 0;
      while ((bVar1 = F_00cd6590(iVar5 + REFG(int, 0x15d8630) GEN_EDX_ARG), bVar1 == 0 ||
             (((char)param_3 == '\0' && ((*(uint *)(iVar5 + 0x24c + REFG(int, 0x15d8630)) >> 6 & 1) != 0))))
            ) {
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x278;
        if (REFG(int, 0x15d862c) <= iVar3) goto LAB_00cc2b0a;
      }
      this = (undefined *)(iVar3 * 0x278 + REFG(int, 0x15d8630));
      if (this == (undefined *)0x0) goto LAB_00cc2b0a;
      F_00cd85d0(this GEN_EDX_ARG);
      param_2[iVar2] = this;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return 1;
}

/* ref: FUN_00cc2b60 */
GEN_FRAME byte F_00cc2b60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2b60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      if (REFG(char, 0x15d86b4) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
      }
      return 0;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1 GEN_EDX_ARG,param_1);
    if (((char)uVar2 != '\0') &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x138))(piVar1 GEN_EDX_ARG), (char)uVar2 == '\0')) break;
    piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1);
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 1;
}

/* ref: FUN_00cc2c00 */
GEN_FRAME byte F_00cc2c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2c00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return 1;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc2c90 */
GEN_FRAME uint F_00cc2c90(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2c90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
        }
        if (REFG(char, 0x15d7798) != '\0') {
          if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
            F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
          }
          F_00ccaea0(&REFG(char, 0x15d7798) GEN_EDX_ARG,piVar3);
        }
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 3;
}

/* ref: FUN_00cc2d80 */
GEN_FRAME uint F_00cc2d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2d80u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 3;
}

/* ref: FUN_00cc2e20 */
GEN_FRAME byte F_00cc2e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2e20u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc2ec0 */
GEN_FRAME uint F_00cc2ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2ec0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc2f40 */
GEN_FRAME uint F_00cc2f40(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3 GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc2fc0 */
GEN_FRAME uint F_00cc2fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2fc0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3040 */
GEN_FRAME uint F_00cc3040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc3040u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc30c0 */
GEN_FRAME byte F_00cc30c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc30c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x134))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3160 */
GEN_FRAME byte F_00cc3160(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x13c))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3200 */
GEN_FRAME uint F_00cc3200(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc32a0 */
GEN_FRAME unsigned int F_00cc32a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc32a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
  if (REFG(char, 0x15d867c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  *param_1 = REFG(undefined4 * PTR32, 0x15d866c);
  REFG(undefined4 * PTR32, 0x15d866c) = param_1;
  if (REFG(char, 0x15d8698) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  return 0;
}

/* ref: FUN_00cc32f0 */
GEN_FRAME uint F_00cc32f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc32f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int * piVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  uVar1 = gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d869c));
  if (REFG(int, 0x15d863c) != 0) {
    piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,param_1);
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x138))(piVar2 GEN_EDX_ARG);
      if ((char)uVar1 == '\0') {
        piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2);
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)*piVar2)(piVar2 GEN_EDX_ARG,0);
        REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
        if (REFG(char, 0x15d867c) != '\0') {
          gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8680));
        }
        *piVar2 = (int)REFG(int * PTR32, 0x15d866c);
        REFG(int * PTR32, 0x15d866c) = piVar2;
        if (REFG(char, 0x15d8698) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
        }
        piVar2 = (int *)F_00d2ff30(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2);
      }
    } while (piVar2 != (int *)0x0);
    uVar1 = 0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00cc33c0 */
GEN_NOFRAME uint F_00cc33c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc33c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14c))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc3430 */
GEN_FRAME unsigned int F_00cc3430(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3430u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  int iVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  iVar1 = 0;
  if (0 < REFG(int, 0x15d862c)) {
    iVar2 = 0;
    do {
      F_00cd9d70((undefined *)(iVar2 + REFG(int, 0x15d8630)) GEN_EDX_ARG,param_1);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x278;
    } while (iVar1 < REFG(int, 0x15d862c));
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return;
}

/* ref: FUN_00cc3490 */
GEN_FRAME unsigned int F_00cc3490(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00cc32f0(param_1);
  F_00cc3430(param_1);
  return;
}

/* ref: FUN_00cc34b0 */
GEN_FRAME uint F_00cc34b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc34b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3530 */
GEN_FRAME uint F_00cc3530(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcc3530u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3,param_4)
      ;
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc35c0 */
GEN_FRAME uint F_00cc35c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc35c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3640 */
GEN_FRAME uint F_00cc3640(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcc3640u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc36c0 */
GEN_FRAME uint F_00cc36c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcc36c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3740 */
GEN_FRAME uint F_00cc3740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc3740u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc37c0 */
GEN_FRAME uint F_00cc37c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc37c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x198))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3840 */
GEN_FRAME uint F_00cc3840(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc3840u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc38c0 */
GEN_FRAME uint F_00cc38c0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc38c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3940 */
GEN_FRAME uint F_00cc3940(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcc3940u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc39c0 */
GEN_FRAME uint F_00cc39c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcc39c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3a40 */
GEN_FRAME uint F_00cc3a40(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xd4))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc3ae0 */
GEN_FRAME uint F_00cc3ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xd8))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc3b80 */
GEN_FRAME uint F_00cc3b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc3b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_2) {
    piVar3 = ((int *)GEN_TOP(((param_2 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_2);
      if ((char)uVar2 != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xe0))(piVar3 GEN_EDX_ARG,param_1);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (uint)param_1;
      }
    }
  }
  *param_1 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return (uint)param_1;
}

/* ref: FUN_00cc3c20 */
GEN_FRAME uint F_00cc3c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc3c20u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x7c))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3ca0 */
GEN_FRAME byte F_00cc3ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3ca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x154))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3d40 */
GEN_FRAME uint F_00cc3d40(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3d40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x158))(piVar3 GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc3dc0 */
GEN_FRAME uint F_00cc3dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3e60 */
GEN_FRAME uint F_00cc3e60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3e60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xbc))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3f00 */
GEN_FRAME uint F_00cc3f00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3f00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3fa0 */
GEN_FRAME byte F_00cc3fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3fa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xf0))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4040 */
GEN_FRAME uint F_00cc4040(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc4040u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x80))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc4170 */
GEN_FRAME uint F_00cc4170(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc4170u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc41f0 */
GEN_FRAME uint F_00cc41f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc41f0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x84))(piVar3 GEN_EDX_ARG,param_2,0);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc4270 */
GEN_FRAME uint F_00cc4270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4270u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x34))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc42f0 */
GEN_FRAME uint F_00cc42f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc42f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  int * piVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar2 != (int *)0x0;
      piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xec))(piVar2 GEN_EDX_ARG);
    if (uVar3 == 0xe) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 300))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      if ((char)uVar3 == '\0') {
        (*(uint *)(gen_frame + 0xc)) = 0x32000f;
      }
      (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)(int)(*(int *)(param_1 + 4) - ((*(uint *)(gen_frame + 0xc)) & 0xffff)) /
                        (float10)(int)(((*(uint *)(gen_frame + 0xc)) >> 0x10) - ((*(uint *)(gen_frame + 0xc)) & 0xffff)))));
      fVar1 = (float10)0;
      fVar4 = (float10)(*(float *)(gen_frame + 0x4));
      if (!(fVar1 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN(fVar1))) {
        fVar1 = (float10)1;
        if (!(fVar4 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN(fVar4))) {
          (*(float *)(gen_frame + 0x4)) = (float)fVar1;
        }
      }
      else {
        (*(float *)(gen_frame + 0x4)) = (float)fVar1;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x80))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4))),0);
    }
  }
  uVar3 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar3 = extraout_EAX;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00cc4400 */
GEN_FRAME uint F_00cc4400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4400u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_2) {
    piVar4 = ((int *)GEN_TOP(((param_2 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar2 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar4);
    if ((bVar2 != 0) &&
       (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x140))(piVar4 GEN_EDX_ARG,param_2), (char)uVar3 != '\0')) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xfc))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    }
  }
  fVar1 = (float10)0;
  *param_1 = (float)fVar1;
  param_1[1] = (float)fVar1;
  param_1[2] = (float)fVar1;
  param_1[3] = (float)(float10)1;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00cc44b0 */
GEN_FRAME float10 F_00cc44b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc44b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  float fVar5;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar4 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar4);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x140))(piVar4 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xf8))(piVar4 GEN_EDX_ARG);
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xf4))(piVar4 GEN_EDX_ARG);
        fVar5 = F_00cc83a0(uVar3,uVar2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (float10)fVar5;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return (float10)0;
}

/* ref: FUN_00cc46a0 */
GEN_FRAME uint F_00cc46a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc46a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x114))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4740 */
GEN_FRAME uint F_00cc4740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4740u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x8c))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc47c0 */
GEN_FRAME uint F_00cc47c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc47c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x90))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4860 */
GEN_FRAME uint F_00cc4860(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcc4860u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x94))(piVar3 GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc48f0 */
GEN_FRAME uint F_00cc48f0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcc48f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x98))(piVar3 GEN_EDX_ARG);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc4980 */
GEN_FRAME uint F_00cc4980(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x11c))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4a20 */
GEN_FRAME uint F_00cc4a20(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4a20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined8 uVar4;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar4 = ((gen_lcode *)*(gen_code32 *)(*piVar3 + 0x118))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (uint)uVar4;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4ac0 */
GEN_FRAME uint F_00cc4ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4ac0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x120))(piVar3 GEN_EDX_ARG,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc4b60 */
GEN_FRAME byte F_00cc4b60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4b60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc0))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4c00 */
GEN_FRAME byte F_00cc4c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4c00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x15c))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4ca0 */
GEN_FRAME uint F_00cc4ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4ca0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar2 = extraout_EAX;
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa0))(piVar3 GEN_EDX_ARG,param_2);
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc4d20 */
GEN_FRAME uint F_00cc4d20(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xf4))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4dc0 */
GEN_FRAME uint F_00cc4dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xf8))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc4e60 */
GEN_FRAME uint F_00cc4e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4e60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      if (param_2 != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1 GEN_EDX_ARG,1);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_2);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc4ef0 */
GEN_FRAME uint F_00cc4ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int * piVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  uVar1 = gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d869c));
  if (REFG(int, 0x15d863c) != 0) {
    piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
    do {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x144))(piVar2 GEN_EDX_ARG,param_1);
      if ((char)uVar1 == '\0') {
LAB_00cc4fa7: ;
        piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2);
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2 GEN_EDX_ARG);
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x138))(piVar2 GEN_EDX_ARG);
        if ((char)uVar1 == '\0') goto LAB_00cc4fa7;
        ((GEN_TCODE *)*(gen_code32 *)*piVar2)(piVar2 GEN_EDX_ARG,0);
        REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
        if (REFG(char, 0x15d867c) != '\0') {
          gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8680));
        }
        *piVar2 = (int)REFG(int * PTR32, 0x15d866c);
        REFG(int * PTR32, 0x15d866c) = piVar2;
        if (REFG(char, 0x15d8698) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
        }
        piVar2 = (int *)F_00d2ff30(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2);
      }
    } while (piVar2 != (int *)0x0);
    uVar1 = 0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00cc4fe0 */
GEN_FRAME uint F_00cc4fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,param_2);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc5060 */
GEN_FRAME uint F_00cc5060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc5060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG,param_2);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc50e0 */
GEN_FRAME uint F_00cc50e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc50e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1 GEN_EDX_ARG,param_1);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc5160 */
GEN_FRAME byte F_00cc5160(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      if (REFG(char, 0x15d86b4) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
      }
      return 0;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1 GEN_EDX_ARG,param_1);
    if (((char)uVar2 != '\0') && (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xdc))(piVar1 GEN_EDX_ARG), (uVar2 & 8) != 0))
    break;
    piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1);
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 1;
}

/* ref: FUN_00cc5200 */
GEN_FRAME byte F_00cc5200(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x150))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc52a0 */
GEN_FRAME uint F_00cc52a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc52a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)) {
    if (param_1 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1 GEN_EDX_ARG,1);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc5320 */
GEN_NOFRAME byte F_00cc5320(void)
{
  GEN_ENTER(0xcc5320u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      if (REFG(char, 0x15d86b4) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
      }
      return 1;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x138))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') break;
    piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1);
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc53a0 */
GEN_FRAME uint F_00cc53a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc53a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  int * piVar2;
  int * extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
  piVar2 = piVar1;
  if ((char)param_1 == '\0') {
    while (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG,param_2,param_3);
      piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar2);
      piVar1 = (int *)0x0;
    }
  }
  else if (piVar1 != (int *)0x0) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,param_2,param_3);
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1);
    } while (piVar1 != (int *)0x0);
    piVar1 = (int *)0x0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    piVar1 = extraout_EAX;
  }
  return (uint)piVar1;
}

/* ref: FUN_00cc5440 */
GEN_FRAME uint F_00cc5440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc5440u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x134))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xf4))(piVar1 GEN_EDX_ARG);
      iVar3 = 0;
      if (0 < (int)uVar4) {
        do {
          if (*(uint *)(param_1 + iVar3 * 4) == uVar2) goto LAB_00cc54a5;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar4);
      }
      *(uint *)(param_1 + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
      if (param_2 <= (int)uVar4) break;
    }
LAB_00cc54a5: ;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return uVar4;
}

/* ref: FUN_00cc54e0 */
GEN_NOFRAME uint F_00cc54e0(void)
{
  GEN_ENTER(0xcc54e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar1 = REFG(undefined4, 0x15d863c);
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return uVar1;
}

/* ref: FUN_00cc5520 */
GEN_FRAME uint F_00cc5520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc5520u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    REFG(char, 0x15d86b4) = '\x01';
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
    for (uVar2 = 0; (uVar1 != 0 && (uVar2 < param_2)); uVar2 = uVar2 + 1) {
      *(uint *)(param_1 + uVar2 * 4) = uVar1;
      uVar1 = F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,uVar1);
    }
    if (REFG(char, 0x15d86b4) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00cc5590 */
GEN_FRAME uint F_00cc5590(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5590u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x188))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc5630 */
GEN_FRAME byte F_00cc5630(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2 & 1;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc56d0 */
GEN_FRAME byte F_00cc56d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc56d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int * piVar4;
  
  bVar3 = 1;
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar4 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar4);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x140))(piVar4 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xdc))(piVar4 GEN_EDX_ARG);
        if ((uVar2 & 0x28) == 0) {
          bVar3 = 0;
        }
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return bVar3;
}

/* ref: FUN_00cc5760 */
GEN_FRAME uint F_00cc5760(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 400))(piVar3 GEN_EDX_ARG);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc5800 */
GEN_FRAME uint F_00cc5800(void)
{
  GEN_ENTER(0xcc5800u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  undefined * this;
  uint extraout_EAX = 0;
  uint in_ECX = 0;
  byte bVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0);
  while (piVar1 != (int *)0x0) {
    bVar3 = 0;
    (*(uint *)(gen_frame + 0x8)) = in_ECX & 0xffffff00;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc4))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      do {
        this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xcc))(piVar1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)))));
        F_00cd6e40(this GEN_EDX_ARG);
        bVar3 = bVar3 + 1;
        (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar3);
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc4))(piVar1 GEN_EDX_ARG);
      } while (bVar3 < (byte)uVar2);
    }
    piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar1);
    in_ECX = (*(uint *)(gen_frame + 0x8));
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc58a0 */
GEN_FRAME byte F_00cc58a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc58a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar3);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3 GEN_EDX_ARG,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x194))(piVar3 GEN_EDX_ARG,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc5940 */
GEN_FRAME uint F_00cc5940(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  char cVar1;
  int iVar2;
  byte bVar3;
  char * pcVar4;
  uint uVar5;
  int * piVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  char * pcVar10;
  float10 extraout_ST0;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(int *)(gen_frame + 0x10)) = param_1;
  F_00c4720f(((char *)(gen_frame + 0x18)),"[Sound]\n");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x18));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,0); piVar6 != (int *)0x0;
      piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634) GEN_EDX_ARG,piVar6)) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xdc))(piVar6 GEN_EDX_ARG);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x13c))(uVar5);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x138))(uVar5 & 0xff);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x150))(uVar5 & 0xff);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xd0))(uVar5 & 0xff);
    F_00c4720f(((char *)(gen_frame + 0x18)),"Snd[%d] ID=%x Str=%d Fin=%d Pause=%d State=%d ",(*(int *)(gen_frame + 0x14)),uVar5);
    pcVar4 = ((char *)(gen_frame + 0x18));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
    pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) - 1);
    do {
      pcVar10 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = ((char *)(gen_frame + 0x18));
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar4 = pcVar4 + 1;
    }
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xe0))(piVar6 GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc)))));
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar6 + 0x10c))(piVar6);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xa4))
                      (*puVar7,(int)(ulonglong)gen_d2bits((double)extraout_ST0),
                       (int)((ulonglong)gen_d2bits((double)extraout_ST0) >> 0x20));
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xf4))(uVar5);
    F_00c4720f(((char *)(gen_frame + 0x18)),"BnkID=%x BusNo=%d Time=%d Vol=%f\n",uVar5);
    pcVar4 = ((char *)(gen_frame + 0x18));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
    pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) - 1);
    do {
      pcVar10 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar10 != '\0');
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
    pcVar10 = ((char *)(gen_frame + 0x18));
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"SoundContainerCount = %d\n",(*(int *)(gen_frame + 0x14)));
  iVar2 = (*(int *)(gen_frame + 0x10));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) - 1);
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x18));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"[Track]\n");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(iVar2 - 1);
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x18));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  F_00c4720f(((char *)(gen_frame + 0x18)),"UseTrack = ");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(iVar2 - 1);
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x18));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  if (0 < REFG(int, 0x15d862c)) {
    (*(int *)(gen_frame + 0x10)) = 0;
    do {
      iVar9 = (*(int *)(gen_frame + 0xc));
      bVar3 = F_00cd6590((*(int *)(gen_frame + 0x10)) + REFG(int, 0x15d8630) GEN_EDX_ARG);
      if (bVar3 == 0) {
        F_00c4720f(((char *)(gen_frame + 0x18)),&REFG(undefined, 0x112a5c4),iVar9);
        pcVar4 = ((char *)(gen_frame + 0x18));
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
        pcVar4 = (char *)(iVar2 - 1);
        do {
          pcVar10 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar10 != '\0');
        pcVar10 = ((char *)(gen_frame + 0x18));
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar4 = pcVar4 + 4;
        }
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
        for (uVar5 = uVar5 & 3; iVar9 = (*(int *)(gen_frame + 0xc)), uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0x278;
      (*(int *)(gen_frame + 0xc)) = iVar9 + 1;
    } while (iVar9 + 1 < REFG(int, 0x15d862c));
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"\nTrackCount = %d/%d\n",(*(int *)(gen_frame + 0x14)),REFG(int, 0x15d862c));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar10 = (char *)(iVar2 - 1);
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  do {
    pcVar4 = pcVar10 + 1;
    pcVar10 = pcVar10 + 1;
  } while (*pcVar4 != '\0');
  pcVar4 = ((char *)(gen_frame + 0x18));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar10 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar10 = pcVar10 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
  return uVar5;
}

