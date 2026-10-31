#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00baf6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf6f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 8))) = *((int *)GEN_TOP((in_ecx + 8))) + param_2;
  return in_ecx;
}

/* ref: FUN_00baf700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf700(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::AdvancePointerIterator1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf710(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf790 */
GEN_OWN GEN_FRAME uint F_00baf790(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf7f0 */
GEN_OWN GEN_FRAME uint F_00baf7f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf820(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbaf820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf830(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00baf850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baf850(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf860 */
GEN_OWN GEN_FRAME uint F_00baf860(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf870 */
GEN_OWN GEN_FRAME uint F_00baf870(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf880 */
GEN_OWN GEN_FRAME uint F_00baf880(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf8b0 */
GEN_OWN GEN_FRAME uint F_00baf8b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf8e0 */
GEN_OWN GEN_FRAME uint F_00baf8e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf900 */
GEN_OWN GEN_FRAME uint F_00baf900(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf930 */
GEN_OWN GEN_FRAME uint F_00baf930(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaf930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baf980 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf980(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00baf9c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baf9c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaf9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00bafa00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bafa00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbafa00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return (uint)param_1;
}

/* ref: FUN_00bafa50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bafa50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbafa50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00bafa90 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bafa90(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbafa90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: Global::TreeIteratorDecrement_00bafad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bafad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbafad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x11))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x11))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x11))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x11))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x11)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x11))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: Global::TreeIteratorDecrement2_00bafb30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bafb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbafb30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x11))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x11))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x11))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x11))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x11)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x11))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: Global::TreeIteratorDecrement3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bafba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbafba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x21))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x21))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x21))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x21)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x21)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x21))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00bafc10 */
GEN_OWN GEN_FRAME uint F_00bafc10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafc20 */
GEN_OWN GEN_FRAME uint F_00bafc20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafc30 */
GEN_OWN GEN_FRAME uint F_00bafc30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafc40 */
GEN_OWN GEN_FRAME uint F_00bafc40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafc50 */
GEN_OWN GEN_FRAME uint F_00bafc50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafc60 */
GEN_OWN GEN_FRAME uint F_00bafc60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafc60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafc80 */
GEN_OWN GEN_FRAME byte F_00bafc80(void)
{
  GEN_ENTER(0xbafc80u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00bafc90 */
GEN_OWN GEN_FRAME uint F_00bafc90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafc90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafca0 */
GEN_OWN GEN_FRAME byte F_00bafca0(void)
{
  GEN_ENTER(0xbafca0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: Global::CopyRangeU32_00bafcd0 */
GEN_OWN GEN_FRAME uint F_00bafcd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbafcd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bafd00 */
GEN_OWN GEN_FRAME uint F_00bafd00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafd10 */
GEN_OWN GEN_FRAME uint F_00bafd10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct_00bafd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bafd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbafd20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bafd50 */
GEN_OWN GEN_FRAME uint F_00bafd50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafd50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafd60 */
GEN_OWN GEN_FRAME uint F_00bafd60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafd60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafd70 */
GEN_OWN GEN_FRAME uint F_00bafd70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafd90 */
GEN_OWN GEN_FRAME uint F_00bafd90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bafda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbafda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bafdc0 */
GEN_OWN GEN_FRAME uint F_00bafdc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafdc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafdd0 */
GEN_OWN GEN_FRAME uint F_00bafdd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafdd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafde0 */
GEN_OWN GEN_FRAME uint F_00bafde0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafdf0 */
GEN_OWN GEN_FRAME uint F_00bafdf0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafe90 */
GEN_OWN GEN_FRAME uint F_00bafe90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbafe90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bafeb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bafeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbafeb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bafed0 */
GEN_OWN GEN_FRAME uint F_00bafed0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbafed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bafee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bafee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbafee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00baff00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00baff00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbaff00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00baff20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baff20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaff20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00baff40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baff40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaff40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00baff60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baff60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaff60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00baff90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00baff90(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbaff90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00baffc0 */
GEN_OWN GEN_FRAME uint F_00baffc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaffc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baffd0 */
GEN_OWN GEN_FRAME uint F_00baffd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaffd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00baffe0 */
GEN_OWN GEN_FRAME uint F_00baffe0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbaffe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Client::Network::Socket::SocketBase::SocketBase */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb0020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb0020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0xc));
  return (uint)this;
}

/* ref: Client::Network::Socket::SocketBase::SetHandle */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Client::Network::Socket::SocketBase::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb00a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb00a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::StringContainsPointer_00bb00e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb00e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb00e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * pvVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar1)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Global::AtomicStore */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bb0130(GEN_P(LONG param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb0130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(LONG param_1 = (LONG)gen_a0;)
  LONG * in_ECX = 0;
  
  return (uint)(gen_imp_InterlockedExchange(in_ECX,param_1));
}

/* ref: FUN_00bb0150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb0150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb0150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x11046ec));
  *((undefined1 *)GEN_TOP(((int)this + 0x24))) = 0;
  return (uint)this;
}

/* ref: Client::Network::Socket::SocketWinsock::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb01a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb01a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bb01e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb01e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb01e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = _InterlockedExchange((volatile gen_long *)((((uint *)GEN_TOP((in_ecx + 0x98))))), (gen_long)(param_2));
  return uVar1;
}

/* ref: Global::Start */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb0210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb0210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __time64_t _Var1;
  ulonglong uVar2;
  
  _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 8))) = uVar2;
  uVar2 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x10))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 1;
  return (uint)uVar2;
}

/* ref: Global::GetElapsed */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb0240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb0240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
    uVar1 = F_00427d90();
    return (int)uVar1 - *((int *)GEN_TOP(((int)this + 8)));
  }
  return 0;
}

/* ref: FUN_00bb0280 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb0280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb02b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb02b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb02b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bae660(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00bb0320 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb0320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb0350 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb0350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb0380 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb0380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb03c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb03c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb03c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00baed40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00bb03d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb03d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb03d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::SharedPtrReset */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb0400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::SharedPtrRelease */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb0450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb0450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*(undefined4 *)this)));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)piVar2;
}

/* ref: Global::SharedPtrFromRaw */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb0490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::SharedPtrCopyConstruct */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb04e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb04e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::SharedPtrRelease_00bb0500 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb0500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb0500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*(undefined4 *)this)));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)piVar2;
}

/* ref: Global::SharedPtrFromRaw_00bb0540 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb0540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::SharedPtrRelease_00bb0590 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb0590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb0590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*(undefined4 *)this)));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb0600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0600(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeRotateRight_00bb0640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x11))) == '\0') {
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

/* ref: FUN_00bb06d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb06d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb06d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb06f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb06f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb06f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorEquals_00bb0700 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb0700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::TreeRotateRight_00bb0750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x21))) == '\0') {
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

/* ref: FUN_00bb07b0 */
GEN_OWN GEN_FRAME uint F_00bb07b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb07b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00bb07f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb07f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb07f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00baf1b0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::SharedPtrFromRaw_00bb0800 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb0800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::SharedPtrCopyConstruct_00bb0850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::SharedPtrCopyConstruct_00bb0870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::TreeRotateRight_00bb08c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb08c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb08c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x11))) == '\0') {
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

/* ref: Global::SharedPtrFromRaw_00bb0920 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb0920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::SharedPtrCopyConstruct_00bb0970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00bb09c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb09c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb09c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb09d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb09d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb09d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00baf300(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00bb09e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb09e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb09e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0a30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb0a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) == *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: Global::ScalarDeletingDestructor_00bb0ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0ae0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00bb0b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0b20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0b50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb0b50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::VectorGrowTo_00bb0b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00bb0ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0ba0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorAdvance_00bb0bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: Global::TreeLowerBound_00bb0c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x21))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0');
  }
  return (uint)puVar2;
}

/* ref: Global::VectorGrowTo_00bb0c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)this;
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

/* ref: FUN_00bb0c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0c90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00bb0cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0cc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0cd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0ce0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorPostIncrement_00bb0cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00baf300(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00bb0d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00baed40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00bb0d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0d30(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 8))) = *((int *)GEN_TOP((in_ecx + 8))) - param_2;
  return in_ecx;
}

/* ref: FUN_00bb0d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00bb0d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0d80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0d90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: Global::ListIteratorPostIncrement_00bb0db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb0e20 */
GEN_OWN GEN_FRAME uint F_00bb0e20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb0e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::TreeIteratorPostIncrement_00bb0e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00baf1b0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00bb0ea0 */
GEN_OWN GEN_FRAME uint F_00bb0ea0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb0ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::IteratorEquals_00bb0ed0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb0ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb0ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00bb0ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0ef0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb0f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: Global::Construct16 */
GEN_OWN GEN_FRAME uint F_00bb0f80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb0f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bb1010 */
GEN_OWN GEN_FRAME unsigned int F_00bb1010(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: Global::CopyPodRange4 */
GEN_OWN GEN_FRAME uint F_00bb1030(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: Global::Construct4 */
GEN_OWN GEN_FRAME uint F_00bb1060(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::Construct4b */
GEN_OWN GEN_FRAME uint F_00bb1080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::PairConstruct_00bb10a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb10a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb10a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::Construct4c */
GEN_OWN GEN_FRAME uint F_00bb10d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb10d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::PairConstruct2_00bb1100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::ConstructRefPtrCopy */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bb1120(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_2)) = *((int *)GEN_TOP(*param_2)) + 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

/* ref: FUN_00bb1140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb1140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bafad0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00bb1150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb1150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bafb30(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00bb1170 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb1170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bafba0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::IteratorBoolPairConstruct */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorBoolPairConstruct2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb11b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb11b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorBoolPairConstruct3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb11d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb11d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::TreeBuyNode_00bb11f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb11f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb11f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25a)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: Global::TreeIteratorDistance */
GEN_OWN GEN_FRAME unsigned int F_00bb1240(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbb1240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*((char *)GEN_TOP(((int)piVar4 + 0x11))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: Global::TreeIteratorDistance2 */
GEN_OWN GEN_FRAME unsigned int F_00bb12b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbb12b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*((char *)GEN_TOP(((int)piVar4 + 0x11))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x11)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: Global::IteratorBoolPairConstruct4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorBoolPairConstruct5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorBoolPairConstruct6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::Construct4d */
GEN_OWN GEN_FRAME uint F_00bb1380(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::Construct4e */
GEN_OWN GEN_FRAME uint F_00bb13a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb13a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::Construct1 */
GEN_OWN GEN_FRAME uint F_00bb13d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb13d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::Construct4f */
GEN_OWN GEN_FRAME uint F_00bb1400(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::Construct4g */
GEN_OWN GEN_FRAME uint F_00bb1420(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::UninitializedCopy4_00bb1440 */
GEN_OWN GEN_FRAME unsigned int F_00bb1440(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1440u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy1 */
GEN_OWN GEN_FRAME unsigned int F_00bb1470(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bb14a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb14a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LONG param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb14a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LONG param_1 = (LONG)gen_a1;)
  return (uint)(gen_imp_InterlockedExchange(((LONG *)GEN_TOP(((int)this + 0x24))),param_1));
}

/* ref: FUN_00bb14e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb14e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb14e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(*param_1))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Global::RefPtrRelease */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb1510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*(undefined4 *)this)));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)piVar2;
}

/* ref: Global::RefPtrReset */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return (uint)this;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: Global::SharedPtrCopyConstruct_00bb15e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb15e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb15e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::SharedPtrReset_00bb1600 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb1600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*(undefined4 *)this)));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)piVar2;
}

/* ref: Global::SharedPtrAssign */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::SharedPtrResetTo */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb16a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb16a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return (uint)this;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: Global::SharedPtrDestruct */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb1730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*(undefined4 *)this)));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)piVar2;
}

/* ref: Global::SharedPtrResetTo2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return (uint)this;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: Global::ListRemoveValue_00bb1800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  ulonglong uVar7;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  iVar2 = *param_1;
  puVar5 = ((undefined4 *)GEN_TOP(*puVar1));
  piVar6 = param_1;
  while (puVar5 != puVar1) {
    if (puVar5[2] == iVar2) {
      puVar3 = ((undefined4 *)GEN_TOP(puVar5[1]));
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      uVar7 = F_00429760(puVar5,0xc,0x25a);
      piVar6 = ((int *)GEN_TOP((uint)uVar7));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
      puVar5 = puVar4;
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
    }
  }
  return (uint)piVar6;
}

/* ref: Global::ContainerBegin */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::ContainerEnd */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::ContainerBegin2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb18a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb18a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::ContainerEnd2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb18c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb18c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00bb1910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1910(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb1920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::IteratorNotEqual_00bb1940 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb1940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::ContainerBegin3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::SharedPtrConstruct */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb19a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb19a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return (uint)this;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return (uint)this;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: Global::SharedPtrCopyConstruct2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb19f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb19f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::CheckedIteratorNotEqual */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb1a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: Global::IteratorConstruct_00bb1af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1af0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorConstruct2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1b30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeRotateLeft_00bb1b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x11))) == '\0') {
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

/* ref: FUN_00bb1c50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb1c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Global::IteratorConstruct3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1c70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::VectorIteratorAt_00bb1c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: Global::TreeRotateLeft2_00bb1d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x21))) == '\0') {
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

/* ref: FUN_00bb1e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1e10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb1e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1e20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::IteratorConstruct4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1e30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeRotateLeft3_00bb1e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x11))) == '\0') {
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

/* ref: Global::SharedArrayReset */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb1ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      piVar1 = ((int *)GEN_TOP(0x0));
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        piVar1 = ((int *)GEN_TOP(F_00406ad0(*((int *)GEN_TOP(((int)this + 4))))));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)piVar1;
}

/* ref: Global::IteratorConstruct5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1f50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorConstruct6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1f60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorConstruct7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1f70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::CheckedIteratorConstruct */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: Global::PointerIteratorAdd */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1fc0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb1fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: Global::CheckedIteratorCopy */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb1ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb1ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Global::ListIncrementSize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::ListAllocNode */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb2090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: Global::ListIncrementSize2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::ListAllocNode2 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb2140(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: Global::TreeEqualRange_00bb2180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x11))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x11))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x11))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x11))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: Global::ListIncrementSize_00bb2280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::ListIncrementSize_00bb22b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb22b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb22b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::ListIncrementSize_00bb2320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::ListBuyNode */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb2350(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: Global::TreeBegin_00bb2390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00bb23f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb23f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb23f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::TreeEqualRange_00bb2410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x11))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x11))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x11))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x11))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: Global::ListIncrementSize_00bb24e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb24e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb24e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::IteratorNotEqual_00bb2510 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb2510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb2530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2530(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeEraseSubtree_00bb2540 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb2540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x11)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00bb2540(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x14,0x25a);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
  }
  return;
}

/* ref: Global::TreeEraseSubtree_00bb2580 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb2580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x11)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00bb2580(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x14,0x25c);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
  }
  return;
}

/* ref: FUN_00bb25c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb25c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb25c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_00bb2600 */
GEN_OWN GEN_FRAME unsigned int F_00bb2600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00bb1240(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00bb2620 */
GEN_OWN GEN_FRAME unsigned int F_00bb2620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00bb12b0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: Global::ConstructSharedRef */
GEN_OWN GEN_FRAME unsigned int F_00bb2640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_3)) = *((int *)GEN_TOP(*param_3)) + 1;
    *param_2 = *param_3;
    param_2[1] = param_3[1];
  }
  return;
}

/* ref: Global::ConstructSharedRef_00bb2660 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bb2660(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_2)) = *((int *)GEN_TOP(*param_2)) + 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

/* ref: Global::ConstructSharedRef_00bb2680 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bb2680(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_2)) = *((int *)GEN_TOP(*param_2)) + 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

/* ref: Global::ReleaseSharedRef */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb26a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb26a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 8))))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return (uint)piVar2;
}

/* ref: Global::TreeInsertAt_00bb26e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb26e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbb26e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x14,0x25a);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x10)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x10))) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x11))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x11))) == '\0') {
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
LAB_00bb28dd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x10))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x11))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x11))) == '\0') {
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
        goto LAB_00bb28dd;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x10)));
  } while( true );
}

/* ref: FUN_00bb2910 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb2910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb2910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bafba0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::TreeInsertAt_00bb2920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2920(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbb2920u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x14,0x25c);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x10)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x10))) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x11))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x11))) == '\0') {
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
LAB_00bb2b1d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x10))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x11))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x10))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x11))) == '\0') {
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
        goto LAB_00bb2b1d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x10)));
  } while( true );
}

/* ref: Global::PairIterBool_00bb2b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::PairIterBool_00bb2b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::PairIterBool_00bb2b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::TreeBuyNode_00bb2bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25c)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: Global::ConstructKeySharedPair */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((int *)GEN_TOP(*param_2)) = *((int *)GEN_TOP(*param_2)) + 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[1];
  return (uint)this;
}

/* ref: Global::UninitializedFillZero_00bb2c30 */
GEN_OWN GEN_FRAME unsigned int F_00bb2c30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: Global::UninitializedFillZero_00bb2c60 */
GEN_OWN GEN_FRAME unsigned int F_00bb2c60(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: Global::UninitializedCopy_00bb2c80 */
GEN_OWN GEN_FRAME unsigned int F_00bb2c80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2c80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedFillZero_00bb2cb0 */
GEN_OWN GEN_FRAME unsigned int F_00bb2cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: Global::UninitializedCopy_00bb2ce0 */
GEN_OWN GEN_FRAME unsigned int F_00bb2ce0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2ce0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedCopy_00bb2d10 */
GEN_OWN GEN_FRAME unsigned int F_00bb2d10(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb2d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: Global::CopyKeySharedPair */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((int *)GEN_TOP(param_1[2])) = *((int *)GEN_TOP(param_1[2])) + 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  return (uint)this;
}

/* ref: Global::ReleaseSharedRef_00bb2d80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb2d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb2d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 8))))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb2dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(*param_1))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00bb2e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2e20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00bb2e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2e30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: Global::TreeBegin_00bb2e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2e40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00bb2e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00bb2ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2ed0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb2ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: Global::TreeEraseNode_00bb2ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb2ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2ee0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x11))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00baed40(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x11))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[4];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 4))) = (char)piVar3[4];
      *(char *)(piVar3 + 4) = (char)iVar1;
      goto LAB_00bb2ffa;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00bae7b0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
      uVar5 = F_00bae790(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00bb2ffa: ;
  if ((char)piVar3[4] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[4] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00bb1b90(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x10))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x10))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x10))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x10))) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_00bb0640(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x10))) = 1;
              F_00bb1b90(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00bb30b8: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00bb0640(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x10))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x10))) == '\x01'))
            goto LAB_00bb30b8;
            if (*((char *)GEN_TOP((*piVar6 + 0x10))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x10))) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_00bb1b90(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x10))) = 1;
            F_00bb0640(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0x25a);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::DequeBeginIterator */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: Global::DequeEndIterator */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb31a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb31a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00bb3220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3220(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00bb3230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3230(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb3270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3270(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00bb3280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3280(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb32c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb32c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb32c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00bb32d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb32d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb32d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb32e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb32e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb32e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeEraseNode2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb32f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb32f0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x11))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00baf300(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x11))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[4];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 4))) = (char)piVar3[4];
      *(char *)(piVar3 + 4) = (char)iVar1;
      goto LAB_00bb340a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00baeb90(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
      uVar5 = F_00baeb70(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00bb340a: ;
  if ((char)piVar3[4] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[4] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00bb1e40(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x10))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x10))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x10))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x10))) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_00bb08c0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x10))) = 1;
              F_00bb1e40(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00bb34c8: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00bb08c0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x10))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x10))) == '\x01'))
            goto LAB_00bb34c8;
            if (*((char *)GEN_TOP((*piVar6 + 0x10))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x10))) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_00bb1e40(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x10))) = 1;
            F_00bb08c0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0x25c);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::ReleaseSharedRef_00bb3550 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb3550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      piVar1 = ((int *)GEN_TOP(0x0));
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        piVar1 = ((int *)GEN_TOP(F_00406ad0(*((int *)GEN_TOP(((int)this + 4))))));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)piVar1;
}

/* ref: Global::AssignSharedRef */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        F_00406ad0(*((int *)GEN_TOP(((int)this + 4))));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::ResetSharedRef */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb35f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb35f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        F_00406ad0(*((int *)GEN_TOP(((int)this + 4))));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return (uint)this;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: Global::ListInsertNode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb36b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb36b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00bb3760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3760(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb3770 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb3770(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::ListInsertNode2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb3780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00bb3870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb3870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00bb2180(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: Global::DequeTidy_00bb3890 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb3890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
      if (iVar2 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0x10,0x25a);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x25a);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: Global::VectorEraseRange4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbb3910u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Global::VectorTidy4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb3970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x25a);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bb39b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb39b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb39b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bb39c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb39c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb39c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::ListInsertNode3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb39d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb39d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00bb3ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb3ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00bb0c00(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: Global::VectorEraseRangeBytes */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbb3ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4))) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::VectorTidyBytes */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb3b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x25c);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bb3bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb3bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00bb2410(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00bb3bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3bd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00bb3be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3be0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb3bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Global::DequeBeginIterator2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: Global::TreeClear_00bb3c40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb3c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
  while (cVar1 == '\0') {
    F_00bb2540(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x14,0x25a);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x11)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: Global::ListBuyNodeSharedRef */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb3ca0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb3ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_3)) = *((int *)GEN_TOP(*param_3)) + 1;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return (uint)puVar1;
}

/* ref: Global::TreeClear2_00bb3ce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb3ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
  while (cVar1 == '\0') {
    F_00bb2580(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x14,0x25c);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x11)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00bb3d40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb3d40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::PairWithSharedRef */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb3d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((int *)GEN_TOP(*param_2)) = *((int *)GEN_TOP(*param_2)) + 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[1];
  return (uint)this;
}

/* ref: Global::ConstructSharedRefCopy */
GEN_OWN GEN_FRAME unsigned int F_00bb3d80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb3d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_3)) = *((int *)GEN_TOP(*param_3)) + 1;
    *param_2 = *param_3;
    param_2[1] = param_3[1];
  }
  return;
}

/* ref: Global::ConstructSharedRefCopy2 */
GEN_OWN GEN_FRAME unsigned int F_00bb3da0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb3da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_3)) = *((int *)GEN_TOP(*param_3)) + 1;
    *param_2 = *param_3;
    param_2[1] = param_3[1];
  }
  return;
}

/* ref: Global::TreeInsertUniqueU32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb3dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x11))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00bb26e0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00bafb30(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00bb26e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x14,0x25a);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeInsertUniqueU32B */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb3ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x11))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x11))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00bb2920(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00bafad0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00bb2920(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x14,0x25c);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::ScalarDeletingDestructor_00bb3f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb3f80(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb3f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP((param_1 + 8))));
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0xc)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Global::ReleaseSharedRef_00bb3fe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb3fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 8))));
      piVar1 = ((int *)GEN_TOP(0x0));
      if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
        piVar1 = ((int *)GEN_TOP(F_00406ad0(*((int *)GEN_TOP(((int)this + 0xc))))));
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return (uint)piVar1;
}

/* ref: Global::FillZeroU32 */
GEN_OWN GEN_FRAME unsigned int F_00bb4020(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::FillZeroBytes */
GEN_OWN GEN_FRAME unsigned int F_00bb4050(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::CopyConstructRangeU32_00bb4070 */
GEN_OWN GEN_FRAME unsigned int F_00bb4070(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb4070u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::FillZeroU32B */
GEN_OWN GEN_FRAME unsigned int F_00bb40a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb40a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::CopyConstructRangeU32B */
GEN_OWN GEN_FRAME unsigned int F_00bb40d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb40d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::CopyConstructRangeBytes */
GEN_OWN GEN_FRAME unsigned int F_00bb4100(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb4100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: Global::CopySharedRefHolder */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((int *)GEN_TOP(param_1[2])) = *((int *)GEN_TOP(param_1[2])) + 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  return (uint)this;
}

/* ref: Global::ReleaseSharedRefVirtual */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb4160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 8))))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return (uint)piVar2;
}

/* ref: Global::ScalarDeletingDestructor_00bb41a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb41a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb41a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ba85e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::DestroyList */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb41d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb41d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,0x25a);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25a);
  return (uint)uVar3;
}

/* ref: Global::ListPushBack_00bb4220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: Global::DestroyList2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb4280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,0x25a);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25a);
  return (uint)uVar3;
}

/* ref: Global::ListPushBack2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb42d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb42d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: Global::ListErase_00bb4330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb4330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00429760(param_2,0xc,0x25a);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb4380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb4380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00bb3890(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Global::FreeVectorStorageU32 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb43b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb43b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x25a);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::DestroyList3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb43f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb43f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,0x25a);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25a);
  return (uint)uVar3;
}

/* ref: Global::ListPushBack3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: Global::ListErase2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb44a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb44a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00429760(param_2,0xc,0x25a);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Global::TreeFindU64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb44f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb44f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00bb0c00(this GEN_EDX_FWD,param_2);
  if (uVar1 != *((uint *)GEN_TOP(((int)this + 4)))) {
    if ((*((uint *)GEN_TOP((uVar1 + 0x14))) <= param_2[1]) &&
       ((param_2[1] != *((uint *)GEN_TOP((uVar1 + 0x14))) || (*((uint *)GEN_TOP((uVar1 + 0x10))) <= *param_2)))) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *((uint *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: Global::FreeVectorStorageBytes */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb4550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x25c);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Global::ClearVector_00bb4590 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb4590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar1 = *(uint *)this;
  if (uVar1 != uVar2) {
    uVar2 = F_00c46e20(uVar1,uVar2,0);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar2;
}

/* ref: Global::TreeEraseRange_00bb4600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbb4600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00bb3c40(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x11)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x11)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00bb2ee0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::TreeClear_00bb46a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb46a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb46a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00bb4600(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: Global::ListInsertSharedRef */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb46c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb46c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_2)) = *((int *)GEN_TOP(*param_2)) + 1;
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::TreeEraseRange2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbb4740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00bb3ce0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x11))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x11)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x11)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00bb32f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::TreeClear2_00bb47e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb47e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb47e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00bb4740(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                          *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00bb4800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb4800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: Global::AllocListNodeSharedRef */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb4840(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb4840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_3)) = *((int *)GEN_TOP(*param_3)) + 1;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return (uint)puVar1;
}

/* ref: Global::AllocListNodeSharedRef2 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb4880(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb4880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_3)) = *((int *)GEN_TOP(*param_3)) + 1;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return (uint)puVar1;
}

/* ref: Global::SetInsertU32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb48c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb48c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25c)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
  }
  F_00bb3ea0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: Global::SetInsertU32B */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb4920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,0x25a)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
  }
  F_00bb3dc0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: Global::FillZeroU32C */
GEN_OWN GEN_FRAME unsigned int F_00bb4980(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::FillZeroBytesB */
GEN_OWN GEN_FRAME unsigned int F_00bb49b0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb49b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::UninitializedCopyU32_00bb49d0 */
GEN_OWN GEN_FRAME unsigned int F_00bb49d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb49d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::UninitializedFillZeroU32_00bb4a00 */
GEN_OWN GEN_FRAME unsigned int F_00bb4a00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bb4a30 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bb4a30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb4a30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bb4a60 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bb4a60(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb4a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00bb4a90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb4a90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb4a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP((param_1 + 8))))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0xc)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb4ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4ae0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP((param_1 + 8))));
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0xc)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00bb4b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4b40(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP((param_1 + 8))));
      if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
        F_00406ad0(*((int *)GEN_TOP((param_1 + 0xc))));
      }
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00bb4ba0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bb4ba0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *((int *)GEN_TOP(param_2[2])) = *((int *)GEN_TOP(param_2[2])) + 1;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

/* ref: FUN_00bb4bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbb4bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_00a15ee0(this GEN_EDX_ARG,uVar3 + param_2,0xffffffff);
    F_00a15ee0(this GEN_EDX_ARG,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar3) {
    F_00a16590(this GEN_EDX_ARG,uVar3,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = ((undefined4 *)GEN_TOP(*param_1));
  }
  pvVar1 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar1,(int)puVar2 + param_2,uVar3);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar3;
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < 0x10) {
    *((undefined1 *)GEN_TOP(((int)this + uVar3))) = 0;
    return (uint)this;
  }
  *((undefined1 *)GEN_TOP((*(int *)this + uVar3))) = 0;
  return (uint)this;
}

/* ref: FUN_00bb4cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb4cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = REFG(undefined4 * PTR32, 0x14c5960);
  for (puVar3 = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x14c5960))); puVar3 != REFG(undefined4 * PTR32, 0x14c5960); puVar3 = ((undefined4 *)GEN_TOP(*puVar3)))
  {
  }
  uVar1 = REFG(undefined4 * PTR32, 0x14c5960)[1];
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,0x25a)));
  puVar3[1] = uVar1;
  *puVar3 = puVar2;
  if (puVar3 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3[2] = param_1;
  }
  if (*(int *)&REFG(undefined, 0x14c5964) != -2) {
    *(int *)&REFG(undefined, 0x14c5964) = *(int *)&REFG(undefined, 0x14c5964) + 1;
    puVar2[1] = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(puVar3[1])) = puVar3;
    *(undefined4 *)this = param_1;
    return (uint)this;
  }
                    
  F_00c4579a(((char *)REFP(0x108b258)));
}

/* ref: Global::VectorTidy_00bb4dd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb4dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x25a);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00bb4e10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bb4e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (int)((uint)*((ushort *)GEN_TOP((param_1 + 2))) << 0x10) >> 0x1f | *((uint *)GEN_TOP((param_1 + 4)));
  uVar5 = CONCAT22(*((ushort *)GEN_TOP((param_1 + 2))),*((undefined2 *)GEN_TOP((param_1 + 0x10))));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x34)));
  (*(uint *)(gen_frame + 0x0)) = uVar5;
  (*(uint *)(gen_frame + 0x4)) = uVar4;
  uVar3 = F_00bb0c00(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x34)));
  if (uVar3 != uVar2) {
    if ((*((uint *)GEN_TOP((uVar3 + 0x14))) <= uVar4) &&
       ((uVar4 != *((uint *)GEN_TOP((uVar3 + 0x14))) || (*((uint *)GEN_TOP((uVar3 + 0x10))) <= uVar5)))) {
      return uVar3 != uVar1;
    }
  }
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  return uVar2 != uVar1;
}

/* ref: FUN_00bb4f20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb4f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00bb3890(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::PingClient::PingClientRequest::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4f50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb4f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[6])REFP(0x1104740));
  if (*(HANDLE *)(param_1 + 0x20) != (HANDLE)0x0) {
    gen_imp_IcmpCloseHandle(*(HANDLE *)(param_1 + 0x20));
  }
  if (*(undefined * PTR32 *)(param_1 + 0x18) != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*(undefined * PTR32 *)(param_1 + 0x18));
  }
  if (0xf < *(uint *)(param_1 + 0x5c)) {
    F_00406ad0(*(undefined4 *)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x5c) = 0xf;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x48] = (undefined1)0x0;
  F_004cf880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::TreeDestroy_00bb4ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb4ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00bb4600(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x14,0x25a);
  return (uint)uVar1;
}

/* ref: Global::TreeEraseKey_00bb5030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00bb2180(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_00bb1240((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00bb4600(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: Global::ListPushBackSharedPtr */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb50e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb50e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: Global::TreeDestroy2_00bb5150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb5150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00bb4740(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: Global::TreeEraseKey2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00bb2410(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_00bb12b0((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00bb4740(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: Global::DequeGrowMap_00bb51f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb51f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb51f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a(((char *)REFP(0x1090ac0)));
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0xc)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,0x25a)));
  iVar5 = *((int *)GEN_TOP(((int)this + 8)));
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  puVar8 = puVar3 + uVar7;
  for (puVar4 = ((undefined4 *)GEN_TOP((iVar2 + uVar7 * 4))); puVar4 != ((undefined4 *)GEN_TOP((iVar2 + iVar5 * 4)));
      puVar4 = puVar4 + 1) {
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *((int *)GEN_TOP(((int)this + 4)));
    puVar8 = puVar3;
    for (puVar4 = ((undefined4 *)GEN_TOP((iVar5 + param_1 * 4))); uVar6 = param_1,
        puVar4 != ((undefined4 *)GEN_TOP((iVar5 + uVar7 * 4))); puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x25a);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: Global::ListInsertSharedPtr */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb5360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_2)) = *((int *)GEN_TOP(*param_2)) + 1;
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::ListInsertSharedPtr2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb53e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb53e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_2)) = *((int *)GEN_TOP(*param_2)) + 1;
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::VectorReserveU32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x25a)));
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,0x25a);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Global::VectorReserveBytes */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this))) < param_1) {
    puVar3 = ((undefined1 *)GEN_TOP(F_004296a0(param_1,0,0x25c)));
    puVar5 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x25c);
    }
    puVar5 = puVar3 + (int)param_1;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: Global::ReleaseNodeSharedPtr */
GEN_OWN GEN_FRAME uint F_00bb55a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb55a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_2 + 8)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_2 + 0xc))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP((param_2 + 8))))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_2 + 0xc)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *((undefined4 *)GEN_TOP((param_2 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb55f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb55f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb55f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP((param_1 + 8))))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0xc)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb5640 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb5640(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb5640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP((param_1 + 8))));
      piVar1 = ((int *)GEN_TOP(0x0));
      if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
        piVar1 = ((int *)GEN_TOP(F_00406ad0(*((int *)GEN_TOP((param_1 + 0xc))))));
      }
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb5690 */
GEN_OWN GEN_FRAME unsigned int F_00bb5690(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbb5690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *((int *)GEN_TOP(param_3[2])) = *((int *)GEN_TOP(param_3[2])) + 1;
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return;
}

/* ref: FUN_00bb56c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb56c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb56c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_00bb4bd0(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_00bb4bd0(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < param_2) {
    F_00a16590(this GEN_EDX_ARG,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_2;
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < 0x10) {
    *((undefined1 *)GEN_TOP(((int)this + param_2))) = 0;
    return (uint)this;
  }
  *((undefined1 *)GEN_TOP((*(int *)this + param_2))) = 0;
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerBase::ClearQueue */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb57c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb57c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2c));
  iVar3 = *(int *)(this + 0x24);
  while (iVar3 != 0) {
    if (*(int * PTR32 *)(this + 0x14) == ((int *)GEN_TOP(0x0))) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int * PTR32 *)(this + 0x14);
    }
    uVar2 = *(uint *)(this + 0x20) >> 2;
    if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP((iVar3 + 8)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar2 * 4))) + (*(uint *)(this + 0x20) & 3) * 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    if (*(int *)(this + 0x24) != 0) {
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
      if ((uint)(*(int *)(this + 0x1c) * 4) <= *(uint *)(this + 0x20)) {
        *(undefined4 *)(this + 0x20) = 0;
      }
      iVar3 = *(int *)(this + 0x24) - 1;
      *(int *)(this + 0x24) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x20) = 0;
      }
    }
    iVar3 = *(int *)(this + 0x24);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2c)));
}

/* ref: Client::Network::Socket::PollerBase::PeerSocket::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5870(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1104784));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Network::Socket::PollerImpl::CreatePeerSocket */
GEN_OWN GEN_NOFRAME uint F_00bb58e0(void)
{
  GEN_ENTER(0xbb58e0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(0xc,0,0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1104794));
    return (uint)puVar1;
  }
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::PeerSocket::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5920(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1104784));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Network::Socket::PollerImpl::PeerSocket::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1104784));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::TreeDestroy3_00bb5980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb5980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00bb4740(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: Global::TreeDestroy4_00bb59c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb59c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb59c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00bb4600(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x14,0x25a);
  return (uint)uVar1;
}

/* ref: Global::DequePushBack_00bb5a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_00bb51f0(this GEN_EDX_FWD,1);
  }
  uVar4 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar4) {
    uVar4 = uVar4 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x25a);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) = uVar2;
  }
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar1 = ((undefined4 *)GEN_TOP(puVar3[uVar4]));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar3 = param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return (uint)puVar3;
}

/* ref: Global::ListPushBackSharedPtr2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: Global::ListEraseSharedPtr */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb5b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    piVar2 = ((int *)GEN_TOP(param_2[2]));
    if ((piVar2 != ((int *)GEN_TOP(0x0))) && (param_2[3] != 0)) {
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        F_00406ad0(param_2[2]);
        puVar3 = ((undefined4 *)GEN_TOP(param_2[3]));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
        }
      }
      param_2[2] = 0;
      param_2[3] = 0;
    }
    F_00429760(param_2,0x10,0x25a);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Global::ListPushBackSharedPtr3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0x10,0,0x25a)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: Global::VectorGrowU32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bb5460(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bb5460(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::VectorGrowBytes */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bb5510(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bb5510(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::ListClearSharedPtr */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb5d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb5d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  piVar1 = *(int * PTR32 *)this;
  piVar5 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  uVar4 = *(uint *)this;
  *((uint *)GEN_TOP((uVar4 + 4))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar5 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(piVar5[2]));
      piVar2 = ((int *)GEN_TOP(*piVar5));
      if ((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar5[3] != 0)) {
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          F_00406ad0(piVar5[2]);
          puVar3 = ((undefined4 *)GEN_TOP(piVar5[3]));
          if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
          }
        }
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      uVar6 = F_00429760(piVar5,0x10,0x25a);
      uVar4 = (uint)uVar6;
      piVar5 = piVar2;
    } while (piVar2 != ((int *)GEN_TOP(*(int *)this)));
  }
  return uVar4;
}

/* ref: Global::ReleaseNodeSharedPtr2 */
GEN_OWN GEN_FRAME uint F_00bb5da0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_2 + 8)));
  if ((piVar2 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_2 + 0xc))) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP((param_2 + 8))))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_2 + 0xc)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *((undefined4 *)GEN_TOP((param_2 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = 0;
  }
  return (uint)piVar2;
}

/* ref: Global::ReleaseNodeSharedPtrPlain */
GEN_OWN GEN_FRAME uint F_00bb5df0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb5df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_2 + 8)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_2 + 0xc))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP((param_2 + 8))));
      piVar1 = ((int *)GEN_TOP(0x0));
      if (*((int *)GEN_TOP((param_2 + 0xc))) != 0) {
        piVar1 = ((int *)GEN_TOP(F_00406ad0(*((int *)GEN_TOP((param_2 + 0xc))))));
      }
    }
    *((undefined4 *)GEN_TOP((param_2 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = 0;
  }
  return (uint)piVar1;
}

/* ref: Global::TreeInsertNode_00bb5e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb5e40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbb5e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    piVar5 = ((int *)GEN_TOP(param_5[6]));
    if ((piVar5 != ((int *)GEN_TOP(0x0))) && (param_5[7] != 0)) {
      *piVar5 = *piVar5 - 1;
      if (*piVar5 == 0) {
        F_00406ad0(param_5[6]);
        puVar2 = ((undefined4 *)GEN_TOP(param_5[7]));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
      }
      param_5[6] = 0;
      param_5[7] = 0;
    }
    F_00429760(param_5,0x28,0x25c);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x20)));
  piVar5 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar3 + 0x20))) = 1;
      return (uint)param_2;
    }
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    piVar7 = ((int *)GEN_TOP(piVar6[1]));
    if (piVar6 == ((int *)GEN_TOP(*piVar7))) {
      iVar3 = piVar7[2];
      if (*((char *)GEN_TOP((iVar3 + 0x20))) == '\0') {
        *(undefined1 *)(piVar6 + 8) = 1;
        *((undefined1 *)GEN_TOP((iVar3 + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar5[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar5[1] + 4)));
      }
      else {
        if (piVar5 == ((int *)GEN_TOP(piVar6[2]))) {
          piVar5 = ((int *)GEN_TOP(piVar6[2]));
          piVar6[2] = *piVar5;
          if (*((char *)GEN_TOP((*piVar5 + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar5 + 4))) = piVar6;
          }
          piVar5[1] = piVar6[1];
          if (piVar6 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar5;
          }
          else {
            piVar7 = ((int *)GEN_TOP(piVar6[1]));
            if (piVar6 == ((int *)GEN_TOP(*piVar7))) {
              *piVar7 = (int)piVar5;
            }
            else {
              piVar7[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar6;
          piVar6[1] = (int)piVar5;
          piVar5 = piVar6;
        }
        *((undefined1 *)GEN_TOP((piVar5[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar5[1] + 4))) + 0x20))) = 0;
        piVar6 = *((int * PTR32 *)GEN_TOP((piVar5[1] + 4)));
        piVar7 = ((int *)GEN_TOP(*piVar6));
        *piVar6 = piVar7[2];
        if (*((char *)GEN_TOP((piVar7[2] + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar7[2] + 4))) = piVar6;
        }
        piVar7[1] = piVar6[1];
        if (piVar6 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar7;
          piVar7[2] = (int)piVar6;
        }
        else {
          piVar4 = ((int *)GEN_TOP(piVar6[1]));
          if (piVar6 == ((int *)GEN_TOP(piVar4[2]))) {
            piVar4[2] = (int)piVar7;
            piVar7[2] = (int)piVar6;
          }
          else {
            *piVar4 = (int)piVar7;
            piVar7[2] = (int)piVar6;
          }
        }
LAB_00bb606d: ;
        piVar6[1] = (int)piVar7;
      }
    }
    else {
      iVar3 = *piVar7;
      if (*((char *)GEN_TOP((iVar3 + 0x20))) != '\0') {
        if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
          iVar3 = *piVar6;
          *piVar6 = *((int *)GEN_TOP((iVar3 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 8))) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 8))) + 4))) = piVar6;
          }
          *((int *)GEN_TOP((iVar3 + 4))) = piVar6[1];
          if (piVar6 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar3;
          }
          else {
            piVar5 = ((int *)GEN_TOP(piVar6[1]));
            if (piVar6 == ((int *)GEN_TOP(piVar5[2]))) {
              piVar5[2] = iVar3;
            }
            else {
              *piVar5 = iVar3;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar3 + 8))) = piVar6;
          piVar6[1] = iVar3;
          piVar5 = piVar6;
        }
        *((undefined1 *)GEN_TOP((piVar5[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar5[1] + 4))) + 0x20))) = 0;
        piVar6 = *((int * PTR32 *)GEN_TOP((piVar5[1] + 4)));
        piVar7 = ((int *)GEN_TOP(piVar6[2]));
        piVar6[2] = *piVar7;
        if (*((char *)GEN_TOP((*piVar7 + 0x21))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar7 + 4))) = piVar6;
        }
        piVar7[1] = piVar6[1];
        if (piVar6 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar7;
        }
        else {
          piVar4 = ((int *)GEN_TOP(piVar6[1]));
          if (piVar6 == ((int *)GEN_TOP(*piVar4))) {
            *piVar4 = (int)piVar7;
          }
          else {
            piVar4[2] = (int)piVar7;
          }
        }
        *piVar7 = (int)piVar6;
        goto LAB_00bb606d;
      }
      *(undefined1 *)(piVar6 + 8) = 1;
      *((undefined1 *)GEN_TOP((iVar3 + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar5[1] + 4))) + 0x20))) = 0;
      piVar5 = *((int * PTR32 *)GEN_TOP((piVar5[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x20)));
  } while( true );
}

/* ref: Global::TreeBuyNode_00bb60a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb60a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb60a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x25c)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    *((int *)GEN_TOP(param_1[2])) = *((int *)GEN_TOP(param_1[2])) + 1;
    puVar1[6] = param_1[2];
    puVar1[7] = param_1[3];
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb6100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb6100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00bb56c0(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00bb6170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00bb4600(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x14,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb61b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb61b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb61b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00bb56c0(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: Global::VectorResizeU32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb61e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb61e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *((int *)GEN_TOP(((int)this + 4))) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00bb5c60(this GEN_EDX_ARG,param_1 - uVar2);
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: Global::TreeEraseNode_00bb6270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb6270u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00baf1b0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x21))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_00bb6392;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00baea40(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      uVar5 = F_00baea20(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00bb6392: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00bb1d90(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x20))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x20))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00bb0750(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              F_00bb1d90(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00bb645c: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00bb0750(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01'))
            goto LAB_00bb645c;
            if (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00bb1d90(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
            F_00bb0750(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = ((int *)GEN_TOP(piVar3[6]));
  if ((piVar6 != ((int *)GEN_TOP(0x0))) && (piVar3[7] != 0)) {
    *piVar6 = *piVar6 - 1;
    if (*piVar6 == 0) {
      F_00406ad0(piVar3[6]);
      puVar2 = ((undefined4 *)GEN_TOP(piVar3[7]));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    piVar3[6] = 0;
    piVar3[7] = 0;
  }
  F_00429760(piVar3,0x28,0x25c);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::ByteVectorResize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb6510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 * puVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  uVar2 = *(uint *)this;
  if (param_1 < iVar3 - uVar2) {
    iVar1 = uVar2 + param_1;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    }
  }
  else if (iVar3 - uVar2 < param_1) {
    F_00bb5cd0(this GEN_EDX_ARG,(uVar2 - iVar3) + param_1);
    puVar4 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar3 = (*(int *)this - (int)puVar4) + param_1; iVar3 != 0; iVar3 = iVar3 - 1) {
      if (puVar4 != ((undefined1 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    *((uint *)GEN_TOP(((int)this + 4))) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar2;
}

/* ref: Global::ListErase_00bb6590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb6590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    piVar2 = ((int *)GEN_TOP(param_2[2]));
    if ((piVar2 != ((int *)GEN_TOP(0x0))) && (param_2[3] != 0)) {
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        F_00406ad0(param_2[2]);
        if (param_2[3] != 0) {
          F_00406ad0(param_2[3]);
        }
      }
      param_2[2] = 0;
      param_2[3] = 0;
    }
    F_00429760(param_2,0x10,0x25a);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
    *param_1 = iVar1;
    return (uint)param_1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Global::ListClear */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb6620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)this;
  piVar4 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  uVar3 = *(uint *)this;
  *((uint *)GEN_TOP((uVar3 + 4))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(piVar4[2]));
      piVar2 = ((int *)GEN_TOP(*piVar4));
      if ((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar4[3] != 0)) {
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          F_00406ad0(piVar4[2]);
          if (piVar4[3] != 0) {
            F_00406ad0(piVar4[3]);
          }
        }
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      uVar5 = F_00429760(piVar4,0x10,0x25a);
      uVar3 = (uint)uVar5;
      piVar4 = piVar2;
    } while (piVar2 != ((int *)GEN_TOP(*(int *)this)));
  }
  return uVar3;
}

/* ref: Global::TreeEraseSubtree_00bb66a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bb66a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb66a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x21)));
  piVar5 = param_1;
  while (cVar1 == '\0') {
    F_00bb66a0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar5[2])));
    piVar2 = ((int *)GEN_TOP(piVar5[6]));
    piVar3 = ((int *)GEN_TOP(*piVar5));
    if ((piVar2 != ((int *)GEN_TOP(0x0))) && (piVar5[7] != 0)) {
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        F_00406ad0(piVar5[6]);
        puVar4 = ((undefined4 *)GEN_TOP(piVar5[7]));
        if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
        }
      }
      piVar5[6] = 0;
      piVar5[7] = 0;
    }
    F_00429760(piVar5,0x28,0x25c);
    piVar5 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x21)));
  }
  return;
}

/* ref: Global::TreeInsertNode_00bb6720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb6720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  bool local_8;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x21)));
  local_8 = true;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar2 = local_8;
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[2]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
          puVar5 = ((undefined4 *)GEN_TOP(F_00bb5e40(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar3,(*(int *)&gen_args[1]))));
          *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_00bafba0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      }
      puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[4] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        puVar5 = ((undefined4 *)GEN_TOP(F_00bb5e40(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar2,puVar3,(*(int *)&gen_args[1]))));
        *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
      F_00bb5da0((int)this + 0xd,((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))));
      F_00429760((*(int *)&gen_args[1]),0x28,0x25c);
      *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      if (((uint)puVar5[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) ||
         (((uint)puVar5[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) &&
          ((uint)puVar5[4] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        local_8 = false;
        goto LAB_00bb6793;
      }
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      local_8 = true;
    }
    else {
      if ((*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) < (uint)puVar5[5]) ||
         ((*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) <= (uint)puVar5[5] &&
          (*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) <= (uint)puVar5[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      local_8 = !bVar2;
      if (local_8) {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      }
      else {
LAB_00bb6793: ;
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      }
    }
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x21)));
    puVar3 = puVar5;
    puVar5 = puVar4;
    bVar2 = local_8;
  } while( true );
}

/* ref: Client::Network::Socket::PollerImpl::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6850(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb6850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[9])REFP(0x110475c));
  F_00ba8d10(param_1 GEN_EDX_FWD);
  F_00bb4280(param_1 + 0x354 GEN_EDX_ARG);
  F_00c0fdb0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::ListDestroy */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb6890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00bb5d30(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: Global::ListPopFront */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb68b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb68b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00bb6590(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**(undefined4 * PTR32 *)this);
  return uVar1;
}

/* ref: Global::TreeClear_00bb68e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb68e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb68e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00bb66a0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: Global::TreeInsertValue_00bb6910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbb6910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,0x25c)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    *((int *)GEN_TOP(param_2[2])) = *((int *)GEN_TOP(param_2[2])) + 1;
    puVar1[6] = param_2[2];
    puVar1[7] = param_2[3];
  }
  F_00bb6720(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: Global::ListDestroy2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb69b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb69b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00bb5d30(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::SocketImpl::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb69d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb69d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ba9d20(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::ListDestroy3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb6a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00bb6620(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: Global::TreeEraseRange_00bb6a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbb6a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_00bb66a0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x21))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x21)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x21)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x21)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00bb6270(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::ListDestroy4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb6b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00bb6620(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: Global::TreeEraseAll_00bb6b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00bb6a20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: Global::TreeDestroy_00bb6b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00bb6a20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: Global::TreeDestroy2_00bb6b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00bb6a20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: Global::ScalarDeletingDestructor_00bb6c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6c10(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb6c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00baadb0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::SharedPtrRelease_00bb6c40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb6c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = ((int *)GEN_TOP(F_00406ad0(*(undefined4 *)this)));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        piVar1 = ((int *)GEN_TOP(F_00406ad0(this_00)));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)piVar1;
}

/* ref: Global::SharedPtrRelease2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb6c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = ((int *)GEN_TOP(F_00406ad0(*(undefined4 *)this)));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        piVar1 = ((int *)GEN_TOP(F_00406ad0(this_00)));
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)piVar1;
}

/* ref: Global::SharedPtrAssign_00bb6ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb6ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::SharedPtrReset_00bb6d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb6d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  undefined * this_00;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return (uint)this;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(4,0,0)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: Global::ReleaseSharedPtrAt8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb6dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 8))))));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        piVar1 = ((int *)GEN_TOP(F_00406ad0(this_00)));
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return (uint)piVar1;
}

/* ref: Global::ScalarDeletingDestructor_00bb6e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6e20(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb6e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined * this;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*((undefined4 *)GEN_TOP((param_1 + 8))));
      this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0xc)));
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00baadb0(this GEN_EDX_ARG);
        F_00406ad0(this);
      }
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Client::Network::Socket::RUDPSocket::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6e80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb6e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bab900(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::DestroyListNodeValue */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bb6eb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbb6eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined * this;
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_1 + 0xc))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP((param_1 + 8))))));
      this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0xc)));
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00baadb0(this GEN_EDX_ARG);
        piVar1 = ((int *)GEN_TOP(F_00406ad0(this)));
      }
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  }
  return (uint)piVar1;
}

/* ref: Global::AllocatorDestroyNodeValue */
GEN_OWN GEN_FRAME uint F_00bb6f00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbb6f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_2 + 8)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_2 + 0xc))) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = ((int *)GEN_TOP(F_00406ad0(*((undefined4 *)GEN_TOP((param_2 + 8))))));
      this = *((undefined * PTR32 *)GEN_TOP((param_2 + 0xc)));
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00baadb0(this GEN_EDX_ARG);
        piVar1 = ((int *)GEN_TOP(F_00406ad0(this)));
      }
    }
    *((undefined4 *)GEN_TOP((param_2 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = 0;
  }
  return (uint)piVar1;
}

/* ref: Global::ListRemove */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb6f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbb6f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined * this_00;
  undefined4 * puVar6;
  undefined * this_01;
  
  *((int *)GEN_TOP(*param_1)) = *((int *)GEN_TOP(*param_1)) + 1;
  puVar1 = *(undefined4 * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*param_1));
  this_01 = ((undefined *)GEN_TOP(param_1[1]));
  puVar6 = ((undefined4 *)GEN_TOP(*puVar1));
  while (puVar6 != puVar1) {
    if (((undefined *)GEN_TOP(puVar6[3])) == this_01) {
      puVar3 = ((undefined4 *)GEN_TOP(puVar6[1]));
      puVar4 = ((undefined4 *)GEN_TOP(*puVar6));
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      piVar5 = ((int *)GEN_TOP(puVar6[2]));
      if ((piVar5 != ((int *)GEN_TOP(0x0))) && (puVar6[3] != 0)) {
        *piVar5 = *piVar5 - 1;
        if (*piVar5 == 0) {
          F_00406ad0(puVar6[2]);
          this_00 = ((undefined *)GEN_TOP(puVar6[3]));
          if (this_00 != ((undefined *)GEN_TOP(0x0))) {
            F_00baadb0(this_00 GEN_EDX_ARG);
            F_00406ad0(this_00);
          }
        }
        puVar6[2] = 0;
        puVar6[3] = 0;
      }
      F_00429760(puVar6,0x10,0x25a);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
      puVar6 = puVar4;
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
    }
  }
  if (((piVar2 != ((int *)GEN_TOP(0x0))) && (this_01 != ((undefined *)GEN_TOP(0x0)))) && (*piVar2 = *piVar2 - 1, *piVar2 == 0)
     ) {
    F_00406ad0(piVar2);
    F_00baadb0(this_01 GEN_EDX_ARG);
    this_01 = ((undefined *)GEN_TOP(F_00406ad0(this_01)));
  }
  return (uint)this_01;
}

/* ref: Global::ListClearShared */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bb7020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb7020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)this;
  piVar4 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  uVar3 = *(uint *)this;
  *((uint *)GEN_TOP((uVar3 + 4))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(piVar4[2]));
      piVar2 = ((int *)GEN_TOP(*piVar4));
      if ((piVar1 != ((int *)GEN_TOP(0x0))) && (piVar4[3] != 0)) {
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          F_00406ad0(piVar4[2]);
          this_00 = ((undefined *)GEN_TOP(piVar4[3]));
          if (this_00 != ((undefined *)GEN_TOP(0x0))) {
            F_00baadb0(this_00 GEN_EDX_ARG);
            F_00406ad0(this_00);
          }
        }
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      uVar5 = F_00429760(piVar4,0x10,0x25a);
      uVar3 = (uint)uVar5;
      piVar4 = piVar2;
    } while (piVar2 != ((int *)GEN_TOP(*(int *)this)));
  }
  return uVar3;
}

/* ref: Global::ListDestroyShared */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bb70b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb70b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00bb7020(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

