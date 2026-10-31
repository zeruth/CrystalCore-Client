#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0073c610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73c610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0x10 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_0073c630 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0073c630(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73c630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073c640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c640(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73c640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * -0xb8;
  return (uint)in_ecx;
}

/* ref: FUN_0073c660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73c660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0073c670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00732de0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73c680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 0x14;
  return (uint)param_1;
}

/* ref: FUN_0073c6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c6a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73c6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c6b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0073c6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00732eb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73c6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x25))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x25))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x25))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x25))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x25))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x25))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073c750 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0073c750(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73c750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073c770 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0073c770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c770u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0073c7d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c7d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73c7d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c7e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0073c7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00732f60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c7f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0073c7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73c7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x140,0,800);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x140 + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0073c850 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0073c850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73c850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073c850(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,800);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_0073c8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73c8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_2 + 2);
  return (uint)this;
}

/* ref: FUN_0073c900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c900(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73c900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c910 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0073c910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00733140(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c920(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73c920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c930(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73c930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c960(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73c960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c970(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73c970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73c980u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0073c9c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073c9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73c9c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0073ca00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ca00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73ca00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0x140 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_0073ca30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0073ca30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x73ca30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_007267d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073ca40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ca40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73ca40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0x54 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_0073ca60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ca60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73ca60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0x10 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_0073ca80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ca80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73ca80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0073cab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073cab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73cab0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0073cae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073cae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73cae0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0073cbb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073cbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73cbb0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_007316f0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_0073ccca;
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
      piVar4 = ((int *)GEN_TOP(F_00723cd0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x11))) == '\0') {
      uVar5 = F_00725910(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0073ccca: ;
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
            F_007333f0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x10))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x10))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x10))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x10))) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_00733450(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x10))) = 1;
              F_007333f0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_0073cd88: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00733450(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x10))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x10))) == '\x01'))
            goto LAB_0073cd88;
            if (*((char *)GEN_TOP((*piVar6 + 0x10))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x10))) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_007333f0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x10))) = 1;
            F_00733450(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0073ce10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ce10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73ce10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0073cef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073cef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73cef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x65))) == '\0') {
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

/* ref: FUN_0073cfd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0073cfd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73cfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073cfe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073cfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73cfe0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00731fb0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_0073d0fa;
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
      piVar4 = ((int *)GEN_TOP(F_007241a0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00725b10(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0073d0fa: ;
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
            F_00733530(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00733590(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00733530(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_0073d1b8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00733590(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_0073d1b8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00733530(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00733590(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0073d240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73d240u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0073d310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073d310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73d310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0073d330 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_0073d330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73d330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x19))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x19))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0073d3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073d3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73d3a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00732c10(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_0073d4ba;
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
      piVar4 = ((int *)GEN_TOP(F_00725c10(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x21))) == '\0') {
      uVar5 = F_00725bf0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0073d4ba: ;
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
            F_00733630(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x20))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x20))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00733690(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              F_00733630(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_0073d578: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00733690(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x20))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01'))
            goto LAB_0073d578;
            if (*((char *)GEN_TOP((*piVar6 + 0x20))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x20))) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00733630(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x20))) = 1;
            F_00733690(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00429760(piVar3,0x28,0x322);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0073d600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073d600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73d600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * local_8;
  
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = puVar5;
  if (*((char *)GEN_TOP(((int)puVar5[1] + 0x21))) == '\0') {
    uVar1 = param_2[1];
    puVar3 = ((undefined4 *)GEN_TOP(puVar5[1]));
    do {
      uVar2 = puVar3[5];
      if ((uVar1 < uVar2) || ((uVar1 <= uVar2 && (*param_2 <= (uint)puVar3[4])))) {
        if ((*((char *)GEN_TOP(((int)puVar5 + 0x21))) != '\0') &&
           ((uVar1 <= uVar2 && ((uVar1 < uVar2 || (*param_2 < (uint)puVar3[4])))))) {
          puVar5 = puVar3;
        }
        puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
        local_8 = puVar3;
      }
      else {
        puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      puVar3 = puVar4;
    } while (*((char *)GEN_TOP(((int)puVar4 + 0x21))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar5 + 0x21))) == '\0') {
    puVar3 = ((undefined4 *)GEN_TOP(*puVar5));
  }
  else {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
    do {
      if (((uint)puVar3[5] < param_2[1]) ||
         (((uint)puVar3[5] <= param_2[1] && ((uint)puVar3[4] <= *param_2)))) {
        puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      }
      else {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*((char *)GEN_TOP(((int)puVar4 + 0x21))) == '\0');
  }
  *param_1 = (int)local_8;
  param_1[1] = (int)puVar5;
  return (uint)param_1;
}

/* ref: FUN_0073d6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073d6f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73d6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0073d710 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_0073d710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73d710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
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

/* ref: FUN_0073d780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073d780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x73d780u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 0;
  param_1[1] = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_0073d810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0073d810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x73d810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar3) {
      uVar3 = uVar3 - *((uint *)GEN_TOP(((int)this + 8)));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,0);
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_0073d850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073d850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73d850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0073d870 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_0073d870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73d870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0073d8a0 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_0073d8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73d8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0073d950 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0073d950(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73d950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073d960 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0073d960(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73d960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073d9b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073d9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73d9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x19))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x19))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x19))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x19))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x19))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x19))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073db90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0073db90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73db90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073dba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073dba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73dba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x2cd))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x2cd))) != '\0') && (*param_2 < *(ushort *)(puVar1 + 3))) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x2cd))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x2cd))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x2cd))) == '\0') {
    do {
      if (*param_2 < *(ushort *)(puVar1 + 3)) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x2cd))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073dc90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073dc90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73dc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0073dcb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073dcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73dcb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x101))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x101))) != '\0') && (*param_2 < *(ushort *)(puVar1 + 3))) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x101))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x101))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x101))) == '\0') {
    do {
      if (*param_2 < *(ushort *)(puVar1 + 3)) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x101))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073dda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073dda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73dda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x9d))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x9d))) != '\0') && (*param_2 < *(ushort *)(puVar1 + 3))) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x9d))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x9d))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x9d))) == '\0') {
    do {
      if (*param_2 < *(ushort *)(puVar1 + 3)) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x9d))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073de90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073de90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73de90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_007316f0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073deb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73deb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00732c10(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073ded0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ded0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73ded0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00726b40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073def0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073def0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73def0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00732de0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073df20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073df20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73df20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = param_2 * 0x10 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_0073df60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073df60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73df60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00731c40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073df80 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_0073df80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73df80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x21))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
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

/* ref: FUN_0073e030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e030(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73e030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073e080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73e080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00731fb0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073e0e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73e0e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0073e120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e120(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73e120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073e130 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0073e130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73e130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0073e150 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0073e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73e150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0073e170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73e170u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0073e1a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0073e1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73e1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073e1a0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,800);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_0073e1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73e1e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0073e280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73e280u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x19))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00726ee0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x19))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[6];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 6))) = (char)piVar3[6];
      *(char *)(piVar3 + 6) = (char)iVar1;
      goto LAB_0073e39a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00726960(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
      uVar5 = F_00726940(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0073e39a: ;
  if ((char)piVar3[6] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[6] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_00733c70(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x18))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x18))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x18))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x18))) = 1;
                *(undefined1 *)(piVar6 + 6) = 0;
                F_00733cd0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 6) = (char)piVar4[6];
              *(undefined1 *)(piVar4 + 6) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x18))) = 1;
              F_00733c70(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_0073e458: ;
            *(undefined1 *)(piVar6 + 6) = 0;
          }
        }
        else {
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_00733cd0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x18))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x18))) == '\x01'))
            goto LAB_0073e458;
            if (*((char *)GEN_TOP((*piVar6 + 0x18))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x18))) = 1;
              *(undefined1 *)(piVar6 + 6) = 0;
              F_00733c70(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 6) = (char)piVar4[6];
            *(undefined1 *)(piVar4 + 6) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x18))) = 1;
            F_00733cd0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 6) = 1;
  }
  F_00429760(piVar3,0x1c,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0073e4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73e4e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00726f30(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_0073e5fa;
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
      piVar4 = ((int *)GEN_TOP(F_007269d0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_007269b0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0073e5fa: ;
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
            F_00733d30(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00733d90(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00733d30(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_0073e6b8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00733d90(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_0073e6b8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00733d30(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00733d90(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0073e740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73e740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00726e20(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073e760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73e760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00732c70(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073e780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73e780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00732eb0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073e7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73e7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00732f60(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073e800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073e800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73e800u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00731e40(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_0073e91a;
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
      piVar4 = ((int *)GEN_TOP(F_00725410(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00726c50(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0073e91a: ;
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
            F_00734050(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_007340b0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00734050(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_0073e9d8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_007340b0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_0073e9d8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00734050(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_007340b0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0073ea60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ea60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73ea60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00731e40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073ea80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ea80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73ea80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00733140(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073eaa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073eaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73eaa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00726ee0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073eac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073eac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73eac0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00732040(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_0073ebda;
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
      piVar4 = ((int *)GEN_TOP(F_00725650(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00726da0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0073ebda: ;
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
            F_00726cd0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00726d40(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00726cd0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_0073ec98: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00726d40(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_0073ec98;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00726cd0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00726d40(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0073ed20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ed20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73ed20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00732040(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073ed40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ed40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73ed40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00726f30(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073ed60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ed60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73ed60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0073eda0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0073eda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73eda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x19)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073eda0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x1c,800);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
  }
  return;
}

/* ref: FUN_0073ede0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0073ede0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73ede0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073ede0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,800);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_0073ee20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0073ee20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73ee20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x31)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073ee20(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x38,800);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x31)));
  }
  return;
}

/* ref: FUN_0073ee60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ee60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73ee60u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x25))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00731b70(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x25))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x25))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x25))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[9];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 9))) = (char)piVar3[9];
      *(char *)(piVar3 + 9) = (char)iVar1;
      goto LAB_0073ef7a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x25))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x25))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00725130(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x25))) == '\0') {
      uVar5 = F_00726e90(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0073ef7a: ;
  if ((char)piVar3[9] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[9] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[9] == '\0') {
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(piVar4 + 9) = 0;
            F_00734250(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x25))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x24))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x24))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x24))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x24))) = 1;
                *(undefined1 *)(piVar6 + 9) = 0;
                F_007342b0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 9) = (char)piVar4[9];
              *(undefined1 *)(piVar4 + 9) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x24))) = 1;
              F_00734250(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_0073f038: ;
            *(undefined1 *)(piVar6 + 9) = 0;
          }
        }
        else {
          if ((char)piVar6[9] == '\0') {
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(piVar4 + 9) = 0;
            F_007342b0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x25))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x24))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x24))) == '\x01'))
            goto LAB_0073f038;
            if (*((char *)GEN_TOP((*piVar6 + 0x24))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x24))) = 1;
              *(undefined1 *)(piVar6 + 9) = 0;
              F_00734250(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 9) = (char)piVar4[9];
            *(undefined1 *)(piVar4 + 9) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x24))) = 1;
            F_007342b0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 9) = 1;
  }
  F_00429760(piVar3,0x28,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0073f0c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73f0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00731b70(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073f0e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0073f0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73f0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073f0e0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,800);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_0073f120 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0073f120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73f120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x25)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073f120(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x28,800);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x25)));
  }
  return;
}

/* ref: FUN_0073f160 */
GEN_OWN GEN_FRAME uint F_0073f160(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  uVar1 = param_3[2];
  param_1[2] = param_3[1];
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0073f190 */
GEN_OWN GEN_FRAME uint F_0073f190(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0073f1b0 */
GEN_OWN GEN_FRAME uint F_0073f1b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  uVar1 = param_3[2];
  param_1[2] = param_3[1];
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0073f1e0 */
GEN_OWN GEN_FRAME uint F_0073f1e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0073f200 */
GEN_OWN GEN_FRAME uint F_0073f200(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_0073f220 */
GEN_OWN GEN_FRAME uint F_0073f220(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_0073f240 */
GEN_OWN GEN_FRAME uint F_0073f240(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *param_1 = *param_2;
  F_00720450(param_1 + 2 GEN_EDX_ARG,param_3);
  return (uint)param_1;
}

/* ref: FUN_0073f270 */
GEN_OWN GEN_FRAME uint F_0073f270(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_0073f290 */
GEN_OWN GEN_FRAME uint F_0073f290(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_0073f2b0 */
GEN_OWN GEN_FRAME uint F_0073f2b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  param_1[2] = param_3[1];
  param_1[3] = param_3[2];
  uVar1 = param_3[4];
  param_1[4] = param_3[3];
  param_1[5] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0073f2e0 */
GEN_OWN GEN_FRAME uint F_0073f2e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_0073f300 */
GEN_OWN GEN_FRAME uint F_0073f300(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x73f300u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_0073f330 */
GEN_OWN GEN_FRAME uint F_0073f330(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_3[1];
  *(undefined4 *)(param_1 + 2) = *param_3;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0073f350 */
GEN_OWN GEN_FRAME uint F_0073f350(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_0073f370 */
GEN_OWN GEN_FRAME uint F_0073f370(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *param_3;
  return (uint)param_1;
}

/* ref: FUN_0073f390 */
GEN_OWN GEN_FRAME uint F_0073f390(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *param_1 = *param_2;
  F_0042cbc0(param_1 + 1 GEN_EDX_ARG,param_3);
  return (uint)param_1;
}

/* ref: FUN_0073f3b0 */
GEN_OWN GEN_FRAME unsigned int F_0073f3b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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
    puVar5 = puVar1 + 0x22;
    puVar3 = puVar2 + 0x22;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x22; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0073f3f0 */
GEN_OWN GEN_FRAME uint F_0073f3f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f3f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
    param_2[2] = *((undefined4 *)GEN_TOP((param_3 + 8)));
    param_2[4] = *((undefined4 *)GEN_TOP((param_3 + 0x10)));
    param_2[5] = *((undefined4 *)GEN_TOP((param_3 + 0x14)));
    *(undefined1 *)(param_2 + 6) = *((undefined1 *)GEN_TOP((param_3 + 0x18)));
    param_2[7] = *((undefined4 *)GEN_TOP((param_3 + 0x1c)));
    *(undefined1 *)(param_2 + 8) = *((undefined1 *)GEN_TOP((param_3 + 0x20)));
    param_2[9] = *((undefined4 *)GEN_TOP((param_3 + 0x24)));
    param_2[10] = *((undefined4 *)GEN_TOP((param_3 + 0x28)));
    *(undefined1 *)(param_2 + 0xb) = *((undefined1 *)GEN_TOP((param_3 + 0x2c)));
  }
  return (uint)param_2;
}

/* ref: FUN_0073f440 */
GEN_OWN GEN_FRAME unsigned int F_0073f440(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00739020(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_0073f460 */
GEN_OWN GEN_FRAME unsigned int F_0073f460(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0073f490 */
GEN_OWN GEN_FRAME uint F_0073f490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_007390c0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0073f4b0 */
GEN_OWN GEN_FRAME uint F_0073f4b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f4b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0073f4d0 */
GEN_OWN GEN_FRAME unsigned int F_0073f4d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f4d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00728760(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_0073f4f0 */
GEN_OWN GEN_FRAME uint F_0073f4f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00739130(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0073f510 */
GEN_OWN GEN_FRAME uint F_0073f510(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f510u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0073f550 */
GEN_OWN GEN_FRAME unsigned int F_0073f550(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_0073f590 */
GEN_OWN GEN_FRAME unsigned int F_0073f590(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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
    puVar5 = puVar1 + 10;
    puVar3 = puVar2 + 10;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 10; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0073f5c0 */
GEN_OWN GEN_FRAME uint F_0073f5c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f5c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_007394b0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0073f5e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0073f5e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f5e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_0073f620 */
GEN_OWN GEN_FRAME uint F_0073f620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x73f620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_007395b0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0073f650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73f650u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0073f680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x73f680u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0073f6b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73f6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2[5];
  return (uint)this;
}

/* ref: FUN_0073f6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73f6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *(undefined4 *)this = *param_1;
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_2 + 0x54);
  *((undefined1 *)GEN_TOP(((int)this + 0xac))) = *((undefined1 *)GEN_TOP((param_2 + 0xa8)));
  return (uint)this;
}

/* ref: FUN_0073f730 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0073f730(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73f730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00738690(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_0073f750 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0073f750(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x73f750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0073f770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x73f770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_2 + 2);
  return (uint)this;
}

/* ref: FUN_0073f7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f7a0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73f7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0073f7d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f7d0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73f7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x58))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0073f800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f800(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73f800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0073f830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f830(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73f830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x26c))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x208))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x154))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x100))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0xac))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x58))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0073f8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f8a0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73f8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0xa0))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x3c))) GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0073f8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f8d0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x73f8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x34))) GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0073f900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073f900(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x73f900u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x18,800);
                    
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
LAB_0073fafd: ;
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
        goto LAB_0073fafd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_0073fb30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073fb30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x73fb30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x14,800);
                    
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
LAB_0073fd2d: ;
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
        goto LAB_0073fd2d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x10))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x10))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x10)));
  } while( true );
}

/* ref: FUN_0073fd60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073fd60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x73fd60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x18,800);
                    
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
LAB_0073ff5d: ;
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
        goto LAB_0073ff5d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_0073ff90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0073ff90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x73ff90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x1c,800);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x18)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x18))) == '\0') {
        *(undefined1 *)(piVar5 + 6) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x19))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x19))) == '\0') {
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
LAB_0074018d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x18))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x19))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x19))) == '\0') {
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
        goto LAB_0074018d;
      }
      *(undefined1 *)(piVar5 + 6) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x18)));
  } while( true );
}

/* ref: FUN_007401c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007401c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x7401c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x28,0x322);
                    
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
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x20))) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x21))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x21))) == '\0') {
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
LAB_007403bd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x20))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x21))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x20))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x21))) == '\0') {
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
        goto LAB_007403bd;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x20))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x20)));
  } while( true );
}

/* ref: FUN_007403f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007403f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x7403f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x18,800);
                    
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
LAB_007405ed: ;
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
        goto LAB_007405ed;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00740620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740620(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x740620u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x1c,800);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x18)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x18))) == '\0') {
        *(undefined1 *)(piVar5 + 6) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x19))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x19))) == '\0') {
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
LAB_0074081d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x18))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x19))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x19))) == '\0') {
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
        goto LAB_0074081d;
      }
      *(undefined1 *)(piVar5 + 6) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x18)));
  } while( true );
}

/* ref: FUN_00740850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740870 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00728c60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_007408a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007408a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7408a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_007408c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007408c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7408c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00728cc0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007408d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007408d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7408d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00728d20(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007408e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007408e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7408e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00728d80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740930 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00728e00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740940 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00728e80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00728f00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007409a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007409a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7409a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_007409c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007409c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7409c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00728f60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007409d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007409d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7409d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_007409f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007409f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7409f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00728aa0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740a40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00728b10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740a50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00729000(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740a60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00729060(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740a70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740ab0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x740ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x18,800);
                    
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
LAB_00740cad: ;
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
        goto LAB_00740cad;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00740ce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_007290d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740d30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00729130(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740d40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00740d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x740d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00729190(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00740d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740d90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00740db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x740db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00740e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x740e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,800)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00740e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined2 *)this = *param_1;
  F_0072cbb0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00740e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00740e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x740e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)this = *param_1;
  puVar2 = param_2;
  puVar3 = this;
  for (iVar1 = 10; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_2[10];
  *((undefined2 *)GEN_TOP(((int)this + 0x30))) = *(undefined2 *)(param_2 + 0xb);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,param_2 + 0xc);
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_2[0x21];
  *((undefined1 *)GEN_TOP(((int)this + 0x8c))) = *(undefined1 *)(param_2 + 0x22);
  return (uint)this;
}

/* ref: FUN_00740ef0 */
GEN_OWN GEN_FRAME byte F_00740ef0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x740ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *param_1 == *param_2;
}

/* ref: FUN_00740f10 */
GEN_OWN GEN_FRAME unsigned int F_00740f10(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x740f10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00740f80 */
GEN_OWN GEN_FRAME unsigned int F_00740f80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x740f80u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00740ff0 */
GEN_OWN GEN_FRAME uint F_00740ff0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x740ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  uint uVar1;
  undefined * this;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58);
  (*(uint *)(gen_frame + 0x54)) = uVar1;
  this = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    uVar1 = F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(this GEN_EDX_ARG,uVar1);
    }
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar1 = (uint)uVar3;
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  }
  return uVar1;
}

/* ref: FUN_00741050 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00741050(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x741050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x1c,0,800)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
    puVar1[6] = param_3[4];
  }
  return (uint)puVar1;
}

/* ref: FUN_007410a0 */
GEN_OWN GEN_FRAME unsigned int F_007410a0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x7410a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  uint local_14;
  uint local_8;
  
  puVar3 = param_1;
  uVar1 = local_8;
  uVar2 = local_14;
  for (iVar4 = param_2; iVar4 != 0; iVar4 = iVar4 - 1) {
    local_14 = uVar2 & 0xffff0000;
    local_8 = uVar1 & 0xffffff00;
    if (puVar3 != ((uint *)GEN_TOP(0x0))) {
      *puVar3 = local_14;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = local_8;
    }
    puVar3 = puVar3 + 4;
    uVar1 = local_8;
    uVar2 = local_14;
  }
  return;
}

/* ref: FUN_007410e0 */
GEN_OWN GEN_FRAME unsigned int F_007410e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7410e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      if (*((char *)GEN_TOP(((int)piVar4 + 0x101))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x101))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x101)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x101)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x101)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x101)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00741170 */
GEN_OWN GEN_FRAME unsigned int F_00741170(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x741170u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      if (*((char *)GEN_TOP(((int)piVar4 + 0x9d))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x9d))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x9d)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x9d)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x9d)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x9d)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00741200 */
GEN_OWN GEN_FRAME uint F_00741200(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x741200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(uint param_10 = (uint)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = param_7;
  uVar4 = param_10;
  while (param_4 != uVar3) {
    uVar3 = uVar3 - 1;
    if (param_5 == ((int *)GEN_TOP(0x0))) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_5;
    }
    uVar2 = uVar3 >> 1;
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar2 * 4))) + (uVar3 & 1) * 8)));
    uVar4 = uVar4 - 1;
    if (param_8 == ((int *)GEN_TOP(0x0))) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_8;
    }
    uVar2 = uVar4 >> 1;
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar2 * 4)));
    *((undefined4 *)GEN_TOP((iVar5 + (uVar4 & 1) * 8))) = *puVar1;
    *((undefined4 *)GEN_TOP((iVar5 + 4 + (uVar4 & 1) * 8))) = puVar1[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != ((int *)GEN_TOP(0x0))) {
    if (((undefined4 *)GEN_TOP(*param_8)) == ((undefined4 *)GEN_TOP(0x0))) {
      param_1[2] = uVar4;
      return (uint)param_1;
    }
    *param_1 = *((undefined4 *)GEN_TOP(*param_8));
  }
  param_1[2] = uVar4;
  return (uint)param_1;
}

/* ref: FUN_007412b0 */
GEN_OWN GEN_FRAME uint F_007412b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x7412b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(uint param_10 = (uint)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_10;
  for (uVar1 = param_4; uVar1 != param_7; uVar1 = uVar1 + 1) {
    iVar2 = 0;
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      iVar2 = *param_2;
    }
    uVar4 = uVar1 >> 1;
    if (*((uint *)GEN_TOP((iVar2 + 8))) <= uVar4) {
      uVar4 = uVar4 - *((uint *)GEN_TOP((iVar2 + 8)));
    }
    if (param_8 == ((int *)GEN_TOP(0x0))) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar3 = uVar5 >> 1;
    if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar3) {
      uVar3 = uVar3 - *((uint *)GEN_TOP((iVar6 + 8)));
    }
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + uVar4 * 4)));
    iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar3 * 4)));
    *((undefined4 *)GEN_TOP((iVar6 + (uVar5 & 1) * 8))) = *((undefined4 *)GEN_TOP((iVar2 + (uVar1 & 1) * 8)));
    *((undefined4 *)GEN_TOP((iVar6 + 4 + (uVar5 & 1) * 8))) = *((undefined4 *)GEN_TOP((iVar2 + 4 + (uVar1 & 1) * 8)));
    uVar5 = uVar5 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar5;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*param_8));
  }
  return (uint)param_1;
}

/* ref: FUN_007413b0 */
GEN_OWN GEN_FRAME uint F_007413b0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7413b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int local_8;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)(param_3 + 0xd8);
    puVar3 = param_1;
    do {
      *param_3 = *puVar3;
      puVar4 = (undefined4 *)(puVar3 + 8);
      puVar5 = puVar2 - 0x34;
      for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = (undefined4 *)(puVar3 + 0xd8);
      puVar5 = puVar2;
      for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar5 = (undefined4 *)(puVar3 + 0xf4);
      puVar4 = puVar2 + 8;
      local_8 = 2;
      do {
        puVar4[-1] = *puVar5;
        *puVar4 = *((undefined4 *)GEN_TOP((((int)puVar3 - (int)param_3) + (int)puVar4)));
        F_0042ccf0(puVar4 + 1 GEN_EDX_ARG,puVar5 + 2);
        puVar5 = puVar5 + 0x17;
        puVar4 = puVar4 + 0x17;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
      param_3 = param_3 + 0x1b0;
      puVar2 = puVar2 + 0x6c;
      puVar3 = puVar3 + 0x1b0;
    } while (puVar3 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00741460 */
GEN_OWN GEN_FRAME uint F_00741460(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x741460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x54)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_007414a0 */
GEN_OWN GEN_FRAME unsigned int F_007414a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7414a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_007414d0 */
GEN_OWN GEN_FRAME unsigned int F_007414d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x7414d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      }
      puVar1 = puVar1 + 4;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00741530 */
GEN_OWN GEN_FRAME unsigned int F_00741530(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x741530u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00741580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00741580(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x741580u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x38,800);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x30)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x30))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x30))) == '\0') {
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x30))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x30))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x31))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x30))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x30))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x31))) == '\0') {
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
LAB_0074177d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x30))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x31))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x30))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x30))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x31))) == '\0') {
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
        goto LAB_0074177d;
      }
      *(undefined1 *)(piVar5 + 0xc) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x30))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x30))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x30)));
  } while( true );
}

/* ref: FUN_007417b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007417b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x7417b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x20,800);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x1c)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x1c))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x1c))) == '\0') {
        *(undefined1 *)(piVar5 + 7) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x1c))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x1c))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x1d))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x1c))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x1c))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x1d))) == '\0') {
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
LAB_007419ad: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x1c))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x1d))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x1c))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x1c))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x1d))) == '\0') {
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
        goto LAB_007419ad;
      }
      *(undefined1 *)(piVar5 + 7) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x1c))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x1c))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x1c)));
  } while( true );
}

/* ref: FUN_007419e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007419e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7419e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0072c190(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007419f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007419f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7419f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0072c1f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00741a00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00741a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x741a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0072c250(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00741a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00741a10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x741a10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x28,800);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x24)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x24))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x24))) == '\0') {
        *(undefined1 *)(piVar5 + 9) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x24))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x24))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x25))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x24))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x24))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x25))) == '\0') {
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
LAB_00741c0d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x24))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x25))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x24))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x24))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x25))) == '\0') {
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
        goto LAB_00741c0d;
      }
      *(undefined1 *)(piVar5 + 9) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x24))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x24))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x24)));
  } while( true );
}

/* ref: FUN_00741c40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00741c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x741c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0072c310(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00741c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00741c50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x741c50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x18,800);
                    
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
LAB_00741e4d: ;
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
        goto LAB_00741e4d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00741e80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00741e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x741e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0072c380(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00741e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00741e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x741e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00741eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00741eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x741eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00741ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00741ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x741ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00741ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00741ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x741ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00741f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00741f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x741f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00741f30 */
GEN_OWN GEN_FRAME unsigned int F_00741f30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x741f30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00741f60 */
GEN_OWN GEN_FRAME unsigned int F_00741f60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x741f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0072cf40(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00741f80 */
GEN_OWN GEN_FRAME uint F_00741f80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x741f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00741f90 */
GEN_OWN GEN_FRAME unsigned int F_00741f90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x741f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0x22) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0x22; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0x22;
  }
  return 0;
}

/* ref: FUN_00741fd0 */
GEN_OWN GEN_FRAME unsigned int F_00741fd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x741fd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00742010 */
GEN_OWN GEN_FRAME unsigned int F_00742010(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742010u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00742050 */
GEN_OWN GEN_FRAME unsigned int F_00742050(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_00742080 */
GEN_OWN GEN_FRAME uint F_00742080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 0x18))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00742090 */
GEN_OWN GEN_FRAME unsigned int F_00742090(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742090u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_007420c0 */
GEN_OWN GEN_FRAME unsigned int F_007420c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7420c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_007420f0 */
GEN_OWN GEN_FRAME unsigned int F_007420f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7420f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00742120 */
GEN_OWN GEN_FRAME unsigned int F_00742120(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742120u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00742150 */
GEN_OWN GEN_FRAME uint F_00742150(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP((param_2 + 0x58))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 4))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00742170 */
GEN_OWN GEN_FRAME unsigned int F_00742170(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742170u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_007421a0 */
GEN_OWN GEN_FRAME uint F_007421a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7421a0u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_0072cf40(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x140;
    this = ((undefined *)GEN_TOP(((int)this + 0x140)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_007421e0 */
GEN_OWN GEN_FRAME unsigned int F_007421e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7421e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00742210 */
GEN_OWN GEN_FRAME unsigned int F_00742210(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742210u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00742240 */
GEN_OWN GEN_FRAME unsigned int F_00742240(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 10) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 10;
  }
  return 0;
}

/* ref: FUN_00742280 */
GEN_OWN GEN_FRAME uint F_00742280(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x742280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  int iVar2;
  undefined2 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0x58;
    puVar3 = param_3;
    do {
      if (puVar3 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar3 = *((undefined2 *)GEN_TOP((iVar2 - 0x58)));
        F_0042cbc0(puVar3 + 2 GEN_EDX_ARG,iVar2 - 0x54);
        F_0042cbc0(puVar3 + 0x2c GEN_EDX_ARG,iVar2);
        puVar3[0x56] = *((undefined2 *)GEN_TOP((iVar2 + 0x54)));
        *(undefined4 *)(puVar3 + 0x58) = *((undefined4 *)GEN_TOP((iVar2 + 0x58)));
        *(undefined4 *)(puVar3 + 0x5a) = *((undefined4 *)GEN_TOP((iVar2 + 0x5c)));
      }
      iVar1 = iVar2 + 0x60;
      puVar3 = puVar3 + 0x5c;
      iVar2 = iVar2 + 0xb8;
    } while (iVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00742300 */
GEN_OWN GEN_FRAME uint F_00742300(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 0x1c))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00742310 */
GEN_OWN GEN_FRAME uint F_00742310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 0x20))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00742320 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00742320(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x742320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00742340 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00742340(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    uVar1 = F_0042cbc0(param_1 + 1 GEN_EDX_ARG,param_2 + 1);
  }
  return uVar1;
}

/* ref: FUN_00742370 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00742370(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    F_0042cbc0(param_1 + 1 GEN_EDX_ARG,param_2 + 1);
    uVar1 = F_0042cbc0(param_1 + 0x16 GEN_EDX_ARG,param_2 + 0x16);
    *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  }
  return uVar1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_007423b0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_007423b0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7423b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_007423d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007423d0(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7423d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return (uint)param_1;
}

/* ref: FUN_00742400 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00742400(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_00742430 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00742430(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  return (uint)param_1;
}

/* ref: FUN_00742450 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00742450(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  }
  return (uint)param_1;
}

/* ref: FUN_00742470 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00742470(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_007424a0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_007424a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7424a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
  }
  return;
}

/* ref: FUN_007424d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007424d0(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7424d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    uVar1 = F_0072cbb0(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
  }
  return uVar1;
}

/* ref: FUN_00742500 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00742500(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    uVar1 = F_00720450(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
  }
  return uVar1;
}

/* ref: FUN_00742530 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00742530(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = param_1;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    puVar1 = param_1 + 1;
    puVar4 = puVar1;
    puVar3 = param_2;
    for (iVar2 = 10; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
    param_1[0xb] = param_2[0xb];
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
    F_0042cbc0(param_1 + 0xd GEN_EDX_ARG,param_2 + 0xd);
    param_1[0x22] = param_2[0x22];
    *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  }
  return (uint)puVar1;
}

/* ref: FUN_007425a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007425a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x7425a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined * this;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 1;
  this = ((undefined *)GEN_TOP((param_1 + 0x1b4)));
  do {
    this = ((undefined *)GEN_TOP(((int)this - 0x5c)));
    uVar2 = F_0042c880(this GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_007425d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_007425d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7425d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    uVar1 = F_0042cbc0(param_1 + 3 GEN_EDX_ARG,param_2 + 3);
  }
  return uVar1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00742600 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00742600(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x742600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00742620 */
GEN_OWN GEN_FRAME unsigned int F_00742620(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742620u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00742650 */
GEN_OWN GEN_FRAME unsigned int F_00742650(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742650u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00742680 */
GEN_OWN GEN_FRAME unsigned int F_00742680(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742680u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_007426b0 */
GEN_OWN GEN_FRAME unsigned int F_007426b0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7426b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_007426e0 */
GEN_OWN GEN_FRAME unsigned int F_007426e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7426e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00742710 */
GEN_OWN GEN_FRAME unsigned int F_00742710(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00738690(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00742730 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00742730(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return;
}

/* ref: FUN_00742770 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00742770(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x742770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

/* ref: FUN_007427a0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_007427a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7427a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return;
}

/* ref: std::allocator<std::_Container_proxy>::construct_007427e0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_007427e0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7427e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00742800 */
GEN_OWN GEN_FRAME unsigned int F_00742800(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00742820 */
GEN_OWN GEN_FRAME unsigned int F_00742820(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x742820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
  }
  return;
}

/* ref: FUN_00742860 */
GEN_OWN GEN_FRAME uint F_00742860(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x742860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined2 * puVar1;
  
  puVar1 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (puVar1 != ((undefined2 *)GEN_TOP(0x0))) {
      *puVar1 = *param_1;
      F_0042cbc0(puVar1 + 2 GEN_EDX_ARG,param_1 + 2);
      F_0042cbc0(puVar1 + 0x2c GEN_EDX_ARG,param_1 + 0x2c);
      puVar1[0x56] = param_1[0x56];
      *(undefined4 *)(puVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(puVar1 + 0x5a) = *(undefined4 *)(param_1 + 0x5a);
    }
    param_1 = param_1 + 0x5c;
    puVar1 = puVar1 + 0x5c;
  } while (param_1 != param_2);
  return (uint)puVar1;
}

/* ref: FUN_007428e0 */
GEN_OWN GEN_FRAME uint F_007428e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x7428e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  int iVar2;
  undefined2 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0x58;
    puVar3 = param_3;
    do {
      if (puVar3 != ((undefined2 *)GEN_TOP(0x0))) {
        *puVar3 = *((undefined2 *)GEN_TOP((iVar2 - 0x58)));
        F_0042cbc0(puVar3 + 2 GEN_EDX_ARG,iVar2 - 0x54);
        F_0042cbc0(puVar3 + 0x2c GEN_EDX_ARG,iVar2);
        puVar3[0x56] = *((undefined2 *)GEN_TOP((iVar2 + 0x54)));
        *(undefined4 *)(puVar3 + 0x58) = *((undefined4 *)GEN_TOP((iVar2 + 0x58)));
        *(undefined4 *)(puVar3 + 0x5a) = *((undefined4 *)GEN_TOP((iVar2 + 0x5c)));
      }
      iVar1 = iVar2 + 0x60;
      puVar3 = puVar3 + 0x5c;
      iVar2 = iVar2 + 0xb8;
    } while (iVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00742960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00742960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x742960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  uint * this_01;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  uVar1 = param_2;
  if (pvVar3 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
    return param_2;
  }
  do {
    if (param_3 == pvVar3) {
      F_0042ccf0(pvVar3 GEN_EDX_FWD,param_2);
      *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + 1;
      uVar1 = (*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54;
      if (uVar1 <= *((uint *)GEN_TOP(((int)this + 0x28)))) {
        uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        uVar1 = F_0042a990(uVar9 GEN_EDX_ARG);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,6);
        (*(uint *)(gen_frame + 0x4)) = uVar1;
        uVar1 = F_0042a990(*((int *)GEN_TOP(((int)this + 0x18))) + 0x54 GEN_EDX_ARG);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,6);
        (*(uint *)(gen_frame + 0xc)) = uVar1;
        piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
        uVar10 = 4;
        uVar8 = 0;
        puVar7 = &(*(undefined4 *)(gen_frame + 0x0));
        uVar6 = 4;
        uVar5 = 8;
        pvVar3 = this;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
        uVar1 = F_008668b0(this_00 GEN_EDX_ARG,uVar5,uVar6,puVar7,pvVar3,uVar8,uVar9,uVar10);
        *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
        this_01 = &(*(uint *)(gen_frame + 0x20));
        iVar4 = 3;
        do {
          this_01 = this_01 - 2;
          uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
          iVar4 = iVar4 - 1;
        } while (-1 < iVar4);
        return uVar1;
      }
    }
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x54)));
  } while (pvVar3 != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))));
  return uVar1;
}

/* ref: FUN_00742a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00742a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x742a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  uint * this_01;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  uVar1 = param_2;
  if (pvVar3 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
    return param_2;
  }
  do {
    if (param_3 == pvVar3) {
      F_0042ccf0(pvVar3 GEN_EDX_FWD,param_2);
      *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + 1;
      uVar1 = (*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54;
      if (uVar1 <= *((uint *)GEN_TOP(((int)this + 0x28)))) {
        uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        uVar1 = F_0042a990(uVar9 GEN_EDX_ARG);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,6);
        (*(uint *)(gen_frame + 0x4)) = uVar1;
        uVar1 = F_0042a990(*((int *)GEN_TOP(((int)this + 0x18))) + 0x54 GEN_EDX_ARG);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,6);
        (*(uint *)(gen_frame + 0xc)) = uVar1;
        uVar1 = F_0042a990(*((int *)GEN_TOP(((int)this + 0x18))) + 0xa8 GEN_EDX_ARG);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
        (*(uint *)(gen_frame + 0x14)) = uVar1;
        uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
        (*(undefined4 *)(gen_frame + 0x1c)) = uVar9;
        piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
        uVar10 = 4;
        uVar8 = 0;
        puVar7 = &(*(undefined4 *)(gen_frame + 0x0));
        uVar6 = 4;
        uVar5 = 9;
        pvVar3 = this;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
        uVar1 = F_008668b0(this_00 GEN_EDX_ARG,uVar5,uVar6,puVar7,pvVar3,uVar8,uVar9,uVar10);
        *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
        this_01 = &(*(uint *)(gen_frame + 0x20));
        iVar4 = 3;
        do {
          this_01 = this_01 - 2;
          uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
          iVar4 = iVar4 - 1;
        } while (-1 < iVar4);
        return uVar1;
      }
    }
    pvVar3 = ((undefined *)GEN_TOP(((int)pvVar3 + 0x54)));
  } while (pvVar3 != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))));
  return uVar1;
}

/* ref: FUN_00742bb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00742bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x742bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int in_ecx;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  
  pvVar6 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (pvVar6 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
    return;
  }
  do {
    if (param_3 == pvVar6) {
      F_0042ccf0(pvVar6 GEN_EDX_FWD,param_2);
      *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + 1;
      if ((uint)((*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54) <=
          *((uint *)GEN_TOP(((int)this + 0x28)))) {
        piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar17 = *((undefined1 *)GEN_TOP(((int)this + 0x34)));
        uVar7 = *((int *)GEN_TOP(((int)this + 0x2c))) == 0;
        uVar14 = *((undefined1 *)GEN_TOP(((int)this + 0x36)));
        in_ecx = *((int *)GEN_TOP(((int)this + 0x18)));
        uVar16 = 0;
        uVar15 = *((undefined1 *)GEN_TOP(((int)this + 0x35)));
        uVar12 = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
        uVar9 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
        uVar13 = 0;
        uVar11 = 0;
        uVar10 = 4;
        uVar8 = 0;
        pvVar6 = this;
        uVar2 = F_0042a990(in_ecx + 0xa8 GEN_EDX_ARG);
        uVar3 = F_0042a990(in_ecx + 0x54 GEN_EDX_ARG);
        uVar4 = F_0042a990(in_ecx GEN_EDX_ARG);
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
        uVar2 = F_00866a60(uVar5 GEN_EDX_ARG,uVar4,uVar3,uVar2,pvVar6,uVar8,uVar7,uVar9,uVar10,uVar11,uVar12,
                             uVar13,uVar14,uVar15,uVar16,uVar17);
        *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
        return;
      }
    }
    pvVar6 = ((undefined *)GEN_TOP(((int)pvVar6 + 0x54)));
  } while (pvVar6 != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))));
  return;
}

/* ref: FUN_00742c80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00742c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x742c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  int in_ecx;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  
  pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (pvVar7 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
    return;
  }
  do {
    if (param_3 == pvVar7) {
      F_0042ccf0(pvVar7 GEN_EDX_FWD,param_2);
      *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + 1;
      if ((uint)((*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54) <=
          *((uint *)GEN_TOP(((int)this + 0x28)))) {
        piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar14 = *((undefined1 *)GEN_TOP(((int)this + 0x30)));
        in_ecx = *((int *)GEN_TOP(((int)this + 0x18)));
        uVar17 = 0;
        uVar16 = 0;
        uVar15 = 0;
        uVar2 = F_0042a990(in_ecx + 0xfc GEN_EDX_ARG);
        uVar8 = *((int *)GEN_TOP(((int)this + 0x2c))) != 0;
        uVar10 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 4;
        uVar9 = 0;
        pvVar7 = this;
        uVar3 = F_0042a990(in_ecx + 0xa8 GEN_EDX_ARG);
        uVar4 = F_0042a990(in_ecx + 0x54 GEN_EDX_ARG);
        uVar5 = F_0042a990(in_ecx GEN_EDX_ARG);
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
        uVar2 = F_00866a60(uVar6 GEN_EDX_ARG,uVar5,uVar4,uVar3,pvVar7,uVar9,uVar8,uVar10,uVar11,uVar12,uVar13,
                             uVar2,uVar14,uVar15,uVar16,uVar17);
        *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
        return;
      }
    }
    pvVar7 = ((undefined *)GEN_TOP(((int)pvVar7 + 0x54)));
  } while (pvVar7 != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))));
  return;
}

/* ref: FUN_00742d50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00742d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x742d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (pvVar7 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
    return;
  }
  do {
    if (param_3 == pvVar7) {
      piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
      uVar6 = (uint)(*((int *)GEN_TOP(((int)this + 0x28))) == 0);
      uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_0043bb40(pvVar3 GEN_EDX_ARG,uVar2,uVar6);
      F_0042e430(pvVar7 GEN_EDX_ARG,uVar2);
      *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + 1;
      if ((uint)((*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54) <=
          *((uint *)GEN_TOP(((int)this + 0x28)))) {
        iVar8 = (*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54;
        uVar2 = iVar8 + 3;
        uVar6 = -(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 8);
        puVar4 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0,0)));
        if (puVar4 == ((uint *)GEN_TOP(0x0))) {
          param_3 = ((uint *)GEN_TOP(0x0));
        }
        else {
          *puVar4 = uVar2;
          param_3 = puVar4 + 1;
          puVar4 = param_3;
          for (iVar8 = iVar8 + 2; -1 < iVar8; iVar8 = iVar8 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 2;
          }
        }
        uVar6 = F_0042a990(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
        F_005a2710(param_3 + 4 GEN_EDX_ARG,6);
        param_3[5] = uVar6;
        uVar6 = 1;
        if (1 < (uint)((*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54)) {
          param_2 = 0x54;
          puVar4 = param_3 + 8;
          do {
            uVar5 = F_0042a990(*((int *)GEN_TOP(((int)this + 0x18))) + param_2 GEN_EDX_ARG);
            F_005a2710(puVar4 GEN_EDX_ARG,6);
            param_2 = param_2 + 0x54;
            puVar4[1] = uVar5;
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 2;
          } while (uVar6 < (uint)((*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54))
          ;
        }
        uVar12 = 4;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0xc;
        puVar4 = param_3;
        pvVar7 = this;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG)));
        uVar2 = F_008668b0(pvVar3 GEN_EDX_ARG,uVar9,uVar2,puVar4,pvVar7,uVar10,uVar11,uVar12);
        *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
        if (param_3 == ((uint *)GEN_TOP(0x0))) {
          return;
        }
        uVar2 = param_3[-1];
        puVar4 = param_3 + uVar2 * 2;
        while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
          puVar4 = puVar4 - 2;
          F_005a2670(puVar4 GEN_EDX_ARG);
        }
        F_00406b30(param_3 - 1);
        return;
      }
    }
    pvVar7 = ((undefined *)GEN_TOP(((int)pvVar7 + 0x54)));
    if (pvVar7 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
      return;
    }
  } while( true );
}

/* ref: FUN_00742f50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00742f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x742f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  pvVar8 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (pvVar8 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
    return;
  }
  do {
    if (param_3 == pvVar8) {
      piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
      uVar6 = (uint)(*((int *)GEN_TOP(((int)this + 0x48))) == 0);
      uVar2 = F_0042a990(param_2 GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_0043bb40(pvVar3 GEN_EDX_ARG,uVar2,uVar6);
      F_0042e430(pvVar8 GEN_EDX_ARG,uVar2);
      *((int *)GEN_TOP(((int)this + 0x48))) = *((int *)GEN_TOP(((int)this + 0x48))) + 1;
      if ((uint)((*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54) <=
          *((uint *)GEN_TOP(((int)this + 0x48)))) {
        uVar6 = *((int *)GEN_TOP(((int)this + 0x2c))) - *((int *)GEN_TOP(((int)this + 0x28))) >> 2;
        uVar2 = uVar6 * 3 + 6;
        uVar7 = -(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 8);
        puVar4 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar7) | uVar7 + 4,0,0)));
        if (puVar4 == ((uint *)GEN_TOP(0x0))) {
          param_3 = ((uint *)GEN_TOP(0x0));
        }
        else {
          *puVar4 = uVar2;
          param_3 = puVar4 + 1;
          puVar4 = param_3;
          for (iVar9 = uVar6 * 3 + 5; -1 < iVar9; iVar9 = iVar9 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 2;
          }
        }
        uVar7 = F_0042a990(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
        F_005a2710(param_3 + 6 GEN_EDX_ARG,6);
        param_3[7] = uVar7;
        uVar7 = 0;
        if (uVar6 != 0) {
          param_2 = 0;
          puVar4 = param_3 + 0xf;
          do {
            uVar5 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + uVar7 * 4)));
            F_005a2710(puVar4 - 3 GEN_EDX_ARG,3);
            puVar4[-2] = uVar5;
            uVar5 = F_0042a990(param_2 + 0x54 + *((int *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
            F_005a2710(puVar4 - 1 GEN_EDX_ARG,6);
            *puVar4 = uVar5;
            uVar5 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + uVar7 * 4)));
            F_005a2710(puVar4 + 1 GEN_EDX_ARG,3);
            param_2 = param_2 + 0x54;
            puVar4[2] = uVar5;
            uVar7 = uVar7 + 1;
            puVar4 = puVar4 + 6;
          } while (uVar7 < uVar6);
        }
        uVar13 = 4;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0x28;
        puVar4 = param_3;
        pvVar8 = this;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG)));
        uVar2 = F_008668b0(pvVar3 GEN_EDX_ARG,uVar10,uVar2,puVar4,pvVar8,uVar11,uVar12,uVar13);
        *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
        if (param_3 == ((uint *)GEN_TOP(0x0))) {
          return;
        }
        uVar2 = param_3[-1];
        puVar4 = param_3 + uVar2 * 2;
        while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
          puVar4 = puVar4 - 2;
          F_005a2670(puVar4 GEN_EDX_ARG);
        }
        F_00406b30(param_3 - 1);
        return;
      }
    }
    pvVar8 = ((undefined *)GEN_TOP(((int)pvVar8 + 0x54)));
    if (pvVar8 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
      return;
    }
  } while( true );
}

/* ref: FUN_00743150 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00743150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x743150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  uint * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  uint * this_01;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pvVar5 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (pvVar5 == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
    return;
  }
  do {
    if (param_3 == pvVar5) {
      F_0042ccf0(pvVar5 GEN_EDX_FWD,param_2);
      *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + 1;
      if ((uint)((*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54) <=
          *((uint *)GEN_TOP(((int)this + 0x28)))) {
        uVar3 = (*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54;
        uVar4 = -(uint)((int)((ulonglong)uVar3 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 8);
        puVar1 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar4) | uVar4 + 4,0,0)));
        if (puVar1 == ((uint *)GEN_TOP(0x0))) {
          this_01 = ((uint *)GEN_TOP(0x0));
        }
        else {
          this_01 = puVar1 + 1;
          *puVar1 = uVar3;
          puVar1 = this_01;
          uVar4 = uVar3;
          while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
            *puVar1 = 0;
            puVar1 = puVar1 + 2;
          }
        }
        uVar4 = F_0042a990(*((undefined4 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
        F_005a2710(this_01 GEN_EDX_ARG,6);
        this_01[1] = uVar4;
        uVar4 = F_0042a990(*((int *)GEN_TOP(((int)this + 0x18))) + 0x54 GEN_EDX_ARG);
        F_005a2710(this_01 + 2 GEN_EDX_ARG,6);
        this_01[3] = uVar4;
        param_2 = 2;
        if (2 < (uint)((*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54)) {
          param_3 = ((undefined *)GEN_TOP(0xa8));
          puVar1 = this_01 + 4;
          do {
            uVar4 = F_0042a990(*((int *)GEN_TOP(((int)this + 0x18))) + (int)param_3 GEN_EDX_ARG);
            F_005a2710(puVar1 GEN_EDX_ARG,6);
            param_2 = param_2 + 1;
            param_3 = ((undefined *)GEN_TOP(((int)param_3 + 0x54)));
            puVar1[1] = uVar4;
            puVar1 = puVar1 + 2;
          } while (param_2 < (uint)((*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18)))) / 0x54
                                   ));
        }
        piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar9 = 4;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0xd;
        puVar1 = this_01;
        pvVar5 = this;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG)));
        uVar3 = F_008668b0(this_00 GEN_EDX_ARG,uVar6,uVar3,puVar1,pvVar5,uVar7,uVar8,uVar9);
        *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
        uVar3 = this_01[-1];
        puVar1 = this_01 + uVar3 * 2;
        while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
          puVar1 = puVar1 - 2;
          F_005a2670(puVar1 GEN_EDX_ARG);
        }
        F_00406b30(this_01 - 1);
        return;
      }
    }
    pvVar5 = ((undefined *)GEN_TOP(((int)pvVar5 + 0x54)));
  } while (pvVar5 != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))));
  return;
}

/* ref: Client::Game::Event::LuaCharacter::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743310(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (*((char *)GEN_TOP(param_1[2])) != '\0') {
    uVar1 = F_0042a990(param_1 + 2 GEN_EDX_FWD);
    F_00a023f0(((undefined *)GEN_TOP(param_1[0x17])) GEN_EDX_ARG,uVar1);
  }
  F_0042c880(param_1 + 2 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::LuaNpc::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743360(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (*((char *)GEN_TOP(param_1[2])) != '\0') {
    uVar1 = F_0042a990(param_1 + 2 GEN_EDX_FWD);
    F_00a023f0(((undefined *)GEN_TOP(param_1[0x17])) GEN_EDX_ARG,uVar1);
  }
  F_0042c880(param_1 + 2 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::LuaEventNpc::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007433b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7433b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (*((char *)GEN_TOP(param_1[2])) != '\0') {
    uVar1 = F_0042a990(param_1 + 2 GEN_EDX_FWD);
    F_00a023f0(((undefined *)GEN_TOP(param_1[0x17])) GEN_EDX_ARG,uVar1);
  }
  F_0042c880(param_1 + 2 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::LuaBattleNpc::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743400(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (*((char *)GEN_TOP(param_1[2])) != '\0') {
    uVar1 = F_0042a990(param_1 + 2 GEN_EDX_FWD);
    F_00a023f0(((undefined *)GEN_TOP(param_1[0x17])) GEN_EDX_ARG,uVar1);
  }
  F_0042c880(param_1 + 2 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::LuaRetainer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743450(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (*((char *)GEN_TOP(param_1[2])) != '\0') {
    uVar1 = F_0042a990(param_1 + 2 GEN_EDX_FWD);
    F_00a023f0(((undefined *)GEN_TOP(param_1[0x17])) GEN_EDX_ARG,uVar1);
  }
  F_0042c880(param_1 + 2 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Game::Event::LuaPc::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007434a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7434a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (*((char *)GEN_TOP(param_1[2])) != '\0') {
    uVar1 = F_0042a990(param_1 + 2 GEN_EDX_FWD);
    F_00a023f0(((undefined *)GEN_TOP(param_1[0x17])) GEN_EDX_ARG,uVar1);
  }
  F_0042c880(param_1 + 2 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_007434f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007434f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7434f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743520 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00743520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x743520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
  while (cVar1 == '\0') {
    F_0073ba30(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x14,800);
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

/* ref: FUN_00743580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00743580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x743580u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_007435c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007435c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7435c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_007435e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007435e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7435e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_007435f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007435f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7435f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743620 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00743620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x743620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_0073bb60(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,800);
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

/* ref: FUN_00743680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x743680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_007436f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007436f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7436f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743730 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00743730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x743730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x21)));
  while (cVar1 == '\0') {
    F_0073bc00(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x28,0x322);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x21)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00743790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x743790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_007325b0(this GEN_EDX_FWD,param_2);
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

/* ref: FUN_007437f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007437f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7437f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00743830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x743830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  F_00c46e20(param_2,param_2 + 4,(*((int *)GEN_TOP(((int)this + 4))) - (param_2 + 4) >> 2) * 4);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00743870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_007438c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007438c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7438c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_007438e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007438e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x7438e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00743930 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00743930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x743930u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00743970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x743970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  F_00c46e20(param_2,param_2 + 4,(*((int *)GEN_TOP(((int)this + 4))) - (param_2 + 4) >> 2) * 4);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_007439d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007439d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7439d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0073bdc0(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00743a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x743a40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00743a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x743a60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00743a80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00743a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x743a80u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00743ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743ae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x743b10u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x31))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00724ce0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x31))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x31))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x31))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0xc];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0xc))) = (char)piVar3[0xc];
      *(char *)(piVar3 + 0xc) = (char)iVar1;
      goto LAB_00743c2a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x31))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x31))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00722940(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x31))) == '\0') {
      uVar5 = F_00722920(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00743c2a: ;
  if ((char)piVar3[0xc] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0xc] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0xc] == '\0') {
            *(undefined1 *)(piVar6 + 0xc) = 1;
            *(undefined1 *)(piVar4 + 0xc) = 0;
            F_0073bf10(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x31))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x30))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x30))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x30))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x30))) = 1;
                *(undefined1 *)(piVar6 + 0xc) = 0;
                F_00731230(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0xc) = (char)piVar4[0xc];
              *(undefined1 *)(piVar4 + 0xc) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x30))) = 1;
              F_0073bf10(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00743ce8: ;
            *(undefined1 *)(piVar6 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar6[0xc] == '\0') {
            *(undefined1 *)(piVar6 + 0xc) = 1;
            *(undefined1 *)(piVar4 + 0xc) = 0;
            F_00731230(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x31))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x30))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x30))) == '\x01'))
            goto LAB_00743ce8;
            if (*((char *)GEN_TOP((*piVar6 + 0x30))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x30))) = 1;
              *(undefined1 *)(piVar6 + 0xc) = 0;
              F_0073bf10(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0xc) = (char)piVar4[0xc];
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x30))) = 1;
            F_00731230(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0xc) = 1;
  }
  F_00429760(piVar3,0x38,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00743da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743da0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00743db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743db0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00743e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743e00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00743e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743e10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00743e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743e30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743e50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x743e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00743e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00743e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x743e60u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x19))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00723110(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x19))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[6];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 6))) = (char)piVar3[6];
      *(char *)(piVar3 + 6) = (char)iVar1;
      goto LAB_00743f7a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00722ab0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
      uVar5 = F_00722a90(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00743f7a: ;
  if ((char)piVar3[6] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[6] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_0073c070(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x18))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x18))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x18))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x18))) = 1;
                *(undefined1 *)(piVar6 + 6) = 0;
                F_007312d0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 6) = (char)piVar4[6];
              *(undefined1 *)(piVar4 + 6) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x18))) = 1;
              F_0073c070(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00744038: ;
            *(undefined1 *)(piVar6 + 6) = 0;
          }
        }
        else {
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_007312d0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x18))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x18))) == '\x01'))
            goto LAB_00744038;
            if (*((char *)GEN_TOP((*piVar6 + 0x18))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x18))) = 1;
              *(undefined1 *)(piVar6 + 6) = 0;
              F_0073c070(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 6) = (char)piVar4[6];
            *(undefined1 *)(piVar4 + 6) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x18))) = 1;
            F_007312d0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 6) = 1;
  }
  F_00429760(piVar3,0x1c,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_007440c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007440c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7440c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
  while (cVar1 == '\0') {
    F_0073c030(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x1c,800);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x19)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00744120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x744150u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x1d))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00724c40(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x1d))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x1d))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x1d))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[7];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 7))) = (char)piVar3[7];
      *(char *)(piVar3 + 7) = (char)iVar1;
      goto LAB_0074426a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x1d))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x1d))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00722ba0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x1d))) == '\0') {
      uVar5 = F_00722b80(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0074426a: ;
  if ((char)piVar3[7] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[7] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[7] == '\0') {
            *(undefined1 *)(piVar6 + 7) = 1;
            *(undefined1 *)(piVar4 + 7) = 0;
            F_0073c130(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x1d))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x1c))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x1c))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x1c))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x1c))) = 1;
                *(undefined1 *)(piVar6 + 7) = 0;
                F_00731360(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 7) = (char)piVar4[7];
              *(undefined1 *)(piVar4 + 7) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x1c))) = 1;
              F_0073c130(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00744328: ;
            *(undefined1 *)(piVar6 + 7) = 0;
          }
        }
        else {
          if ((char)piVar6[7] == '\0') {
            *(undefined1 *)(piVar6 + 7) = 1;
            *(undefined1 *)(piVar4 + 7) = 0;
            F_00731360(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x1d))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x1c))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x1c))) == '\x01'))
            goto LAB_00744328;
            if (*((char *)GEN_TOP((*piVar6 + 0x1c))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x1c))) = 1;
              *(undefined1 *)(piVar6 + 7) = 0;
              F_0073c130(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 7) = (char)piVar4[7];
            *(undefined1 *)(piVar4 + 7) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x1c))) = 1;
            F_00731360(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 7) = 1;
  }
  F_00429760(piVar3,0x20,800);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_007443b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007443b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7443b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x1d)));
  while (cVar1 == '\0') {
    F_0073c0f0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x20,800);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x1d)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00744410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x744460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x21))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(byte *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && (*(byte *)(puVar3 + 3) <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_007444d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007444d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7444d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x21))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(byte *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x21))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && (*(byte *)(puVar3 + 3) <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00744540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_007445a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007445a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7445a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 8))) - iVar1 >> 1) * 2,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_007445e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007445e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7445e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_007445f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007445f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7445f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x9d))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x9d))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && (*(ushort *)(puVar3 + 3) <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00744670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x744670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x9d))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x9d))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && (*(ushort *)(puVar3 + 3) <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00744700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x744700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_007262e0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FormatStringCallback_VSelectOkCallback_Event_Game_Client_Event::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00742960(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FormatStringCallback_VSelectYesNoCallback_Event_Game_Client_Event::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00742a70(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FormatStringCallback_VSelectYesNoCountCallback_Event_Game_Client_Event::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00744740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00742bb0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,param_3);
  return;
}

/* ref: FormatStringCallback_VSelectYesNoCheckCallback_Event_Game_Client_Event::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00744750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00742c80(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,param_3);
  return;
}

/* ref: FormatStringCallback_VSelectStringCallback_Event_Game_Client_Event::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00744760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00742d50(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,param_3);
  return;
}

/* ref: FormatStringCallback_VSelectIconStringCallback_Event_Game_Client_Event::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00744770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00742f50(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,param_3);
  return;
}

/* ref: FormatStringCallback_VSelectListCallback_Event_Game_Client_Event::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00744780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744780u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00743150(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,param_3);
  return;
}

/* ref: FUN_00744790 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00744790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x744790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00732c10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007447a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007447a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7447a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00732c70(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007447b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007447b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x7447b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3 * -0xb8;
  return (uint)param_2;
}

/* ref: FUN_007447d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007447d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7447d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00732de0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007447e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007447e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7447e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00732eb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007447f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007447f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7447f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0073c6c0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00744810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00744810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x744810u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00744850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x744850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  F_00c46e20(param_2,param_2 + 4,(*((int *)GEN_TOP(((int)this + 4))) - (param_2 + 4) >> 2) * 4);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00744890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_007448b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007448b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7448b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_007448c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007448c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7448c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00732f60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007448d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007448d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7448d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_0073c850(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,800);
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

/* ref: FUN_00744930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744930(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00744960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x744960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00733140(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00744970 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00744970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x744970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00731fb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00744980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_007449a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007449a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x7449a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_007449f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007449f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7449f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0073cae0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00744a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744a50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00743520(this GEN_EDX_FWD);
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
    F_0073cbb0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00744af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x744af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0073ce10(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00744b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x744b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00744a50(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00744b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744b30u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00744b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744b90u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00744bf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00744bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x744bf0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00744c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744c30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744c50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x744c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00744cb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x744cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0xbd))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0xbd))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00744cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00744d40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00744d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x744d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 8))) - iVar1,0x323);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00744dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00743620(this GEN_EDX_FWD);
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
    F_0073cfe0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00744e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x744e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00744ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x744ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0073d240(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00744ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x744ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00744dc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00744f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x744f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x19))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x19))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00744fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00744fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x744fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00743730(this GEN_EDX_FWD);
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
    F_0073d3a0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00745040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00732600(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00745060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0073d600(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00745080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x745080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00744fa0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_007450a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007450a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x7450a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00745140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
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

/* ref: FUN_00745180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00745180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x745180u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0x10,800);
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

/* ref: FUN_00745200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x745200u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_007452a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_007452a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x7452a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar4 != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      uVar3 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
      if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar3) {
        uVar3 = uVar3 - *((uint *)GEN_TOP(((int)this + 8)));
      }
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar3 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,0);
      piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar4 != 0) {
    iVar4 = iVar4 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar4 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar4 * 4))),0x30,800);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar5 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,800);
    uVar3 = (uint)uVar5;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00745380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_007453c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007453c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7453c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00745440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x31))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[4] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x31))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00745480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00429760(param_2,0x1c,800);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00745550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x745550u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_007440c0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x19))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x19))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x19)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x19)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x19)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x19)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00743e60(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_007455f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007455f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7455f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0073d9b0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00745610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x745610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00745550(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00745670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x1d))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x1d))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x1d))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x1d))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x1d))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x1d))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00745750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x89))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[4] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x89))) != '\0') && (*param_2 < (uint)puVar1[4])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x89))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x89))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x89))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[4]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x89))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_007458c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007458c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7458c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x2cd))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x2cd))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00745900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0073dba0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00745920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x745920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 1) * 2;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_007459d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_007459d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x7459d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x101))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x101))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00745a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0073dcb0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00745a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0073dda0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00745aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745aa0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00745ae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00745ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x745ae0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00745b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x21))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if (*(byte *)(puVar1 + 3) < *param_2) {
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

/* ref: FUN_00745bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745bd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00745ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x6d))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x6d))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00745d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00745d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x745d20u, gen_a0, gen_a1, gen_a2, 0u);
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

