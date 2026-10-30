#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a8d5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8d5a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8d5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8d5c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a8d5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8d5d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8d5f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8d5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8d5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00910a90(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8d670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a8d670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a8d6a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a8d6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00a8d6c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a8d6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a8d6e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a8d6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00a8d700 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a8d700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_00a8d7e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a8d7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00a8d7e0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,0x191);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00a8d840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8d840(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a8d850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8d850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8d860 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a8d860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x11c,0,800);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x11c + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00a8d8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8d8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0xe1))) == '\0') {
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

/* ref: FUN_00a8d9a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8d9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8d9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a8d9c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8d9c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8d9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8d9d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8d9d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a8d9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8d9e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8d9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8da30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8da30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8da30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a8da50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8da50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8da50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a8da60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8da60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8da60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8dab0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8dab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8dab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a8db10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8db10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8db10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = 1;
  do {
    uVar1 = uVar1 - 1;
    *((int *)GEN_TOP(((int)this + uVar1 * 8 + 8))) = param_1;
    *((int *)GEN_TOP(((int)this + uVar1 * 8 + 0xc))) = param_2;
  } while (-1 < (int)uVar1);
  if (param_1 != 0 || param_2 != 0) {
    uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
    *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) & 0xfff;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a8dbe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8dbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8dbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a8dc00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8dc00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8dc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a8dc10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8dc10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8dc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8dc20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8dc20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8dc20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8dc30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8dc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8dc30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a8dc70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8dc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8dc70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a8dcb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8dcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8dcb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a8dcf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8dcf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8dcf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8dd00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8dd00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8dd00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8dd10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8dd10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8dd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8dd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8dd20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8dd20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8ddd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ddd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8ddd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8ddf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ddf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8ddf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8de40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a8de40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8de40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a8dee0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a8dee0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8dee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a8df00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a8df00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8df00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a8df50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8df50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8df50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8df70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8df70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8df70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x29))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x29))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x29))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x29))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x29))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x29))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8e060 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a8e060(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8e060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a8e070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e070(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8e070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * -0x34;
  return (uint)in_ecx;
}

/* ref: FUN_00a8e090 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_00a8e090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8e090u, gen_a0, gen_a1, 0u, 0u);
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
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00a8e0e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00a884e0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e100 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a8e100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8e100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a8e120 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a8e120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8e120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a8e140 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00a8e140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8e140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00a8e160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e160(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8e170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e170u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a8e1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e1b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a8e1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8e1c0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00a88580(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00a8e2da;
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
      piVar4 = ((int *)GEN_TOP(F_00a883a0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00a88380(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00a8e2da: ;
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
            F_00a8be50(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00a8beb0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00a8be50(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00a8e398: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00a8beb0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00a8e398;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00a8be50(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00a8beb0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0x191);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a8e420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00a88580(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_009283d0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8e460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8e4c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00928100(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00928170(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00a88660(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00a886d0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00a8e540 */
GEN_OWN GEN_FRAME uint F_00a8e540(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00a8e560 */
GEN_OWN GEN_FRAME uint F_00a8e560(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00a8e580 */
GEN_OWN GEN_FRAME unsigned int F_00a8e580(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a88bf0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e5a0 */
GEN_OWN GEN_FRAME unsigned int F_00a8e5a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a88bf0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e5c0 */
GEN_OWN GEN_FRAME uint F_00a8e5c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e5c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8c870(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a8e5e0 */
GEN_OWN GEN_FRAME unsigned int F_00a8e5e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e5e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a88c70(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e600 */
GEN_OWN GEN_FRAME unsigned int F_00a8e600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a88c70(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e620 */
GEN_OWN GEN_FRAME unsigned int F_00a8e620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a88d10(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e640 */
GEN_OWN GEN_FRAME unsigned int F_00a8e640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a88d10(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e660 */
GEN_OWN GEN_FRAME uint F_00a8e660(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
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

/* ref: FUN_00a8e6a0 */
GEN_OWN GEN_FRAME uint F_00a8e6a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8c970(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a8e6c0 */
GEN_OWN GEN_FRAME uint F_00a8e6c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8ca30(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a8e6e0 */
GEN_OWN GEN_FRAME unsigned int F_00a8e6e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00a8e710 */
GEN_OWN GEN_FRAME unsigned int F_00a8e710(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a88d10(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a8e740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8e740u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8e770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8e770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8e790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8e790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  *((undefined2 *)GEN_TOP(((int)this + 0xa8))) = *((undefined2 *)GEN_TOP((param_1 + 0xa8)));
  *((undefined2 *)GEN_TOP(((int)this + 0xaa))) = *((undefined2 *)GEN_TOP((param_1 + 0xaa)));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = *((undefined4 *)GEN_TOP((param_1 + 0xac)));
  iVar3 = param_1 + 0xb4;
  iVar1 = 0xb4 - iVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP((param_1 + 0xb0)));
  param_1 = 0x17;
  do {
    F_00a88d90(((undefined *)GEN_TOP(((int)this + iVar3 + iVar1))) GEN_EDX_ARG,iVar3);
    iVar3 = iVar3 + 0x18c;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x25d4))) = *((undefined4 *)GEN_TOP((iVar2 + 0x25d4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25d8))) = *((undefined4 *)GEN_TOP((iVar2 + 0x25d8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25dc))) = *((undefined4 *)GEN_TOP((iVar2 + 0x25dc)));
  *((undefined2 *)GEN_TOP(((int)this + 0x25e0))) = *((undefined2 *)GEN_TOP((iVar2 + 0x25e0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25e4))) = *((undefined4 *)GEN_TOP((iVar2 + 0x25e4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25e8))) = *((undefined4 *)GEN_TOP((iVar2 + 0x25e8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25ec))) = *((undefined4 *)GEN_TOP((iVar2 + 0x25ec)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25f0))) = *((undefined4 *)GEN_TOP((iVar2 + 0x25f0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25f4))) = *((undefined4 *)GEN_TOP((iVar2 + 0x25f4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25f8))) = *((undefined4 *)GEN_TOP((iVar2 + 0x25f8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25fc))) = *((undefined4 *)GEN_TOP((iVar2 + 0x25fc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2600))) = *((undefined4 *)GEN_TOP((iVar2 + 0x2600)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2604))) = *((undefined4 *)GEN_TOP((iVar2 + 0x2604)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2608))) = *((undefined4 *)GEN_TOP((iVar2 + 0x2608)));
  *((undefined4 *)GEN_TOP(((int)this + 0x260c))) = *((undefined4 *)GEN_TOP((iVar2 + 0x260c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2610))) = *((undefined4 *)GEN_TOP((iVar2 + 0x2610)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2614))) = *((undefined4 *)GEN_TOP((iVar2 + 0x2614)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2618))) = *((undefined4 *)GEN_TOP((iVar2 + 0x2618)));
  *((undefined4 *)GEN_TOP(((int)this + 0x261c))) = *((undefined4 *)GEN_TOP((iVar2 + 0x261c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2620))) = *((undefined4 *)GEN_TOP((iVar2 + 0x2620)));
  return (uint)this;
}

/* ref: FUN_00a8e920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8e920(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa8e920u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x18,0x191);
                    
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
LAB_00a8eb1d: ;
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
        goto LAB_00a8eb1d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00a8eb50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8eb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8eb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a88e60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8eb60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8eb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8eb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a88f00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8eb70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8eb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8eb70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8eb90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8eb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8eb90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ebb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8ebb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8ebb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a89120(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8ebc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ebc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ebc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ebe0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8ebe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8ebe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a89180(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8ebf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8ebf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8ebf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a891e0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8ec00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ec00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ec00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ec20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ec20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ec20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ec40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ec40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ec40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ec60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8ec60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8ec60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00a89070(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8ec70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ec70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ec70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ec90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ec90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ec90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8ecb0 */
GEN_OWN GEN_FRAME unsigned int F_00a8ecb0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa8ecb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      if (*((char *)GEN_TOP(((int)piVar4 + 0x29))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x29))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x29)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x29)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x29)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x29)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00a8ed40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ed40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8ed40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  *((undefined2 *)GEN_TOP(((int)this + 0xa8))) = *((undefined2 *)GEN_TOP((param_1 + 0xa8)));
  *((undefined2 *)GEN_TOP(((int)this + 0xaa))) = *((undefined2 *)GEN_TOP((param_1 + 0xaa)));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = *((undefined4 *)GEN_TOP((param_1 + 0xac)));
  F_00a8cc10(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG,param_1 + 0xb0);
  *((undefined4 *)GEN_TOP(((int)this + 0x25d4))) = *((undefined4 *)GEN_TOP((param_1 + 0x25d4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25d8))) = *((undefined4 *)GEN_TOP((param_1 + 0x25d8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25dc))) = *((undefined4 *)GEN_TOP((param_1 + 0x25dc)));
  *((undefined2 *)GEN_TOP(((int)this + 0x25e0))) = *((undefined2 *)GEN_TOP((param_1 + 0x25e0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25e4))) = *((undefined4 *)GEN_TOP((param_1 + 0x25e4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25e8))) = *((undefined4 *)GEN_TOP((param_1 + 0x25e8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25ec))) = *((undefined4 *)GEN_TOP((param_1 + 0x25ec)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25f0))) = *((undefined4 *)GEN_TOP((param_1 + 0x25f0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25f4))) = *((undefined4 *)GEN_TOP((param_1 + 0x25f4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25f8))) = *((undefined4 *)GEN_TOP((param_1 + 0x25f8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x25fc))) = *((undefined4 *)GEN_TOP((param_1 + 0x25fc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2600))) = *((undefined4 *)GEN_TOP((param_1 + 0x2600)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2604))) = *((undefined4 *)GEN_TOP((param_1 + 0x2604)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2608))) = *((undefined4 *)GEN_TOP((param_1 + 0x2608)));
  *((undefined4 *)GEN_TOP(((int)this + 0x260c))) = *((undefined4 *)GEN_TOP((param_1 + 0x260c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2610))) = *((undefined4 *)GEN_TOP((param_1 + 0x2610)));
  *((undefined1 *)GEN_TOP(((int)this + 0x2614))) = *((undefined1 *)GEN_TOP((param_1 + 0x2614)));
  *((undefined1 *)GEN_TOP(((int)this + 0x2615))) = *((undefined1 *)GEN_TOP((param_1 + 0x2615)));
  *((undefined1 *)GEN_TOP(((int)this + 0x2616))) = *((undefined1 *)GEN_TOP((param_1 + 0x2616)));
  *((undefined1 *)GEN_TOP(((int)this + 0x2617))) = *((undefined1 *)GEN_TOP((param_1 + 0x2617)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2618))) = *((undefined4 *)GEN_TOP((param_1 + 0x2618)));
  *((undefined4 *)GEN_TOP(((int)this + 0x261c))) = *((undefined4 *)GEN_TOP((param_1 + 0x261c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2620))) = *((undefined4 *)GEN_TOP((param_1 + 0x2620)));
  return (uint)this;
}

/* ref: FUN_00a8eec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8eec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8eec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0x11c + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00a8eee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8eee0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8eee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3 * -0x11c;
  return (uint)param_2;
}

/* ref: FUN_00a8ef00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ef00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ef00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0x11c + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00a8ef20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ef20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ef20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3 * -0x11c;
  return (uint)param_2;
}

/* ref: FUN_00a8ef40 */
GEN_OWN GEN_FRAME unsigned int F_00a8ef40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ef40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 5) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
    }
    puVar1 = puVar1 + 5;
  }
  return 0;
}

/* ref: FUN_00a8ef80 */
GEN_OWN GEN_FRAME unsigned int F_00a8ef80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ef80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00a8efc0 */
GEN_OWN GEN_FRAME uint F_00a8efc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8efc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0xbc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0x60))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a8eff0 */
GEN_OWN GEN_FRAME unsigned int F_00a8eff0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8eff0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a8f020 */
GEN_OWN GEN_FRAME unsigned int F_00a8f020(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f020u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8f050 */
GEN_OWN GEN_FRAME unsigned int F_00a8f050(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f050u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a8f080 */
GEN_OWN GEN_FRAME unsigned int F_00a8f080(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f080u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8f0b0 */
GEN_OWN GEN_FRAME unsigned int F_00a8f0b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f0b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a8f0e0 */
GEN_OWN GEN_FRAME unsigned int F_00a8f0e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f0e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8f120 */
GEN_OWN GEN_FRAME unsigned int F_00a8f120(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f120u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a8f150 */
GEN_OWN GEN_FRAME unsigned int F_00a8f150(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f150u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8f180 */
GEN_OWN GEN_FRAME uint F_00a8f180(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a8f190 */
GEN_OWN GEN_FRAME uint F_00a8f190(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00a88c70(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x11c;
    this = ((undefined *)GEN_TOP(((int)this + 0x11c)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a8f1d0 */
GEN_OWN GEN_FRAME uint F_00a8f1d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP((param_2 + 0x58))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 4))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a8f1f0 */
GEN_OWN GEN_FRAME uint F_00a8f1f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00a8d060(param_2);
  return uVar1;
}

/* ref: FUN_00a8f210 */
GEN_OWN GEN_FRAME unsigned int F_00a8f210(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0xd) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0xd;
  }
  return 0;
}

/* ref: FUN_00a8f250 */
GEN_OWN GEN_FRAME uint F_00a8f250(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa8f250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00a88c70(this GEN_EDX_ARG,param_1);
    }
    param_1 = param_1 + 0x11c;
    this = ((undefined *)GEN_TOP(((int)this + 0x11c)));
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a8f290 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a8f290(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a8f2b0 */
GEN_OWN GEN_FRAME uint F_00a8f2b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = *param_1 + param_2 * 0x11c;
  return (uint)param_1;
}

/* ref: FUN_00a8f2d0 */
GEN_OWN GEN_FRAME uint F_00a8f2d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *param_1 = *param_1 + param_2 * 0x11c;
  return (uint)param_1;
}

/* ref: FUN_00a8f2f0 */
GEN_OWN GEN_FRAME unsigned int F_00a8f2f0(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f2f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00a8f320 */
GEN_OWN GEN_FRAME unsigned int F_00a8f320(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f320u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a8f350 */
GEN_OWN GEN_FRAME unsigned int F_00a8f350(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f350u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a8f380 */
GEN_OWN GEN_FRAME uint F_00a8f380(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa8f380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *param_1;
      F_0042cbc0(puVar2 + 1 GEN_EDX_ARG,param_1 + 1);
      F_0042cbc0(puVar2 + 0x16 GEN_EDX_ARG,param_1 + 0x16);
      puVar2[0x2b] = param_1[0x2b];
      puVar2[0x2c] = param_1[0x2c];
      puVar2[0x2d] = param_1[0x2d];
      puVar3 = param_1 + 0x2e;
      puVar4 = puVar2 + 0x2e;
      for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar2[0x46] = param_1[0x46];
    }
    param_1 = param_1 + 0x47;
    puVar2 = puVar2 + 0x47;
  } while (param_1 != param_2);
  return (uint)puVar2;
}

/* ref: FUN_00a8f430 */
GEN_OWN GEN_FRAME uint F_00a8f430(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  *param_3 = *param_3 + (param_2 - param_1) / 0x11c;
  return (uint)param_3;
}

/* ref: FUN_00a8f460 */
GEN_OWN GEN_FRAME uint F_00a8f460(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  *param_3 = *param_3 + (param_2 - param_1) / 0x11c;
  return (uint)param_3;
}

/* ref: FUN_00a8f490 */
GEN_OWN GEN_FRAME uint F_00a8f490(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa8f490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00a88bf0(this GEN_EDX_ARG,param_1);
    }
    param_1 = param_1 + 0x88;
    this = ((undefined *)GEN_TOP(((int)this + 0x88)));
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00a8f4d0 */
GEN_OWN GEN_FRAME unsigned int F_00a8f4d0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f4d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00a8f4f0 */
GEN_OWN_GS GEN_FRAME uint F_00a8f4f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x124, 12, 4);
  ulonglong uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120));
  F_00a88c70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  F_00a89650(param_1 GEN_EDX_ARG,param_2);
  F_00a89650(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a8f560 */
GEN_OWN_GS GEN_FRAME uint F_00a8f560(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x124, 12, 4);
  ulonglong uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120));
  F_00a88d10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  F_00a896f0(param_1 GEN_EDX_ARG,param_2);
  F_00a896f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a8f5d0 */
GEN_OWN GEN_FRAME unsigned int F_00a8f5d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8f5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0xd) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0xd;
  }
  return 0;
}

/* ref: FUN_00a8f610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8f630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8f640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8f660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8f670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8f670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8f670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00a8d7e0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,0x191);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00a8f6d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f6d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8f6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f6f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8f700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8f720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8f770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f770u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8f790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f790u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8f820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f820u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8f840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f840u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8f8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f8d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8f8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f8f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8f940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8f9c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f9c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00a8f9d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8f9d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8f9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a8fa30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8fa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fa30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_009283d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8fa40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8fa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fa40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00928100(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8fa50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8fa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fa50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00928170(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a8fa60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8fa60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fa60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a8faa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8faa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa8faa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00a8fb00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8fb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a8fc50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8fc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8fc50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0xe1)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0xe1)));
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00a8fce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8fce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8fce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00a8b750(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a8fd00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8fd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa8fd00u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00a8fd50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8fd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8fd50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a8fd90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8fd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8fd90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x15))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8fe60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8fe60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa8fe60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a8fe70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8fe70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8fe70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x21))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8fef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8fef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8fef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x29))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x29))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a8ff30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ff30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa8ff30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00a8df70(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00a8ff50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8ff50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa8ff50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a8ff70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a8ff70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa8ff70u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0xc,800);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,800);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00a8fff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a8fff0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa8fff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3 * -0x34;
  return (uint)param_2;
}

/* ref: FUN_00a90010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a90010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa90010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a90020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a90020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa90020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x21))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00a90060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a90060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa90060u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00a8f670(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00a8e1c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a90100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a90100(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa90100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00a90160 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a90160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa90160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (this != param_1) {
    F_00955670(this GEN_EDX_FWD);
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 4))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 8))) = uVar1;
  }
  return;
}

/* ref: FUN_00a901a0 */
GEN_OWN GEN_FRAME uint F_00a901a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa901a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_00a901c0 */
GEN_OWN GEN_FRAME unsigned int F_00a901c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa901c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00a8ecb0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00a90200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a90200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa90200u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00a8e920(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00a89070(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00a8e920(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x18,0x191);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a902e0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a902e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa902e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00a8e790(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00a90300 */
GEN_OWN GEN_FRAME unsigned int F_00a90300(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa90300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar2 + 8 + (int)puVar1)));
        puVar1[3] = *((undefined4 *)GEN_TOP((iVar2 + 0xc + (int)puVar1)));
        puVar1[4] = *((undefined4 *)GEN_TOP((iVar2 + 0x10 + (int)puVar1)));
      }
      puVar1 = puVar1 + 5;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90350 */
GEN_OWN GEN_FRAME unsigned int F_00a90350(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar2 + 8 + (int)puVar1)));
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90390 */
GEN_OWN GEN_FRAME unsigned int F_00a90390(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa90390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x11c)))) {
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a903d0 */
GEN_OWN GEN_FRAME unsigned int F_00a903d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa903d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a90400 */
GEN_OWN GEN_FRAME unsigned int F_00a90400(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa90400u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a90430 */
GEN_OWN GEN_FRAME unsigned int F_00a90430(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90430u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a90460 */
GEN_OWN GEN_FRAME unsigned int F_00a90460(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa90460u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a90490 */
GEN_OWN GEN_FRAME uint F_00a90490(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa90490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined2 * puVar1;
  undefined2 * puVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 0x54;
    this = param_3;
    do {
      F_0042ccf0(this GEN_EDX_ARG,puVar2 - 0x54);
      F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,puVar2 - 0x2a);
      *((undefined2 *)GEN_TOP(((int)this + 0xa8))) = *puVar2;
      *((undefined2 *)GEN_TOP(((int)this + 0xaa))) = puVar2[1];
      *((undefined4 *)GEN_TOP(((int)this + 0xac))) = *(undefined4 *)(puVar2 + 2);
      F_00a8cc10(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG,puVar2 + 4);
      *((undefined4 *)GEN_TOP(((int)this + 0x25d4))) = *(undefined4 *)(puVar2 + 0x1296);
      *((undefined4 *)GEN_TOP(((int)this + 0x25d8))) = *(undefined4 *)(puVar2 + 0x1298);
      *((undefined4 *)GEN_TOP(((int)this + 0x25dc))) = *(undefined4 *)(puVar2 + 0x129a);
      *((undefined2 *)GEN_TOP(((int)this + 0x25e0))) = puVar2[0x129c];
      *((undefined4 *)GEN_TOP(((int)this + 0x25e4))) = *(undefined4 *)(puVar2 + 0x129e);
      *((undefined4 *)GEN_TOP(((int)this + 0x25e8))) = *(undefined4 *)(puVar2 + 0x12a0);
      *((undefined4 *)GEN_TOP(((int)this + 0x25ec))) = *(undefined4 *)(puVar2 + 0x12a2);
      *((undefined4 *)GEN_TOP(((int)this + 0x25f0))) = *(undefined4 *)(puVar2 + 0x12a4);
      *((undefined4 *)GEN_TOP(((int)this + 0x25f4))) = *(undefined4 *)(puVar2 + 0x12a6);
      *((undefined4 *)GEN_TOP(((int)this + 0x25f8))) = *(undefined4 *)(puVar2 + 0x12a8);
      *((undefined4 *)GEN_TOP(((int)this + 0x25fc))) = *(undefined4 *)(puVar2 + 0x12aa);
      *((undefined4 *)GEN_TOP(((int)this + 0x2600))) = *(undefined4 *)(puVar2 + 0x12ac);
      *((undefined4 *)GEN_TOP(((int)this + 0x2604))) = *(undefined4 *)(puVar2 + 0x12ae);
      *((undefined4 *)GEN_TOP(((int)this + 0x2608))) = *(undefined4 *)(puVar2 + 0x12b0);
      *((undefined4 *)GEN_TOP(((int)this + 0x260c))) = *(undefined4 *)(puVar2 + 0x12b2);
      *((undefined4 *)GEN_TOP(((int)this + 0x2610))) = *(undefined4 *)(puVar2 + 0x12b4);
      *((undefined1 *)GEN_TOP(((int)this + 0x2614))) = *(undefined1 *)(puVar2 + 0x12b6);
      *((undefined1 *)GEN_TOP(((int)this + 0x2615))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 0x256d)));
      *((undefined1 *)GEN_TOP(((int)this + 0x2616))) = *(undefined1 *)(puVar2 + 0x12b7);
      *((undefined1 *)GEN_TOP(((int)this + 0x2617))) = *((undefined1 *)GEN_TOP(((int)puVar2 + 0x256f)));
      *((undefined4 *)GEN_TOP(((int)this + 0x2618))) = *(undefined4 *)(puVar2 + 0x12b8);
      *((undefined4 *)GEN_TOP(((int)this + 0x261c))) = *(undefined4 *)(puVar2 + 0x12ba);
      *((undefined4 *)GEN_TOP(((int)this + 0x2620))) = *(undefined4 *)(puVar2 + 0x12bc);
      puVar1 = puVar2 + 0x12be;
      this = ((undefined *)GEN_TOP(((int)this + 0x2624)));
      puVar2 = puVar2 + 0x1312;
    } while (puVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00a90640 */
GEN_OWN GEN_FRAME unsigned int F_00a90640(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90640u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a90670 */
GEN_OWN GEN_FRAME unsigned int F_00a90670(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa90670u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a906b0 */
GEN_OWN GEN_FRAME unsigned int F_00a906b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa906b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a906e0 */
GEN_OWN GEN_FRAME unsigned int F_00a906e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa906e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a90710 */
GEN_OWN GEN_FRAME unsigned int F_00a90710(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa90710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x88)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a90740 */
GEN_OWN GEN_FRAME uint F_00a90740(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00a88c70(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x11c)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a90780 */
GEN_OWN GEN_FRAME unsigned int F_00a90780(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa90780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = ((undefined *)GEN_TOP((param_1 + 4)));
    do {
      F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
      F_0042c880(this GEN_EDX_ARG);
      iVar1 = (int)this + 0x118;
      this = ((undefined *)GEN_TOP(((int)this + 0x11c)));
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a907c0 */
GEN_OWN GEN_FRAME unsigned int F_00a907c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa907c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  undefined * pvVar2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x2624)))) {
    iVar1 = 0x17;
    pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x25d8)));
    do {
      F_0042c880(((undefined *)GEN_TOP(((int)pvVar2 - 0x134))) GEN_EDX_ARG);
      F_0042c880(((undefined *)GEN_TOP(((int)pvVar2 - 0x18c))) GEN_EDX_ARG);
      iVar1 = iVar1 - 1;
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x18c)));
    } while (-1 < iVar1);
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a90820 */
GEN_OWN GEN_FRAME unsigned int F_00a90820(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0xd;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90860 */
GEN_OWN GEN_FRAME uint F_00a90860(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa90860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8f250(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a90890 */
GEN_OWN GEN_FRAME uint F_00a90890(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
  }
  return (uint)param_2;
}

/* ref: FUN_00a908b0 */
GEN_OWN GEN_FRAME uint F_00a908b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa908b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00a88c70(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x11c;
    this = ((undefined *)GEN_TOP(((int)this + 0x11c)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a908f0 */
GEN_OWN GEN_FRAME unsigned int F_00a908f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa908f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90920 */
GEN_OWN GEN_FRAME unsigned int F_00a90920(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90920u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a90950 */
GEN_OWN GEN_FRAME uint F_00a90950(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00a88bf0(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x88;
    this = ((undefined *)GEN_TOP(((int)this + 0x88)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a90990 */
GEN_OWN GEN_FRAME uint F_00a90990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xa90990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0x58;
    do {
      if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
        *param_3 = *((undefined4 *)GEN_TOP((iVar2 - 0x58)));
        F_0042cbc0(param_3 + 1 GEN_EDX_ARG,iVar2 - 0x54);
        F_0042cbc0(param_3 + 0x16 GEN_EDX_ARG,iVar2);
        param_3[0x2b] = *((undefined4 *)GEN_TOP((iVar2 + 0x54)));
        param_3[0x2c] = *((undefined4 *)GEN_TOP((iVar2 + 0x58)));
        param_3[0x2d] = *((undefined4 *)GEN_TOP((iVar2 + 0x5c)));
        puVar3 = ((undefined4 *)GEN_TOP((iVar2 + 0x60)));
        puVar4 = param_3 + 0x2e;
        for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        param_3[0x46] = *((undefined4 *)GEN_TOP((iVar2 + 0xc0)));
      }
      param_3 = param_3 + 0x47;
      iVar1 = iVar2 + 0xc4;
      iVar2 = iVar2 + 0x11c;
    } while (iVar1 != param_2);
    return (uint)param_3;
  }
  return (uint)param_3;
}

/* ref: FUN_00a90a30 */
GEN_OWN GEN_FRAME unsigned int F_00a90a30(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90a30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a90a60 */
GEN_OWN GEN_FRAME uint F_00a90a60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa90a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8f380(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a90a90 */
GEN_OWN GEN_FRAME uint F_00a90a90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa90a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (param_2 - param_1) / 0x11c;
}

/* ref: FUN_00a90ab0 */
GEN_OWN GEN_FRAME uint F_00a90ab0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa90ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (param_2 - param_1) / 0x11c;
}

/* ref: FUN_00a90ad0 */
GEN_OWN GEN_FRAME uint F_00a90ad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = param_3[1];
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  return (uint)param_2;
}

/* ref: FUN_00a90af0 */
GEN_OWN GEN_FRAME unsigned int F_00a90af0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a8e790(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a90b10 */
GEN_OWN GEN_FRAME uint F_00a90b10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa90b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a8f490(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00a90b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a90b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa90b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00a90b90 */
GEN_OWN_GS GEN_FRAME uint F_00a90b90(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa90b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x128, 8, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * this;
  undefined * this_00;
  undefined * pvVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x120)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x124));
  uVar2 = ((int)param_3 - (int)param_1) / 0x11c;
  uVar1 = (param_2 - (int)param_1) / 0x11c;
  uVar5 = uVar1;
  (*(uint *)(gen_frame + 0x0)) = uVar2;
  while (uVar4 = uVar5, uVar4 != 0) {
    uVar5 = (int)(*(uint *)(gen_frame + 0x0)) % (int)uVar4;
    (*(uint *)(gen_frame + 0x0)) = uVar4;
  }
  if (((int)(*(uint *)(gen_frame + 0x0)) < (int)uVar2) && (0 < (int)(*(uint *)(gen_frame + 0x0)))) {
    pvVar6 = ((undefined *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) * 0x11c + (int)param_1)));
    do {
      pvVar7 = ((undefined *)GEN_TOP(((int)pvVar6 + uVar1 * 0x11c)));
      this = pvVar6;
      this_00 = param_1;
      if (pvVar7 != param_3) {
        this_00 = pvVar7;
      }
      do {
        F_00a88c70(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,this);
        F_00a89650(this GEN_EDX_ARG,this_00);
        F_00a89650(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        iVar3 = ((int)param_3 - (int)this_00) / 0x11c;
        if ((int)uVar1 < iVar3) {
          pvVar7 = ((undefined *)GEN_TOP(((int)this_00 + uVar1 * 0x11c)));
        }
        else {
          pvVar7 = ((undefined *)GEN_TOP(((uVar1 - iVar3) * 0x11c + (int)param_1)));
        }
        this = this_00;
        this_00 = pvVar7;
      } while (pvVar7 != pvVar6);
      pvVar6 = ((undefined *)GEN_TOP(((int)pvVar6 - 0x11c)));
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
    } while (0 < (int)(*(uint *)(gen_frame + 0x0)));
  }
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00a90d20 */
GEN_OWN_GS GEN_FRAME uint F_00a90d20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xa90d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x12c, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * this;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x124)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x128));
  uVar3 = ((int)param_3 - (int)param_1) / 0x11c;
  uVar2 = (param_2 - (int)param_1) / 0x11c;
  uVar5 = uVar2;
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  while (uVar4 = uVar5, uVar4 != 0) {
    uVar5 = (int)(*(uint *)(gen_frame + 0x4)) % (int)uVar4;
    (*(uint *)(gen_frame + 0x4)) = uVar4;
  }
  if (((int)(*(uint *)(gen_frame + 0x4)) < (int)uVar3) && (0 < (int)(*(uint *)(gen_frame + 0x4)))) {
    puVar7 = param_1 + (*(uint *)(gen_frame + 0x4)) * 0x47;
    do {
      this = puVar7;
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
      if (puVar7 + uVar2 * 0x47 != param_3) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar7 + uVar2 * 0x47;
      }
      do {
        (*(undefined4 *)(gen_frame + 0x8)) = *this;
        F_0042cbc0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,this + 1);
        F_0042cbc0(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,this + 0x16);
        (*(undefined4 *)(gen_frame + 0xb8)) = this[0x2c];
        (*(undefined4 *)(gen_frame + 0xb4)) = this[0x2b];
        uVar1 = this[0x46];
        (*(undefined4 *)(gen_frame + 0xbc)) = this[0x2d];
        puVar8 = this + 0x2e;
        puVar9 = ((undefined4 *)(gen_frame + 0xc0));
        for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        (*(undefined4 *)(gen_frame + 0x120)) = uVar1;
        F_00a896f0(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
        F_00a896f0((*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
        F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        iVar6 = ((int)param_3 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x0))) / 0x11c;
        if ((int)uVar2 < iVar6) {
          puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2 * 0x47;
        }
        else {
          puVar8 = param_1 + (uVar2 - iVar6) * 0x47;
        }
        this = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar8;
      } while (puVar8 != puVar7);
      puVar7 = puVar7 - 0x47;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
    } while (0 < (int)(*(uint *)(gen_frame + 0x4)));
  }
  return (*(uint *)(gen_frame + 0x4));
}

/* ref: FUN_00a90f20 */
GEN_OWN GEN_FRAME unsigned int F_00a90f20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa90f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0xd;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a90f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a90f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa90f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte bVar2;
  char cVar3;
  int * piVar4;
  byte bVar5;
  byte bVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  byte bVar10;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  bVar6 = 0;
  piVar8 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))));
  bVar10 = 0;
  bVar5 = 0;
  if (piVar8 != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      iVar9 = piVar8[4] * 0x34 + *((int *)GEN_TOP((piVar8[3] + 0x5c)));
      bVar1 = *((byte *)GEN_TOP((iVar9 + 0xc)));
      bVar2 = *((byte *)GEN_TOP((iVar9 + 0xd)));
      if ((bVar10 < bVar1) || ((bVar1 == bVar10 && (bVar10 = bVar5, bVar6 < bVar2)))) {
        *((int *)GEN_TOP(((int)this + 0x10))) = piVar8[3];
        *((int *)GEN_TOP(((int)this + 0x14))) = piVar8[4];
        bVar10 = bVar1;
        bVar5 = bVar1;
        bVar6 = bVar2;
      }
      if (*((char *)GEN_TOP(((int)piVar8 + 0x15))) == '\0') {
        piVar4 = ((int *)GEN_TOP(piVar8[2]));
        if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
          cVar3 = *((char *)GEN_TOP((*piVar4 + 0x15)));
          piVar8 = piVar4;
          piVar4 = ((int *)GEN_TOP(*piVar4));
          while (cVar3 == '\0') {
            cVar3 = *((char *)GEN_TOP((*piVar4 + 0x15)));
            piVar8 = piVar4;
            piVar4 = ((int *)GEN_TOP(*piVar4));
          }
        }
        else {
          cVar3 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
          piVar7 = ((int *)GEN_TOP(piVar8[1]));
          piVar4 = piVar8;
          while ((piVar8 = piVar7, cVar3 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar8[2]))))) {
            cVar3 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
            piVar7 = ((int *)GEN_TOP(piVar8[1]));
            piVar4 = piVar8;
          }
        }
      }
    } while (piVar8 != *((int * PTR32 *)GEN_TOP(((int)this + 4))));
  }
  return (uint)piVar8;
}

/* ref: FUN_00a91010 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a91010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a91050 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a91050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a91090 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a91090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00a910c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a910c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa910c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0xe1)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0xe1)));
  }
  if ((puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) &&
     (bVar3 = F_0042c7c0(param_2 GEN_EDX_ARG,puVar2 + 3), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00a91150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa91150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x164, 12, 4);
  byte bVar1;
  uint uVar2;
  
  (*(int *)(gen_frame + 0xa4)) = param_2;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0xa91167;
  uVar2 = F_00a8b750(this GEN_EDX_FWD,param_2);
  if (uVar2 != *((uint *)GEN_TOP(((int)this + 4)))) {
    (*(int *)(gen_frame + 0xa4)) = uVar2 + 0xc;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0xa9117e;
    F_0042cbc0(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG,uVar2 + 0xc);
    (*(int *)(gen_frame + 0xa4)) = param_2;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0xa91187;
    F_0042cbc0(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG,param_2);
    (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0xb4));
    (*(undefined4 *)(gen_frame + 0x4c)) = 0xa91198;
    F_0042cbc0((gen_frame + 0x54) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb4)));
    F_0042cbc0((gen_frame + 0x0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108)));
    bVar1 = F_00a67e30((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                         (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                         (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),
                         (*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined1 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 *)(gen_frame + 0x5c)),
                         (*(undefined4 *)(gen_frame + 0x60)),(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 *)(gen_frame + 0x68)),(*(undefined4 *)(gen_frame + 0x6c)),(*(undefined4 *)(gen_frame + 0x70)),(*(undefined4 *)(gen_frame + 0x74)),(*(undefined4 *)(gen_frame + 0x78)),
                         (*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x80)),(*(undefined4 *)(gen_frame + 0x84)),(*(undefined4 *)(gen_frame + 0x88)),(*(undefined4 *)(gen_frame + 0x8c)),(*(undefined4 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x94)),
                         (*(undefined4 *)(gen_frame + 0x98)),(*(undefined4 *)(gen_frame + 0x9c)),(*(undefined4 *)(gen_frame + 0xa0)),(*(int *)(gen_frame + 0xa4)));
    (*(int *)(gen_frame + 0xa4)) = 0xa911bb;
    F_0042c880(((undefined1 *)(gen_frame + 0x108)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0xa4)) = 0xa911c6;
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
    if (bVar1 == 0) {
      *param_1 = uVar2;
      return (uint)param_1;
    }
  }
  (*(uint *)(gen_frame + 0x15c)) = *((uint *)GEN_TOP(((int)this + 4)));
  *param_1 = *((uint *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00a91200 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a91200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a91240 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a91240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91240u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a91270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa91270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00a8fd90(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00a912a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a912a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa912a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x29))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x29))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00a91310 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a91310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a8ff70(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a91340 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a91340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  iVar2 = 0;
  if (*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) {
    iVar2 = **(int * PTR32 *)this;
  }
  if (*((uint *)GEN_TOP((iVar2 + 8))) <= uVar1) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + (uVar1 - *((uint *)GEN_TOP((iVar2 + 8)))) * 4)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + uVar1 * 4)));
}

/* ref: FUN_00a91380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00a90060(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00a913b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a913b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa913b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,0x191);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00a91410 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a91410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91410u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a91460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa91460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar2 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  if (this != param_1) {
    F_00955670(this GEN_EDX_ARG);
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 4))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 8))) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a914d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a914d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa914d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00a90300(param_1,param_2,param_3,(int)this + 0xc);
  return;
}

/* ref: FUN_00a914f0 */
GEN_OWN GEN_FRAME unsigned int F_00a914f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa914f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a8e790(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a91510 */
GEN_OWN GEN_FRAME unsigned int F_00a91510(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00a8e790(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a91530 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a91530(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar2 + 8 + (int)puVar1)));
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91570 */
GEN_OWN GEN_FRAME unsigned int F_00a91570(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa91570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x11c)))) {
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a915b0 */
GEN_OWN GEN_FRAME unsigned int F_00a915b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa915b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a915e0 */
GEN_OWN GEN_FRAME unsigned int F_00a915e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa915e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a91610 */
GEN_OWN GEN_FRAME unsigned int F_00a91610(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91610u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a91640 */
GEN_OWN GEN_FRAME unsigned int F_00a91640(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa91640u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a91670 */
GEN_OWN GEN_FRAME uint F_00a91670(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a90490(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a91690 */
GEN_OWN GEN_FRAME unsigned int F_00a91690(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91690u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a916c0 */
GEN_OWN GEN_FRAME unsigned int F_00a916c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa916c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a91700 */
GEN_OWN GEN_FRAME unsigned int F_00a91700(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91700u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a91730 */
GEN_OWN GEN_FRAME unsigned int F_00a91730(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa91730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a91760 */
GEN_OWN GEN_FRAME unsigned int F_00a91760(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa91760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x88)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a91790 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a91790(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00a88c70(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x11c)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a917d0 */
GEN_OWN GEN_FRAME unsigned int F_00a917d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa917d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = ((undefined *)GEN_TOP((param_1 + 4)));
    do {
      F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
      F_0042c880(this GEN_EDX_ARG);
      iVar1 = (int)this + 0x118;
      this = ((undefined *)GEN_TOP(((int)this + 0x11c)));
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91810 */
GEN_OWN GEN_FRAME unsigned int F_00a91810(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00a907c0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00a91830 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a91830(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0xd;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa91870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00a8f250(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a918a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a918a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa918a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0x191)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a918f0 */
GEN_OWN GEN_FRAME uint F_00a918f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa918f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00a88c70(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x11c)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a91930 */
GEN_OWN GEN_FRAME unsigned int F_00a91930(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91960 */
GEN_OWN GEN_FRAME unsigned int F_00a91960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91960u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a91990 */
GEN_OWN GEN_FRAME uint F_00a91990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00a88bf0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x88)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a919d0 */
GEN_OWN GEN_FRAME uint F_00a919d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa919d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a90990(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a91a00 */
GEN_OWN GEN_FRAME unsigned int F_00a91a00(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91a00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a91a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa91a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00a8f380(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a91a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa91a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,800)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar2 + 5) = 0;
  uVar1 = param_1[1];
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2[3] = *param_1;
    puVar2[4] = uVar1;
  }
  return (uint)puVar2;
}

/* ref: FUN_00a91ab0 */
GEN_OWN GEN_FRAME uint F_00a91ab0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00a8e790(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x2624;
    this = ((undefined *)GEN_TOP(((int)this + 0x2624)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a91af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa91af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00a8f490(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00a91b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa91b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  uint * local_8;
  
  puVar3 = *((uint * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)param_1 + 0x15))) == '\0') {
    puVar1 = ((uint *)GEN_TOP(F_004296a0(0x18,0,800)));
    *puVar1 = *((uint *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((uint *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((uint *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((uint *)GEN_TOP(0x0))) {
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
    }
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_1 + 5);
    local_8 = puVar3;
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00a91b20(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(*param_1)),(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00a91b20(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(param_1[2])),(uint)puVar1);
    puVar1[2] = uVar2;
    puVar3 = local_8;
  }
  return (uint)puVar3;
}

/* ref: FUN_00a91bc0 */
GEN_OWN GEN_FRAME unsigned int F_00a91bc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a90b90(param_1,param_2,param_3,0,0);
  return;
}

/* ref: FUN_00a91be0 */
GEN_OWN GEN_FRAME unsigned int F_00a91be0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00a90d20(param_1,param_2,param_3,0,0);
  return;
}

/* ref: FUN_00a91c00 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a91c00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa91c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0xd;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a91c50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a91c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a91c90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a91c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 1) * 2,0);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a91cf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a91cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: Client::Game::UI::ScenarioTextReader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91d30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa91d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00a71520(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a91d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a90060(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a91da0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a91da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,0x191);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00a91df0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa91df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x14;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x14,0,0x191);
    F_00a90300(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,0x191);
    }
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x14 + uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + ((iVar2 - iVar1) / 0x14) * 0x14;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a91ec0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a91ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa91ec0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a91f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa91f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,400);
    F_00a91530(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
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

/* ref: FUN_00a91fd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a91fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa91fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a8e660(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a92000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa92000u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_00a91df0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a91df0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a92090 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a92090(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa92090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x11c)))) {
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_ARG);
    F_0042c880(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a920d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a920d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa920d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a92090(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
    uVar2 = F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x11c) * 0x11c,800
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00a92130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa92130u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,800)));
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
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_00a922a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a922a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa922a0u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,800)));
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
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_00a92410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa92410u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,800)));
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
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_00a92590 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a92590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa92590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00a925e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a925e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa925e0u, gen_a0, gen_a1, 0u, 0u);
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
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((uVar6 + param_1) * 4,0,800)));
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
    uVar9 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,800);
    uVar6 = (uint)uVar9;
  }
  *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + param_1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3;
  return uVar6;
}

/* ref: FUN_00a92750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa92750u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00a927a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a927a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa927a0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_00a91f10(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a91f10(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a92820 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a92820(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa92820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = ((undefined *)GEN_TOP(((int)this + 0x88)))) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a92850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa92850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x11c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x11c,0,800);
    F_00a91790(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a92090(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
      F_00429760(*(undefined4 *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x11c) * 0x11c,
                   800);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar1 - iVar2) / 0x11c) * 0x11c + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x11c + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a92930 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a92930(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa92930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = ((undefined *)GEN_TOP((param_1 + 4)));
    do {
      F_0042c880(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG);
      F_0042c880(this GEN_EDX_ARG);
      iVar1 = (int)this + 0x118;
      this = ((undefined *)GEN_TOP(((int)this + 0x11c)));
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a92970 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a92970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa92970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00a907c0(param_1,param_2,(int)this + 0xc,param_2);
  return;
}

/* ref: FUN_00a92990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa92990u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 0x34,0,800)));
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
      F_00429760(iVar5,((*((int *)GEN_TOP(((int)this + 8))) - iVar5) / 0x34) * 0x34,800);
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + ((iVar2 - iVar5) / 0x34) * 0xd;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar3 + (int)((int)(uintptr_t)param_1) * 0xd;
    *(undefined4 * PTR32 *)this = puVar3;
  }
  return (uint)puVar3;
}

/* ref: FUN_00a92a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa92a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x11c;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x11c;
    uVar1 = F_004296a0(iVar2,0,800);
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(((int)this + 8))) = iVar2 + uVar1;
    uVar1 = F_00a8f250(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a92b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa92b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,0x191)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_2 + 1);
  }
  F_00a90200(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00a92b60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a92b60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa92b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00a88c70(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x11c)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a92ba0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a92ba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa92ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined2 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a92bd0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a92bd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa92bd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a92c00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a92c00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa92c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00a88bf0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x88)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a92c40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa92c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00a90990(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a92c70 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a92c70(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa92c70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a92ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa92ca0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a92d40 */
GEN_OWN GEN_FRAME uint F_00a92d40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa92d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00a8e790(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x2624)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a92d80 */
GEN_OWN GEN_FRAME uint F_00a92d80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa92d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  
  iVar1 = param_2;
  if ((param_2 != param_3) && (param_3 != param_4)) {
    F_00a90b90(param_2,param_3,param_4,0,0);
    iVar1 = param_2 + ((param_4 - param_3) / 0x11c) * 0x11c;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00a92dd0 */
GEN_OWN GEN_FRAME uint F_00a92dd0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xa92dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  
  iVar1 = param_2;
  if ((param_2 != param_3) && (param_3 != param_4)) {
    F_00a90d20(param_2,param_3,param_4,0,0);
    iVar1 = param_2 + ((param_4 - param_3) / 0x11c) * 0x11c;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00a92e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa92e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar3 = (param_1[1] - *param_1) / 0x34;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar3 != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(iVar3 * 0x34,0,800)));
    *(undefined4 * PTR32 *)this = puVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar2 + iVar3 * 0xd;
    puVar1 = ((undefined4 *)GEN_TOP(param_1[1]));
    for (puVar4 = ((undefined4 *)GEN_TOP(*param_1)); puVar4 != puVar1; puVar4 = puVar4 + 0xd) {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar5 = puVar4;
        puVar6 = puVar2;
        for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      puVar2 = puVar2 + 0xd;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
  }
  return (uint)this;
}

/* ref: FUN_00a92ec0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a92ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa92ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  uVar7 = F_00a91b20(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))),iVar2);
  *((uint *)GEN_TOP((iVar2 + 4))) = uVar7;
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  piVar4 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    return 0;
  }
  cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
  piVar6 = ((int *)GEN_TOP(*piVar4));
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*piVar6 + 0x15)));
    piVar4 = piVar6;
    piVar6 = ((int *)GEN_TOP(*piVar6));
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  iVar5 = *((int *)GEN_TOP((iVar2 + 8)));
  cVar1 = *((char *)GEN_TOP((iVar5 + 0x15)));
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 8))) + 0x15)));
    iVar2 = iVar5;
    iVar5 = *((int *)GEN_TOP((iVar5 + 8)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00a92f40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a92f40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa92f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x19 GEN_EDX_ARG);
  in_ecx[0x2e] = 0;
  in_ecx[0x2f] = 0;
  *(undefined2 *)(in_ecx + 0x30) = 0;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0xc2))) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a92f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a92f80(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa92f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  if ((param_2 & 2) == 0) {
    F_0042c880(param_1 + 0x19 GEN_EDX_FWD);
    F_0042c880(param_1 + 4 GEN_EDX_ARG);
    iVar3 = *param_1;
    if (iVar3 != 0) {
      F_00429760(iVar3,(param_1[2] - iVar3 >> 1) * 2,0);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((param_2 & 1) != 0) {
      F_00406ad0(param_1);
    }
    return (uint)param_1;
  }
  piVar1 = param_1 - 1;
  iVar3 = *piVar1 - 1;
  if (-1 < iVar3) {
    piVar4 = param_1 + *piVar1 * 0x31 + 4;
    do {
      F_0042c880(piVar4 - 0x1c GEN_EDX_ARG);
      F_0042c880(piVar4 - 0x31 GEN_EDX_ARG);
      iVar2 = piVar4[-0x35];
      if (iVar2 != 0) {
        F_00429760(iVar2,(piVar4[-0x33] - iVar2 >> 1) * 2,0);
      }
      iVar3 = iVar3 - 1;
      piVar4[-0x35] = 0;
      piVar4[-0x34] = 0;
      piVar4[-0x33] = 0;
      piVar4 = piVar4 - 0x31;
    } while (-1 < iVar3);
  }
  if ((param_2 & 1) != 0) {
    F_00406b30(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00a93070 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a93070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,0x191);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00a930d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a930d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa930d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a93120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00a90060(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a93160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a93160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
  uVar2 = (uint)uVar3;
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x14) * 0x14,0x191);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00a93200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00a92000(this GEN_EDX_FWD,1);
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
      F_00a92000(this GEN_EDX_ARG,1);
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

/* ref: FUN_00a932b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a932b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa932b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (*(uint *)this != uVar1) {
    uVar1 = F_00a8e660(uVar1,uVar1,*(uint *)this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a932e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a932e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa932e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x34) * 0x34,800);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: FUN_00a93330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa93330u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a93380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) <= *((int *)GEN_TOP(((int)this + 0x10))) + 1U) {
    F_00a925e0(this GEN_EDX_FWD,1);
  }
  uVar3 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar3) {
    uVar3 = uVar3 - *((uint *)GEN_TOP(((int)this + 8)));
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) == 0) {
    uVar2 = F_004296a0(0xc,0,800);
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4))) = uVar2;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((uVar2 + uVar3 * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    uVar2 = param_1[2];
    puVar1[2] = uVar2;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  return uVar2;
}

/* ref: FUN_00a933f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a933f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa933f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00a927a0(this GEN_EDX_FWD,1);
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
      F_00a927a0(this GEN_EDX_ARG,1);
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

/* ref: FUN_00a934c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a934c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa934c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x88)))) {
      F_0042c880(this_00 GEN_EDX_FWD);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x88) * 0x88,0x191);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00a93520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa93520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a8c970(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    F_00a92090(uVar1,*((undefined4 *)GEN_TOP(((int)this + 4))));
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x11c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x11c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a92850(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a92850(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a93600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa93600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if (param_2 != param_3) {
    uVar3 = F_00a8ca30(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar3 != uVar2) {
      this_00 = ((undefined *)GEN_TOP((uVar3 + 4)));
      do {
        F_0042c880(((undefined *)GEN_TOP(((int)this_00 + 0x54))) GEN_EDX_ARG);
        F_0042c880(this_00 GEN_EDX_ARG);
        uVar1 = (int)this_00 + 0x118;
        this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x11c)));
      } while (uVar1 != uVar2);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93680 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a93680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x11c) {
      F_0042c880(((undefined *)GEN_TOP((iVar2 + 0x58))) GEN_EDX_FWD);
      F_0042c880(((undefined *)GEN_TOP((iVar2 + 4))) GEN_EDX_ARG);
    }
    F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x11c) * 0x11c,800);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00a936f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a936f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa936f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a90490(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    F_00a907c0(uVar1,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a93740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a907c0(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x2624) * 0x2624,
                         800);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00a937b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a937b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa937b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00a93800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93800u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_00a92990(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a92990(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a93890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined2 * puVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  undefined2 * puVar6;
  
  puVar5 = param_1;
  if (((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 1))) < param_1) {
    puVar3 = ((undefined2 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 2,0,0)));
    puVar5 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar3;
    for (puVar4 = *(undefined2 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 1) * 2,0);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined2 * PTR32 *)this = puVar3;
    *((undefined2 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 1);
  }
  return (uint)puVar5;
}

/* ref: FUN_00a93930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93930u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined4 *)GEN_TOP(F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,800)));
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
      F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 2) * 4,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00a939e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a939e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa939e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x88;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x88,0,0x191);
    F_00a92c00(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x88)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x88) * 0x88,0x191);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x88) * 0x88 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x88 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a93ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x11c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x11c,0,800);
    F_00a90990(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a92930(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
      F_00429760(*(undefined4 *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x11c) * 0x11c,
                   800);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar1 - iVar2) / 0x11c) * 0x11c + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x11c + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a93bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93bc0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = ((undefined1 *)GEN_TOP(F_004296a0(param_1,0,800)));
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
      F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_00a93c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_1[0x17];
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,param_1 + 0x18);
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,param_1 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a93ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00a91460(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00a93cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa93cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00a92ca0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a93ce0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00a93ce0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xa93ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00a8e790(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x2624)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a93d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x11c;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x11c;
    uVar1 = F_004296a0(iVar2,0,800);
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(((int)this + 8))) = iVar2 + uVar1;
    uVar1 = F_00a8f380(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a93db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x88;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x88;
    uVar1 = F_004296a0(iVar2,0,0x191);
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(((int)this + 8))) = iVar2 + uVar1;
    uVar1 = F_00a8f490(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00a93e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
    uVar1 = F_00a93570(this GEN_EDX_FWD,1);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00a88c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
  return uVar1;
}

/* ref: FUN_00a93e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  F_00a92e20(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_1 + 0x17);
  *((undefined1 *)GEN_TOP(((int)this + 0x6c))) = *(undefined1 *)(param_1 + 0x1b);
  *((undefined1 *)GEN_TOP(((int)this + 0x6d))) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x6d)));
  return (uint)this;
}

/* ref: FUN_00a93ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  F_00a92ec0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00a93f10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00a93f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != 0) {
    F_00a92f80(*(int *)this GEN_EDX_FWD,3);
    *(undefined4 *)this = 0;
  }
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 0;
  return;
}

/* ref: FUN_00a93f40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a93f40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_00a93f60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a93f60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  F_0042b630(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  *(undefined2 *)(in_ecx + 0x1b) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a93f90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a93f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa93f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x6c))) = 0;
  return (uint)this;
}

/* ref: FUN_00a93fd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a93fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa93fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x5c)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 100))) - iVar1) / 0x34) * 0x34,800);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  uVar2 = F_0042c880(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00a94030 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a94030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_FWD);
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a94050 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a94050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_FWD);
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a94080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c5e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a940c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a940c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa940c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c5e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x18,800);
  return (uint)uVar1;
}

/* ref: Client::Game::UI::Telepo::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94100(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa94100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00a72750(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00a94140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_0074d820(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00a94160 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a94160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa94160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00a93570(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00a88c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x11c) * 0x11c + *(int *)this
                  );
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00a93570(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00a88c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
  return;
}

/* ref: FUN_00a941f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a941f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa941f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*(int *)this != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*(int *)this,this);
    F_00a92090(uVar2,*((undefined4 *)GEN_TOP(((int)this + 4))));
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  return;
}

/* ref: FUN_00a94240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00a93600(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00a94270 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a94270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*(int *)this != iVar1) {
    uVar2 = F_00a90490(iVar1,iVar1,*(int *)this,this);
    F_00a907c0(uVar2,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  return;
}

/* ref: FUN_00a942b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a942b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa942b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * in_EAX = 0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (in_EAX = *(undefined4 * PTR32 *)this, in_EAX <= param_1)) {
    iVar1 = (int)param_1 - (int)in_EAX;
    in_EAX = ((undefined4 *)GEN_TOP((iVar1 * 0x4ec4ec4f)));
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      in_EAX = ((undefined4 *)GEN_TOP(F_00a93800(this GEN_EDX_FWD,1)));
    }
    puVar2 = ((undefined4 *)GEN_TOP(((iVar1 / 0x34) * 0x34 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      in_EAX = ((undefined4 *)GEN_TOP(F_00a93800(this GEN_EDX_ARG,1)));
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
  return (uint)in_EAX;
}

/* ref: FUN_00a94320 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a94320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: FUN_00a94370 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a94370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_FWD);
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a943a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a943a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa943a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a93680(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a943c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a943c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa943c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c5e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a94400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa94400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 1;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 1;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00a93890(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a93890(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a94470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa94470u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00a93930(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a93930(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a944e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a944e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa944e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x88;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x88;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a939e0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a939e0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a94570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa94570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x11c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x11c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a93ae0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a93ae0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a94600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa94600u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00a93bc0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00a93bc0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00a94660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa94660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_2 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = param_2[0x17];
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a946c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a946c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa946c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x2624;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x2624,0,800);
    F_00a93ce0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00a907c0(iVar1,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x2624) * 0x2624,800);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar2 - iVar1) / 0x2624) * 0x2624 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x2624 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a947a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a947a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa947a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = *param_1;
  F_00a91460(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00a947c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a947c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa947c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00a94570(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00a88d10(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x11c) * 0x11c + *(int *)this
                  );
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00a94570(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00a88d10(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
  return;
}

/* ref: FUN_00a94850 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a94850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 100)));
  if (iVar1 != 0) {
    F_00429760(iVar1,((*((int *)GEN_TOP(((int)this + 0x6c))) - iVar1) / 0x34) * 0x34,800);
  }
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  uVar2 = F_0042c880(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00a948b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a948b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa948b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c5e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a948f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a948f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa948f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_2 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = param_2[0x17];
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a94950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xa94950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)this;
  if (*((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP(((int)this + 8)))) {
    F_00a93570(this GEN_EDX_FWD,1);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
    F_00a88c70(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_3);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
  iVar4 = ((param_2 - iVar1) / 0x11c) * 0x11c;
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 - 0x11c;
  iVar3 = *(int *)this + iVar4;
  if ((iVar3 != iVar1) && (iVar1 != iVar2)) {
    F_00a90b90(iVar3,iVar1,iVar2,0,0);
  }
  *param_1 = *(int *)this + iVar4;
  return (uint)param_1;
}

/* ref: FUN_00a949d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a949d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa949d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *(undefined2 *)this = *param_1;
  F_00a93db0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00a94a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa94a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
    uVar1 = F_00a94570(this GEN_EDX_FWD,1);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00a88d10(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
  return uVar1;
}

/* ref: FUN_00a94a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa94a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  F_00a92ec0(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00a94a90 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00a94a90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xa94a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    F_0042cbc0(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
    F_00a92e20(param_1 + 0x17 GEN_EDX_ARG,param_2 + 0x17);
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x6d))) = *((undefined1 *)GEN_TOP(((int)param_2 + 0x6d)));
  }
  return;
}

/* ref: FUN_00a94ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa94ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_1 + 0x5c);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP((param_1 + 0xb0)));
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_1 + 0xb4);
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,param_1 + 0xc4);
  return (uint)this;
}

/* ref: FUN_00a94b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa94b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_00a93d20(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00a94b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa94b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x15))) = 1;
  F_00a92ec0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a94bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa94bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_2 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = param_2[0x17];
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a94c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x114))) = 0;
  F_0074d820(((undefined4 *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x118))),
               *((undefined4 *)GEN_TOP(((int)this + 0x11c))));
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 300))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x12e))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x2d0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2d2))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0xefe4;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x144))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x198))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a0))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x1a4))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x1f8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1fc))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x200))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x254))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 600))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x2ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2b0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x13c))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 700))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2cc))) = 0;
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0x2d8)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x5));
  do {
    *((undefined4 *)GEN_TOP(((int)pvVar3 - 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = 0;
    F_0042e430(pvVar3 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x60))) = 0;
    *((undefined1 *)GEN_TOP(((int)pvVar3 + 100))) = 0;
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x6c)));
    pvVar1 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) - 1)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar1;
  } while (pvVar1 != ((undefined *)GEN_TOP(0x0)));
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0x4f4)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x5));
  do {
    *((undefined4 *)GEN_TOP(((int)pvVar3 - 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = 0;
    F_0042e430(pvVar3 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x60))) = 0;
    *((undefined1 *)GEN_TOP(((int)pvVar3 + 100))) = 0;
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x6c)));
    pvVar1 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) - 1)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar1;
  } while (pvVar1 != ((undefined *)GEN_TOP(0x0)));
  pvVar3 = ((undefined *)GEN_TOP(((int)this + 0x710)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x4));
  do {
    *((undefined4 *)GEN_TOP(((int)pvVar3 - 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = 0;
    F_0042e430(pvVar3 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x60))) = 0;
    *((undefined1 *)GEN_TOP(((int)pvVar3 + 100))) = 0;
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x6c)));
    pvVar1 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) - 1)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar1;
  } while (pvVar1 != ((undefined *)GEN_TOP(0x0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x8c8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x9ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8bc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x8cc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x8ce))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9b0))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x9b4))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0xa08))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  uVar2 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0xa5c))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0xab0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8dc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x8e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8e4))) = 0;
  return uVar2;
}

/* ref: FUN_00a94ee0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a94ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 100)));
  if (*((int *)GEN_TOP(((int)this + 0x60))) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*((int *)GEN_TOP(((int)this + 0x60))),this);
    F_00a92090(uVar2,*((undefined4 *)GEN_TOP(((int)this + 100))));
    *((uint *)GEN_TOP(((int)this + 100))) = uVar2;
  }
  return;
}

/* ref: FUN_00a94f20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a94f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x74)));
  if (*((int *)GEN_TOP(((int)this + 0x70))) != iVar1) {
    uVar2 = F_00a8c970(iVar1,iVar1,*((int *)GEN_TOP(((int)this + 0x70))),this);
    F_00a92090(uVar2,*((undefined4 *)GEN_TOP(((int)this + 0x74))));
    *((uint *)GEN_TOP(((int)this + 0x74))) = uVar2;
  }
  return;
}

/* ref: FUN_00a94f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a94f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa94f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x114))) = 0;
  F_0074d820(((undefined4 *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x118))),
               *((undefined4 *)GEN_TOP(((int)this + 0x11c))));
  iVar5 = *((int *)GEN_TOP(((int)this + 300)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x128)));
  if (iVar2 != iVar5) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
    F_00c46e20(iVar2,iVar5,0);
    *((int *)GEN_TOP(((int)this + 300))) = (int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + iVar2;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x138))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x142))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x148))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x150))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x56c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x570))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x154))) = 0;
  pvVar4 = ((undefined *)GEN_TOP(((int)this + 0x160)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x5));
  do {
    *((undefined4 *)GEN_TOP(((int)pvVar4 - 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x54))) = 0;
    F_0042e430(pvVar4 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x60))) = 0;
    pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 + 0x68)));
    pvVar1 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) - 1)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar1;
  } while (pvVar1 != ((undefined *)GEN_TOP(0x0)));
  pvVar4 = ((undefined *)GEN_TOP(((int)this + 0x368)));
  iVar5 = 5;
  do {
    *((undefined4 *)GEN_TOP(((int)pvVar4 - 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x54))) = 0;
    uVar3 = F_0042e430(pvVar4 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x60))) = 0;
    pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 + 0x68)));
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  return uVar3;
}

/* ref: FUN_00a950c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a950c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa950c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x11c))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x124)));
  if (*((int *)GEN_TOP(((int)this + 0x120))) != iVar1) {
    uVar2 = F_00a90490(iVar1,iVar1,*((int *)GEN_TOP(((int)this + 0x120))),this);
    F_00a907c0(uVar2,*((undefined4 *)GEN_TOP(((int)this + 0x124))),(int)this + 300,this);
    *((uint *)GEN_TOP(((int)this + 0x124))) = uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  return;
}

/* ref: FUN_00a951d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a951d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa951d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x18))) - iVar1 >> 2) * 4,800);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  uVar2 = F_0074d8a0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a95220 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a95220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xa5c))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xa08))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x9b4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x958))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x8f4))) GEN_EDX_ARG);
  iVar1 = 3;
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x8c0)));
  do {
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x6c)));
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar1 = 4;
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x710)));
  do {
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x6c)));
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar1 = 4;
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x4f4)));
  do {
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x6c)));
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 600))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x200))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x1a4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x144))) GEN_EDX_ARG);
  F_0074d8a0(((undefined *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG);
  uVar3 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00a95320 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a95320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a93680(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a95340 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a95340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_FWD);
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a95380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a95380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  
  iVar1 = 4;
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x570)));
  do {
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x68)));
    F_0042c880(pvVar2 GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar1 = 4;
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x368)));
  do {
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x68)));
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x128)));
  if (iVar1 != 0) {
    F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 0x130))) - iVar1,800);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 300))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  F_0074d8a0(((undefined *)GEN_TOP(((int)this + 0x118))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG);
  uVar3 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00a95420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c5e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a95480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  undefined2 * puVar1;
  undefined2 * puVar2;
  undefined2 * puVar3;
  
  puVar3 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined2 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined2 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00a94400(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined2 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined2 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined2 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 1) * 2)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 2;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined2 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00a94400(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined2 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined2 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 2;
  return (uint)puVar3;
}

/* ref: FUN_00a954f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a954f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa954f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00a94470(this GEN_EDX_FWD,1);
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
      F_00a94470(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00a95560 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a95560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00a944e0(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00a88bf0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x88) * 0x88 + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x88;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00a944e0(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00a88bf0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x88;
  return;
}

/* ref: FUN_00a955f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a955f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa955f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00751cb0(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00751cb0(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
  return;
}

/* ref: FUN_00a95670 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a95670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00751cb0(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00751cb0(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
  return;
}

/* ref: FUN_00a956f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a956f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa956f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (this != param_1) {
    uVar3 = (param_1[1] - *param_1) / 0x11c;
    if (uVar3 == 0) {
      iVar5 = *((int *)GEN_TOP(((int)this + 4)));
      if (*(int *)this != iVar5) {
        uVar3 = F_00a8c970(iVar5,iVar5,*(int *)this,0);
        F_00a92090(uVar3,*((undefined4 *)GEN_TOP(((int)this + 4))));
        *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
        return (uint)this;
      }
    }
    else {
      iVar5 = *(int *)this;
      uVar1 = (*((int *)GEN_TOP(((int)this + 4))) - iVar5) / 0x11c;
      if (uVar3 <= uVar1) {
        uVar3 = F_00a8c870(*param_1,param_1[1],iVar5,uVar3);
        F_00a92090(uVar3,*((undefined4 *)GEN_TOP(((int)this + 4))));
        *((int *)GEN_TOP(((int)this + 4))) = ((param_1[1] - *param_1) / 0x11c) * 0x11c + *(int *)this;
        return (uint)this;
      }
      if ((uint)((*((int *)GEN_TOP(((int)this + 8))) - iVar5) / 0x11c) < uVar3) {
        if (iVar5 != 0) {
          F_00a92090(iVar5,*((undefined4 *)GEN_TOP(((int)this + 4))));
          F_00a86d90(*(int *)this,(*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x11c);
        }
        bVar2 = F_00a8d860(this GEN_EDX_ARG,(param_1[1] - *param_1) / 0x11c);
        if (bVar2 == 0) {
          return (uint)this;
        }
        uVar6 = *(undefined4 *)this;
        iVar5 = param_1[1];
        iVar4 = *param_1;
      }
      else {
        iVar4 = uVar1 * 0x11c + *param_1;
        F_00a8c870(*param_1,iVar4,iVar5,iVar4);
        uVar6 = *((undefined4 *)GEN_TOP(((int)this + 4)));
        iVar5 = param_1[1];
      }
      uVar3 = F_00a92b60(iVar4,iVar5,uVar6);
      *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a95890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (in_EAX = *(uint *)this, in_EAX <= param_1)) {
    iVar2 = param_1 - in_EAX;
    in_EAX = iVar2 * -0x193d4bb7;
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      in_EAX = F_00a94570(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00a88d10(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(iVar2 / 0x11c) * 0x11c + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
      return uVar1;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      in_EAX = F_00a94570(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      in_EAX = F_00a88d10(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x11c;
  return in_EAX;
}

/* ref: FUN_00a95920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00a94600(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined1 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined1 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00a94600(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined1 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00a95980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a95980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa95980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_FWD);
  F_00a920d0(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a959b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00a959b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa959b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_00a93680(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a959d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a959d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xa959d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_0095c5e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 8))),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00a95a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa95a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG,param_2 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = param_2[0x17];
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,param_2 + 0x18);
  F_00a92a70(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,param_2 + 0x1c);
  return (uint)this;
}

/* ref: FUN_00a95a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x2624;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x2624;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a946c0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a946c0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a95b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00a95b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xa95b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = *param_1;
  F_00a91460(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00a95b20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00a95b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xa95b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    F_00a93680(this GEN_EDX_FWD);
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

