#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_009640e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009640e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9640e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00964120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar3 + 3;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964170 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00964170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_009641c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009641c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9641c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0095c260(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x110,400);
  return (uint)uVar1;
}

/* ref: FUN_009641e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009641e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9641e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0095c770(param_1,*((undefined4 *)GEN_TOP((param_1 + 4))),param_2);
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP((param_1 + 4))) = uVar1;
  **((uint * PTR32 *)GEN_TOP((uVar1 + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00964250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x964250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(100,0,400)));
  *piVar3 = param_1;
  piVar3[1] = uVar1;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    F_0042cbc0(piVar3 + 2 GEN_EDX_ARG,param_2);
    piVar3[0x17] = *((int *)GEN_TOP((param_2 + 0x54)));
    piVar3[0x18] = *((int *)GEN_TOP((param_2 + 0x58)));
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP((param_1 + 4))) = (uint)piVar3;
  puVar2 = ((uint *)GEN_TOP(piVar3[1]));
  *puVar2 = (uint)piVar3;
  return (uint)puVar2;
}

/* ref: FUN_009642f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009642f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9642f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint * puVar2;
  int * piVar3;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0x68,0,400)));
  *piVar3 = param_1;
  piVar3[1] = uVar1;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_2;
    piVar3[3] = param_2[1];
    F_0042cbc0(piVar3 + 4 GEN_EDX_ARG,param_2 + 2);
    piVar3[0x19] = param_2[0x17];
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP((param_1 + 4))) = (uint)piVar3;
  puVar2 = ((uint *)GEN_TOP(piVar3[1]));
  *puVar2 = (uint)piVar3;
  return (uint)puVar2;
}

/* ref: FUN_009643a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009643a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9643a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 4) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      puVar3 = puVar3 + 4;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009643f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009643f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9643f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 4;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00962eb0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00962eb0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00964460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0094cc20(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964490 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00964490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_009644e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009644e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9644e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00964530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00964580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_009645c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009645c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9645c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964610 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00964610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00964650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009646a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009646a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9646a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_009646e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009646e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9646e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964730 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00964730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00964770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009647c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009647c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9647c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00964800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0093fc00(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964840 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00964840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00964890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009648e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009648e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9648e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00964920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964970 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00964970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_009649b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009649b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9649b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar3 + 3;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964a00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00964a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00964a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964a90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00964a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00964ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar2 = param_2;
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 0x15;
      puVar6 = puVar2 + 0x15;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 0x15; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x964b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00962f90(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00962f90(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00964bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0093f7f0(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x964bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_009630c0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009630c0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00964c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar3 + 3;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964cd0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00964cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00964d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 4) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      puVar3 = puVar3 + 4;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x964d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 4;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00963280(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00963280(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00964de0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00964de0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x964de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x68)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00964e10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00964e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x68)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x68) * 0x68,0x2c0);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00964e70 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00964e70(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x964e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x6c)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00964ea0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00964ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x964ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x6c)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x6c) * 0x6c,0x2c0);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00964f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00964f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x964f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00963350(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00963350(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00964fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00964fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x964fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0093ff10(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00965000 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00965000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x965000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00965050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  puVar3 = ((undefined4 *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x34)));
  if (puVar3 < param_1) {
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 0x34,0,400)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar1; puVar4 = puVar4 + 0xd) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar7 = puVar4;
        puVar8 = puVar6;
        for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar6 = puVar6 + 0xd;
    }
    iVar5 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar5 != 0) {
      F_00429760(iVar5,((*((int *)GEN_TOP(((int)this + 8))) - iVar5) / 0x34) * 0x34,400);
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + ((iVar2 - iVar5) / 0x34) * 0xd;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar3 + (int)((int)(uintptr_t)param_1) * 0xd;
    *(undefined4 * PTR32 *)this = puVar3;
  }
  return (uint)puVar3;
}

/* ref: FUN_00965130 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00965130(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x965130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x58)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00965160 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00965160(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x965160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x54)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00965190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965190u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,400)));
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
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_00965300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xd;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xd,0,400);
    F_00956850(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xd) * 0xd,400);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar2 - iVar1) / 0xd) * 0xd + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0xd + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_009653c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009653c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9653c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined2 * puVar1;
  int iVar2;
  undefined2 * puVar3;
  undefined2 * puVar4;
  uint uVar5;
  undefined2 * puVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar5 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 3;
  if (uVar5 < param_1) {
    puVar3 = ((undefined2 *)GEN_TOP(F_004296a0(param_1 * 3,0,400)));
    puVar1 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined2 * PTR32 *)this; puVar4 != puVar1; puVar4 = ((undefined2 *)GEN_TOP(((int)puVar4 + 3))))
    {
      if (puVar6 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar4 + 1);
      }
      puVar6 = ((undefined2 *)GEN_TOP(((int)puVar6 + 3)));
    }
    iVar2 = *(int *)this;
    iVar7 = *((int *)GEN_TOP(((int)this + 4))) - iVar2;
    uVar5 = iVar7 * 0x55555556;
    if (iVar2 != 0) {
      uVar8 = F_00429760(iVar2,((*((int *)GEN_TOP(((int)this + 8))) - iVar2) / 3) * 3,400);
      uVar5 = (uint)uVar8;
    }
    *(undefined2 * PTR32 *)this = puVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 3 + (int)puVar3;
    *((int *)GEN_TOP(((int)this + 4))) = (int)puVar3 + (iVar7 / 3) * 3;
  }
  return uVar5;
}

/* ref: FUN_00965490 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00965490(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x965490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x60) {
    F_0042c880(((undefined *)GEN_TOP((iVar1 + 8))) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_009654c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009654c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9654c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,400);
    F_009568f0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00965560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,400);
    F_00956940(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00965600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_00956990(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0xc + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_009656c0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_009656c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9656c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = ((undefined *)GEN_TOP((param_1 + 0x18)));
    do {
      F_0042c880(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG);
      F_00560340(this GEN_EDX_ARG);
      iVar1 = (int)this + 0xbc;
      this = ((undefined *)GEN_TOP(((int)this + 0xd4)));
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00965700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x14;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x14,0,400);
    F_00957770(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x14 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0x14) * 0x14;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_009657d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009657d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9657d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x14;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x14,0,400);
    F_009577c0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x14 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0x14) * 0x14;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_009658a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009658a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9658a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0x2c0);
    F_0095d2b0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00965940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0x2c0);
    F_0095d2f0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_009659e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009659e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9659e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0x2c0);
    F_0095d330(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00965a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,0x2c0);
    F_0095d370(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00965b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,400);
    F_0095d3b0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00965bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,400);
    F_0094f6d0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18) * 0x18,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x18 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00965c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,400);
    F_0095d420(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00965d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,400);
    F_0095d460(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00965dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_0095d4a0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0xc + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00965e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965e90u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00965f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00965f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x965f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_0095d510(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0xc + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00966000 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00966000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x966000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = ((undefined *)GEN_TOP((param_1 + 0x14)));
    do {
      F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
      F_0042c880(this GEN_EDX_ARG);
      iVar1 = (int)this + 0xac;
      this = ((undefined *)GEN_TOP(((int)this + 0xc0)));
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00966040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x966040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,400);
    F_0094f850(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18) * 0x18,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x18 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00966110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x966110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  undefined * pvVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    bVar4 = F_00917440(this GEN_EDX_FWD);
    if (bVar4 != 0) {
      iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 4)));
      pvVar5 = ((undefined *)GEN_TOP(F_0042a990(iVar1 + 0x60 GEN_EDX_ARG)));
      *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xb4))) = pvVar5;
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar5;
      F_005a2710(((undefined *)GEN_TOP((iVar1 + 0x28))) GEN_EDX_ARG,6);
      *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x2c))) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      pvVar5 = ((undefined *)GEN_TOP(F_0042a990(iVar1 + 0xb8 GEN_EDX_ARG)));
      *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x10c))) = pvVar5;
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar5;
      F_005a2710(((undefined *)GEN_TOP((iVar1 + 0x38))) GEN_EDX_ARG,6);
      *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x3c))) = (*(undefined * PTR32 *)(gen_frame + 0x0));
      iVar2 = *((int *)GEN_TOP((iVar1 + 8)));
      if (*((int *)GEN_TOP(((int)this + iVar2 * 4 + 0x10))) != 0) {
        piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + iVar2 * 4 + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xfc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0xc))),iVar1 + 0x10);
      }
      F_0095d5c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),iVar1);
      return *((uint *)GEN_TOP(((int)this + iVar2 * 4 + 0x10)));
    }
  }
  return 0;
}

/* ref: FUN_009661c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009661c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x9661c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_0095d6d0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_00966350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x966350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00956ec0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_009663b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009663b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9663b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00956b70(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00966410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x966410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x40,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0xe) = 0;
  if (puVar1 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    puVar3 = param_2 + 2;
    puVar4 = puVar1 + 6;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  F_00956c50(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00966480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x966480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x28,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_2 + 2);
  }
  F_00956da0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_009664e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009664e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x9664e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_0095d890(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_00966570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x966570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_0095d900(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_00966600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x966600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_0095d970(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_00966690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x966690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_0095d9e0(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_00966720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x966720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_0095da50(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_009667b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009667b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x9667b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_0095dac0(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_00966840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x966840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_0095db30(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_009668d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009668d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x9668d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_0095dbb0(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_00966960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x966960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_0095dc30(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_009669f0 */
GEN_OWN GEN_FRAME uint F_009669f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9669f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0095dcb0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00966a20 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00966a20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x966a20u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00966a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00958180(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_009581e0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966ab0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00966ab0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x966ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar3 = param_1 - (int)param_3;
    puVar2 = param_3;
    do {
      uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 4 + (int)puVar2)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = *((undefined4 *)GEN_TOP((iVar3 + (int)puVar2)));
        puVar2[1] = uVar1;
      }
      puVar2 = puVar2 + 2;
    } while (iVar3 + (int)puVar2 != param_2);
  }
  return 0;
}

/* ref: FUN_00966af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00958290(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_009582d0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00958330(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966b80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00966b80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x966b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00966bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_009583c0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966bf0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00966bf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x966bf0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00966c20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_009584a0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00966c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x966c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0x110,0,400)));
  piVar3[1] = iVar2;
  *piVar3 = iVar1;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    F_0091dea0(piVar3 + 2 GEN_EDX_ARG,param_1);
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar4 = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return uVar4;
}

/* ref: FUN_00966cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x966cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar3 = param_1[1];
  iVar1 = *param_1;
  *(undefined4 *)this = 0;
  iVar3 = iVar3 - iVar1 >> 3;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar3 != 0) {
    puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(iVar3 * 8,0,400)));
    *(undefined4 * PTR32 *)this = puVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar4 + iVar3 * 2;
    puVar2 = ((undefined4 *)GEN_TOP(param_1[1]));
    for (puVar5 = ((undefined4 *)GEN_TOP(*param_1)); puVar5 != puVar2; puVar5 = puVar5 + 2) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
      }
      puVar4 = puVar4 + 2;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4;
  }
  return (uint)this;
}

/* ref: FUN_00966d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x24c,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_008b1c50(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_00966dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x8e4,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_008b1f40(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_00966e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x2a0,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_008b2600(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_00966ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined4 *)GEN_TOP(F_00406bd0(0x19c,0,uVar1,uVar2)));
  if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005903f0(this_00 GEN_EDX_ARG);
    *this_00 = (*(undefined * PTR32 (*)[62])REFP(0x10d7f94));
    this_00[0x60] = 0;
    this_00[0x61] = 0;
    this_00[0x62] = 0;
    this_00[99] = 0;
    this_00[100] = 0;
    *((byte *)GEN_TOP(((int)this_00 + 0xfa))) = *((byte *)GEN_TOP(((int)this_00 + 0xfa))) & 0xbf;
    *(undefined1 *)(this_00 + 0x66) = 0;
    *((undefined2 *)GEN_TOP(((int)this_00 + 0x136))) = 0x17;
    F_005a8d00(this_00 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_00,param_1);
    if (uVar1 != 0) {
      return (uint)this_00;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_00)))(this_00 GEN_EDX_ARG,1);
  }
  return 0;
}

/* ref: FUN_00966f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x1cc,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_008b66a0(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_00966fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00966fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x966fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x230,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_008b6560(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_00967030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x967030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint * puVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,400)));
  *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1 = puVar3 + 3;
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    *puVar1 = *(*(uint * PTR32 *)&gen_args[1]);
    puVar3[4] = (*(uint * PTR32 *)&gen_args[1])[1];
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = ((undefined4 *)GEN_TOP(puVar5[1]));
  cVar2 = *((char *)GEN_TOP(((int)puVar4 + 0x15)));
  (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))) = true;
  if (cVar2 == '\0') {
    do {
      puVar5 = puVar4;
      (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))) = *puVar1 < (uint)puVar5[3];
      if ((bool)(*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0))))) {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      }
      else {
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      }
    } while (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0');
  }
  puVar3 = ((undefined4 *)GEN_TOP(F_0094ed70(this GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]),(*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))),puVar5,puVar3)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar3;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_009670d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009670d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9670d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint * puVar1;
  char cVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,800)));
  *puVar4 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar4[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar4[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar4 + 5) = 0;
  uVar3 = (*(uint * PTR32 *)&gen_args[1])[1];
  puVar1 = puVar4 + 3;
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    *puVar1 = *(*(uint * PTR32 *)&gen_args[1]);
    puVar4[4] = uVar3;
  }
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar5 = ((undefined4 *)GEN_TOP(puVar6[1]));
  cVar2 = *((char *)GEN_TOP(((int)puVar5 + 0x15)));
  (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))) = true;
  if (cVar2 == '\0') {
    do {
      puVar6 = puVar5;
      (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))) = *puVar1 < (uint)puVar6[3];
      if ((bool)(*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0))))) {
        puVar5 = ((undefined4 *)GEN_TOP(*puVar6));
      }
      else {
        puVar5 = ((undefined4 *)GEN_TOP(puVar6[2]));
      }
    } while (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0');
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_0094eb30(this GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]),(*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 0)))),puVar6,puVar4)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar4;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00967170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x967170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x38d4,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_008b4500(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_009671e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009671e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9671e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  undefined4 * this_01;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x1308,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  this_01 = ((undefined4 *)GEN_TOP(F_008b4930(this_00 GEN_EDX_ARG)));
  if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
    F_005a8d00(this_01 GEN_EDX_ARG,param_2,param_3);
    uVar1 = F_0057fac0(this GEN_EDX_ARG,this_01,param_1);
    if (uVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_01)))(this_01 GEN_EDX_ARG,1);
      return 0;
    }
  }
  return (uint)this_01;
}

/* ref: FUN_00967250 */
GEN_OWN GEN_FRAME unsigned int F_00967250(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00961bb0(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00967260 */
GEN_OWN GEN_FRAME unsigned int F_00967260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00961c70(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00967270 */
GEN_OWN GEN_FRAME unsigned int F_00967270(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00961d30(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00967280 */
GEN_OWN GEN_FRAME uint F_00967280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00961da0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00967290 */
GEN_OWN GEN_FRAME uint F_00967290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00961e00(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_009672a0 */
GEN_OWN GEN_FRAME uint F_009672a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9672a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00961e60(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_009672b0 */
GEN_OWN GEN_FRAME unsigned int F_009672b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9672b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00961ec0(param_1,param_2,param_3);
  return;
}

/* ref: FUN_009672c0 */
GEN_OWN GEN_FRAME unsigned int F_009672c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9672c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00961f30(param_1,param_2,param_3);
  return;
}

/* ref: FUN_009672d0 */
GEN_OWN GEN_FRAME uint F_009672d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9672d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00961fd0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_009672e0 */
GEN_OWN GEN_FRAME uint F_009672e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9672e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00962030(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_009672f0 */
GEN_OWN GEN_FRAME uint F_009672f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9672f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00962090(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00967300 */
GEN_OWN GEN_FRAME uint F_00967300(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_009620f0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00967310 */
GEN_OWN GEN_FRAME unsigned int F_00967310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00962150(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00967320 */
GEN_OWN GEN_FRAME unsigned int F_00967320(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00962220(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00967330 */
GEN_OWN GEN_FRAME unsigned int F_00967330(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_009622c0(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00967340 */
GEN_OWN GEN_FRAME unsigned int F_00967340(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00962350(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00967350 */
GEN_OWN GEN_FRAME unsigned int F_00967350(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_009623f0(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00967360 */
GEN_OWN GEN_FRAME unsigned int F_00967360(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00962480(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00967370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967370(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 8)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP((param_1 + 0x10))) - iVar1 >> 3) * 8,400);
  }
  *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_009673d0 */
GEN_OWN GEN_FRAME unsigned int F_009673d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9673d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 * puVar1;
  
  if (1 < (param_2 - param_1) / 0xc) {
    puVar1 = ((undefined4 *)GEN_TOP((param_2 - 4)));
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar1[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar1;
      puVar1[-1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
      *puVar1 = *((undefined4 *)GEN_TOP((param_1 + 8)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
      F_00951e10(param_1,0,((-8 - param_1) + (int)puVar1) / 0xc,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_3);
      puVar1 = puVar1 - 3;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
    } while (1 < ((4 - param_1) + (int)puVar1) / 0xc);
  }
  return 0;
}

/* ref: FUN_00967480 */
GEN_OWN GEN_FRAME uint F_00967480(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = (param_2 - param_1) / 0x18;
  if (1 < (int)uVar1) {
    puVar2 = ((undefined4 *)GEN_TOP((param_2 - 0x10)));
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar2[-1];
      (*(undefined4 *)(gen_frame + 0xc)) = puVar2[1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar2;
      puVar2[-1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
      (*(undefined4 *)(gen_frame + 0x10)) = puVar2[2];
      *puVar2 = *((undefined4 *)GEN_TOP((param_1 + 8)));
      (*(undefined1 *)(gen_frame + 0x14)) = *(undefined1 *)(puVar2 + 3);
      puVar2[1] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
      puVar2[2] = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
      *(undefined1 *)(puVar2 + 3) = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
      F_00952020(param_1,0,((-8 - param_1) + (int)puVar2) / 0x18,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_3);
      puVar2 = puVar2 - 6;
      uVar1 = ((0x10 - param_1) + (int)puVar2) / 0x18;
    } while (1 < (int)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00967560 */
GEN_OWN GEN_FRAME uint F_00967560(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x967560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = param_2 - param_1 & 0xfffffff0;
  if (0x10 < (int)uVar1) {
    puVar2 = ((undefined4 *)GEN_TOP((param_2 - 8)));
    do {
      (*(undefined4 *)(gen_frame + 0x4)) = puVar2[-1];
      puVar2[-1] = *((undefined4 *)GEN_TOP((param_1 + 4)));
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar2;
      (*(undefined4 *)(gen_frame + 0xc)) = puVar2[1];
      *puVar2 = *((undefined4 *)GEN_TOP((param_1 + 8)));
      puVar2[1] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
      uVar1 = F_009521b0(param_1,0,(-8 - param_1) + (int)((int)(uintptr_t)puVar2) >> 4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_3);
      puVar2 = puVar2 - 4;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
    } while (0x10 < (int)((8 - param_1) + (int)puVar2 & 0xfffffff0U));
  }
  return uVar1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::~VariableContainer */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00967600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  F_009546c0(this + 4 GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)(this + 4),8,0x137);
  *(undefined4 *)(this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  return (uint)uVar1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf4 */
GEN_OWN GEN_NOFRAME unsigned int F_00967640(void)
{
  GEN_ENTER(0x967640u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf6 */
GEN_OWN GEN_NOFRAME byte F_00967650(void)
{
  GEN_ENTER(0x967650u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf7 */
GEN_OWN GEN_NOFRAME byte F_00967660(void)
{
  GEN_ENTER(0x967660u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf8 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00967670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x967670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf9 */
GEN_OWN GEN_NOFRAME uint F_00967680(void)
{
  GEN_ENTER(0x967680u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::vf10 */
GEN_OWN GEN_NOFRAME uint F_00967690(void)
{
  GEN_ENTER(0x967690u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Global::Advance */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009676f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9676f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 8))) = *((int *)GEN_TOP((in_ecx + 8))) + param_2;
  return in_ecx;
}

/* ref: Global::Advance_00967700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967700(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 8))) = *((int *)GEN_TOP((in_ecx + 8))) + param_2;
  return in_ecx;
}

/* ref: FUN_00967710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967710(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967710u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::GetUsedCount */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00967730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::GetCapacity */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00967740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: Global::DequeIterator */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x967790u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::DequeIteratorCopy_009677d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009677d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9677d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::GetBegin_00967800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x967800u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::DequeIterator_00967820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x967820u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::AddOffset */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x967860u, gen_a0, gen_a1, gen_a2, 0u);
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
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: Global::DequeIteratorCopy_009678a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009678a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9678a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::GetBegin_009678d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009678d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9678d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::GetAt */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009678f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9678f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar4 = ((int *)GEN_TOP(*puVar1));
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + param_1;
  if (((piVar4 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar4)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar4 = *((int * PTR32 *)GEN_TOP(*piVar4)), piVar4 == ((int *)GEN_TOP(0x0)))) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + (uVar2 - *((uint *)GEN_TOP((iVar3 + 8)))) * 4)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar2 * 4)));
}

/* ref: Global::AddOffset_00967940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x967940u, gen_a0, gen_a1, gen_a2, 0u);
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
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::IsEntryUsed */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00967980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x967980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(uint *)(this + 0x14) <= param_1) {
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)(this + 4) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(this + 4))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  uVar2 = *(int *)(this + 0x10) + param_1;
  if (((piVar3 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar3)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar3 = *((int * PTR32 *)GEN_TOP(*piVar3)), piVar3 == ((int *)GEN_TOP(0x0)))) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (*((uint *)GEN_TOP((iVar4 + 8))) <= uVar2) {
    uVar2 = uVar2 - *((uint *)GEN_TOP((iVar4 + 8)));
  }
  return *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + uVar2 * 4))) + 0x134))) == 1;
}

/* ref: Global::GetAt_009679e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009679e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9679e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar4 = ((int *)GEN_TOP(*puVar1));
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + param_1;
  if (((piVar4 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar4)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar4 = *((int * PTR32 *)GEN_TOP(*piVar4)), piVar4 == ((int *)GEN_TOP(0x0)))) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + (uVar2 - *((uint *)GEN_TOP((iVar3 + 8)))) * 4)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar2 * 4)));
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::GetEntry */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x967a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(uint *)(this + 0x14) <= param_1) {
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)(this + 4) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(this + 4))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  uVar2 = *(int *)(this + 0x10) + param_1;
  if (((piVar3 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar3)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar3 = *((int * PTR32 *)GEN_TOP(*piVar3)), piVar3 == ((int *)GEN_TOP(0x0)))) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (*((uint *)GEN_TOP((iVar4 + 8))) <= uVar2) {
    uVar2 = uVar2 - *((uint *)GEN_TOP((iVar4 + 8)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + uVar2 * 4)));
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::VariableContainer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967a90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  F_009546c0(param_1 + 1 GEN_EDX_FWD);
  F_00429760(param_1[1],8,0x137);
  param_1[1] = 0;
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00967ae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00967ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00954780(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigLogColor::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967b10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (param_1[2] != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[1])) + 0x1c))))(((int *)GEN_TOP(param_1[1])) GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,param_1[2],0);
    param_1[2] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00967b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_009555d0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00967ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00955530(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00967be0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00967be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00954ba0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00967c10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00967c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x967c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0096d3d0((int)this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00967c20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00955290(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00967c60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00967c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x967c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0096d440((int)this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00967c70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00967c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1d0))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x17c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x128))) GEN_EDX_ARG);
  uVar1 = F_008b78b0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: FUN_00967ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00955350(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x40,400);
  return (uint)uVar1;
}

/* ref: Global::DestroyTree_00967d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00955490(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x28,400);
  return (uint)uVar1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::~CharamakeAvatarSaveDataContainer */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00967d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x967d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9624))) = (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  F_009546c0(((undefined *)GEN_TOP(((int)this + 0x9628))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x9628))),8,0x137);
  *((undefined4 *)GEN_TOP(((int)this + 0x9628))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9624))) = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6418))) = (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  if (*((int *)GEN_TOP(((int)this + 0x9620))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x9620))));
    *((undefined4 *)GEN_TOP(((int)this + 0x9620))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6418))) = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x320c))) = (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  if (*((int *)GEN_TOP(((int)this + 0x6414))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x6414))));
    *((undefined4 *)GEN_TOP(((int)this + 0x6414))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x320c))) = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x3208))) != 0) {
    uVar2 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x3208))));
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x3208))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10c3e70));
  return uVar1;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967e30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_008b1df0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankOrderEdit::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967e60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_008b2030(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::AddonChatLog::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967e90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_008b2720(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00967ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967ec0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_009629c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::AddonSupportSubList::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967ef0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_008b64d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::AddonSupportSubEdit::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967f20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_008b6600(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::AddonSupportSubView::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967f50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x967f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_008b6740(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00967f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00967f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x967f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_00963610(this GEN_EDX_FWD,1);
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar2 == 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  }
  iVar2 = iVar2 - 1;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0xa8,0,400);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) = uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  this_00 = *((undefined * PTR32 *)GEN_TOP((uVar1 + iVar2 * 4)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(this_00 GEN_EDX_ARG,param_1);
    uVar1 = F_0042cbc0(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar2;
  return uVar1;
}

/* ref: FUN_00968000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x968000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(0x0));
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(*param_2));
  }
  uVar3 = 0;
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar1)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*piVar1));
  }
  uVar2 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_00963430(this GEN_EDX_FWD,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_00968080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c5e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_009680d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009680d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9680d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_009637a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00968100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00963870(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00968130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*(undefined * PTR32 *)this != pvVar3) {
    puVar2 = ((undefined4 *)GEN_TOP(F_009564e0(pvVar3,pvVar3,*(undefined * PTR32 *)this)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 4) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,0);
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
    pvVar3 = this;
  }
  return (uint)pvVar3;
}

/* ref: FUN_00968180 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00968180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x34) * 0x34,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_009681d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009681d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9681d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar2 = param_2;
  puVar3 = param_2;
  while (puVar3 = puVar3 + 0xd, puVar3 != puVar1) {
    puVar5 = puVar2 + 0xd;
    puVar6 = puVar3;
    puVar7 = puVar2;
    for (iVar4 = 0xd; puVar2 = puVar5, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 0x34;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00968260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x968260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))) & 3U) == 0) &&
     (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 4U >> 2)) {
    F_00963a60(this GEN_EDX_FWD,1);
  }
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  uVar4 = uVar3 >> 2;
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar4) {
    uVar4 = uVar4 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,400);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return uVar4;
}

/* ref: FUN_00968320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x968320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_00963be0(this GEN_EDX_FWD,1);
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
    uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(200,0,400);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  this_00 = *((undefined * PTR32 *)GEN_TOP((uVar1 + uVar2 * 4)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00916ea0(this_00 GEN_EDX_ARG,param_1);
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return uVar1;
}

/* ref: FUN_00968390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x968390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar1) {
    uVar1 = F_00963d50(this GEN_EDX_FWD,1);
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar2 == 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  }
  uVar3 = iVar2 - 1;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) == 0) {
    uVar1 = F_004296a0(0x20,0,400);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) = uVar1;
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar4 = param_1;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
    return uVar3;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  return uVar1;
}

/* ref: FUN_00968410 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00968410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xd) * 0xd,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00968460 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00968460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: FUN_009684a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009684a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9684a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 3) * 3,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_009684f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009684f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9684f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: FUN_00968520 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00968590 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00968600 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00968600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00968650 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00968650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: FUN_00968710 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00962e00(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0xbc,400);
  return (uint)uVar1;
}

/* ref: FUN_00968730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x968730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = F_0095c770(iVar1,*((undefined4 *)GEN_TOP((iVar1 + 4))),param_1);
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP((iVar1 + 4))) = uVar2;
  **((uint * PTR32 *)GEN_TOP((uVar2 + 4))) = uVar2;
  return uVar2;
}

/* ref: FUN_00968780 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0095c7e0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x6c,400);
  return (uint)uVar1;
}

/* ref: FUN_009687a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009687a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9687a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0095c830(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,100,400);
  return (uint)uVar1;
}

/* ref: FUN_009687c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009687c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9687c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00964250(this GEN_EDX_FWD,*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_009687e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009687e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9687e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0095c8d0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00968800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x968800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009642f0(this GEN_EDX_FWD,*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00968820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x968820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_009643f0(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar2 & 0xfffffff0U) + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_009643f0(this GEN_EDX_ARG,1);
    }
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x10;
  return (uint)puVar1;
}

/* ref: FUN_009688d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009688d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9688d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00968920 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (*(uint *)this != uVar1) {
    uVar1 = F_0094cc20(uVar1,uVar1,*(uint *)this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00968940 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00968940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00968990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00968a00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00968a70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00968ae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,0x2c0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00968b50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00968bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x968bc0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00968c70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00968c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00968cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (*(uint *)this != uVar1) {
    uVar1 = F_0093fc00(uVar1,uVar1,*(uint *)this,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00968cf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00968d60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00968dd0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00968dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00968e60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00968e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00968ed0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00968ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x968ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00964b20(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x54) * 0x54 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00964b20(this GEN_EDX_ARG,1);
    }
  }
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
  return;
}

/* ref: FUN_00968f40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00968f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x968f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: FUN_00968f90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00968f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x968f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00964bf0(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x18) * 0x18)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x18;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00964bf0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
      puVar3[5] = param_1[5];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x18;
  return (uint)puVar3;
}

/* ref: FUN_00969050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x969050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (*(uint *)this != uVar1) {
    uVar1 = F_0093f7f0(uVar1,uVar1,*(uint *)this,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_009690c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009690c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9690c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00969190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00964d70(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar2 & 0xfffffff0U) + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00964d70(this GEN_EDX_ARG,1);
    }
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x10;
  return (uint)puVar1;
}

/* ref: FUN_00969250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x68;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x68,0,0x2c0);
    F_00958180(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,param_1)
    ;
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x68)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x68) * 0x68,0x2c0);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x68) * 0x68 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x68 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00969350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x6c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x6c,0,0x2c0);
    F_009581e0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,param_1)
    ;
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x6c)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x6c) * 0x6c,0x2c0);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x6c) * 0x6c + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x6c + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00969440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00964f50(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00964f50(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: FUN_009694f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009694f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9694f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00969540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x969540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (*(uint *)this != uVar1) {
    uVar1 = F_0093ff10(uVar1,uVar1,*(uint *)this,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar1;
}

/* ref: QueueImplement_AddonScreenInfo_UI2_Client::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009695b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9695b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10d8474));
  F_0095c260(param_1 + 1 GEN_EDX_FWD);
  F_00429760(param_1[1],0x110,400);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00969600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x969600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar2 = param_2;
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 0xd;
      puVar6 = puVar2 + 0xd;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 0xd; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00969650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x34;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x34;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00965050(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00965050(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_009696e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009696e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9696e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x58)))) {
      F_0042ccf0(this_00 GEN_EDX_FWD,pvVar2);
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x54)));
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)));
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x58)))) {
      F_0042c880(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00969760 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00969760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x969760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_009697c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009697c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9697c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x54)))) {
      F_0042ccf0(this_00 GEN_EDX_FWD,pvVar2);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)));
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x54)))) {
      F_0042c880(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00969840 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00969840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x969840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54) * 0x54,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_009698a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009698a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9698a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_00965190(this GEN_EDX_FWD,1);
  }
  uVar4 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar4) {
    uVar4 = uVar4 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,400);
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

/* ref: FUN_00969920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xd;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xd;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00965300(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00965300(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_009699b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009699b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9699b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 3;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 3;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_009653c0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009653c0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00969a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x969a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    uVar2 = F_0093f8e0(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
    for (uVar3 = uVar2; uVar3 != uVar1; uVar3 = uVar3 + 0x60) {
      F_0042c880(((undefined *)GEN_TOP((uVar3 + 8))) GEN_EDX_ARG);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00969aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00969aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x969aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x60) {
      F_0042c880(((undefined *)GEN_TOP((iVar2 + 8))) GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x60) * 0x60,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00969b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009654c0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009654c0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00969b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00965560(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965560(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00969be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00965600(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00965600(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00969c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x969c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if (param_2 != param_3) {
    uVar3 = F_0093f9f0(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar3 != uVar2) {
      this_00 = ((undefined *)GEN_TOP((uVar3 + 0x18)));
      do {
        F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0x68))) GEN_EDX_ARG);
        F_00560340(this_00 GEN_EDX_ARG);
        uVar1 = (int)this_00 + 0xbc;
        this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0xd4)));
      } while (uVar1 != uVar2);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00969ce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00969ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x969ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0xd4) {
      F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x80))) GEN_EDX_FWD);
      F_00560340(((undefined *)GEN_TOP((iVar2 + 0x18))) GEN_EDX_ARG);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xd4) * 0xd4,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00969d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x14;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x14;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00965700(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00965700(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00969de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x14;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x14;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_009657d0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009657d0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00969e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009658a0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009658a0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00969ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00965940(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965940(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00969f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009659e0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009659e0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00969fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00969fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x969fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00965a80(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965a80(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00965b20(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965b20(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a0a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a0a0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00968bc0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00968bc0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00965bc0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00965bc0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096a1a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00965c90(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965c90(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00965d30(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965d30(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00965dd0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00965dd0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096a300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a300u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00965e90(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00965e90(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096a370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00965f40(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00965f40(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096a3f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x96a3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if (param_2 != param_3) {
    uVar3 = F_0093fd60(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar3 != uVar2) {
      this_00 = ((undefined *)GEN_TOP((uVar3 + 0x14)));
      do {
        F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG);
        F_0042c880(this_00 GEN_EDX_ARG);
        uVar1 = (int)this_00 + 0xac;
        this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0xc0)));
      } while (uVar1 != uVar2);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0096a470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0096a470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96a470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc0) {
      F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x68))) GEN_EDX_FWD);
      F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x14))) GEN_EDX_ARG);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc0) * 0xc0,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_0096a4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x96a4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_2 != param_3) {
    pvVar2 = ((undefined *)GEN_TOP(F_0093fe20(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1)));
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (this_00 = pvVar2; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x68)))) {
      F_0042c880(this_00 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = pvVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0096a550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x68;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x68;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00969250(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00969250(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096a5e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x96a5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_2 != param_3) {
    pvVar2 = ((undefined *)GEN_TOP(F_0093fe80(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1)));
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (this_00 = pvVar2; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x6c)))) {
      F_0042c880(this_00 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = pvVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0096a650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x6c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x6c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00969350(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00969350(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096a6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00966040(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00966040(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096a770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar6 = param_1;
  if (((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3))) < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 8,0,400)));
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar7 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar6; puVar5 = puVar5 + 2) {
      uVar1 = puVar5[1];
      if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar7 = *puVar5;
        puVar7[1] = uVar1;
      }
      puVar7 = puVar7 + 2;
    }
    iVar2 = *(int *)this;
    iVar3 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar2 != 0) {
      F_00429760(iVar2,(*((int *)GEN_TOP(((int)this + 8))) - iVar2 >> 3) * 8,400);
    }
    puVar6 = puVar4 + (int)((int)(uintptr_t)param_1) * 2;
    *(undefined4 * PTR32 *)this = puVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar6;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4 + (iVar3 - iVar2 >> 3) * 2;
  }
  return (uint)puVar6;
}

/* ref: FUN_0096a830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_00958290(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,param_1)
    ;
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    puVar4 = *(undefined4 * PTR32 *)this;
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      for (; puVar4 != puVar1; puVar4 = puVar4 + 3) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,0);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc) * 0xc,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0xc + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + (((int)puVar1 - iVar2) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0096a930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096a930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96a930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,400);
    F_009582d0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,param_1)
    ;
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    puVar4 = *(undefined4 * PTR32 *)this;
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      for (; puVar4 != puVar1; puVar4 = puVar4 + 6) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,0);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18) * 0x18,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x18 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + (((int)puVar1 - iVar2) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0096aa30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096aa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96aa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 4) < param_1) {
    uVar2 = F_004296a0(param_1 * 0x10,0,400);
    F_00958330(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar2,(int)this + 0xc,0,param_1)
    ;
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar4 = *(undefined4 * PTR32 *)this;
    uVar5 = (int)puVar1 - (int)puVar4;
    uVar3 = 0;
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      for (; puVar4 != puVar1; puVar4 = puVar4 + 4) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,0);
      }
      uVar6 = F_00429760(*(int *)this,*((int *)GEN_TOP(((int)this + 8))) - *(int *)this & 0xfffffff0,400);
      uVar3 = (uint)uVar6;
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (uVar5 & 0xfffffff0) + uVar2;
    *(uint *)this = uVar2;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x10 + uVar2;
  }
  return uVar3;
}

/* ref: FUN_0096aaf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096aaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96aaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,400);
    F_00966b80(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,400);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0096abe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096abe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96abe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x54,0,400);
    F_0095d100(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54) * 0x54,400);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x54) * 0x54 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x54 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0096acd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096acd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96acd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x60;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x60,0,400);
    F_0094f4f0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,param_1)
    ;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    iVar4 = *(int *)this;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x60) {
        F_0042c880(((undefined *)GEN_TOP((iVar4 + 8))) GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x60) * 0x60,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x60 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar1 - iVar2) / 0x60) * 0x60 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0096add0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096add0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96add0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xd4;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xd4,0,400);
    F_009583c0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_009656c0(iVar1,*((undefined4 *)GEN_TOP(((int)this + 4))));
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xd4) * 0xd4,400);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar2 - iVar1) / 0xd4) * 0xd4 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0xd4 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0096aeb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096aeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96aeb0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,400)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,400);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_0096af60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096af60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96af60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc0;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc0,0,400);
    F_009584a0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00966000(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc0) * 0xc0,400);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0xc0 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar1 - iVar2) / 0xc0) * 0xc0 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0096b040 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0096b040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x96b040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  int * piVar1;
  byte bVar2;
  undefined * puVar3;
  int iVar4;
  undefined1 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  if (((param_1 < 4) && (param_2 != 0)) && (param_3 != 0)) {
    bVar2 = F_00917440(this GEN_EDX_FWD);
    if (bVar2 != 0) {
      if (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x10))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xfc))))(piVar1 GEN_EDX_ARG,param_2,param_3);
      }
      return *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x10)));
    }
    F_00916680(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x0)) = param_1;
    iVar4 = 0;
    (*(int *)(gen_frame + 0x4)) = param_2;
    if (0 < param_2) {
      do {
        if (9 < iVar4) break;
        if (iVar4 == 3) {
          if (((*((byte *)GEN_TOP((param_3 + 0x18))) & 0xf) == 0) ||
             (puVar3 = *((undefined * PTR32 *)GEN_TOP((param_3 + 0x1c))), puVar3 == ((undefined *)GEN_TOP(0x0)))) {
            puVar3 = &REFG(undefined, 0x10bf2e7);
          }
          puVar5 = ((undefined1 *)(gen_frame + 0x58));
LAB_0096b0fa: ;
          F_0042e430(puVar5 GEN_EDX_ARG,puVar3);
        }
        else {
          if (iVar4 == 5) {
            if (((*((byte *)GEN_TOP((param_3 + 0x28))) & 0xf) == 0) ||
               (puVar3 = *((undefined * PTR32 *)GEN_TOP((param_3 + 0x2c))), puVar3 == ((undefined *)GEN_TOP(0x0)))) {
              puVar3 = &REFG(undefined, 0x10bf2ed);
            }
            puVar5 = ((undefined1 *)(gen_frame + 0xb0));
            goto LAB_0096b0fa;
          }
          F_00596cd0(((undefined1 *)(gen_frame + 0x8)) + iVar4 * 8 GEN_EDX_ARG,param_3 + iVar4 * 8);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_2);
    }
    F_00966c50(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
    puVar5 = ((undefined1 *)(gen_frame + 0x58));
    iVar4 = 9;
    do {
      puVar5 = puVar5 - 8;
      F_005a2670(puVar5 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  return 0;
}

/* ref: FUN_0096b1a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096b1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x96b1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_00966d50(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0096b330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096b330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x96b330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_00966dc0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0096b4c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096b4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x96b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_00966e30(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0096b650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096b650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x96b650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_00966ea0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0096b7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096b7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x96b7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_00966f50(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0096b970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096b970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x96b970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int param_6 = (int)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  int * this_00;
  byte bVar1;
  char cVar2;
  int * in_ecx;
  uint uVar3;
  undefined * this_01;
  undefined1 * puVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = ((int *)GEN_TOP(((int)this + 0x23330)));
  bVar6 = true;
  in_ecx = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_FWD,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    bVar1 = F_0055e470(in_ecx GEN_EDX_ARG);
    bVar6 = bVar1 != 0;
    if ((*((byte *)GEN_TOP(((int)in_ecx + 0x13d))) != 0) && (!bVar6)) {
      F_0057fe00(this_00 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)in_ecx + 0x13d))) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x3c))))(this_00 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (bVar6) {
    in_ecx = ((int *)GEN_TOP(F_00966fc0(this_00 GEN_EDX_ARG,param_1,param_2,param_3)));
    if (in_ecx != ((int *)GEN_TOP(0x0))) {
      this_01 = ((undefined *)GEN_TOP(F_0075eae0(this GEN_EDX_ARG,param_1)));
      if (this_01 != ((undefined *)GEN_TOP(0x0))) {
        puVar4 = ((undefined1 *)GEN_TOP(F_00cb0910(this_01 GEN_EDX_ARG,1)));
        F_00587960(in_ecx GEN_EDX_ARG,*puVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)in_ecx[0x43];
        }
        F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
      }
      local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
      bVar1 = F_00591a40(this GEN_EDX_ARG,in_ecx,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_ARG,1);
        return 0;
      }
      *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    }
  }
  else {
    *((char *)GEN_TOP(((int)in_ecx + 0x13d))) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)in_ecx[0x43];
      }
      F_0057fe00(this_00 GEN_EDX_ARG,param_6,1,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x14))))(in_ecx GEN_EDX_ARG,0);
    }
    local_10 = (uint)*((byte *)GEN_TOP(((int)in_ecx + 0x13a)));
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00 GEN_EDX_ARG,in_ecx);
  }
  return local_10;
}

/* ref: FUN_0096bb00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096bb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x96bb00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00967030(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_0096bb20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096bb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x96bb20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_009670d0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_0096bb40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096bb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x96bb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_00967170(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_0096bbd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096bbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x96bbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_0057f860(this GEN_EDX_FWD,param_1)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || ((*((byte *)GEN_TOP(((int)piVar2 + 0xfb))) & 8) == 0)) {
    piVar2 = ((int *)GEN_TOP(F_009671e0(this GEN_EDX_ARG,param_1,param_2,param_3)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      bVar1 = *((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,param_4,param_5);
      return (uint)bVar1;
    }
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,piVar2,param_2,param_3);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,0);
      return (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a)));
    }
  }
  return 0;
}

/* ref: FUN_0096bc60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096bc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96bc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  F_00966cc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = *(undefined1 *)(param_1 + 6);
  return (uint)this;
}

/* ref: FUN_0096bc90 */
GEN_OWN GEN_FRAME unsigned int F_0096bc90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96bc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 / 0x14;
    if (iVar1 < 0x21) {
LAB_0096bd65: ;
      if (1 < iVar1) {
        F_00958600(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (iVar4 - iVar2) / 0x14) {
          F_0094f9c0(iVar2,iVar4,param_4,0,0);
        }
        F_00961bb0(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096bd65;
    }
    F_0095e020(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x0)) - iVar2) / 0x14 < (iVar4 - (*(int *)(gen_frame + 0x4))) / 0x14) {
      F_0096bc90(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096bc90((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096bdd0 */
GEN_OWN GEN_FRAME unsigned int F_0096bdd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96bdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 / 0x14;
    if (iVar1 < 0x21) {
LAB_0096bea5: ;
      if (1 < iVar1) {
        F_009587d0(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (iVar4 - iVar2) / 0x14) {
          F_0094fb50(iVar2,iVar4,param_4,0,0);
        }
        F_00961c70(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096bea5;
    }
    F_0095e430(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x0)) - iVar2) / 0x14 < (iVar4 - (*(int *)(gen_frame + 0x4))) / 0x14) {
      F_0096bdd0(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096bdd0((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096bf10 */
GEN_OWN GEN_FRAME unsigned int F_0096bf10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96bf10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_0096bfa2: ;
      if (1 < iVar1) {
        F_0094fd80(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_0094fcb0(iVar2,iVar4,param_4,0,0);
        }
        F_00961d30(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096bfa2;
    }
    F_0095e840(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x4)) & 0xfffffff8U)) {
      F_0096bf10(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096bf10((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096c000 */
GEN_OWN GEN_FRAME uint F_0096c000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96c000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar1 = iVar2 / 0x6c;
    if ((int)uVar1 < 0x21) {
LAB_0096c0d5: ;
      if (1 < (int)uVar1) {
        uVar1 = F_0094ff20(iVar3,iVar5,param_4,0);
      }
      return uVar1;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar1) {
        if (1 < (iVar5 - iVar3) / 0x6c) {
          F_0094fe60(iVar3,iVar5,param_4,0,0);
        }
        uVar1 = F_00961da0(iVar3,iVar5,param_4);
        return uVar1;
      }
      goto LAB_0096c0d5;
    }
    F_0095ea60(&(*(int *)(gen_frame + 0x0)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if (((*(int *)(gen_frame + 0x0)) - iVar3) / 0x6c < (iVar5 - (*(int *)(gen_frame + 0x4))) / 0x6c) {
      F_0096c000(iVar3,(*(int *)(gen_frame + 0x0)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096c000((*(int *)(gen_frame + 0x4)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x0));
    }
    iVar2 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_0096c140 */
GEN_OWN GEN_FRAME uint F_0096c140(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96c140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar1 = iVar2 / 0x68;
    if ((int)uVar1 < 0x21) {
LAB_0096c215: ;
      if (1 < (int)uVar1) {
        uVar1 = F_00950150(iVar3,iVar5,param_4,0);
      }
      return uVar1;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar1) {
        if (1 < (iVar5 - iVar3) / 0x68) {
          F_009500a0(iVar3,iVar5,param_4,0,0);
        }
        uVar1 = F_00961e00(iVar3,iVar5,param_4);
        return uVar1;
      }
      goto LAB_0096c215;
    }
    F_0095ec20(&(*(int *)(gen_frame + 0x0)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if (((*(int *)(gen_frame + 0x0)) - iVar3) / 0x68 < (iVar5 - (*(int *)(gen_frame + 0x4))) / 0x68) {
      F_0096c140(iVar3,(*(int *)(gen_frame + 0x0)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096c140((*(int *)(gen_frame + 0x4)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x0));
    }
    iVar2 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_0096c280 */
GEN_OWN GEN_FRAME uint F_0096c280(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96c280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 2;
    if ((int)uVar2 < 0x21) {
LAB_0096c312: ;
      if (1 < (int)uVar2) {
        uVar2 = F_00950370(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (4 < (int)(iVar5 - iVar3 & 0xfffffffcU)) {
          F_009502c0(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_00961e60(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_0096c312;
    }
    F_0095ede0(&(*(int *)(gen_frame + 0x0)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar3 & 0xfffffffcU) < (int)(iVar5 - (*(int *)(gen_frame + 0x4)) & 0xfffffffcU)) {
      F_0096c280(iVar3,(*(int *)(gen_frame + 0x0)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096c280((*(int *)(gen_frame + 0x4)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_0096c370 */
GEN_OWN GEN_FRAME unsigned int F_0096c370(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96c370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_0096c402: ;
      if (1 < iVar1) {
        F_00958ef0(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_00950440(iVar2,iVar4,param_4,0,0);
        }
        F_00961ec0(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096c402;
    }
    F_0095efe0(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x4)) & 0xfffffff8U)) {
      F_0096c370(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096c370((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096c460 */
GEN_OWN GEN_FRAME unsigned int F_0096c460(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96c460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 / 0xc;
    if (iVar1 < 0x21) {
LAB_0096c532: ;
      if (1 < iVar1) {
        F_00959070(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (iVar4 - iVar2) / 0xc) {
          F_00950550(iVar2,iVar4,param_4,0,0);
        }
        F_00961f30(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096c532;
    }
    F_0095f220(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x0)) - iVar2) / 0xc < (iVar4 - (*(int *)(gen_frame + 0x4))) / 0xc) {
      F_0096c460(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096c460((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096c5a0 */
GEN_OWN GEN_FRAME uint F_0096c5a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96c5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 2;
    if ((int)uVar2 < 0x21) {
LAB_0096c632: ;
      if (1 < (int)uVar2) {
        uVar2 = F_00950800(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (4 < (int)(iVar5 - iVar3 & 0xfffffffcU)) {
          F_00950750(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_00961fd0(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_0096c632;
    }
    F_0095ff80(&(*(int *)(gen_frame + 0x0)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar3 & 0xfffffffcU) < (int)(iVar5 - (*(int *)(gen_frame + 0x4)) & 0xfffffffcU)) {
      F_0096c5a0(iVar3,(*(int *)(gen_frame + 0x0)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096c5a0((*(int *)(gen_frame + 0x4)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_0096c690 */
GEN_OWN GEN_FRAME uint F_0096c690(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96c690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 2;
    if ((int)uVar2 < 0x21) {
LAB_0096c722: ;
      if (1 < (int)uVar2) {
        uVar2 = F_00950970(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (4 < (int)(iVar5 - iVar3 & 0xfffffffcU)) {
          F_009508c0(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_00962030(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_0096c722;
    }
    F_00960130(&(*(int *)(gen_frame + 0x0)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar3 & 0xfffffffcU) < (int)(iVar5 - (*(int *)(gen_frame + 0x4)) & 0xfffffffcU)) {
      F_0096c690(iVar3,(*(int *)(gen_frame + 0x0)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096c690((*(int *)(gen_frame + 0x4)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_0096c780 */
GEN_OWN GEN_FRAME uint F_0096c780(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96c780u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 2;
    if ((int)uVar2 < 0x21) {
LAB_0096c812: ;
      if (1 < (int)uVar2) {
        uVar2 = F_00950ae0(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (4 < (int)(iVar5 - iVar3 & 0xfffffffcU)) {
          F_00950a30(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_00962090(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_0096c812;
    }
    F_009602e0(&(*(int *)(gen_frame + 0x0)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar3 & 0xfffffffcU) < (int)(iVar5 - (*(int *)(gen_frame + 0x4)) & 0xfffffffcU)) {
      F_0096c780(iVar3,(*(int *)(gen_frame + 0x0)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096c780((*(int *)(gen_frame + 0x4)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_0096c870 */
GEN_OWN GEN_FRAME uint F_0096c870(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96c870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 2;
    if ((int)uVar2 < 0x21) {
LAB_0096c902: ;
      if (1 < (int)uVar2) {
        uVar2 = F_00950c50(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (4 < (int)(iVar5 - iVar3 & 0xfffffffcU)) {
          F_00950ba0(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_009620f0(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_0096c902;
    }
    F_00960490(&(*(int *)(gen_frame + 0x0)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar3 & 0xfffffffcU) < (int)(iVar5 - (*(int *)(gen_frame + 0x4)) & 0xfffffffcU)) {
      F_0096c870(iVar3,(*(int *)(gen_frame + 0x0)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096c870((*(int *)(gen_frame + 0x4)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_0096c960 */
GEN_OWN GEN_FRAME unsigned int F_0096c960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96c960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 / 0x18;
    if (iVar1 < 0x21) {
LAB_0096ca35: ;
      if (1 < iVar1) {
        F_00950ea0(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (iVar4 - iVar2) / 0x18) {
          F_00950d60(iVar2,iVar4,param_4,0,0);
        }
        F_00962150(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096ca35;
    }
    F_00960690(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x0)) - iVar2) / 0x18 < (iVar4 - (*(int *)(gen_frame + 0x4))) / 0x18) {
      F_0096c960(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096c960((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096caa0 */
GEN_OWN GEN_FRAME unsigned int F_0096caa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96caa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 / 0xc;
    if (iVar1 < 0x21) {
LAB_0096cb72: ;
      if (1 < iVar1) {
        F_00959cc0(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (iVar4 - iVar2) / 0xc) {
          F_00951010(iVar2,iVar4,param_4,0,0);
        }
        F_00962220(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096cb72;
    }
    F_00960b40(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x0)) - iVar2) / 0xc < (iVar4 - (*(int *)(gen_frame + 0x4))) / 0xc) {
      F_0096caa0(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096caa0((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096cbe0 */
GEN_OWN GEN_FRAME unsigned int F_0096cbe0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96cbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 >> 4;
    if (iVar1 < 0x21) {
LAB_0096cc72: ;
      if (1 < iVar1) {
        F_00959e40(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (0x10 < (int)(iVar4 - iVar2 & 0xfffffff0U)) {
          F_00951170(iVar2,iVar4,param_4,0,0);
        }
        F_009622c0(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096cc72;
    }
    F_00960e20(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar2 & 0xfffffff0U) < (int)(iVar4 - (*(int *)(gen_frame + 0x4)) & 0xfffffff0U)) {
      F_0096cbe0(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096cbe0((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096ccd0 */
GEN_OWN GEN_FRAME unsigned int F_0096ccd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96ccd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 / 0xc;
    if (iVar1 < 0x21) {
LAB_0096cda2: ;
      if (1 < iVar1) {
        F_00959ff0(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (iVar4 - iVar2) / 0xc) {
          F_009512c0(iVar2,iVar4,param_4,0,0);
        }
        F_00962350(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096cda2;
    }
    F_00961170(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x0)) - iVar2) / 0xc < (iVar4 - (*(int *)(gen_frame + 0x4))) / 0xc) {
      F_0096ccd0(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096ccd0((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096ce10 */
GEN_OWN GEN_FRAME unsigned int F_0096ce10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96ce10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 >> 4;
    if (iVar1 < 0x21) {
LAB_0096cea2: ;
      if (1 < iVar1) {
        F_0095a170(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (0x10 < (int)(iVar4 - iVar2 & 0xfffffff0U)) {
          F_00951420(iVar2,iVar4,param_4,0,0);
        }
        F_009623f0(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096cea2;
    }
    F_00961450(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x0)) - iVar2 & 0xfffffff0U) < (int)(iVar4 - (*(int *)(gen_frame + 0x4)) & 0xfffffff0U)) {
      F_0096ce10(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096ce10((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096cf00 */
GEN_OWN GEN_FRAME unsigned int F_0096cf00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x96cf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 / 0x14;
    if (iVar1 < 0x21) {
LAB_0096cfd5: ;
      if (1 < iVar1) {
        F_0095a320(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (iVar4 - iVar2) / 0x14) {
          F_00951590(iVar2,iVar4,param_4,0,0);
        }
        F_00962480(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_0096cfd5;
    }
    F_009617a0(&(*(int *)(gen_frame + 0x0)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x0)) - iVar2) / 0x14 < (iVar4 - (*(int *)(gen_frame + 0x4))) / 0x14) {
      F_0096cf00(iVar2,(*(int *)(gen_frame + 0x0)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x4));
    }
    else {
      F_0096cf00((*(int *)(gen_frame + 0x4)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x0));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_0096d040 */
GEN_OWN GEN_FRAME unsigned int F_0096d040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96d040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_009673d0(param_1,param_2,param_3);
  return;
}

/* ref: FUN_0096d050 */
GEN_OWN GEN_FRAME uint F_0096d050(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96d050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00967480(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_0096d060 */
GEN_OWN GEN_FRAME uint F_0096d060(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96d060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00967560(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_0096d070 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0096d070(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x96d070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 8)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP((param_1 + 0x10))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
  return uVar2;
}

/* ref: Client::UI2::RaptureAtkHistory::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d0c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x96d0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004878c0(param_1 + 1 GEN_EDX_FWD);
  F_00429760(param_1[1],8,400);
  param_1[1] = 0;
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10904dc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0096d110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c5e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_0096d150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x96d150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_008b9b20(this GEN_EDX_FWD,0xff,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0096d170 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0096d170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x10))) != *((int *)GEN_TOP(((int)this + 0x14)))) {
    *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x20))) != *((int *)GEN_TOP(((int)this + 0x24)))) {
    *((int *)GEN_TOP(((int)this + 0x24))) = *((int *)GEN_TOP(((int)this + 0x20)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x30))) != *((int *)GEN_TOP(((int)this + 0x34)))) {
    *((int *)GEN_TOP(((int)this + 0x34))) = *((int *)GEN_TOP(((int)this + 0x30)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x40))) != *((int *)GEN_TOP(((int)this + 0x44)))) {
    *((int *)GEN_TOP(((int)this + 0x44))) = *((int *)GEN_TOP(((int)this + 0x40)));
  }
  return;
}

/* ref: FUN_0096d220 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0096d220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*(int *)this != iVar1) {
    uVar2 = F_0093fc00(iVar1,iVar1,*(int *)this,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  F_0096d170(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_0096d250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*(int *)this != iVar1) {
    uVar2 = F_0093fc00(iVar1,iVar1,*(int *)this,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  F_0096d170(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0096d2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = 99;
  puVar2 = ((uint *)GEN_TOP(((int)this + 4)));
  do {
    puVar2[1] = 0;
    uVar1 = F_004296a0(0x18,0,400);
    *puVar2 = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((uint *)GEN_TOP((*puVar2 + 4))) = *puVar2;
    *((uint *)GEN_TOP((*puVar2 + 8))) = *puVar2;
    *((undefined1 *)GEN_TOP((*puVar2 + 0x14))) = 1;
    uVar1 = *puVar2;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 - 1;
    *((undefined1 *)GEN_TOP((uVar1 + 0x15))) = 1;
  } while (-1 < iVar3);
  return (uint)this;
}

/* ref: FUN_0096d330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  int iVar2;
  ulonglong uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar2 = 99;
  pvVar1 = ((undefined *)GEN_TOP(((int)this + 0x640)));
  do {
    F_00955530(((undefined *)GEN_TOP(((int)pvVar1 - 0x10))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar1 - 0xc))),
                 *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar1 - 0xc))));
    uVar3 = F_00429760(*((undefined4 *)GEN_TOP(((int)pvVar1 - 0xc))),0x18,400);
    iVar2 = iVar2 - 1;
    pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 - 0x10)));
  } while (-1 < iVar2);
  return (uint)uVar3;
}

/* ref: FUN_0096d380 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0096d380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 0x10))) - iVar1) / 0xc) * 0xc,400);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return;
}

/* ref: Client::UI2::Agent::AgentHowTo::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d3d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x96d3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_008b7730(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0096d400 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0096d400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_004876d0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentRecipeNote::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d440(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x96d440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00967c70(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0096d470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0096d470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_004876d0(((undefined *)GEN_TOP(((int)this + 0x130))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xd0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x7c))) GEN_EDX_ARG);
  uVar3 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_0096d4d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c1c0(((undefined *)GEN_TOP(((int)this + 0x324))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x324))),8,400);
  *((undefined4 *)GEN_TOP(((int)this + 0x324))) = 0;
  F_00955350(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))));
  uVar3 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x1c))),0x40,400);
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentScreenLog::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d570(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x96d570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0096d4d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentMaterialize::vf15 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0096d5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96d5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if (((char)uVar1 != '\0') || (*(int *)(this + 0x10) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentMateriaAttach::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_0096d5d0(void)
{
  GEN_ENTER(0x96d5d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::Agent::AgentColorant::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_0096d5e0(void)
{
  GEN_ENTER(0x96d5e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0096d5f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0096d5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 0x14))) - iVar1) / 0x18) * 0x18,400);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return;
}

/* ref: Client::UI2::Agent::LobbyUIClient::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d670(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x96d670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_008b8c70(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI2::ListPanel::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d6a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x96d6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10d8464));
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    F_00429760(iVar1,param_1[3] - iVar1 & 0xfffffff0,400);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0096d700 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0096d700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8774));
  F_00962e00(((undefined *)GEN_TOP(((int)this + 0x18c))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x18c))),0xbc,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonGetAction::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d740(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x96d740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10d8774));
  F_00962e00(param_1 + 99 GEN_EDX_FWD);
  F_00429760(param_1[99],0xbc,400);
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0096d7a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0096d7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8884));
  F_0095c7e0(((undefined *)GEN_TOP(((int)this + 0x5e0))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x5e0))),0x6c,400);
  iVar2 = 9;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x5e4)));
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x70)));
    F_0058d4b0(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonScreenText::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d800(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x96d800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0096d7a0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0096d830 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0096d830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8994));
  F_0095c830(((undefined *)GEN_TOP(((int)this + 400))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 400))),100,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonWideText::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d870(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x96d870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10d8994));
  F_0095c830(param_1 + 100 GEN_EDX_FWD);
  F_00429760(param_1[100],100,400);
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0096d8d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0096d8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8aa4));
  F_0095c8d0(((undefined *)GEN_TOP(((int)this + 0x1a4))) GEN_EDX_FWD);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x1a4))),0x68,400);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x194))) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(((undefined *)GEN_TOP(((int)this + 0x198))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096d920(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x96d920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10d8aa4));
  F_0095c8d0(param_1 + 0x69 GEN_EDX_FWD);
  F_00429760(param_1[0x69],0x68,400);
  param_1[0x65] = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  F_00954060(param_1 + 0x66 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0096d9a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0096d9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,400);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_0096d9f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0096d9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96d9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x40)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x48))) - iVar1 >> 2) * 4,400);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x30)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 0x38))) - iVar1) / 0xc) * 0xc,400);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x28))) - iVar1 >> 3) * 8,400);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x18))) - iVar1 >> 3) * 8,400);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x18) * 0x18,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_0096db00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096db00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96db00u, gen_a0, gen_a1, 0u, 0u);
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
    F_005d2e00(this GEN_EDX_ARG,param_1 - uVar2);
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

/* ref: FUN_0096db90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0096db90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96db90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_0096dbd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0096dbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96dbd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00969650(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x34) * 0x34 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00969650(this GEN_EDX_ARG,1);
    }
  }
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x34;
  return;
}

/* ref: FUN_0096dc40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0096dc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96dc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: FUN_0096dca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096dca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96dca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_009696e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_0096dcd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096dcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96dcd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_009697c0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_0096dcf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096dcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96dcf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_009698a0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0096dd00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096dd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96dd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar3 = (int)(uVar1 - *(int *)this) / 0xd;
  if (param_1 < uVar3) {
    uVar4 = *(int *)this + param_1 * 0xd;
    if (uVar4 != uVar1) {
      *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
      return uVar1;
    }
  }
  else if (uVar3 < param_1) {
    F_00969920(this GEN_EDX_FWD,param_1 - uVar3);
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar2 = param_1 - ((int)puVar5 - *(int *)this) / 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      puVar5 = ((undefined4 *)GEN_TOP(((int)puVar5 + 0xd)));
    }
    uVar3 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xd;
    *((uint *)GEN_TOP(((int)this + 4))) = (param_1 - uVar3) * 0xd + *((int *)GEN_TOP(((int)this + 4)));
  }
  return uVar3;
}

/* ref: FUN_0096dde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096dde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96dde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 * puVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar3 = (int)(uVar1 - *(int *)this) / 3;
  if (param_1 < uVar3) {
    uVar3 = *(int *)this + param_1 * 3;
    if (uVar3 != uVar1) {
      *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
      return uVar1;
    }
  }
  else if (uVar3 < param_1) {
    F_009699b0(this GEN_EDX_FWD,param_1 - uVar3);
    puVar4 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar2 = param_1 - ((int)puVar4 - *(int *)this) / 3; iVar2 != 0; iVar2 = iVar2 - 1) {
      if (puVar4 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
        *(undefined1 *)(puVar4 + 1) = 0;
      }
      puVar4 = ((undefined2 *)GEN_TOP(((int)puVar4 + 3)));
    }
    uVar3 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 3;
    *((uint *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + (param_1 - uVar3) * 3;
  }
  return uVar3;
}

/* ref: FUN_0096dec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096dec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96dec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00969a30(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_0096dee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096dee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96dee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar1 = (int)(uVar3 - *(int *)this) >> 3;
  if (param_1 < uVar1) {
    uVar5 = *(int *)this + param_1 * 8;
    if (uVar5 == uVar3) {
      return uVar1;
    }
  }
  else {
    if (param_1 <= uVar1) {
      return uVar1;
    }
    F_00969b00(this GEN_EDX_FWD,param_1 - uVar1);
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar2 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 3); iVar2 != 0; iVar2 = iVar2 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar4 = puVar4 + 2;
    }
    uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
    uVar5 = uVar3 + (param_1 - ((int)(uVar3 - *(int *)this) >> 3)) * 8;
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar5;
  return uVar3;
}

/* ref: FUN_0096df70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096df70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96df70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar1 = (int)(uVar3 - *(int *)this) >> 3;
  if (param_1 < uVar1) {
    uVar5 = *(int *)this + param_1 * 8;
    if (uVar5 == uVar3) {
      return uVar1;
    }
  }
  else {
    if (param_1 <= uVar1) {
      return uVar1;
    }
    F_00969b70(this GEN_EDX_FWD,param_1 - uVar1);
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar2 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 3); iVar2 != 0; iVar2 = iVar2 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar4 = puVar4 + 2;
    }
    uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
    uVar5 = uVar3 + (param_1 - ((int)(uVar3 - *(int *)this) >> 3)) * 8;
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar5;
  return uVar3;
}

/* ref: FUN_0096e000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar4 = (int)(uVar2 - *(int *)this) / 0xc;
  if (param_1 < uVar4) {
    uVar4 = *(int *)this + param_1 * 0xc;
    if (uVar4 == uVar2) {
      return param_1 * 3;
    }
  }
  else {
    if (param_1 <= uVar4) {
      return uVar4;
    }
    F_00969be0(this GEN_EDX_FWD,param_1 - uVar4);
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar1 = param_1 - ((int)puVar3 - *(int *)this) / 0xc; iVar1 != 0; iVar1 = iVar1 - 1) {
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3 = puVar3 + 3;
    }
    uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xc;
    uVar4 = *((int *)GEN_TOP(((int)this + 4))) + (param_1 - uVar2) * 0xc;
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  return uVar2;
}

/* ref: FUN_0096e0e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96e0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00969c60(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_0096e100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00969d50(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x14) * 0x14)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x14;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00969d50(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x14;
  return (uint)puVar3;
}

/* ref: FUN_0096e1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00969de0(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x14) * 0x14)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x14;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00969de0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x14;
  return (uint)puVar3;
}

/* ref: FUN_0096e260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_005d2cb0(this GEN_EDX_FWD,1);
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
      F_005d2cb0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0096e2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00969e70(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00969e70(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00969ee0(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00969ee0(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00969f50(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00969f50(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00969fc0(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00969fc0(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e4d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_0096a030(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a030(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a0a0(this GEN_EDX_FWD,1);
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
      F_0096a0a0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0096e5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a110(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x18) * 0x18)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x18;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a110(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
      puVar3[5] = param_1[5];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x18;
  return (uint)puVar3;
}

/* ref: FUN_0096e680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_0096a1a0(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a1a0(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      puVar4 = ((undefined4 *)GEN_TOP(F_0096a210(this GEN_EDX_FWD,1)));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      iVar2 = *(int *)this;
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + iVar5 * 8)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + iVar5 * 8)));
      puVar1[1] = uVar3;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a210(this GEN_EDX_ARG,1);
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 8;
  return (uint)puVar4;
}

/* ref: FUN_0096e780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a280(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0xc) * 0xc)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xc;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a280(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xc;
  return (uint)puVar3;
}

/* ref: FUN_0096e810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a300(this GEN_EDX_FWD,1);
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
      F_0096a300(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_0096e880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a370(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0xc) * 0xc)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xc;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a370(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0xc;
  return (uint)puVar3;
}

/* ref: FUN_0096e920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096e920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96e920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_0096a3f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_0096e940 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0096e940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96e940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_0096a550(this GEN_EDX_FWD,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar4 = ((int)(param_1 - uVar2) / 0x68) * 0x68 + *(int *)this;
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,iVar4);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined4 *)GEN_TOP((iVar4 + 0x54)));
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x58))) = *((undefined4 *)GEN_TOP((iVar4 + 0x58)));
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x5c))) = *((undefined4 *)GEN_TOP((iVar4 + 0x5c)));
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x60))) = *((undefined4 *)GEN_TOP((iVar4 + 0x60)));
      *((undefined1 *)GEN_TOP(((int)pvVar3 + 100))) = *((undefined1 *)GEN_TOP((iVar4 + 100)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x68;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_0096a550(this GEN_EDX_ARG,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,param_1);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x58))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x5c))) = *((undefined4 *)GEN_TOP((param_1 + 0x5c)));
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x60))) = *((undefined4 *)GEN_TOP((param_1 + 0x60)));
      *((undefined1 *)GEN_TOP(((int)pvVar3 + 100))) = *((undefined1 *)GEN_TOP((param_1 + 100)));
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x68;
  return;
}

/* ref: FUN_0096ea00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096ea00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96ea00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*(undefined * PTR32 *)this != pvVar2) {
    pvVar1 = ((undefined *)GEN_TOP(F_0093fe20(pvVar2,pvVar2,*(undefined * PTR32 *)this,this)));
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (this_00 = pvVar1; this_00 != pvVar2; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x68)))) {
      F_0042c880(this_00 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = pvVar1;
    pvVar2 = this;
  }
  return (uint)pvVar2;
}

/* ref: FUN_0096ea50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0096ea50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96ea50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_0096a650(this GEN_EDX_FWD,1);
    }
    uVar2 = ((int)(param_1 - uVar2) / 0x6c) * 0x6c + *(int *)this;
  }
  else {
    uVar2 = param_1;
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_0096a650(this GEN_EDX_ARG,1);
    }
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(this_00 GEN_EDX_ARG,uVar2);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = *((undefined4 *)GEN_TOP((uVar2 + 0x54)));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x58))) = *((undefined4 *)GEN_TOP((uVar2 + 0x58)));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x5c))) = *((undefined4 *)GEN_TOP((uVar2 + 0x5c)));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = *((undefined4 *)GEN_TOP((uVar2 + 0x60)));
    *((undefined4 *)GEN_TOP(((int)this_00 + 100))) = *((undefined4 *)GEN_TOP((uVar2 + 100)));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x68))) = *((undefined4 *)GEN_TOP((uVar2 + 0x68)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x6c;
  return;
}

/* ref: FUN_0096eae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096eae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x96eae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*(undefined * PTR32 *)this != pvVar2) {
    pvVar1 = ((undefined *)GEN_TOP(F_0093fe80(pvVar2,pvVar2,*(undefined * PTR32 *)this,this)));
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (this_00 = pvVar1; this_00 != pvVar2; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x6c)))) {
      F_0042c880(this_00 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = pvVar1;
    pvVar2 = this;
  }
  return (uint)pvVar2;
}

/* ref: FUN_0096eb30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096eb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96eb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a6e0(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x18) * 0x18)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x18;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_0096a6e0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
      puVar3[5] = param_1[5];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x18;
  return (uint)puVar3;
}

/* ref: FUN_0096ebf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096ebf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96ebf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0096a770(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0096a770(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096ec60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096ec60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x96ec60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54;
  if ((*(uint *)&gen_args[0]) < uVar2) {
    uVar2 = F_00487650(this GEN_EDX_FWD,&(*(uint *)&gen_args[0]),(*(uint *)&gen_args[0]) * 0x54 + *(int *)this,*((int *)GEN_TOP(((int)this + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[0])) {
    F_00488ca0(this GEN_EDX_ARG,(*(uint *)&gen_args[0]) - uVar2);
    F_0095ce40(*((int *)GEN_TOP(((int)this + 4))),uVar1 - (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54,0,
                 (int)this + 0xc);
    uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54;
    *((uint *)GEN_TOP(((int)this + 4))) = (uVar1 - uVar2) * 0x54 + *((int *)GEN_TOP(((int)this + 4)));
  }
  return uVar2;
}

/* ref: FUN_0096ed10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096ed10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96ed10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096a830(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096a830(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096ed90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096ed90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96ed90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096a930(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096a930(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096ee20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096ee20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96ee20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 4;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0096aa30(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0096aa30(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096ee90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096ee90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96ee90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x58;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096aaf0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096aaf0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096ef20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096ef20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96ef20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096abe0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096abe0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096efb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096efb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96efb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x60;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x60;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096acd0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096acd0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096f040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096f040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96f040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xd4;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xd4;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096add0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096add0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096f0d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096f0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96f0d0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_0096aeb0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0096aeb0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0096f140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0096f140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x96f140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0xc0;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc0;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_0096af60(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_0096af60(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_0096f1d0 */
GEN_OWN GEN_FRAME unsigned int F_0096f1d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96f1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_0096bc90(param_1,param_2,(param_2 - param_1) / 0x14,param_3);
  return;
}

/* ref: FUN_0096f210 */
GEN_OWN GEN_FRAME unsigned int F_0096f210(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96f210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_0096bdd0(param_1,param_2,(param_2 - param_1) / 0x14,param_3);
  return;
}

/* ref: FUN_0096f250 */
GEN_OWN GEN_FRAME unsigned int F_0096f250(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96f250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_0096bf10(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}

/* ref: FUN_0096f280 */
GEN_OWN GEN_FRAME uint F_0096f280(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96f280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0096c000(param_1,param_2,(param_2 - param_1) / 0x6c,param_3);
  return uVar1;
}

/* ref: FUN_0096f2c0 */
GEN_OWN GEN_FRAME uint F_0096f2c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96f2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0096c140(param_1,param_2,(param_2 - param_1) / 0x68,param_3);
  return uVar1;
}

/* ref: FUN_0096f300 */
GEN_OWN GEN_FRAME uint F_0096f300(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96f300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0096c280(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_0096f330 */
GEN_OWN GEN_FRAME unsigned int F_0096f330(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96f330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_0096c370(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}

/* ref: FUN_0096f360 */
GEN_OWN GEN_FRAME unsigned int F_0096f360(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96f360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_0096c460(param_1,param_2,(param_2 - param_1) / 0xc,param_3);
  return;
}

/* ref: FUN_0096f3a0 */
GEN_OWN GEN_FRAME uint F_0096f3a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x96f3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0096c5a0(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

